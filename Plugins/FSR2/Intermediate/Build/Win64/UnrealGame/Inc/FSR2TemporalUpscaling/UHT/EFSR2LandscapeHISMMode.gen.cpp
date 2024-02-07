// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FSR2TemporalUpscaling/Public/EFSR2LandscapeHISMMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEFSR2LandscapeHISMMode() {}
// Cross Module References
	FSR2TEMPORALUPSCALING_API UEnum* Z_Construct_UEnum_FSR2TemporalUpscaling_EFSR2LandscapeHISMMode();
	UPackage* Z_Construct_UPackage__Script_FSR2TemporalUpscaling();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFSR2LandscapeHISMMode;
	static UEnum* EFSR2LandscapeHISMMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFSR2LandscapeHISMMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFSR2LandscapeHISMMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FSR2TemporalUpscaling_EFSR2LandscapeHISMMode, Z_Construct_UPackage__Script_FSR2TemporalUpscaling(), TEXT("EFSR2LandscapeHISMMode"));
		}
		return Z_Registration_Info_UEnum_EFSR2LandscapeHISMMode.OuterSingleton;
	}
	template<> FSR2TEMPORALUPSCALING_API UEnum* StaticEnum<EFSR2LandscapeHISMMode>()
	{
		return EFSR2LandscapeHISMMode_StaticEnum();
	}
	struct Z_Construct_UEnum_FSR2TemporalUpscaling_EFSR2LandscapeHISMMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FSR2TemporalUpscaling_EFSR2LandscapeHISMMode_Statics::Enumerators[] = {
		{ "EFSR2LandscapeHISMMode::Off", (int64)EFSR2LandscapeHISMMode::Off },
		{ "EFSR2LandscapeHISMMode::AllStatic", (int64)EFSR2LandscapeHISMMode::AllStatic },
		{ "EFSR2LandscapeHISMMode::StaticWPO", (int64)EFSR2LandscapeHISMMode::StaticWPO },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FSR2TemporalUpscaling_EFSR2LandscapeHISMMode_Statics::Enum_MetaDataParams[] = {
		{ "AllStatic.Name", "EFSR2LandscapeHISMMode::AllStatic" },
		{ "ModuleRelativePath", "Public/EFSR2LandscapeHISMMode.h" },
		{ "Off.Name", "EFSR2LandscapeHISMMode::Off" },
		{ "StaticWPO.Name", "EFSR2LandscapeHISMMode::StaticWPO" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FSR2TemporalUpscaling_EFSR2LandscapeHISMMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FSR2TemporalUpscaling,
		nullptr,
		"EFSR2LandscapeHISMMode",
		"EFSR2LandscapeHISMMode",
		Z_Construct_UEnum_FSR2TemporalUpscaling_EFSR2LandscapeHISMMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FSR2TemporalUpscaling_EFSR2LandscapeHISMMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_FSR2TemporalUpscaling_EFSR2LandscapeHISMMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_FSR2TemporalUpscaling_EFSR2LandscapeHISMMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_FSR2TemporalUpscaling_EFSR2LandscapeHISMMode()
	{
		if (!Z_Registration_Info_UEnum_EFSR2LandscapeHISMMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFSR2LandscapeHISMMode.InnerSingleton, Z_Construct_UEnum_FSR2TemporalUpscaling_EFSR2LandscapeHISMMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFSR2LandscapeHISMMode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_FSR2_Source_FSR2TemporalUpscaling_Public_EFSR2LandscapeHISMMode_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_FSR2_Source_FSR2TemporalUpscaling_Public_EFSR2LandscapeHISMMode_h_Statics::EnumInfo[] = {
		{ EFSR2LandscapeHISMMode_StaticEnum, TEXT("EFSR2LandscapeHISMMode"), &Z_Registration_Info_UEnum_EFSR2LandscapeHISMMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3183468557U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_FSR2_Source_FSR2TemporalUpscaling_Public_EFSR2LandscapeHISMMode_h_3660210895(TEXT("/Script/FSR2TemporalUpscaling"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_FSR2_Source_FSR2TemporalUpscaling_Public_EFSR2LandscapeHISMMode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_FSR2_Source_FSR2TemporalUpscaling_Public_EFSR2LandscapeHISMMode_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
