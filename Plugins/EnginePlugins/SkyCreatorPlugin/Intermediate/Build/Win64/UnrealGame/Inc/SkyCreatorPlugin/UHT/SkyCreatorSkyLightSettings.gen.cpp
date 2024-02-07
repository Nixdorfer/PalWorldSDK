// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SkyCreatorPlugin/Public/SkyCreatorSkyLightSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkyCreatorSkyLightSettings() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	SKYCREATORPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings();
	UPackage* Z_Construct_UPackage__Script_SkyCreatorPlugin();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SkyCreatorSkyLightSettings;
class UScriptStruct* FSkyCreatorSkyLightSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SkyCreatorSkyLightSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SkyCreatorSkyLightSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings, Z_Construct_UPackage__Script_SkyCreatorPlugin(), TEXT("SkyCreatorSkyLightSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SkyCreatorSkyLightSettings.OuterSingleton;
}
template<> SKYCREATORPLUGIN_API UScriptStruct* StaticStruct<FSkyCreatorSkyLightSettings>()
{
	return FSkyCreatorSkyLightSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NightIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NightIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LightColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LowerHemisphereColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LowerHemisphereColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CloudAmbientOcclusionStrength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CloudAmbientOcclusionStrength;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SkyCreatorSkyLightSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkyCreatorSkyLightSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings_Statics::NewProp_Intensity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorSkyLightSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorSkyLightSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorSkyLightSettings, Intensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings_Statics::NewProp_Intensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings_Statics::NewProp_Intensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings_Statics::NewProp_NightIntensity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorSkyLightSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorSkyLightSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings_Statics::NewProp_NightIntensity = { "NightIntensity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorSkyLightSettings, NightIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings_Statics::NewProp_NightIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings_Statics::NewProp_NightIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings_Statics::NewProp_LightColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorSkyLightSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorSkyLightSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings_Statics::NewProp_LightColor = { "LightColor", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorSkyLightSettings, LightColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings_Statics::NewProp_LightColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings_Statics::NewProp_LightColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings_Statics::NewProp_LowerHemisphereColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorSkyLightSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorSkyLightSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings_Statics::NewProp_LowerHemisphereColor = { "LowerHemisphereColor", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorSkyLightSettings, LowerHemisphereColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings_Statics::NewProp_LowerHemisphereColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings_Statics::NewProp_LowerHemisphereColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings_Statics::NewProp_CloudAmbientOcclusionStrength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorSkyLightSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorSkyLightSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings_Statics::NewProp_CloudAmbientOcclusionStrength = { "CloudAmbientOcclusionStrength", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorSkyLightSettings, CloudAmbientOcclusionStrength), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings_Statics::NewProp_CloudAmbientOcclusionStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings_Statics::NewProp_CloudAmbientOcclusionStrength_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings_Statics::NewProp_Intensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings_Statics::NewProp_NightIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings_Statics::NewProp_LightColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings_Statics::NewProp_LowerHemisphereColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings_Statics::NewProp_CloudAmbientOcclusionStrength,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SkyCreatorPlugin,
		nullptr,
		&NewStructOps,
		"SkyCreatorSkyLightSettings",
		sizeof(FSkyCreatorSkyLightSettings),
		alignof(FSkyCreatorSkyLightSettings),
		Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SkyCreatorSkyLightSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SkyCreatorSkyLightSettings.InnerSingleton, Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SkyCreatorSkyLightSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorSkyLightSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorSkyLightSettings_h_Statics::ScriptStructInfo[] = {
		{ FSkyCreatorSkyLightSettings::StaticStruct, Z_Construct_UScriptStruct_FSkyCreatorSkyLightSettings_Statics::NewStructOps, TEXT("SkyCreatorSkyLightSettings"), &Z_Registration_Info_UScriptStruct_SkyCreatorSkyLightSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkyCreatorSkyLightSettings), 4293179822U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorSkyLightSettings_h_3090712791(TEXT("/Script/SkyCreatorPlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorSkyLightSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorSkyLightSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
