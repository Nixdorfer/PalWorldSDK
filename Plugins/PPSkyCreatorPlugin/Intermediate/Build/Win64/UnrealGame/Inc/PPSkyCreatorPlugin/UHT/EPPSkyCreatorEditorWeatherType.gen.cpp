// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PPSkyCreatorPlugin/Public/EPPSkyCreatorEditorWeatherType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEPPSkyCreatorEditorWeatherType() {}
// Cross Module References
	PPSKYCREATORPLUGIN_API UEnum* Z_Construct_UEnum_PPSkyCreatorPlugin_EPPSkyCreatorEditorWeatherType();
	UPackage* Z_Construct_UPackage__Script_PPSkyCreatorPlugin();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPPSkyCreatorEditorWeatherType;
	static UEnum* EPPSkyCreatorEditorWeatherType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPPSkyCreatorEditorWeatherType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPPSkyCreatorEditorWeatherType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PPSkyCreatorPlugin_EPPSkyCreatorEditorWeatherType, Z_Construct_UPackage__Script_PPSkyCreatorPlugin(), TEXT("EPPSkyCreatorEditorWeatherType"));
		}
		return Z_Registration_Info_UEnum_EPPSkyCreatorEditorWeatherType.OuterSingleton;
	}
	template<> PPSKYCREATORPLUGIN_API UEnum* StaticEnum<EPPSkyCreatorEditorWeatherType>()
	{
		return EPPSkyCreatorEditorWeatherType_StaticEnum();
	}
	struct Z_Construct_UEnum_PPSkyCreatorPlugin_EPPSkyCreatorEditorWeatherType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PPSkyCreatorPlugin_EPPSkyCreatorEditorWeatherType_Statics::Enumerators[] = {
		{ "EditorWeather_WeatherPreset", (int64)EditorWeather_WeatherPreset },
		{ "EditorWeather_WeatherSettings", (int64)EditorWeather_WeatherSettings },
		{ "EditorWeather_MAX", (int64)EditorWeather_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PPSkyCreatorPlugin_EPPSkyCreatorEditorWeatherType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EditorWeather_MAX.Hidden", "" },
		{ "EditorWeather_MAX.Name", "EditorWeather_MAX" },
		{ "EditorWeather_WeatherPreset.Name", "EditorWeather_WeatherPreset" },
		{ "EditorWeather_WeatherSettings.Name", "EditorWeather_WeatherSettings" },
		{ "ModuleRelativePath", "Public/EPPSkyCreatorEditorWeatherType.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PPSkyCreatorPlugin_EPPSkyCreatorEditorWeatherType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PPSkyCreatorPlugin,
		nullptr,
		"EPPSkyCreatorEditorWeatherType",
		"EPPSkyCreatorEditorWeatherType",
		Z_Construct_UEnum_PPSkyCreatorPlugin_EPPSkyCreatorEditorWeatherType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PPSkyCreatorPlugin_EPPSkyCreatorEditorWeatherType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_PPSkyCreatorPlugin_EPPSkyCreatorEditorWeatherType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PPSkyCreatorPlugin_EPPSkyCreatorEditorWeatherType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PPSkyCreatorPlugin_EPPSkyCreatorEditorWeatherType()
	{
		if (!Z_Registration_Info_UEnum_EPPSkyCreatorEditorWeatherType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPPSkyCreatorEditorWeatherType.InnerSingleton, Z_Construct_UEnum_PPSkyCreatorPlugin_EPPSkyCreatorEditorWeatherType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPPSkyCreatorEditorWeatherType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_EPPSkyCreatorEditorWeatherType_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_EPPSkyCreatorEditorWeatherType_h_Statics::EnumInfo[] = {
		{ EPPSkyCreatorEditorWeatherType_StaticEnum, TEXT("EPPSkyCreatorEditorWeatherType"), &Z_Registration_Info_UEnum_EPPSkyCreatorEditorWeatherType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3208824464U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_EPPSkyCreatorEditorWeatherType_h_195777599(TEXT("/Script/PPSkyCreatorPlugin"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_EPPSkyCreatorEditorWeatherType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_EPPSkyCreatorEditorWeatherType_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
