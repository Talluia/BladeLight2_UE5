// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4UImporter/Private/AnimGraphNode_VrmQuestHandBone.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_VrmQuestHandBone() {}
// Cross Module References
	VRM4UIMPORTER_API UClass* Z_Construct_UClass_UAnimGraphNode_VrmQuestHandBone_NoRegister();
	VRM4UIMPORTER_API UClass* Z_Construct_UClass_UAnimGraphNode_VrmQuestHandBone();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase();
	UPackage* Z_Construct_UPackage__Script_VRM4UImporter();
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_VrmQuestHandBone();
// End Cross Module References
	void UAnimGraphNode_VrmQuestHandBone::StaticRegisterNativesUAnimGraphNode_VrmQuestHandBone()
	{
	}
	UClass* Z_Construct_UClass_UAnimGraphNode_VrmQuestHandBone_NoRegister()
	{
		return UAnimGraphNode_VrmQuestHandBone::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_VrmQuestHandBone_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_VrmQuestHandBone_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase,
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4UImporter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_VrmQuestHandBone_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimGraphNode_VrmQuestHandBone.h" },
		{ "Keywords", "Modify Transform" },
		{ "ModuleRelativePath", "Private/AnimGraphNode_VrmQuestHandBone.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_VrmQuestHandBone_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Private/AnimGraphNode_VrmQuestHandBone.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_VrmQuestHandBone_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimGraphNode_VrmQuestHandBone, Node), Z_Construct_UScriptStruct_FAnimNode_VrmQuestHandBone, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_VrmQuestHandBone_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_VrmQuestHandBone_Statics::NewProp_Node_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_VrmQuestHandBone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_VrmQuestHandBone_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_VrmQuestHandBone_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_VrmQuestHandBone>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_VrmQuestHandBone_Statics::ClassParams = {
		&UAnimGraphNode_VrmQuestHandBone::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_VrmQuestHandBone_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_VrmQuestHandBone_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_VrmQuestHandBone_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_VrmQuestHandBone_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_VrmQuestHandBone()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimGraphNode_VrmQuestHandBone_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimGraphNode_VrmQuestHandBone, 888710456);
	template<> VRM4UIMPORTER_API UClass* StaticClass<UAnimGraphNode_VrmQuestHandBone>()
	{
		return UAnimGraphNode_VrmQuestHandBone::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimGraphNode_VrmQuestHandBone(Z_Construct_UClass_UAnimGraphNode_VrmQuestHandBone, &UAnimGraphNode_VrmQuestHandBone::StaticClass, TEXT("/Script/VRM4UImporter"), TEXT("UAnimGraphNode_VrmQuestHandBone"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_VrmQuestHandBone);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
