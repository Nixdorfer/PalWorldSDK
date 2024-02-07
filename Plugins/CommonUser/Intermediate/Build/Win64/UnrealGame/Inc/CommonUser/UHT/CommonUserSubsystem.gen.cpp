// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUser/Public/CommonUserSubsystem.h"
#include "CommonUser/Public/CommonUserInitializeParams.h"
#include "Engine/Classes/Engine/GameInstance.h"
#include "Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "GameplayTags/Classes/GameplayTagContainer.h"
#include "InputCore/Classes/InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonUserSubsystem() {}
// Cross Module References
	COMMONUSER_API UClass* Z_Construct_UClass_UCommonUserInfo_NoRegister();
	COMMONUSER_API UClass* Z_Construct_UClass_UCommonUserSubsystem();
	COMMONUSER_API UClass* Z_Construct_UClass_UCommonUserSubsystem_NoRegister();
	COMMONUSER_API UEnum* Z_Construct_UEnum_CommonUser_ECommonUserInitializationState();
	COMMONUSER_API UFunction* Z_Construct_UDelegateFunction_CommonUser_CommonUserAvailabilityChangedDelegate__DelegateSignature();
	COMMONUSER_API UFunction* Z_Construct_UDelegateFunction_CommonUser_CommonUserHandleSystemMessageDelegate__DelegateSignature();
	COMMONUSER_API UFunction* Z_Construct_UDelegateFunction_CommonUser_CommonUserOnInitializeCompleteMulticast__DelegateSignature();
	COMMONUSER_API UScriptStruct* Z_Construct_UScriptStruct_FCommonUserInitializeParams();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInputDeviceId();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPlatformUserId();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	UPackage* Z_Construct_UPackage__Script_CommonUser();
// End Cross Module References
	DEFINE_FUNCTION(UCommonUserSubsystem::execCancelUserInitialization)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LocalPlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CancelUserInitialization(Z_Param_LocalPlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonUserSubsystem::execGetLocalPlayerInitializationState)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LocalPlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ECommonUserInitializationState*)Z_Param__Result=P_THIS->GetLocalPlayerInitializationState(Z_Param_LocalPlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonUserSubsystem::execGetMaxLocalPlayers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMaxLocalPlayers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonUserSubsystem::execGetNumLocalPlayers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumLocalPlayers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonUserSubsystem::execGetUserInfoForControllerId)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ControllerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCommonUserInfo**)Z_Param__Result=P_THIS->GetUserInfoForControllerId(Z_Param_ControllerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonUserSubsystem::execGetUserInfoForInputDevice)
	{
		P_GET_STRUCT(FInputDeviceId,Z_Param_InputDevice);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCommonUserInfo**)Z_Param__Result=P_THIS->GetUserInfoForInputDevice(Z_Param_InputDevice);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonUserSubsystem::execGetUserInfoForLocalPlayerIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LocalPlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCommonUserInfo**)Z_Param__Result=P_THIS->GetUserInfoForLocalPlayerIndex(Z_Param_LocalPlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonUserSubsystem::execGetUserInfoForPlatformUser)
	{
		P_GET_STRUCT(FPlatformUserId,Z_Param_PlatformUser);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCommonUserInfo**)Z_Param__Result=P_THIS->GetUserInfoForPlatformUser(Z_Param_PlatformUser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonUserSubsystem::execGetUserInfoForPlatformUserIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlatformUserIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCommonUserInfo**)Z_Param__Result=P_THIS->GetUserInfoForPlatformUserIndex(Z_Param_PlatformUserIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonUserSubsystem::execGetUserInfoForUniqueNetId)
	{
		P_GET_STRUCT_REF(FUniqueNetIdRepl,Z_Param_Out_NetId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCommonUserInfo**)Z_Param__Result=P_THIS->GetUserInfoForUniqueNetId(Z_Param_Out_NetId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonUserSubsystem::execHasTraitTag)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_TraitTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasTraitTag(Z_Param_TraitTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonUserSubsystem::execListenForLoginKeyInput)
	{
		P_GET_TARRAY(FKey,Z_Param_AnyUserKeys);
		P_GET_TARRAY(FKey,Z_Param_NewUserKeys);
		P_GET_STRUCT(FCommonUserInitializeParams,Z_Param_Params);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ListenForLoginKeyInput(Z_Param_AnyUserKeys,Z_Param_NewUserKeys,Z_Param_Params);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonUserSubsystem::execResetUserState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetUserState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonUserSubsystem::execSendSystemMessage)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_MessageType);
		P_GET_PROPERTY(FTextProperty,Z_Param_TitleText);
		P_GET_PROPERTY(FTextProperty,Z_Param_BodyText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendSystemMessage(Z_Param_MessageType,Z_Param_TitleText,Z_Param_BodyText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonUserSubsystem::execSetMaxLocalPlayers)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InMaxLocalPLayers);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxLocalPlayers(Z_Param_InMaxLocalPLayers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonUserSubsystem::execShouldWaitForStartInput)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShouldWaitForStartInput();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonUserSubsystem::execTryToInitializeForLocalPlay)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LocalPlayerIndex);
		P_GET_STRUCT(FInputDeviceId,Z_Param_PrimaryInputDevice);
		P_GET_UBOOL(Z_Param_bCanUseGuestLogin);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryToInitializeForLocalPlay(Z_Param_LocalPlayerIndex,Z_Param_PrimaryInputDevice,Z_Param_bCanUseGuestLogin);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonUserSubsystem::execTryToInitializeUser)
	{
		P_GET_STRUCT(FCommonUserInitializeParams,Z_Param_Params);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryToInitializeUser(Z_Param_Params);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonUserSubsystem::execTryToLoginForOnlinePlay)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LocalPlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryToLoginForOnlinePlay(Z_Param_LocalPlayerIndex);
		P_NATIVE_END;
	}
	void UCommonUserSubsystem::StaticRegisterNativesUCommonUserSubsystem()
	{
		UClass* Class = UCommonUserSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CancelUserInitialization", &UCommonUserSubsystem::execCancelUserInitialization },
			{ "GetLocalPlayerInitializationState", &UCommonUserSubsystem::execGetLocalPlayerInitializationState },
			{ "GetMaxLocalPlayers", &UCommonUserSubsystem::execGetMaxLocalPlayers },
			{ "GetNumLocalPlayers", &UCommonUserSubsystem::execGetNumLocalPlayers },
			{ "GetUserInfoForControllerId", &UCommonUserSubsystem::execGetUserInfoForControllerId },
			{ "GetUserInfoForInputDevice", &UCommonUserSubsystem::execGetUserInfoForInputDevice },
			{ "GetUserInfoForLocalPlayerIndex", &UCommonUserSubsystem::execGetUserInfoForLocalPlayerIndex },
			{ "GetUserInfoForPlatformUser", &UCommonUserSubsystem::execGetUserInfoForPlatformUser },
			{ "GetUserInfoForPlatformUserIndex", &UCommonUserSubsystem::execGetUserInfoForPlatformUserIndex },
			{ "GetUserInfoForUniqueNetId", &UCommonUserSubsystem::execGetUserInfoForUniqueNetId },
			{ "HasTraitTag", &UCommonUserSubsystem::execHasTraitTag },
			{ "ListenForLoginKeyInput", &UCommonUserSubsystem::execListenForLoginKeyInput },
			{ "ResetUserState", &UCommonUserSubsystem::execResetUserState },
			{ "SendSystemMessage", &UCommonUserSubsystem::execSendSystemMessage },
			{ "SetMaxLocalPlayers", &UCommonUserSubsystem::execSetMaxLocalPlayers },
			{ "ShouldWaitForStartInput", &UCommonUserSubsystem::execShouldWaitForStartInput },
			{ "TryToInitializeForLocalPlay", &UCommonUserSubsystem::execTryToInitializeForLocalPlay },
			{ "TryToInitializeUser", &UCommonUserSubsystem::execTryToInitializeUser },
			{ "TryToLoginForOnlinePlay", &UCommonUserSubsystem::execTryToLoginForOnlinePlay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCommonUserSubsystem_CancelUserInitialization_Statics
	{
		struct CommonUserSubsystem_eventCancelUserInitialization_Parms
		{
			int32 LocalPlayerIndex;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_LocalPlayerIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCommonUserSubsystem_CancelUserInitialization_Statics::NewProp_LocalPlayerIndex = { "LocalPlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonUserSubsystem_eventCancelUserInitialization_Parms, LocalPlayerIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCommonUserSubsystem_CancelUserInitialization_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CommonUserSubsystem_eventCancelUserInitialization_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonUserSubsystem_CancelUserInitialization_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CommonUserSubsystem_eventCancelUserInitialization_Parms), &Z_Construct_UFunction_UCommonUserSubsystem_CancelUserInitialization_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonUserSubsystem_CancelUserInitialization_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUserSubsystem_CancelUserInitialization_Statics::NewProp_LocalPlayerIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUserSubsystem_CancelUserInitialization_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonUserSubsystem_CancelUserInitialization_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonUserSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonUserSubsystem_CancelUserInitialization_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonUserSubsystem, nullptr, "CancelUserInitialization", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonUserSubsystem_CancelUserInitialization_Statics::CommonUserSubsystem_eventCancelUserInitialization_Parms), Z_Construct_UFunction_UCommonUserSubsystem_CancelUserInitialization_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonUserSubsystem_CancelUserInitialization_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonUserSubsystem_CancelUserInitialization_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonUserSubsystem_CancelUserInitialization_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonUserSubsystem_CancelUserInitialization()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonUserSubsystem_CancelUserInitialization_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonUserSubsystem_GetLocalPlayerInitializationState_Statics
	{
		struct CommonUserSubsystem_eventGetLocalPlayerInitializationState_Parms
		{
			int32 LocalPlayerIndex;
			ECommonUserInitializationState ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_LocalPlayerIndex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCommonUserSubsystem_GetLocalPlayerInitializationState_Statics::NewProp_LocalPlayerIndex = { "LocalPlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonUserSubsystem_eventGetLocalPlayerInitializationState_Parms, LocalPlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCommonUserSubsystem_GetLocalPlayerInitializationState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCommonUserSubsystem_GetLocalPlayerInitializationState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonUserSubsystem_eventGetLocalPlayerInitializationState_Parms, ReturnValue), Z_Construct_UEnum_CommonUser_ECommonUserInitializationState, METADATA_PARAMS(nullptr, 0) }; // 409346955
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonUserSubsystem_GetLocalPlayerInitializationState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUserSubsystem_GetLocalPlayerInitializationState_Statics::NewProp_LocalPlayerIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUserSubsystem_GetLocalPlayerInitializationState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUserSubsystem_GetLocalPlayerInitializationState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonUserSubsystem_GetLocalPlayerInitializationState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonUserSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonUserSubsystem_GetLocalPlayerInitializationState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonUserSubsystem, nullptr, "GetLocalPlayerInitializationState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonUserSubsystem_GetLocalPlayerInitializationState_Statics::CommonUserSubsystem_eventGetLocalPlayerInitializationState_Parms), Z_Construct_UFunction_UCommonUserSubsystem_GetLocalPlayerInitializationState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonUserSubsystem_GetLocalPlayerInitializationState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonUserSubsystem_GetLocalPlayerInitializationState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonUserSubsystem_GetLocalPlayerInitializationState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonUserSubsystem_GetLocalPlayerInitializationState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonUserSubsystem_GetLocalPlayerInitializationState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonUserSubsystem_GetMaxLocalPlayers_Statics
	{
		struct CommonUserSubsystem_eventGetMaxLocalPlayers_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCommonUserSubsystem_GetMaxLocalPlayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonUserSubsystem_eventGetMaxLocalPlayers_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonUserSubsystem_GetMaxLocalPlayers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUserSubsystem_GetMaxLocalPlayers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonUserSubsystem_GetMaxLocalPlayers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonUserSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonUserSubsystem_GetMaxLocalPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonUserSubsystem, nullptr, "GetMaxLocalPlayers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonUserSubsystem_GetMaxLocalPlayers_Statics::CommonUserSubsystem_eventGetMaxLocalPlayers_Parms), Z_Construct_UFunction_UCommonUserSubsystem_GetMaxLocalPlayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonUserSubsystem_GetMaxLocalPlayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonUserSubsystem_GetMaxLocalPlayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonUserSubsystem_GetMaxLocalPlayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonUserSubsystem_GetMaxLocalPlayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonUserSubsystem_GetMaxLocalPlayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonUserSubsystem_GetNumLocalPlayers_Statics
	{
		struct CommonUserSubsystem_eventGetNumLocalPlayers_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCommonUserSubsystem_GetNumLocalPlayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonUserSubsystem_eventGetNumLocalPlayers_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonUserSubsystem_GetNumLocalPlayers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUserSubsystem_GetNumLocalPlayers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonUserSubsystem_GetNumLocalPlayers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonUserSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonUserSubsystem_GetNumLocalPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonUserSubsystem, nullptr, "GetNumLocalPlayers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonUserSubsystem_GetNumLocalPlayers_Statics::CommonUserSubsystem_eventGetNumLocalPlayers_Parms), Z_Construct_UFunction_UCommonUserSubsystem_GetNumLocalPlayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonUserSubsystem_GetNumLocalPlayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonUserSubsystem_GetNumLocalPlayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonUserSubsystem_GetNumLocalPlayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonUserSubsystem_GetNumLocalPlayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonUserSubsystem_GetNumLocalPlayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForControllerId_Statics
	{
		struct CommonUserSubsystem_eventGetUserInfoForControllerId_Parms
		{
			int32 ControllerId;
			UCommonUserInfo* ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ControllerId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForControllerId_Statics::NewProp_ControllerId = { "ControllerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonUserSubsystem_eventGetUserInfoForControllerId_Parms, ControllerId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForControllerId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonUserSubsystem_eventGetUserInfoForControllerId_Parms, ReturnValue), Z_Construct_UClass_UCommonUserInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForControllerId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForControllerId_Statics::NewProp_ControllerId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForControllerId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForControllerId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonUserSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForControllerId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonUserSubsystem, nullptr, "GetUserInfoForControllerId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForControllerId_Statics::CommonUserSubsystem_eventGetUserInfoForControllerId_Parms), Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForControllerId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForControllerId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForControllerId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForControllerId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForControllerId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForControllerId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForInputDevice_Statics
	{
		struct FInputDeviceId
		{
			int32 InternalId;
		};

		struct CommonUserSubsystem_eventGetUserInfoForInputDevice_Parms
		{
			FInputDeviceId InputDevice;
			UCommonUserInfo* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputDevice;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForInputDevice_Statics::NewProp_InputDevice = { "InputDevice", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonUserSubsystem_eventGetUserInfoForInputDevice_Parms, InputDevice), Z_Construct_UScriptStruct_FInputDeviceId, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForInputDevice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonUserSubsystem_eventGetUserInfoForInputDevice_Parms, ReturnValue), Z_Construct_UClass_UCommonUserInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForInputDevice_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForInputDevice_Statics::NewProp_InputDevice,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForInputDevice_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForInputDevice_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonUserSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForInputDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonUserSubsystem, nullptr, "GetUserInfoForInputDevice", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForInputDevice_Statics::CommonUserSubsystem_eventGetUserInfoForInputDevice_Parms), Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForInputDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForInputDevice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForInputDevice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForInputDevice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForInputDevice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForInputDevice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForLocalPlayerIndex_Statics
	{
		struct CommonUserSubsystem_eventGetUserInfoForLocalPlayerIndex_Parms
		{
			int32 LocalPlayerIndex;
			UCommonUserInfo* ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_LocalPlayerIndex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForLocalPlayerIndex_Statics::NewProp_LocalPlayerIndex = { "LocalPlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonUserSubsystem_eventGetUserInfoForLocalPlayerIndex_Parms, LocalPlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForLocalPlayerIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonUserSubsystem_eventGetUserInfoForLocalPlayerIndex_Parms, ReturnValue), Z_Construct_UClass_UCommonUserInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForLocalPlayerIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForLocalPlayerIndex_Statics::NewProp_LocalPlayerIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForLocalPlayerIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForLocalPlayerIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonUserSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForLocalPlayerIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonUserSubsystem, nullptr, "GetUserInfoForLocalPlayerIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForLocalPlayerIndex_Statics::CommonUserSubsystem_eventGetUserInfoForLocalPlayerIndex_Parms), Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForLocalPlayerIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForLocalPlayerIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForLocalPlayerIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForLocalPlayerIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForLocalPlayerIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForLocalPlayerIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForPlatformUser_Statics
	{
		struct FPlatformUserId
		{
			int32 InternalId;
		};

		struct CommonUserSubsystem_eventGetUserInfoForPlatformUser_Parms
		{
			FPlatformUserId PlatformUser;
			UCommonUserInfo* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlatformUser;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForPlatformUser_Statics::NewProp_PlatformUser = { "PlatformUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonUserSubsystem_eventGetUserInfoForPlatformUser_Parms, PlatformUser), Z_Construct_UScriptStruct_FPlatformUserId, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForPlatformUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonUserSubsystem_eventGetUserInfoForPlatformUser_Parms, ReturnValue), Z_Construct_UClass_UCommonUserInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForPlatformUser_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForPlatformUser_Statics::NewProp_PlatformUser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForPlatformUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForPlatformUser_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonUserSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForPlatformUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonUserSubsystem, nullptr, "GetUserInfoForPlatformUser", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForPlatformUser_Statics::CommonUserSubsystem_eventGetUserInfoForPlatformUser_Parms), Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForPlatformUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForPlatformUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForPlatformUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForPlatformUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForPlatformUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForPlatformUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForPlatformUserIndex_Statics
	{
		struct CommonUserSubsystem_eventGetUserInfoForPlatformUserIndex_Parms
		{
			int32 PlatformUserIndex;
			UCommonUserInfo* ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlatformUserIndex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForPlatformUserIndex_Statics::NewProp_PlatformUserIndex = { "PlatformUserIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonUserSubsystem_eventGetUserInfoForPlatformUserIndex_Parms, PlatformUserIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForPlatformUserIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonUserSubsystem_eventGetUserInfoForPlatformUserIndex_Parms, ReturnValue), Z_Construct_UClass_UCommonUserInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForPlatformUserIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForPlatformUserIndex_Statics::NewProp_PlatformUserIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForPlatformUserIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForPlatformUserIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonUserSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForPlatformUserIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonUserSubsystem, nullptr, "GetUserInfoForPlatformUserIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForPlatformUserIndex_Statics::CommonUserSubsystem_eventGetUserInfoForPlatformUserIndex_Parms), Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForPlatformUserIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForPlatformUserIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForPlatformUserIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForPlatformUserIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForPlatformUserIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForPlatformUserIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForUniqueNetId_Statics
	{
		struct CommonUserSubsystem_eventGetUserInfoForUniqueNetId_Parms
		{
			FUniqueNetIdRepl NetId;
			UCommonUserInfo* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NetId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NetId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForUniqueNetId_Statics::NewProp_NetId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForUniqueNetId_Statics::NewProp_NetId = { "NetId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonUserSubsystem_eventGetUserInfoForUniqueNetId_Parms, NetId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForUniqueNetId_Statics::NewProp_NetId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForUniqueNetId_Statics::NewProp_NetId_MetaData)) }; // 2142661840
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForUniqueNetId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonUserSubsystem_eventGetUserInfoForUniqueNetId_Parms, ReturnValue), Z_Construct_UClass_UCommonUserInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForUniqueNetId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForUniqueNetId_Statics::NewProp_NetId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForUniqueNetId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForUniqueNetId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonUserSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForUniqueNetId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonUserSubsystem, nullptr, "GetUserInfoForUniqueNetId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForUniqueNetId_Statics::CommonUserSubsystem_eventGetUserInfoForUniqueNetId_Parms), Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForUniqueNetId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForUniqueNetId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForUniqueNetId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForUniqueNetId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForUniqueNetId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForUniqueNetId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonUserSubsystem_HasTraitTag_Statics
	{
		struct CommonUserSubsystem_eventHasTraitTag_Parms
		{
			FGameplayTag TraitTag;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraitTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TraitTag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonUserSubsystem_HasTraitTag_Statics::NewProp_TraitTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonUserSubsystem_HasTraitTag_Statics::NewProp_TraitTag = { "TraitTag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonUserSubsystem_eventHasTraitTag_Parms, TraitTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UCommonUserSubsystem_HasTraitTag_Statics::NewProp_TraitTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonUserSubsystem_HasTraitTag_Statics::NewProp_TraitTag_MetaData)) }; // 1225434376
	void Z_Construct_UFunction_UCommonUserSubsystem_HasTraitTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CommonUserSubsystem_eventHasTraitTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonUserSubsystem_HasTraitTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CommonUserSubsystem_eventHasTraitTag_Parms), &Z_Construct_UFunction_UCommonUserSubsystem_HasTraitTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonUserSubsystem_HasTraitTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUserSubsystem_HasTraitTag_Statics::NewProp_TraitTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUserSubsystem_HasTraitTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonUserSubsystem_HasTraitTag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonUserSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonUserSubsystem_HasTraitTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonUserSubsystem, nullptr, "HasTraitTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonUserSubsystem_HasTraitTag_Statics::CommonUserSubsystem_eventHasTraitTag_Parms), Z_Construct_UFunction_UCommonUserSubsystem_HasTraitTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonUserSubsystem_HasTraitTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonUserSubsystem_HasTraitTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonUserSubsystem_HasTraitTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonUserSubsystem_HasTraitTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonUserSubsystem_HasTraitTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonUserSubsystem_ListenForLoginKeyInput_Statics
	{
		struct CommonUserSubsystem_eventListenForLoginKeyInput_Parms
		{
			TArray<FKey> AnyUserKeys;
			TArray<FKey> NewUserKeys;
			FCommonUserInitializeParams Params;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnyUserKeys_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AnyUserKeys;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewUserKeys_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NewUserKeys;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonUserSubsystem_ListenForLoginKeyInput_Statics::NewProp_AnyUserKeys_Inner = { "AnyUserKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2101135134
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCommonUserSubsystem_ListenForLoginKeyInput_Statics::NewProp_AnyUserKeys = { "AnyUserKeys", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonUserSubsystem_eventListenForLoginKeyInput_Parms, AnyUserKeys), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2101135134
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonUserSubsystem_ListenForLoginKeyInput_Statics::NewProp_NewUserKeys_Inner = { "NewUserKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2101135134
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCommonUserSubsystem_ListenForLoginKeyInput_Statics::NewProp_NewUserKeys = { "NewUserKeys", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonUserSubsystem_eventListenForLoginKeyInput_Parms, NewUserKeys), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2101135134
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonUserSubsystem_ListenForLoginKeyInput_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonUserSubsystem_eventListenForLoginKeyInput_Parms, Params), Z_Construct_UScriptStruct_FCommonUserInitializeParams, METADATA_PARAMS(nullptr, 0) }; // 2339978390
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonUserSubsystem_ListenForLoginKeyInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUserSubsystem_ListenForLoginKeyInput_Statics::NewProp_AnyUserKeys_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUserSubsystem_ListenForLoginKeyInput_Statics::NewProp_AnyUserKeys,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUserSubsystem_ListenForLoginKeyInput_Statics::NewProp_NewUserKeys_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUserSubsystem_ListenForLoginKeyInput_Statics::NewProp_NewUserKeys,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUserSubsystem_ListenForLoginKeyInput_Statics::NewProp_Params,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonUserSubsystem_ListenForLoginKeyInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonUserSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonUserSubsystem_ListenForLoginKeyInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonUserSubsystem, nullptr, "ListenForLoginKeyInput", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonUserSubsystem_ListenForLoginKeyInput_Statics::CommonUserSubsystem_eventListenForLoginKeyInput_Parms), Z_Construct_UFunction_UCommonUserSubsystem_ListenForLoginKeyInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonUserSubsystem_ListenForLoginKeyInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonUserSubsystem_ListenForLoginKeyInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonUserSubsystem_ListenForLoginKeyInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonUserSubsystem_ListenForLoginKeyInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonUserSubsystem_ListenForLoginKeyInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonUserSubsystem_ResetUserState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonUserSubsystem_ResetUserState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonUserSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonUserSubsystem_ResetUserState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonUserSubsystem, nullptr, "ResetUserState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonUserSubsystem_ResetUserState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonUserSubsystem_ResetUserState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonUserSubsystem_ResetUserState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonUserSubsystem_ResetUserState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonUserSubsystem_SendSystemMessage_Statics
	{
		struct CommonUserSubsystem_eventSendSystemMessage_Parms
		{
			FGameplayTag MessageType;
			FText TitleText;
			FText BodyText;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_MessageType;
		static const UECodeGen_Private::FTextPropertyParams NewProp_TitleText;
		static const UECodeGen_Private::FTextPropertyParams NewProp_BodyText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonUserSubsystem_SendSystemMessage_Statics::NewProp_MessageType = { "MessageType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonUserSubsystem_eventSendSystemMessage_Parms, MessageType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCommonUserSubsystem_SendSystemMessage_Statics::NewProp_TitleText = { "TitleText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonUserSubsystem_eventSendSystemMessage_Parms, TitleText), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCommonUserSubsystem_SendSystemMessage_Statics::NewProp_BodyText = { "BodyText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonUserSubsystem_eventSendSystemMessage_Parms, BodyText), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonUserSubsystem_SendSystemMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUserSubsystem_SendSystemMessage_Statics::NewProp_MessageType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUserSubsystem_SendSystemMessage_Statics::NewProp_TitleText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUserSubsystem_SendSystemMessage_Statics::NewProp_BodyText,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonUserSubsystem_SendSystemMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonUserSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonUserSubsystem_SendSystemMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonUserSubsystem, nullptr, "SendSystemMessage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonUserSubsystem_SendSystemMessage_Statics::CommonUserSubsystem_eventSendSystemMessage_Parms), Z_Construct_UFunction_UCommonUserSubsystem_SendSystemMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonUserSubsystem_SendSystemMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonUserSubsystem_SendSystemMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonUserSubsystem_SendSystemMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonUserSubsystem_SendSystemMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonUserSubsystem_SendSystemMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonUserSubsystem_SetMaxLocalPlayers_Statics
	{
		struct CommonUserSubsystem_eventSetMaxLocalPlayers_Parms
		{
			int32 InMaxLocalPLayers;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InMaxLocalPLayers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCommonUserSubsystem_SetMaxLocalPlayers_Statics::NewProp_InMaxLocalPLayers = { "InMaxLocalPLayers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonUserSubsystem_eventSetMaxLocalPlayers_Parms, InMaxLocalPLayers), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonUserSubsystem_SetMaxLocalPlayers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUserSubsystem_SetMaxLocalPlayers_Statics::NewProp_InMaxLocalPLayers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonUserSubsystem_SetMaxLocalPlayers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonUserSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonUserSubsystem_SetMaxLocalPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonUserSubsystem, nullptr, "SetMaxLocalPlayers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonUserSubsystem_SetMaxLocalPlayers_Statics::CommonUserSubsystem_eventSetMaxLocalPlayers_Parms), Z_Construct_UFunction_UCommonUserSubsystem_SetMaxLocalPlayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonUserSubsystem_SetMaxLocalPlayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonUserSubsystem_SetMaxLocalPlayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonUserSubsystem_SetMaxLocalPlayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonUserSubsystem_SetMaxLocalPlayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonUserSubsystem_SetMaxLocalPlayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonUserSubsystem_ShouldWaitForStartInput_Statics
	{
		struct CommonUserSubsystem_eventShouldWaitForStartInput_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCommonUserSubsystem_ShouldWaitForStartInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CommonUserSubsystem_eventShouldWaitForStartInput_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonUserSubsystem_ShouldWaitForStartInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CommonUserSubsystem_eventShouldWaitForStartInput_Parms), &Z_Construct_UFunction_UCommonUserSubsystem_ShouldWaitForStartInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonUserSubsystem_ShouldWaitForStartInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUserSubsystem_ShouldWaitForStartInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonUserSubsystem_ShouldWaitForStartInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonUserSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonUserSubsystem_ShouldWaitForStartInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonUserSubsystem, nullptr, "ShouldWaitForStartInput", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonUserSubsystem_ShouldWaitForStartInput_Statics::CommonUserSubsystem_eventShouldWaitForStartInput_Parms), Z_Construct_UFunction_UCommonUserSubsystem_ShouldWaitForStartInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonUserSubsystem_ShouldWaitForStartInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonUserSubsystem_ShouldWaitForStartInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonUserSubsystem_ShouldWaitForStartInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonUserSubsystem_ShouldWaitForStartInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonUserSubsystem_ShouldWaitForStartInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonUserSubsystem_TryToInitializeForLocalPlay_Statics
	{
		struct FInputDeviceId
		{
			int32 InternalId;
		};

		struct CommonUserSubsystem_eventTryToInitializeForLocalPlay_Parms
		{
			int32 LocalPlayerIndex;
			FInputDeviceId PrimaryInputDevice;
			bool bCanUseGuestLogin;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_LocalPlayerIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrimaryInputDevice;
		static void NewProp_bCanUseGuestLogin_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanUseGuestLogin;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCommonUserSubsystem_TryToInitializeForLocalPlay_Statics::NewProp_LocalPlayerIndex = { "LocalPlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonUserSubsystem_eventTryToInitializeForLocalPlay_Parms, LocalPlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonUserSubsystem_TryToInitializeForLocalPlay_Statics::NewProp_PrimaryInputDevice = { "PrimaryInputDevice", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonUserSubsystem_eventTryToInitializeForLocalPlay_Parms, PrimaryInputDevice), Z_Construct_UScriptStruct_FInputDeviceId, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCommonUserSubsystem_TryToInitializeForLocalPlay_Statics::NewProp_bCanUseGuestLogin_SetBit(void* Obj)
	{
		((CommonUserSubsystem_eventTryToInitializeForLocalPlay_Parms*)Obj)->bCanUseGuestLogin = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonUserSubsystem_TryToInitializeForLocalPlay_Statics::NewProp_bCanUseGuestLogin = { "bCanUseGuestLogin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CommonUserSubsystem_eventTryToInitializeForLocalPlay_Parms), &Z_Construct_UFunction_UCommonUserSubsystem_TryToInitializeForLocalPlay_Statics::NewProp_bCanUseGuestLogin_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCommonUserSubsystem_TryToInitializeForLocalPlay_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CommonUserSubsystem_eventTryToInitializeForLocalPlay_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonUserSubsystem_TryToInitializeForLocalPlay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CommonUserSubsystem_eventTryToInitializeForLocalPlay_Parms), &Z_Construct_UFunction_UCommonUserSubsystem_TryToInitializeForLocalPlay_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonUserSubsystem_TryToInitializeForLocalPlay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUserSubsystem_TryToInitializeForLocalPlay_Statics::NewProp_LocalPlayerIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUserSubsystem_TryToInitializeForLocalPlay_Statics::NewProp_PrimaryInputDevice,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUserSubsystem_TryToInitializeForLocalPlay_Statics::NewProp_bCanUseGuestLogin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUserSubsystem_TryToInitializeForLocalPlay_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonUserSubsystem_TryToInitializeForLocalPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonUserSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonUserSubsystem_TryToInitializeForLocalPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonUserSubsystem, nullptr, "TryToInitializeForLocalPlay", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonUserSubsystem_TryToInitializeForLocalPlay_Statics::CommonUserSubsystem_eventTryToInitializeForLocalPlay_Parms), Z_Construct_UFunction_UCommonUserSubsystem_TryToInitializeForLocalPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonUserSubsystem_TryToInitializeForLocalPlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonUserSubsystem_TryToInitializeForLocalPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonUserSubsystem_TryToInitializeForLocalPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonUserSubsystem_TryToInitializeForLocalPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonUserSubsystem_TryToInitializeForLocalPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonUserSubsystem_TryToInitializeUser_Statics
	{
		struct CommonUserSubsystem_eventTryToInitializeUser_Parms
		{
			FCommonUserInitializeParams Params;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonUserSubsystem_TryToInitializeUser_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonUserSubsystem_eventTryToInitializeUser_Parms, Params), Z_Construct_UScriptStruct_FCommonUserInitializeParams, METADATA_PARAMS(nullptr, 0) }; // 2339978390
	void Z_Construct_UFunction_UCommonUserSubsystem_TryToInitializeUser_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CommonUserSubsystem_eventTryToInitializeUser_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonUserSubsystem_TryToInitializeUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CommonUserSubsystem_eventTryToInitializeUser_Parms), &Z_Construct_UFunction_UCommonUserSubsystem_TryToInitializeUser_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonUserSubsystem_TryToInitializeUser_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUserSubsystem_TryToInitializeUser_Statics::NewProp_Params,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUserSubsystem_TryToInitializeUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonUserSubsystem_TryToInitializeUser_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonUserSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonUserSubsystem_TryToInitializeUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonUserSubsystem, nullptr, "TryToInitializeUser", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonUserSubsystem_TryToInitializeUser_Statics::CommonUserSubsystem_eventTryToInitializeUser_Parms), Z_Construct_UFunction_UCommonUserSubsystem_TryToInitializeUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonUserSubsystem_TryToInitializeUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonUserSubsystem_TryToInitializeUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonUserSubsystem_TryToInitializeUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonUserSubsystem_TryToInitializeUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonUserSubsystem_TryToInitializeUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonUserSubsystem_TryToLoginForOnlinePlay_Statics
	{
		struct CommonUserSubsystem_eventTryToLoginForOnlinePlay_Parms
		{
			int32 LocalPlayerIndex;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_LocalPlayerIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCommonUserSubsystem_TryToLoginForOnlinePlay_Statics::NewProp_LocalPlayerIndex = { "LocalPlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonUserSubsystem_eventTryToLoginForOnlinePlay_Parms, LocalPlayerIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCommonUserSubsystem_TryToLoginForOnlinePlay_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CommonUserSubsystem_eventTryToLoginForOnlinePlay_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonUserSubsystem_TryToLoginForOnlinePlay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CommonUserSubsystem_eventTryToLoginForOnlinePlay_Parms), &Z_Construct_UFunction_UCommonUserSubsystem_TryToLoginForOnlinePlay_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonUserSubsystem_TryToLoginForOnlinePlay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUserSubsystem_TryToLoginForOnlinePlay_Statics::NewProp_LocalPlayerIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUserSubsystem_TryToLoginForOnlinePlay_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonUserSubsystem_TryToLoginForOnlinePlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonUserSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonUserSubsystem_TryToLoginForOnlinePlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonUserSubsystem, nullptr, "TryToLoginForOnlinePlay", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonUserSubsystem_TryToLoginForOnlinePlay_Statics::CommonUserSubsystem_eventTryToLoginForOnlinePlay_Parms), Z_Construct_UFunction_UCommonUserSubsystem_TryToLoginForOnlinePlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonUserSubsystem_TryToLoginForOnlinePlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonUserSubsystem_TryToLoginForOnlinePlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonUserSubsystem_TryToLoginForOnlinePlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonUserSubsystem_TryToLoginForOnlinePlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonUserSubsystem_TryToLoginForOnlinePlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonUserSubsystem);
	UClass* Z_Construct_UClass_UCommonUserSubsystem_NoRegister()
	{
		return UCommonUserSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UCommonUserSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnUserInitializeComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUserInitializeComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnHandleSystemMessage_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHandleSystemMessage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnUserPrivilegeChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUserPrivilegeChanged;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LocalUserInfos_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LocalUserInfos_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserInfos_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_LocalUserInfos;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonUserSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUser,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCommonUserSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCommonUserSubsystem_CancelUserInitialization, "CancelUserInitialization" }, // 2125481141
		{ &Z_Construct_UFunction_UCommonUserSubsystem_GetLocalPlayerInitializationState, "GetLocalPlayerInitializationState" }, // 76474890
		{ &Z_Construct_UFunction_UCommonUserSubsystem_GetMaxLocalPlayers, "GetMaxLocalPlayers" }, // 2575226035
		{ &Z_Construct_UFunction_UCommonUserSubsystem_GetNumLocalPlayers, "GetNumLocalPlayers" }, // 317940622
		{ &Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForControllerId, "GetUserInfoForControllerId" }, // 1443647985
		{ &Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForInputDevice, "GetUserInfoForInputDevice" }, // 375340974
		{ &Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForLocalPlayerIndex, "GetUserInfoForLocalPlayerIndex" }, // 593683183
		{ &Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForPlatformUser, "GetUserInfoForPlatformUser" }, // 699899872
		{ &Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForPlatformUserIndex, "GetUserInfoForPlatformUserIndex" }, // 4028952130
		{ &Z_Construct_UFunction_UCommonUserSubsystem_GetUserInfoForUniqueNetId, "GetUserInfoForUniqueNetId" }, // 2795976414
		{ &Z_Construct_UFunction_UCommonUserSubsystem_HasTraitTag, "HasTraitTag" }, // 3922067219
		{ &Z_Construct_UFunction_UCommonUserSubsystem_ListenForLoginKeyInput, "ListenForLoginKeyInput" }, // 256749990
		{ &Z_Construct_UFunction_UCommonUserSubsystem_ResetUserState, "ResetUserState" }, // 1728126817
		{ &Z_Construct_UFunction_UCommonUserSubsystem_SendSystemMessage, "SendSystemMessage" }, // 855509386
		{ &Z_Construct_UFunction_UCommonUserSubsystem_SetMaxLocalPlayers, "SetMaxLocalPlayers" }, // 3802267154
		{ &Z_Construct_UFunction_UCommonUserSubsystem_ShouldWaitForStartInput, "ShouldWaitForStartInput" }, // 4166289175
		{ &Z_Construct_UFunction_UCommonUserSubsystem_TryToInitializeForLocalPlay, "TryToInitializeForLocalPlay" }, // 3305251063
		{ &Z_Construct_UFunction_UCommonUserSubsystem_TryToInitializeUser, "TryToInitializeUser" }, // 459816462
		{ &Z_Construct_UFunction_UCommonUserSubsystem_TryToLoginForOnlinePlay, "TryToLoginForOnlinePlay" }, // 2127074180
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonUserSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CommonUserSubsystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CommonUserSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonUserSubsystem_Statics::NewProp_OnUserInitializeComplete_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonUserSubsystem" },
		{ "ModuleRelativePath", "Public/CommonUserSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCommonUserSubsystem_Statics::NewProp_OnUserInitializeComplete = { "OnUserInitializeComplete", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonUserSubsystem, OnUserInitializeComplete), Z_Construct_UDelegateFunction_CommonUser_CommonUserOnInitializeCompleteMulticast__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCommonUserSubsystem_Statics::NewProp_OnUserInitializeComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonUserSubsystem_Statics::NewProp_OnUserInitializeComplete_MetaData)) }; // 1725772432
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonUserSubsystem_Statics::NewProp_OnHandleSystemMessage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonUserSubsystem" },
		{ "ModuleRelativePath", "Public/CommonUserSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCommonUserSubsystem_Statics::NewProp_OnHandleSystemMessage = { "OnHandleSystemMessage", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonUserSubsystem, OnHandleSystemMessage), Z_Construct_UDelegateFunction_CommonUser_CommonUserHandleSystemMessageDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCommonUserSubsystem_Statics::NewProp_OnHandleSystemMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonUserSubsystem_Statics::NewProp_OnHandleSystemMessage_MetaData)) }; // 2333985921
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonUserSubsystem_Statics::NewProp_OnUserPrivilegeChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonUserSubsystem" },
		{ "ModuleRelativePath", "Public/CommonUserSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCommonUserSubsystem_Statics::NewProp_OnUserPrivilegeChanged = { "OnUserPrivilegeChanged", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonUserSubsystem, OnUserPrivilegeChanged), Z_Construct_UDelegateFunction_CommonUser_CommonUserAvailabilityChangedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCommonUserSubsystem_Statics::NewProp_OnUserPrivilegeChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonUserSubsystem_Statics::NewProp_OnUserPrivilegeChanged_MetaData)) }; // 1306678957
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCommonUserSubsystem_Statics::NewProp_LocalUserInfos_ValueProp = { "LocalUserInfos", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UCommonUserInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCommonUserSubsystem_Statics::NewProp_LocalUserInfos_Key_KeyProp = { "LocalUserInfos_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonUserSubsystem_Statics::NewProp_LocalUserInfos_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonUserSubsystem" },
		{ "ModuleRelativePath", "Public/CommonUserSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCommonUserSubsystem_Statics::NewProp_LocalUserInfos = { "LocalUserInfos", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonUserSubsystem, LocalUserInfos), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCommonUserSubsystem_Statics::NewProp_LocalUserInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonUserSubsystem_Statics::NewProp_LocalUserInfos_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonUserSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonUserSubsystem_Statics::NewProp_OnUserInitializeComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonUserSubsystem_Statics::NewProp_OnHandleSystemMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonUserSubsystem_Statics::NewProp_OnUserPrivilegeChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonUserSubsystem_Statics::NewProp_LocalUserInfos_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonUserSubsystem_Statics::NewProp_LocalUserInfos_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonUserSubsystem_Statics::NewProp_LocalUserInfos,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonUserSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonUserSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonUserSubsystem_Statics::ClassParams = {
		&UCommonUserSubsystem::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCommonUserSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCommonUserSubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCommonUserSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonUserSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonUserSubsystem()
	{
		if (!Z_Registration_Info_UClass_UCommonUserSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonUserSubsystem.OuterSingleton, Z_Construct_UClass_UCommonUserSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonUserSubsystem.OuterSingleton;
	}
	template<> COMMONUSER_API UClass* StaticClass<UCommonUserSubsystem>()
	{
		return UCommonUserSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonUserSubsystem);
	UCommonUserSubsystem::~UCommonUserSubsystem() {}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCommonUserSubsystem, UCommonUserSubsystem::StaticClass, TEXT("UCommonUserSubsystem"), &Z_Registration_Info_UClass_UCommonUserSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonUserSubsystem), 329553519U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_3358412670(TEXT("/Script/CommonUser"),
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
