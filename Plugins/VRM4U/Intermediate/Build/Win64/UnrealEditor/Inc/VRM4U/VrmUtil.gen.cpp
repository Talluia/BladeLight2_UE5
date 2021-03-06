// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4U/Public/VrmUtil.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrmUtil() {}
// Cross Module References
	VRM4U_API UEnum* Z_Construct_UEnum_VRM4U_EVRMImportTextureCompressType();
	UPackage* Z_Construct_UPackage__Script_VRM4U();
	VRM4U_API UEnum* Z_Construct_UEnum_VRM4U_EVRMImportMaterialType();
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FImportOptionData();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
// End Cross Module References
	static UEnum* EVRMImportTextureCompressType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VRM4U_EVRMImportTextureCompressType, Z_Construct_UPackage__Script_VRM4U(), TEXT("EVRMImportTextureCompressType"));
		}
		return Singleton;
	}
	template<> VRM4U_API UEnum* StaticEnum<EVRMImportTextureCompressType>()
	{
		return EVRMImportTextureCompressType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVRMImportTextureCompressType(EVRMImportTextureCompressType_StaticEnum, TEXT("/Script/VRM4U"), TEXT("EVRMImportTextureCompressType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VRM4U_EVRMImportTextureCompressType_Hash() { return 2156431400U; }
	UEnum* Z_Construct_UEnum_VRM4U_EVRMImportTextureCompressType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VRM4U();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVRMImportTextureCompressType"), 0, Get_Z_Construct_UEnum_VRM4U_EVRMImportTextureCompressType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UECodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVRMImportTextureCompressType::VRMITC_Auto", (int64)EVRMImportTextureCompressType::VRMITC_Auto },
				{ "EVRMImportTextureCompressType::VRMITC_DXT1", (int64)EVRMImportTextureCompressType::VRMITC_DXT1 },
				{ "EVRMImportTextureCompressType::VRMITC_BC7", (int64)EVRMImportTextureCompressType::VRMITC_BC7 },
				{ "EVRMImportTextureCompressType::VRMITC_NoCompression", (int64)EVRMImportTextureCompressType::VRMITC_NoCompression },
				{ "EVRMImportTextureCompressType::VRMITC_MAX", (int64)EVRMImportTextureCompressType::VRMITC_MAX },
			};
#if WITH_METADATA
			const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/VrmUtil.h" },
				{ "VRMITC_Auto.DisplayName", "Auto(DXT1)" },
				{ "VRMITC_Auto.Name", "EVRMImportTextureCompressType::VRMITC_Auto" },
				{ "VRMITC_BC7.DisplayName", "BC7" },
				{ "VRMITC_BC7.Name", "EVRMImportTextureCompressType::VRMITC_BC7" },
				{ "VRMITC_DXT1.DisplayName", "DXT1" },
				{ "VRMITC_DXT1.Name", "EVRMImportTextureCompressType::VRMITC_DXT1" },
				{ "VRMITC_MAX.Name", "EVRMImportTextureCompressType::VRMITC_MAX" },
				{ "VRMITC_NoCompression.DisplayName", "NoCompression" },
				{ "VRMITC_NoCompression.Name", "EVRMImportTextureCompressType::VRMITC_NoCompression" },
			};
#endif
			static const UECodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VRM4U,
				nullptr,
				"EVRMImportTextureCompressType",
				"EVRMImportTextureCompressType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UECodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UECodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EVRMImportMaterialType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VRM4U_EVRMImportMaterialType, Z_Construct_UPackage__Script_VRM4U(), TEXT("EVRMImportMaterialType"));
		}
		return Singleton;
	}
	template<> VRM4U_API UEnum* StaticEnum<EVRMImportMaterialType>()
	{
		return EVRMImportMaterialType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVRMImportMaterialType(EVRMImportMaterialType_StaticEnum, TEXT("/Script/VRM4U"), TEXT("EVRMImportMaterialType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VRM4U_EVRMImportMaterialType_Hash() { return 303137337U; }
	UEnum* Z_Construct_UEnum_VRM4U_EVRMImportMaterialType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VRM4U();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVRMImportMaterialType"), 0, Get_Z_Construct_UEnum_VRM4U_EVRMImportMaterialType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UECodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVRMImportMaterialType::VRMIMT_Auto", (int64)EVRMImportMaterialType::VRMIMT_Auto },
				{ "EVRMImportMaterialType::VRMIMT_MToon", (int64)EVRMImportMaterialType::VRMIMT_MToon },
				{ "EVRMImportMaterialType::VRMIMT_MToonUnlit", (int64)EVRMImportMaterialType::VRMIMT_MToonUnlit },
				{ "EVRMImportMaterialType::VRMIMT_SSS", (int64)EVRMImportMaterialType::VRMIMT_SSS },
				{ "EVRMImportMaterialType::VRMIMT_SSSProfile", (int64)EVRMImportMaterialType::VRMIMT_SSSProfile },
				{ "EVRMImportMaterialType::VRMIMT_Unlit", (int64)EVRMImportMaterialType::VRMIMT_Unlit },
				{ "EVRMImportMaterialType::VRMIMT_glTF", (int64)EVRMImportMaterialType::VRMIMT_glTF },
				{ "EVRMImportMaterialType::VRMIMT_Custom", (int64)EVRMImportMaterialType::VRMIMT_Custom },
				{ "EVRMImportMaterialType::VRMIMT_MAX", (int64)EVRMImportMaterialType::VRMIMT_MAX },
			};
#if WITH_METADATA
			const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "// \n//\n" },
				{ "ModuleRelativePath", "Public/VrmUtil.h" },
				{ "VRMIMT_Auto.Comment", "// \n//\n" },
				{ "VRMIMT_Auto.DisplayName", "Auto(MToon Unlit)" },
				{ "VRMIMT_Auto.Name", "EVRMImportMaterialType::VRMIMT_Auto" },
				{ "VRMIMT_Custom.Comment", "// \n//\n" },
				{ "VRMIMT_Custom.DisplayName", "Custom" },
				{ "VRMIMT_Custom.Name", "EVRMImportMaterialType::VRMIMT_Custom" },
				{ "VRMIMT_glTF.Comment", "// \n//\n" },
				{ "VRMIMT_glTF.DisplayName", "PBR(glTF2)" },
				{ "VRMIMT_glTF.Name", "EVRMImportMaterialType::VRMIMT_glTF" },
				{ "VRMIMT_MAX.Comment", "// \n//\n" },
				{ "VRMIMT_MAX.Name", "EVRMImportMaterialType::VRMIMT_MAX" },
				{ "VRMIMT_MToon.Comment", "// \n//\n" },
				{ "VRMIMT_MToon.DisplayName", "MToon Lit" },
				{ "VRMIMT_MToon.Name", "EVRMImportMaterialType::VRMIMT_MToon" },
				{ "VRMIMT_MToonUnlit.Comment", "// \n//\n" },
				{ "VRMIMT_MToonUnlit.DisplayName", "MToon Unlit" },
				{ "VRMIMT_MToonUnlit.Name", "EVRMImportMaterialType::VRMIMT_MToonUnlit" },
				{ "VRMIMT_SSS.Comment", "// \n//\n" },
				{ "VRMIMT_SSS.DisplayName", "Subsurface" },
				{ "VRMIMT_SSS.Name", "EVRMImportMaterialType::VRMIMT_SSS" },
				{ "VRMIMT_SSSProfile.Comment", "// \n//\n" },
				{ "VRMIMT_SSSProfile.DisplayName", "Subsurface Profile" },
				{ "VRMIMT_SSSProfile.Name", "EVRMImportMaterialType::VRMIMT_SSSProfile" },
				{ "VRMIMT_Unlit.Comment", "// \n//\n" },
				{ "VRMIMT_Unlit.DisplayName", "Unlit" },
				{ "VRMIMT_Unlit.Name", "EVRMImportMaterialType::VRMIMT_Unlit" },
			};
#endif
			static const UECodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VRM4U,
				nullptr,
				"EVRMImportMaterialType",
				"EVRMImportMaterialType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UECodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UECodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FImportOptionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VRM4U_API uint32 Get_Z_Construct_UScriptStruct_FImportOptionData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FImportOptionData, Z_Construct_UPackage__Script_VRM4U(), TEXT("ImportOptionData"), sizeof(FImportOptionData), Get_Z_Construct_UScriptStruct_FImportOptionData_Hash());
	}
	return Singleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FImportOptionData>()
{
	return FImportOptionData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FImportOptionData(FImportOptionData::StaticStruct, TEXT("/Script/VRM4U"), TEXT("ImportOptionData"), false, nullptr, nullptr);
static struct FScriptStruct_VRM4U_StaticRegisterNativesFImportOptionData
{
	FScriptStruct_VRM4U_StaticRegisterNativesFImportOptionData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ImportOptionData")),new UScriptStruct::TCppStructOps<FImportOptionData>);
	}
} ScriptStruct_VRM4U_StaticRegisterNativesFImportOptionData;
	struct Z_Construct_UScriptStruct_FImportOptionData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_MaterialType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MaterialType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModelScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ModelScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Skeleton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Skeleton;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportOptionData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VrmUtil.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FImportOptionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FImportOptionData>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_MaterialType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_MaterialType_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmUtil.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_MaterialType = { "MaterialType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FImportOptionData, MaterialType), Z_Construct_UEnum_VRM4U_EVRMImportMaterialType, METADATA_PARAMS(Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_MaterialType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_MaterialType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_ModelScale_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmUtil.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_ModelScale = { "ModelScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FImportOptionData, ModelScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_ModelScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_ModelScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_Skeleton_MetaData[] = {
		{ "ModuleRelativePath", "Public/VrmUtil.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FImportOptionData, Skeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_Skeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_Skeleton_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FImportOptionData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_MaterialType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_MaterialType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_ModelScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_Skeleton,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FImportOptionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
		nullptr,
		&NewStructOps,
		"ImportOptionData",
		sizeof(FImportOptionData),
		alignof(FImportOptionData),
		Z_Construct_UScriptStruct_FImportOptionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportOptionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FImportOptionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportOptionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FImportOptionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FImportOptionData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VRM4U();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ImportOptionData"), sizeof(FImportOptionData), Get_Z_Construct_UScriptStruct_FImportOptionData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FImportOptionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FImportOptionData_Hash() { return 2137804221U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
