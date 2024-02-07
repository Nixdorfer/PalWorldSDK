// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUser/Public/CommonSession_SearchResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonSession_SearchResult() {}
// Cross Module References
	COMMONUSER_API UClass* Z_Construct_UClass_UCommonSession_SearchResult();
	COMMONUSER_API UClass* Z_Construct_UClass_UCommonSession_SearchResult_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_CommonUser();
// End Cross Module References
	DEFINE_FUNCTION(UCommonSession_SearchResult::execGetDescription)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetDescription();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonSession_SearchResult::execGetIntSetting)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Key);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Value);
		P_GET_UBOOL_REF(Z_Param_Out_bFoundValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetIntSetting(Z_Param_Key,Z_Param_Out_Value,Z_Param_Out_bFoundValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonSession_SearchResult::execGetMaxPublicConnections)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMaxPublicConnections();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonSession_SearchResult::execGetNumOpenPrivateConnections)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumOpenPrivateConnections();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonSession_SearchResult::execGetNumOpenPublicConnections)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumOpenPublicConnections();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonSession_SearchResult::execGetPingInMs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPingInMs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonSession_SearchResult::execGetStringSetting)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Key);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Value);
		P_GET_UBOOL_REF(Z_Param_Out_bFoundValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetStringSetting(Z_Param_Key,Z_Param_Out_Value,Z_Param_Out_bFoundValue);
		P_NATIVE_END;
	}
	void UCommonSession_SearchResult::StaticRegisterNativesUCommonSession_SearchResult()
	{
		UClass* Class = UCommonSession_SearchResult::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDescription", &UCommonSession_SearchResult::execGetDescription },
			{ "GetIntSetting", &UCommonSession_SearchResult::execGetIntSetting },
			{ "GetMaxPublicConnections", &UCommonSession_SearchResult::execGetMaxPublicConnections },
			{ "GetNumOpenPrivateConnections", &UCommonSession_SearchResult::execGetNumOpenPrivateConnections },
			{ "GetNumOpenPublicConnections", &UCommonSession_SearchResult::execGetNumOpenPublicConnections },
			{ "GetPingInMs", &UCommonSession_SearchResult::execGetPingInMs },
			{ "GetStringSetting", &UCommonSession_SearchResult::execGetStringSetting },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCommonSession_SearchResult_GetDescription_Statics
	{
		struct CommonSession_SearchResult_eventGetDescription_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCommonSession_SearchResult_GetDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonSession_SearchResult_eventGetDescription_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonSession_SearchResult_GetDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonSession_SearchResult_GetDescription_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonSession_SearchResult_GetDescription_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonSession_SearchResult.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonSession_SearchResult_GetDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonSession_SearchResult, nullptr, "GetDescription", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonSession_SearchResult_GetDescription_Statics::CommonSession_SearchResult_eventGetDescription_Parms), Z_Construct_UFunction_UCommonSession_SearchResult_GetDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonSession_SearchResult_GetDescription_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonSession_SearchResult_GetDescription_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonSession_SearchResult_GetDescription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonSession_SearchResult_GetDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonSession_SearchResult_GetDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonSession_SearchResult_GetIntSetting_Statics
	{
		struct CommonSession_SearchResult_eventGetIntSetting_Parms
		{
			FName Key;
			int32 Value;
			bool bFoundValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static void NewProp_bFoundValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFoundValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCommonSession_SearchResult_GetIntSetting_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonSession_SearchResult_eventGetIntSetting_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCommonSession_SearchResult_GetIntSetting_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonSession_SearchResult_eventGetIntSetting_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCommonSession_SearchResult_GetIntSetting_Statics::NewProp_bFoundValue_SetBit(void* Obj)
	{
		((CommonSession_SearchResult_eventGetIntSetting_Parms*)Obj)->bFoundValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonSession_SearchResult_GetIntSetting_Statics::NewProp_bFoundValue = { "bFoundValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CommonSession_SearchResult_eventGetIntSetting_Parms), &Z_Construct_UFunction_UCommonSession_SearchResult_GetIntSetting_Statics::NewProp_bFoundValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonSession_SearchResult_GetIntSetting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonSession_SearchResult_GetIntSetting_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonSession_SearchResult_GetIntSetting_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonSession_SearchResult_GetIntSetting_Statics::NewProp_bFoundValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonSession_SearchResult_GetIntSetting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonSession_SearchResult.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonSession_SearchResult_GetIntSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonSession_SearchResult, nullptr, "GetIntSetting", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonSession_SearchResult_GetIntSetting_Statics::CommonSession_SearchResult_eventGetIntSetting_Parms), Z_Construct_UFunction_UCommonSession_SearchResult_GetIntSetting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonSession_SearchResult_GetIntSetting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonSession_SearchResult_GetIntSetting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonSession_SearchResult_GetIntSetting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonSession_SearchResult_GetIntSetting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonSession_SearchResult_GetIntSetting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonSession_SearchResult_GetMaxPublicConnections_Statics
	{
		struct CommonSession_SearchResult_eventGetMaxPublicConnections_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCommonSession_SearchResult_GetMaxPublicConnections_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonSession_SearchResult_eventGetMaxPublicConnections_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonSession_SearchResult_GetMaxPublicConnections_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonSession_SearchResult_GetMaxPublicConnections_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonSession_SearchResult_GetMaxPublicConnections_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonSession_SearchResult.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonSession_SearchResult_GetMaxPublicConnections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonSession_SearchResult, nullptr, "GetMaxPublicConnections", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonSession_SearchResult_GetMaxPublicConnections_Statics::CommonSession_SearchResult_eventGetMaxPublicConnections_Parms), Z_Construct_UFunction_UCommonSession_SearchResult_GetMaxPublicConnections_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonSession_SearchResult_GetMaxPublicConnections_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonSession_SearchResult_GetMaxPublicConnections_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonSession_SearchResult_GetMaxPublicConnections_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonSession_SearchResult_GetMaxPublicConnections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonSession_SearchResult_GetMaxPublicConnections_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonSession_SearchResult_GetNumOpenPrivateConnections_Statics
	{
		struct CommonSession_SearchResult_eventGetNumOpenPrivateConnections_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCommonSession_SearchResult_GetNumOpenPrivateConnections_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonSession_SearchResult_eventGetNumOpenPrivateConnections_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonSession_SearchResult_GetNumOpenPrivateConnections_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonSession_SearchResult_GetNumOpenPrivateConnections_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonSession_SearchResult_GetNumOpenPrivateConnections_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonSession_SearchResult.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonSession_SearchResult_GetNumOpenPrivateConnections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonSession_SearchResult, nullptr, "GetNumOpenPrivateConnections", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonSession_SearchResult_GetNumOpenPrivateConnections_Statics::CommonSession_SearchResult_eventGetNumOpenPrivateConnections_Parms), Z_Construct_UFunction_UCommonSession_SearchResult_GetNumOpenPrivateConnections_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonSession_SearchResult_GetNumOpenPrivateConnections_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonSession_SearchResult_GetNumOpenPrivateConnections_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonSession_SearchResult_GetNumOpenPrivateConnections_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonSession_SearchResult_GetNumOpenPrivateConnections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonSession_SearchResult_GetNumOpenPrivateConnections_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonSession_SearchResult_GetNumOpenPublicConnections_Statics
	{
		struct CommonSession_SearchResult_eventGetNumOpenPublicConnections_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCommonSession_SearchResult_GetNumOpenPublicConnections_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonSession_SearchResult_eventGetNumOpenPublicConnections_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonSession_SearchResult_GetNumOpenPublicConnections_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonSession_SearchResult_GetNumOpenPublicConnections_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonSession_SearchResult_GetNumOpenPublicConnections_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonSession_SearchResult.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonSession_SearchResult_GetNumOpenPublicConnections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonSession_SearchResult, nullptr, "GetNumOpenPublicConnections", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonSession_SearchResult_GetNumOpenPublicConnections_Statics::CommonSession_SearchResult_eventGetNumOpenPublicConnections_Parms), Z_Construct_UFunction_UCommonSession_SearchResult_GetNumOpenPublicConnections_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonSession_SearchResult_GetNumOpenPublicConnections_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonSession_SearchResult_GetNumOpenPublicConnections_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonSession_SearchResult_GetNumOpenPublicConnections_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonSession_SearchResult_GetNumOpenPublicConnections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonSession_SearchResult_GetNumOpenPublicConnections_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonSession_SearchResult_GetPingInMs_Statics
	{
		struct CommonSession_SearchResult_eventGetPingInMs_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCommonSession_SearchResult_GetPingInMs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonSession_SearchResult_eventGetPingInMs_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonSession_SearchResult_GetPingInMs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonSession_SearchResult_GetPingInMs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonSession_SearchResult_GetPingInMs_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonSession_SearchResult.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonSession_SearchResult_GetPingInMs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonSession_SearchResult, nullptr, "GetPingInMs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonSession_SearchResult_GetPingInMs_Statics::CommonSession_SearchResult_eventGetPingInMs_Parms), Z_Construct_UFunction_UCommonSession_SearchResult_GetPingInMs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonSession_SearchResult_GetPingInMs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonSession_SearchResult_GetPingInMs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonSession_SearchResult_GetPingInMs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonSession_SearchResult_GetPingInMs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonSession_SearchResult_GetPingInMs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonSession_SearchResult_GetStringSetting_Statics
	{
		struct CommonSession_SearchResult_eventGetStringSetting_Parms
		{
			FName Key;
			FString Value;
			bool bFoundValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static void NewProp_bFoundValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFoundValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCommonSession_SearchResult_GetStringSetting_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonSession_SearchResult_eventGetStringSetting_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCommonSession_SearchResult_GetStringSetting_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonSession_SearchResult_eventGetStringSetting_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCommonSession_SearchResult_GetStringSetting_Statics::NewProp_bFoundValue_SetBit(void* Obj)
	{
		((CommonSession_SearchResult_eventGetStringSetting_Parms*)Obj)->bFoundValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonSession_SearchResult_GetStringSetting_Statics::NewProp_bFoundValue = { "bFoundValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CommonSession_SearchResult_eventGetStringSetting_Parms), &Z_Construct_UFunction_UCommonSession_SearchResult_GetStringSetting_Statics::NewProp_bFoundValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonSession_SearchResult_GetStringSetting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonSession_SearchResult_GetStringSetting_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonSession_SearchResult_GetStringSetting_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonSession_SearchResult_GetStringSetting_Statics::NewProp_bFoundValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonSession_SearchResult_GetStringSetting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonSession_SearchResult.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonSession_SearchResult_GetStringSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonSession_SearchResult, nullptr, "GetStringSetting", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonSession_SearchResult_GetStringSetting_Statics::CommonSession_SearchResult_eventGetStringSetting_Parms), Z_Construct_UFunction_UCommonSession_SearchResult_GetStringSetting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonSession_SearchResult_GetStringSetting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonSession_SearchResult_GetStringSetting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonSession_SearchResult_GetStringSetting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonSession_SearchResult_GetStringSetting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonSession_SearchResult_GetStringSetting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonSession_SearchResult);
	UClass* Z_Construct_UClass_UCommonSession_SearchResult_NoRegister()
	{
		return UCommonSession_SearchResult::StaticClass();
	}
	struct Z_Construct_UClass_UCommonSession_SearchResult_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonSession_SearchResult_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUser,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCommonSession_SearchResult_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCommonSession_SearchResult_GetDescription, "GetDescription" }, // 3308038190
		{ &Z_Construct_UFunction_UCommonSession_SearchResult_GetIntSetting, "GetIntSetting" }, // 4285308500
		{ &Z_Construct_UFunction_UCommonSession_SearchResult_GetMaxPublicConnections, "GetMaxPublicConnections" }, // 1055544325
		{ &Z_Construct_UFunction_UCommonSession_SearchResult_GetNumOpenPrivateConnections, "GetNumOpenPrivateConnections" }, // 2494466048
		{ &Z_Construct_UFunction_UCommonSession_SearchResult_GetNumOpenPublicConnections, "GetNumOpenPublicConnections" }, // 2071369787
		{ &Z_Construct_UFunction_UCommonSession_SearchResult_GetPingInMs, "GetPingInMs" }, // 1821378767
		{ &Z_Construct_UFunction_UCommonSession_SearchResult_GetStringSetting, "GetStringSetting" }, // 1811638711
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonSession_SearchResult_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CommonSession_SearchResult.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CommonSession_SearchResult.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonSession_SearchResult_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonSession_SearchResult>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonSession_SearchResult_Statics::ClassParams = {
		&UCommonSession_SearchResult::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCommonSession_SearchResult_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonSession_SearchResult_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonSession_SearchResult()
	{
		if (!Z_Registration_Info_UClass_UCommonSession_SearchResult.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonSession_SearchResult.OuterSingleton, Z_Construct_UClass_UCommonSession_SearchResult_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonSession_SearchResult.OuterSingleton;
	}
	template<> COMMONUSER_API UClass* StaticClass<UCommonSession_SearchResult>()
	{
		return UCommonSession_SearchResult::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonSession_SearchResult);
	UCommonSession_SearchResult::~UCommonSession_SearchResult() {}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonSession_SearchResult_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonSession_SearchResult_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCommonSession_SearchResult, UCommonSession_SearchResult::StaticClass, TEXT("UCommonSession_SearchResult"), &Z_Registration_Info_UClass_UCommonSession_SearchResult, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonSession_SearchResult), 2384116948U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonSession_SearchResult_h_2526368323(TEXT("/Script/CommonUser"),
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonSession_SearchResult_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonSession_SearchResult_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
