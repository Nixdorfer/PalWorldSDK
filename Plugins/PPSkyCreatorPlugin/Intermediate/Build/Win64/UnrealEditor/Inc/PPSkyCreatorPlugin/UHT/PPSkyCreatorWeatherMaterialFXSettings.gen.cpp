// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PPSkyCreatorPlugin/Public/PPSkyCreatorWeatherMaterialFXSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePPSkyCreatorWeatherMaterialFXSettings() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	PPSKYCREATORPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings();
	UPackage* Z_Construct_UPackage__Script_PPSkyCreatorPlugin();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PPSkyCreatorWeatherMaterialFXSettings;
class UScriptStruct* FPPSkyCreatorWeatherMaterialFXSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PPSkyCreatorWeatherMaterialFXSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PPSkyCreatorWeatherMaterialFXSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings, Z_Construct_UPackage__Script_PPSkyCreatorPlugin(), TEXT("PPSkyCreatorWeatherMaterialFXSettings"));
	}
	return Z_Registration_Info_UScriptStruct_PPSkyCreatorWeatherMaterialFXSettings.OuterSingleton;
}
template<> PPSKYCREATORPLUGIN_API UScriptStruct* StaticStruct<FPPSkyCreatorWeatherMaterialFXSettings>()
{
	return FPPSkyCreatorWeatherMaterialFXSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WetnessAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WetnessAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WetnessColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WetnessColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PuddlesAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PuddlesAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PuddlesColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PuddlesColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RainRipplesAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RainRipplesAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RainRipplesIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RainRipplesIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RainRipplesForceMinRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RainRipplesForceMinRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RainRipplesForceMaxRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RainRipplesForceMaxRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RainRipplesRingsNumber_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RainRipplesRingsNumber;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RainRipplesRingsDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RainRipplesRingsDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RainRipplesDamping_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RainRipplesDamping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WindRipplesIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WindRipplesIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WindRipplesSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WindRipplesSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SnowAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SnowAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SnowColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SnowColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SnowIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SnowIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SnowSparklesThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SnowSparklesThreshold;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherMaterialFXSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPPSkyCreatorWeatherMaterialFXSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_WetnessAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherMaterialFXSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherMaterialFXSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_WetnessAmount = { "WetnessAmount", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorWeatherMaterialFXSettings, WetnessAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_WetnessAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_WetnessAmount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_WetnessColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherMaterialFXSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherMaterialFXSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_WetnessColor = { "WetnessColor", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorWeatherMaterialFXSettings, WetnessColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_WetnessColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_WetnessColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_PuddlesAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherMaterialFXSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherMaterialFXSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_PuddlesAmount = { "PuddlesAmount", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorWeatherMaterialFXSettings, PuddlesAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_PuddlesAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_PuddlesAmount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_PuddlesColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherMaterialFXSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherMaterialFXSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_PuddlesColor = { "PuddlesColor", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorWeatherMaterialFXSettings, PuddlesColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_PuddlesColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_PuddlesColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_RainRipplesAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherMaterialFXSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherMaterialFXSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_RainRipplesAmount = { "RainRipplesAmount", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorWeatherMaterialFXSettings, RainRipplesAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_RainRipplesAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_RainRipplesAmount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_RainRipplesIntensity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherMaterialFXSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherMaterialFXSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_RainRipplesIntensity = { "RainRipplesIntensity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorWeatherMaterialFXSettings, RainRipplesIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_RainRipplesIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_RainRipplesIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_RainRipplesForceMinRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherMaterialFXSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherMaterialFXSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_RainRipplesForceMinRadius = { "RainRipplesForceMinRadius", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorWeatherMaterialFXSettings, RainRipplesForceMinRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_RainRipplesForceMinRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_RainRipplesForceMinRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_RainRipplesForceMaxRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherMaterialFXSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherMaterialFXSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_RainRipplesForceMaxRadius = { "RainRipplesForceMaxRadius", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorWeatherMaterialFXSettings, RainRipplesForceMaxRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_RainRipplesForceMaxRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_RainRipplesForceMaxRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_RainRipplesRingsNumber_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherMaterialFXSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherMaterialFXSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_RainRipplesRingsNumber = { "RainRipplesRingsNumber", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorWeatherMaterialFXSettings, RainRipplesRingsNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_RainRipplesRingsNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_RainRipplesRingsNumber_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_RainRipplesRingsDelay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherMaterialFXSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherMaterialFXSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_RainRipplesRingsDelay = { "RainRipplesRingsDelay", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorWeatherMaterialFXSettings, RainRipplesRingsDelay), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_RainRipplesRingsDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_RainRipplesRingsDelay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_RainRipplesDamping_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherMaterialFXSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherMaterialFXSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_RainRipplesDamping = { "RainRipplesDamping", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorWeatherMaterialFXSettings, RainRipplesDamping), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_RainRipplesDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_RainRipplesDamping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_WindRipplesIntensity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherMaterialFXSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherMaterialFXSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_WindRipplesIntensity = { "WindRipplesIntensity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorWeatherMaterialFXSettings, WindRipplesIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_WindRipplesIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_WindRipplesIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_WindRipplesSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherMaterialFXSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherMaterialFXSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_WindRipplesSpeed = { "WindRipplesSpeed", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorWeatherMaterialFXSettings, WindRipplesSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_WindRipplesSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_WindRipplesSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_SnowAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherMaterialFXSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherMaterialFXSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_SnowAmount = { "SnowAmount", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorWeatherMaterialFXSettings, SnowAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_SnowAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_SnowAmount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_SnowColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherMaterialFXSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherMaterialFXSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_SnowColor = { "SnowColor", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorWeatherMaterialFXSettings, SnowColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_SnowColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_SnowColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_SnowIntensity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherMaterialFXSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherMaterialFXSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_SnowIntensity = { "SnowIntensity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorWeatherMaterialFXSettings, SnowIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_SnowIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_SnowIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_SnowSparklesThreshold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherMaterialFXSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherMaterialFXSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_SnowSparklesThreshold = { "SnowSparklesThreshold", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorWeatherMaterialFXSettings, SnowSparklesThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_SnowSparklesThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_SnowSparklesThreshold_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_WetnessAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_WetnessColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_PuddlesAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_PuddlesColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_RainRipplesAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_RainRipplesIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_RainRipplesForceMinRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_RainRipplesForceMaxRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_RainRipplesRingsNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_RainRipplesRingsDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_RainRipplesDamping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_WindRipplesIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_WindRipplesSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_SnowAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_SnowColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_SnowIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_SnowSparklesThreshold,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PPSkyCreatorPlugin,
		nullptr,
		&NewStructOps,
		"PPSkyCreatorWeatherMaterialFXSettings",
		sizeof(FPPSkyCreatorWeatherMaterialFXSettings),
		alignof(FPPSkyCreatorWeatherMaterialFXSettings),
		Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_PPSkyCreatorWeatherMaterialFXSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PPSkyCreatorWeatherMaterialFXSettings.InnerSingleton, Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PPSkyCreatorWeatherMaterialFXSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPSkyCreatorWeatherMaterialFXSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPSkyCreatorWeatherMaterialFXSettings_h_Statics::ScriptStructInfo[] = {
		{ FPPSkyCreatorWeatherMaterialFXSettings::StaticStruct, Z_Construct_UScriptStruct_FPPSkyCreatorWeatherMaterialFXSettings_Statics::NewStructOps, TEXT("PPSkyCreatorWeatherMaterialFXSettings"), &Z_Registration_Info_UScriptStruct_PPSkyCreatorWeatherMaterialFXSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPPSkyCreatorWeatherMaterialFXSettings), 1068823584U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPSkyCreatorWeatherMaterialFXSettings_h_3717543127(TEXT("/Script/PPSkyCreatorPlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPSkyCreatorWeatherMaterialFXSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPSkyCreatorWeatherMaterialFXSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
