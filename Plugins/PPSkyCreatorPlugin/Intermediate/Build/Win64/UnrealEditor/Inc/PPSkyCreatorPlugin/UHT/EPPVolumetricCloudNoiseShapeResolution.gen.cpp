// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PPSkyCreatorPlugin/Public/EPPVolumetricCloudNoiseShapeResolution.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEPPVolumetricCloudNoiseShapeResolution() {}
// Cross Module References
	PPSKYCREATORPLUGIN_API UEnum* Z_Construct_UEnum_PPSkyCreatorPlugin_EPPVolumetricCloudNoiseShapeResolution();
	UPackage* Z_Construct_UPackage__Script_PPSkyCreatorPlugin();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPPVolumetricCloudNoiseShapeResolution;
	static UEnum* EPPVolumetricCloudNoiseShapeResolution_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPPVolumetricCloudNoiseShapeResolution.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPPVolumetricCloudNoiseShapeResolution.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PPSkyCreatorPlugin_EPPVolumetricCloudNoiseShapeResolution, Z_Construct_UPackage__Script_PPSkyCreatorPlugin(), TEXT("EPPVolumetricCloudNoiseShapeResolution"));
		}
		return Z_Registration_Info_UEnum_EPPVolumetricCloudNoiseShapeResolution.OuterSingleton;
	}
	template<> PPSKYCREATORPLUGIN_API UEnum* StaticEnum<EPPVolumetricCloudNoiseShapeResolution>()
	{
		return EPPVolumetricCloudNoiseShapeResolution_StaticEnum();
	}
	struct Z_Construct_UEnum_PPSkyCreatorPlugin_EPPVolumetricCloudNoiseShapeResolution_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PPSkyCreatorPlugin_EPPVolumetricCloudNoiseShapeResolution_Statics::Enumerators[] = {
		{ "VolumetricCloudNoiseShapeResolution_64", (int64)VolumetricCloudNoiseShapeResolution_64 },
		{ "VolumetricCloudNoiseShapeResolution_128", (int64)VolumetricCloudNoiseShapeResolution_128 },
		{ "VolumetricCloudNoiseShapeResolution_256", (int64)VolumetricCloudNoiseShapeResolution_256 },
		{ "VolumetricCloudNoiseShapeResolution_MAX", (int64)VolumetricCloudNoiseShapeResolution_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PPSkyCreatorPlugin_EPPVolumetricCloudNoiseShapeResolution_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EPPVolumetricCloudNoiseShapeResolution.h" },
		{ "VolumetricCloudNoiseShapeResolution_128.Name", "VolumetricCloudNoiseShapeResolution_128" },
		{ "VolumetricCloudNoiseShapeResolution_256.Name", "VolumetricCloudNoiseShapeResolution_256" },
		{ "VolumetricCloudNoiseShapeResolution_64.Name", "VolumetricCloudNoiseShapeResolution_64" },
		{ "VolumetricCloudNoiseShapeResolution_MAX.Hidden", "" },
		{ "VolumetricCloudNoiseShapeResolution_MAX.Name", "VolumetricCloudNoiseShapeResolution_MAX" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PPSkyCreatorPlugin_EPPVolumetricCloudNoiseShapeResolution_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PPSkyCreatorPlugin,
		nullptr,
		"EPPVolumetricCloudNoiseShapeResolution",
		"EPPVolumetricCloudNoiseShapeResolution",
		Z_Construct_UEnum_PPSkyCreatorPlugin_EPPVolumetricCloudNoiseShapeResolution_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PPSkyCreatorPlugin_EPPVolumetricCloudNoiseShapeResolution_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_PPSkyCreatorPlugin_EPPVolumetricCloudNoiseShapeResolution_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PPSkyCreatorPlugin_EPPVolumetricCloudNoiseShapeResolution_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PPSkyCreatorPlugin_EPPVolumetricCloudNoiseShapeResolution()
	{
		if (!Z_Registration_Info_UEnum_EPPVolumetricCloudNoiseShapeResolution.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPPVolumetricCloudNoiseShapeResolution.InnerSingleton, Z_Construct_UEnum_PPSkyCreatorPlugin_EPPVolumetricCloudNoiseShapeResolution_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPPVolumetricCloudNoiseShapeResolution.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_EPPVolumetricCloudNoiseShapeResolution_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_EPPVolumetricCloudNoiseShapeResolution_h_Statics::EnumInfo[] = {
		{ EPPVolumetricCloudNoiseShapeResolution_StaticEnum, TEXT("EPPVolumetricCloudNoiseShapeResolution"), &Z_Registration_Info_UEnum_EPPVolumetricCloudNoiseShapeResolution, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1789363544U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_EPPVolumetricCloudNoiseShapeResolution_h_287459731(TEXT("/Script/PPSkyCreatorPlugin"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_EPPVolumetricCloudNoiseShapeResolution_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_EPPVolumetricCloudNoiseShapeResolution_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
