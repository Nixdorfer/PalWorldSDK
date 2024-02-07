// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SkyCreatorPlugin/Public/EVolumetricCloudNoiseShapeResolution.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEVolumetricCloudNoiseShapeResolution() {}
// Cross Module References
	SKYCREATORPLUGIN_API UEnum* Z_Construct_UEnum_SkyCreatorPlugin_EVolumetricCloudNoiseShapeResolution();
	UPackage* Z_Construct_UPackage__Script_SkyCreatorPlugin();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVolumetricCloudNoiseShapeResolution;
	static UEnum* EVolumetricCloudNoiseShapeResolution_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVolumetricCloudNoiseShapeResolution.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVolumetricCloudNoiseShapeResolution.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SkyCreatorPlugin_EVolumetricCloudNoiseShapeResolution, Z_Construct_UPackage__Script_SkyCreatorPlugin(), TEXT("EVolumetricCloudNoiseShapeResolution"));
		}
		return Z_Registration_Info_UEnum_EVolumetricCloudNoiseShapeResolution.OuterSingleton;
	}
	template<> SKYCREATORPLUGIN_API UEnum* StaticEnum<EVolumetricCloudNoiseShapeResolution>()
	{
		return EVolumetricCloudNoiseShapeResolution_StaticEnum();
	}
	struct Z_Construct_UEnum_SkyCreatorPlugin_EVolumetricCloudNoiseShapeResolution_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SkyCreatorPlugin_EVolumetricCloudNoiseShapeResolution_Statics::Enumerators[] = {
		{ "VolumetricCloudNoiseShapeResolution_64", (int64)VolumetricCloudNoiseShapeResolution_64 },
		{ "VolumetricCloudNoiseShapeResolution_128", (int64)VolumetricCloudNoiseShapeResolution_128 },
		{ "VolumetricCloudNoiseShapeResolution_256", (int64)VolumetricCloudNoiseShapeResolution_256 },
		{ "VolumetricCloudNoiseShapeResolution_MAX", (int64)VolumetricCloudNoiseShapeResolution_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SkyCreatorPlugin_EVolumetricCloudNoiseShapeResolution_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EVolumetricCloudNoiseShapeResolution.h" },
		{ "VolumetricCloudNoiseShapeResolution_128.Name", "VolumetricCloudNoiseShapeResolution_128" },
		{ "VolumetricCloudNoiseShapeResolution_256.Name", "VolumetricCloudNoiseShapeResolution_256" },
		{ "VolumetricCloudNoiseShapeResolution_64.Name", "VolumetricCloudNoiseShapeResolution_64" },
		{ "VolumetricCloudNoiseShapeResolution_MAX.Hidden", "" },
		{ "VolumetricCloudNoiseShapeResolution_MAX.Name", "VolumetricCloudNoiseShapeResolution_MAX" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SkyCreatorPlugin_EVolumetricCloudNoiseShapeResolution_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SkyCreatorPlugin,
		nullptr,
		"EVolumetricCloudNoiseShapeResolution",
		"EVolumetricCloudNoiseShapeResolution",
		Z_Construct_UEnum_SkyCreatorPlugin_EVolumetricCloudNoiseShapeResolution_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SkyCreatorPlugin_EVolumetricCloudNoiseShapeResolution_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_SkyCreatorPlugin_EVolumetricCloudNoiseShapeResolution_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SkyCreatorPlugin_EVolumetricCloudNoiseShapeResolution_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SkyCreatorPlugin_EVolumetricCloudNoiseShapeResolution()
	{
		if (!Z_Registration_Info_UEnum_EVolumetricCloudNoiseShapeResolution.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVolumetricCloudNoiseShapeResolution.InnerSingleton, Z_Construct_UEnum_SkyCreatorPlugin_EVolumetricCloudNoiseShapeResolution_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVolumetricCloudNoiseShapeResolution.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_EVolumetricCloudNoiseShapeResolution_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_EVolumetricCloudNoiseShapeResolution_h_Statics::EnumInfo[] = {
		{ EVolumetricCloudNoiseShapeResolution_StaticEnum, TEXT("EVolumetricCloudNoiseShapeResolution"), &Z_Registration_Info_UEnum_EVolumetricCloudNoiseShapeResolution, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3445573646U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_EVolumetricCloudNoiseShapeResolution_h_1330836886(TEXT("/Script/SkyCreatorPlugin"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_EVolumetricCloudNoiseShapeResolution_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_EVolumetricCloudNoiseShapeResolution_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
