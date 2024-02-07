// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SkyCreatorPlugin/Public/SkyCreatorExponentialHeightFogSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkyCreatorExponentialHeightFogSettings() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	SKYCREATORPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings();
	UPackage* Z_Construct_UPackage__Script_SkyCreatorPlugin();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SkyCreatorExponentialHeightFogSettings;
class UScriptStruct* FSkyCreatorExponentialHeightFogSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SkyCreatorExponentialHeightFogSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SkyCreatorExponentialHeightFogSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings, Z_Construct_UPackage__Script_SkyCreatorPlugin(), TEXT("SkyCreatorExponentialHeightFogSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SkyCreatorExponentialHeightFogSettings.OuterSingleton;
}
template<> SKYCREATORPLUGIN_API UScriptStruct* StaticStruct<FSkyCreatorExponentialHeightFogSettings>()
{
	return FSkyCreatorExponentialHeightFogSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SkyCreatorExponentialHeightFogSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkyCreatorExponentialHeightFogSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_FogDensity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorExponentialHeightFogSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorExponentialHeightFogSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_FogDensity = { "FogDensity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorExponentialHeightFogSettings, FogDensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_FogDensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_FogDensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_FogHeightFalloff_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorExponentialHeightFogSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorExponentialHeightFogSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_FogHeightFalloff = { "FogHeightFalloff", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorExponentialHeightFogSettings, FogHeightFalloff), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_FogHeightFalloff_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_FogHeightFalloff_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_FogInscatteringColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorExponentialHeightFogSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorExponentialHeightFogSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_FogInscatteringColor = { "FogInscatteringColor", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorExponentialHeightFogSettings, FogInscatteringColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_FogInscatteringColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_FogInscatteringColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_FogStartDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorExponentialHeightFogSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorExponentialHeightFogSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_FogStartDistance = { "FogStartDistance", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorExponentialHeightFogSettings, FogStartDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_FogStartDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_FogStartDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_SecondFogDensity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorExponentialHeightFogSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorExponentialHeightFogSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_SecondFogDensity = { "SecondFogDensity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorExponentialHeightFogSettings, SecondFogDensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_SecondFogDensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_SecondFogDensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_SecondFogHeightFalloff_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorExponentialHeightFogSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorExponentialHeightFogSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_SecondFogHeightFalloff = { "SecondFogHeightFalloff", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorExponentialHeightFogSettings, SecondFogHeightFalloff), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_SecondFogHeightFalloff_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_SecondFogHeightFalloff_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_DirectionalInscatteringExponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorExponentialHeightFogSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorExponentialHeightFogSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_DirectionalInscatteringExponent = { "DirectionalInscatteringExponent", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorExponentialHeightFogSettings, DirectionalInscatteringExponent), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_DirectionalInscatteringExponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_DirectionalInscatteringExponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_DirectionalInscatteringStartDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorExponentialHeightFogSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorExponentialHeightFogSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_DirectionalInscatteringStartDistance = { "DirectionalInscatteringStartDistance", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorExponentialHeightFogSettings, DirectionalInscatteringStartDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_DirectionalInscatteringStartDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_DirectionalInscatteringStartDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_DirectionalInscatteringColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorExponentialHeightFogSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorExponentialHeightFogSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_DirectionalInscatteringColor = { "DirectionalInscatteringColor", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorExponentialHeightFogSettings, DirectionalInscatteringColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_DirectionalInscatteringColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_DirectionalInscatteringColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_VolumetricFogScatteringDistribution_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorExponentialHeightFogSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorExponentialHeightFogSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_VolumetricFogScatteringDistribution = { "VolumetricFogScatteringDistribution", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorExponentialHeightFogSettings, VolumetricFogScatteringDistribution), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_VolumetricFogScatteringDistribution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_VolumetricFogScatteringDistribution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_VolumetricFogAlbedo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorExponentialHeightFogSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorExponentialHeightFogSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_VolumetricFogAlbedo = { "VolumetricFogAlbedo", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorExponentialHeightFogSettings, VolumetricFogAlbedo), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_VolumetricFogAlbedo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_VolumetricFogAlbedo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_VolumetricFogEmissive_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorExponentialHeightFogSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorExponentialHeightFogSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_VolumetricFogEmissive = { "VolumetricFogEmissive", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorExponentialHeightFogSettings, VolumetricFogEmissive), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_VolumetricFogEmissive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_VolumetricFogEmissive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_VolumetricFogExtinctionScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorExponentialHeightFogSettings" },
		{ "ModuleRelativePath", "Public/SkyCreatorExponentialHeightFogSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_VolumetricFogExtinctionScale = { "VolumetricFogExtinctionScale", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorExponentialHeightFogSettings, VolumetricFogExtinctionScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_VolumetricFogExtinctionScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_VolumetricFogExtinctionScale_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_FogDensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_FogHeightFalloff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_FogInscatteringColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_FogStartDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_SecondFogDensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_SecondFogHeightFalloff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_DirectionalInscatteringExponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_DirectionalInscatteringStartDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_DirectionalInscatteringColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_VolumetricFogScatteringDistribution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_VolumetricFogAlbedo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_VolumetricFogEmissive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewProp_VolumetricFogExtinctionScale,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SkyCreatorPlugin,
		nullptr,
		&NewStructOps,
		"SkyCreatorExponentialHeightFogSettings",
		sizeof(FSkyCreatorExponentialHeightFogSettings),
		alignof(FSkyCreatorExponentialHeightFogSettings),
		Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SkyCreatorExponentialHeightFogSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SkyCreatorExponentialHeightFogSettings.InnerSingleton, Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SkyCreatorExponentialHeightFogSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorExponentialHeightFogSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorExponentialHeightFogSettings_h_Statics::ScriptStructInfo[] = {
		{ FSkyCreatorExponentialHeightFogSettings::StaticStruct, Z_Construct_UScriptStruct_FSkyCreatorExponentialHeightFogSettings_Statics::NewStructOps, TEXT("SkyCreatorExponentialHeightFogSettings"), &Z_Registration_Info_UScriptStruct_SkyCreatorExponentialHeightFogSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkyCreatorExponentialHeightFogSettings), 652124977U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorExponentialHeightFogSettings_h_4171336562(TEXT("/Script/SkyCreatorPlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorExponentialHeightFogSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorExponentialHeightFogSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
