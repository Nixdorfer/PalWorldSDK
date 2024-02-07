// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PPSkyCreatorPlugin/Public/PPSkyCreatorStarMapSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePPSkyCreatorStarMapSettings() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	PPSKYCREATORPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FPPSkyCreatorStarMapSettings();
	UPackage* Z_Construct_UPackage__Script_PPSkyCreatorPlugin();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PPSkyCreatorStarMapSettings;
class UScriptStruct* FPPSkyCreatorStarMapSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PPSkyCreatorStarMapSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PPSkyCreatorStarMapSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPPSkyCreatorStarMapSettings, Z_Construct_UPackage__Script_PPSkyCreatorPlugin(), TEXT("PPSkyCreatorStarMapSettings"));
	}
	return Z_Registration_Info_UScriptStruct_PPSkyCreatorStarMapSettings.OuterSingleton;
}
template<> PPSKYCREATORPLUGIN_API UScriptStruct* StaticStruct<FPPSkyCreatorStarMapSettings>()
{
	return FPPSkyCreatorStarMapSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPPSkyCreatorStarMapSettings_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorStarMapSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorStarMapSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPPSkyCreatorStarMapSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPPSkyCreatorStarMapSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorStarMapSettings_Statics::NewProp_StarMapIntensity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorStarMapSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorStarMapSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorStarMapSettings_Statics::NewProp_StarMapIntensity = { "StarMapIntensity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorStarMapSettings, StarMapIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorStarMapSettings_Statics::NewProp_StarMapIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorStarMapSettings_Statics::NewProp_StarMapIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorStarMapSettings_Statics::NewProp_StarMapColorTint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorStarMapSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorStarMapSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorStarMapSettings_Statics::NewProp_StarMapColorTint = { "StarMapColorTint", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorStarMapSettings, StarMapColorTint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorStarMapSettings_Statics::NewProp_StarMapColorTint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorStarMapSettings_Statics::NewProp_StarMapColorTint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorStarMapSettings_Statics::NewProp_StarMapTwinkleIntensity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorStarMapSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorStarMapSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorStarMapSettings_Statics::NewProp_StarMapTwinkleIntensity = { "StarMapTwinkleIntensity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorStarMapSettings, StarMapTwinkleIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorStarMapSettings_Statics::NewProp_StarMapTwinkleIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorStarMapSettings_Statics::NewProp_StarMapTwinkleIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorStarMapSettings_Statics::NewProp_StarMapTwinkleSaturation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorStarMapSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorStarMapSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorStarMapSettings_Statics::NewProp_StarMapTwinkleSaturation = { "StarMapTwinkleSaturation", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorStarMapSettings, StarMapTwinkleSaturation), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorStarMapSettings_Statics::NewProp_StarMapTwinkleSaturation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorStarMapSettings_Statics::NewProp_StarMapTwinkleSaturation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorStarMapSettings_Statics::NewProp_StarMapTwinkleSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorStarMapSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorStarMapSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorStarMapSettings_Statics::NewProp_StarMapTwinkleSpeed = { "StarMapTwinkleSpeed", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorStarMapSettings, StarMapTwinkleSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorStarMapSettings_Statics::NewProp_StarMapTwinkleSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorStarMapSettings_Statics::NewProp_StarMapTwinkleSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorStarMapSettings_Statics::NewProp_StarMapHorizonThreshold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorStarMapSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorStarMapSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorStarMapSettings_Statics::NewProp_StarMapHorizonThreshold = { "StarMapHorizonThreshold", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorStarMapSettings, StarMapHorizonThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorStarMapSettings_Statics::NewProp_StarMapHorizonThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorStarMapSettings_Statics::NewProp_StarMapHorizonThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorStarMapSettings_Statics::NewProp_StarMapAtmosphereThreshold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorStarMapSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorStarMapSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorStarMapSettings_Statics::NewProp_StarMapAtmosphereThreshold = { "StarMapAtmosphereThreshold", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorStarMapSettings, StarMapAtmosphereThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorStarMapSettings_Statics::NewProp_StarMapAtmosphereThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorStarMapSettings_Statics::NewProp_StarMapAtmosphereThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorStarMapSettings_Statics::NewProp_NightHorizonColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorStarMapSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorStarMapSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorStarMapSettings_Statics::NewProp_NightHorizonColor = { "NightHorizonColor", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorStarMapSettings, NightHorizonColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorStarMapSettings_Statics::NewProp_NightHorizonColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorStarMapSettings_Statics::NewProp_NightHorizonColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorStarMapSettings_Statics::NewProp_NightZenithColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorStarMapSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorStarMapSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorStarMapSettings_Statics::NewProp_NightZenithColor = { "NightZenithColor", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorStarMapSettings, NightZenithColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorStarMapSettings_Statics::NewProp_NightZenithColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorStarMapSettings_Statics::NewProp_NightZenithColor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPPSkyCreatorStarMapSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorStarMapSettings_Statics::NewProp_StarMapIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorStarMapSettings_Statics::NewProp_StarMapColorTint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorStarMapSettings_Statics::NewProp_StarMapTwinkleIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorStarMapSettings_Statics::NewProp_StarMapTwinkleSaturation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorStarMapSettings_Statics::NewProp_StarMapTwinkleSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorStarMapSettings_Statics::NewProp_StarMapHorizonThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorStarMapSettings_Statics::NewProp_StarMapAtmosphereThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorStarMapSettings_Statics::NewProp_NightHorizonColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorStarMapSettings_Statics::NewProp_NightZenithColor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPPSkyCreatorStarMapSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PPSkyCreatorPlugin,
		nullptr,
		&NewStructOps,
		"PPSkyCreatorStarMapSettings",
		sizeof(FPPSkyCreatorStarMapSettings),
		alignof(FPPSkyCreatorStarMapSettings),
		Z_Construct_UScriptStruct_FPPSkyCreatorStarMapSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorStarMapSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorStarMapSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorStarMapSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPPSkyCreatorStarMapSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_PPSkyCreatorStarMapSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PPSkyCreatorStarMapSettings.InnerSingleton, Z_Construct_UScriptStruct_FPPSkyCreatorStarMapSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PPSkyCreatorStarMapSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPSkyCreatorStarMapSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPSkyCreatorStarMapSettings_h_Statics::ScriptStructInfo[] = {
		{ FPPSkyCreatorStarMapSettings::StaticStruct, Z_Construct_UScriptStruct_FPPSkyCreatorStarMapSettings_Statics::NewStructOps, TEXT("PPSkyCreatorStarMapSettings"), &Z_Registration_Info_UScriptStruct_PPSkyCreatorStarMapSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPPSkyCreatorStarMapSettings), 3534814761U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPSkyCreatorStarMapSettings_h_2638162401(TEXT("/Script/PPSkyCreatorPlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPSkyCreatorStarMapSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPSkyCreatorStarMapSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
