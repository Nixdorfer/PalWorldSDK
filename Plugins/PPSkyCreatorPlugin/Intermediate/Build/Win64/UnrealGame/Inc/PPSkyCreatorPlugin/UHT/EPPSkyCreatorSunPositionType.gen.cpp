// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PPSkyCreatorPlugin/Public/EPPSkyCreatorSunPositionType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEPPSkyCreatorSunPositionType() {}
// Cross Module References
	PPSKYCREATORPLUGIN_API UEnum* Z_Construct_UEnum_PPSkyCreatorPlugin_EPPSkyCreatorSunPositionType();
	UPackage* Z_Construct_UPackage__Script_PPSkyCreatorPlugin();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPPSkyCreatorSunPositionType;
	static UEnum* EPPSkyCreatorSunPositionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPPSkyCreatorSunPositionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPPSkyCreatorSunPositionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PPSkyCreatorPlugin_EPPSkyCreatorSunPositionType, Z_Construct_UPackage__Script_PPSkyCreatorPlugin(), TEXT("EPPSkyCreatorSunPositionType"));
		}
		return Z_Registration_Info_UEnum_EPPSkyCreatorSunPositionType.OuterSingleton;
	}
	template<> PPSKYCREATORPLUGIN_API UEnum* StaticEnum<EPPSkyCreatorSunPositionType>()
	{
		return EPPSkyCreatorSunPositionType_StaticEnum();
	}
	struct Z_Construct_UEnum_PPSkyCreatorPlugin_EPPSkyCreatorSunPositionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PPSkyCreatorPlugin_EPPSkyCreatorSunPositionType_Statics::Enumerators[] = {
		{ "SunPositionType_Simple", (int64)SunPositionType_Simple },
		{ "SunPositionType_Real", (int64)SunPositionType_Real },
		{ "SunPositionType_MAX", (int64)SunPositionType_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PPSkyCreatorPlugin_EPPSkyCreatorSunPositionType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EPPSkyCreatorSunPositionType.h" },
		{ "SunPositionType_MAX.Hidden", "" },
		{ "SunPositionType_MAX.Name", "SunPositionType_MAX" },
		{ "SunPositionType_Real.Name", "SunPositionType_Real" },
		{ "SunPositionType_Simple.Name", "SunPositionType_Simple" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PPSkyCreatorPlugin_EPPSkyCreatorSunPositionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PPSkyCreatorPlugin,
		nullptr,
		"EPPSkyCreatorSunPositionType",
		"EPPSkyCreatorSunPositionType",
		Z_Construct_UEnum_PPSkyCreatorPlugin_EPPSkyCreatorSunPositionType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PPSkyCreatorPlugin_EPPSkyCreatorSunPositionType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_PPSkyCreatorPlugin_EPPSkyCreatorSunPositionType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PPSkyCreatorPlugin_EPPSkyCreatorSunPositionType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PPSkyCreatorPlugin_EPPSkyCreatorSunPositionType()
	{
		if (!Z_Registration_Info_UEnum_EPPSkyCreatorSunPositionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPPSkyCreatorSunPositionType.InnerSingleton, Z_Construct_UEnum_PPSkyCreatorPlugin_EPPSkyCreatorSunPositionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPPSkyCreatorSunPositionType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_EPPSkyCreatorSunPositionType_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_EPPSkyCreatorSunPositionType_h_Statics::EnumInfo[] = {
		{ EPPSkyCreatorSunPositionType_StaticEnum, TEXT("EPPSkyCreatorSunPositionType"), &Z_Registration_Info_UEnum_EPPSkyCreatorSunPositionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 799810738U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_EPPSkyCreatorSunPositionType_h_3169174705(TEXT("/Script/PPSkyCreatorPlugin"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_EPPSkyCreatorSunPositionType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_EPPSkyCreatorSunPositionType_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
