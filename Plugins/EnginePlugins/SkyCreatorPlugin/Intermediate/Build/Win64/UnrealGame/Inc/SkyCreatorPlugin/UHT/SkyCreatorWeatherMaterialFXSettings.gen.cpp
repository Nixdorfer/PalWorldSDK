// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SkyCreatorPlugin/Public/SkyCreatorWeatherMaterialFXSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkyCreatorWeatherMaterialFXSettings() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	SKYCREATORPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings();
	UPackage* Z_Construct_UPackage__Script_SkyCreatorPlugin();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SkyCreatorWeatherMaterialFXSettings;
class UScriptStruct* FSkyCreatorWeatherMaterialFXSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SkyCreatorWeatherMaterialFXSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SkyCreatorWeatherMaterialFXSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings, Z_Construct_UPackage__Script_SkyCreatorPlugin(), TEXT("SkyCreatorWeatherMaterialFXSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SkyCreatorWeatherMaterialFXSettings.OuterSingleton;
}
template<> SKYCREATORPLUGIN_API UScriptStruct* StaticStruct<FSkyCreatorWeatherMaterialFXSettings>()
{
	return FSkyCreatorWeatherMaterialFXSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherMaterialFXSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkyCreatorWeatherMaterialFXSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_WetnessAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorWeatherMaterialFXSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherMaterialFXSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_WetnessAmount = { "WetnessAmount", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorWeatherMaterialFXSettings, WetnessAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_WetnessAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_WetnessAmount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_WetnessColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorWeatherMaterialFXSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherMaterialFXSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_WetnessColor = { "WetnessColor", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorWeatherMaterialFXSettings, WetnessColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_WetnessColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_WetnessColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_PuddlesAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorWeatherMaterialFXSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherMaterialFXSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_PuddlesAmount = { "PuddlesAmount", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorWeatherMaterialFXSettings, PuddlesAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_PuddlesAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_PuddlesAmount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_PuddlesColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorWeatherMaterialFXSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherMaterialFXSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_PuddlesColor = { "PuddlesColor", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorWeatherMaterialFXSettings, PuddlesColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_PuddlesColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_PuddlesColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_RainRipplesAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorWeatherMaterialFXSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherMaterialFXSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_RainRipplesAmount = { "RainRipplesAmount", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorWeatherMaterialFXSettings, RainRipplesAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_RainRipplesAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_RainRipplesAmount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_RainRipplesIntensity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorWeatherMaterialFXSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherMaterialFXSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_RainRipplesIntensity = { "RainRipplesIntensity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorWeatherMaterialFXSettings, RainRipplesIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_RainRipplesIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_RainRipplesIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_RainRipplesForceMinRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorWeatherMaterialFXSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherMaterialFXSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_RainRipplesForceMinRadius = { "RainRipplesForceMinRadius", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorWeatherMaterialFXSettings, RainRipplesForceMinRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_RainRipplesForceMinRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_RainRipplesForceMinRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_RainRipplesForceMaxRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorWeatherMaterialFXSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherMaterialFXSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_RainRipplesForceMaxRadius = { "RainRipplesForceMaxRadius", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorWeatherMaterialFXSettings, RainRipplesForceMaxRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_RainRipplesForceMaxRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_RainRipplesForceMaxRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_RainRipplesRingsNumber_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorWeatherMaterialFXSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherMaterialFXSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_RainRipplesRingsNumber = { "RainRipplesRingsNumber", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorWeatherMaterialFXSettings, RainRipplesRingsNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_RainRipplesRingsNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_RainRipplesRingsNumber_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_RainRipplesRingsDelay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorWeatherMaterialFXSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherMaterialFXSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_RainRipplesRingsDelay = { "RainRipplesRingsDelay", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorWeatherMaterialFXSettings, RainRipplesRingsDelay), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_RainRipplesRingsDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_RainRipplesRingsDelay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_RainRipplesDamping_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorWeatherMaterialFXSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherMaterialFXSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_RainRipplesDamping = { "RainRipplesDamping", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorWeatherMaterialFXSettings, RainRipplesDamping), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_RainRipplesDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_RainRipplesDamping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_WindRipplesIntensity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorWeatherMaterialFXSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherMaterialFXSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_WindRipplesIntensity = { "WindRipplesIntensity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorWeatherMaterialFXSettings, WindRipplesIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_WindRipplesIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_WindRipplesIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_WindRipplesSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorWeatherMaterialFXSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherMaterialFXSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_WindRipplesSpeed = { "WindRipplesSpeed", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorWeatherMaterialFXSettings, WindRipplesSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_WindRipplesSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_WindRipplesSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_SnowAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorWeatherMaterialFXSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherMaterialFXSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_SnowAmount = { "SnowAmount", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorWeatherMaterialFXSettings, SnowAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_SnowAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_SnowAmount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_SnowColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorWeatherMaterialFXSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherMaterialFXSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_SnowColor = { "SnowColor", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorWeatherMaterialFXSettings, SnowColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_SnowColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_SnowColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_SnowIntensity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorWeatherMaterialFXSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherMaterialFXSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_SnowIntensity = { "SnowIntensity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorWeatherMaterialFXSettings, SnowIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_SnowIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_SnowIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_SnowSparklesThreshold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorWeatherMaterialFXSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorWeatherMaterialFXSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_SnowSparklesThreshold = { "SnowSparklesThreshold", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorWeatherMaterialFXSettings, SnowSparklesThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_SnowSparklesThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_SnowSparklesThreshold_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_WetnessAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_WetnessColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_PuddlesAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_PuddlesColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_RainRipplesAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_RainRipplesIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_RainRipplesForceMinRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_RainRipplesForceMaxRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_RainRipplesRingsNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_RainRipplesRingsDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_RainRipplesDamping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_WindRipplesIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_WindRipplesSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_SnowAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_SnowColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_SnowIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewProp_SnowSparklesThreshold,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SkyCreatorPlugin,
		nullptr,
		&NewStructOps,
		"SkyCreatorWeatherMaterialFXSettings",
		sizeof(FSkyCreatorWeatherMaterialFXSettings),
		alignof(FSkyCreatorWeatherMaterialFXSettings),
		Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SkyCreatorWeatherMaterialFXSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SkyCreatorWeatherMaterialFXSettings.InnerSingleton, Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SkyCreatorWeatherMaterialFXSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorWeatherMaterialFXSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorWeatherMaterialFXSettings_h_Statics::ScriptStructInfo[] = {
		{ FSkyCreatorWeatherMaterialFXSettings::StaticStruct, Z_Construct_UScriptStruct_FSkyCreatorWeatherMaterialFXSettings_Statics::NewStructOps, TEXT("SkyCreatorWeatherMaterialFXSettings"), &Z_Registration_Info_UScriptStruct_SkyCreatorWeatherMaterialFXSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkyCreatorWeatherMaterialFXSettings), 998852082U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorWeatherMaterialFXSettings_h_1796555663(TEXT("/Script/SkyCreatorPlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorWeatherMaterialFXSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorWeatherMaterialFXSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
