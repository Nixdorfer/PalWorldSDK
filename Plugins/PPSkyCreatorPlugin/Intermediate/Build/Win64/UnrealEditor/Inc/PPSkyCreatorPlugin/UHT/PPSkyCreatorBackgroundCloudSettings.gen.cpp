// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PPSkyCreatorPlugin/Public/PPSkyCreatorBackgroundCloudSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePPSkyCreatorBackgroundCloudSettings() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	PPSKYCREATORPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FPPSkyCreatorBackgroundCloudSettings();
	UPackage* Z_Construct_UPackage__Script_PPSkyCreatorPlugin();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PPSkyCreatorBackgroundCloudSettings;
class UScriptStruct* FPPSkyCreatorBackgroundCloudSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PPSkyCreatorBackgroundCloudSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PPSkyCreatorBackgroundCloudSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPPSkyCreatorBackgroundCloudSettings, Z_Construct_UPackage__Script_PPSkyCreatorPlugin(), TEXT("PPSkyCreatorBackgroundCloudSettings"));
	}
	return Z_Registration_Info_UScriptStruct_PPSkyCreatorBackgroundCloudSettings.OuterSingleton;
}
template<> PPSKYCREATORPLUGIN_API UScriptStruct* StaticStruct<FPPSkyCreatorBackgroundCloudSettings>()
{
	return FPPSkyCreatorBackgroundCloudSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPPSkyCreatorBackgroundCloudSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundCloudsIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BackgroundCloudsIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundCloudsColorTint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundCloudsColorTint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundCloudsLayerA_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BackgroundCloudsLayerA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundCloudsLayerB_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BackgroundCloudsLayerB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundCloudsLayerC_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BackgroundCloudsLayerC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundCloudsLightningPhase_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BackgroundCloudsLightningPhase;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorBackgroundCloudSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorBackgroundCloudSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPPSkyCreatorBackgroundCloudSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPPSkyCreatorBackgroundCloudSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorBackgroundCloudSettings_Statics::NewProp_BackgroundCloudsIntensity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorBackgroundCloudSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorBackgroundCloudSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorBackgroundCloudSettings_Statics::NewProp_BackgroundCloudsIntensity = { "BackgroundCloudsIntensity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorBackgroundCloudSettings, BackgroundCloudsIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorBackgroundCloudSettings_Statics::NewProp_BackgroundCloudsIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorBackgroundCloudSettings_Statics::NewProp_BackgroundCloudsIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorBackgroundCloudSettings_Statics::NewProp_BackgroundCloudsColorTint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorBackgroundCloudSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorBackgroundCloudSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorBackgroundCloudSettings_Statics::NewProp_BackgroundCloudsColorTint = { "BackgroundCloudsColorTint", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorBackgroundCloudSettings, BackgroundCloudsColorTint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorBackgroundCloudSettings_Statics::NewProp_BackgroundCloudsColorTint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorBackgroundCloudSettings_Statics::NewProp_BackgroundCloudsColorTint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorBackgroundCloudSettings_Statics::NewProp_BackgroundCloudsLayerA_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorBackgroundCloudSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorBackgroundCloudSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorBackgroundCloudSettings_Statics::NewProp_BackgroundCloudsLayerA = { "BackgroundCloudsLayerA", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorBackgroundCloudSettings, BackgroundCloudsLayerA), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorBackgroundCloudSettings_Statics::NewProp_BackgroundCloudsLayerA_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorBackgroundCloudSettings_Statics::NewProp_BackgroundCloudsLayerA_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorBackgroundCloudSettings_Statics::NewProp_BackgroundCloudsLayerB_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorBackgroundCloudSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorBackgroundCloudSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorBackgroundCloudSettings_Statics::NewProp_BackgroundCloudsLayerB = { "BackgroundCloudsLayerB", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorBackgroundCloudSettings, BackgroundCloudsLayerB), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorBackgroundCloudSettings_Statics::NewProp_BackgroundCloudsLayerB_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorBackgroundCloudSettings_Statics::NewProp_BackgroundCloudsLayerB_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorBackgroundCloudSettings_Statics::NewProp_BackgroundCloudsLayerC_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorBackgroundCloudSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorBackgroundCloudSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorBackgroundCloudSettings_Statics::NewProp_BackgroundCloudsLayerC = { "BackgroundCloudsLayerC", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorBackgroundCloudSettings, BackgroundCloudsLayerC), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorBackgroundCloudSettings_Statics::NewProp_BackgroundCloudsLayerC_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorBackgroundCloudSettings_Statics::NewProp_BackgroundCloudsLayerC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorBackgroundCloudSettings_Statics::NewProp_BackgroundCloudsLightningPhase_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorBackgroundCloudSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorBackgroundCloudSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorBackgroundCloudSettings_Statics::NewProp_BackgroundCloudsLightningPhase = { "BackgroundCloudsLightningPhase", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorBackgroundCloudSettings, BackgroundCloudsLightningPhase), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorBackgroundCloudSettings_Statics::NewProp_BackgroundCloudsLightningPhase_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorBackgroundCloudSettings_Statics::NewProp_BackgroundCloudsLightningPhase_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPPSkyCreatorBackgroundCloudSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorBackgroundCloudSettings_Statics::NewProp_BackgroundCloudsIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorBackgroundCloudSettings_Statics::NewProp_BackgroundCloudsColorTint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorBackgroundCloudSettings_Statics::NewProp_BackgroundCloudsLayerA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorBackgroundCloudSettings_Statics::NewProp_BackgroundCloudsLayerB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorBackgroundCloudSettings_Statics::NewProp_BackgroundCloudsLayerC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorBackgroundCloudSettings_Statics::NewProp_BackgroundCloudsLightningPhase,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPPSkyCreatorBackgroundCloudSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PPSkyCreatorPlugin,
		nullptr,
		&NewStructOps,
		"PPSkyCreatorBackgroundCloudSettings",
		sizeof(FPPSkyCreatorBackgroundCloudSettings),
		alignof(FPPSkyCreatorBackgroundCloudSettings),
		Z_Construct_UScriptStruct_FPPSkyCreatorBackgroundCloudSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorBackgroundCloudSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorBackgroundCloudSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorBackgroundCloudSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPPSkyCreatorBackgroundCloudSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_PPSkyCreatorBackgroundCloudSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PPSkyCreatorBackgroundCloudSettings.InnerSingleton, Z_Construct_UScriptStruct_FPPSkyCreatorBackgroundCloudSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PPSkyCreatorBackgroundCloudSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPSkyCreatorBackgroundCloudSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPSkyCreatorBackgroundCloudSettings_h_Statics::ScriptStructInfo[] = {
		{ FPPSkyCreatorBackgroundCloudSettings::StaticStruct, Z_Construct_UScriptStruct_FPPSkyCreatorBackgroundCloudSettings_Statics::NewStructOps, TEXT("PPSkyCreatorBackgroundCloudSettings"), &Z_Registration_Info_UScriptStruct_PPSkyCreatorBackgroundCloudSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPPSkyCreatorBackgroundCloudSettings), 4008073400U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPSkyCreatorBackgroundCloudSettings_h_3142244458(TEXT("/Script/PPSkyCreatorPlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPSkyCreatorBackgroundCloudSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPSkyCreatorBackgroundCloudSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
