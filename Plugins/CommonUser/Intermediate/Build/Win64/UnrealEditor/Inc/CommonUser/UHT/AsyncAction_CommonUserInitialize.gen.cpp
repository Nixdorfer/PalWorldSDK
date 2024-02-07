// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUser/Public/AsyncAction_CommonUserInitialize.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsyncAction_CommonUserInitialize() {}
// Cross Module References
	COMMONUSER_API UClass* Z_Construct_UClass_UAsyncAction_CommonUserInitialize();
	COMMONUSER_API UClass* Z_Construct_UClass_UAsyncAction_CommonUserInitialize_NoRegister();
	COMMONUSER_API UClass* Z_Construct_UClass_UCommonUserInfo_NoRegister();
	COMMONUSER_API UClass* Z_Construct_UClass_UCommonUserSubsystem_NoRegister();
	COMMONUSER_API UEnum* Z_Construct_UEnum_CommonUser_ECommonUserOnlineContext();
	COMMONUSER_API UEnum* Z_Construct_UEnum_CommonUser_ECommonUserPrivilege();
	COMMONUSER_API UFunction* Z_Construct_UDelegateFunction_CommonUser_CommonUserOnInitializeCompleteMulticast__DelegateSignature();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInputDeviceId();
	ENGINE_API UClass* Z_Construct_UClass_UCancellableAsyncAction();
	UPackage* Z_Construct_UPackage__Script_CommonUser();
// End Cross Module References
	DEFINE_FUNCTION(UAsyncAction_CommonUserInitialize::execHandleInitializationComplete)
	{
		P_GET_OBJECT(UCommonUserInfo,Z_Param_UserInfo);
		P_GET_UBOOL(Z_Param_bSuccess);
		P_GET_PROPERTY(FTextProperty,Z_Param_Error);
		P_GET_ENUM(ECommonUserPrivilege,Z_Param_RequestedPrivilege);
		P_GET_ENUM(ECommonUserOnlineContext,Z_Param_OnlineContext);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleInitializationComplete(Z_Param_UserInfo,Z_Param_bSuccess,Z_Param_Error,ECommonUserPrivilege(Z_Param_RequestedPrivilege),ECommonUserOnlineContext(Z_Param_OnlineContext));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAsyncAction_CommonUserInitialize::execInitializeForLocalPlay)
	{
		P_GET_OBJECT(UCommonUserSubsystem,Z_Param_Target);
		P_GET_PROPERTY(FIntProperty,Z_Param_LocalPlayerIndex);
		P_GET_STRUCT(FInputDeviceId,Z_Param_PrimaryInputDevice);
		P_GET_UBOOL(Z_Param_bCanUseGuestLogin);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAsyncAction_CommonUserInitialize**)Z_Param__Result=UAsyncAction_CommonUserInitialize::InitializeForLocalPlay(Z_Param_Target,Z_Param_LocalPlayerIndex,Z_Param_PrimaryInputDevice,Z_Param_bCanUseGuestLogin);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAsyncAction_CommonUserInitialize::execLoginForOnlinePlay)
	{
		P_GET_OBJECT(UCommonUserSubsystem,Z_Param_Target);
		P_GET_PROPERTY(FIntProperty,Z_Param_LocalPlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAsyncAction_CommonUserInitialize**)Z_Param__Result=UAsyncAction_CommonUserInitialize::LoginForOnlinePlay(Z_Param_Target,Z_Param_LocalPlayerIndex);
		P_NATIVE_END;
	}
	void UAsyncAction_CommonUserInitialize::StaticRegisterNativesUAsyncAction_CommonUserInitialize()
	{
		UClass* Class = UAsyncAction_CommonUserInitialize::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleInitializationComplete", &UAsyncAction_CommonUserInitialize::execHandleInitializationComplete },
			{ "InitializeForLocalPlay", &UAsyncAction_CommonUserInitialize::execInitializeForLocalPlay },
			{ "LoginForOnlinePlay", &UAsyncAction_CommonUserInitialize::execLoginForOnlinePlay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_HandleInitializationComplete_Statics
	{
		struct AsyncAction_CommonUserInitialize_eventHandleInitializationComplete_Parms
		{
			const UCommonUserInfo* UserInfo;
			bool bSuccess;
			FText Error;
			ECommonUserPrivilege RequestedPrivilege;
			ECommonUserOnlineContext OnlineContext;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserInfo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UserInfo;
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FTextPropertyParams NewProp_Error;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RequestedPrivilege_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RequestedPrivilege;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OnlineContext_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OnlineContext;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_HandleInitializationComplete_Statics::NewProp_UserInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_HandleInitializationComplete_Statics::NewProp_UserInfo = { "UserInfo", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncAction_CommonUserInitialize_eventHandleInitializationComplete_Parms, UserInfo), Z_Construct_UClass_UCommonUserInfo_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_HandleInitializationComplete_Statics::NewProp_UserInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_HandleInitializationComplete_Statics::NewProp_UserInfo_MetaData)) };
	void Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_HandleInitializationComplete_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((AsyncAction_CommonUserInitialize_eventHandleInitializationComplete_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_HandleInitializationComplete_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AsyncAction_CommonUserInitialize_eventHandleInitializationComplete_Parms), &Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_HandleInitializationComplete_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_HandleInitializationComplete_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncAction_CommonUserInitialize_eventHandleInitializationComplete_Parms, Error), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_HandleInitializationComplete_Statics::NewProp_RequestedPrivilege_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_HandleInitializationComplete_Statics::NewProp_RequestedPrivilege = { "RequestedPrivilege", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncAction_CommonUserInitialize_eventHandleInitializationComplete_Parms, RequestedPrivilege), Z_Construct_UEnum_CommonUser_ECommonUserPrivilege, METADATA_PARAMS(nullptr, 0) }; // 3368067200
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_HandleInitializationComplete_Statics::NewProp_OnlineContext_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_HandleInitializationComplete_Statics::NewProp_OnlineContext = { "OnlineContext", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncAction_CommonUserInitialize_eventHandleInitializationComplete_Parms, OnlineContext), Z_Construct_UEnum_CommonUser_ECommonUserOnlineContext, METADATA_PARAMS(nullptr, 0) }; // 731275418
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_HandleInitializationComplete_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_HandleInitializationComplete_Statics::NewProp_UserInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_HandleInitializationComplete_Statics::NewProp_bSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_HandleInitializationComplete_Statics::NewProp_Error,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_HandleInitializationComplete_Statics::NewProp_RequestedPrivilege_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_HandleInitializationComplete_Statics::NewProp_RequestedPrivilege,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_HandleInitializationComplete_Statics::NewProp_OnlineContext_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_HandleInitializationComplete_Statics::NewProp_OnlineContext,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_HandleInitializationComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncAction_CommonUserInitialize.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_HandleInitializationComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncAction_CommonUserInitialize, nullptr, "HandleInitializationComplete", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_HandleInitializationComplete_Statics::AsyncAction_CommonUserInitialize_eventHandleInitializationComplete_Parms), Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_HandleInitializationComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_HandleInitializationComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_HandleInitializationComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_HandleInitializationComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_HandleInitializationComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_HandleInitializationComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_InitializeForLocalPlay_Statics
	{
		struct FInputDeviceId
		{
			int32 InternalId;
		};

		struct AsyncAction_CommonUserInitialize_eventInitializeForLocalPlay_Parms
		{
			UCommonUserSubsystem* Target;
			int32 LocalPlayerIndex;
			FInputDeviceId PrimaryInputDevice;
			bool bCanUseGuestLogin;
			UAsyncAction_CommonUserInitialize* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LocalPlayerIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrimaryInputDevice;
		static void NewProp_bCanUseGuestLogin_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanUseGuestLogin;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_InitializeForLocalPlay_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncAction_CommonUserInitialize_eventInitializeForLocalPlay_Parms, Target), Z_Construct_UClass_UCommonUserSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_InitializeForLocalPlay_Statics::NewProp_LocalPlayerIndex = { "LocalPlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncAction_CommonUserInitialize_eventInitializeForLocalPlay_Parms, LocalPlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_InitializeForLocalPlay_Statics::NewProp_PrimaryInputDevice = { "PrimaryInputDevice", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncAction_CommonUserInitialize_eventInitializeForLocalPlay_Parms, PrimaryInputDevice), Z_Construct_UScriptStruct_FInputDeviceId, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_InitializeForLocalPlay_Statics::NewProp_bCanUseGuestLogin_SetBit(void* Obj)
	{
		((AsyncAction_CommonUserInitialize_eventInitializeForLocalPlay_Parms*)Obj)->bCanUseGuestLogin = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_InitializeForLocalPlay_Statics::NewProp_bCanUseGuestLogin = { "bCanUseGuestLogin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AsyncAction_CommonUserInitialize_eventInitializeForLocalPlay_Parms), &Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_InitializeForLocalPlay_Statics::NewProp_bCanUseGuestLogin_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_InitializeForLocalPlay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncAction_CommonUserInitialize_eventInitializeForLocalPlay_Parms, ReturnValue), Z_Construct_UClass_UAsyncAction_CommonUserInitialize_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_InitializeForLocalPlay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_InitializeForLocalPlay_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_InitializeForLocalPlay_Statics::NewProp_LocalPlayerIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_InitializeForLocalPlay_Statics::NewProp_PrimaryInputDevice,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_InitializeForLocalPlay_Statics::NewProp_bCanUseGuestLogin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_InitializeForLocalPlay_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_InitializeForLocalPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncAction_CommonUserInitialize.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_InitializeForLocalPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncAction_CommonUserInitialize, nullptr, "InitializeForLocalPlay", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_InitializeForLocalPlay_Statics::AsyncAction_CommonUserInitialize_eventInitializeForLocalPlay_Parms), Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_InitializeForLocalPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_InitializeForLocalPlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_InitializeForLocalPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_InitializeForLocalPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_InitializeForLocalPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_InitializeForLocalPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_LoginForOnlinePlay_Statics
	{
		struct AsyncAction_CommonUserInitialize_eventLoginForOnlinePlay_Parms
		{
			UCommonUserSubsystem* Target;
			int32 LocalPlayerIndex;
			UAsyncAction_CommonUserInitialize* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LocalPlayerIndex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_LoginForOnlinePlay_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncAction_CommonUserInitialize_eventLoginForOnlinePlay_Parms, Target), Z_Construct_UClass_UCommonUserSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_LoginForOnlinePlay_Statics::NewProp_LocalPlayerIndex = { "LocalPlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncAction_CommonUserInitialize_eventLoginForOnlinePlay_Parms, LocalPlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_LoginForOnlinePlay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncAction_CommonUserInitialize_eventLoginForOnlinePlay_Parms, ReturnValue), Z_Construct_UClass_UAsyncAction_CommonUserInitialize_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_LoginForOnlinePlay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_LoginForOnlinePlay_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_LoginForOnlinePlay_Statics::NewProp_LocalPlayerIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_LoginForOnlinePlay_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_LoginForOnlinePlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncAction_CommonUserInitialize.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_LoginForOnlinePlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncAction_CommonUserInitialize, nullptr, "LoginForOnlinePlay", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_LoginForOnlinePlay_Statics::AsyncAction_CommonUserInitialize_eventLoginForOnlinePlay_Parms), Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_LoginForOnlinePlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_LoginForOnlinePlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_LoginForOnlinePlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_LoginForOnlinePlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_LoginForOnlinePlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_LoginForOnlinePlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAsyncAction_CommonUserInitialize);
	UClass* Z_Construct_UClass_UAsyncAction_CommonUserInitialize_NoRegister()
	{
		return UAsyncAction_CommonUserInitialize::StaticClass();
	}
	struct Z_Construct_UClass_UAsyncAction_CommonUserInitialize_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnInitializationComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInitializationComplete;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAsyncAction_CommonUserInitialize_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCancellableAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUser,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAsyncAction_CommonUserInitialize_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_HandleInitializationComplete, "HandleInitializationComplete" }, // 3235222636
		{ &Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_InitializeForLocalPlay, "InitializeForLocalPlay" }, // 3504123728
		{ &Z_Construct_UFunction_UAsyncAction_CommonUserInitialize_LoginForOnlinePlay, "LoginForOnlinePlay" }, // 1594359551
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncAction_CommonUserInitialize_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AsyncAction_CommonUserInitialize.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AsyncAction_CommonUserInitialize.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncAction_CommonUserInitialize_Statics::NewProp_OnInitializationComplete_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AsyncAction_CommonUserInitialize" },
		{ "ModuleRelativePath", "Public/AsyncAction_CommonUserInitialize.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncAction_CommonUserInitialize_Statics::NewProp_OnInitializationComplete = { "OnInitializationComplete", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAsyncAction_CommonUserInitialize, OnInitializationComplete), Z_Construct_UDelegateFunction_CommonUser_CommonUserOnInitializeCompleteMulticast__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAsyncAction_CommonUserInitialize_Statics::NewProp_OnInitializationComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_CommonUserInitialize_Statics::NewProp_OnInitializationComplete_MetaData)) }; // 1725772432
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncAction_CommonUserInitialize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncAction_CommonUserInitialize_Statics::NewProp_OnInitializationComplete,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAsyncAction_CommonUserInitialize_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncAction_CommonUserInitialize>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncAction_CommonUserInitialize_Statics::ClassParams = {
		&UAsyncAction_CommonUserInitialize::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAsyncAction_CommonUserInitialize_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_CommonUserInitialize_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAsyncAction_CommonUserInitialize_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_CommonUserInitialize_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAsyncAction_CommonUserInitialize()
	{
		if (!Z_Registration_Info_UClass_UAsyncAction_CommonUserInitialize.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncAction_CommonUserInitialize.OuterSingleton, Z_Construct_UClass_UAsyncAction_CommonUserInitialize_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAsyncAction_CommonUserInitialize.OuterSingleton;
	}
	template<> COMMONUSER_API UClass* StaticClass<UAsyncAction_CommonUserInitialize>()
	{
		return UAsyncAction_CommonUserInitialize::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncAction_CommonUserInitialize);
	UAsyncAction_CommonUserInitialize::~UAsyncAction_CommonUserInitialize() {}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_AsyncAction_CommonUserInitialize_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_AsyncAction_CommonUserInitialize_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAsyncAction_CommonUserInitialize, UAsyncAction_CommonUserInitialize::StaticClass, TEXT("UAsyncAction_CommonUserInitialize"), &Z_Registration_Info_UClass_UAsyncAction_CommonUserInitialize, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncAction_CommonUserInitialize), 1505837541U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_AsyncAction_CommonUserInitialize_h_2618854014(TEXT("/Script/CommonUser"),
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_AsyncAction_CommonUserInitialize_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_AsyncAction_CommonUserInitialize_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
