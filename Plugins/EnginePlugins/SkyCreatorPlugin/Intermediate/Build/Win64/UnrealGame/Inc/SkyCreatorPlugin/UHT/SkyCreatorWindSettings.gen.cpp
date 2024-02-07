// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SkyCreatorPlugin/Public/SkyCreatorWindSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkyCreatorWindSettings() {}
// Cross Module References
	SKYCREATORPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSkyCreatorWindSettings();
	UPackage* Z_Construct_UPackage__Script_SkyCreatorPlugin();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SkyCreatorWindSettings;
class UScriptStruct* FSkyCreatorWindSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SkyCreatorWindSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SkyCreatorWindSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkyCreatorWindSettings, Z_Construct_UPackage__Script_SkyCreatorPlugin(), TEXT("SkyCreatorWindSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SkyCreatorWindSettings.OuterSingleton;
}
template<> SKYCREATORPLUGIN_API UScriptStruct* StaticStruct<FSkyCreatorWindSettings>()
{
	return FSkyCreatorWindSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SkyCreatorWindSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkyCreatorWindSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::NewProp_CloudWindDirection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorWindSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorWindSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::NewProp_CloudWindDirection = { "CloudWindDirection", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorWindSettings, CloudWindDirection), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::NewProp_CloudWindDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::NewProp_CloudWindDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::NewProp_CloudWindSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorWindSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorWindSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::NewProp_CloudWindSpeed = { "CloudWindSpeed", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorWindSettings, CloudWindSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::NewProp_CloudWindSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::NewProp_CloudWindSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::NewProp_CloudNoiseShapeWindDirection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorWindSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorWindSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::NewProp_CloudNoiseShapeWindDirection = { "CloudNoiseShapeWindDirection", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorWindSettings, CloudNoiseShapeWindDirection), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::NewProp_CloudNoiseShapeWindDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::NewProp_CloudNoiseShapeWindDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::NewProp_CloudNoiseShapeWindSpeedHorizontal_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorWindSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorWindSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::NewProp_CloudNoiseShapeWindSpeedHorizontal = { "CloudNoiseShapeWindSpeedHorizontal", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorWindSettings, CloudNoiseShapeWindSpeedHorizontal), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::NewProp_CloudNoiseShapeWindSpeedHorizontal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::NewProp_CloudNoiseShapeWindSpeedHorizontal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::NewProp_CloudNoiseDetailWindSpeedVertical_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorWindSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorWindSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::NewProp_CloudNoiseDetailWindSpeedVertical = { "CloudNoiseDetailWindSpeedVertical", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorWindSettings, CloudNoiseDetailWindSpeedVertical), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::NewProp_CloudNoiseDetailWindSpeedVertical_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::NewProp_CloudNoiseDetailWindSpeedVertical_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::NewProp_PrecipitationWindDirection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorWindSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorWindSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::NewProp_PrecipitationWindDirection = { "PrecipitationWindDirection", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorWindSettings, PrecipitationWindDirection), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::NewProp_PrecipitationWindDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::NewProp_PrecipitationWindDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::NewProp_PrecipitationWindSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorWindSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorWindSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::NewProp_PrecipitationWindSpeed = { "PrecipitationWindSpeed", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorWindSettings, PrecipitationWindSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::NewProp_PrecipitationWindSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::NewProp_PrecipitationWindSpeed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::NewProp_CloudWindDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::NewProp_CloudWindSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::NewProp_CloudNoiseShapeWindDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::NewProp_CloudNoiseShapeWindSpeedHorizontal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::NewProp_CloudNoiseDetailWindSpeedVertical,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::NewProp_PrecipitationWindDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::NewProp_PrecipitationWindSpeed,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SkyCreatorPlugin,
		nullptr,
		&NewStructOps,
		"SkyCreatorWindSettings",
		sizeof(FSkyCreatorWindSettings),
		alignof(FSkyCreatorWindSettings),
		Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSkyCreatorWindSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SkyCreatorWindSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SkyCreatorWindSettings.InnerSingleton, Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SkyCreatorWindSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorWindSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorWindSettings_h_Statics::ScriptStructInfo[] = {
		{ FSkyCreatorWindSettings::StaticStruct, Z_Construct_UScriptStruct_FSkyCreatorWindSettings_Statics::NewStructOps, TEXT("SkyCreatorWindSettings"), &Z_Registration_Info_UScriptStruct_SkyCreatorWindSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkyCreatorWindSettings), 1706621100U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorWindSettings_h_1924511966(TEXT("/Script/SkyCreatorPlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorWindSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorWindSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
