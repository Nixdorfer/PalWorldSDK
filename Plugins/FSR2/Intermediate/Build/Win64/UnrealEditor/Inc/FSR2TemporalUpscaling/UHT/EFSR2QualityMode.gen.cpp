// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FSR2TemporalUpscaling/Public/EFSR2QualityMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEFSR2QualityMode() {}
// Cross Module References
	FSR2TEMPORALUPSCALING_API UEnum* Z_Construct_UEnum_FSR2TemporalUpscaling_EFSR2QualityMode();
	UPackage* Z_Construct_UPackage__Script_FSR2TemporalUpscaling();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFSR2QualityMode;
	static UEnum* EFSR2QualityMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFSR2QualityMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFSR2QualityMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FSR2TemporalUpscaling_EFSR2QualityMode, Z_Construct_UPackage__Script_FSR2TemporalUpscaling(), TEXT("EFSR2QualityMode"));
		}
		return Z_Registration_Info_UEnum_EFSR2QualityMode.OuterSingleton;
	}
	template<> FSR2TEMPORALUPSCALING_API UEnum* StaticEnum<EFSR2QualityMode>()
	{
		return EFSR2QualityMode_StaticEnum();
	}
	struct Z_Construct_UEnum_FSR2TemporalUpscaling_EFSR2QualityMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FSR2TemporalUpscaling_EFSR2QualityMode_Statics::Enumerators[] = {
		{ "EFSR2QualityMode::Unused", (int64)EFSR2QualityMode::Unused },
		{ "EFSR2QualityMode::Quality", (int64)EFSR2QualityMode::Quality },
		{ "EFSR2QualityMode::Balanced", (int64)EFSR2QualityMode::Balanced },
		{ "EFSR2QualityMode::Performance", (int64)EFSR2QualityMode::Performance },
		{ "EFSR2QualityMode::UltraPerformance", (int64)EFSR2QualityMode::UltraPerformance },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FSR2TemporalUpscaling_EFSR2QualityMode_Statics::Enum_MetaDataParams[] = {
		{ "Balanced.Name", "EFSR2QualityMode::Balanced" },
		{ "ModuleRelativePath", "Public/EFSR2QualityMode.h" },
		{ "Performance.Name", "EFSR2QualityMode::Performance" },
		{ "Quality.Name", "EFSR2QualityMode::Quality" },
		{ "UltraPerformance.Name", "EFSR2QualityMode::UltraPerformance" },
		{ "Unused.Name", "EFSR2QualityMode::Unused" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FSR2TemporalUpscaling_EFSR2QualityMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FSR2TemporalUpscaling,
		nullptr,
		"EFSR2QualityMode",
		"EFSR2QualityMode",
		Z_Construct_UEnum_FSR2TemporalUpscaling_EFSR2QualityMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FSR2TemporalUpscaling_EFSR2QualityMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_FSR2TemporalUpscaling_EFSR2QualityMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_FSR2TemporalUpscaling_EFSR2QualityMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_FSR2TemporalUpscaling_EFSR2QualityMode()
	{
		if (!Z_Registration_Info_UEnum_EFSR2QualityMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFSR2QualityMode.InnerSingleton, Z_Construct_UEnum_FSR2TemporalUpscaling_EFSR2QualityMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFSR2QualityMode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_FSR2_Source_FSR2TemporalUpscaling_Public_EFSR2QualityMode_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_FSR2_Source_FSR2TemporalUpscaling_Public_EFSR2QualityMode_h_Statics::EnumInfo[] = {
		{ EFSR2QualityMode_StaticEnum, TEXT("EFSR2QualityMode"), &Z_Registration_Info_UEnum_EFSR2QualityMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2527762108U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_FSR2_Source_FSR2TemporalUpscaling_Public_EFSR2QualityMode_h_1344679221(TEXT("/Script/FSR2TemporalUpscaling"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_FSR2_Source_FSR2TemporalUpscaling_Public_EFSR2QualityMode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_FSR2_Source_FSR2TemporalUpscaling_Public_EFSR2QualityMode_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
