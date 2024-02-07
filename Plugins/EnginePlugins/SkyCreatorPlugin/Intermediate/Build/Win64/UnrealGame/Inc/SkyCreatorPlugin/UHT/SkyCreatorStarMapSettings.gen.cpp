// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SkyCreatorPlugin/Public/SkyCreatorStarMapSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkyCreatorStarMapSettings() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	SKYCREATORPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings();
	UPackage* Z_Construct_UPackage__Script_SkyCreatorPlugin();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SkyCreatorStarMapSettings;
class UScriptStruct* FSkyCreatorStarMapSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SkyCreatorStarMapSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SkyCreatorStarMapSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings, Z_Construct_UPackage__Script_SkyCreatorPlugin(), TEXT("SkyCreatorStarMapSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SkyCreatorStarMapSettings.OuterSingleton;
}
template<> SKYCREATORPLUGIN_API UScriptStruct* StaticStruct<FSkyCreatorStarMapSettings>()
{
	return FSkyCreatorStarMapSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StarMapIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StarMapIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StarMapColorTint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StarMapColorTint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StarMapTwinkleIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StarMapTwinkleIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StarMapTwinkleSaturation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StarMapTwinkleSaturation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StarMapTwinkleSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StarMapTwinkleSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StarMapHorizonThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StarMapHorizonThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StarMapAtmosphereThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StarMapAtmosphereThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NightHorizonColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NightHorizonColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NightZenithColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NightZenithColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SkyCreatorStarMapSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkyCreatorStarMapSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_StarMapIntensity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorStarMapSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorStarMapSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_StarMapIntensity = { "StarMapIntensity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorStarMapSettings, StarMapIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_StarMapIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_StarMapIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_StarMapColorTint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorStarMapSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorStarMapSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_StarMapColorTint = { "StarMapColorTint", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorStarMapSettings, StarMapColorTint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_StarMapColorTint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_StarMapColorTint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_StarMapTwinkleIntensity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorStarMapSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorStarMapSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_StarMapTwinkleIntensity = { "StarMapTwinkleIntensity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorStarMapSettings, StarMapTwinkleIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_StarMapTwinkleIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_StarMapTwinkleIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_StarMapTwinkleSaturation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorStarMapSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorStarMapSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_StarMapTwinkleSaturation = { "StarMapTwinkleSaturation", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorStarMapSettings, StarMapTwinkleSaturation), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_StarMapTwinkleSaturation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_StarMapTwinkleSaturation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_StarMapTwinkleSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorStarMapSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorStarMapSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_StarMapTwinkleSpeed = { "StarMapTwinkleSpeed", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorStarMapSettings, StarMapTwinkleSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_StarMapTwinkleSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_StarMapTwinkleSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_StarMapHorizonThreshold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorStarMapSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorStarMapSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_StarMapHorizonThreshold = { "StarMapHorizonThreshold", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorStarMapSettings, StarMapHorizonThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_StarMapHorizonThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_StarMapHorizonThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_StarMapAtmosphereThreshold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorStarMapSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorStarMapSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_StarMapAtmosphereThreshold = { "StarMapAtmosphereThreshold", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorStarMapSettings, StarMapAtmosphereThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_StarMapAtmosphereThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_StarMapAtmosphereThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_NightHorizonColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorStarMapSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorStarMapSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_NightHorizonColor = { "NightHorizonColor", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorStarMapSettings, NightHorizonColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_NightHorizonColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_NightHorizonColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_NightZenithColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorStarMapSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorStarMapSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_NightZenithColor = { "NightZenithColor", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorStarMapSettings, NightZenithColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_NightZenithColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_NightZenithColor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_StarMapIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_StarMapColorTint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_StarMapTwinkleIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_StarMapTwinkleSaturation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_StarMapTwinkleSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_StarMapHorizonThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_StarMapAtmosphereThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_NightHorizonColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewProp_NightZenithColor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SkyCreatorPlugin,
		nullptr,
		&NewStructOps,
		"SkyCreatorStarMapSettings",
		sizeof(FSkyCreatorStarMapSettings),
		alignof(FSkyCreatorStarMapSettings),
		Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SkyCreatorStarMapSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SkyCreatorStarMapSettings.InnerSingleton, Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SkyCreatorStarMapSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorStarMapSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorStarMapSettings_h_Statics::ScriptStructInfo[] = {
		{ FSkyCreatorStarMapSettings::StaticStruct, Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings_Statics::NewStructOps, TEXT("SkyCreatorStarMapSettings"), &Z_Registration_Info_UScriptStruct_SkyCreatorStarMapSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkyCreatorStarMapSettings), 4081564433U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorStarMapSettings_h_2697953024(TEXT("/Script/SkyCreatorPlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorStarMapSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorStarMapSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
