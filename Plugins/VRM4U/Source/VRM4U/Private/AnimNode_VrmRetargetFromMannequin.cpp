// VRM4U Copyright (c) 2021 Haruyoshi Yamamoto. This software is released under the MIT License.

#include "AnimNode_VrmRetargetFromMannequin.h"
#include "AnimationRuntime.h"
#include "Animation/AnimInstanceProxy.h"
#include "Kismet/KismetSystemLibrary.h"
#include "DrawDebugHelpers.h"

#include "VrmMetaObject.h"
#include "VrmUtil.h"

#include <algorithm>
/////////////////////////////////////////////////////
// FAnimNode_ModifyBone

FAnimNode_VrmRetargetFromMannequin::FAnimNode_VrmRetargetFromMannequin() {
}

void FAnimNode_VrmRetargetFromMannequin::UpdateCache(FComponentSpacePoseContext& Output) {

	if (srcMannequinMesh == nullptr){
		srcSkeletalMesh = nullptr;
		return;
	}

	if (srcSkeletalMesh == srcMannequinMesh->SkeletalMesh) {
		return;
	}

	srcSkeletalMesh = srcMannequinMesh->SkeletalMesh;

	if (srcSkeletalMesh == nullptr) return;
	if (dstSkeletalMesh == nullptr) return;

	auto& srcRefSkeleton = VRMGetRefSkeleton(srcSkeletalMesh);
	auto& dstRefSkeleton = VRMGetRefSkeleton(dstSkeletalMesh);

	// ref pose
	const auto& srcRefSkeletonTransform = srcRefSkeleton.GetRefBonePose();
	const auto& dstRefSkeletonTransform = dstRefSkeleton.GetRefBonePose();

	// ref component
	srcRefSkeletonCompTransform = srcRefSkeletonTransform;
	dstRefSkeletonCompTransform = dstRefSkeletonTransform;
	for (int i = 1; i < srcRefSkeletonCompTransform.Num(); ++i) {
		int parent = srcRefSkeleton.GetParentIndex(i);
		srcRefSkeletonCompTransform[i] *= srcRefSkeletonCompTransform[parent];
	}
	for (int i = 1; i < dstRefSkeletonCompTransform.Num(); ++i) {
		int parent = dstRefSkeleton.GetParentIndex(i);
		dstRefSkeletonCompTransform[i] *= dstRefSkeletonCompTransform[parent];
	}

	// current A-pose compTransform
	dstCurrentSkeletonCompTransform = dstRefSkeletonTransform;
	for (int i = 0; i < dstRefSkeletonCompTransform.Num(); ++i) {
		FCompactPoseBoneIndex ii(i);

		auto t = Output.Pose.GetLocalSpaceTransform(ii);
		if (i == 0) {
			dstCurrentSkeletonCompTransform[i] = t;
		} else {
			int parent = dstRefSkeleton.GetParentIndex(i);
			dstCurrentSkeletonCompTransform[i] = t * dstCurrentSkeletonCompTransform[parent];
		}
	}
}

void FAnimNode_VrmRetargetFromMannequin::Initialize_AnyThread(const FAnimationInitializeContext& Context) {
	Super::Initialize_AnyThread(Context);

	dstSkeletalMesh = nullptr;
	srcSkeletalMesh = nullptr;

	if (Context.AnimInstanceProxy == nullptr) return;
	if (Context.AnimInstanceProxy->GetSkelMeshComponent() == nullptr) return;

	dstSkeletalMesh = Context.AnimInstanceProxy->GetSkelMeshComponent()->SkeletalMesh;
	srcSkeletalMesh = nullptr;
}
void FAnimNode_VrmRetargetFromMannequin::CacheBones_AnyThread(const FAnimationCacheBonesContext& Context) {
	Super::CacheBones_AnyThread(Context);

}

#if	UE_VERSION_OLDER_THAN(4,20,0)
#else
void FAnimNode_VrmRetargetFromMannequin::ResetDynamics(ETeleportType InTeleportType) {
	Super::ResetDynamics(InTeleportType);
}
#endif

void FAnimNode_VrmRetargetFromMannequin::UpdateInternal(const FAnimationUpdateContext& Context){
	Super::UpdateInternal(Context);
}


void FAnimNode_VrmRetargetFromMannequin::GatherDebugData(FNodeDebugData& DebugData)
{
	FString DebugLine = DebugData.GetNodeName(this);

	DebugLine += "(";
	AddDebugNodeData(DebugLine);
	//DebugLine += FString::Printf(TEXT(" Target: %s)"), *BoneToModify.BoneName.ToString());
	//DebugLine += FString::Printf(TEXT(" Target: %s)"), *BoneNameToModify.ToString());
	DebugData.AddDebugItem(DebugLine);

	ComponentPose.GatherDebugData(DebugData);
}

void FAnimNode_VrmRetargetFromMannequin::EvaluateComponentPose_AnyThread(FComponentSpacePoseContext& Output) {
	Super::EvaluateComponentPose_AnyThread(Output);
}

void FAnimNode_VrmRetargetFromMannequin::EvaluateSkeletalControl_AnyThread(FComponentSpacePoseContext& Output, TArray<FBoneTransform>& OutBoneTransforms)
{
	check(OutBoneTransforms.Num() == 0);

	UpdateCache(Output);

	if (srcSkeletalMesh == nullptr) return;
	if (dstSkeletalMesh == nullptr) return;

	const UVrmMetaObject* dstMeta = VrmMetaObject;
	if (dstMeta == nullptr) {
		return;
	}

	auto srcSkeletalMeshComp = Cast<USkeletalMeshComponent>(srcMannequinMesh);
	auto srcAsSkinnedMeshComp = srcMannequinMesh;
	if (srcAsSkinnedMeshComp == nullptr) {
		return;
	}

	auto &srcRefSkeleton = VRMGetRefSkeleton(srcAsSkinnedMeshComp->SkeletalMesh);
	auto &dstRefSkeleton = VRMGetRefSkeleton(Output.AnimInstanceProxy->GetSkelMeshComponent()->SkeletalMesh);

	// ref pose
	const auto& dstRefSkeletonTransform = dstRefSkeleton.GetRefBonePose();
	const auto& srcRefSkeletonTransform = srcRefSkeleton.GetRefBonePose();

	int BoneCount = 0;
	for (const auto& t : VRMUtil::vrm_humanoid_bone_list) {
		FName srcName, dstName;
		srcName = dstName = NAME_None;

		++BoneCount;
		{
			for (auto& bonemap : VRMUtil::table_ue4_vrm) {
				if (bonemap.BoneVRM == t) {
					srcName = *bonemap.BoneUE4;
					break;
				}
			}
		}
		if (srcName == NAME_None) {
			continue;
		}

		{
			auto a = dstMeta->humanoidBoneTable.Find(t);
			if (a) {
				dstName = **a;
			}
		}
		if (dstName == NAME_None) {
			continue;
		}

		auto dstIndex = Output.AnimInstanceProxy->GetSkelMeshComponent()->GetBoneIndex(dstName);
		if (dstIndex < 0) {
			continue;
		}
		auto srcIndex = srcAsSkinnedMeshComp->GetBoneIndex(srcName);
		if (srcIndex < 0) {
			continue;
		}
		FCompactPoseBoneIndex srcPoseBoneIndex(srcIndex);
		FCompactPoseBoneIndex dstPoseBoneIndex(dstIndex);


		const auto srcCurrentTrans = srcAsSkinnedMeshComp->GetSocketTransform(srcName, RTS_Component);

		auto modelBone = srcCurrentTrans;
		{
			
			{
				auto dd = Output.Pose.GetComponentSpaceTransform(dstPoseBoneIndex);
				//auto dd = dstCurrentSkeletonCompTransform[dstIndex];
				modelBone.SetLocation(dd.GetLocation());

				if (BoneCount == 1) {
					float s = dd.GetLocation().Z / FMath::Max(1.0f, srcRefSkeletonCompTransform[srcIndex].GetLocation().Z);

					modelBone.SetLocation(
						FMath::Lerp(
							srcCurrentTrans.GetLocation(),		// original location
							srcCurrentTrans.GetLocation() * s,	// scled by height
							CenterLocationScaleByHeightScale)
					);
				}
			}

			modelBone.SetRotation(
				srcCurrentTrans.GetRotation()
				* srcRefSkeletonCompTransform[srcIndex].GetRotation().Inverse()
				* dstCurrentSkeletonCompTransform[dstIndex].GetRotation()
			);

			Output.Pose.SetComponentSpaceTransform(dstPoseBoneIndex, modelBone);
		}
	}
}

bool FAnimNode_VrmRetargetFromMannequin::IsValidToEvaluate(const USkeleton* Skeleton, const FBoneContainer& RequiredBones) 
{
	// if both bones are valid
	//return (BoneToModify.IsValidToEvaluate(RequiredBones));
	return true;
}

void FAnimNode_VrmRetargetFromMannequin::InitializeBoneReferences(const FBoneContainer& RequiredBones) 
{
	//BoneToModify.Initialize(RequiredBones);
}

void FAnimNode_VrmRetargetFromMannequin::ConditionalDebugDraw(FPrimitiveDrawInterface* PDI, USkeletalMeshComponent* PreviewSkelMeshComp, bool bPreviewForeground) const
{
#if WITH_EDITOR

	if (VrmMetaObject == nullptr || PreviewSkelMeshComp == nullptr) {
		return;
	}
	if (PreviewSkelMeshComp->GetWorld() == nullptr) {
		return;
	}
#endif
}
