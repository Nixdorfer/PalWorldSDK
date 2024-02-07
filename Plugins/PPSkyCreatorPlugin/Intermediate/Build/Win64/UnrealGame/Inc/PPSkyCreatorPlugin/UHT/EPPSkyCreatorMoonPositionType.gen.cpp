// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PPSkyCreatorPlugin/Public/EPPSkyCreatorMoonPositionType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEPPSkyCreatorMoonPositionType() {}
// Cross Module References
	PPSKYCREATORPLUGIN_API UEnum* Z_Construct_UEnum_PPSkyCreatorPlugin_EPPSkyCreatorMoonPositionType();
	UPackage* Z_Construct_UPackage__Script_PPSkyCreatorPlugin();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPPSkyCreatorMoonPositionType;
	static UEnum* EPPSkyCreatorMoonPositionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPPSkyCreatorMoonPositionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPPSkyCreatorMoonPositionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PPSkyCreatorPlugin_EPPSkyCreatorMoonPositionType, Z_Construct_UPackage__Script_PPSkyCreatorPlugin(), TEXT("EPPSkyCreatorMoonPositionType"));
		}
		return Z_Registration_Info_UEnum_EPPSkyCreatorMoonPositionType.OuterSingleton;
	}
	template<> PPSKYCREATORPLUGIN_API UEnum* StaticEnum<EPPSkyCreatorMoonPositionType>()
	{
		return EPPSkyCreatorMoonPositionType_StaticEnum();
	}
	struct Z_Construct_UEnum_PPSkyCreatorPlugin_EPPSkyCreatorMoonPositionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PPSkyCreatorPlugin_EPPSkyCreatorMoonPositionType_Statics::Enumerators[] = {
		{ "MoonPositionType_Simple", (int64)MoonPositionType_Simple },
		{ "MoonPositionType_SimpleFixedElevation", (int64)MoonPositionType_SimpleFixedElevation },
		{ "MoonPositionType_Real", (int64)MoonPositionType_Real },
		{ "MoonPositionType_MAX", (int64)MoonPositionType_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PPSkyCreatorPlugin_EPPSkyCreatorMoonPositionType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EPPSkyCreatorMoonPositionType.h" },
		{ "MoonPositionType_MAX.Hidden", "" },
		{ "MoonPositionType_MAX.Name", "MoonPositionType_MAX" },
		{ "MoonPositionType_Real.Name", "MoonPositionType_Real" },
		{ "MoonPositionType_Simple.Name", "MoonPositionType_Simple" },
		{ "MoonPositionType_SimpleFixedElevation.Name", "MoonPositionType_SimpleFixedElevation" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PPSkyCreatorPlugin_EPPSkyCreatorMoonPositionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PPSkyCreatorPlugin,
		nullptr,
		"EPPSkyCreatorMoonPositionType",
		"EPPSkyCreatorMoonPositionType",
		Z_Construct_UEnum_PPSkyCreatorPlugin_EPPSkyCreatorMoonPositionType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PPSkyCreatorPlugin_EPPSkyCreatorMoonPositionType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_PPSkyCreatorPlugin_EPPSkyCreatorMoonPositionType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PPSkyCreatorPlugin_EPPSkyCreatorMoonPositionType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PPSkyCreatorPlugin_EPPSkyCreatorMoonPositionType()
	{
		if (!Z_Registration_Info_UEnum_EPPSkyCreatorMoonPositionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPPSkyCreatorMoonPositionType.InnerSingleton, Z_Construct_UEnum_PPSkyCreatorPlugin_EPPSkyCreatorMoonPositionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPPSkyCreatorMoonPositionType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_EPPSkyCreatorMoonPositionType_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_EPPSkyCreatorMoonPositionType_h_Statics::EnumInfo[] = {
		{ EPPSkyCreatorMoonPositionType_StaticEnum, TEXT("EPPSkyCreatorMoonPositionType"), &Z_Registration_Info_UEnum_EPPSkyCreatorMoonPositionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4174247317U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_EPPSkyCreatorMoonPositionType_h_3544436062(TEXT("/Script/PPSkyCreatorPlugin"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_EPPSkyCreatorMoonPositionType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_EPPSkyCreatorMoonPositionType_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
