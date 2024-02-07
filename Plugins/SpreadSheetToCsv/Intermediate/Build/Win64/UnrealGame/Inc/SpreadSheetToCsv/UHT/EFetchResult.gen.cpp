// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpreadSheetToCsv/Public/EFetchResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEFetchResult() {}
// Cross Module References
	SPREADSHEETTOCSV_API UEnum* Z_Construct_UEnum_SpreadSheetToCsv_EFetchResult();
	UPackage* Z_Construct_UPackage__Script_SpreadSheetToCsv();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFetchResult;
	static UEnum* EFetchResult_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFetchResult.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFetchResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SpreadSheetToCsv_EFetchResult, Z_Construct_UPackage__Script_SpreadSheetToCsv(), TEXT("EFetchResult"));
		}
		return Z_Registration_Info_UEnum_EFetchResult.OuterSingleton;
	}
	template<> SPREADSHEETTOCSV_API UEnum* StaticEnum<EFetchResult>()
	{
		return EFetchResult_StaticEnum();
	}
	struct Z_Construct_UEnum_SpreadSheetToCsv_EFetchResult_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SpreadSheetToCsv_EFetchResult_Statics::Enumerators[] = {
		{ "EFetchResult::Success", (int64)EFetchResult::Success },
		{ "EFetchResult::HttpFailed", (int64)EFetchResult::HttpFailed },
		{ "EFetchResult::JSONParsingFailed", (int64)EFetchResult::JSONParsingFailed },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SpreadSheetToCsv_EFetchResult_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HttpFailed.Name", "EFetchResult::HttpFailed" },
		{ "JSONParsingFailed.Name", "EFetchResult::JSONParsingFailed" },
		{ "ModuleRelativePath", "Public/EFetchResult.h" },
		{ "Success.Name", "EFetchResult::Success" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SpreadSheetToCsv_EFetchResult_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SpreadSheetToCsv,
		nullptr,
		"EFetchResult",
		"EFetchResult",
		Z_Construct_UEnum_SpreadSheetToCsv_EFetchResult_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SpreadSheetToCsv_EFetchResult_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SpreadSheetToCsv_EFetchResult_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SpreadSheetToCsv_EFetchResult_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SpreadSheetToCsv_EFetchResult()
	{
		if (!Z_Registration_Info_UEnum_EFetchResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFetchResult.InnerSingleton, Z_Construct_UEnum_SpreadSheetToCsv_EFetchResult_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFetchResult.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_SpreadSheetToCsv_Source_SpreadSheetToCsv_Public_EFetchResult_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_SpreadSheetToCsv_Source_SpreadSheetToCsv_Public_EFetchResult_h_Statics::EnumInfo[] = {
		{ EFetchResult_StaticEnum, TEXT("EFetchResult"), &Z_Registration_Info_UEnum_EFetchResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 249618276U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_SpreadSheetToCsv_Source_SpreadSheetToCsv_Public_EFetchResult_h_793119967(TEXT("/Script/SpreadSheetToCsv"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_SpreadSheetToCsv_Source_SpreadSheetToCsv_Public_EFetchResult_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_SpreadSheetToCsv_Source_SpreadSheetToCsv_Public_EFetchResult_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
