// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUser/Public/ECommonUserPrivilege.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECommonUserPrivilege() {}
// Cross Module References
	COMMONUSER_API UEnum* Z_Construct_UEnum_CommonUser_ECommonUserPrivilege();
	UPackage* Z_Construct_UPackage__Script_CommonUser();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECommonUserPrivilege;
	static UEnum* ECommonUserPrivilege_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECommonUserPrivilege.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECommonUserPrivilege.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CommonUser_ECommonUserPrivilege, Z_Construct_UPackage__Script_CommonUser(), TEXT("ECommonUserPrivilege"));
		}
		return Z_Registration_Info_UEnum_ECommonUserPrivilege.OuterSingleton;
	}
	template<> COMMONUSER_API UEnum* StaticEnum<ECommonUserPrivilege>()
	{
		return ECommonUserPrivilege_StaticEnum();
	}
	struct Z_Construct_UEnum_CommonUser_ECommonUserPrivilege_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CommonUser_ECommonUserPrivilege_Statics::Enumerators[] = {
		{ "ECommonUserPrivilege::CanPlay", (int64)ECommonUserPrivilege::CanPlay },
		{ "ECommonUserPrivilege::CanPlayOnline", (int64)ECommonUserPrivilege::CanPlayOnline },
		{ "ECommonUserPrivilege::CanCommunicateViaTextOnline", (int64)ECommonUserPrivilege::CanCommunicateViaTextOnline },
		{ "ECommonUserPrivilege::CanCommunicateViaVoiceOnline", (int64)ECommonUserPrivilege::CanCommunicateViaVoiceOnline },
		{ "ECommonUserPrivilege::CanUseUserGeneratedContent", (int64)ECommonUserPrivilege::CanUseUserGeneratedContent },
		{ "ECommonUserPrivilege::CanUseCrossPlay", (int64)ECommonUserPrivilege::CanUseCrossPlay },
		{ "ECommonUserPrivilege::Invalid_Count", (int64)ECommonUserPrivilege::Invalid_Count },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CommonUser_ECommonUserPrivilege_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CanCommunicateViaTextOnline.Name", "ECommonUserPrivilege::CanCommunicateViaTextOnline" },
		{ "CanCommunicateViaVoiceOnline.Name", "ECommonUserPrivilege::CanCommunicateViaVoiceOnline" },
		{ "CanPlay.Name", "ECommonUserPrivilege::CanPlay" },
		{ "CanPlayOnline.Name", "ECommonUserPrivilege::CanPlayOnline" },
		{ "CanUseCrossPlay.Name", "ECommonUserPrivilege::CanUseCrossPlay" },
		{ "CanUseUserGeneratedContent.Name", "ECommonUserPrivilege::CanUseUserGeneratedContent" },
		{ "Invalid_Count.Name", "ECommonUserPrivilege::Invalid_Count" },
		{ "ModuleRelativePath", "Public/ECommonUserPrivilege.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CommonUser_ECommonUserPrivilege_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CommonUser,
		nullptr,
		"ECommonUserPrivilege",
		"ECommonUserPrivilege",
		Z_Construct_UEnum_CommonUser_ECommonUserPrivilege_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CommonUser_ECommonUserPrivilege_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CommonUser_ECommonUserPrivilege_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CommonUser_ECommonUserPrivilege_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CommonUser_ECommonUserPrivilege()
	{
		if (!Z_Registration_Info_UEnum_ECommonUserPrivilege.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECommonUserPrivilege.InnerSingleton, Z_Construct_UEnum_CommonUser_ECommonUserPrivilege_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECommonUserPrivilege.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_ECommonUserPrivilege_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_ECommonUserPrivilege_h_Statics::EnumInfo[] = {
		{ ECommonUserPrivilege_StaticEnum, TEXT("ECommonUserPrivilege"), &Z_Registration_Info_UEnum_ECommonUserPrivilege, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3368067200U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_ECommonUserPrivilege_h_468755882(TEXT("/Script/CommonUser"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_ECommonUserPrivilege_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_ECommonUserPrivilege_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
