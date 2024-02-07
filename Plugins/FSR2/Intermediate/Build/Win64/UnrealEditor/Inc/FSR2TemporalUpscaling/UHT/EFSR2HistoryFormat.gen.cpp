// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FSR2TemporalUpscaling/Public/EFSR2HistoryFormat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEFSR2HistoryFormat() {}
// Cross Module References
	FSR2TEMPORALUPSCALING_API UEnum* Z_Construct_UEnum_FSR2TemporalUpscaling_EFSR2HistoryFormat();
	UPackage* Z_Construct_UPackage__Script_FSR2TemporalUpscaling();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFSR2HistoryFormat;
	static UEnum* EFSR2HistoryFormat_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFSR2HistoryFormat.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFSR2HistoryFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FSR2TemporalUpscaling_EFSR2HistoryFormat, Z_Construct_UPackage__Script_FSR2TemporalUpscaling(), TEXT("EFSR2HistoryFormat"));
		}
		return Z_Registration_Info_UEnum_EFSR2HistoryFormat.OuterSingleton;
	}
	template<> FSR2TEMPORALUPSCALING_API UEnum* StaticEnum<EFSR2HistoryFormat>()
	{
		return EFSR2HistoryFormat_StaticEnum();
	}
	struct Z_Construct_UEnum_FSR2TemporalUpscaling_EFSR2HistoryFormat_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FSR2TemporalUpscaling_EFSR2HistoryFormat_Statics::Enumerators[] = {
		{ "EFSR2HistoryFormat::FloatRGBA", (int64)EFSR2HistoryFormat::FloatRGBA },
		{ "EFSR2HistoryFormat::FloatR11G11B10", (int64)EFSR2HistoryFormat::FloatR11G11B10 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FSR2TemporalUpscaling_EFSR2HistoryFormat_Statics::Enum_MetaDataParams[] = {
		{ "FloatR11G11B10.Name", "EFSR2HistoryFormat::FloatR11G11B10" },
		{ "FloatRGBA.Name", "EFSR2HistoryFormat::FloatRGBA" },
		{ "ModuleRelativePath", "Public/EFSR2HistoryFormat.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FSR2TemporalUpscaling_EFSR2HistoryFormat_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FSR2TemporalUpscaling,
		nullptr,
		"EFSR2HistoryFormat",
		"EFSR2HistoryFormat",
		Z_Construct_UEnum_FSR2TemporalUpscaling_EFSR2HistoryFormat_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FSR2TemporalUpscaling_EFSR2HistoryFormat_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_FSR2TemporalUpscaling_EFSR2HistoryFormat_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_FSR2TemporalUpscaling_EFSR2HistoryFormat_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_FSR2TemporalUpscaling_EFSR2HistoryFormat()
	{
		if (!Z_Registration_Info_UEnum_EFSR2HistoryFormat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFSR2HistoryFormat.InnerSingleton, Z_Construct_UEnum_FSR2TemporalUpscaling_EFSR2HistoryFormat_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFSR2HistoryFormat.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_FSR2_Source_FSR2TemporalUpscaling_Public_EFSR2HistoryFormat_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_FSR2_Source_FSR2TemporalUpscaling_Public_EFSR2HistoryFormat_h_Statics::EnumInfo[] = {
		{ EFSR2HistoryFormat_StaticEnum, TEXT("EFSR2HistoryFormat"), &Z_Registration_Info_UEnum_EFSR2HistoryFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2849880602U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_FSR2_Source_FSR2TemporalUpscaling_Public_EFSR2HistoryFormat_h_4789214(TEXT("/Script/FSR2TemporalUpscaling"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_FSR2_Source_FSR2TemporalUpscaling_Public_EFSR2HistoryFormat_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_FSR2_Source_FSR2TemporalUpscaling_Public_EFSR2HistoryFormat_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
