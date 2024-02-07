// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PPSkyCreatorPlugin/Public/PPSkyCreatorVolumetricCloudSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePPSkyCreatorVolumetricCloudSettings() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	PPSKYCREATORPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings();
	UPackage* Z_Construct_UPackage__Script_PPSkyCreatorPlugin();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PPSkyCreatorVolumetricCloudSettings;
class UScriptStruct* FPPSkyCreatorVolumetricCloudSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PPSkyCreatorVolumetricCloudSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PPSkyCreatorVolumetricCloudSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings, Z_Construct_UPackage__Script_PPSkyCreatorPlugin(), TEXT("PPSkyCreatorVolumetricCloudSettings"));
	}
	return Z_Registration_Info_UScriptStruct_PPSkyCreatorVolumetricCloudSettings.OuterSingleton;
}
template<> PPSKYCREATORPLUGIN_API UScriptStruct* StaticStruct<FPPSkyCreatorVolumetricCloudSettings>()
{
	return FPPSkyCreatorVolumetricCloudSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StratusCoverage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StratusCoverage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StratusCoverageVariation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StratusCoverageVariation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StratusHeightVariation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StratusHeightVariation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StratocumulusCoverage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StratocumulusCoverage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StratocumulusCoverageVariation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StratocumulusCoverageVariation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StratocumulusHeightVariation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StratocumulusHeightVariation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CumulusCoverage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CumulusCoverage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CumulusCoverageVariation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CumulusCoverageVariation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CumulusHeightVariation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CumulusHeightVariation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CumulonimbusCoverage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CumulonimbusCoverage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CumulonimbusAnvil_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CumulonimbusAnvil;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CumulonimbusHeightVariation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CumulonimbusHeightVariation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DensityBottom_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DensityBottom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DensityMiddle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DensityMiddle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DensityTop_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DensityTop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_albedo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_albedo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundAlbedo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroundAlbedo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BeersPowderIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BeersPowderIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BeersPowderDepth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BeersPowderDepth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BottomOcclusion_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BottomOcclusion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BottomOcclusionHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BottomOcclusionHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NightEmissive_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NightEmissive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhaseG_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PhaseG;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhaseG2_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PhaseG2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhaseBlend_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PhaseBlend;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MultiScatteringContribution_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MultiScatteringContribution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MultiScatteringOcclusion_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MultiScatteringOcclusion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MultiScatteringEccentricity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MultiScatteringEccentricity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseShapeIntensityA_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseShapeIntensityA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseShapeIntensityB_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseShapeIntensityB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseShapeIntensityC_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseShapeIntensityC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseShapeIntensityD_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseShapeIntensityD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurbulenceIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TurbulenceIntensity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorVolumetricCloudSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPPSkyCreatorVolumetricCloudSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_StratusCoverage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorVolumetricCloudSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorVolumetricCloudSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_StratusCoverage = { "StratusCoverage", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorVolumetricCloudSettings, StratusCoverage), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_StratusCoverage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_StratusCoverage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_StratusCoverageVariation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorVolumetricCloudSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorVolumetricCloudSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_StratusCoverageVariation = { "StratusCoverageVariation", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorVolumetricCloudSettings, StratusCoverageVariation), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_StratusCoverageVariation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_StratusCoverageVariation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_StratusHeightVariation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorVolumetricCloudSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorVolumetricCloudSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_StratusHeightVariation = { "StratusHeightVariation", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorVolumetricCloudSettings, StratusHeightVariation), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_StratusHeightVariation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_StratusHeightVariation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_StratocumulusCoverage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorVolumetricCloudSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorVolumetricCloudSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_StratocumulusCoverage = { "StratocumulusCoverage", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorVolumetricCloudSettings, StratocumulusCoverage), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_StratocumulusCoverage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_StratocumulusCoverage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_StratocumulusCoverageVariation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorVolumetricCloudSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorVolumetricCloudSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_StratocumulusCoverageVariation = { "StratocumulusCoverageVariation", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorVolumetricCloudSettings, StratocumulusCoverageVariation), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_StratocumulusCoverageVariation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_StratocumulusCoverageVariation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_StratocumulusHeightVariation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorVolumetricCloudSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorVolumetricCloudSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_StratocumulusHeightVariation = { "StratocumulusHeightVariation", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorVolumetricCloudSettings, StratocumulusHeightVariation), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_StratocumulusHeightVariation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_StratocumulusHeightVariation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_CumulusCoverage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorVolumetricCloudSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorVolumetricCloudSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_CumulusCoverage = { "CumulusCoverage", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorVolumetricCloudSettings, CumulusCoverage), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_CumulusCoverage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_CumulusCoverage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_CumulusCoverageVariation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorVolumetricCloudSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorVolumetricCloudSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_CumulusCoverageVariation = { "CumulusCoverageVariation", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorVolumetricCloudSettings, CumulusCoverageVariation), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_CumulusCoverageVariation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_CumulusCoverageVariation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_CumulusHeightVariation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorVolumetricCloudSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorVolumetricCloudSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_CumulusHeightVariation = { "CumulusHeightVariation", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorVolumetricCloudSettings, CumulusHeightVariation), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_CumulusHeightVariation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_CumulusHeightVariation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_CumulonimbusCoverage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorVolumetricCloudSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorVolumetricCloudSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_CumulonimbusCoverage = { "CumulonimbusCoverage", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorVolumetricCloudSettings, CumulonimbusCoverage), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_CumulonimbusCoverage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_CumulonimbusCoverage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_CumulonimbusAnvil_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorVolumetricCloudSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorVolumetricCloudSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_CumulonimbusAnvil = { "CumulonimbusAnvil", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorVolumetricCloudSettings, CumulonimbusAnvil), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_CumulonimbusAnvil_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_CumulonimbusAnvil_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_CumulonimbusHeightVariation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorVolumetricCloudSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorVolumetricCloudSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_CumulonimbusHeightVariation = { "CumulonimbusHeightVariation", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorVolumetricCloudSettings, CumulonimbusHeightVariation), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_CumulonimbusHeightVariation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_CumulonimbusHeightVariation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_DensityBottom_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorVolumetricCloudSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorVolumetricCloudSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_DensityBottom = { "DensityBottom", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorVolumetricCloudSettings, DensityBottom), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_DensityBottom_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_DensityBottom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_DensityMiddle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorVolumetricCloudSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorVolumetricCloudSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_DensityMiddle = { "DensityMiddle", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorVolumetricCloudSettings, DensityMiddle), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_DensityMiddle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_DensityMiddle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_DensityTop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorVolumetricCloudSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorVolumetricCloudSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_DensityTop = { "DensityTop", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorVolumetricCloudSettings, DensityTop), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_DensityTop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_DensityTop_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_albedo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorVolumetricCloudSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorVolumetricCloudSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_albedo = { "albedo", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorVolumetricCloudSettings, albedo), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_albedo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_albedo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_GroundAlbedo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorVolumetricCloudSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorVolumetricCloudSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_GroundAlbedo = { "GroundAlbedo", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorVolumetricCloudSettings, GroundAlbedo), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_GroundAlbedo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_GroundAlbedo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_BeersPowderIntensity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorVolumetricCloudSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorVolumetricCloudSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_BeersPowderIntensity = { "BeersPowderIntensity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorVolumetricCloudSettings, BeersPowderIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_BeersPowderIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_BeersPowderIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_BeersPowderDepth_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorVolumetricCloudSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorVolumetricCloudSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_BeersPowderDepth = { "BeersPowderDepth", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorVolumetricCloudSettings, BeersPowderDepth), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_BeersPowderDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_BeersPowderDepth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_BottomOcclusion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorVolumetricCloudSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorVolumetricCloudSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_BottomOcclusion = { "BottomOcclusion", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorVolumetricCloudSettings, BottomOcclusion), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_BottomOcclusion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_BottomOcclusion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_BottomOcclusionHeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorVolumetricCloudSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorVolumetricCloudSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_BottomOcclusionHeight = { "BottomOcclusionHeight", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorVolumetricCloudSettings, BottomOcclusionHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_BottomOcclusionHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_BottomOcclusionHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_NightEmissive_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorVolumetricCloudSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorVolumetricCloudSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_NightEmissive = { "NightEmissive", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorVolumetricCloudSettings, NightEmissive), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_NightEmissive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_NightEmissive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_PhaseG_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorVolumetricCloudSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorVolumetricCloudSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_PhaseG = { "PhaseG", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorVolumetricCloudSettings, PhaseG), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_PhaseG_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_PhaseG_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_PhaseG2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorVolumetricCloudSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorVolumetricCloudSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_PhaseG2 = { "PhaseG2", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorVolumetricCloudSettings, PhaseG2), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_PhaseG2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_PhaseG2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_PhaseBlend_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorVolumetricCloudSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorVolumetricCloudSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_PhaseBlend = { "PhaseBlend", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorVolumetricCloudSettings, PhaseBlend), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_PhaseBlend_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_PhaseBlend_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_MultiScatteringContribution_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorVolumetricCloudSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorVolumetricCloudSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_MultiScatteringContribution = { "MultiScatteringContribution", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorVolumetricCloudSettings, MultiScatteringContribution), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_MultiScatteringContribution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_MultiScatteringContribution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_MultiScatteringOcclusion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorVolumetricCloudSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorVolumetricCloudSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_MultiScatteringOcclusion = { "MultiScatteringOcclusion", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorVolumetricCloudSettings, MultiScatteringOcclusion), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_MultiScatteringOcclusion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_MultiScatteringOcclusion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_MultiScatteringEccentricity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorVolumetricCloudSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorVolumetricCloudSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_MultiScatteringEccentricity = { "MultiScatteringEccentricity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorVolumetricCloudSettings, MultiScatteringEccentricity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_MultiScatteringEccentricity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_MultiScatteringEccentricity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_NoiseShapeIntensityA_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorVolumetricCloudSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorVolumetricCloudSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_NoiseShapeIntensityA = { "NoiseShapeIntensityA", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorVolumetricCloudSettings, NoiseShapeIntensityA), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_NoiseShapeIntensityA_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_NoiseShapeIntensityA_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_NoiseShapeIntensityB_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorVolumetricCloudSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorVolumetricCloudSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_NoiseShapeIntensityB = { "NoiseShapeIntensityB", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorVolumetricCloudSettings, NoiseShapeIntensityB), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_NoiseShapeIntensityB_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_NoiseShapeIntensityB_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_NoiseShapeIntensityC_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorVolumetricCloudSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorVolumetricCloudSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_NoiseShapeIntensityC = { "NoiseShapeIntensityC", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorVolumetricCloudSettings, NoiseShapeIntensityC), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_NoiseShapeIntensityC_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_NoiseShapeIntensityC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_NoiseShapeIntensityD_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorVolumetricCloudSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorVolumetricCloudSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_NoiseShapeIntensityD = { "NoiseShapeIntensityD", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorVolumetricCloudSettings, NoiseShapeIntensityD), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_NoiseShapeIntensityD_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_NoiseShapeIntensityD_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_TurbulenceIntensity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorVolumetricCloudSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorVolumetricCloudSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_TurbulenceIntensity = { "TurbulenceIntensity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorVolumetricCloudSettings, TurbulenceIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_TurbulenceIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_TurbulenceIntensity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_StratusCoverage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_StratusCoverageVariation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_StratusHeightVariation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_StratocumulusCoverage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_StratocumulusCoverageVariation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_StratocumulusHeightVariation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_CumulusCoverage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_CumulusCoverageVariation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_CumulusHeightVariation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_CumulonimbusCoverage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_CumulonimbusAnvil,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_CumulonimbusHeightVariation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_DensityBottom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_DensityMiddle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_DensityTop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_albedo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_GroundAlbedo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_BeersPowderIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_BeersPowderDepth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_BottomOcclusion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_BottomOcclusionHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_NightEmissive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_PhaseG,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_PhaseG2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_PhaseBlend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_MultiScatteringContribution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_MultiScatteringOcclusion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_MultiScatteringEccentricity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_NoiseShapeIntensityA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_NoiseShapeIntensityB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_NoiseShapeIntensityC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_NoiseShapeIntensityD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewProp_TurbulenceIntensity,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PPSkyCreatorPlugin,
		nullptr,
		&NewStructOps,
		"PPSkyCreatorVolumetricCloudSettings",
		sizeof(FPPSkyCreatorVolumetricCloudSettings),
		alignof(FPPSkyCreatorVolumetricCloudSettings),
		Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_PPSkyCreatorVolumetricCloudSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PPSkyCreatorVolumetricCloudSettings.InnerSingleton, Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PPSkyCreatorVolumetricCloudSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPSkyCreatorVolumetricCloudSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPSkyCreatorVolumetricCloudSettings_h_Statics::ScriptStructInfo[] = {
		{ FPPSkyCreatorVolumetricCloudSettings::StaticStruct, Z_Construct_UScriptStruct_FPPSkyCreatorVolumetricCloudSettings_Statics::NewStructOps, TEXT("PPSkyCreatorVolumetricCloudSettings"), &Z_Registration_Info_UScriptStruct_PPSkyCreatorVolumetricCloudSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPPSkyCreatorVolumetricCloudSettings), 392542U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPSkyCreatorVolumetricCloudSettings_h_39003267(TEXT("/Script/PPSkyCreatorPlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPSkyCreatorVolumetricCloudSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPSkyCreatorVolumetricCloudSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
