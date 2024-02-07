// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUser/Public/CommonSessionSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonSessionSubsystem() {}
// Cross Module References
	COMMONUSER_API UClass* Z_Construct_UClass_UCommonSession_HostSessionRequest_NoRegister();
	COMMONUSER_API UClass* Z_Construct_UClass_UCommonSession_SearchResult_NoRegister();
	COMMONUSER_API UClass* Z_Construct_UClass_UCommonSession_SearchSessionRequest_NoRegister();
	COMMONUSER_API UClass* Z_Construct_UClass_UCommonSessionSubsystem();
	COMMONUSER_API UClass* Z_Construct_UClass_UCommonSessionSubsystem_NoRegister();
	COMMONUSER_API UFunction* Z_Construct_UDelegateFunction_CommonUser_CommonSessionOnCreateSessionComplete_Dynamic__DelegateSignature();
	COMMONUSER_API UFunction* Z_Construct_UDelegateFunction_CommonUser_CommonSessionOnJoinSessionComplete_Dynamic__DelegateSignature();
	COMMONUSER_API UFunction* Z_Construct_UDelegateFunction_CommonUser_CommonSessionOnUserRequestedSession_Dynamic__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_CommonUser();
// End Cross Module References
	DEFINE_FUNCTION(UCommonSessionSubsystem::execCleanUpSessions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CleanUpSessions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonSessionSubsystem::execCreateOnlineHostSessionRequest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCommonSession_HostSessionRequest**)Z_Param__Result=P_THIS->CreateOnlineHostSessionRequest();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonSessionSubsystem::execCreateOnlineSearchSessionRequest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCommonSession_SearchSessionRequest**)Z_Param__Result=P_THIS->CreateOnlineSearchSessionRequest();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonSessionSubsystem::execFindSessions)
	{
		P_GET_OBJECT(APlayerController,Z_Param_SearchingPlayer);
		P_GET_OBJECT(UCommonSession_SearchSessionRequest,Z_Param_Request);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FindSessions(Z_Param_SearchingPlayer,Z_Param_Request);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonSessionSubsystem::execHostSession)
	{
		P_GET_OBJECT(APlayerController,Z_Param_HostingPlayer);
		P_GET_OBJECT(UCommonSession_HostSessionRequest,Z_Param_Request);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HostSession(Z_Param_HostingPlayer,Z_Param_Request);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonSessionSubsystem::execJoinSession)
	{
		P_GET_OBJECT(APlayerController,Z_Param_JoiningPlayer);
		P_GET_OBJECT(UCommonSession_SearchResult,Z_Param_Request);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->JoinSession(Z_Param_JoiningPlayer,Z_Param_Request);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonSessionSubsystem::execQuickPlaySession)
	{
		P_GET_OBJECT(APlayerController,Z_Param_JoiningOrHostingPlayer);
		P_GET_OBJECT(UCommonSession_HostSessionRequest,Z_Param_Request);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->QuickPlaySession(Z_Param_JoiningOrHostingPlayer,Z_Param_Request);
		P_NATIVE_END;
	}
	void UCommonSessionSubsystem::StaticRegisterNativesUCommonSessionSubsystem()
	{
		UClass* Class = UCommonSessionSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CleanUpSessions", &UCommonSessionSubsystem::execCleanUpSessions },
			{ "CreateOnlineHostSessionRequest", &UCommonSessionSubsystem::execCreateOnlineHostSessionRequest },
			{ "CreateOnlineSearchSessionRequest", &UCommonSessionSubsystem::execCreateOnlineSearchSessionRequest },
			{ "FindSessions", &UCommonSessionSubsystem::execFindSessions },
			{ "HostSession", &UCommonSessionSubsystem::execHostSession },
			{ "JoinSession", &UCommonSessionSubsystem::execJoinSession },
			{ "QuickPlaySession", &UCommonSessionSubsystem::execQuickPlaySession },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCommonSessionSubsystem_CleanUpSessions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonSessionSubsystem_CleanUpSessions_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonSessionSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonSessionSubsystem_CleanUpSessions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonSessionSubsystem, nullptr, "CleanUpSessions", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonSessionSubsystem_CleanUpSessions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonSessionSubsystem_CleanUpSessions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonSessionSubsystem_CleanUpSessions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonSessionSubsystem_CleanUpSessions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonSessionSubsystem_CreateOnlineHostSessionRequest_Statics
	{
		struct CommonSessionSubsystem_eventCreateOnlineHostSessionRequest_Parms
		{
			UCommonSession_HostSessionRequest* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonSessionSubsystem_CreateOnlineHostSessionRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonSessionSubsystem_eventCreateOnlineHostSessionRequest_Parms, ReturnValue), Z_Construct_UClass_UCommonSession_HostSessionRequest_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonSessionSubsystem_CreateOnlineHostSessionRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonSessionSubsystem_CreateOnlineHostSessionRequest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonSessionSubsystem_CreateOnlineHostSessionRequest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonSessionSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonSessionSubsystem_CreateOnlineHostSessionRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonSessionSubsystem, nullptr, "CreateOnlineHostSessionRequest", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonSessionSubsystem_CreateOnlineHostSessionRequest_Statics::CommonSessionSubsystem_eventCreateOnlineHostSessionRequest_Parms), Z_Construct_UFunction_UCommonSessionSubsystem_CreateOnlineHostSessionRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonSessionSubsystem_CreateOnlineHostSessionRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonSessionSubsystem_CreateOnlineHostSessionRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonSessionSubsystem_CreateOnlineHostSessionRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonSessionSubsystem_CreateOnlineHostSessionRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonSessionSubsystem_CreateOnlineHostSessionRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonSessionSubsystem_CreateOnlineSearchSessionRequest_Statics
	{
		struct CommonSessionSubsystem_eventCreateOnlineSearchSessionRequest_Parms
		{
			UCommonSession_SearchSessionRequest* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonSessionSubsystem_CreateOnlineSearchSessionRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonSessionSubsystem_eventCreateOnlineSearchSessionRequest_Parms, ReturnValue), Z_Construct_UClass_UCommonSession_SearchSessionRequest_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonSessionSubsystem_CreateOnlineSearchSessionRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonSessionSubsystem_CreateOnlineSearchSessionRequest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonSessionSubsystem_CreateOnlineSearchSessionRequest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonSessionSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonSessionSubsystem_CreateOnlineSearchSessionRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonSessionSubsystem, nullptr, "CreateOnlineSearchSessionRequest", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonSessionSubsystem_CreateOnlineSearchSessionRequest_Statics::CommonSessionSubsystem_eventCreateOnlineSearchSessionRequest_Parms), Z_Construct_UFunction_UCommonSessionSubsystem_CreateOnlineSearchSessionRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonSessionSubsystem_CreateOnlineSearchSessionRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonSessionSubsystem_CreateOnlineSearchSessionRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonSessionSubsystem_CreateOnlineSearchSessionRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonSessionSubsystem_CreateOnlineSearchSessionRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonSessionSubsystem_CreateOnlineSearchSessionRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonSessionSubsystem_FindSessions_Statics
	{
		struct CommonSessionSubsystem_eventFindSessions_Parms
		{
			APlayerController* SearchingPlayer;
			UCommonSession_SearchSessionRequest* Request;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SearchingPlayer;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Request;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonSessionSubsystem_FindSessions_Statics::NewProp_SearchingPlayer = { "SearchingPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonSessionSubsystem_eventFindSessions_Parms, SearchingPlayer), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonSessionSubsystem_FindSessions_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonSessionSubsystem_eventFindSessions_Parms, Request), Z_Construct_UClass_UCommonSession_SearchSessionRequest_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonSessionSubsystem_FindSessions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonSessionSubsystem_FindSessions_Statics::NewProp_SearchingPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonSessionSubsystem_FindSessions_Statics::NewProp_Request,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonSessionSubsystem_FindSessions_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonSessionSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonSessionSubsystem_FindSessions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonSessionSubsystem, nullptr, "FindSessions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonSessionSubsystem_FindSessions_Statics::CommonSessionSubsystem_eventFindSessions_Parms), Z_Construct_UFunction_UCommonSessionSubsystem_FindSessions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonSessionSubsystem_FindSessions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonSessionSubsystem_FindSessions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonSessionSubsystem_FindSessions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonSessionSubsystem_FindSessions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonSessionSubsystem_FindSessions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonSessionSubsystem_HostSession_Statics
	{
		struct CommonSessionSubsystem_eventHostSession_Parms
		{
			APlayerController* HostingPlayer;
			UCommonSession_HostSessionRequest* Request;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HostingPlayer;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Request;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonSessionSubsystem_HostSession_Statics::NewProp_HostingPlayer = { "HostingPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonSessionSubsystem_eventHostSession_Parms, HostingPlayer), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonSessionSubsystem_HostSession_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonSessionSubsystem_eventHostSession_Parms, Request), Z_Construct_UClass_UCommonSession_HostSessionRequest_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonSessionSubsystem_HostSession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonSessionSubsystem_HostSession_Statics::NewProp_HostingPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonSessionSubsystem_HostSession_Statics::NewProp_Request,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonSessionSubsystem_HostSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonSessionSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonSessionSubsystem_HostSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonSessionSubsystem, nullptr, "HostSession", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonSessionSubsystem_HostSession_Statics::CommonSessionSubsystem_eventHostSession_Parms), Z_Construct_UFunction_UCommonSessionSubsystem_HostSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonSessionSubsystem_HostSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonSessionSubsystem_HostSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonSessionSubsystem_HostSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonSessionSubsystem_HostSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonSessionSubsystem_HostSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonSessionSubsystem_JoinSession_Statics
	{
		struct CommonSessionSubsystem_eventJoinSession_Parms
		{
			APlayerController* JoiningPlayer;
			UCommonSession_SearchResult* Request;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JoiningPlayer;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Request;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonSessionSubsystem_JoinSession_Statics::NewProp_JoiningPlayer = { "JoiningPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonSessionSubsystem_eventJoinSession_Parms, JoiningPlayer), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonSessionSubsystem_JoinSession_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonSessionSubsystem_eventJoinSession_Parms, Request), Z_Construct_UClass_UCommonSession_SearchResult_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonSessionSubsystem_JoinSession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonSessionSubsystem_JoinSession_Statics::NewProp_JoiningPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonSessionSubsystem_JoinSession_Statics::NewProp_Request,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonSessionSubsystem_JoinSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonSessionSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonSessionSubsystem_JoinSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonSessionSubsystem, nullptr, "JoinSession", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonSessionSubsystem_JoinSession_Statics::CommonSessionSubsystem_eventJoinSession_Parms), Z_Construct_UFunction_UCommonSessionSubsystem_JoinSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonSessionSubsystem_JoinSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonSessionSubsystem_JoinSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonSessionSubsystem_JoinSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonSessionSubsystem_JoinSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonSessionSubsystem_JoinSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonSessionSubsystem_QuickPlaySession_Statics
	{
		struct CommonSessionSubsystem_eventQuickPlaySession_Parms
		{
			APlayerController* JoiningOrHostingPlayer;
			UCommonSession_HostSessionRequest* Request;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JoiningOrHostingPlayer;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Request;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonSessionSubsystem_QuickPlaySession_Statics::NewProp_JoiningOrHostingPlayer = { "JoiningOrHostingPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonSessionSubsystem_eventQuickPlaySession_Parms, JoiningOrHostingPlayer), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonSessionSubsystem_QuickPlaySession_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonSessionSubsystem_eventQuickPlaySession_Parms, Request), Z_Construct_UClass_UCommonSession_HostSessionRequest_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonSessionSubsystem_QuickPlaySession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonSessionSubsystem_QuickPlaySession_Statics::NewProp_JoiningOrHostingPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonSessionSubsystem_QuickPlaySession_Statics::NewProp_Request,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonSessionSubsystem_QuickPlaySession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonSessionSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonSessionSubsystem_QuickPlaySession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonSessionSubsystem, nullptr, "QuickPlaySession", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonSessionSubsystem_QuickPlaySession_Statics::CommonSessionSubsystem_eventQuickPlaySession_Parms), Z_Construct_UFunction_UCommonSessionSubsystem_QuickPlaySession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonSessionSubsystem_QuickPlaySession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonSessionSubsystem_QuickPlaySession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonSessionSubsystem_QuickPlaySession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonSessionSubsystem_QuickPlaySession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonSessionSubsystem_QuickPlaySession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonSessionSubsystem);
	UClass* Z_Construct_UClass_UCommonSessionSubsystem_NoRegister()
	{
		return UCommonSessionSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UCommonSessionSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_K2_OnUserRequestedSessionEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_K2_OnUserRequestedSessionEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_K2_OnJoinSessionCompleteEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_K2_OnJoinSessionCompleteEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_K2_OnCreateSessionCompleteEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_K2_OnCreateSessionCompleteEvent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonSessionSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUser,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCommonSessionSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCommonSessionSubsystem_CleanUpSessions, "CleanUpSessions" }, // 1439325933
		{ &Z_Construct_UFunction_UCommonSessionSubsystem_CreateOnlineHostSessionRequest, "CreateOnlineHostSessionRequest" }, // 591495099
		{ &Z_Construct_UFunction_UCommonSessionSubsystem_CreateOnlineSearchSessionRequest, "CreateOnlineSearchSessionRequest" }, // 1516448902
		{ &Z_Construct_UFunction_UCommonSessionSubsystem_FindSessions, "FindSessions" }, // 628469375
		{ &Z_Construct_UFunction_UCommonSessionSubsystem_HostSession, "HostSession" }, // 3600388816
		{ &Z_Construct_UFunction_UCommonSessionSubsystem_JoinSession, "JoinSession" }, // 2447662435
		{ &Z_Construct_UFunction_UCommonSessionSubsystem_QuickPlaySession, "QuickPlaySession" }, // 1417643160
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonSessionSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CommonSessionSubsystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CommonSessionSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonSessionSubsystem_Statics::NewProp_K2_OnUserRequestedSessionEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonSessionSubsystem" },
		{ "ModuleRelativePath", "Public/CommonSessionSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCommonSessionSubsystem_Statics::NewProp_K2_OnUserRequestedSessionEvent = { "K2_OnUserRequestedSessionEvent", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonSessionSubsystem, K2_OnUserRequestedSessionEvent), Z_Construct_UDelegateFunction_CommonUser_CommonSessionOnUserRequestedSession_Dynamic__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCommonSessionSubsystem_Statics::NewProp_K2_OnUserRequestedSessionEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonSessionSubsystem_Statics::NewProp_K2_OnUserRequestedSessionEvent_MetaData)) }; // 4043019957
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonSessionSubsystem_Statics::NewProp_K2_OnJoinSessionCompleteEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonSessionSubsystem" },
		{ "ModuleRelativePath", "Public/CommonSessionSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCommonSessionSubsystem_Statics::NewProp_K2_OnJoinSessionCompleteEvent = { "K2_OnJoinSessionCompleteEvent", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonSessionSubsystem, K2_OnJoinSessionCompleteEvent), Z_Construct_UDelegateFunction_CommonUser_CommonSessionOnJoinSessionComplete_Dynamic__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCommonSessionSubsystem_Statics::NewProp_K2_OnJoinSessionCompleteEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonSessionSubsystem_Statics::NewProp_K2_OnJoinSessionCompleteEvent_MetaData)) }; // 236103304
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonSessionSubsystem_Statics::NewProp_K2_OnCreateSessionCompleteEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonSessionSubsystem" },
		{ "ModuleRelativePath", "Public/CommonSessionSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCommonSessionSubsystem_Statics::NewProp_K2_OnCreateSessionCompleteEvent = { "K2_OnCreateSessionCompleteEvent", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonSessionSubsystem, K2_OnCreateSessionCompleteEvent), Z_Construct_UDelegateFunction_CommonUser_CommonSessionOnCreateSessionComplete_Dynamic__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCommonSessionSubsystem_Statics::NewProp_K2_OnCreateSessionCompleteEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonSessionSubsystem_Statics::NewProp_K2_OnCreateSessionCompleteEvent_MetaData)) }; // 1638586318
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonSessionSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonSessionSubsystem_Statics::NewProp_K2_OnUserRequestedSessionEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonSessionSubsystem_Statics::NewProp_K2_OnJoinSessionCompleteEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonSessionSubsystem_Statics::NewProp_K2_OnCreateSessionCompleteEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonSessionSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonSessionSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonSessionSubsystem_Statics::ClassParams = {
		&UCommonSessionSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCommonSessionSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCommonSessionSubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCommonSessionSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonSessionSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonSessionSubsystem()
	{
		if (!Z_Registration_Info_UClass_UCommonSessionSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonSessionSubsystem.OuterSingleton, Z_Construct_UClass_UCommonSessionSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonSessionSubsystem.OuterSingleton;
	}
	template<> COMMONUSER_API UClass* StaticClass<UCommonSessionSubsystem>()
	{
		return UCommonSessionSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonSessionSubsystem);
	UCommonSessionSubsystem::~UCommonSessionSubsystem() {}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCommonSessionSubsystem, UCommonSessionSubsystem::StaticClass, TEXT("UCommonSessionSubsystem"), &Z_Registration_Info_UClass_UCommonSessionSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonSessionSubsystem), 3008939158U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_941765496(TEXT("/Script/CommonUser"),
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
