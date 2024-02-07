// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SkyCreatorPlugin/Public/SkyCreatorWeatherSettings.h"
#include "SkyCreatorPlugin/Public/SkyCreatorBackgroundCloudSettings.h"
#include "SkyCreatorPlugin/Public/SkyCreatorExponentialHeightFogSettings.h"
#include "SkyCreatorPlugin/Public/SkyCreatorMoonLightSettings.h"
#include "SkyCreatorPlugin/Public/SkyCreatorPostProcessSettings.h"
#include "SkyCreatorPlugin/Public/SkyCreatorSkyAtmosphereSettings.h"
#include "SkyCreatorPlugin/Public/SkyCreatorSkyLightSettings.h"
#include "SkyCreatorPlugin/Public/SkyCreatorStarMapSettings.h"
#include "SkyCreatorPlugin/Public/SkyCreatorSunLightSettings.h"
#include "SkyCreatorPlugin/Public/SkyCreatorVolumetricCloudSettings.h"
#include "SkyCreatorPlugin/Public/SkyCreatorWeatherFXSettings.h"
#include "SkyCreatorPlugin/Public/SkyCreatorWeatherMaterialFXSettings.h"
#include "SkyCreatorPlugin/Public/SkyCreatorWindSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkyCreatorWeatherSettings() {}
// Cross Module References
	SKYCREATORPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSkyCreatorBackgroundCloudSettings();
	SKYCREATORPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings();
	SKYCREATORPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings();
	SKYCREATORPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSkyCreatorPostProcessSettings();
	SKYCREATORPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings();
	SKYCREATORPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings();
	SKYCREATORPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings();
	SKYCREATORPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings();
	SKYCREATORPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings();
	SKYCREATORPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings();
	SKYCREATORPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings();
	SKYCREATORPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings();
	SKYCREATORPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSkyCreatorWindSettings();
	UPackage* Z_Construct_UPackage__Script_SkyCreatorPlugin();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SkyCreatorWeatherSettings;
class UScriptStruct* FSkyCreatorWeatherSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SkyCreatorWeatherSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SkyCreatorWeatherSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings, Z_Construct_UPackage__Script_SkyCreatorPlugin(), TEXT("SkyCreatorWeatherSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SkyCreatorWeatherSettings.OuterSingleton;
}
template<> SKYCREATORPLUGIN_API UScriptStruct* StaticStruct<FSkyCreatorWeatherSettings>()
{
	return FSkyCreatorWeatherSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkyAtmosphereSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SkyAtmosphereSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumetricCloudSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VolumetricCloudSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundCloudSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundCloudSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkyLightSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SkyLightSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SunLightSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SunLightSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoonLightSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MoonLightSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExponentialHeightFogSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExponentialHeightFogSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StarMapSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StarMapSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeatherFXSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WeatherFXSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeatherMaterialFXSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WeatherMaterialFXSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WindSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WindSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PostProcessSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkyCreatorWeatherSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_SkyAtmosphereSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorWeatherSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_SkyAtmosphereSettings = { "SkyAtmosphereSettings", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorWeatherSettings, SkyAtmosphereSettings), Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_SkyAtmosphereSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_SkyAtmosphereSettings_MetaData)) }; // 3047016272
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_VolumetricCloudSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorWeatherSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_VolumetricCloudSettings = { "VolumetricCloudSettings", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorWeatherSettings, VolumetricCloudSettings), Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_VolumetricCloudSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_VolumetricCloudSettings_MetaData)) }; // 1160111387
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_BackgroundCloudSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorWeatherSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_BackgroundCloudSettings = { "BackgroundCloudSettings", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorWeatherSettings, BackgroundCloudSettings), Z_Construct_UScriptStruct_FSkyCreatorBackgroundCloudSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_BackgroundCloudSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_BackgroundCloudSettings_MetaData)) }; // 3214717419
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_SkyLightSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorWeatherSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_SkyLightSettings = { "SkyLightSettings", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorWeatherSettings, SkyLightSettings), Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_SkyLightSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_SkyLightSettings_MetaData)) }; // 4293179822
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_SunLightSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorWeatherSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_SunLightSettings = { "SunLightSettings", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorWeatherSettings, SunLightSettings), Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_SunLightSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_SunLightSettings_MetaData)) }; // 174992482
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_MoonLightSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorWeatherSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_MoonLightSettings = { "MoonLightSettings", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorWeatherSettings, MoonLightSettings), Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_MoonLightSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_MoonLightSettings_MetaData)) }; // 485143332
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_ExponentialHeightFogSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorWeatherSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_ExponentialHeightFogSettings = { "ExponentialHeightFogSettings", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorWeatherSettings, ExponentialHeightFogSettings), Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_ExponentialHeightFogSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_ExponentialHeightFogSettings_MetaData)) }; // 652124977
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_StarMapSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorWeatherSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_StarMapSettings = { "StarMapSettings", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorWeatherSettings, StarMapSettings), Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_StarMapSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_StarMapSettings_MetaData)) }; // 4081564433
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_WeatherFXSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorWeatherSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_WeatherFXSettings = { "WeatherFXSettings", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorWeatherSettings, WeatherFXSettings), Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_WeatherFXSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_WeatherFXSettings_MetaData)) }; // 2604463715
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_WeatherMaterialFXSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorWeatherSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_WeatherMaterialFXSettings = { "WeatherMaterialFXSettings", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorWeatherSettings, WeatherMaterialFXSettings), Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_WeatherMaterialFXSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_WeatherMaterialFXSettings_MetaData)) }; // 998852082
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_WindSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorWeatherSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_WindSettings = { "WindSettings", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorWeatherSettings, WindSettings), Z_Construct_UScriptStruct_FSkyCreatorWindSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_WindSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_WindSettings_MetaData)) }; // 1706621100
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_PostProcessSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorWeatherSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_PostProcessSettings = { "PostProcessSettings", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorWeatherSettings, PostProcessSettings), Z_Construct_UScriptStruct_FSkyCreatorPostProcessSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_PostProcessSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_PostProcessSettings_MetaData)) }; // 1991048929
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_SkyAtmosphereSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_VolumetricCloudSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_BackgroundCloudSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_SkyLightSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_SunLightSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_MoonLightSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_ExponentialHeightFogSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_StarMapSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_WeatherFXSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_WeatherMaterialFXSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_WindSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewProp_PostProcessSettings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SkyCreatorPlugin,
		nullptr,
		&NewStructOps,
		"SkyCreatorWeatherSettings",
		sizeof(FSkyCreatorWeatherSettings),
		alignof(FSkyCreatorWeatherSettings),
		Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SkyCreatorWeatherSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SkyCreatorWeatherSettings.InnerSingleton, Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SkyCreatorWeatherSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorWeatherSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorWeatherSettings_h_Statics::ScriptStructInfo[] = {
		{ FSkyCreatorWeatherSettings::StaticStruct, Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings_Statics::NewStructOps, TEXT("SkyCreatorWeatherSettings"), &Z_Registration_Info_UScriptStruct_SkyCreatorWeatherSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkyCreatorWeatherSettings), 4149258125U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorWeatherSettings_h_3619415728(TEXT("/Script/SkyCreatorPlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorWeatherSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorWeatherSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
