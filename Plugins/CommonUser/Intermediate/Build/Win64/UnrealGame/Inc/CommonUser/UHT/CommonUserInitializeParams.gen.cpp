// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUser/Public/CommonUserInitializeParams.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonUserInitializeParams() {}
// Cross Module References
	COMMONUSER_API UEnum* Z_Construct_UEnum_CommonUser_ECommonUserOnlineContext();
	COMMONUSER_API UEnum* Z_Construct_UEnum_CommonUser_ECommonUserPrivilege();
	COMMONUSER_API UFunction* Z_Construct_UDelegateFunction_CommonUser_CommonUserOnInitializeComplete__DelegateSignature();
	COMMONUSER_API UScriptStruct* Z_Construct_UScriptStruct_FCommonUserInitializeParams();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInputDeviceId();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPlatformUserId();
	UPackage* Z_Construct_UPackage__Script_CommonUser();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CommonUserInitializeParams;
class UScriptStruct* FCommonUserInitializeParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CommonUserInitializeParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CommonUserInitializeParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCommonUserInitializeParams, Z_Construct_UPackage__Script_CommonUser(), TEXT("CommonUserInitializeParams"));
	}
	return Z_Registration_Info_UScriptStruct_CommonUserInitializeParams.OuterSingleton;
}
template<> COMMONUSER_API UScriptStruct* StaticStruct<FCommonUserInitializeParams>()
{
	return FCommonUserInitializeParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCommonUserInitializeParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalPlayerIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LocalPlayerIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControllerId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ControllerId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryInputDevice_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrimaryInputDevice;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlatformUser_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlatformUser;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RequestedPrivilege_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequestedPrivilege_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RequestedPrivilege;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OnlineContext_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnlineContext_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OnlineContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanCreateNewLocalPlayer_MetaData[];
#endif
		static void NewProp_bCanCreateNewLocalPlayer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanCreateNewLocalPlayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanUseGuestLogin_MetaData[];
#endif
		static void NewProp_bCanUseGuestLogin_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanUseGuestLogin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSuppressLoginErrors_MetaData[];
#endif
		static void NewProp_bSuppressLoginErrors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuppressLoginErrors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnUserInitializeComplete_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnUserInitializeComplete;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonUserInitializeParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CommonUserInitializeParams.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCommonUserInitializeParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCommonUserInitializeParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonUserInitializeParams_Statics::NewProp_LocalPlayerIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonUserInitializeParams" },
		{ "ModuleRelativePath", "Public/CommonUserInitializeParams.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCommonUserInitializeParams_Statics::NewProp_LocalPlayerIndex = { "LocalPlayerIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCommonUserInitializeParams, LocalPlayerIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonUserInitializeParams_Statics::NewProp_LocalPlayerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonUserInitializeParams_Statics::NewProp_LocalPlayerIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonUserInitializeParams_Statics::NewProp_ControllerId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonUserInitializeParams" },
		{ "ModuleRelativePath", "Public/CommonUserInitializeParams.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCommonUserInitializeParams_Statics::NewProp_ControllerId = { "ControllerId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCommonUserInitializeParams, ControllerId), METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonUserInitializeParams_Statics::NewProp_ControllerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonUserInitializeParams_Statics::NewProp_ControllerId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonUserInitializeParams_Statics::NewProp_PrimaryInputDevice_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonUserInitializeParams" },
		{ "ModuleRelativePath", "Public/CommonUserInitializeParams.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCommonUserInitializeParams_Statics::NewProp_PrimaryInputDevice = { "PrimaryInputDevice", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCommonUserInitializeParams, PrimaryInputDevice), Z_Construct_UScriptStruct_FInputDeviceId, METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonUserInitializeParams_Statics::NewProp_PrimaryInputDevice_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonUserInitializeParams_Statics::NewProp_PrimaryInputDevice_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonUserInitializeParams_Statics::NewProp_PlatformUser_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonUserInitializeParams" },
		{ "ModuleRelativePath", "Public/CommonUserInitializeParams.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCommonUserInitializeParams_Statics::NewProp_PlatformUser = { "PlatformUser", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCommonUserInitializeParams, PlatformUser), Z_Construct_UScriptStruct_FPlatformUserId, METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonUserInitializeParams_Statics::NewProp_PlatformUser_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonUserInitializeParams_Statics::NewProp_PlatformUser_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCommonUserInitializeParams_Statics::NewProp_RequestedPrivilege_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonUserInitializeParams_Statics::NewProp_RequestedPrivilege_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonUserInitializeParams" },
		{ "ModuleRelativePath", "Public/CommonUserInitializeParams.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCommonUserInitializeParams_Statics::NewProp_RequestedPrivilege = { "RequestedPrivilege", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCommonUserInitializeParams, RequestedPrivilege), Z_Construct_UEnum_CommonUser_ECommonUserPrivilege, METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonUserInitializeParams_Statics::NewProp_RequestedPrivilege_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonUserInitializeParams_Statics::NewProp_RequestedPrivilege_MetaData)) }; // 3368067200
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCommonUserInitializeParams_Statics::NewProp_OnlineContext_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonUserInitializeParams_Statics::NewProp_OnlineContext_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonUserInitializeParams" },
		{ "ModuleRelativePath", "Public/CommonUserInitializeParams.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCommonUserInitializeParams_Statics::NewProp_OnlineContext = { "OnlineContext", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCommonUserInitializeParams, OnlineContext), Z_Construct_UEnum_CommonUser_ECommonUserOnlineContext, METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonUserInitializeParams_Statics::NewProp_OnlineContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonUserInitializeParams_Statics::NewProp_OnlineContext_MetaData)) }; // 731275418
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonUserInitializeParams_Statics::NewProp_bCanCreateNewLocalPlayer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonUserInitializeParams" },
		{ "ModuleRelativePath", "Public/CommonUserInitializeParams.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCommonUserInitializeParams_Statics::NewProp_bCanCreateNewLocalPlayer_SetBit(void* Obj)
	{
		((FCommonUserInitializeParams*)Obj)->bCanCreateNewLocalPlayer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCommonUserInitializeParams_Statics::NewProp_bCanCreateNewLocalPlayer = { "bCanCreateNewLocalPlayer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FCommonUserInitializeParams), &Z_Construct_UScriptStruct_FCommonUserInitializeParams_Statics::NewProp_bCanCreateNewLocalPlayer_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonUserInitializeParams_Statics::NewProp_bCanCreateNewLocalPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonUserInitializeParams_Statics::NewProp_bCanCreateNewLocalPlayer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonUserInitializeParams_Statics::NewProp_bCanUseGuestLogin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonUserInitializeParams" },
		{ "ModuleRelativePath", "Public/CommonUserInitializeParams.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCommonUserInitializeParams_Statics::NewProp_bCanUseGuestLogin_SetBit(void* Obj)
	{
		((FCommonUserInitializeParams*)Obj)->bCanUseGuestLogin = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCommonUserInitializeParams_Statics::NewProp_bCanUseGuestLogin = { "bCanUseGuestLogin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FCommonUserInitializeParams), &Z_Construct_UScriptStruct_FCommonUserInitializeParams_Statics::NewProp_bCanUseGuestLogin_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonUserInitializeParams_Statics::NewProp_bCanUseGuestLogin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonUserInitializeParams_Statics::NewProp_bCanUseGuestLogin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonUserInitializeParams_Statics::NewProp_bSuppressLoginErrors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonUserInitializeParams" },
		{ "ModuleRelativePath", "Public/CommonUserInitializeParams.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCommonUserInitializeParams_Statics::NewProp_bSuppressLoginErrors_SetBit(void* Obj)
	{
		((FCommonUserInitializeParams*)Obj)->bSuppressLoginErrors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCommonUserInitializeParams_Statics::NewProp_bSuppressLoginErrors = { "bSuppressLoginErrors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FCommonUserInitializeParams), &Z_Construct_UScriptStruct_FCommonUserInitializeParams_Statics::NewProp_bSuppressLoginErrors_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonUserInitializeParams_Statics::NewProp_bSuppressLoginErrors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonUserInitializeParams_Statics::NewProp_bSuppressLoginErrors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonUserInitializeParams_Statics::NewProp_OnUserInitializeComplete_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonUserInitializeParams" },
		{ "ModuleRelativePath", "Public/CommonUserInitializeParams.h" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FCommonUserInitializeParams_Statics::NewProp_OnUserInitializeComplete = { "OnUserInitializeComplete", nullptr, (EPropertyFlags)0x0010000000080005, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCommonUserInitializeParams, OnUserInitializeComplete), Z_Construct_UDelegateFunction_CommonUser_CommonUserOnInitializeComplete__DelegateSignature, METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonUserInitializeParams_Statics::NewProp_OnUserInitializeComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonUserInitializeParams_Statics::NewProp_OnUserInitializeComplete_MetaData)) }; // 995427868
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCommonUserInitializeParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonUserInitializeParams_Statics::NewProp_LocalPlayerIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonUserInitializeParams_Statics::NewProp_ControllerId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonUserInitializeParams_Statics::NewProp_PrimaryInputDevice,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonUserInitializeParams_Statics::NewProp_PlatformUser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonUserInitializeParams_Statics::NewProp_RequestedPrivilege_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonUserInitializeParams_Statics::NewProp_RequestedPrivilege,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonUserInitializeParams_Statics::NewProp_OnlineContext_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonUserInitializeParams_Statics::NewProp_OnlineContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonUserInitializeParams_Statics::NewProp_bCanCreateNewLocalPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonUserInitializeParams_Statics::NewProp_bCanUseGuestLogin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonUserInitializeParams_Statics::NewProp_bSuppressLoginErrors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonUserInitializeParams_Statics::NewProp_OnUserInitializeComplete,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCommonUserInitializeParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUser,
		nullptr,
		&NewStructOps,
		"CommonUserInitializeParams",
		sizeof(FCommonUserInitializeParams),
		alignof(FCommonUserInitializeParams),
		Z_Construct_UScriptStruct_FCommonUserInitializeParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonUserInitializeParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonUserInitializeParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonUserInitializeParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCommonUserInitializeParams()
	{
		if (!Z_Registration_Info_UScriptStruct_CommonUserInitializeParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CommonUserInitializeParams.InnerSingleton, Z_Construct_UScriptStruct_FCommonUserInitializeParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CommonUserInitializeParams.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonUserInitializeParams_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonUserInitializeParams_h_Statics::ScriptStructInfo[] = {
		{ FCommonUserInitializeParams::StaticStruct, Z_Construct_UScriptStruct_FCommonUserInitializeParams_Statics::NewStructOps, TEXT("CommonUserInitializeParams"), &Z_Registration_Info_UScriptStruct_CommonUserInitializeParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCommonUserInitializeParams), 2339978390U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonUserInitializeParams_h_1863684300(TEXT("/Script/CommonUser"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonUserInitializeParams_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonUserInitializeParams_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
