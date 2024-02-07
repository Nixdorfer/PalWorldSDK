// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SkyCreatorPlugin/Public/SkyCreatorSkyAtmosphereSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkyCreatorSkyAtmosphereSettings() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	SKYCREATORPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings();
	UPackage* Z_Construct_UPackage__Script_SkyCreatorPlugin();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SkyCreatorSkyAtmosphereSettings;
class UScriptStruct* FSkyCreatorSkyAtmosphereSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SkyCreatorSkyAtmosphereSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SkyCreatorSkyAtmosphereSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings, Z_Construct_UPackage__Script_SkyCreatorPlugin(), TEXT("SkyCreatorSkyAtmosphereSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SkyCreatorSkyAtmosphereSettings.OuterSingleton;
}
template<> SKYCREATORPLUGIN_API UScriptStruct* StaticStruct<FSkyCreatorSkyAtmosphereSettings>()
{
	return FSkyCreatorSkyAtmosphereSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RayleighScatteringScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RayleighScatteringScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RayleighScattering_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RayleighScattering;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RayleighExponentialDistribution_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RayleighExponentialDistribution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MieScatteringScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MieScatteringScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MieScattering_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MieScattering;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MieAbsorptionScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MieAbsorptionScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MieAbsorption_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MieAbsorption;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MieAnisotropy_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MieAnisotropy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MieExponentialDistribution_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MieExponentialDistribution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbsorptionScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AbsorptionScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Absorption_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Absorption;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkyLuminanceFactor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SkyLuminanceFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundAlbedo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroundAlbedo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeightFogContribution_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HeightFogContribution;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SkyCreatorSkyAtmosphereSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkyCreatorSkyAtmosphereSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_RayleighScatteringScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorSkyAtmosphereSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorSkyAtmosphereSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_RayleighScatteringScale = { "RayleighScatteringScale", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorSkyAtmosphereSettings, RayleighScatteringScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_RayleighScatteringScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_RayleighScatteringScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_RayleighScattering_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorSkyAtmosphereSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorSkyAtmosphereSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_RayleighScattering = { "RayleighScattering", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorSkyAtmosphereSettings, RayleighScattering), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_RayleighScattering_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_RayleighScattering_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_RayleighExponentialDistribution_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorSkyAtmosphereSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorSkyAtmosphereSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_RayleighExponentialDistribution = { "RayleighExponentialDistribution", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorSkyAtmosphereSettings, RayleighExponentialDistribution), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_RayleighExponentialDistribution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_RayleighExponentialDistribution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_MieScatteringScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorSkyAtmosphereSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorSkyAtmosphereSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_MieScatteringScale = { "MieScatteringScale", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorSkyAtmosphereSettings, MieScatteringScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_MieScatteringScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_MieScatteringScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_MieScattering_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorSkyAtmosphereSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorSkyAtmosphereSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_MieScattering = { "MieScattering", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorSkyAtmosphereSettings, MieScattering), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_MieScattering_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_MieScattering_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_MieAbsorptionScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorSkyAtmosphereSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorSkyAtmosphereSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_MieAbsorptionScale = { "MieAbsorptionScale", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorSkyAtmosphereSettings, MieAbsorptionScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_MieAbsorptionScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_MieAbsorptionScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_MieAbsorption_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorSkyAtmosphereSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorSkyAtmosphereSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_MieAbsorption = { "MieAbsorption", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorSkyAtmosphereSettings, MieAbsorption), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_MieAbsorption_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_MieAbsorption_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_MieAnisotropy_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorSkyAtmosphereSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorSkyAtmosphereSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_MieAnisotropy = { "MieAnisotropy", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorSkyAtmosphereSettings, MieAnisotropy), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_MieAnisotropy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_MieAnisotropy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_MieExponentialDistribution_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorSkyAtmosphereSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorSkyAtmosphereSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_MieExponentialDistribution = { "MieExponentialDistribution", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorSkyAtmosphereSettings, MieExponentialDistribution), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_MieExponentialDistribution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_MieExponentialDistribution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_AbsorptionScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorSkyAtmosphereSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorSkyAtmosphereSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_AbsorptionScale = { "AbsorptionScale", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorSkyAtmosphereSettings, AbsorptionScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_AbsorptionScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_AbsorptionScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_Absorption_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorSkyAtmosphereSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorSkyAtmosphereSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_Absorption = { "Absorption", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorSkyAtmosphereSettings, Absorption), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_Absorption_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_Absorption_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_SkyLuminanceFactor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorSkyAtmosphereSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorSkyAtmosphereSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_SkyLuminanceFactor = { "SkyLuminanceFactor", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorSkyAtmosphereSettings, SkyLuminanceFactor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_SkyLuminanceFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_SkyLuminanceFactor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_GroundAlbedo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorSkyAtmosphereSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorSkyAtmosphereSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_GroundAlbedo = { "GroundAlbedo", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorSkyAtmosphereSettings, GroundAlbedo), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_GroundAlbedo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_GroundAlbedo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_HeightFogContribution_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorSkyAtmosphereSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorSkyAtmosphereSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_HeightFogContribution = { "HeightFogContribution", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorSkyAtmosphereSettings, HeightFogContribution), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_HeightFogContribution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_HeightFogContribution_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_RayleighScatteringScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_RayleighScattering,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_RayleighExponentialDistribution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_MieScatteringScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_MieScattering,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_MieAbsorptionScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_MieAbsorption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_MieAnisotropy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_MieExponentialDistribution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_AbsorptionScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_Absorption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_SkyLuminanceFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_GroundAlbedo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewProp_HeightFogContribution,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SkyCreatorPlugin,
		nullptr,
		&NewStructOps,
		"SkyCreatorSkyAtmosphereSettings",
		sizeof(FSkyCreatorSkyAtmosphereSettings),
		alignof(FSkyCreatorSkyAtmosphereSettings),
		Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SkyCreatorSkyAtmosphereSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SkyCreatorSkyAtmosphereSettings.InnerSingleton, Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SkyCreatorSkyAtmosphereSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorSkyAtmosphereSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorSkyAtmosphereSettings_h_Statics::ScriptStructInfo[] = {
		{ FSkyCreatorSkyAtmosphereSettings::StaticStruct, Z_Construct_UScriptStruct_FSkyCreatorSkyAtmosphereSettings_Statics::NewStructOps, TEXT("SkyCreatorSkyAtmosphereSettings"), &Z_Registration_Info_UScriptStruct_SkyCreatorSkyAtmosphereSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkyCreatorSkyAtmosphereSettings), 3047016272U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorSkyAtmosphereSettings_h_2909143445(TEXT("/Script/SkyCreatorPlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorSkyAtmosphereSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorSkyAtmosphereSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
