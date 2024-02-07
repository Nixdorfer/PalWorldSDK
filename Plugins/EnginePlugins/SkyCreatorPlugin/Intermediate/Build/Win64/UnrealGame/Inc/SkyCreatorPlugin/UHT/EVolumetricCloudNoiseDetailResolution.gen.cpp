// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SkyCreatorPlugin/Public/EVolumetricCloudNoiseDetailResolution.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEVolumetricCloudNoiseDetailResolution() {}
// Cross Module References
	SKYCREATORPLUGIN_API UEnum* Z_Construct_UEnum_SkyCreatorPlugin_EVolumetricCloudNoiseDetailResolution();
	UPackage* Z_Construct_UPackage__Script_SkyCreatorPlugin();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVolumetricCloudNoiseDetailResolution;
	static UEnum* EVolumetricCloudNoiseDetailResolution_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVolumetricCloudNoiseDetailResolution.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVolumetricCloudNoiseDetailResolution.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SkyCreatorPlugin_EVolumetricCloudNoiseDetailResolution, Z_Construct_UPackage__Script_SkyCreatorPlugin(), TEXT("EVolumetricCloudNoiseDetailResolution"));
		}
		return Z_Registration_Info_UEnum_EVolumetricCloudNoiseDetailResolution.OuterSingleton;
	}
	template<> SKYCREATORPLUGIN_API UEnum* StaticEnum<EVolumetricCloudNoiseDetailResolution>()
	{
		return EVolumetricCloudNoiseDetailResolution_StaticEnum();
	}
	struct Z_Construct_UEnum_SkyCreatorPlugin_EVolumetricCloudNoiseDetailResolution_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SkyCreatorPlugin_EVolumetricCloudNoiseDetailResolution_Statics::Enumerators[] = {
		{ "VolumetricCloudNoiseDetailResolution_32", (int64)VolumetricCloudNoiseDetailResolution_32 },
		{ "VolumetricCloudNoiseDetailResolution_64", (int64)VolumetricCloudNoiseDetailResolution_64 },
		{ "VolumetricCloudNoiseDetailResolution_MAX", (int64)VolumetricCloudNoiseDetailResolution_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SkyCreatorPlugin_EVolumetricCloudNoiseDetailResolution_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EVolumetricCloudNoiseDetailResolution.h" },
		{ "VolumetricCloudNoiseDetailResolution_32.Name", "VolumetricCloudNoiseDetailResolution_32" },
		{ "VolumetricCloudNoiseDetailResolution_64.Name", "VolumetricCloudNoiseDetailResolution_64" },
		{ "VolumetricCloudNoiseDetailResolution_MAX.Hidden", "" },
		{ "VolumetricCloudNoiseDetailResolution_MAX.Name", "VolumetricCloudNoiseDetailResolution_MAX" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SkyCreatorPlugin_EVolumetricCloudNoiseDetailResolution_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SkyCreatorPlugin,
		nullptr,
		"EVolumetricCloudNoiseDetailResolution",
		"EVolumetricCloudNoiseDetailResolution",
		Z_Construct_UEnum_SkyCreatorPlugin_EVolumetricCloudNoiseDetailResolution_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SkyCreatorPlugin_EVolumetricCloudNoiseDetailResolution_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_SkyCreatorPlugin_EVolumetricCloudNoiseDetailResolution_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SkyCreatorPlugin_EVolumetricCloudNoiseDetailResolution_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SkyCreatorPlugin_EVolumetricCloudNoiseDetailResolution()
	{
		if (!Z_Registration_Info_UEnum_EVolumetricCloudNoiseDetailResolution.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVolumetricCloudNoiseDetailResolution.InnerSingleton, Z_Construct_UEnum_SkyCreatorPlugin_EVolumetricCloudNoiseDetailResolution_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVolumetricCloudNoiseDetailResolution.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_EVolumetricCloudNoiseDetailResolution_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_EVolumetricCloudNoiseDetailResolution_h_Statics::EnumInfo[] = {
		{ EVolumetricCloudNoiseDetailResolution_StaticEnum, TEXT("EVolumetricCloudNoiseDetailResolution"), &Z_Registration_Info_UEnum_EVolumetricCloudNoiseDetailResolution, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1065875985U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_EVolumetricCloudNoiseDetailResolution_h_3874780538(TEXT("/Script/SkyCreatorPlugin"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_EVolumetricCloudNoiseDetailResolution_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_EVolumetricCloudNoiseDetailResolution_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
