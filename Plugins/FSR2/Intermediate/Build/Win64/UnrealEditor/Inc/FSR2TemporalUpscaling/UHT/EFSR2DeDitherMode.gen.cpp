// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FSR2TemporalUpscaling/Public/EFSR2DeDitherMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEFSR2DeDitherMode() {}
// Cross Module References
	FSR2TEMPORALUPSCALING_API UEnum* Z_Construct_UEnum_FSR2TemporalUpscaling_EFSR2DeDitherMode();
	UPackage* Z_Construct_UPackage__Script_FSR2TemporalUpscaling();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFSR2DeDitherMode;
	static UEnum* EFSR2DeDitherMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFSR2DeDitherMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFSR2DeDitherMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FSR2TemporalUpscaling_EFSR2DeDitherMode, Z_Construct_UPackage__Script_FSR2TemporalUpscaling(), TEXT("EFSR2DeDitherMode"));
		}
		return Z_Registration_Info_UEnum_EFSR2DeDitherMode.OuterSingleton;
	}
	template<> FSR2TEMPORALUPSCALING_API UEnum* StaticEnum<EFSR2DeDitherMode>()
	{
		return EFSR2DeDitherMode_StaticEnum();
	}
	struct Z_Construct_UEnum_FSR2TemporalUpscaling_EFSR2DeDitherMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FSR2TemporalUpscaling_EFSR2DeDitherMode_Statics::Enumerators[] = {
		{ "EFSR2DeDitherMode::Off", (int64)EFSR2DeDitherMode::Off },
		{ "EFSR2DeDitherMode::Full", (int64)EFSR2DeDitherMode::Full },
		{ "EFSR2DeDitherMode::HairOnly", (int64)EFSR2DeDitherMode::HairOnly },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FSR2TemporalUpscaling_EFSR2DeDitherMode_Statics::Enum_MetaDataParams[] = {
		{ "Full.Name", "EFSR2DeDitherMode::Full" },
		{ "HairOnly.Name", "EFSR2DeDitherMode::HairOnly" },
		{ "ModuleRelativePath", "Public/EFSR2DeDitherMode.h" },
		{ "Off.Name", "EFSR2DeDitherMode::Off" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FSR2TemporalUpscaling_EFSR2DeDitherMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FSR2TemporalUpscaling,
		nullptr,
		"EFSR2DeDitherMode",
		"EFSR2DeDitherMode",
		Z_Construct_UEnum_FSR2TemporalUpscaling_EFSR2DeDitherMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FSR2TemporalUpscaling_EFSR2DeDitherMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_FSR2TemporalUpscaling_EFSR2DeDitherMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_FSR2TemporalUpscaling_EFSR2DeDitherMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_FSR2TemporalUpscaling_EFSR2DeDitherMode()
	{
		if (!Z_Registration_Info_UEnum_EFSR2DeDitherMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFSR2DeDitherMode.InnerSingleton, Z_Construct_UEnum_FSR2TemporalUpscaling_EFSR2DeDitherMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFSR2DeDitherMode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_FSR2_Source_FSR2TemporalUpscaling_Public_EFSR2DeDitherMode_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_FSR2_Source_FSR2TemporalUpscaling_Public_EFSR2DeDitherMode_h_Statics::EnumInfo[] = {
		{ EFSR2DeDitherMode_StaticEnum, TEXT("EFSR2DeDitherMode"), &Z_Registration_Info_UEnum_EFSR2DeDitherMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3193759278U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_FSR2_Source_FSR2TemporalUpscaling_Public_EFSR2DeDitherMode_h_1321938648(TEXT("/Script/FSR2TemporalUpscaling"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_FSR2_Source_FSR2TemporalUpscaling_Public_EFSR2DeDitherMode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_FSR2_Source_FSR2TemporalUpscaling_Public_EFSR2DeDitherMode_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
