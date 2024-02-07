// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SkyCreatorPlugin/Public/ESkyCreatorStarMapRotationType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESkyCreatorStarMapRotationType() {}
// Cross Module References
	SKYCREATORPLUGIN_API UEnum* Z_Construct_UEnum_SkyCreatorPlugin_ESkyCreatorStarMapRotationType();
	UPackage* Z_Construct_UPackage__Script_SkyCreatorPlugin();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESkyCreatorStarMapRotationType;
	static UEnum* ESkyCreatorStarMapRotationType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESkyCreatorStarMapRotationType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESkyCreatorStarMapRotationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SkyCreatorPlugin_ESkyCreatorStarMapRotationType, Z_Construct_UPackage__Script_SkyCreatorPlugin(), TEXT("ESkyCreatorStarMapRotationType"));
		}
		return Z_Registration_Info_UEnum_ESkyCreatorStarMapRotationType.OuterSingleton;
	}
	template<> SKYCREATORPLUGIN_API UEnum* StaticEnum<ESkyCreatorStarMapRotationType>()
	{
		return ESkyCreatorStarMapRotationType_StaticEnum();
	}
	struct Z_Construct_UEnum_SkyCreatorPlugin_ESkyCreatorStarMapRotationType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SkyCreatorPlugin_ESkyCreatorStarMapRotationType_Statics::Enumerators[] = {
		{ "StarMapRotationType_NoRotation", (int64)StarMapRotationType_NoRotation },
		{ "StarMapRotationType_FollowSun", (int64)StarMapRotationType_FollowSun },
		{ "StarMapRotationType_FollowMoon", (int64)StarMapRotationType_FollowMoon },
		{ "StarMapRotationType_MAX", (int64)StarMapRotationType_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SkyCreatorPlugin_ESkyCreatorStarMapRotationType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ESkyCreatorStarMapRotationType.h" },
		{ "StarMapRotationType_FollowMoon.Name", "StarMapRotationType_FollowMoon" },
		{ "StarMapRotationType_FollowSun.Name", "StarMapRotationType_FollowSun" },
		{ "StarMapRotationType_MAX.Hidden", "" },
		{ "StarMapRotationType_MAX.Name", "StarMapRotationType_MAX" },
		{ "StarMapRotationType_NoRotation.Name", "StarMapRotationType_NoRotation" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SkyCreatorPlugin_ESkyCreatorStarMapRotationType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SkyCreatorPlugin,
		nullptr,
		"ESkyCreatorStarMapRotationType",
		"ESkyCreatorStarMapRotationType",
		Z_Construct_UEnum_SkyCreatorPlugin_ESkyCreatorStarMapRotationType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SkyCreatorPlugin_ESkyCreatorStarMapRotationType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_SkyCreatorPlugin_ESkyCreatorStarMapRotationType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SkyCreatorPlugin_ESkyCreatorStarMapRotationType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SkyCreatorPlugin_ESkyCreatorStarMapRotationType()
	{
		if (!Z_Registration_Info_UEnum_ESkyCreatorStarMapRotationType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESkyCreatorStarMapRotationType.InnerSingleton, Z_Construct_UEnum_SkyCreatorPlugin_ESkyCreatorStarMapRotationType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESkyCreatorStarMapRotationType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_ESkyCreatorStarMapRotationType_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_ESkyCreatorStarMapRotationType_h_Statics::EnumInfo[] = {
		{ ESkyCreatorStarMapRotationType_StaticEnum, TEXT("ESkyCreatorStarMapRotationType"), &Z_Registration_Info_UEnum_ESkyCreatorStarMapRotationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3722095452U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_ESkyCreatorStarMapRotationType_h_687535395(TEXT("/Script/SkyCreatorPlugin"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_ESkyCreatorStarMapRotationType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_ESkyCreatorStarMapRotationType_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
