// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PPSkyCreatorPlugin/Public/PPSkyCreatorWeatherSettings.h"
#include "PPSkyCreatorPlugin/Public/PPSkyCreatorBackgroundCloudSettings.h"
#include "PPSkyCreatorPlugin/Public/PPSkyCreatorExponentialHeightFogSettings.h"
#include "PPSkyCreatorPlugin/Public/PPSkyCreatorMoonLightSettings.h"
#include "PPSkyCreatorPlugin/Public/PPSkyCreatorPostProcessSettings.h"
#include "PPSkyCreatorPlugin/Public/PPSkyCreatorSkyAtmosphereSettings.h"
#include "PPSkyCreatorPlugin/Public/PPSkyCreatorSkyLightSettings.h"
#include "PPSkyCreatorPlugin/Public/PPSkyCreatorStarMapSettings.h"
#include "PPSkyCreatorPlugin/Public/PPSkyCreatorSunLightSettings.h"
#include "PPSkyCreatorPlugin/Public/PPSkyCreatorVolumetricCloudSettings.h"
#include "PPSkyCreatorPlugin/Public/PPSkyCreatorWeatherFXSettings.h"
#include "PPSkyCreatorPlugin/Public/PPSkyCreatorWeatherMaterialFXSettings.h"
#include "PPSkyCreatorPlugin/Public/PPSkyCreatorWindSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePPSkyCreatorWeatherSettings() {}
// Cross Module References
	PPSKYCREATORPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FPPSkyCreatorBackgroundCloudSettings();
	PPSKYCREATORPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FPPSkyCreatorExponentialHeightFogSettings();
	PPSKYCREATORPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FPPSkyCreatorMoonLightSettings();
	PPSKYCREATORPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FPPSkyCreatorPostProcessSettings();
	PPSKYCREATORPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FPPSkyCreatorSkyAtmosphereSettings();
	PPSKYCREATORPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FPPSkyCreatorSkyLightSettings();
	PPSKYCREATORPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FPPSkyCreatorStarMapSettings();
	PPSKYCREATORPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FPPSkyCreatorSunLightSettings();
	PPSKYCREATORPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings();
	PPSKYCREATORPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings();
	PPSKYCREATORPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings();
	PPSKYCREATORPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FPPSkyCreatorWeatherSettings();
	PPSKYCREATORPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FPPSkyCreatorWindSettings();
	UPackage* Z_Construct_UPackage__Script_PPSkyCreatorPlugin();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PPSkyCreatorWeatherSettings;
class UScriptStruct* FPPSkyCreatorWeatherSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PPSkyCreatorWeatherSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PPSkyCreatorWeatherSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherSettings, Z_Construct_UPackage__Script_PPSkyCreatorPlugin(), TEXT("PPSkyCreatorWeatherSettings"));
	}
	return Z_Registration_Info_UScriptStruct_PPSkyCreatorWeatherSettings.OuterSingleton;
}
template<> PPSKYCREATORPLUGIN_API UScriptStruct* StaticStruct<FPPSkyCreatorWeatherSettings>()
{
	return FPPSkyCreatorWeatherSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPPSkyCreatorWeatherSettings_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWeatherSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPPSkyCreatorWeatherSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPPSkyCreatorWeatherSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWeatherSettings_Statics::NewProp_SkyAtmosphereSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorWeatherSettings_Statics::NewProp_SkyAtmosphereSettings = { "SkyAtmosphereSettings", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorWeatherSettings, SkyAtmosphereSettings), Z_Construct_UScriptStruct_FPPSkyCreatorSkyAtmosphereSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherSettings_Statics::NewProp_SkyAtmosphereSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherSettings_Statics::NewProp_SkyAtmosphereSettings_MetaData)) }; // 2047631239
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWeatherSettings_Statics::NewProp_VolumetricCloudSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorWeatherSettings_Statics::NewProp_VolumetricCloudSettings = { "VolumetricCloudSettings", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorWeatherSettings, VolumetricCloudSettings), Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherSettings_Statics::NewProp_VolumetricCloudSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherSettings_Statics::NewProp_VolumetricCloudSettings_MetaData)) }; // 392542
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWeatherSettings_Statics::NewProp_BackgroundCloudSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorWeatherSettings_Statics::NewProp_BackgroundCloudSettings = { "BackgroundCloudSettings", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorWeatherSettings, BackgroundCloudSettings), Z_Construct_UScriptStruct_FPPSkyCreatorBackgroundCloudSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherSettings_Statics::NewProp_BackgroundCloudSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherSettings_Statics::NewProp_BackgroundCloudSettings_MetaData)) }; // 4008073400
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWeatherSettings_Statics::NewProp_SkyLightSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorWeatherSettings_Statics::NewProp_SkyLightSettings = { "SkyLightSettings", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorWeatherSettings, SkyLightSettings), Z_Construct_UScriptStruct_FPPSkyCreatorSkyLightSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherSettings_Statics::NewProp_SkyLightSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherSettings_Statics::NewProp_SkyLightSettings_MetaData)) }; // 1198484798
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWeatherSettings_Statics::NewProp_SunLightSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorWeatherSettings_Statics::NewProp_SunLightSettings = { "SunLightSettings", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorWeatherSettings, SunLightSettings), Z_Construct_UScriptStruct_FPPSkyCreatorSunLightSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherSettings_Statics::NewProp_SunLightSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherSettings_Statics::NewProp_SunLightSettings_MetaData)) }; // 3693242562
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWeatherSettings_Statics::NewProp_MoonLightSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorWeatherSettings_Statics::NewProp_MoonLightSettings = { "MoonLightSettings", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorWeatherSettings, MoonLightSettings), Z_Construct_UScriptStruct_FPPSkyCreatorMoonLightSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherSettings_Statics::NewProp_MoonLightSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherSettings_Statics::NewProp_MoonLightSettings_MetaData)) }; // 2169900422
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWeatherSettings_Statics::NewProp_ExponentialHeightFogSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorWeatherSettings_Statics::NewProp_ExponentialHeightFogSettings = { "ExponentialHeightFogSettings", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorWeatherSettings, ExponentialHeightFogSettings), Z_Construct_UScriptStruct_FPPSkyCreatorExponentialHeightFogSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherSettings_Statics::NewProp_ExponentialHeightFogSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherSettings_Statics::NewProp_ExponentialHeightFogSettings_MetaData)) }; // 2821353897
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWeatherSettings_Statics::NewProp_StarMapSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorWeatherSettings_Statics::NewProp_StarMapSettings = { "StarMapSettings", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorWeatherSettings, StarMapSettings), Z_Construct_UScriptStruct_FPPSkyCreatorStarMapSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherSettings_Statics::NewProp_StarMapSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherSettings_Statics::NewProp_StarMapSettings_MetaData)) }; // 3534814761
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWeatherSettings_Statics::NewProp_WeatherFXSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorWeatherSettings_Statics::NewProp_WeatherFXSettings = { "WeatherFXSettings", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorWeatherSettings, WeatherFXSettings), Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherSettings_Statics::NewProp_WeatherFXSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherSettings_Statics::NewProp_WeatherFXSettings_MetaData)) }; // 1675121933
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWeatherSettings_Statics::NewProp_WeatherMaterialFXSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorWeatherSettings_Statics::NewProp_WeatherMaterialFXSettings = { "WeatherMaterialFXSettings", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorWeatherSettings, WeatherMaterialFXSettings), Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherSettings_Statics::NewProp_WeatherMaterialFXSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherSettings_Statics::NewProp_WeatherMaterialFXSettings_MetaData)) }; // 1068823584
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWeatherSettings_Statics::NewProp_WindSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorWeatherSettings_Statics::NewProp_WindSettings = { "WindSettings", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorWeatherSettings, WindSettings), Z_Construct_UScriptStruct_FPPSkyCreatorWindSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherSettings_Statics::NewProp_WindSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherSettings_Statics::NewProp_WindSettings_MetaData)) }; // 2959899271
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWeatherSettings_Statics::NewProp_PostProcessSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorWeatherSettings_Statics::NewProp_PostProcessSettings = { "PostProcessSettings", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorWeatherSettings, PostProcessSettings), Z_Construct_UScriptStruct_FPPSkyCreatorPostProcessSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherSettings_Statics::NewProp_PostProcessSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherSettings_Statics::NewProp_PostProcessSettings_MetaData)) }; // 3560494449
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPPSkyCreatorWeatherSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorWeatherSettings_Statics::NewProp_SkyAtmosphereSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorWeatherSettings_Statics::NewProp_VolumetricCloudSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorWeatherSettings_Statics::NewProp_BackgroundCloudSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorWeatherSettings_Statics::NewProp_SkyLightSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorWeatherSettings_Statics::NewProp_SunLightSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorWeatherSettings_Statics::NewProp_MoonLightSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorWeatherSettings_Statics::NewProp_ExponentialHeightFogSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorWeatherSettings_Statics::NewProp_StarMapSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorWeatherSettings_Statics::NewProp_WeatherFXSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorWeatherSettings_Statics::NewProp_WeatherMaterialFXSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorWeatherSettings_Statics::NewProp_WindSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorWeatherSettings_Statics::NewProp_PostProcessSettings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPPSkyCreatorWeatherSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PPSkyCreatorPlugin,
		nullptr,
		&NewStructOps,
		"PPSkyCreatorWeatherSettings",
		sizeof(FPPSkyCreatorWeatherSettings),
		alignof(FPPSkyCreatorWeatherSettings),
		Z_Construct_UScriptStruct_FPPSkyCreatorWeatherSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPPSkyCreatorWeatherSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_PPSkyCreatorWeatherSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PPSkyCreatorWeatherSettings.InnerSingleton, Z_Construct_UScriptStruct_FPPSkyCreatorWeatherSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PPSkyCreatorWeatherSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPSkyCreatorWeatherSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPSkyCreatorWeatherSettings_h_Statics::ScriptStructInfo[] = {
		{ FPPSkyCreatorWeatherSettings::StaticStruct, Z_Construct_UScriptStruct_FPPSkyCreatorWeatherSettings_Statics::NewStructOps, TEXT("PPSkyCreatorWeatherSettings"), &Z_Registration_Info_UScriptStruct_PPSkyCreatorWeatherSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPPSkyCreatorWeatherSettings), 1920033603U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPSkyCreatorWeatherSettings_h_3579525450(TEXT("/Script/PPSkyCreatorPlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPSkyCreatorWeatherSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPSkyCreatorWeatherSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
