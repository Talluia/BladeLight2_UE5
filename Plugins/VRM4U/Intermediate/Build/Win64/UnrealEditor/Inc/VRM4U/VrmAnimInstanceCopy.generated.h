// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class UVrmMetaObject;
class UVrmAssetListObject;
class USkeletalMeshComponent;
class USkinnedMeshComponent;
#ifdef VRM4U_VrmAnimInstanceCopy_generated_h
#error "VrmAnimInstanceCopy.generated.h already included, missing '#pragma once' in VrmAnimInstanceCopy.h"
#endif
#define VRM4U_VrmAnimInstanceCopy_generated_h

#define BladeLight2_UE5_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstanceCopy_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVrmAnimInstanceCopyProxy_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FAnimInstanceProxy Super;


template<> VRM4U_API UScriptStruct* StaticStruct<struct FVrmAnimInstanceCopyProxy>();

#define BladeLight2_UE5_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstanceCopy_h_53_SPARSE_DATA
#define BladeLight2_UE5_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstanceCopy_h_53_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetVrmSpringBoneIgnoreWingBone); \
	DECLARE_FUNCTION(execSetVrmSpringBoneBool); \
	DECLARE_FUNCTION(execSetVrmSpringBoneParam); \
	DECLARE_FUNCTION(execSetSkeletalMeshCopyDataForCustomSpring); \
	DECLARE_FUNCTION(execSetSkeletalMeshCopyData);


#define BladeLight2_UE5_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstanceCopy_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetVrmSpringBoneIgnoreWingBone); \
	DECLARE_FUNCTION(execSetVrmSpringBoneBool); \
	DECLARE_FUNCTION(execSetVrmSpringBoneParam); \
	DECLARE_FUNCTION(execSetSkeletalMeshCopyDataForCustomSpring); \
	DECLARE_FUNCTION(execSetSkeletalMeshCopyData);


#define BladeLight2_UE5_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstanceCopy_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVrmAnimInstanceCopy(); \
	friend struct Z_Construct_UClass_UVrmAnimInstanceCopy_Statics; \
public: \
	DECLARE_CLASS(UVrmAnimInstanceCopy, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/VRM4U"), NO_API) \
	DECLARE_SERIALIZER(UVrmAnimInstanceCopy)


#define BladeLight2_UE5_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstanceCopy_h_53_INCLASS \
private: \
	static void StaticRegisterNativesUVrmAnimInstanceCopy(); \
	friend struct Z_Construct_UClass_UVrmAnimInstanceCopy_Statics; \
public: \
	DECLARE_CLASS(UVrmAnimInstanceCopy, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/VRM4U"), NO_API) \
	DECLARE_SERIALIZER(UVrmAnimInstanceCopy)


#define BladeLight2_UE5_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstanceCopy_h_53_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVrmAnimInstanceCopy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVrmAnimInstanceCopy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVrmAnimInstanceCopy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVrmAnimInstanceCopy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVrmAnimInstanceCopy(UVrmAnimInstanceCopy&&); \
	NO_API UVrmAnimInstanceCopy(const UVrmAnimInstanceCopy&); \
public:


#define BladeLight2_UE5_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstanceCopy_h_53_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVrmAnimInstanceCopy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVrmAnimInstanceCopy(UVrmAnimInstanceCopy&&); \
	NO_API UVrmAnimInstanceCopy(const UVrmAnimInstanceCopy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVrmAnimInstanceCopy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVrmAnimInstanceCopy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVrmAnimInstanceCopy)


#define BladeLight2_UE5_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstanceCopy_h_53_PRIVATE_PROPERTY_OFFSET
#define BladeLight2_UE5_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstanceCopy_h_50_PROLOG
#define BladeLight2_UE5_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstanceCopy_h_53_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BladeLight2_UE5_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstanceCopy_h_53_PRIVATE_PROPERTY_OFFSET \
	BladeLight2_UE5_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstanceCopy_h_53_SPARSE_DATA \
	BladeLight2_UE5_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstanceCopy_h_53_RPC_WRAPPERS \
	BladeLight2_UE5_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstanceCopy_h_53_INCLASS \
	BladeLight2_UE5_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstanceCopy_h_53_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BladeLight2_UE5_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstanceCopy_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BladeLight2_UE5_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstanceCopy_h_53_PRIVATE_PROPERTY_OFFSET \
	BladeLight2_UE5_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstanceCopy_h_53_SPARSE_DATA \
	BladeLight2_UE5_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstanceCopy_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	BladeLight2_UE5_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstanceCopy_h_53_INCLASS_NO_PURE_DECLS \
	BladeLight2_UE5_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstanceCopy_h_53_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class VrmAnimInstanceCopy."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VRM4U_API UClass* StaticClass<class UVrmAnimInstanceCopy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BladeLight2_UE5_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstanceCopy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
