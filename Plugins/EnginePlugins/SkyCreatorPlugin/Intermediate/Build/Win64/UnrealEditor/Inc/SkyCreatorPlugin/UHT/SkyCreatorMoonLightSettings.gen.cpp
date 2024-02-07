// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SkyCreatorPlugin/Public/SkyCreatorMoonLightSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkyCreatorMoonLightSettings() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	SKYCREATORPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings();
	UPackage* Z_Construct_UPackage__Script_SkyCreatorPlugin();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SkyCreatorMoonLightSettings;
class UScriptStruct* FSkyCreatorMoonLightSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SkyCreatorMoonLightSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SkyCreatorMoonLightSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings, Z_Construct_UPackage__Script_SkyCreatorPlugin(), TEXT("SkyCreatorMoonLightSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SkyCreatorMoonLightSettings.OuterSingleton;
}
template<> SKYCREATORPLUGIN_API UScriptStruct* StaticStruct<FSkyCreatorMoonLightSettings>()
{
	return FSkyCreatorMoonLightSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Intensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Intensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LightColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Temperature_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Temperature;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumetricScatteringIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumetricScatteringIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AtmosphereDiskColorScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AtmosphereDiskColorScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CloudScatteredLuminanceScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CloudScatteredLuminanceScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CloudShadowStrength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CloudShadowStrength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CloudShadowOnAtmosphereStrength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CloudShadowOnAtmosphereStrength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CloudShadowOnSurfaceStrength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CloudShadowOnSurfaceStrength;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SkyCreatorMoonLightSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkyCreatorMoonLightSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_Intensity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorMoonLightSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorMoonLightSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorMoonLightSettings, Intensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_Intensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_Intensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_LightColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorMoonLightSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorMoonLightSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_LightColor = { "LightColor", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorMoonLightSettings, LightColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_LightColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_LightColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_Temperature_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorMoonLightSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorMoonLightSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_Temperature = { "Temperature", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorMoonLightSettings, Temperature), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_Temperature_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_Temperature_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_VolumetricScatteringIntensity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorMoonLightSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorMoonLightSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_VolumetricScatteringIntensity = { "VolumetricScatteringIntensity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorMoonLightSettings, VolumetricScatteringIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_VolumetricScatteringIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_VolumetricScatteringIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_AtmosphereDiskColorScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorMoonLightSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorMoonLightSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_AtmosphereDiskColorScale = { "AtmosphereDiskColorScale", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorMoonLightSettings, AtmosphereDiskColorScale), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_AtmosphereDiskColorScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_AtmosphereDiskColorScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_CloudScatteredLuminanceScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorMoonLightSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorMoonLightSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_CloudScatteredLuminanceScale = { "CloudScatteredLuminanceScale", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorMoonLightSettings, CloudScatteredLuminanceScale), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_CloudScatteredLuminanceScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_CloudScatteredLuminanceScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_CloudShadowStrength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorMoonLightSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorMoonLightSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_CloudShadowStrength = { "CloudShadowStrength", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorMoonLightSettings, CloudShadowStrength), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_CloudShadowStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_CloudShadowStrength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_CloudShadowOnAtmosphereStrength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorMoonLightSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorMoonLightSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_CloudShadowOnAtmosphereStrength = { "CloudShadowOnAtmosphereStrength", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorMoonLightSettings, CloudShadowOnAtmosphereStrength), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_CloudShadowOnAtmosphereStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_CloudShadowOnAtmosphereStrength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_CloudShadowOnSurfaceStrength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorMoonLightSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorMoonLightSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_CloudShadowOnSurfaceStrength = { "CloudShadowOnSurfaceStrength", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorMoonLightSettings, CloudShadowOnSurfaceStrength), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_CloudShadowOnSurfaceStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_CloudShadowOnSurfaceStrength_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_Intensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_LightColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_Temperature,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_VolumetricScatteringIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_AtmosphereDiskColorScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_CloudScatteredLuminanceScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_CloudShadowStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_CloudShadowOnAtmosphereStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewProp_CloudShadowOnSurfaceStrength,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SkyCreatorPlugin,
		nullptr,
		&NewStructOps,
		"SkyCreatorMoonLightSettings",
		sizeof(FSkyCreatorMoonLightSettings),
		alignof(FSkyCreatorMoonLightSettings),
		Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SkyCreatorMoonLightSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SkyCreatorMoonLightSettings.InnerSingleton, Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SkyCreatorMoonLightSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorMoonLightSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorMoonLightSettings_h_Statics::ScriptStructInfo[] = {
		{ FSkyCreatorMoonLightSettings::StaticStruct, Z_Construct_UScriptStruct_FSkyCreatorMoonLightSettings_Statics::NewStructOps, TEXT("SkyCreatorMoonLightSettings"), &Z_Registration_Info_UScriptStruct_SkyCreatorMoonLightSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkyCreatorMoonLightSettings), 485143332U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorMoonLightSettings_h_2213219101(TEXT("/Script/SkyCreatorPlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorMoonLightSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorMoonLightSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
