// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PPSkyCreatorPlugin/Public/PPSkyCreatorWeatherFXSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePPSkyCreatorWeatherFXSettings() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	PPSKYCREATORPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings();
	UPackage* Z_Construct_UPackage__Script_PPSkyCreatorPlugin();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PPSkyCreatorWeatherFXSettings;
class UScriptStruct* FPPSkyCreatorWeatherFXSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PPSkyCreatorWeatherFXSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PPSkyCreatorWeatherFXSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings, Z_Construct_UPackage__Script_PPSkyCreatorPlugin(), TEXT("PPSkyCreatorWeatherFXSettings"));
	}
	return Z_Registration_Info_UScriptStruct_PPSkyCreatorWeatherFXSettings.OuterSingleton;
}
template<> PPSKYCREATORPLUGIN_API UScriptStruct* StaticStruct<FPPSkyCreatorWeatherFXSettings>()
{
	return FPPSkyCreatorWeatherFXSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RainAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RainAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RainColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RainColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RainGravity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RainGravity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RainLifetimeMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RainLifetimeMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RainLifetimeMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RainLifetimeMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RainSizeMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RainSizeMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RainSizeMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RainSizeMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RainSplashLifetimeMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RainSplashLifetimeMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RainSplashLifetimeMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RainSplashLifetimeMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RainSplashSizeMin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RainSplashSizeMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RainSplashSizeMax_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RainSplashSizeMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SnowAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SnowAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SnowColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SnowColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SnowGravity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SnowGravity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SnowTurbulence_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SnowTurbulence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SnowLifetimeMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SnowLifetimeMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SnowLifetimeMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SnowLifetimeMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SnowSizeMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SnowSizeMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SnowSizeMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SnowSizeMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnableLightnings_MetaData[];
#endif
		static void NewProp_EnableLightnings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableLightnings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightningSpawnIntervalMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LightningSpawnIntervalMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightningSpawnIntervalMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LightningSpawnIntervalMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightningColorMin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LightningColorMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightningColorMax_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LightningColorMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightningLifetime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LightningLifetime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightningBoltSpawnChance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LightningBoltSpawnChance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightningBoltWidthMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LightningBoltWidthMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightningBoltWidthMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LightningBoltWidthMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightningBoltLengthMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LightningBoltLengthMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightningBoltLengthMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LightningBoltLengthMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightningBoltCurveFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LightningBoltCurveFrequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightningBoltCurveStrengthMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LightningBoltCurveStrengthMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightningBoltCurveStrengthMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LightningBoltCurveStrengthMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightningBoltJitterStrength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LightningBoltJitterStrength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightningBranchSpawnChance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LightningBranchSpawnChance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightningBranchScaleMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LightningBranchScaleMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightningBranchScaleMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LightningBranchScaleMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RainbowAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RainbowAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RainbowColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RainbowColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RainbowRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RainbowRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RainbowThickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RainbowThickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryRainbowColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SecondaryRainbowColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryRainbowRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SecondaryRainbowRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryRainbowThickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SecondaryRainbowThickness;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherFXSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPPSkyCreatorWeatherFXSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_RainAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherFXSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherFXSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_RainAmount = { "RainAmount", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorWeatherFXSettings, RainAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_RainAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_RainAmount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_RainColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherFXSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherFXSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_RainColor = { "RainColor", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorWeatherFXSettings, RainColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_RainColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_RainColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_RainGravity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherFXSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherFXSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_RainGravity = { "RainGravity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorWeatherFXSettings, RainGravity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_RainGravity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_RainGravity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_RainLifetimeMin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherFXSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherFXSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_RainLifetimeMin = { "RainLifetimeMin", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorWeatherFXSettings, RainLifetimeMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_RainLifetimeMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_RainLifetimeMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_RainLifetimeMax_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherFXSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherFXSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_RainLifetimeMax = { "RainLifetimeMax", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorWeatherFXSettings, RainLifetimeMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_RainLifetimeMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_RainLifetimeMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_RainSizeMin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherFXSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherFXSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_RainSizeMin = { "RainSizeMin", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorWeatherFXSettings, RainSizeMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_RainSizeMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_RainSizeMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_RainSizeMax_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherFXSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherFXSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_RainSizeMax = { "RainSizeMax", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorWeatherFXSettings, RainSizeMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_RainSizeMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_RainSizeMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_RainSplashLifetimeMin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherFXSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherFXSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_RainSplashLifetimeMin = { "RainSplashLifetimeMin", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorWeatherFXSettings, RainSplashLifetimeMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_RainSplashLifetimeMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_RainSplashLifetimeMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_RainSplashLifetimeMax_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherFXSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherFXSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_RainSplashLifetimeMax = { "RainSplashLifetimeMax", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorWeatherFXSettings, RainSplashLifetimeMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_RainSplashLifetimeMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_RainSplashLifetimeMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_RainSplashSizeMin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherFXSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherFXSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_RainSplashSizeMin = { "RainSplashSizeMin", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorWeatherFXSettings, RainSplashSizeMin), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_RainSplashSizeMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_RainSplashSizeMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_RainSplashSizeMax_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherFXSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherFXSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_RainSplashSizeMax = { "RainSplashSizeMax", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorWeatherFXSettings, RainSplashSizeMax), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_RainSplashSizeMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_RainSplashSizeMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_SnowAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherFXSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherFXSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_SnowAmount = { "SnowAmount", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorWeatherFXSettings, SnowAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_SnowAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_SnowAmount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_SnowColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherFXSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherFXSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_SnowColor = { "SnowColor", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorWeatherFXSettings, SnowColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_SnowColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_SnowColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_SnowGravity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherFXSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherFXSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_SnowGravity = { "SnowGravity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorWeatherFXSettings, SnowGravity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_SnowGravity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_SnowGravity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_SnowTurbulence_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherFXSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherFXSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_SnowTurbulence = { "SnowTurbulence", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorWeatherFXSettings, SnowTurbulence), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_SnowTurbulence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_SnowTurbulence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_SnowLifetimeMin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherFXSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherFXSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_SnowLifetimeMin = { "SnowLifetimeMin", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorWeatherFXSettings, SnowLifetimeMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_SnowLifetimeMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_SnowLifetimeMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_SnowLifetimeMax_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherFXSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherFXSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_SnowLifetimeMax = { "SnowLifetimeMax", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorWeatherFXSettings, SnowLifetimeMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_SnowLifetimeMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_SnowLifetimeMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_SnowSizeMin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherFXSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherFXSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_SnowSizeMin = { "SnowSizeMin", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorWeatherFXSettings, SnowSizeMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_SnowSizeMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_SnowSizeMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_SnowSizeMax_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherFXSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherFXSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_SnowSizeMax = { "SnowSizeMax", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorWeatherFXSettings, SnowSizeMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_SnowSizeMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_SnowSizeMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_EnableLightnings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherFXSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherFXSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_EnableLightnings_SetBit(void* Obj)
	{
		((FPPSkyCreatorWeatherFXSettings*)Obj)->EnableLightnings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_EnableLightnings = { "EnableLightnings", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPPSkyCreatorWeatherFXSettings), &Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_EnableLightnings_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_EnableLightnings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_EnableLightnings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningSpawnIntervalMin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherFXSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherFXSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningSpawnIntervalMin = { "LightningSpawnIntervalMin", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorWeatherFXSettings, LightningSpawnIntervalMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningSpawnIntervalMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningSpawnIntervalMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningSpawnIntervalMax_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherFXSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherFXSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningSpawnIntervalMax = { "LightningSpawnIntervalMax", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorWeatherFXSettings, LightningSpawnIntervalMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningSpawnIntervalMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningSpawnIntervalMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningColorMin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherFXSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherFXSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningColorMin = { "LightningColorMin", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorWeatherFXSettings, LightningColorMin), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningColorMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningColorMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningColorMax_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherFXSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherFXSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningColorMax = { "LightningColorMax", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorWeatherFXSettings, LightningColorMax), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningColorMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningColorMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningLifetime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherFXSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherFXSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningLifetime = { "LightningLifetime", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorWeatherFXSettings, LightningLifetime), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningLifetime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningLifetime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltSpawnChance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherFXSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherFXSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltSpawnChance = { "LightningBoltSpawnChance", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorWeatherFXSettings, LightningBoltSpawnChance), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltSpawnChance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltSpawnChance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltWidthMin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherFXSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherFXSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltWidthMin = { "LightningBoltWidthMin", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorWeatherFXSettings, LightningBoltWidthMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltWidthMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltWidthMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltWidthMax_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherFXSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherFXSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltWidthMax = { "LightningBoltWidthMax", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorWeatherFXSettings, LightningBoltWidthMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltWidthMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltWidthMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltLengthMin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherFXSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherFXSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltLengthMin = { "LightningBoltLengthMin", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorWeatherFXSettings, LightningBoltLengthMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltLengthMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltLengthMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltLengthMax_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherFXSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherFXSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltLengthMax = { "LightningBoltLengthMax", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorWeatherFXSettings, LightningBoltLengthMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltLengthMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltLengthMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltCurveFrequency_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherFXSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherFXSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltCurveFrequency = { "LightningBoltCurveFrequency", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorWeatherFXSettings, LightningBoltCurveFrequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltCurveFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltCurveFrequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltCurveStrengthMin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherFXSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherFXSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltCurveStrengthMin = { "LightningBoltCurveStrengthMin", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorWeatherFXSettings, LightningBoltCurveStrengthMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltCurveStrengthMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltCurveStrengthMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltCurveStrengthMax_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherFXSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherFXSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltCurveStrengthMax = { "LightningBoltCurveStrengthMax", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorWeatherFXSettings, LightningBoltCurveStrengthMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltCurveStrengthMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltCurveStrengthMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltJitterStrength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherFXSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherFXSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltJitterStrength = { "LightningBoltJitterStrength", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorWeatherFXSettings, LightningBoltJitterStrength), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltJitterStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltJitterStrength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBranchSpawnChance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherFXSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherFXSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBranchSpawnChance = { "LightningBranchSpawnChance", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorWeatherFXSettings, LightningBranchSpawnChance), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBranchSpawnChance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBranchSpawnChance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBranchScaleMin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherFXSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherFXSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBranchScaleMin = { "LightningBranchScaleMin", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorWeatherFXSettings, LightningBranchScaleMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBranchScaleMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBranchScaleMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBranchScaleMax_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherFXSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherFXSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBranchScaleMax = { "LightningBranchScaleMax", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorWeatherFXSettings, LightningBranchScaleMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBranchScaleMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBranchScaleMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_RainbowAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherFXSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherFXSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_RainbowAmount = { "RainbowAmount", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorWeatherFXSettings, RainbowAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_RainbowAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_RainbowAmount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_RainbowColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherFXSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherFXSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_RainbowColor = { "RainbowColor", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorWeatherFXSettings, RainbowColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_RainbowColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_RainbowColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_RainbowRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherFXSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherFXSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_RainbowRadius = { "RainbowRadius", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorWeatherFXSettings, RainbowRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_RainbowRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_RainbowRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_RainbowThickness_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherFXSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherFXSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_RainbowThickness = { "RainbowThickness", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorWeatherFXSettings, RainbowThickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_RainbowThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_RainbowThickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_SecondaryRainbowColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherFXSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherFXSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_SecondaryRainbowColor = { "SecondaryRainbowColor", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorWeatherFXSettings, SecondaryRainbowColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_SecondaryRainbowColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_SecondaryRainbowColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_SecondaryRainbowRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherFXSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherFXSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_SecondaryRainbowRadius = { "SecondaryRainbowRadius", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorWeatherFXSettings, SecondaryRainbowRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_SecondaryRainbowRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_SecondaryRainbowRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_SecondaryRainbowThickness_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorWeatherFXSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorWeatherFXSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_SecondaryRainbowThickness = { "SecondaryRainbowThickness", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorWeatherFXSettings, SecondaryRainbowThickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_SecondaryRainbowThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_SecondaryRainbowThickness_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_RainAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_RainColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_RainGravity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_RainLifetimeMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_RainLifetimeMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_RainSizeMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_RainSizeMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_RainSplashLifetimeMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_RainSplashLifetimeMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_RainSplashSizeMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_RainSplashSizeMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_SnowAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_SnowColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_SnowGravity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_SnowTurbulence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_SnowLifetimeMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_SnowLifetimeMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_SnowSizeMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_SnowSizeMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_EnableLightnings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningSpawnIntervalMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningSpawnIntervalMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningColorMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningColorMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningLifetime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltSpawnChance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltWidthMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltWidthMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltLengthMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltLengthMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltCurveFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltCurveStrengthMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltCurveStrengthMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBoltJitterStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBranchSpawnChance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBranchScaleMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_LightningBranchScaleMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_RainbowAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_RainbowColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_RainbowRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_RainbowThickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_SecondaryRainbowColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_SecondaryRainbowRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewProp_SecondaryRainbowThickness,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PPSkyCreatorPlugin,
		nullptr,
		&NewStructOps,
		"PPSkyCreatorWeatherFXSettings",
		sizeof(FPPSkyCreatorWeatherFXSettings),
		alignof(FPPSkyCreatorWeatherFXSettings),
		Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_PPSkyCreatorWeatherFXSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PPSkyCreatorWeatherFXSettings.InnerSingleton, Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PPSkyCreatorWeatherFXSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPSkyCreatorWeatherFXSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPSkyCreatorWeatherFXSettings_h_Statics::ScriptStructInfo[] = {
		{ FPPSkyCreatorWeatherFXSettings::StaticStruct, Z_Construct_UScriptStruct_FPPSkyCreatorWeatherFXSettings_Statics::NewStructOps, TEXT("PPSkyCreatorWeatherFXSettings"), &Z_Registration_Info_UScriptStruct_PPSkyCreatorWeatherFXSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPPSkyCreatorWeatherFXSettings), 1675121933U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPSkyCreatorWeatherFXSettings_h_2602073645(TEXT("/Script/PPSkyCreatorPlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPSkyCreatorWeatherFXSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPSkyCreatorWeatherFXSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
