// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SkyCreatorPlugin/Public/SkyCreatorSunLightSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkyCreatorSunLightSettings() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	SKYCREATORPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings();
	UPackage* Z_Construct_UPackage__Script_SkyCreatorPlugin();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SkyCreatorSunLightSettings;
class UScriptStruct* FSkyCreatorSunLightSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SkyCreatorSunLightSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SkyCreatorSunLightSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings, Z_Construct_UPackage__Script_SkyCreatorPlugin(), TEXT("SkyCreatorSunLightSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SkyCreatorSunLightSettings.OuterSingleton;
}
template<> SKYCREATORPLUGIN_API UScriptStruct* StaticStruct<FSkyCreatorSunLightSettings>()
{
	return FSkyCreatorSunLightSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SkyCreatorSunLightSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkyCreatorSunLightSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_Intensity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorSunLightSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorSunLightSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorSunLightSettings, Intensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_Intensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_Intensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_LightColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorSunLightSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorSunLightSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_LightColor = { "LightColor", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorSunLightSettings, LightColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_LightColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_LightColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_Temperature_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorSunLightSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorSunLightSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_Temperature = { "Temperature", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorSunLightSettings, Temperature), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_Temperature_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_Temperature_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_VolumetricScatteringIntensity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorSunLightSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorSunLightSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_VolumetricScatteringIntensity = { "VolumetricScatteringIntensity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorSunLightSettings, VolumetricScatteringIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_VolumetricScatteringIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_VolumetricScatteringIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_AtmosphereDiskColorScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorSunLightSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorSunLightSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_AtmosphereDiskColorScale = { "AtmosphereDiskColorScale", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorSunLightSettings, AtmosphereDiskColorScale), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_AtmosphereDiskColorScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_AtmosphereDiskColorScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_CloudScatteredLuminanceScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorSunLightSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorSunLightSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_CloudScatteredLuminanceScale = { "CloudScatteredLuminanceScale", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorSunLightSettings, CloudScatteredLuminanceScale), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_CloudScatteredLuminanceScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_CloudScatteredLuminanceScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_CloudShadowStrength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorSunLightSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorSunLightSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_CloudShadowStrength = { "CloudShadowStrength", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorSunLightSettings, CloudShadowStrength), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_CloudShadowStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_CloudShadowStrength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_CloudShadowOnAtmosphereStrength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorSunLightSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorSunLightSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_CloudShadowOnAtmosphereStrength = { "CloudShadowOnAtmosphereStrength", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorSunLightSettings, CloudShadowOnAtmosphereStrength), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_CloudShadowOnAtmosphereStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_CloudShadowOnAtmosphereStrength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_CloudShadowOnSurfaceStrength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorSunLightSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorSunLightSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_CloudShadowOnSurfaceStrength = { "CloudShadowOnSurfaceStrength", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorSunLightSettings, CloudShadowOnSurfaceStrength), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_CloudShadowOnSurfaceStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_CloudShadowOnSurfaceStrength_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_Intensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_LightColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_Temperature,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_VolumetricScatteringIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_AtmosphereDiskColorScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_CloudScatteredLuminanceScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_CloudShadowStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_CloudShadowOnAtmosphereStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewProp_CloudShadowOnSurfaceStrength,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SkyCreatorPlugin,
		nullptr,
		&NewStructOps,
		"SkyCreatorSunLightSettings",
		sizeof(FSkyCreatorSunLightSettings),
		alignof(FSkyCreatorSunLightSettings),
		Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SkyCreatorSunLightSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SkyCreatorSunLightSettings.InnerSingleton, Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SkyCreatorSunLightSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorSunLightSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorSunLightSettings_h_Statics::ScriptStructInfo[] = {
		{ FSkyCreatorSunLightSettings::StaticStruct, Z_Construct_UScriptStruct_FSkyCreatorSunLightSettings_Statics::NewStructOps, TEXT("SkyCreatorSunLightSettings"), &Z_Registration_Info_UScriptStruct_SkyCreatorSunLightSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkyCreatorSunLightSettings), 174992482U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorSunLightSettings_h_2085845021(TEXT("/Script/SkyCreatorPlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorSunLightSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorSunLightSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
