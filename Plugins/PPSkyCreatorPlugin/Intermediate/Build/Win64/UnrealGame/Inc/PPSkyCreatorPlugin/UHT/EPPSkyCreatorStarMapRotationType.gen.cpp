// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PPSkyCreatorPlugin/Public/EPPSkyCreatorStarMapRotationType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEPPSkyCreatorStarMapRotationType() {}
// Cross Module References
	PPSKYCREATORPLUGIN_API UEnum* Z_Construct_UEnum_PPSkyCreatorPlugin_EPPSkyCreatorStarMapRotationType();
	UPackage* Z_Construct_UPackage__Script_PPSkyCreatorPlugin();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPPSkyCreatorStarMapRotationType;
	static UEnum* EPPSkyCreatorStarMapRotationType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPPSkyCreatorStarMapRotationType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPPSkyCreatorStarMapRotationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PPSkyCreatorPlugin_EPPSkyCreatorStarMapRotationType, Z_Construct_UPackage__Script_PPSkyCreatorPlugin(), TEXT("EPPSkyCreatorStarMapRotationType"));
		}
		return Z_Registration_Info_UEnum_EPPSkyCreatorStarMapRotationType.OuterSingleton;
	}
	template<> PPSKYCREATORPLUGIN_API UEnum* StaticEnum<EPPSkyCreatorStarMapRotationType>()
	{
		return EPPSkyCreatorStarMapRotationType_StaticEnum();
	}
	struct Z_Construct_UEnum_PPSkyCreatorPlugin_EPPSkyCreatorStarMapRotationType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PPSkyCreatorPlugin_EPPSkyCreatorStarMapRotationType_Statics::Enumerators[] = {
		{ "StarMapRotationType_NoRotation", (int64)StarMapRotationType_NoRotation },
		{ "StarMapRotationType_FollowSun", (int64)StarMapRotationType_FollowSun },
		{ "StarMapRotationType_FollowMoon", (int64)StarMapRotationType_FollowMoon },
		{ "StarMapRotationType_MAX", (int64)StarMapRotationType_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PPSkyCreatorPlugin_EPPSkyCreatorStarMapRotationType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EPPSkyCreatorStarMapRotationType.h" },
		{ "StarMapRotationType_FollowMoon.Name", "StarMapRotationType_FollowMoon" },
		{ "StarMapRotationType_FollowSun.Name", "StarMapRotationType_FollowSun" },
		{ "StarMapRotationType_MAX.Hidden", "" },
		{ "StarMapRotationType_MAX.Name", "StarMapRotationType_MAX" },
		{ "StarMapRotationType_NoRotation.Name", "StarMapRotationType_NoRotation" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PPSkyCreatorPlugin_EPPSkyCreatorStarMapRotationType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PPSkyCreatorPlugin,
		nullptr,
		"EPPSkyCreatorStarMapRotationType",
		"EPPSkyCreatorStarMapRotationType",
		Z_Construct_UEnum_PPSkyCreatorPlugin_EPPSkyCreatorStarMapRotationType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PPSkyCreatorPlugin_EPPSkyCreatorStarMapRotationType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_PPSkyCreatorPlugin_EPPSkyCreatorStarMapRotationType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PPSkyCreatorPlugin_EPPSkyCreatorStarMapRotationType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PPSkyCreatorPlugin_EPPSkyCreatorStarMapRotationType()
	{
		if (!Z_Registration_Info_UEnum_EPPSkyCreatorStarMapRotationType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPPSkyCreatorStarMapRotationType.InnerSingleton, Z_Construct_UEnum_PPSkyCreatorPlugin_EPPSkyCreatorStarMapRotationType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPPSkyCreatorStarMapRotationType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_EPPSkyCreatorStarMapRotationType_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_EPPSkyCreatorStarMapRotationType_h_Statics::EnumInfo[] = {
		{ EPPSkyCreatorStarMapRotationType_StaticEnum, TEXT("EPPSkyCreatorStarMapRotationType"), &Z_Registration_Info_UEnum_EPPSkyCreatorStarMapRotationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2492833918U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_EPPSkyCreatorStarMapRotationType_h_2468465782(TEXT("/Script/PPSkyCreatorPlugin"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_EPPSkyCreatorStarMapRotationType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_EPPSkyCreatorStarMapRotationType_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
