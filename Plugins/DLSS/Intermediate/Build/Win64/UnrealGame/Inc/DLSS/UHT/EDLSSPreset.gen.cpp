// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DLSS/Public/EDLSSPreset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEDLSSPreset() {}
// Cross Module References
	DLSS_API UEnum* Z_Construct_UEnum_DLSS_EDLSSPreset();
	UPackage* Z_Construct_UPackage__Script_DLSS();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDLSSPreset;
	static UEnum* EDLSSPreset_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDLSSPreset.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDLSSPreset.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DLSS_EDLSSPreset, Z_Construct_UPackage__Script_DLSS(), TEXT("EDLSSPreset"));
		}
		return Z_Registration_Info_UEnum_EDLSSPreset.OuterSingleton;
	}
	template<> DLSS_API UEnum* StaticEnum<EDLSSPreset>()
	{
		return EDLSSPreset_StaticEnum();
	}
	struct Z_Construct_UEnum_DLSS_EDLSSPreset_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DLSS_EDLSSPreset_Statics::Enumerators[] = {
		{ "EDLSSPreset::Default", (int64)EDLSSPreset::Default },
		{ "EDLSSPreset::A", (int64)EDLSSPreset::A },
		{ "EDLSSPreset::B", (int64)EDLSSPreset::B },
		{ "EDLSSPreset::C", (int64)EDLSSPreset::C },
		{ "EDLSSPreset::D", (int64)EDLSSPreset::D },
		{ "EDLSSPreset::E", (int64)EDLSSPreset::E },
		{ "EDLSSPreset::F", (int64)EDLSSPreset::F },
		{ "EDLSSPreset::G", (int64)EDLSSPreset::G },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DLSS_EDLSSPreset_Statics::Enum_MetaDataParams[] = {
		{ "A.Name", "EDLSSPreset::A" },
		{ "B.Name", "EDLSSPreset::B" },
		{ "BlueprintType", "true" },
		{ "C.Name", "EDLSSPreset::C" },
		{ "D.Name", "EDLSSPreset::D" },
		{ "Default.Name", "EDLSSPreset::Default" },
		{ "E.Name", "EDLSSPreset::E" },
		{ "F.Name", "EDLSSPreset::F" },
		{ "G.Name", "EDLSSPreset::G" },
		{ "ModuleRelativePath", "Public/EDLSSPreset.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DLSS_EDLSSPreset_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DLSS,
		nullptr,
		"EDLSSPreset",
		"EDLSSPreset",
		Z_Construct_UEnum_DLSS_EDLSSPreset_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DLSS_EDLSSPreset_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DLSS_EDLSSPreset_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DLSS_EDLSSPreset_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DLSS_EDLSSPreset()
	{
		if (!Z_Registration_Info_UEnum_EDLSSPreset.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDLSSPreset.InnerSingleton, Z_Construct_UEnum_DLSS_EDLSSPreset_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDLSSPreset.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_DLSS_Source_DLSS_Public_EDLSSPreset_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_DLSS_Source_DLSS_Public_EDLSSPreset_h_Statics::EnumInfo[] = {
		{ EDLSSPreset_StaticEnum, TEXT("EDLSSPreset"), &Z_Registration_Info_UEnum_EDLSSPreset, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 109253994U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_DLSS_Source_DLSS_Public_EDLSSPreset_h_1379972961(TEXT("/Script/DLSS"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_DLSS_Source_DLSS_Public_EDLSSPreset_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_DLSS_Source_DLSS_Public_EDLSSPreset_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
