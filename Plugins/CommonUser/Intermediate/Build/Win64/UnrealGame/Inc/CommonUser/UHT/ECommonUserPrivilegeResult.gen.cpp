// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUser/Public/ECommonUserPrivilegeResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECommonUserPrivilegeResult() {}
// Cross Module References
	COMMONUSER_API UEnum* Z_Construct_UEnum_CommonUser_ECommonUserPrivilegeResult();
	UPackage* Z_Construct_UPackage__Script_CommonUser();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECommonUserPrivilegeResult;
	static UEnum* ECommonUserPrivilegeResult_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECommonUserPrivilegeResult.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECommonUserPrivilegeResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CommonUser_ECommonUserPrivilegeResult, Z_Construct_UPackage__Script_CommonUser(), TEXT("ECommonUserPrivilegeResult"));
		}
		return Z_Registration_Info_UEnum_ECommonUserPrivilegeResult.OuterSingleton;
	}
	template<> COMMONUSER_API UEnum* StaticEnum<ECommonUserPrivilegeResult>()
	{
		return ECommonUserPrivilegeResult_StaticEnum();
	}
	struct Z_Construct_UEnum_CommonUser_ECommonUserPrivilegeResult_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CommonUser_ECommonUserPrivilegeResult_Statics::Enumerators[] = {
		{ "ECommonUserPrivilegeResult::Unknown", (int64)ECommonUserPrivilegeResult::Unknown },
		{ "ECommonUserPrivilegeResult::Available", (int64)ECommonUserPrivilegeResult::Available },
		{ "ECommonUserPrivilegeResult::UserNotLoggedIn", (int64)ECommonUserPrivilegeResult::UserNotLoggedIn },
		{ "ECommonUserPrivilegeResult::LicenseInvalid", (int64)ECommonUserPrivilegeResult::LicenseInvalid },
		{ "ECommonUserPrivilegeResult::VersionOutdated", (int64)ECommonUserPrivilegeResult::VersionOutdated },
		{ "ECommonUserPrivilegeResult::NetworkConnectionUnavailable", (int64)ECommonUserPrivilegeResult::NetworkConnectionUnavailable },
		{ "ECommonUserPrivilegeResult::AgeRestricted", (int64)ECommonUserPrivilegeResult::AgeRestricted },
		{ "ECommonUserPrivilegeResult::AccountTypeRestricted", (int64)ECommonUserPrivilegeResult::AccountTypeRestricted },
		{ "ECommonUserPrivilegeResult::AccountUseRestricted", (int64)ECommonUserPrivilegeResult::AccountUseRestricted },
		{ "ECommonUserPrivilegeResult::PlatformFailure", (int64)ECommonUserPrivilegeResult::PlatformFailure },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CommonUser_ECommonUserPrivilegeResult_Statics::Enum_MetaDataParams[] = {
		{ "AccountTypeRestricted.Name", "ECommonUserPrivilegeResult::AccountTypeRestricted" },
		{ "AccountUseRestricted.Name", "ECommonUserPrivilegeResult::AccountUseRestricted" },
		{ "AgeRestricted.Name", "ECommonUserPrivilegeResult::AgeRestricted" },
		{ "Available.Name", "ECommonUserPrivilegeResult::Available" },
		{ "BlueprintType", "true" },
		{ "LicenseInvalid.Name", "ECommonUserPrivilegeResult::LicenseInvalid" },
		{ "ModuleRelativePath", "Public/ECommonUserPrivilegeResult.h" },
		{ "NetworkConnectionUnavailable.Name", "ECommonUserPrivilegeResult::NetworkConnectionUnavailable" },
		{ "PlatformFailure.Name", "ECommonUserPrivilegeResult::PlatformFailure" },
		{ "Unknown.Name", "ECommonUserPrivilegeResult::Unknown" },
		{ "UserNotLoggedIn.Name", "ECommonUserPrivilegeResult::UserNotLoggedIn" },
		{ "VersionOutdated.Name", "ECommonUserPrivilegeResult::VersionOutdated" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CommonUser_ECommonUserPrivilegeResult_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CommonUser,
		nullptr,
		"ECommonUserPrivilegeResult",
		"ECommonUserPrivilegeResult",
		Z_Construct_UEnum_CommonUser_ECommonUserPrivilegeResult_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CommonUser_ECommonUserPrivilegeResult_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CommonUser_ECommonUserPrivilegeResult_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CommonUser_ECommonUserPrivilegeResult_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CommonUser_ECommonUserPrivilegeResult()
	{
		if (!Z_Registration_Info_UEnum_ECommonUserPrivilegeResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECommonUserPrivilegeResult.InnerSingleton, Z_Construct_UEnum_CommonUser_ECommonUserPrivilegeResult_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECommonUserPrivilegeResult.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_ECommonUserPrivilegeResult_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_ECommonUserPrivilegeResult_h_Statics::EnumInfo[] = {
		{ ECommonUserPrivilegeResult_StaticEnum, TEXT("ECommonUserPrivilegeResult"), &Z_Registration_Info_UEnum_ECommonUserPrivilegeResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2894711016U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_ECommonUserPrivilegeResult_h_2707489834(TEXT("/Script/CommonUser"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_ECommonUserPrivilegeResult_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_ECommonUserPrivilegeResult_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
