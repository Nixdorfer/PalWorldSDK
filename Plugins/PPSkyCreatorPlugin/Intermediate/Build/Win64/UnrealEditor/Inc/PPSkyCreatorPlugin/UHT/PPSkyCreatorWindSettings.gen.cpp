// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PPSkyCreatorPlugin/Public/PPSkyCreatorWindSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePPSkyCreatorWindSettings() {}
// Cross Module References
	PPSKYCREATORPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FPPSkyCreatorWindSettings();
	UPackage* Z_Construct_UPackage__Script_PPSkyCreatorPlugin();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PPSkyCreatorWindSettings;
class UScriptStruct* FPPSkyCreatorWindSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PPSkyCreatorWindSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PPSkyCreatorWindSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPPSkyCreatorWindSettings, Z_Construct_UPackage__Script_PPSkyCreatorPlugin(), TEXT("PPSkyCreatorWindSettings"));
	}
	return Z_Registration_Info_UScriptStruct_PPSkyCreatorWindSettings.OuterSingleton;
}
template<> PPSKYCREATORPLUGIN_API UScriptStruct* StaticStruct<FPPSkyCreatorWindSettings>()
{
	return FPPSkyCreatorWindSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPPSkyCreatorWindSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CloudWindDirection_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CloudWindDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CloudWindSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CloudWindSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CloudNoiseShapeWindDirection_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CloudNoiseShapeWindDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CloudNoiseShapeWindSpeedHorizontal_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CloudNoiseShapeWindSpeedHorizontal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CloudNoiseDetailWindSpeedVertical_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CloudNoiseDetailWindSpeedVertical;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrecipitationWindDirection_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PrecipitationWindDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrecipitationWindSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PrecipitationWindSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWindSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWindSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPPSkyCreatorWindSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPPSkyCreatorWindSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWindSettings_Statics::NewProp_CloudWindDirection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWindSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWindSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorWindSettings_Statics::NewProp_CloudWindDirection = { "CloudWindDirection", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorWindSettings, CloudWindDirection), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWindSettings_Statics::NewProp_CloudWindDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWindSettings_Statics::NewProp_CloudWindDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWindSettings_Statics::NewProp_CloudWindSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWindSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWindSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorWindSettings_Statics::NewProp_CloudWindSpeed = { "CloudWindSpeed", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorWindSettings, CloudWindSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWindSettings_Statics::NewProp_CloudWindSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWindSettings_Statics::NewProp_CloudWindSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWindSettings_Statics::NewProp_CloudNoiseShapeWindDirection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWindSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWindSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorWindSettings_Statics::NewProp_CloudNoiseShapeWindDirection = { "CloudNoiseShapeWindDirection", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorWindSettings, CloudNoiseShapeWindDirection), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWindSettings_Statics::NewProp_CloudNoiseShapeWindDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWindSettings_Statics::NewProp_CloudNoiseShapeWindDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWindSettings_Statics::NewProp_CloudNoiseShapeWindSpeedHorizontal_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWindSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWindSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorWindSettings_Statics::NewProp_CloudNoiseShapeWindSpeedHorizontal = { "CloudNoiseShapeWindSpeedHorizontal", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorWindSettings, CloudNoiseShapeWindSpeedHorizontal), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWindSettings_Statics::NewProp_CloudNoiseShapeWindSpeedHorizontal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWindSettings_Statics::NewProp_CloudNoiseShapeWindSpeedHorizontal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWindSettings_Statics::NewProp_CloudNoiseDetailWindSpeedVertical_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWindSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWindSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorWindSettings_Statics::NewProp_CloudNoiseDetailWindSpeedVertical = { "CloudNoiseDetailWindSpeedVertical", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorWindSettings, CloudNoiseDetailWindSpeedVertical), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWindSettings_Statics::NewProp_CloudNoiseDetailWindSpeedVertical_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWindSettings_Statics::NewProp_CloudNoiseDetailWindSpeedVertical_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWindSettings_Statics::NewProp_PrecipitationWindDirection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWindSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWindSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorWindSettings_Statics::NewProp_PrecipitationWindDirection = { "PrecipitationWindDirection", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorWindSettings, PrecipitationWindDirection), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWindSettings_Statics::NewProp_PrecipitationWindDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWindSettings_Statics::NewProp_PrecipitationWindDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWindSettings_Statics::NewProp_PrecipitationWindSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWindSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWindSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorWindSettings_Statics::NewProp_PrecipitationWindSpeed = { "PrecipitationWindSpeed", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorWindSettings, PrecipitationWindSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWindSettings_Statics::NewProp_PrecipitationWindSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWindSettings_Statics::NewProp_PrecipitationWindSpeed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPPSkyCreatorWindSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorWindSettings_Statics::NewProp_CloudWindDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorWindSettings_Statics::NewProp_CloudWindSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorWindSettings_Statics::NewProp_CloudNoiseShapeWindDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorWindSettings_Statics::NewProp_CloudNoiseShapeWindSpeedHorizontal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorWindSettings_Statics::NewProp_CloudNoiseDetailWindSpeedVertical,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorWindSettings_Statics::NewProp_PrecipitationWindDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorWindSettings_Statics::NewProp_PrecipitationWindSpeed,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPPSkyCreatorWindSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PPSkyCreatorPlugin,
		nullptr,
		&NewStructOps,
		"PPSkyCreatorWindSettings",
		sizeof(FPPSkyCreatorWindSettings),
		alignof(FPPSkyCreatorWindSettings),
		Z_Construct_UScriptStruct_FPPSkyCreatorWindSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWindSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWindSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWindSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPPSkyCreatorWindSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_PPSkyCreatorWindSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PPSkyCreatorWindSettings.InnerSingleton, Z_Construct_UScriptStruct_FPPSkyCreatorWindSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PPSkyCreatorWindSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPSkyCreatorWindSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPSkyCreatorWindSettings_h_Statics::ScriptStructInfo[] = {
		{ FPPSkyCreatorWindSettings::StaticStruct, Z_Construct_UScriptStruct_FPPSkyCreatorWindSettings_Statics::NewStructOps, TEXT("PPSkyCreatorWindSettings"), &Z_Registration_Info_UScriptStruct_PPSkyCreatorWindSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPPSkyCreatorWindSettings), 2959899271U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPSkyCreatorWindSettings_h_1837960977(TEXT("/Script/PPSkyCreatorPlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPSkyCreatorWindSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPSkyCreatorWindSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
