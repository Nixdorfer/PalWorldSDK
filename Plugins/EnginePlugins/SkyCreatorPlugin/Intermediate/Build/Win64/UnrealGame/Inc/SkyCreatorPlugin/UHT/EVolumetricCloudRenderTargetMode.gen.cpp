// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SkyCreatorPlugin/Public/EVolumetricCloudRenderTargetMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEVolumetricCloudRenderTargetMode() {}
// Cross Module References
	SKYCREATORPLUGIN_API UEnum* Z_Construct_UEnum_SkyCreatorPlugin_EVolumetricCloudRenderTargetMode();
	UPackage* Z_Construct_UPackage__Script_SkyCreatorPlugin();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVolumetricCloudRenderTargetMode;
	static UEnum* EVolumetricCloudRenderTargetMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVolumetricCloudRenderTargetMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVolumetricCloudRenderTargetMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SkyCreatorPlugin_EVolumetricCloudRenderTargetMode, Z_Construct_UPackage__Script_SkyCreatorPlugin(), TEXT("EVolumetricCloudRenderTargetMode"));
		}
		return Z_Registration_Info_UEnum_EVolumetricCloudRenderTargetMode.OuterSingleton;
	}
	template<> SKYCREATORPLUGIN_API UEnum* StaticEnum<EVolumetricCloudRenderTargetMode>()
	{
		return EVolumetricCloudRenderTargetMode_StaticEnum();
	}
	struct Z_Construct_UEnum_SkyCreatorPlugin_EVolumetricCloudRenderTargetMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SkyCreatorPlugin_EVolumetricCloudRenderTargetMode_Statics::Enumerators[] = {
		{ "VolumetricCloudRenderTargetMode_Default", (int64)VolumetricCloudRenderTargetMode_Default },
		{ "VolumetricCloudRenderTargetMode_Quality", (int64)VolumetricCloudRenderTargetMode_Quality },
		{ "VolumetricCloudRenderTargetMode_Performance", (int64)VolumetricCloudRenderTargetMode_Performance },
		{ "VolumetricCloudRenderTargetMode_MAX", (int64)VolumetricCloudRenderTargetMode_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SkyCreatorPlugin_EVolumetricCloudRenderTargetMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EVolumetricCloudRenderTargetMode.h" },
		{ "VolumetricCloudRenderTargetMode_Default.Name", "VolumetricCloudRenderTargetMode_Default" },
		{ "VolumetricCloudRenderTargetMode_MAX.Hidden", "" },
		{ "VolumetricCloudRenderTargetMode_MAX.Name", "VolumetricCloudRenderTargetMode_MAX" },
		{ "VolumetricCloudRenderTargetMode_Performance.Name", "VolumetricCloudRenderTargetMode_Performance" },
		{ "VolumetricCloudRenderTargetMode_Quality.Name", "VolumetricCloudRenderTargetMode_Quality" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SkyCreatorPlugin_EVolumetricCloudRenderTargetMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SkyCreatorPlugin,
		nullptr,
		"EVolumetricCloudRenderTargetMode",
		"EVolumetricCloudRenderTargetMode",
		Z_Construct_UEnum_SkyCreatorPlugin_EVolumetricCloudRenderTargetMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SkyCreatorPlugin_EVolumetricCloudRenderTargetMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_SkyCreatorPlugin_EVolumetricCloudRenderTargetMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SkyCreatorPlugin_EVolumetricCloudRenderTargetMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SkyCreatorPlugin_EVolumetricCloudRenderTargetMode()
	{
		if (!Z_Registration_Info_UEnum_EVolumetricCloudRenderTargetMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVolumetricCloudRenderTargetMode.InnerSingleton, Z_Construct_UEnum_SkyCreatorPlugin_EVolumetricCloudRenderTargetMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVolumetricCloudRenderTargetMode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_EVolumetricCloudRenderTargetMode_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_EVolumetricCloudRenderTargetMode_h_Statics::EnumInfo[] = {
		{ EVolumetricCloudRenderTargetMode_StaticEnum, TEXT("EVolumetricCloudRenderTargetMode"), &Z_Registration_Info_UEnum_EVolumetricCloudRenderTargetMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1097944871U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_EVolumetricCloudRenderTargetMode_h_66300116(TEXT("/Script/SkyCreatorPlugin"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_EVolumetricCloudRenderTargetMode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_EVolumetricCloudRenderTargetMode_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
