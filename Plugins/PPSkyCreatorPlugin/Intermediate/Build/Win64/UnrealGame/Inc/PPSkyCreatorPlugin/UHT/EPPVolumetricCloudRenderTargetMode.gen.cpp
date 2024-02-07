// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PPSkyCreatorPlugin/Public/EPPVolumetricCloudRenderTargetMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEPPVolumetricCloudRenderTargetMode() {}
// Cross Module References
	PPSKYCREATORPLUGIN_API UEnum* Z_Construct_UEnum_PPSkyCreatorPlugin_EPPVolumetricCloudRenderTargetMode();
	UPackage* Z_Construct_UPackage__Script_PPSkyCreatorPlugin();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPPVolumetricCloudRenderTargetMode;
	static UEnum* EPPVolumetricCloudRenderTargetMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPPVolumetricCloudRenderTargetMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPPVolumetricCloudRenderTargetMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PPSkyCreatorPlugin_EPPVolumetricCloudRenderTargetMode, Z_Construct_UPackage__Script_PPSkyCreatorPlugin(), TEXT("EPPVolumetricCloudRenderTargetMode"));
		}
		return Z_Registration_Info_UEnum_EPPVolumetricCloudRenderTargetMode.OuterSingleton;
	}
	template<> PPSKYCREATORPLUGIN_API UEnum* StaticEnum<EPPVolumetricCloudRenderTargetMode>()
	{
		return EPPVolumetricCloudRenderTargetMode_StaticEnum();
	}
	struct Z_Construct_UEnum_PPSkyCreatorPlugin_EPPVolumetricCloudRenderTargetMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PPSkyCreatorPlugin_EPPVolumetricCloudRenderTargetMode_Statics::Enumerators[] = {
		{ "VolumetricCloudRenderTargetMode_Default", (int64)VolumetricCloudRenderTargetMode_Default },
		{ "VolumetricCloudRenderTargetMode_Quality", (int64)VolumetricCloudRenderTargetMode_Quality },
		{ "VolumetricCloudRenderTargetMode_Performance", (int64)VolumetricCloudRenderTargetMode_Performance },
		{ "VolumetricCloudRenderTargetMode_MAX", (int64)VolumetricCloudRenderTargetMode_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PPSkyCreatorPlugin_EPPVolumetricCloudRenderTargetMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EPPVolumetricCloudRenderTargetMode.h" },
		{ "VolumetricCloudRenderTargetMode_Default.Name", "VolumetricCloudRenderTargetMode_Default" },
		{ "VolumetricCloudRenderTargetMode_MAX.Hidden", "" },
		{ "VolumetricCloudRenderTargetMode_MAX.Name", "VolumetricCloudRenderTargetMode_MAX" },
		{ "VolumetricCloudRenderTargetMode_Performance.Name", "VolumetricCloudRenderTargetMode_Performance" },
		{ "VolumetricCloudRenderTargetMode_Quality.Name", "VolumetricCloudRenderTargetMode_Quality" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PPSkyCreatorPlugin_EPPVolumetricCloudRenderTargetMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PPSkyCreatorPlugin,
		nullptr,
		"EPPVolumetricCloudRenderTargetMode",
		"EPPVolumetricCloudRenderTargetMode",
		Z_Construct_UEnum_PPSkyCreatorPlugin_EPPVolumetricCloudRenderTargetMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PPSkyCreatorPlugin_EPPVolumetricCloudRenderTargetMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_PPSkyCreatorPlugin_EPPVolumetricCloudRenderTargetMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PPSkyCreatorPlugin_EPPVolumetricCloudRenderTargetMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PPSkyCreatorPlugin_EPPVolumetricCloudRenderTargetMode()
	{
		if (!Z_Registration_Info_UEnum_EPPVolumetricCloudRenderTargetMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPPVolumetricCloudRenderTargetMode.InnerSingleton, Z_Construct_UEnum_PPSkyCreatorPlugin_EPPVolumetricCloudRenderTargetMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPPVolumetricCloudRenderTargetMode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_EPPVolumetricCloudRenderTargetMode_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_EPPVolumetricCloudRenderTargetMode_h_Statics::EnumInfo[] = {
		{ EPPVolumetricCloudRenderTargetMode_StaticEnum, TEXT("EPPVolumetricCloudRenderTargetMode"), &Z_Registration_Info_UEnum_EPPVolumetricCloudRenderTargetMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3779878512U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_EPPVolumetricCloudRenderTargetMode_h_875762968(TEXT("/Script/PPSkyCreatorPlugin"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_EPPVolumetricCloudRenderTargetMode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_EPPVolumetricCloudRenderTargetMode_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
