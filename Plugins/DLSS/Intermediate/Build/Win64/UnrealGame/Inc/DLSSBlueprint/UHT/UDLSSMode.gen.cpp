// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DLSSBlueprint/Public/UDLSSMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUDLSSMode() {}
// Cross Module References
	DLSSBLUEPRINT_API UEnum* Z_Construct_UEnum_DLSSBlueprint_UDLSSMode();
	UPackage* Z_Construct_UPackage__Script_DLSSBlueprint();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_UDLSSMode;
	static UEnum* UDLSSMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_UDLSSMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_UDLSSMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DLSSBlueprint_UDLSSMode, Z_Construct_UPackage__Script_DLSSBlueprint(), TEXT("UDLSSMode"));
		}
		return Z_Registration_Info_UEnum_UDLSSMode.OuterSingleton;
	}
	template<> DLSSBLUEPRINT_API UEnum* StaticEnum<UDLSSMode>()
	{
		return UDLSSMode_StaticEnum();
	}
	struct Z_Construct_UEnum_DLSSBlueprint_UDLSSMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DLSSBlueprint_UDLSSMode_Statics::Enumerators[] = {
		{ "UDLSSMode::Off", (int64)UDLSSMode::Off },
		{ "UDLSSMode::Auto", (int64)UDLSSMode::Auto },
		{ "UDLSSMode::DLAA", (int64)UDLSSMode::DLAA },
		{ "UDLSSMode::UltraQuality", (int64)UDLSSMode::UltraQuality },
		{ "UDLSSMode::Quality", (int64)UDLSSMode::Quality },
		{ "UDLSSMode::Balanced", (int64)UDLSSMode::Balanced },
		{ "UDLSSMode::Performance", (int64)UDLSSMode::Performance },
		{ "UDLSSMode::UltraPerformance", (int64)UDLSSMode::UltraPerformance },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DLSSBlueprint_UDLSSMode_Statics::Enum_MetaDataParams[] = {
		{ "Auto.Name", "UDLSSMode::Auto" },
		{ "Balanced.Name", "UDLSSMode::Balanced" },
		{ "BlueprintType", "true" },
		{ "DLAA.Name", "UDLSSMode::DLAA" },
		{ "ModuleRelativePath", "Public/UDLSSMode.h" },
		{ "Off.Name", "UDLSSMode::Off" },
		{ "Performance.Name", "UDLSSMode::Performance" },
		{ "Quality.Name", "UDLSSMode::Quality" },
		{ "UltraPerformance.Name", "UDLSSMode::UltraPerformance" },
		{ "UltraQuality.Name", "UDLSSMode::UltraQuality" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DLSSBlueprint_UDLSSMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DLSSBlueprint,
		nullptr,
		"UDLSSMode",
		"UDLSSMode",
		Z_Construct_UEnum_DLSSBlueprint_UDLSSMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DLSSBlueprint_UDLSSMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DLSSBlueprint_UDLSSMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DLSSBlueprint_UDLSSMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DLSSBlueprint_UDLSSMode()
	{
		if (!Z_Registration_Info_UEnum_UDLSSMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_UDLSSMode.InnerSingleton, Z_Construct_UEnum_DLSSBlueprint_UDLSSMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_UDLSSMode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_DLSS_Source_DLSSBlueprint_Public_UDLSSMode_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_DLSS_Source_DLSSBlueprint_Public_UDLSSMode_h_Statics::EnumInfo[] = {
		{ UDLSSMode_StaticEnum, TEXT("UDLSSMode"), &Z_Registration_Info_UEnum_UDLSSMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3475959825U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_DLSS_Source_DLSSBlueprint_Public_UDLSSMode_h_4194046318(TEXT("/Script/DLSSBlueprint"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_DLSS_Source_DLSSBlueprint_Public_UDLSSMode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_DLSS_Source_DLSSBlueprint_Public_UDLSSMode_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
