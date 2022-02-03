// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4U/Public/VRM4U_VMCSubsystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRM4U_VMCSubsystem() {}
// Cross Module References
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FVrmVMC_Data();
	UPackage* Z_Construct_UPackage__Script_VRM4U();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	VRM4U_API UClass* Z_Construct_UClass_UVRM4U_VMCSubsystem_NoRegister();
	VRM4U_API UClass* Z_Construct_UClass_UVRM4U_VMCSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
// End Cross Module References
class UScriptStruct* FVrmVMC_Data::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VRM4U_API uint32 Get_Z_Construct_UScriptStruct_FVrmVMC_Data_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVrmVMC_Data, Z_Construct_UPackage__Script_VRM4U(), TEXT("VrmVMC_Data"), sizeof(FVrmVMC_Data), Get_Z_Construct_UScriptStruct_FVrmVMC_Data_Hash());
	}
	return Singleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FVrmVMC_Data>()
{
	return FVrmVMC_Data::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVrmVMC_Data(FVrmVMC_Data::StaticStruct, TEXT("/Script/VRM4U"), TEXT("VrmVMC_Data"), false, nullptr, nullptr);
static struct FScriptStruct_VRM4U_StaticRegisterNativesFVrmVMC_Data
{
	FScriptStruct_VRM4U_StaticRegisterNativesFVrmVMC_Data()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VrmVMC_Data")),new UScriptStruct::TCppStructOps<FVrmVMC_Data>);
	}
} ScriptStruct_VRM4U_StaticRegisterNativesFVrmVMC_Data;
	struct Z_Construct_UScriptStruct_FVrmVMC_Data_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoneTransform_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_BoneTransform_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneTransform_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_BoneTransform;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RawData_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_RawData_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RawData_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_RawData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVrmVMC_Data_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VRM4U_VMCSubsystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVrmVMC_Data_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVrmVMC_Data>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVrmVMC_Data_Statics::NewProp_BoneTransform_ValueProp = { "BoneTransform", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVrmVMC_Data_Statics::NewProp_BoneTransform_Key_KeyProp = { "BoneTransform_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVrmVMC_Data_Statics::NewProp_BoneTransform_MetaData[] = {
		{ "Comment", "//\x09UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = VRM4U)\n" },
		{ "ModuleRelativePath", "Public/VRM4U_VMCSubsystem.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = VRM4U)" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FVrmVMC_Data_Statics::NewProp_BoneTransform = { "BoneTransform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVrmVMC_Data, BoneTransform), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVrmVMC_Data_Statics::NewProp_BoneTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmVMC_Data_Statics::NewProp_BoneTransform_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVrmVMC_Data_Statics::NewProp_RawData_ValueProp = { "RawData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVrmVMC_Data_Statics::NewProp_RawData_Key_KeyProp = { "RawData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVrmVMC_Data_Statics::NewProp_RawData_MetaData[] = {
		{ "Comment", "//\x09UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = VRM4U)\n" },
		{ "ModuleRelativePath", "Public/VRM4U_VMCSubsystem.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = VRM4U)" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FVrmVMC_Data_Statics::NewProp_RawData = { "RawData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVrmVMC_Data, RawData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVrmVMC_Data_Statics::NewProp_RawData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmVMC_Data_Statics::NewProp_RawData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVrmVMC_Data_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrmVMC_Data_Statics::NewProp_BoneTransform_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrmVMC_Data_Statics::NewProp_BoneTransform_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrmVMC_Data_Statics::NewProp_BoneTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrmVMC_Data_Statics::NewProp_RawData_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrmVMC_Data_Statics::NewProp_RawData_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrmVMC_Data_Statics::NewProp_RawData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVrmVMC_Data_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
		nullptr,
		&NewStructOps,
		"VrmVMC_Data",
		sizeof(FVrmVMC_Data),
		alignof(FVrmVMC_Data),
		Z_Construct_UScriptStruct_FVrmVMC_Data_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmVMC_Data_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVrmVMC_Data_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmVMC_Data_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVrmVMC_Data()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVrmVMC_Data_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VRM4U();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VrmVMC_Data"), sizeof(FVrmVMC_Data), Get_Z_Construct_UScriptStruct_FVrmVMC_Data_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVrmVMC_Data_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVrmVMC_Data_Hash() { return 4082832167U; }
	DEFINE_FUNCTION(UVRM4U_VMCSubsystem::execSetRawData)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_port);
		P_GET_TMAP_REF(FString,FTransform,Z_Param_Out_trans);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRawData(Z_Param_port,Z_Param_Out_trans);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRM4U_VMCSubsystem::execSetBoneTransform)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_port);
		P_GET_TMAP_REF(FString,FTransform,Z_Param_Out_trans);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBoneTransform(Z_Param_port,Z_Param_Out_trans);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRM4U_VMCSubsystem::execGetRawdataByPort)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_port);
		P_GET_TMAP_REF(FString,FTransform,Z_Param_Out_trans);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetRawdataByPort(Z_Param_port,Z_Param_Out_trans);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRM4U_VMCSubsystem::execGetRawdataByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_TMAP_REF(FString,FTransform,Z_Param_Out_trans);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetRawdataByIndex(Z_Param_index,Z_Param_Out_trans);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRM4U_VMCSubsystem::execGetBoneByPort)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_port);
		P_GET_TMAP_REF(FString,FTransform,Z_Param_Out_trans);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetBoneByPort(Z_Param_port,Z_Param_Out_trans);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRM4U_VMCSubsystem::execGetBoneByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_TMAP_REF(FString,FTransform,Z_Param_Out_trans);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetBoneByIndex(Z_Param_index,Z_Param_Out_trans);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRM4U_VMCSubsystem::execClear)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Clear();
		P_NATIVE_END;
	}
	void UVRM4U_VMCSubsystem::StaticRegisterNativesUVRM4U_VMCSubsystem()
	{
		UClass* Class = UVRM4U_VMCSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Clear", &UVRM4U_VMCSubsystem::execClear },
			{ "GetBoneByIndex", &UVRM4U_VMCSubsystem::execGetBoneByIndex },
			{ "GetBoneByPort", &UVRM4U_VMCSubsystem::execGetBoneByPort },
			{ "GetRawdataByIndex", &UVRM4U_VMCSubsystem::execGetRawdataByIndex },
			{ "GetRawdataByPort", &UVRM4U_VMCSubsystem::execGetRawdataByPort },
			{ "SetBoneTransform", &UVRM4U_VMCSubsystem::execSetBoneTransform },
			{ "SetRawData", &UVRM4U_VMCSubsystem::execSetRawData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVRM4U_VMCSubsystem_Clear_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRM4U_VMCSubsystem_Clear_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VRM4U_VMCSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRM4U_VMCSubsystem_Clear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRM4U_VMCSubsystem, nullptr, "Clear", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRM4U_VMCSubsystem_Clear_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_VMCSubsystem_Clear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRM4U_VMCSubsystem_Clear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRM4U_VMCSubsystem_Clear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetBoneByIndex_Statics
	{
		struct VRM4U_VMCSubsystem_eventGetBoneByIndex_Parms
		{
			int32 index;
			TMap<FString,FTransform> trans;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_trans_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_trans_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_trans;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetBoneByIndex_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRM4U_VMCSubsystem_eventGetBoneByIndex_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetBoneByIndex_Statics::NewProp_trans_ValueProp = { "trans", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetBoneByIndex_Statics::NewProp_trans_Key_KeyProp = { "trans_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetBoneByIndex_Statics::NewProp_trans = { "trans", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRM4U_VMCSubsystem_eventGetBoneByIndex_Parms, trans), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetBoneByIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetBoneByIndex_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetBoneByIndex_Statics::NewProp_trans_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetBoneByIndex_Statics::NewProp_trans_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetBoneByIndex_Statics::NewProp_trans,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetBoneByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VRM4U_VMCSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetBoneByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRM4U_VMCSubsystem, nullptr, "GetBoneByIndex", nullptr, nullptr, sizeof(VRM4U_VMCSubsystem_eventGetBoneByIndex_Parms), Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetBoneByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetBoneByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetBoneByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetBoneByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetBoneByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetBoneByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetBoneByPort_Statics
	{
		struct VRM4U_VMCSubsystem_eventGetBoneByPort_Parms
		{
			int32 port;
			TMap<FString,FTransform> trans;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_port;
		static const UECodeGen_Private::FStructPropertyParams NewProp_trans_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_trans_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_trans;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetBoneByPort_Statics::NewProp_port = { "port", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRM4U_VMCSubsystem_eventGetBoneByPort_Parms, port), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetBoneByPort_Statics::NewProp_trans_ValueProp = { "trans", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetBoneByPort_Statics::NewProp_trans_Key_KeyProp = { "trans_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetBoneByPort_Statics::NewProp_trans = { "trans", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRM4U_VMCSubsystem_eventGetBoneByPort_Parms, trans), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetBoneByPort_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetBoneByPort_Statics::NewProp_port,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetBoneByPort_Statics::NewProp_trans_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetBoneByPort_Statics::NewProp_trans_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetBoneByPort_Statics::NewProp_trans,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetBoneByPort_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VRM4U_VMCSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetBoneByPort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRM4U_VMCSubsystem, nullptr, "GetBoneByPort", nullptr, nullptr, sizeof(VRM4U_VMCSubsystem_eventGetBoneByPort_Parms), Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetBoneByPort_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetBoneByPort_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetBoneByPort_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetBoneByPort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetBoneByPort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetBoneByPort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetRawdataByIndex_Statics
	{
		struct VRM4U_VMCSubsystem_eventGetRawdataByIndex_Parms
		{
			int32 index;
			TMap<FString,FTransform> trans;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_trans_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_trans_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_trans;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetRawdataByIndex_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRM4U_VMCSubsystem_eventGetRawdataByIndex_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetRawdataByIndex_Statics::NewProp_trans_ValueProp = { "trans", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetRawdataByIndex_Statics::NewProp_trans_Key_KeyProp = { "trans_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetRawdataByIndex_Statics::NewProp_trans = { "trans", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRM4U_VMCSubsystem_eventGetRawdataByIndex_Parms, trans), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetRawdataByIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetRawdataByIndex_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetRawdataByIndex_Statics::NewProp_trans_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetRawdataByIndex_Statics::NewProp_trans_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetRawdataByIndex_Statics::NewProp_trans,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetRawdataByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VRM4U_VMCSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetRawdataByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRM4U_VMCSubsystem, nullptr, "GetRawdataByIndex", nullptr, nullptr, sizeof(VRM4U_VMCSubsystem_eventGetRawdataByIndex_Parms), Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetRawdataByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetRawdataByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetRawdataByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetRawdataByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetRawdataByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetRawdataByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetRawdataByPort_Statics
	{
		struct VRM4U_VMCSubsystem_eventGetRawdataByPort_Parms
		{
			int32 port;
			TMap<FString,FTransform> trans;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_port;
		static const UECodeGen_Private::FStructPropertyParams NewProp_trans_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_trans_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_trans;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetRawdataByPort_Statics::NewProp_port = { "port", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRM4U_VMCSubsystem_eventGetRawdataByPort_Parms, port), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetRawdataByPort_Statics::NewProp_trans_ValueProp = { "trans", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetRawdataByPort_Statics::NewProp_trans_Key_KeyProp = { "trans_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetRawdataByPort_Statics::NewProp_trans = { "trans", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRM4U_VMCSubsystem_eventGetRawdataByPort_Parms, trans), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetRawdataByPort_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetRawdataByPort_Statics::NewProp_port,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetRawdataByPort_Statics::NewProp_trans_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetRawdataByPort_Statics::NewProp_trans_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetRawdataByPort_Statics::NewProp_trans,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetRawdataByPort_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VRM4U_VMCSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetRawdataByPort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRM4U_VMCSubsystem, nullptr, "GetRawdataByPort", nullptr, nullptr, sizeof(VRM4U_VMCSubsystem_eventGetRawdataByPort_Parms), Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetRawdataByPort_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetRawdataByPort_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetRawdataByPort_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetRawdataByPort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetRawdataByPort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetRawdataByPort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRM4U_VMCSubsystem_SetBoneTransform_Statics
	{
		struct VRM4U_VMCSubsystem_eventSetBoneTransform_Parms
		{
			int32 port;
			TMap<FString,FTransform> trans;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_port;
		static const UECodeGen_Private::FStructPropertyParams NewProp_trans_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_trans_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_trans_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_trans;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UVRM4U_VMCSubsystem_SetBoneTransform_Statics::NewProp_port = { "port", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRM4U_VMCSubsystem_eventSetBoneTransform_Parms, port), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRM4U_VMCSubsystem_SetBoneTransform_Statics::NewProp_trans_ValueProp = { "trans", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVRM4U_VMCSubsystem_SetBoneTransform_Statics::NewProp_trans_Key_KeyProp = { "trans_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRM4U_VMCSubsystem_SetBoneTransform_Statics::NewProp_trans_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVRM4U_VMCSubsystem_SetBoneTransform_Statics::NewProp_trans = { "trans", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRM4U_VMCSubsystem_eventSetBoneTransform_Parms, trans), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVRM4U_VMCSubsystem_SetBoneTransform_Statics::NewProp_trans_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_VMCSubsystem_SetBoneTransform_Statics::NewProp_trans_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRM4U_VMCSubsystem_SetBoneTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_VMCSubsystem_SetBoneTransform_Statics::NewProp_port,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_VMCSubsystem_SetBoneTransform_Statics::NewProp_trans_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_VMCSubsystem_SetBoneTransform_Statics::NewProp_trans_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_VMCSubsystem_SetBoneTransform_Statics::NewProp_trans,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRM4U_VMCSubsystem_SetBoneTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VRM4U_VMCSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRM4U_VMCSubsystem_SetBoneTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRM4U_VMCSubsystem, nullptr, "SetBoneTransform", nullptr, nullptr, sizeof(VRM4U_VMCSubsystem_eventSetBoneTransform_Parms), Z_Construct_UFunction_UVRM4U_VMCSubsystem_SetBoneTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_VMCSubsystem_SetBoneTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRM4U_VMCSubsystem_SetBoneTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_VMCSubsystem_SetBoneTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRM4U_VMCSubsystem_SetBoneTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRM4U_VMCSubsystem_SetBoneTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRM4U_VMCSubsystem_SetRawData_Statics
	{
		struct VRM4U_VMCSubsystem_eventSetRawData_Parms
		{
			int32 port;
			TMap<FString,FTransform> trans;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_port;
		static const UECodeGen_Private::FStructPropertyParams NewProp_trans_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_trans_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_trans_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_trans;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UVRM4U_VMCSubsystem_SetRawData_Statics::NewProp_port = { "port", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRM4U_VMCSubsystem_eventSetRawData_Parms, port), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRM4U_VMCSubsystem_SetRawData_Statics::NewProp_trans_ValueProp = { "trans", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVRM4U_VMCSubsystem_SetRawData_Statics::NewProp_trans_Key_KeyProp = { "trans_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRM4U_VMCSubsystem_SetRawData_Statics::NewProp_trans_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVRM4U_VMCSubsystem_SetRawData_Statics::NewProp_trans = { "trans", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRM4U_VMCSubsystem_eventSetRawData_Parms, trans), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVRM4U_VMCSubsystem_SetRawData_Statics::NewProp_trans_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_VMCSubsystem_SetRawData_Statics::NewProp_trans_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRM4U_VMCSubsystem_SetRawData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_VMCSubsystem_SetRawData_Statics::NewProp_port,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_VMCSubsystem_SetRawData_Statics::NewProp_trans_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_VMCSubsystem_SetRawData_Statics::NewProp_trans_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_VMCSubsystem_SetRawData_Statics::NewProp_trans,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRM4U_VMCSubsystem_SetRawData_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VRM4U_VMCSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRM4U_VMCSubsystem_SetRawData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRM4U_VMCSubsystem, nullptr, "SetRawData", nullptr, nullptr, sizeof(VRM4U_VMCSubsystem_eventSetRawData_Parms), Z_Construct_UFunction_UVRM4U_VMCSubsystem_SetRawData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_VMCSubsystem_SetRawData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRM4U_VMCSubsystem_SetRawData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_VMCSubsystem_SetRawData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRM4U_VMCSubsystem_SetRawData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRM4U_VMCSubsystem_SetRawData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVRM4U_VMCSubsystem_NoRegister()
	{
		return UVRM4U_VMCSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UVRM4U_VMCSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVRM4U_VMCSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVRM4U_VMCSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVRM4U_VMCSubsystem_Clear, "Clear" }, // 4287702492
		{ &Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetBoneByIndex, "GetBoneByIndex" }, // 71486119
		{ &Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetBoneByPort, "GetBoneByPort" }, // 209289958
		{ &Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetRawdataByIndex, "GetRawdataByIndex" }, // 1257594597
		{ &Z_Construct_UFunction_UVRM4U_VMCSubsystem_GetRawdataByPort, "GetRawdataByPort" }, // 2400962042
		{ &Z_Construct_UFunction_UVRM4U_VMCSubsystem_SetBoneTransform, "SetBoneTransform" }, // 4294855204
		{ &Z_Construct_UFunction_UVRM4U_VMCSubsystem_SetRawData, "SetRawData" }, // 914847355
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRM4U_VMCSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VRM4U_VMCSubsystem.h" },
		{ "ModuleRelativePath", "Public/VRM4U_VMCSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVRM4U_VMCSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVRM4U_VMCSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVRM4U_VMCSubsystem_Statics::ClassParams = {
		&UVRM4U_VMCSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVRM4U_VMCSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVRM4U_VMCSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVRM4U_VMCSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVRM4U_VMCSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVRM4U_VMCSubsystem, 1179530486);
	template<> VRM4U_API UClass* StaticClass<UVRM4U_VMCSubsystem>()
	{
		return UVRM4U_VMCSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVRM4U_VMCSubsystem(Z_Construct_UClass_UVRM4U_VMCSubsystem, &UVRM4U_VMCSubsystem::StaticClass, TEXT("/Script/VRM4U"), TEXT("UVRM4U_VMCSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRM4U_VMCSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
