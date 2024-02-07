// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FSR2MovieRenderPipeline/Public/EFSR2MoviePipelineQuality.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEFSR2MoviePipelineQuality() {}
// Cross Module References
	FSR2MOVIERENDERPIPELINE_API UEnum* Z_Construct_UEnum_FSR2MovieRenderPipeline_EFSR2MoviePipelineQuality();
	UPackage* Z_Construct_UPackage__Script_FSR2MovieRenderPipeline();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFSR2MoviePipelineQuality;
	static UEnum* EFSR2MoviePipelineQuality_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFSR2MoviePipelineQuality.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFSR2MoviePipelineQuality.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FSR2MovieRenderPipeline_EFSR2MoviePipelineQuality, Z_Construct_UPackage__Script_FSR2MovieRenderPipeline(), TEXT("EFSR2MoviePipelineQuality"));
		}
		return Z_Registration_Info_UEnum_EFSR2MoviePipelineQuality.OuterSingleton;
	}
	template<> FSR2MOVIERENDERPIPELINE_API UEnum* StaticEnum<EFSR2MoviePipelineQuality>()
	{
		return EFSR2MoviePipelineQuality_StaticEnum();
	}
	struct Z_Construct_UEnum_FSR2MovieRenderPipeline_EFSR2MoviePipelineQuality_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FSR2MovieRenderPipeline_EFSR2MoviePipelineQuality_Statics::Enumerators[] = {
		{ "EFSR2MoviePipelineQuality::Unused", (int64)EFSR2MoviePipelineQuality::Unused },
		{ "EFSR2MoviePipelineQuality::Quality", (int64)EFSR2MoviePipelineQuality::Quality },
		{ "EFSR2MoviePipelineQuality::Balanced", (int64)EFSR2MoviePipelineQuality::Balanced },
		{ "EFSR2MoviePipelineQuality::Performance", (int64)EFSR2MoviePipelineQuality::Performance },
		{ "EFSR2MoviePipelineQuality::UltraPerformance", (int64)EFSR2MoviePipelineQuality::UltraPerformance },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FSR2MovieRenderPipeline_EFSR2MoviePipelineQuality_Statics::Enum_MetaDataParams[] = {
		{ "Balanced.Name", "EFSR2MoviePipelineQuality::Balanced" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EFSR2MoviePipelineQuality.h" },
		{ "Performance.Name", "EFSR2MoviePipelineQuality::Performance" },
		{ "Quality.Name", "EFSR2MoviePipelineQuality::Quality" },
		{ "UltraPerformance.Name", "EFSR2MoviePipelineQuality::UltraPerformance" },
		{ "Unused.Name", "EFSR2MoviePipelineQuality::Unused" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FSR2MovieRenderPipeline_EFSR2MoviePipelineQuality_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FSR2MovieRenderPipeline,
		nullptr,
		"EFSR2MoviePipelineQuality",
		"EFSR2MoviePipelineQuality",
		Z_Construct_UEnum_FSR2MovieRenderPipeline_EFSR2MoviePipelineQuality_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FSR2MovieRenderPipeline_EFSR2MoviePipelineQuality_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_FSR2MovieRenderPipeline_EFSR2MoviePipelineQuality_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_FSR2MovieRenderPipeline_EFSR2MoviePipelineQuality_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_FSR2MovieRenderPipeline_EFSR2MoviePipelineQuality()
	{
		if (!Z_Registration_Info_UEnum_EFSR2MoviePipelineQuality.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFSR2MoviePipelineQuality.InnerSingleton, Z_Construct_UEnum_FSR2MovieRenderPipeline_EFSR2MoviePipelineQuality_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFSR2MoviePipelineQuality.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_FSR2MovieRenderPipeline_Source_FSR2MovieRenderPipeline_Public_EFSR2MoviePipelineQuality_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_FSR2MovieRenderPipeline_Source_FSR2MovieRenderPipeline_Public_EFSR2MoviePipelineQuality_h_Statics::EnumInfo[] = {
		{ EFSR2MoviePipelineQuality_StaticEnum, TEXT("EFSR2MoviePipelineQuality"), &Z_Registration_Info_UEnum_EFSR2MoviePipelineQuality, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4241831223U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_FSR2MovieRenderPipeline_Source_FSR2MovieRenderPipeline_Public_EFSR2MoviePipelineQuality_h_2058632539(TEXT("/Script/FSR2MovieRenderPipeline"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_FSR2MovieRenderPipeline_Source_FSR2MovieRenderPipeline_Public_EFSR2MoviePipelineQuality_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_FSR2MovieRenderPipeline_Source_FSR2MovieRenderPipeline_Public_EFSR2MoviePipelineQuality_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
