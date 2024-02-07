// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NISBlueprint/Public/UNISMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUNISMode() {}
// Cross Module References
	NISBLUEPRINT_API UEnum* Z_Construct_UEnum_NISBlueprint_UNISMode();
	UPackage* Z_Construct_UPackage__Script_NISBlueprint();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_UNISMode;
	static UEnum* UNISMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_UNISMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_UNISMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NISBlueprint_UNISMode, Z_Construct_UPackage__Script_NISBlueprint(), TEXT("UNISMode"));
		}
		return Z_Registration_Info_UEnum_UNISMode.OuterSingleton;
	}
	template<> NISBLUEPRINT_API UEnum* StaticEnum<UNISMode>()
	{
		return UNISMode_StaticEnum();
	}
	struct Z_Construct_UEnum_NISBlueprint_UNISMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_NISBlueprint_UNISMode_Statics::Enumerators[] = {
		{ "UNISMode::Off", (int64)UNISMode::Off },
		{ "UNISMode::UltraQuality", (int64)UNISMode::UltraQuality },
		{ "UNISMode::Quality", (int64)UNISMode::Quality },
		{ "UNISMode::Balanced", (int64)UNISMode::Balanced },
		{ "UNISMode::Performance", (int64)UNISMode::Performance },
		{ "UNISMode::Custom", (int64)UNISMode::Custom },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_NISBlueprint_UNISMode_Statics::Enum_MetaDataParams[] = {
		{ "Balanced.Name", "UNISMode::Balanced" },
		{ "BlueprintType", "true" },
		{ "Custom.Name", "UNISMode::Custom" },
		{ "ModuleRelativePath", "Public/UNISMode.h" },
		{ "Off.Name", "UNISMode::Off" },
		{ "Performance.Name", "UNISMode::Performance" },
		{ "Quality.Name", "UNISMode::Quality" },
		{ "UltraQuality.Name", "UNISMode::UltraQuality" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NISBlueprint_UNISMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_NISBlueprint,
		nullptr,
		"UNISMode",
		"UNISMode",
		Z_Construct_UEnum_NISBlueprint_UNISMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_NISBlueprint_UNISMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_NISBlueprint_UNISMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_NISBlueprint_UNISMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_NISBlueprint_UNISMode()
	{
		if (!Z_Registration_Info_UEnum_UNISMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_UNISMode.InnerSingleton, Z_Construct_UEnum_NISBlueprint_UNISMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_UNISMode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_NIS_Source_NISBlueprint_Public_UNISMode_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_NIS_Source_NISBlueprint_Public_UNISMode_h_Statics::EnumInfo[] = {
		{ UNISMode_StaticEnum, TEXT("UNISMode"), &Z_Registration_Info_UEnum_UNISMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 308040447U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_NIS_Source_NISBlueprint_Public_UNISMode_h_1407138403(TEXT("/Script/NISBlueprint"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_NIS_Source_NISBlueprint_Public_UNISMode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_NIS_Source_NISBlueprint_Public_UNISMode_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
