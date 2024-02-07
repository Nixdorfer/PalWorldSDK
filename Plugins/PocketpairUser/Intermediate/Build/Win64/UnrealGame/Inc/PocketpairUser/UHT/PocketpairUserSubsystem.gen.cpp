// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PocketpairUser/Public/PocketpairUserSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#include "PocketpairUser/Public/SocialId.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePocketpairUserSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	POCKETPAIRUSER_API UClass* Z_Construct_UClass_UPocketpairUserInfo_NoRegister();
	POCKETPAIRUSER_API UClass* Z_Construct_UClass_UPocketpairUserSubsystem();
	POCKETPAIRUSER_API UClass* Z_Construct_UClass_UPocketpairUserSubsystem_NoRegister();
	POCKETPAIRUSER_API UScriptStruct* Z_Construct_UScriptStruct_FSocialId();
	UPackage* Z_Construct_UPackage__Script_PocketpairUser();
// End Cross Module References
	DEFINE_FUNCTION(UPocketpairUserSubsystem::execAddPingResultCache)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Address);
		P_GET_PROPERTY(FIntProperty,Z_Param_Ping);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddPingResultCache(Z_Param_Address,Z_Param_Ping);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPocketpairUserSubsystem::execGetDefaultOnlineSubsystemName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetDefaultOnlineSubsystemName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPocketpairUserSubsystem::execGetInviteCode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetInviteCode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPocketpairUserSubsystem::execGetLocalUserInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPocketpairUserInfo**)Z_Param__Result=P_THIS->GetLocalUserInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPocketpairUserSubsystem::execGetPingResultCache)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Address);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPingResultCache(Z_Param_Address);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPocketpairUserSubsystem::execGetPlayerNo)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPlayerNo(Z_Param_PlayerController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPocketpairUserSubsystem::execGetSaveDataUserId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetSaveDataUserId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPocketpairUserSubsystem::execGetSocialId)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSocialId*)Z_Param__Result=P_THIS->GetSocialId(Z_Param_PlayerController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPocketpairUserSubsystem::execGetTelemetrySessionId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetTelemetrySessionId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPocketpairUserSubsystem::execGetTelemetryUserId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetTelemetryUserId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPocketpairUserSubsystem::execOnSessionInviteReceived)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InviteCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSessionInviteReceived(Z_Param_InviteCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPocketpairUserSubsystem::execUnlockAchievement)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ID);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Percent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnlockAchievement(Z_Param_ID,Z_Param_Percent);
		P_NATIVE_END;
	}
	void UPocketpairUserSubsystem::StaticRegisterNativesUPocketpairUserSubsystem()
	{
		UClass* Class = UPocketpairUserSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddPingResultCache", &UPocketpairUserSubsystem::execAddPingResultCache },
			{ "GetDefaultOnlineSubsystemName", &UPocketpairUserSubsystem::execGetDefaultOnlineSubsystemName },
			{ "GetInviteCode", &UPocketpairUserSubsystem::execGetInviteCode },
			{ "GetLocalUserInfo", &UPocketpairUserSubsystem::execGetLocalUserInfo },
			{ "GetPingResultCache", &UPocketpairUserSubsystem::execGetPingResultCache },
			{ "GetPlayerNo", &UPocketpairUserSubsystem::execGetPlayerNo },
			{ "GetSaveDataUserId", &UPocketpairUserSubsystem::execGetSaveDataUserId },
			{ "GetSocialId", &UPocketpairUserSubsystem::execGetSocialId },
			{ "GetTelemetrySessionId", &UPocketpairUserSubsystem::execGetTelemetrySessionId },
			{ "GetTelemetryUserId", &UPocketpairUserSubsystem::execGetTelemetryUserId },
			{ "OnSessionInviteReceived", &UPocketpairUserSubsystem::execOnSessionInviteReceived },
			{ "UnlockAchievement", &UPocketpairUserSubsystem::execUnlockAchievement },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPocketpairUserSubsystem_AddPingResultCache_Statics
	{
		struct PocketpairUserSubsystem_eventAddPingResultCache_Parms
		{
			FString Address;
			int32 Ping;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Address_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Address;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Ping;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPocketpairUserSubsystem_AddPingResultCache_Statics::NewProp_Address_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPocketpairUserSubsystem_AddPingResultCache_Statics::NewProp_Address = { "Address", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PocketpairUserSubsystem_eventAddPingResultCache_Parms, Address), METADATA_PARAMS(Z_Construct_UFunction_UPocketpairUserSubsystem_AddPingResultCache_Statics::NewProp_Address_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPocketpairUserSubsystem_AddPingResultCache_Statics::NewProp_Address_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPocketpairUserSubsystem_AddPingResultCache_Statics::NewProp_Ping = { "Ping", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PocketpairUserSubsystem_eventAddPingResultCache_Parms, Ping), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPocketpairUserSubsystem_AddPingResultCache_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPocketpairUserSubsystem_AddPingResultCache_Statics::NewProp_Address,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPocketpairUserSubsystem_AddPingResultCache_Statics::NewProp_Ping,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPocketpairUserSubsystem_AddPingResultCache_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PocketpairUserSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPocketpairUserSubsystem_AddPingResultCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPocketpairUserSubsystem, nullptr, "AddPingResultCache", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPocketpairUserSubsystem_AddPingResultCache_Statics::PocketpairUserSubsystem_eventAddPingResultCache_Parms), Z_Construct_UFunction_UPocketpairUserSubsystem_AddPingResultCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPocketpairUserSubsystem_AddPingResultCache_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPocketpairUserSubsystem_AddPingResultCache_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPocketpairUserSubsystem_AddPingResultCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPocketpairUserSubsystem_AddPingResultCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPocketpairUserSubsystem_AddPingResultCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPocketpairUserSubsystem_GetDefaultOnlineSubsystemName_Statics
	{
		struct PocketpairUserSubsystem_eventGetDefaultOnlineSubsystemName_Parms
		{
			FName ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPocketpairUserSubsystem_GetDefaultOnlineSubsystemName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PocketpairUserSubsystem_eventGetDefaultOnlineSubsystemName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPocketpairUserSubsystem_GetDefaultOnlineSubsystemName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPocketpairUserSubsystem_GetDefaultOnlineSubsystemName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPocketpairUserSubsystem_GetDefaultOnlineSubsystemName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PocketpairUserSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPocketpairUserSubsystem_GetDefaultOnlineSubsystemName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPocketpairUserSubsystem, nullptr, "GetDefaultOnlineSubsystemName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPocketpairUserSubsystem_GetDefaultOnlineSubsystemName_Statics::PocketpairUserSubsystem_eventGetDefaultOnlineSubsystemName_Parms), Z_Construct_UFunction_UPocketpairUserSubsystem_GetDefaultOnlineSubsystemName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPocketpairUserSubsystem_GetDefaultOnlineSubsystemName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPocketpairUserSubsystem_GetDefaultOnlineSubsystemName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPocketpairUserSubsystem_GetDefaultOnlineSubsystemName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPocketpairUserSubsystem_GetDefaultOnlineSubsystemName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPocketpairUserSubsystem_GetDefaultOnlineSubsystemName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPocketpairUserSubsystem_GetInviteCode_Statics
	{
		struct PocketpairUserSubsystem_eventGetInviteCode_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPocketpairUserSubsystem_GetInviteCode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PocketpairUserSubsystem_eventGetInviteCode_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPocketpairUserSubsystem_GetInviteCode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPocketpairUserSubsystem_GetInviteCode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPocketpairUserSubsystem_GetInviteCode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PocketpairUserSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPocketpairUserSubsystem_GetInviteCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPocketpairUserSubsystem, nullptr, "GetInviteCode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPocketpairUserSubsystem_GetInviteCode_Statics::PocketpairUserSubsystem_eventGetInviteCode_Parms), Z_Construct_UFunction_UPocketpairUserSubsystem_GetInviteCode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPocketpairUserSubsystem_GetInviteCode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPocketpairUserSubsystem_GetInviteCode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPocketpairUserSubsystem_GetInviteCode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPocketpairUserSubsystem_GetInviteCode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPocketpairUserSubsystem_GetInviteCode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPocketpairUserSubsystem_GetLocalUserInfo_Statics
	{
		struct PocketpairUserSubsystem_eventGetLocalUserInfo_Parms
		{
			UPocketpairUserInfo* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPocketpairUserSubsystem_GetLocalUserInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PocketpairUserSubsystem_eventGetLocalUserInfo_Parms, ReturnValue), Z_Construct_UClass_UPocketpairUserInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPocketpairUserSubsystem_GetLocalUserInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPocketpairUserSubsystem_GetLocalUserInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPocketpairUserSubsystem_GetLocalUserInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PocketpairUserSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPocketpairUserSubsystem_GetLocalUserInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPocketpairUserSubsystem, nullptr, "GetLocalUserInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPocketpairUserSubsystem_GetLocalUserInfo_Statics::PocketpairUserSubsystem_eventGetLocalUserInfo_Parms), Z_Construct_UFunction_UPocketpairUserSubsystem_GetLocalUserInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPocketpairUserSubsystem_GetLocalUserInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPocketpairUserSubsystem_GetLocalUserInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPocketpairUserSubsystem_GetLocalUserInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPocketpairUserSubsystem_GetLocalUserInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPocketpairUserSubsystem_GetLocalUserInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPocketpairUserSubsystem_GetPingResultCache_Statics
	{
		struct PocketpairUserSubsystem_eventGetPingResultCache_Parms
		{
			FString Address;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Address_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Address;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPocketpairUserSubsystem_GetPingResultCache_Statics::NewProp_Address_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPocketpairUserSubsystem_GetPingResultCache_Statics::NewProp_Address = { "Address", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PocketpairUserSubsystem_eventGetPingResultCache_Parms, Address), METADATA_PARAMS(Z_Construct_UFunction_UPocketpairUserSubsystem_GetPingResultCache_Statics::NewProp_Address_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPocketpairUserSubsystem_GetPingResultCache_Statics::NewProp_Address_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPocketpairUserSubsystem_GetPingResultCache_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PocketpairUserSubsystem_eventGetPingResultCache_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPocketpairUserSubsystem_GetPingResultCache_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPocketpairUserSubsystem_GetPingResultCache_Statics::NewProp_Address,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPocketpairUserSubsystem_GetPingResultCache_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPocketpairUserSubsystem_GetPingResultCache_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PocketpairUserSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPocketpairUserSubsystem_GetPingResultCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPocketpairUserSubsystem, nullptr, "GetPingResultCache", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPocketpairUserSubsystem_GetPingResultCache_Statics::PocketpairUserSubsystem_eventGetPingResultCache_Parms), Z_Construct_UFunction_UPocketpairUserSubsystem_GetPingResultCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPocketpairUserSubsystem_GetPingResultCache_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPocketpairUserSubsystem_GetPingResultCache_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPocketpairUserSubsystem_GetPingResultCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPocketpairUserSubsystem_GetPingResultCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPocketpairUserSubsystem_GetPingResultCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPocketpairUserSubsystem_GetPlayerNo_Statics
	{
		struct PocketpairUserSubsystem_eventGetPlayerNo_Parms
		{
			const APlayerController* PlayerController;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPocketpairUserSubsystem_GetPlayerNo_Statics::NewProp_PlayerController_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPocketpairUserSubsystem_GetPlayerNo_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PocketpairUserSubsystem_eventGetPlayerNo_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPocketpairUserSubsystem_GetPlayerNo_Statics::NewProp_PlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPocketpairUserSubsystem_GetPlayerNo_Statics::NewProp_PlayerController_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPocketpairUserSubsystem_GetPlayerNo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PocketpairUserSubsystem_eventGetPlayerNo_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPocketpairUserSubsystem_GetPlayerNo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPocketpairUserSubsystem_GetPlayerNo_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPocketpairUserSubsystem_GetPlayerNo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPocketpairUserSubsystem_GetPlayerNo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PocketpairUserSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPocketpairUserSubsystem_GetPlayerNo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPocketpairUserSubsystem, nullptr, "GetPlayerNo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPocketpairUserSubsystem_GetPlayerNo_Statics::PocketpairUserSubsystem_eventGetPlayerNo_Parms), Z_Construct_UFunction_UPocketpairUserSubsystem_GetPlayerNo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPocketpairUserSubsystem_GetPlayerNo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPocketpairUserSubsystem_GetPlayerNo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPocketpairUserSubsystem_GetPlayerNo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPocketpairUserSubsystem_GetPlayerNo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPocketpairUserSubsystem_GetPlayerNo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPocketpairUserSubsystem_GetSaveDataUserId_Statics
	{
		struct PocketpairUserSubsystem_eventGetSaveDataUserId_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPocketpairUserSubsystem_GetSaveDataUserId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PocketpairUserSubsystem_eventGetSaveDataUserId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPocketpairUserSubsystem_GetSaveDataUserId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPocketpairUserSubsystem_GetSaveDataUserId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPocketpairUserSubsystem_GetSaveDataUserId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PocketpairUserSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPocketpairUserSubsystem_GetSaveDataUserId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPocketpairUserSubsystem, nullptr, "GetSaveDataUserId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPocketpairUserSubsystem_GetSaveDataUserId_Statics::PocketpairUserSubsystem_eventGetSaveDataUserId_Parms), Z_Construct_UFunction_UPocketpairUserSubsystem_GetSaveDataUserId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPocketpairUserSubsystem_GetSaveDataUserId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPocketpairUserSubsystem_GetSaveDataUserId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPocketpairUserSubsystem_GetSaveDataUserId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPocketpairUserSubsystem_GetSaveDataUserId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPocketpairUserSubsystem_GetSaveDataUserId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPocketpairUserSubsystem_GetSocialId_Statics
	{
		struct PocketpairUserSubsystem_eventGetSocialId_Parms
		{
			const APlayerController* PlayerController;
			FSocialId ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPocketpairUserSubsystem_GetSocialId_Statics::NewProp_PlayerController_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPocketpairUserSubsystem_GetSocialId_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PocketpairUserSubsystem_eventGetSocialId_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPocketpairUserSubsystem_GetSocialId_Statics::NewProp_PlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPocketpairUserSubsystem_GetSocialId_Statics::NewProp_PlayerController_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPocketpairUserSubsystem_GetSocialId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PocketpairUserSubsystem_eventGetSocialId_Parms, ReturnValue), Z_Construct_UScriptStruct_FSocialId, METADATA_PARAMS(nullptr, 0) }; // 3695477237
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPocketpairUserSubsystem_GetSocialId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPocketpairUserSubsystem_GetSocialId_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPocketpairUserSubsystem_GetSocialId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPocketpairUserSubsystem_GetSocialId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PocketpairUserSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPocketpairUserSubsystem_GetSocialId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPocketpairUserSubsystem, nullptr, "GetSocialId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPocketpairUserSubsystem_GetSocialId_Statics::PocketpairUserSubsystem_eventGetSocialId_Parms), Z_Construct_UFunction_UPocketpairUserSubsystem_GetSocialId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPocketpairUserSubsystem_GetSocialId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPocketpairUserSubsystem_GetSocialId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPocketpairUserSubsystem_GetSocialId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPocketpairUserSubsystem_GetSocialId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPocketpairUserSubsystem_GetSocialId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPocketpairUserSubsystem_GetTelemetrySessionId_Statics
	{
		struct PocketpairUserSubsystem_eventGetTelemetrySessionId_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPocketpairUserSubsystem_GetTelemetrySessionId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PocketpairUserSubsystem_eventGetTelemetrySessionId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPocketpairUserSubsystem_GetTelemetrySessionId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPocketpairUserSubsystem_GetTelemetrySessionId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPocketpairUserSubsystem_GetTelemetrySessionId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PocketpairUserSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPocketpairUserSubsystem_GetTelemetrySessionId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPocketpairUserSubsystem, nullptr, "GetTelemetrySessionId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPocketpairUserSubsystem_GetTelemetrySessionId_Statics::PocketpairUserSubsystem_eventGetTelemetrySessionId_Parms), Z_Construct_UFunction_UPocketpairUserSubsystem_GetTelemetrySessionId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPocketpairUserSubsystem_GetTelemetrySessionId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPocketpairUserSubsystem_GetTelemetrySessionId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPocketpairUserSubsystem_GetTelemetrySessionId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPocketpairUserSubsystem_GetTelemetrySessionId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPocketpairUserSubsystem_GetTelemetrySessionId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPocketpairUserSubsystem_GetTelemetryUserId_Statics
	{
		struct PocketpairUserSubsystem_eventGetTelemetryUserId_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPocketpairUserSubsystem_GetTelemetryUserId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PocketpairUserSubsystem_eventGetTelemetryUserId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPocketpairUserSubsystem_GetTelemetryUserId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPocketpairUserSubsystem_GetTelemetryUserId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPocketpairUserSubsystem_GetTelemetryUserId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PocketpairUserSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPocketpairUserSubsystem_GetTelemetryUserId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPocketpairUserSubsystem, nullptr, "GetTelemetryUserId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPocketpairUserSubsystem_GetTelemetryUserId_Statics::PocketpairUserSubsystem_eventGetTelemetryUserId_Parms), Z_Construct_UFunction_UPocketpairUserSubsystem_GetTelemetryUserId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPocketpairUserSubsystem_GetTelemetryUserId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPocketpairUserSubsystem_GetTelemetryUserId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPocketpairUserSubsystem_GetTelemetryUserId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPocketpairUserSubsystem_GetTelemetryUserId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPocketpairUserSubsystem_GetTelemetryUserId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPocketpairUserSubsystem_OnSessionInviteReceived_Statics
	{
		struct PocketpairUserSubsystem_eventOnSessionInviteReceived_Parms
		{
			FString InviteCode;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InviteCode_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InviteCode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPocketpairUserSubsystem_OnSessionInviteReceived_Statics::NewProp_InviteCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPocketpairUserSubsystem_OnSessionInviteReceived_Statics::NewProp_InviteCode = { "InviteCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PocketpairUserSubsystem_eventOnSessionInviteReceived_Parms, InviteCode), METADATA_PARAMS(Z_Construct_UFunction_UPocketpairUserSubsystem_OnSessionInviteReceived_Statics::NewProp_InviteCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPocketpairUserSubsystem_OnSessionInviteReceived_Statics::NewProp_InviteCode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPocketpairUserSubsystem_OnSessionInviteReceived_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPocketpairUserSubsystem_OnSessionInviteReceived_Statics::NewProp_InviteCode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPocketpairUserSubsystem_OnSessionInviteReceived_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PocketpairUserSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPocketpairUserSubsystem_OnSessionInviteReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPocketpairUserSubsystem, nullptr, "OnSessionInviteReceived", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPocketpairUserSubsystem_OnSessionInviteReceived_Statics::PocketpairUserSubsystem_eventOnSessionInviteReceived_Parms), Z_Construct_UFunction_UPocketpairUserSubsystem_OnSessionInviteReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPocketpairUserSubsystem_OnSessionInviteReceived_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPocketpairUserSubsystem_OnSessionInviteReceived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPocketpairUserSubsystem_OnSessionInviteReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPocketpairUserSubsystem_OnSessionInviteReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPocketpairUserSubsystem_OnSessionInviteReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPocketpairUserSubsystem_UnlockAchievement_Statics
	{
		struct PocketpairUserSubsystem_eventUnlockAchievement_Parms
		{
			FString ID;
			float Percent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ID;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Percent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPocketpairUserSubsystem_UnlockAchievement_Statics::NewProp_ID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPocketpairUserSubsystem_UnlockAchievement_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PocketpairUserSubsystem_eventUnlockAchievement_Parms, ID), METADATA_PARAMS(Z_Construct_UFunction_UPocketpairUserSubsystem_UnlockAchievement_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPocketpairUserSubsystem_UnlockAchievement_Statics::NewProp_ID_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPocketpairUserSubsystem_UnlockAchievement_Statics::NewProp_Percent = { "Percent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PocketpairUserSubsystem_eventUnlockAchievement_Parms, Percent), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPocketpairUserSubsystem_UnlockAchievement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPocketpairUserSubsystem_UnlockAchievement_Statics::NewProp_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPocketpairUserSubsystem_UnlockAchievement_Statics::NewProp_Percent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPocketpairUserSubsystem_UnlockAchievement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PocketpairUserSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPocketpairUserSubsystem_UnlockAchievement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPocketpairUserSubsystem, nullptr, "UnlockAchievement", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPocketpairUserSubsystem_UnlockAchievement_Statics::PocketpairUserSubsystem_eventUnlockAchievement_Parms), Z_Construct_UFunction_UPocketpairUserSubsystem_UnlockAchievement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPocketpairUserSubsystem_UnlockAchievement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPocketpairUserSubsystem_UnlockAchievement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPocketpairUserSubsystem_UnlockAchievement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPocketpairUserSubsystem_UnlockAchievement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPocketpairUserSubsystem_UnlockAchievement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPocketpairUserSubsystem);
	UClass* Z_Construct_UClass_UPocketpairUserSubsystem_NoRegister()
	{
		return UPocketpairUserSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UPocketpairUserSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserInfo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LocalUserInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPocketpairUserSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_PocketpairUser,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPocketpairUserSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPocketpairUserSubsystem_AddPingResultCache, "AddPingResultCache" }, // 2077963684
		{ &Z_Construct_UFunction_UPocketpairUserSubsystem_GetDefaultOnlineSubsystemName, "GetDefaultOnlineSubsystemName" }, // 4005784887
		{ &Z_Construct_UFunction_UPocketpairUserSubsystem_GetInviteCode, "GetInviteCode" }, // 2478896432
		{ &Z_Construct_UFunction_UPocketpairUserSubsystem_GetLocalUserInfo, "GetLocalUserInfo" }, // 2219884437
		{ &Z_Construct_UFunction_UPocketpairUserSubsystem_GetPingResultCache, "GetPingResultCache" }, // 2852949975
		{ &Z_Construct_UFunction_UPocketpairUserSubsystem_GetPlayerNo, "GetPlayerNo" }, // 3197078893
		{ &Z_Construct_UFunction_UPocketpairUserSubsystem_GetSaveDataUserId, "GetSaveDataUserId" }, // 1602232618
		{ &Z_Construct_UFunction_UPocketpairUserSubsystem_GetSocialId, "GetSocialId" }, // 2235061580
		{ &Z_Construct_UFunction_UPocketpairUserSubsystem_GetTelemetrySessionId, "GetTelemetrySessionId" }, // 2823115566
		{ &Z_Construct_UFunction_UPocketpairUserSubsystem_GetTelemetryUserId, "GetTelemetryUserId" }, // 309695608
		{ &Z_Construct_UFunction_UPocketpairUserSubsystem_OnSessionInviteReceived, "OnSessionInviteReceived" }, // 698268486
		{ &Z_Construct_UFunction_UPocketpairUserSubsystem_UnlockAchievement, "UnlockAchievement" }, // 3691007791
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPocketpairUserSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PocketpairUserSubsystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PocketpairUserSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPocketpairUserSubsystem_Statics::NewProp_LocalUserInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PocketpairUserSubsystem" },
		{ "ModuleRelativePath", "Public/PocketpairUserSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPocketpairUserSubsystem_Statics::NewProp_LocalUserInfo = { "LocalUserInfo", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPocketpairUserSubsystem, LocalUserInfo), Z_Construct_UClass_UPocketpairUserInfo_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPocketpairUserSubsystem_Statics::NewProp_LocalUserInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPocketpairUserSubsystem_Statics::NewProp_LocalUserInfo_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPocketpairUserSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPocketpairUserSubsystem_Statics::NewProp_LocalUserInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPocketpairUserSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPocketpairUserSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPocketpairUserSubsystem_Statics::ClassParams = {
		&UPocketpairUserSubsystem::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPocketpairUserSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPocketpairUserSubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPocketpairUserSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPocketpairUserSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPocketpairUserSubsystem()
	{
		if (!Z_Registration_Info_UClass_UPocketpairUserSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPocketpairUserSubsystem.OuterSingleton, Z_Construct_UClass_UPocketpairUserSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPocketpairUserSubsystem.OuterSingleton;
	}
	template<> POCKETPAIRUSER_API UClass* StaticClass<UPocketpairUserSubsystem>()
	{
		return UPocketpairUserSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPocketpairUserSubsystem);
	UPocketpairUserSubsystem::~UPocketpairUserSubsystem() {}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_PocketpairUserSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_PocketpairUserSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPocketpairUserSubsystem, UPocketpairUserSubsystem::StaticClass, TEXT("UPocketpairUserSubsystem"), &Z_Registration_Info_UClass_UPocketpairUserSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPocketpairUserSubsystem), 1632635890U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_PocketpairUserSubsystem_h_2181645601(TEXT("/Script/PocketpairUser"),
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_PocketpairUserSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_PocketpairUserSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
