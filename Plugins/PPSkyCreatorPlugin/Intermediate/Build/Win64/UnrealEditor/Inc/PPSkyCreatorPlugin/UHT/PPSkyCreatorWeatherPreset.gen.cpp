// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PPSkyCreatorPlugin/Public/PPSkyCreatorWeatherPreset.h"
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
#include "PPSkyCreatorPlugin/Public/PPSkyCreatorWeatherSettings.h"
#include "PPSkyCreatorPlugin/Public/PPSkyCreatorWindSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePPSkyCreatorWeatherPreset() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	PPSKYCREATORPLUGIN_API UClass* Z_Construct_UClass_UPPSkyCreatorWeatherPreset();
	PPSKYCREATORPLUGIN_API UClass* Z_Construct_UClass_UPPSkyCreatorWeatherPreset_NoRegister();
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
	DEFINE_FUNCTION(UPPSkyCreatorWeatherPreset::execGetWeatherPresetSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FPPSkyCreatorWeatherSettings*)Z_Param__Result=P_THIS->GetWeatherPresetSettings();
		P_NATIVE_END;
	}
	void UPPSkyCreatorWeatherPreset::StaticRegisterNativesUPPSkyCreatorWeatherPreset()
	{
		UClass* Class = UPPSkyCreatorWeatherPreset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetWeatherPresetSettings", &UPPSkyCreatorWeatherPreset::execGetWeatherPresetSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPPSkyCreatorWeatherPreset_GetWeatherPresetSettings_Statics
	{
		struct PPSkyCreatorWeatherPreset_eventGetWeatherPresetSettings_Parms
		{
			FPPSkyCreatorWeatherSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPPSkyCreatorWeatherPreset_GetWeatherPresetSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PPSkyCreatorWeatherPreset_eventGetWeatherPresetSettings_Parms, ReturnValue), Z_Construct_UScriptStruct_FPPSkyCreatorWeatherSettings, METADATA_PARAMS(nullptr, 0) }; // 1920033603
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPPSkyCreatorWeatherPreset_GetWeatherPresetSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPPSkyCreatorWeatherPreset_GetWeatherPresetSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPPSkyCreatorWeatherPreset_GetWeatherPresetSettings_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherPreset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPPSkyCreatorWeatherPreset_GetWeatherPresetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPPSkyCreatorWeatherPreset, nullptr, "GetWeatherPresetSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPPSkyCreatorWeatherPreset_GetWeatherPresetSettings_Statics::PPSkyCreatorWeatherPreset_eventGetWeatherPresetSettings_Parms), Z_Construct_UFunction_UPPSkyCreatorWeatherPreset_GetWeatherPresetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPPSkyCreatorWeatherPreset_GetWeatherPresetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPPSkyCreatorWeatherPreset_GetWeatherPresetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPPSkyCreatorWeatherPreset_GetWeatherPresetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPPSkyCreatorWeatherPreset_GetWeatherPresetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPPSkyCreatorWeatherPreset_GetWeatherPresetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPPSkyCreatorWeatherPreset);
	UClass* Z_Construct_UClass_UPPSkyCreatorWeatherPreset_NoRegister()
	{
		return UPPSkyCreatorWeatherPreset::StaticClass();
	}
	struct Z_Construct_UClass_UPPSkyCreatorWeatherPreset_Statics
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
	UObject* (*const Z_Construct_UClass_UPPSkyCreatorWeatherPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_PPSkyCreatorPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPPSkyCreatorWeatherPreset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPPSkyCreatorWeatherPreset_GetWeatherPresetSettings, "GetWeatherPresetSettings" }, // 4290871566
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPPSkyCreatorWeatherPreset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PPSkyCreatorWeatherPreset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherPreset.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPPSkyCreatorWeatherPreset_Statics::NewProp_Description_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherPreset" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherPreset.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UPPSkyCreatorWeatherPreset_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPPSkyCreatorWeatherPreset, Description), METADATA_PARAMS(Z_Construct_UClass_UPPSkyCreatorWeatherPreset_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPPSkyCreatorWeatherPreset_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPPSkyCreatorWeatherPreset_Statics::NewProp_SkyAtmosphereSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherPreset" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherPreset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPPSkyCreatorWeatherPreset_Statics::NewProp_SkyAtmosphereSettings = { "SkyAtmosphereSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPPSkyCreatorWeatherPreset, SkyAtmosphereSettings), Z_Construct_UScriptStruct_FPPSkyCreatorSkyAtmosphereSettings, METADATA_PARAMS(Z_Construct_UClass_UPPSkyCreatorWeatherPreset_Statics::NewProp_SkyAtmosphereSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPPSkyCreatorWeatherPreset_Statics::NewProp_SkyAtmosphereSettings_MetaData)) }; // 2047631239
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPPSkyCreatorWeatherPreset_Statics::NewProp_VolumetricCloudSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherPreset" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherPreset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPPSkyCreatorWeatherPreset_Statics::NewProp_VolumetricCloudSettings = { "VolumetricCloudSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPPSkyCreatorWeatherPreset, VolumetricCloudSettings), Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings, METADATA_PARAMS(Z_Construct_UClass_UPPSkyCreatorWeatherPreset_Statics::NewProp_VolumetricCloudSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPPSkyCreatorWeatherPreset_Statics::NewProp_VolumetricCloudSettings_MetaData)) }; // 392542
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPPSkyCreatorWeatherPreset_Statics::NewProp_BackgroundCloudSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherPreset" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherPreset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPPSkyCreatorWeatherPreset_Statics::NewProp_BackgroundCloudSettings = { "BackgroundCloudSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPPSkyCreatorWeatherPreset, BackgroundCloudSettings), Z_Construct_UScriptStruct_FPPSkyCreatorBackgroundCloudSettings, METADATA_PARAMS(Z_Construct_UClass_UPPSkyCreatorWeatherPreset_Statics::NewProp_BackgroundCloudSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPPSkyCreatorWeatherPreset_Statics::NewProp_BackgroundCloudSettings_MetaData)) }; // 4008073400
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPPSkyCreatorWeatherPreset_Statics::NewProp_SkyLightSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherPreset" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherPreset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPPSkyCreatorWeatherPreset_Statics::NewProp_SkyLightSettings = { "SkyLightSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPPSkyCreatorWeatherPreset, SkyLightSettings), Z_Construct_UScriptStruct_FPPSkyCreatorSkyLightSettings, METADATA_PARAMS(Z_Construct_UClass_UPPSkyCreatorWeatherPreset_Statics::NewProp_SkyLightSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPPSkyCreatorWeatherPreset_Statics::NewProp_SkyLightSettings_MetaData)) }; // 1198484798
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPPSkyCreatorWeatherPreset_Statics::NewProp_SunLightSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherPreset" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherPreset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPPSkyCreatorWeatherPreset_Statics::NewProp_SunLightSettings = { "SunLightSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPPSkyCreatorWeatherPreset, SunLightSettings), Z_Construct_UScriptStruct_FPPSkyCreatorSunLightSettings, METADATA_PARAMS(Z_Construct_UClass_UPPSkyCreatorWeatherPreset_Statics::NewProp_SunLightSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPPSkyCreatorWeatherPreset_Statics::NewProp_SunLightSettings_MetaData)) }; // 3693242562
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPPSkyCreatorWeatherPreset_Statics::NewProp_MoonLightSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherPreset" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherPreset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPPSkyCreatorWeatherPreset_Statics::NewProp_MoonLightSettings = { "MoonLightSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPPSkyCreatorWeatherPreset, MoonLightSettings), Z_Construct_UScriptStruct_FPPSkyCreatorMoonLightSettings, METADATA_PARAMS(Z_Construct_UClass_UPPSkyCreatorWeatherPreset_Statics::NewProp_MoonLightSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPPSkyCreatorWeatherPreset_Statics::NewProp_MoonLightSettings_MetaData)) }; // 2169900422
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPPSkyCreatorWeatherPreset_Statics::NewProp_ExponentialHeightFogSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherPreset" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherPreset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPPSkyCreatorWeatherPreset_Statics::NewProp_ExponentialHeightFogSettings = { "ExponentialHeightFogSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPPSkyCreatorWeatherPreset, ExponentialHeightFogSettings), Z_Construct_UScriptStruct_FPPSkyCreatorExponentialHeightFogSettings, METADATA_PARAMS(Z_Construct_UClass_UPPSkyCreatorWeatherPreset_Statics::NewProp_ExponentialHeightFogSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPPSkyCreatorWeatherPreset_Statics::NewProp_ExponentialHeightFogSettings_MetaData)) }; // 2821353897
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPPSkyCreatorWeatherPreset_Statics::NewProp_StarMapSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherPreset" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherPreset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPPSkyCreatorWeatherPreset_Statics::NewProp_StarMapSettings = { "StarMapSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPPSkyCreatorWeatherPreset, StarMapSettings), Z_Construct_UScriptStruct_FPPSkyCreatorStarMapSettings, METADATA_PARAMS(Z_Construct_UClass_UPPSkyCreatorWeatherPreset_Statics::NewProp_StarMapSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPPSkyCreatorWeatherPreset_Statics::NewProp_StarMapSettings_MetaData)) }; // 3534814761
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPPSkyCreatorWeatherPreset_Statics::NewProp_WeatherFXSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherPreset" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherPreset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPPSkyCreatorWeatherPreset_Statics::NewProp_WeatherFXSettings = { "WeatherFXSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPPSkyCreatorWeatherPreset, WeatherFXSettings), Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings, METADATA_PARAMS(Z_Construct_UClass_UPPSkyCreatorWeatherPreset_Statics::NewProp_WeatherFXSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPPSkyCreatorWeatherPreset_Statics::NewProp_WeatherFXSettings_MetaData)) }; // 1675121933
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPPSkyCreatorWeatherPreset_Statics::NewProp_WeatherMaterialFXSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherPreset" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherPreset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPPSkyCreatorWeatherPreset_Statics::NewProp_WeatherMaterialFXSettings = { "WeatherMaterialFXSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPPSkyCreatorWeatherPreset, WeatherMaterialFXSettings), Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings, METADATA_PARAMS(Z_Construct_UClass_UPPSkyCreatorWeatherPreset_Statics::NewProp_WeatherMaterialFXSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPPSkyCreatorWeatherPreset_Statics::NewProp_WeatherMaterialFXSettings_MetaData)) }; // 1068823584
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPPSkyCreatorWeatherPreset_Statics::NewProp_WindSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherPreset" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherPreset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPPSkyCreatorWeatherPreset_Statics::NewProp_WindSettings = { "WindSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPPSkyCreatorWeatherPreset, WindSettings), Z_Construct_UScriptStruct_FPPSkyCreatorWindSettings, METADATA_PARAMS(Z_Construct_UClass_UPPSkyCreatorWeatherPreset_Statics::NewProp_WindSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPPSkyCreatorWeatherPreset_Statics::NewProp_WindSettings_MetaData)) }; // 2959899271
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPPSkyCreatorWeatherPreset_Statics::NewProp_PostProcessSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherPreset" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherPreset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPPSkyCreatorWeatherPreset_Statics::NewProp_PostProcessSettings = { "PostProcessSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPPSkyCreatorWeatherPreset, PostProcessSettings), Z_Construct_UScriptStruct_FPPSkyCreatorPostProcessSettings, METADATA_PARAMS(Z_Construct_UClass_UPPSkyCreatorWeatherPreset_Statics::NewProp_PostProcessSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPPSkyCreatorWeatherPreset_Statics::NewProp_PostProcessSettings_MetaData)) }; // 3560494449
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPPSkyCreatorWeatherPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPPSkyCreatorWeatherPreset_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPPSkyCreatorWeatherPreset_Statics::NewProp_SkyAtmosphereSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPPSkyCreatorWeatherPreset_Statics::NewProp_VolumetricCloudSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPPSkyCreatorWeatherPreset_Statics::NewProp_BackgroundCloudSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPPSkyCreatorWeatherPreset_Statics::NewProp_SkyLightSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPPSkyCreatorWeatherPreset_Statics::NewProp_SunLightSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPPSkyCreatorWeatherPreset_Statics::NewProp_MoonLightSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPPSkyCreatorWeatherPreset_Statics::NewProp_ExponentialHeightFogSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPPSkyCreatorWeatherPreset_Statics::NewProp_StarMapSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPPSkyCreatorWeatherPreset_Statics::NewProp_WeatherFXSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPPSkyCreatorWeatherPreset_Statics::NewProp_WeatherMaterialFXSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPPSkyCreatorWeatherPreset_Statics::NewProp_WindSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPPSkyCreatorWeatherPreset_Statics::NewProp_PostProcessSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPPSkyCreatorWeatherPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPPSkyCreatorWeatherPreset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPPSkyCreatorWeatherPreset_Statics::ClassParams = {
		&UPPSkyCreatorWeatherPreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPPSkyCreatorWeatherPreset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPPSkyCreatorWeatherPreset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPPSkyCreatorWeatherPreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPPSkyCreatorWeatherPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPPSkyCreatorWeatherPreset()
	{
		if (!Z_Registration_Info_UClass_UPPSkyCreatorWeatherPreset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPPSkyCreatorWeatherPreset.OuterSingleton, Z_Construct_UClass_UPPSkyCreatorWeatherPreset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPPSkyCreatorWeatherPreset.OuterSingleton;
	}
	template<> PPSKYCREATORPLUGIN_API UClass* StaticClass<UPPSkyCreatorWeatherPreset>()
	{
		return UPPSkyCreatorWeatherPreset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPPSkyCreatorWeatherPreset);
	UPPSkyCreatorWeatherPreset::~UPPSkyCreatorWeatherPreset() {}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPSkyCreatorWeatherPreset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPSkyCreatorWeatherPreset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPPSkyCreatorWeatherPreset, UPPSkyCreatorWeatherPreset::StaticClass, TEXT("UPPSkyCreatorWeatherPreset"), &Z_Registration_Info_UClass_UPPSkyCreatorWeatherPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPPSkyCreatorWeatherPreset), 1393255401U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPSkyCreatorWeatherPreset_h_1550781280(TEXT("/Script/PPSkyCreatorPlugin"),
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPSkyCreatorWeatherPreset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPSkyCreatorWeatherPreset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
