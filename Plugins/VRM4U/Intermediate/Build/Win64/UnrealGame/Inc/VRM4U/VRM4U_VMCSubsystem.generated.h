// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 struct FTransform;
#ifdef VRM4U_VRM4U_VMCSubsystem_generated_h
#error "VRM4U_VMCSubsystem.generated.h already included, missing '#pragma once' in VRM4U_VMCSubsystem.h"
#endif
#define VRM4U_VRM4U_VMCSubsystem_generated_h

#define BladeLight2_UE5_Plugins_VRM4U_Source_VRM4U_Public_VRM4U_VMCSubsystem_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVrmVMC_Data_Statics; \
	VRM4U_API static class UScriptStruct* StaticStruct();


template<> VRM4U_API UScriptStruct* StaticStruct<struct FVrmVMC_Data>();

#define BladeLight2_UE5_Plugins_VRM4U_Source_VRM4U_Public_VRM4U_VMCSubsystem_h_38_SPARSE_DATA
#define BladeLight2_UE5_Plugins_VRM4U_Source_VRM4U_Public_VRM4U_VMCSubsystem_h_38_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetRawData); \
	DECLARE_FUNCTION(execSetBoneTransform); \
	DECLARE_FUNCTION(execGetRawdataByPort); \
	DECLARE_FUNCTION(execGetRawdataByIndex); \
	DECLARE_FUNCTION(execGetBoneByPort); \
	DECLARE_FUNCTION(execGetBoneByIndex); \
	DECLARE_FUNCTION(execClear);


#define BladeLight2_UE5_Plugins_VRM4U_Source_VRM4U_Public_VRM4U_VMCSubsystem_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetRawData); \
	DECLARE_FUNCTION(execSetBoneTransform); \
	DECLARE_FUNCTION(execGetRawdataByPort); \
	DECLARE_FUNCTION(execGetRawdataByIndex); \
	DECLARE_FUNCTION(execGetBoneByPort); \
	DECLARE_FUNCTION(execGetBoneByIndex); \
	DECLARE_FUNCTION(execClear);


#define BladeLight2_UE5_Plugins_VRM4U_Source_VRM4U_Public_VRM4U_VMCSubsystem_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVRM4U_VMCSubsystem(); \
	friend struct Z_Construct_UClass_UVRM4U_VMCSubsystem_Statics; \
public: \
	DECLARE_CLASS(UVRM4U_VMCSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VRM4U"), NO_API) \
	DECLARE_SERIALIZER(UVRM4U_VMCSubsystem)


#define BladeLight2_UE5_Plugins_VRM4U_Source_VRM4U_Public_VRM4U_VMCSubsystem_h_38_INCLASS \
private: \
	static void StaticRegisterNativesUVRM4U_VMCSubsystem(); \
	friend struct Z_Construct_UClass_UVRM4U_VMCSubsystem_Statics; \
public: \
	DECLARE_CLASS(UVRM4U_VMCSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VRM4U"), NO_API) \
	DECLARE_SERIALIZER(UVRM4U_VMCSubsystem)


#define BladeLight2_UE5_Plugins_VRM4U_Source_VRM4U_Public_VRM4U_VMCSubsystem_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVRM4U_VMCSubsystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRM4U_VMCSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRM4U_VMCSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRM4U_VMCSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRM4U_VMCSubsystem(UVRM4U_VMCSubsystem&&); \
	NO_API UVRM4U_VMCSubsystem(const UVRM4U_VMCSubsystem&); \
public:


#define BladeLight2_UE5_Plugins_VRM4U_Source_VRM4U_Public_VRM4U_VMCSubsystem_h_38_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVRM4U_VMCSubsystem() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRM4U_VMCSubsystem(UVRM4U_VMCSubsystem&&); \
	NO_API UVRM4U_VMCSubsystem(const UVRM4U_VMCSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRM4U_VMCSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRM4U_VMCSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVRM4U_VMCSubsystem)


#define BladeLight2_UE5_Plugins_VRM4U_Source_VRM4U_Public_VRM4U_VMCSubsystem_h_38_PRIVATE_PROPERTY_OFFSET
#define BladeLight2_UE5_Plugins_VRM4U_Source_VRM4U_Public_VRM4U_VMCSubsystem_h_35_PROLOG
#define BladeLight2_UE5_Plugins_VRM4U_Source_VRM4U_Public_VRM4U_VMCSubsystem_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BladeLight2_UE5_Plugins_VRM4U_Source_VRM4U_Public_VRM4U_VMCSubsystem_h_38_PRIVATE_PROPERTY_OFFSET \
	BladeLight2_UE5_Plugins_VRM4U_Source_VRM4U_Public_VRM4U_VMCSubsystem_h_38_SPARSE_DATA \
	BladeLight2_UE5_Plugins_VRM4U_Source_VRM4U_Public_VRM4U_VMCSubsystem_h_38_RPC_WRAPPERS \
	BladeLight2_UE5_Plugins_VRM4U_Source_VRM4U_Public_VRM4U_VMCSubsystem_h_38_INCLASS \
	BladeLight2_UE5_Plugins_VRM4U_Source_VRM4U_Public_VRM4U_VMCSubsystem_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BladeLight2_UE5_Plugins_VRM4U_Source_VRM4U_Public_VRM4U_VMCSubsystem_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BladeLight2_UE5_Plugins_VRM4U_Source_VRM4U_Public_VRM4U_VMCSubsystem_h_38_PRIVATE_PROPERTY_OFFSET \
	BladeLight2_UE5_Plugins_VRM4U_Source_VRM4U_Public_VRM4U_VMCSubsystem_h_38_SPARSE_DATA \
	BladeLight2_UE5_Plugins_VRM4U_Source_VRM4U_Public_VRM4U_VMCSubsystem_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	BladeLight2_UE5_Plugins_VRM4U_Source_VRM4U_Public_VRM4U_VMCSubsystem_h_38_INCLASS_NO_PURE_DECLS \
	BladeLight2_UE5_Plugins_VRM4U_Source_VRM4U_Public_VRM4U_VMCSubsystem_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VRM4U_API UClass* StaticClass<class UVRM4U_VMCSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BladeLight2_UE5_Plugins_VRM4U_Source_VRM4U_Public_VRM4U_VMCSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
