// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUser/Public/ECommonUserAvailability.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECommonUserAvailability() {}
// Cross Module References
	COMMONUSER_API UEnum* Z_Construct_UEnum_CommonUser_ECommonUserAvailability();
	UPackage* Z_Construct_UPackage__Script_CommonUser();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECommonUserAvailability;
	static UEnum* ECommonUserAvailability_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECommonUserAvailability.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECommonUserAvailability.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CommonUser_ECommonUserAvailability, Z_Construct_UPackage__Script_CommonUser(), TEXT("ECommonUserAvailability"));
		}
		return Z_Registration_Info_UEnum_ECommonUserAvailability.OuterSingleton;
	}
	template<> COMMONUSER_API UEnum* StaticEnum<ECommonUserAvailability>()
	{
		return ECommonUserAvailability_StaticEnum();
	}
	struct Z_Construct_UEnum_CommonUser_ECommonUserAvailability_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CommonUser_ECommonUserAvailability_Statics::Enumerators[] = {
		{ "ECommonUserAvailability::Unknown", (int64)ECommonUserAvailability::Unknown },
		{ "ECommonUserAvailability::NowAvailable", (int64)ECommonUserAvailability::NowAvailable },
		{ "ECommonUserAvailability::PossiblyAvailable", (int64)ECommonUserAvailability::PossiblyAvailable },
		{ "ECommonUserAvailability::CurrentlyUnavailable", (int64)ECommonUserAvailability::CurrentlyUnavailable },
		{ "ECommonUserAvailability::AlwaysUnavailable", (int64)ECommonUserAvailability::AlwaysUnavailable },
		{ "ECommonUserAvailability::Invalid", (int64)ECommonUserAvailability::Invalid },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CommonUser_ECommonUserAvailability_Statics::Enum_MetaDataParams[] = {
		{ "AlwaysUnavailable.Name", "ECommonUserAvailability::AlwaysUnavailable" },
		{ "BlueprintType", "true" },
		{ "CurrentlyUnavailable.Name", "ECommonUserAvailability::CurrentlyUnavailable" },
		{ "Invalid.Name", "ECommonUserAvailability::Invalid" },
		{ "ModuleRelativePath", "Public/ECommonUserAvailability.h" },
		{ "NowAvailable.Name", "ECommonUserAvailability::NowAvailable" },
		{ "PossiblyAvailable.Name", "ECommonUserAvailability::PossiblyAvailable" },
		{ "Unknown.Name", "ECommonUserAvailability::Unknown" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CommonUser_ECommonUserAvailability_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CommonUser,
		nullptr,
		"ECommonUserAvailability",
		"ECommonUserAvailability",
		Z_Construct_UEnum_CommonUser_ECommonUserAvailability_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CommonUser_ECommonUserAvailability_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CommonUser_ECommonUserAvailability_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CommonUser_ECommonUserAvailability_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CommonUser_ECommonUserAvailability()
	{
		if (!Z_Registration_Info_UEnum_ECommonUserAvailability.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECommonUserAvailability.InnerSingleton, Z_Construct_UEnum_CommonUser_ECommonUserAvailability_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECommonUserAvailability.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_ECommonUserAvailability_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_ECommonUserAvailability_h_Statics::EnumInfo[] = {
		{ ECommonUserAvailability_StaticEnum, TEXT("ECommonUserAvailability"), &Z_Registration_Info_UEnum_ECommonUserAvailability, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 376152662U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_ECommonUserAvailability_h_329697447(TEXT("/Script/CommonUser"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_ECommonUserAvailability_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_ECommonUserAvailability_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
