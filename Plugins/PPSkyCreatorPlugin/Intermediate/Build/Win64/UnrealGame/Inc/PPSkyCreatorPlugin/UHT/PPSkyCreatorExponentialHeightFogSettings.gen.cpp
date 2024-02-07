// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PPSkyCreatorPlugin/Public/PPSkyCreatorExponentialHeightFogSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePPSkyCreatorExponentialHeightFogSettings() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	PPSKYCREATORPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FPPSkyCreatorExponentialHeightFogSettings();
	UPackage* Z_Construct_UPackage__Script_PPSkyCreatorPlugin();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PPSkyCreatorExponentialHeightFogSettings;
class UScriptStruct* FPPSkyCreatorExponentialHeightFogSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PPSkyCreatorExponentialHeightFogSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PPSkyCreatorExponentialHeightFogSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPPSkyCreatorExponentialHeightFogSettings, Z_Construct_UPackage__Script_PPSkyCreatorPlugin(), TEXT("PPSkyCreatorExponentialHeightFogSettings"));
	}
	return Z_Registration_Info_UScriptStruct_PPSkyCreatorExponentialHeightFogSettings.OuterSingleton;
}
template<> PPSKYCREATORPLUGIN_API UScriptStruct* StaticStruct<FPPSkyCreatorExponentialHeightFogSettings>()
{
	return FPPSkyCreatorExponentialHeightFogSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPPSkyCreatorExponentialHeightFogSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FogDensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FogDensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FogHeightFalloff_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FogHeightFalloff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FogInscatteringColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FogInscatteringColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FogStartDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FogStartDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondFogDensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SecondFogDensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondFogHeightFalloff_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SecondFogHeightFalloff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectionalInscatteringExponent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DirectionalInscatteringExponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectionalInscatteringStartDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DirectionalInscatteringStartDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectionalInscatteringColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DirectionalInscatteringColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumetricFogScatteringDistribution_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumetricFogScatteringDistribution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumetricFogAlbedo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VolumetricFogAlbedo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumetricFogEmissive_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VolumetricFogEmissive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumetricFogExtinctionScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumetricFogExtinctionScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorExponentialHeightFogSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorExponentialHeightFogSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPPSkyCreatorExponentialHeightFogSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPPSkyCreatorExponentialHeightFogSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorExponentialHeightFogSettings_Statics::NewProp_FogDensity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorExponentialHeightFogSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorExponentialHeightFogSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorExponentialHeightFogSettings_Statics::NewProp_FogDensity = { "FogDensity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorExponentialHeightFogSettings, FogDensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorExponentialHeightFogSettings_Statics::NewProp_FogDensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorExponentialHeightFogSettings_Statics::NewProp_FogDensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorExponentialHeightFogSettings_Statics::NewProp_FogHeightFalloff_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorExponentialHeightFogSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorExponentialHeightFogSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorExponentialHeightFogSettings_Statics::NewProp_FogHeightFalloff = { "FogHeightFalloff", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorExponentialHeightFogSettings, FogHeightFalloff), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorExponentialHeightFogSettings_Statics::NewProp_FogHeightFalloff_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorExponentialHeightFogSettings_Statics::NewProp_FogHeightFalloff_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorExponentialHeightFogSettings_Statics::NewProp_FogInscatteringColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorExponentialHeightFogSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorExponentialHeightFogSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorExponentialHeightFogSettings_Statics::NewProp_FogInscatteringColor = { "FogInscatteringColor", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorExponentialHeightFogSettings, FogInscatteringColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorExponentialHeightFogSettings_Statics::NewProp_FogInscatteringColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorExponentialHeightFogSettings_Statics::NewProp_FogInscatteringColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorExponentialHeightFogSettings_Statics::NewProp_FogStartDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorExponentialHeightFogSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorExponentialHeightFogSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorExponentialHeightFogSettings_Statics::NewProp_FogStartDistance = { "FogStartDistance", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorExponentialHeightFogSettings, FogStartDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorExponentialHeightFogSettings_Statics::NewProp_FogStartDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorExponentialHeightFogSettings_Statics::NewProp_FogStartDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorExponentialHeightFogSettings_Statics::NewProp_SecondFogDensity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorExponentialHeightFogSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorExponentialHeightFogSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorExponentialHeightFogSettings_Statics::NewProp_SecondFogDensity = { "SecondFogDensity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorExponentialHeightFogSettings, SecondFogDensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorExponentialHeightFogSettings_Statics::NewProp_SecondFogDensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorExponentialHeightFogSettings_Statics::NewProp_SecondFogDensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorExponentialHeightFogSettings_Statics::NewProp_SecondFogHeightFalloff_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorExponentialHeightFogSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorExponentialHeightFogSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorExponentialHeightFogSettings_Statics::NewProp_SecondFogHeightFalloff = { "SecondFogHeightFalloff", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorExponentialHeightFogSettings, SecondFogHeightFalloff), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorExponentialHeightFogSettings_Statics::NewProp_SecondFogHeightFalloff_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorExponentialHeightFogSettings_Statics::NewProp_SecondFogHeightFalloff_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorExponentialHeightFogSettings_Statics::NewProp_DirectionalInscatteringExponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorExponentialHeightFogSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorExponentialHeightFogSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorExponentialHeightFogSettings_Statics::NewProp_DirectionalInscatteringExponent = { "DirectionalInscatteringExponent", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorExponentialHeightFogSettings, DirectionalInscatteringExponent), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorExponentialHeightFogSettings_Statics::NewProp_DirectionalInscatteringExponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorExponentialHeightFogSettings_Statics::NewProp_DirectionalInscatteringExponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorExponentialHeightFogSettings_Statics::NewProp_DirectionalInscatteringStartDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorExponentialHeightFogSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorExponentialHeightFogSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorExponentialHeightFogSettings_Statics::NewProp_DirectionalInscatteringStartDistance = { "DirectionalInscatteringStartDistance", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorExponentialHeightFogSettings, DirectionalInscatteringStartDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorExponentialHeightFogSettings_Statics::NewProp_DirectionalInscatteringStartDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorExponentialHeightFogSettings_Statics::NewProp_DirectionalInscatteringStartDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorExponentialHeightFogSettings_Statics::NewProp_DirectionalInscatteringColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorExponentialHeightFogSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorExponentialHeightFogSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorExponentialHeightFogSettings_Statics::NewProp_DirectionalInscatteringColor = { "DirectionalInscatteringColor", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorExponentialHeightFogSettings, DirectionalInscatteringColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorExponentialHeightFogSettings_Statics::NewProp_DirectionalInscatteringColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorExponentialHeightFogSettings_Statics::NewProp_DirectionalInscatteringColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorExponentialHeightFogSettings_Statics::NewProp_VolumetricFogScatteringDistribution_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorExponentialHeightFogSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorExponentialHeightFogSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorExponentialHeightFogSettings_Statics::NewProp_VolumetricFogScatteringDistribution = { "VolumetricFogScatteringDistribution", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorExponentialHeightFogSettings, VolumetricFogScatteringDistribution), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorExponentialHeightFogSettings_Statics::NewProp_VolumetricFogScatteringDistribution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorExponentialHeightFogSettings_Statics::NewProp_VolumetricFogScatteringDistribution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorExponentialHeightFogSettings_Statics::NewProp_VolumetricFogAlbedo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorExponentialHeightFogSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorExponentialHeightFogSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorExponentialHeightFogSettings_Statics::NewProp_VolumetricFogAlbedo = { "VolumetricFogAlbedo", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorExponentialHeightFogSettings, VolumetricFogAlbedo), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorExponentialHeightFogSettings_Statics::NewProp_VolumetricFogAlbedo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorExponentialHeightFogSettings_Statics::NewProp_VolumetricFogAlbedo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorExponentialHeightFogSettings_Statics::NewProp_VolumetricFogEmissive_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorExponentialHeightFogSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorExponentialHeightFogSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorExponentialHeightFogSettings_Statics::NewProp_VolumetricFogEmissive = { "VolumetricFogEmissive", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorExponentialHeightFogSettings, VolumetricFogEmissive), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorExponentialHeightFogSettings_Statics::NewProp_VolumetricFogEmissive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorExponentialHeightFogSettings_Statics::NewProp_VolumetricFogEmissive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorExponentialHeightFogSettings_Statics::NewProp_VolumetricFogExtinctionScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorExponentialHeightFogSettings" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorExponentialHeightFogSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorExponentialHeightFogSettings_Statics::NewProp_VolumetricFogExtinctionScale = { "VolumetricFogExtinctionScale", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorExponentialHeightFogSettings, VolumetricFogExtinctionScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorExponentialHeightFogSettings_Statics::NewProp_VolumetricFogExtinctionScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorExponentialHeightFogSettings_Statics::NewProp_VolumetricFogExtinctionScale_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPPSkyCreatorExponentialHeightFogSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorExponentialHeightFogSettings_Statics::NewProp_FogDensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorExponentialHeightFogSettings_Statics::NewProp_FogHeightFalloff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorExponentialHeightFogSettings_Statics::NewProp_FogInscatteringColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorExponentialHeightFogSettings_Statics::NewProp_FogStartDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorExponentialHeightFogSettings_Statics::NewProp_SecondFogDensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorExponentialHeightFogSettings_Statics::NewProp_SecondFogHeightFalloff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorExponentialHeightFogSettings_Statics::NewProp_DirectionalInscatteringExponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorExponentialHeightFogSettings_Statics::NewProp_DirectionalInscatteringStartDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorExponentialHeightFogSettings_Statics::NewProp_DirectionalInscatteringColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorExponentialHeightFogSettings_Statics::NewProp_VolumetricFogScatteringDistribution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorExponentialHeightFogSettings_Statics::NewProp_VolumetricFogAlbedo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorExponentialHeightFogSettings_Statics::NewProp_VolumetricFogEmissive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorExponentialHeightFogSettings_Statics::NewProp_VolumetricFogExtinctionScale,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPPSkyCreatorExponentialHeightFogSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PPSkyCreatorPlugin,
		nullptr,
		&NewStructOps,
		"PPSkyCreatorExponentialHeightFogSettings",
		sizeof(FPPSkyCreatorExponentialHeightFogSettings),
		alignof(FPPSkyCreatorExponentialHeightFogSettings),
		Z_Construct_UScriptStruct_FPPSkyCreatorExponentialHeightFogSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorExponentialHeightFogSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorExponentialHeightFogSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorExponentialHeightFogSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPPSkyCreatorExponentialHeightFogSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_PPSkyCreatorExponentialHeightFogSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PPSkyCreatorExponentialHeightFogSettings.InnerSingleton, Z_Construct_UScriptStruct_FPPSkyCreatorExponentialHeightFogSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PPSkyCreatorExponentialHeightFogSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPSkyCreatorExponentialHeightFogSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPSkyCreatorExponentialHeightFogSettings_h_Statics::ScriptStructInfo[] = {
		{ FPPSkyCreatorExponentialHeightFogSettings::StaticStruct, Z_Construct_UScriptStruct_FPPSkyCreatorExponentialHeightFogSettings_Statics::NewStructOps, TEXT("PPSkyCreatorExponentialHeightFogSettings"), &Z_Registration_Info_UScriptStruct_PPSkyCreatorExponentialHeightFogSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPPSkyCreatorExponentialHeightFogSettings), 2821353897U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPSkyCreatorExponentialHeightFogSettings_h_2168233698(TEXT("/Script/PPSkyCreatorPlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPSkyCreatorExponentialHeightFogSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPSkyCreatorExponentialHeightFogSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
