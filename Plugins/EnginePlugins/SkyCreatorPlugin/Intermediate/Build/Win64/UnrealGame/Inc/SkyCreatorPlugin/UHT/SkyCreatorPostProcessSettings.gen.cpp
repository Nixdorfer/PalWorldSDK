// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SkyCreatorPlugin/Public/SkyCreatorPostProcessSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkyCreatorPostProcessSettings() {}
// Cross Module References
	SKYCREATORPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSkyCreatorPostProcessSettings();
	UPackage* Z_Construct_UPackage__Script_SkyCreatorPlugin();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SkyCreatorPostProcessSettings;
class UScriptStruct* FSkyCreatorPostProcessSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SkyCreatorPostProcessSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SkyCreatorPostProcessSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkyCreatorPostProcessSettings, Z_Construct_UPackage__Script_SkyCreatorPlugin(), TEXT("SkyCreatorPostProcessSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SkyCreatorPostProcessSettings.OuterSingleton;
}
template<> SKYCREATORPLUGIN_API UScriptStruct* StaticStruct<FSkyCreatorPostProcessSettings>()
{
	return FSkyCreatorPostProcessSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSkyCreatorPostProcessSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BloomIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BloomIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BloomThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BloomThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExposureCompensation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExposureCompensation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorPostProcessSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SkyCreatorPostProcessSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkyCreatorPostProcessSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkyCreatorPostProcessSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorPostProcessSettings_Statics::NewProp_BloomIntensity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorPostProcessSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorPostProcessSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorPostProcessSettings_Statics::NewProp_BloomIntensity = { "BloomIntensity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorPostProcessSettings, BloomIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorPostProcessSettings_Statics::NewProp_BloomIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorPostProcessSettings_Statics::NewProp_BloomIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorPostProcessSettings_Statics::NewProp_BloomThreshold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorPostProcessSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorPostProcessSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorPostProcessSettings_Statics::NewProp_BloomThreshold = { "BloomThreshold", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorPostProcessSettings, BloomThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorPostProcessSettings_Statics::NewProp_BloomThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorPostProcessSettings_Statics::NewProp_BloomThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorPostProcessSettings_Statics::NewProp_ExposureCompensation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorPostProcessSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorPostProcessSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorPostProcessSettings_Statics::NewProp_ExposureCompensation = { "ExposureCompensation", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorPostProcessSettings, ExposureCompensation), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorPostProcessSettings_Statics::NewProp_ExposureCompensation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorPostProcessSettings_Statics::NewProp_ExposureCompensation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkyCreatorPostProcessSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorPostProcessSettings_Statics::NewProp_BloomIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorPostProcessSettings_Statics::NewProp_BloomThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorPostProcessSettings_Statics::NewProp_ExposureCompensation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkyCreatorPostProcessSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SkyCreatorPlugin,
		nullptr,
		&NewStructOps,
		"SkyCreatorPostProcessSettings",
		sizeof(FSkyCreatorPostProcessSettings),
		alignof(FSkyCreatorPostProcessSettings),
		Z_Construct_UScriptStruct_FSkyCreatorPostProcessSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorPostProcessSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorPostProcessSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorPostProcessSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSkyCreatorPostProcessSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SkyCreatorPostProcessSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SkyCreatorPostProcessSettings.InnerSingleton, Z_Construct_UScriptStruct_FSkyCreatorPostProcessSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SkyCreatorPostProcessSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorPostProcessSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorPostProcessSettings_h_Statics::ScriptStructInfo[] = {
		{ FSkyCreatorPostProcessSettings::StaticStruct, Z_Construct_UScriptStruct_FSkyCreatorPostProcessSettings_Statics::NewStructOps, TEXT("SkyCreatorPostProcessSettings"), &Z_Registration_Info_UScriptStruct_SkyCreatorPostProcessSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkyCreatorPostProcessSettings), 1991048929U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorPostProcessSettings_h_4124763559(TEXT("/Script/SkyCreatorPlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorPostProcessSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorPostProcessSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
