// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PPSkyCreatorPlugin/Public/EPPVolumetricCloudNoiseDetailResolution.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEPPVolumetricCloudNoiseDetailResolution() {}
// Cross Module References
	PPSKYCREATORPLUGIN_API UEnum* Z_Construct_UEnum_PPSkyCreatorPlugin_EPPVolumetricCloudNoiseDetailResolution();
	UPackage* Z_Construct_UPackage__Script_PPSkyCreatorPlugin();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPPVolumetricCloudNoiseDetailResolution;
	static UEnum* EPPVolumetricCloudNoiseDetailResolution_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPPVolumetricCloudNoiseDetailResolution.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPPVolumetricCloudNoiseDetailResolution.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PPSkyCreatorPlugin_EPPVolumetricCloudNoiseDetailResolution, Z_Construct_UPackage__Script_PPSkyCreatorPlugin(), TEXT("EPPVolumetricCloudNoiseDetailResolution"));
		}
		return Z_Registration_Info_UEnum_EPPVolumetricCloudNoiseDetailResolution.OuterSingleton;
	}
	template<> PPSKYCREATORPLUGIN_API UEnum* StaticEnum<EPPVolumetricCloudNoiseDetailResolution>()
	{
		return EPPVolumetricCloudNoiseDetailResolution_StaticEnum();
	}
	struct Z_Construct_UEnum_PPSkyCreatorPlugin_EPPVolumetricCloudNoiseDetailResolution_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PPSkyCreatorPlugin_EPPVolumetricCloudNoiseDetailResolution_Statics::Enumerators[] = {
		{ "VolumetricCloudNoiseDetailResolution_32", (int64)VolumetricCloudNoiseDetailResolution_32 },
		{ "VolumetricCloudNoiseDetailResolution_64", (int64)VolumetricCloudNoiseDetailResolution_64 },
		{ "VolumetricCloudNoiseDetailResolution_MAX", (int64)VolumetricCloudNoiseDetailResolution_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PPSkyCreatorPlugin_EPPVolumetricCloudNoiseDetailResolution_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EPPVolumetricCloudNoiseDetailResolution.h" },
		{ "VolumetricCloudNoiseDetailResolution_32.Name", "VolumetricCloudNoiseDetailResolution_32" },
		{ "VolumetricCloudNoiseDetailResolution_64.Name", "VolumetricCloudNoiseDetailResolution_64" },
		{ "VolumetricCloudNoiseDetailResolution_MAX.Hidden", "" },
		{ "VolumetricCloudNoiseDetailResolution_MAX.Name", "VolumetricCloudNoiseDetailResolution_MAX" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PPSkyCreatorPlugin_EPPVolumetricCloudNoiseDetailResolution_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PPSkyCreatorPlugin,
		nullptr,
		"EPPVolumetricCloudNoiseDetailResolution",
		"EPPVolumetricCloudNoiseDetailResolution",
		Z_Construct_UEnum_PPSkyCreatorPlugin_EPPVolumetricCloudNoiseDetailResolution_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PPSkyCreatorPlugin_EPPVolumetricCloudNoiseDetailResolution_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_PPSkyCreatorPlugin_EPPVolumetricCloudNoiseDetailResolution_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PPSkyCreatorPlugin_EPPVolumetricCloudNoiseDetailResolution_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PPSkyCreatorPlugin_EPPVolumetricCloudNoiseDetailResolution()
	{
		if (!Z_Registration_Info_UEnum_EPPVolumetricCloudNoiseDetailResolution.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPPVolumetricCloudNoiseDetailResolution.InnerSingleton, Z_Construct_UEnum_PPSkyCreatorPlugin_EPPVolumetricCloudNoiseDetailResolution_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPPVolumetricCloudNoiseDetailResolution.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_EPPVolumetricCloudNoiseDetailResolution_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_EPPVolumetricCloudNoiseDetailResolution_h_Statics::EnumInfo[] = {
		{ EPPVolumetricCloudNoiseDetailResolution_StaticEnum, TEXT("EPPVolumetricCloudNoiseDetailResolution"), &Z_Registration_Info_UEnum_EPPVolumetricCloudNoiseDetailResolution, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 291146988U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_EPPVolumetricCloudNoiseDetailResolution_h_2916185582(TEXT("/Script/PPSkyCreatorPlugin"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_EPPVolumetricCloudNoiseDetailResolution_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_EPPVolumetricCloudNoiseDetailResolution_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
