// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PPSkyCreatorPlugin/Public/PPSkyCreatorPostProcessSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePPSkyCreatorPostProcessSettings() {}
// Cross Module References
	PPSKYCREATORPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FPPSkyCreatorPostProcessSettings();
	UPackage* Z_Construct_UPackage__Script_PPSkyCreatorPlugin();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PPSkyCreatorPostProcessSettings;
class UScriptStruct* FPPSkyCreatorPostProcessSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PPSkyCreatorPostProcessSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PPSkyCreatorPostProcessSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPPSkyCreatorPostProcessSettings, Z_Construct_UPackage__Script_PPSkyCreatorPlugin(), TEXT("PPSkyCreatorPostProcessSettings"));
	}
	return Z_Registration_Info_UScriptStruct_PPSkyCreatorPostProcessSettings.OuterSingleton;
}
template<> PPSKYCREATORPLUGIN_API UScriptStruct* StaticStruct<FPPSkyCreatorPostProcessSettings>()
{
	return FPPSkyCreatorPostProcessSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPPSkyCreatorPostProcessSettings_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorPostProcessSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorPostProcessSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPPSkyCreatorPostProcessSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPPSkyCreatorPostProcessSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorPostProcessSettings_Statics::NewProp_BloomIntensity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorPostProcessSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorPostProcessSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorPostProcessSettings_Statics::NewProp_BloomIntensity = { "BloomIntensity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorPostProcessSettings, BloomIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorPostProcessSettings_Statics::NewProp_BloomIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorPostProcessSettings_Statics::NewProp_BloomIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorPostProcessSettings_Statics::NewProp_BloomThreshold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorPostProcessSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorPostProcessSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorPostProcessSettings_Statics::NewProp_BloomThreshold = { "BloomThreshold", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorPostProcessSettings, BloomThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorPostProcessSettings_Statics::NewProp_BloomThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorPostProcessSettings_Statics::NewProp_BloomThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorPostProcessSettings_Statics::NewProp_ExposureCompensation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorPostProcessSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorPostProcessSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorPostProcessSettings_Statics::NewProp_ExposureCompensation = { "ExposureCompensation", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorPostProcessSettings, ExposureCompensation), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorPostProcessSettings_Statics::NewProp_ExposureCompensation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorPostProcessSettings_Statics::NewProp_ExposureCompensation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPPSkyCreatorPostProcessSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorPostProcessSettings_Statics::NewProp_BloomIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorPostProcessSettings_Statics::NewProp_BloomThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorPostProcessSettings_Statics::NewProp_ExposureCompensation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPPSkyCreatorPostProcessSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PPSkyCreatorPlugin,
		nullptr,
		&NewStructOps,
		"PPSkyCreatorPostProcessSettings",
		sizeof(FPPSkyCreatorPostProcessSettings),
		alignof(FPPSkyCreatorPostProcessSettings),
		Z_Construct_UScriptStruct_FPPSkyCreatorPostProcessSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorPostProcessSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorPostProcessSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorPostProcessSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPPSkyCreatorPostProcessSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_PPSkyCreatorPostProcessSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PPSkyCreatorPostProcessSettings.InnerSingleton, Z_Construct_UScriptStruct_FPPSkyCreatorPostProcessSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PPSkyCreatorPostProcessSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPSkyCreatorPostProcessSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPSkyCreatorPostProcessSettings_h_Statics::ScriptStructInfo[] = {
		{ FPPSkyCreatorPostProcessSettings::StaticStruct, Z_Construct_UScriptStruct_FPPSkyCreatorPostProcessSettings_Statics::NewStructOps, TEXT("PPSkyCreatorPostProcessSettings"), &Z_Registration_Info_UScriptStruct_PPSkyCreatorPostProcessSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPPSkyCreatorPostProcessSettings), 3560494449U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPSkyCreatorPostProcessSettings_h_529770000(TEXT("/Script/PPSkyCreatorPlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPSkyCreatorPostProcessSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPSkyCreatorPostProcessSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
