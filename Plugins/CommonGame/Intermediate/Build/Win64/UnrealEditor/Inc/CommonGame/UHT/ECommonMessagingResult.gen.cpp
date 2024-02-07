// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonGame/Public/ECommonMessagingResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECommonMessagingResult() {}
// Cross Module References
	COMMONGAME_API UEnum* Z_Construct_UEnum_CommonGame_ECommonMessagingResult();
	UPackage* Z_Construct_UPackage__Script_CommonGame();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECommonMessagingResult;
	static UEnum* ECommonMessagingResult_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECommonMessagingResult.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECommonMessagingResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CommonGame_ECommonMessagingResult, Z_Construct_UPackage__Script_CommonGame(), TEXT("ECommonMessagingResult"));
		}
		return Z_Registration_Info_UEnum_ECommonMessagingResult.OuterSingleton;
	}
	template<> COMMONGAME_API UEnum* StaticEnum<ECommonMessagingResult>()
	{
		return ECommonMessagingResult_StaticEnum();
	}
	struct Z_Construct_UEnum_CommonGame_ECommonMessagingResult_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CommonGame_ECommonMessagingResult_Statics::Enumerators[] = {
		{ "ECommonMessagingResult::Confirmed", (int64)ECommonMessagingResult::Confirmed },
		{ "ECommonMessagingResult::Declined", (int64)ECommonMessagingResult::Declined },
		{ "ECommonMessagingResult::Cancelled", (int64)ECommonMessagingResult::Cancelled },
		{ "ECommonMessagingResult::Killed", (int64)ECommonMessagingResult::Killed },
		{ "ECommonMessagingResult::Unknown", (int64)ECommonMessagingResult::Unknown },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CommonGame_ECommonMessagingResult_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Cancelled.Name", "ECommonMessagingResult::Cancelled" },
		{ "Confirmed.Name", "ECommonMessagingResult::Confirmed" },
		{ "Declined.Name", "ECommonMessagingResult::Declined" },
		{ "Killed.Name", "ECommonMessagingResult::Killed" },
		{ "ModuleRelativePath", "Public/ECommonMessagingResult.h" },
		{ "Unknown.Name", "ECommonMessagingResult::Unknown" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CommonGame_ECommonMessagingResult_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CommonGame,
		nullptr,
		"ECommonMessagingResult",
		"ECommonMessagingResult",
		Z_Construct_UEnum_CommonGame_ECommonMessagingResult_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CommonGame_ECommonMessagingResult_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CommonGame_ECommonMessagingResult_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CommonGame_ECommonMessagingResult_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CommonGame_ECommonMessagingResult()
	{
		if (!Z_Registration_Info_UEnum_ECommonMessagingResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECommonMessagingResult.InnerSingleton, Z_Construct_UEnum_CommonGame_ECommonMessagingResult_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECommonMessagingResult.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_ECommonMessagingResult_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_ECommonMessagingResult_h_Statics::EnumInfo[] = {
		{ ECommonMessagingResult_StaticEnum, TEXT("ECommonMessagingResult"), &Z_Registration_Info_UEnum_ECommonMessagingResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1065910484U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_ECommonMessagingResult_h_1024833279(TEXT("/Script/CommonGame"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_ECommonMessagingResult_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_ECommonMessagingResult_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
