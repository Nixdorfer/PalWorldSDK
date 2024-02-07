// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SkyCreatorPlugin/Public/SkyCreatorWeatherPreset.h"
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
#include "SkyCreatorPlugin/Public/SkyCreatorWeatherSettings.h"
#include "SkyCreatorPlugin/Public/SkyCreatorWindSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkyCreatorWeatherPreset() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	SKYCREATORPLUGIN_API UClass* Z_Construct_UClass_USkyCreatorWeatherPreset();
	SKYCREATORPLUGIN_API UClass* Z_Construct_UClass_USkyCreatorWeatherPreset_NoRegister();
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
	DEFINE_FUNCTION(USkyCreatorWeatherPreset::execGetWeatherPresetSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSkyCreatorWeatherSettings*)Z_Param__Result=P_THIS->GetWeatherPresetSettings();
		P_NATIVE_END;
	}
	void USkyCreatorWeatherPreset::StaticRegisterNativesUSkyCreatorWeatherPreset()
	{
		UClass* Class = USkyCreatorWeatherPreset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetWeatherPresetSettings", &USkyCreatorWeatherPreset::execGetWeatherPresetSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USkyCreatorWeatherPreset_GetWeatherPresetSettings_Statics
	{
		struct SkyCreatorWeatherPreset_eventGetWeatherPresetSettings_Parms
		{
			FSkyCreatorWeatherSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyCreatorWeatherPreset_GetWeatherPresetSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkyCreatorWeatherPreset_eventGetWeatherPresetSettings_Parms, ReturnValue), Z_Construct_UScriptStruct_FSkyCreatorWeatherSettings, METADATA_PARAMS(nullptr, 0) }; // 4149258125
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyCreatorWeatherPreset_GetWeatherPresetSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyCreatorWeatherPreset_GetWeatherPresetSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyCreatorWeatherPreset_GetWeatherPresetSettings_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherPreset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyCreatorWeatherPreset_GetWeatherPresetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyCreatorWeatherPreset, nullptr, "GetWeatherPresetSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkyCreatorWeatherPreset_GetWeatherPresetSettings_Statics::SkyCreatorWeatherPreset_eventGetWeatherPresetSettings_Parms), Z_Construct_UFunction_USkyCreatorWeatherPreset_GetWeatherPresetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyCreatorWeatherPreset_GetWeatherPresetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyCreatorWeatherPreset_GetWeatherPresetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyCreatorWeatherPreset_GetWeatherPresetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyCreatorWeatherPreset_GetWeatherPresetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkyCreatorWeatherPreset_GetWeatherPresetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkyCreatorWeatherPreset);
	UClass* Z_Construct_UClass_USkyCreatorWeatherPreset_NoRegister()
	{
		return USkyCreatorWeatherPreset::StaticClass();
	}
	struct Z_Construct_UClass_USkyCreatorWeatherPreset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
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
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_SkyCreatorPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USkyCreatorWeatherPreset_GetWeatherPresetSettings, "GetWeatherPresetSettings" }, // 3563216420
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SkyCreatorWeatherPreset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherPreset.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_Description_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorWeatherPreset" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherPreset.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkyCreatorWeatherPreset, Description), METADATA_PARAMS(Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_SkyAtmosphereSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorWeatherPreset" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherPreset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_SkyAtmosphereSettings = { "SkyAtmosphereSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkyCreatorWeatherPreset, SkyAtmosphereSettings), Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings, METADATA_PARAMS(Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_SkyAtmosphereSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_SkyAtmosphereSettings_MetaData)) }; // 3047016272
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_VolumetricCloudSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorWeatherPreset" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherPreset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_VolumetricCloudSettings = { "VolumetricCloudSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkyCreatorWeatherPreset, VolumetricCloudSettings), Z_Construct_UScriptStruct_FSkyCreatorVolumetricCloudSettings, METADATA_PARAMS(Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_VolumetricCloudSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_VolumetricCloudSettings_MetaData)) }; // 1160111387
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_BackgroundCloudSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorWeatherPreset" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherPreset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_BackgroundCloudSettings = { "BackgroundCloudSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkyCreatorWeatherPreset, BackgroundCloudSettings), Z_Construct_UScriptStruct_FSkyCreatorBackgroundCloudSettings, METADATA_PARAMS(Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_BackgroundCloudSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_BackgroundCloudSettings_MetaData)) }; // 3214717419
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_SkyLightSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorWeatherPreset" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherPreset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_SkyLightSettings = { "SkyLightSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkyCreatorWeatherPreset, SkyLightSettings), Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings, METADATA_PARAMS(Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_SkyLightSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_SkyLightSettings_MetaData)) }; // 4293179822
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_SunLightSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorWeatherPreset" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherPreset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_SunLightSettings = { "SunLightSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkyCreatorWeatherPreset, SunLightSettings), Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings, METADATA_PARAMS(Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_SunLightSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_SunLightSettings_MetaData)) }; // 174992482
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_MoonLightSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorWeatherPreset" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherPreset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_MoonLightSettings = { "MoonLightSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkyCreatorWeatherPreset, MoonLightSettings), Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings, METADATA_PARAMS(Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_MoonLightSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_MoonLightSettings_MetaData)) }; // 485143332
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_ExponentialHeightFogSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorWeatherPreset" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherPreset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_ExponentialHeightFogSettings = { "ExponentialHeightFogSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkyCreatorWeatherPreset, ExponentialHeightFogSettings), Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings, METADATA_PARAMS(Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_ExponentialHeightFogSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_ExponentialHeightFogSettings_MetaData)) }; // 652124977
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_StarMapSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorWeatherPreset" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherPreset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_StarMapSettings = { "StarMapSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkyCreatorWeatherPreset, StarMapSettings), Z_Construct_UScriptStruct_FSkyCreatorStarMapSettings, METADATA_PARAMS(Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_StarMapSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_StarMapSettings_MetaData)) }; // 4081564433
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_WeatherFXSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorWeatherPreset" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherPreset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_WeatherFXSettings = { "WeatherFXSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkyCreatorWeatherPreset, WeatherFXSettings), Z_Construct_UScriptStruct_FSkyCreatorWeatherFXSettings, METADATA_PARAMS(Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_WeatherFXSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_WeatherFXSettings_MetaData)) }; // 2604463715
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_WeatherMaterialFXSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorWeatherPreset" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherPreset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_WeatherMaterialFXSettings = { "WeatherMaterialFXSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkyCreatorWeatherPreset, WeatherMaterialFXSettings), Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings, METADATA_PARAMS(Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_WeatherMaterialFXSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_WeatherMaterialFXSettings_MetaData)) }; // 998852082
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_WindSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorWeatherPreset" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherPreset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_WindSettings = { "WindSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkyCreatorWeatherPreset, WindSettings), Z_Construct_UScriptStruct_FSkyCreatorWindSettings, METADATA_PARAMS(Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_WindSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_WindSettings_MetaData)) }; // 1706621100
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_PostProcessSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorWeatherPreset" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherPreset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_PostProcessSettings = { "PostProcessSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkyCreatorWeatherPreset, PostProcessSettings), Z_Construct_UScriptStruct_FSkyCreatorPostProcessSettings, METADATA_PARAMS(Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_PostProcessSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_PostProcessSettings_MetaData)) }; // 1991048929
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_SkyAtmosphereSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_VolumetricCloudSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_BackgroundCloudSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_SkyLightSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_SunLightSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_MoonLightSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_ExponentialHeightFogSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_StarMapSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_WeatherFXSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_WeatherMaterialFXSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_WindSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::NewProp_PostProcessSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkyCreatorWeatherPreset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::ClassParams = {
		&USkyCreatorWeatherPreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkyCreatorWeatherPreset()
	{
		if (!Z_Registration_Info_UClass_USkyCreatorWeatherPreset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkyCreatorWeatherPreset.OuterSingleton, Z_Construct_UClass_USkyCreatorWeatherPreset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USkyCreatorWeatherPreset.OuterSingleton;
	}
	template<> SKYCREATORPLUGIN_API UClass* StaticClass<USkyCreatorWeatherPreset>()
	{
		return USkyCreatorWeatherPreset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkyCreatorWeatherPreset);
	USkyCreatorWeatherPreset::~USkyCreatorWeatherPreset() {}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorWeatherPreset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorWeatherPreset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USkyCreatorWeatherPreset, USkyCreatorWeatherPreset::StaticClass, TEXT("USkyCreatorWeatherPreset"), &Z_Registration_Info_UClass_USkyCreatorWeatherPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkyCreatorWeatherPreset), 646699761U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorWeatherPreset_h_3728812844(TEXT("/Script/SkyCreatorPlugin"),
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorWeatherPreset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorWeatherPreset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
