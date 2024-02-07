// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUser/Public/OnlineResultInformation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineResultInformation() {}
// Cross Module References
	COMMONUSER_API UScriptStruct* Z_Construct_UScriptStruct_FOnlineResultInformation();
	UPackage* Z_Construct_UPackage__Script_CommonUser();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OnlineResultInformation;
class UScriptStruct* FOnlineResultInformation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OnlineResultInformation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OnlineResultInformation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOnlineResultInformation, Z_Construct_UPackage__Script_CommonUser(), TEXT("OnlineResultInformation"));
	}
	return Z_Registration_Info_UScriptStruct_OnlineResultInformation.OuterSingleton;
}
template<> COMMONUSER_API UScriptStruct* StaticStruct<FOnlineResultInformation>()
{
	return FOnlineResultInformation::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOnlineResultInformation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWasSuccessful_MetaData[];
#endif
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ErrorText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineResultInformation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OnlineResultInformation.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOnlineResultInformation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOnlineResultInformation>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineResultInformation_Statics::NewProp_bWasSuccessful_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineResultInformation" },
		{ "ModuleRelativePath", "Public/OnlineResultInformation.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOnlineResultInformation_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((FOnlineResultInformation*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOnlineResultInformation_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FOnlineResultInformation), &Z_Construct_UScriptStruct_FOnlineResultInformation_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineResultInformation_Statics::NewProp_bWasSuccessful_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineResultInformation_Statics::NewProp_bWasSuccessful_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineResultInformation_Statics::NewProp_ErrorId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineResultInformation" },
		{ "ModuleRelativePath", "Public/OnlineResultInformation.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOnlineResultInformation_Statics::NewProp_ErrorId = { "ErrorId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOnlineResultInformation, ErrorId), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineResultInformation_Statics::NewProp_ErrorId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineResultInformation_Statics::NewProp_ErrorId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineResultInformation_Statics::NewProp_ErrorText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineResultInformation" },
		{ "ModuleRelativePath", "Public/OnlineResultInformation.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineResultInformation_Statics::NewProp_ErrorText = { "ErrorText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOnlineResultInformation, ErrorText), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineResultInformation_Statics::NewProp_ErrorText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineResultInformation_Statics::NewProp_ErrorText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOnlineResultInformation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineResultInformation_Statics::NewProp_bWasSuccessful,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineResultInformation_Statics::NewProp_ErrorId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineResultInformation_Statics::NewProp_ErrorText,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOnlineResultInformation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUser,
		nullptr,
		&NewStructOps,
		"OnlineResultInformation",
		sizeof(FOnlineResultInformation),
		alignof(FOnlineResultInformation),
		Z_Construct_UScriptStruct_FOnlineResultInformation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineResultInformation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineResultInformation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineResultInformation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOnlineResultInformation()
	{
		if (!Z_Registration_Info_UScriptStruct_OnlineResultInformation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OnlineResultInformation.InnerSingleton, Z_Construct_UScriptStruct_FOnlineResultInformation_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OnlineResultInformation.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_OnlineResultInformation_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_OnlineResultInformation_h_Statics::ScriptStructInfo[] = {
		{ FOnlineResultInformation::StaticStruct, Z_Construct_UScriptStruct_FOnlineResultInformation_Statics::NewStructOps, TEXT("OnlineResultInformation"), &Z_Registration_Info_UScriptStruct_OnlineResultInformation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOnlineResultInformation), 3021983203U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_OnlineResultInformation_h_98718406(TEXT("/Script/CommonUser"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_OnlineResultInformation_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_OnlineResultInformation_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
