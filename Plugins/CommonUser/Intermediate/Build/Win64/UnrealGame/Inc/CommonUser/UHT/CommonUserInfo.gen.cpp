// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUser/Public/CommonUserInfo.h"
#include "Engine/Classes/GameFramework/OnlineReplStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonUserInfo() {}
// Cross Module References
	COMMONUSER_API UClass* Z_Construct_UClass_UCommonUserInfo();
	COMMONUSER_API UClass* Z_Construct_UClass_UCommonUserInfo_NoRegister();
	COMMONUSER_API UEnum* Z_Construct_UEnum_CommonUser_ECommonUserAvailability();
	COMMONUSER_API UEnum* Z_Construct_UEnum_CommonUser_ECommonUserInitializationState();
	COMMONUSER_API UEnum* Z_Construct_UEnum_CommonUser_ECommonUserOnlineContext();
	COMMONUSER_API UEnum* Z_Construct_UEnum_CommonUser_ECommonUserPrivilege();
	COMMONUSER_API UEnum* Z_Construct_UEnum_CommonUser_ECommonUserPrivilegeResult();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInputDeviceId();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPlatformUserId();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	UPackage* Z_Construct_UPackage__Script_CommonUser();
// End Cross Module References
	DEFINE_FUNCTION(UCommonUserInfo::execGetCachedPrivilegeResult)
	{
		P_GET_ENUM(ECommonUserPrivilege,Z_Param_Privilege);
		P_GET_ENUM(ECommonUserOnlineContext,Z_Param_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ECommonUserPrivilegeResult*)Z_Param__Result=P_THIS->GetCachedPrivilegeResult(ECommonUserPrivilege(Z_Param_Privilege),ECommonUserOnlineContext(Z_Param_Context));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonUserInfo::execGetDebugString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetDebugString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonUserInfo::execGetNetId)
	{
		P_GET_ENUM(ECommonUserOnlineContext,Z_Param_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FUniqueNetIdRepl*)Z_Param__Result=P_THIS->GetNetId(ECommonUserOnlineContext(Z_Param_Context));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonUserInfo::execGetNickname)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetNickname();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonUserInfo::execGetPrivilegeAvailability)
	{
		P_GET_ENUM(ECommonUserPrivilege,Z_Param_Privilege);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ECommonUserAvailability*)Z_Param__Result=P_THIS->GetPrivilegeAvailability(ECommonUserPrivilege(Z_Param_Privilege));
		P_NATIVE_END;
	}
	void UCommonUserInfo::StaticRegisterNativesUCommonUserInfo()
	{
		UClass* Class = UCommonUserInfo::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCachedPrivilegeResult", &UCommonUserInfo::execGetCachedPrivilegeResult },
			{ "GetDebugString", &UCommonUserInfo::execGetDebugString },
			{ "GetNetId", &UCommonUserInfo::execGetNetId },
			{ "GetNickname", &UCommonUserInfo::execGetNickname },
			{ "GetPrivilegeAvailability", &UCommonUserInfo::execGetPrivilegeAvailability },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCommonUserInfo_GetCachedPrivilegeResult_Statics
	{
		struct CommonUserInfo_eventGetCachedPrivilegeResult_Parms
		{
			ECommonUserPrivilege Privilege;
			ECommonUserOnlineContext Context;
			ECommonUserPrivilegeResult ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Privilege_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Privilege;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Context_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Context;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCommonUserInfo_GetCachedPrivilegeResult_Statics::NewProp_Privilege_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCommonUserInfo_GetCachedPrivilegeResult_Statics::NewProp_Privilege = { "Privilege", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonUserInfo_eventGetCachedPrivilegeResult_Parms, Privilege), Z_Construct_UEnum_CommonUser_ECommonUserPrivilege, METADATA_PARAMS(nullptr, 0) }; // 3368067200
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCommonUserInfo_GetCachedPrivilegeResult_Statics::NewProp_Context_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCommonUserInfo_GetCachedPrivilegeResult_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonUserInfo_eventGetCachedPrivilegeResult_Parms, Context), Z_Construct_UEnum_CommonUser_ECommonUserOnlineContext, METADATA_PARAMS(nullptr, 0) }; // 731275418
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCommonUserInfo_GetCachedPrivilegeResult_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCommonUserInfo_GetCachedPrivilegeResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonUserInfo_eventGetCachedPrivilegeResult_Parms, ReturnValue), Z_Construct_UEnum_CommonUser_ECommonUserPrivilegeResult, METADATA_PARAMS(nullptr, 0) }; // 2894711016
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonUserInfo_GetCachedPrivilegeResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUserInfo_GetCachedPrivilegeResult_Statics::NewProp_Privilege_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUserInfo_GetCachedPrivilegeResult_Statics::NewProp_Privilege,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUserInfo_GetCachedPrivilegeResult_Statics::NewProp_Context_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUserInfo_GetCachedPrivilegeResult_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUserInfo_GetCachedPrivilegeResult_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUserInfo_GetCachedPrivilegeResult_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonUserInfo_GetCachedPrivilegeResult_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonUserInfo.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonUserInfo_GetCachedPrivilegeResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonUserInfo, nullptr, "GetCachedPrivilegeResult", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonUserInfo_GetCachedPrivilegeResult_Statics::CommonUserInfo_eventGetCachedPrivilegeResult_Parms), Z_Construct_UFunction_UCommonUserInfo_GetCachedPrivilegeResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonUserInfo_GetCachedPrivilegeResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonUserInfo_GetCachedPrivilegeResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonUserInfo_GetCachedPrivilegeResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonUserInfo_GetCachedPrivilegeResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonUserInfo_GetCachedPrivilegeResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonUserInfo_GetDebugString_Statics
	{
		struct CommonUserInfo_eventGetDebugString_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCommonUserInfo_GetDebugString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonUserInfo_eventGetDebugString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonUserInfo_GetDebugString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUserInfo_GetDebugString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonUserInfo_GetDebugString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonUserInfo.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonUserInfo_GetDebugString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonUserInfo, nullptr, "GetDebugString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonUserInfo_GetDebugString_Statics::CommonUserInfo_eventGetDebugString_Parms), Z_Construct_UFunction_UCommonUserInfo_GetDebugString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonUserInfo_GetDebugString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonUserInfo_GetDebugString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonUserInfo_GetDebugString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonUserInfo_GetDebugString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonUserInfo_GetDebugString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonUserInfo_GetNetId_Statics
	{
		struct CommonUserInfo_eventGetNetId_Parms
		{
			ECommonUserOnlineContext Context;
			FUniqueNetIdRepl ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Context_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Context;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCommonUserInfo_GetNetId_Statics::NewProp_Context_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCommonUserInfo_GetNetId_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonUserInfo_eventGetNetId_Parms, Context), Z_Construct_UEnum_CommonUser_ECommonUserOnlineContext, METADATA_PARAMS(nullptr, 0) }; // 731275418
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonUserInfo_GetNetId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonUserInfo_eventGetNetId_Parms, ReturnValue), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonUserInfo_GetNetId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUserInfo_GetNetId_Statics::NewProp_Context_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUserInfo_GetNetId_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUserInfo_GetNetId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonUserInfo_GetNetId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonUserInfo.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonUserInfo_GetNetId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonUserInfo, nullptr, "GetNetId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonUserInfo_GetNetId_Statics::CommonUserInfo_eventGetNetId_Parms), Z_Construct_UFunction_UCommonUserInfo_GetNetId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonUserInfo_GetNetId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonUserInfo_GetNetId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonUserInfo_GetNetId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonUserInfo_GetNetId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonUserInfo_GetNetId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonUserInfo_GetNickname_Statics
	{
		struct CommonUserInfo_eventGetNickname_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCommonUserInfo_GetNickname_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonUserInfo_eventGetNickname_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonUserInfo_GetNickname_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUserInfo_GetNickname_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonUserInfo_GetNickname_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonUserInfo.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonUserInfo_GetNickname_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonUserInfo, nullptr, "GetNickname", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonUserInfo_GetNickname_Statics::CommonUserInfo_eventGetNickname_Parms), Z_Construct_UFunction_UCommonUserInfo_GetNickname_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonUserInfo_GetNickname_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonUserInfo_GetNickname_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonUserInfo_GetNickname_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonUserInfo_GetNickname()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonUserInfo_GetNickname_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonUserInfo_GetPrivilegeAvailability_Statics
	{
		struct CommonUserInfo_eventGetPrivilegeAvailability_Parms
		{
			ECommonUserPrivilege Privilege;
			ECommonUserAvailability ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Privilege_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Privilege;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCommonUserInfo_GetPrivilegeAvailability_Statics::NewProp_Privilege_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCommonUserInfo_GetPrivilegeAvailability_Statics::NewProp_Privilege = { "Privilege", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonUserInfo_eventGetPrivilegeAvailability_Parms, Privilege), Z_Construct_UEnum_CommonUser_ECommonUserPrivilege, METADATA_PARAMS(nullptr, 0) }; // 3368067200
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCommonUserInfo_GetPrivilegeAvailability_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCommonUserInfo_GetPrivilegeAvailability_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonUserInfo_eventGetPrivilegeAvailability_Parms, ReturnValue), Z_Construct_UEnum_CommonUser_ECommonUserAvailability, METADATA_PARAMS(nullptr, 0) }; // 376152662
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonUserInfo_GetPrivilegeAvailability_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUserInfo_GetPrivilegeAvailability_Statics::NewProp_Privilege_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUserInfo_GetPrivilegeAvailability_Statics::NewProp_Privilege,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUserInfo_GetPrivilegeAvailability_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUserInfo_GetPrivilegeAvailability_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonUserInfo_GetPrivilegeAvailability_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonUserInfo.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonUserInfo_GetPrivilegeAvailability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonUserInfo, nullptr, "GetPrivilegeAvailability", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonUserInfo_GetPrivilegeAvailability_Statics::CommonUserInfo_eventGetPrivilegeAvailability_Parms), Z_Construct_UFunction_UCommonUserInfo_GetPrivilegeAvailability_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonUserInfo_GetPrivilegeAvailability_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonUserInfo_GetPrivilegeAvailability_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonUserInfo_GetPrivilegeAvailability_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonUserInfo_GetPrivilegeAvailability()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonUserInfo_GetPrivilegeAvailability_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonUserInfo);
	UClass* Z_Construct_UClass_UCommonUserInfo_NoRegister()
	{
		return UCommonUserInfo::StaticClass();
	}
	struct Z_Construct_UClass_UCommonUserInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryInputDevice_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrimaryInputDevice;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlatformUser_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlatformUser;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalPlayerIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LocalPlayerIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanBeGuest_MetaData[];
#endif
		static void NewProp_bCanBeGuest_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanBeGuest;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsGuest_MetaData[];
#endif
		static void NewProp_bIsGuest_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsGuest;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InitializationState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitializationState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InitializationState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonUserInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUser,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCommonUserInfo_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCommonUserInfo_GetCachedPrivilegeResult, "GetCachedPrivilegeResult" }, // 4224364897
		{ &Z_Construct_UFunction_UCommonUserInfo_GetDebugString, "GetDebugString" }, // 3731319311
		{ &Z_Construct_UFunction_UCommonUserInfo_GetNetId, "GetNetId" }, // 2057372186
		{ &Z_Construct_UFunction_UCommonUserInfo_GetNickname, "GetNickname" }, // 375258639
		{ &Z_Construct_UFunction_UCommonUserInfo_GetPrivilegeAvailability, "GetPrivilegeAvailability" }, // 1591025122
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonUserInfo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CommonUserInfo.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CommonUserInfo.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonUserInfo_Statics::NewProp_PrimaryInputDevice_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonUserInfo" },
		{ "ModuleRelativePath", "Public/CommonUserInfo.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonUserInfo_Statics::NewProp_PrimaryInputDevice = { "PrimaryInputDevice", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonUserInfo, PrimaryInputDevice), Z_Construct_UScriptStruct_FInputDeviceId, METADATA_PARAMS(Z_Construct_UClass_UCommonUserInfo_Statics::NewProp_PrimaryInputDevice_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonUserInfo_Statics::NewProp_PrimaryInputDevice_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonUserInfo_Statics::NewProp_PlatformUser_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonUserInfo" },
		{ "ModuleRelativePath", "Public/CommonUserInfo.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonUserInfo_Statics::NewProp_PlatformUser = { "PlatformUser", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonUserInfo, PlatformUser), Z_Construct_UScriptStruct_FPlatformUserId, METADATA_PARAMS(Z_Construct_UClass_UCommonUserInfo_Statics::NewProp_PlatformUser_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonUserInfo_Statics::NewProp_PlatformUser_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonUserInfo_Statics::NewProp_LocalPlayerIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonUserInfo" },
		{ "ModuleRelativePath", "Public/CommonUserInfo.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCommonUserInfo_Statics::NewProp_LocalPlayerIndex = { "LocalPlayerIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonUserInfo, LocalPlayerIndex), METADATA_PARAMS(Z_Construct_UClass_UCommonUserInfo_Statics::NewProp_LocalPlayerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonUserInfo_Statics::NewProp_LocalPlayerIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonUserInfo_Statics::NewProp_bCanBeGuest_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonUserInfo" },
		{ "ModuleRelativePath", "Public/CommonUserInfo.h" },
	};
#endif
	void Z_Construct_UClass_UCommonUserInfo_Statics::NewProp_bCanBeGuest_SetBit(void* Obj)
	{
		((UCommonUserInfo*)Obj)->bCanBeGuest = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonUserInfo_Statics::NewProp_bCanBeGuest = { "bCanBeGuest", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCommonUserInfo), &Z_Construct_UClass_UCommonUserInfo_Statics::NewProp_bCanBeGuest_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonUserInfo_Statics::NewProp_bCanBeGuest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonUserInfo_Statics::NewProp_bCanBeGuest_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonUserInfo_Statics::NewProp_bIsGuest_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonUserInfo" },
		{ "ModuleRelativePath", "Public/CommonUserInfo.h" },
	};
#endif
	void Z_Construct_UClass_UCommonUserInfo_Statics::NewProp_bIsGuest_SetBit(void* Obj)
	{
		((UCommonUserInfo*)Obj)->bIsGuest = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonUserInfo_Statics::NewProp_bIsGuest = { "bIsGuest", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCommonUserInfo), &Z_Construct_UClass_UCommonUserInfo_Statics::NewProp_bIsGuest_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonUserInfo_Statics::NewProp_bIsGuest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonUserInfo_Statics::NewProp_bIsGuest_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCommonUserInfo_Statics::NewProp_InitializationState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonUserInfo_Statics::NewProp_InitializationState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonUserInfo" },
		{ "ModuleRelativePath", "Public/CommonUserInfo.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCommonUserInfo_Statics::NewProp_InitializationState = { "InitializationState", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonUserInfo, InitializationState), Z_Construct_UEnum_CommonUser_ECommonUserInitializationState, METADATA_PARAMS(Z_Construct_UClass_UCommonUserInfo_Statics::NewProp_InitializationState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonUserInfo_Statics::NewProp_InitializationState_MetaData)) }; // 409346955
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonUserInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonUserInfo_Statics::NewProp_PrimaryInputDevice,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonUserInfo_Statics::NewProp_PlatformUser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonUserInfo_Statics::NewProp_LocalPlayerIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonUserInfo_Statics::NewProp_bCanBeGuest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonUserInfo_Statics::NewProp_bIsGuest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonUserInfo_Statics::NewProp_InitializationState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonUserInfo_Statics::NewProp_InitializationState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonUserInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonUserInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonUserInfo_Statics::ClassParams = {
		&UCommonUserInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCommonUserInfo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCommonUserInfo_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCommonUserInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonUserInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonUserInfo()
	{
		if (!Z_Registration_Info_UClass_UCommonUserInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonUserInfo.OuterSingleton, Z_Construct_UClass_UCommonUserInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonUserInfo.OuterSingleton;
	}
	template<> COMMONUSER_API UClass* StaticClass<UCommonUserInfo>()
	{
		return UCommonUserInfo::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonUserInfo);
	UCommonUserInfo::~UCommonUserInfo() {}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonUserInfo_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonUserInfo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCommonUserInfo, UCommonUserInfo::StaticClass, TEXT("UCommonUserInfo"), &Z_Registration_Info_UClass_UCommonUserInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonUserInfo), 4253166066U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonUserInfo_h_4287173329(TEXT("/Script/CommonUser"),
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonUserInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonUserInfo_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
