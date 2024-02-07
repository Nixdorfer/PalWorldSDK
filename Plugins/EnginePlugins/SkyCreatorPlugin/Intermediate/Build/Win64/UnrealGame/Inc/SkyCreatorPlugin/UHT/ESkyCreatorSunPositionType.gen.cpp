// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SkyCreatorPlugin/Public/ESkyCreatorSunPositionType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESkyCreatorSunPositionType() {}
// Cross Module References
	SKYCREATORPLUGIN_API UEnum* Z_Construct_UEnum_SkyCreatorPlugin_ESkyCreatorSunPositionType();
	UPackage* Z_Construct_UPackage__Script_SkyCreatorPlugin();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESkyCreatorSunPositionType;
	static UEnum* ESkyCreatorSunPositionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESkyCreatorSunPositionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESkyCreatorSunPositionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SkyCreatorPlugin_ESkyCreatorSunPositionType, Z_Construct_UPackage__Script_SkyCreatorPlugin(), TEXT("ESkyCreatorSunPositionType"));
		}
		return Z_Registration_Info_UEnum_ESkyCreatorSunPositionType.OuterSingleton;
	}
	template<> SKYCREATORPLUGIN_API UEnum* StaticEnum<ESkyCreatorSunPositionType>()
	{
		return ESkyCreatorSunPositionType_StaticEnum();
	}
	struct Z_Construct_UEnum_SkyCreatorPlugin_ESkyCreatorSunPositionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SkyCreatorPlugin_ESkyCreatorSunPositionType_Statics::Enumerators[] = {
		{ "SunPositionType_Simple", (int64)SunPositionType_Simple },
		{ "SunPositionType_Real", (int64)SunPositionType_Real },
		{ "SunPositionType_MAX", (int64)SunPositionType_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SkyCreatorPlugin_ESkyCreatorSunPositionType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ESkyCreatorSunPositionType.h" },
		{ "SunPositionType_MAX.Hidden", "" },
		{ "SunPositionType_MAX.Name", "SunPositionType_MAX" },
		{ "SunPositionType_Real.Name", "SunPositionType_Real" },
		{ "SunPositionType_Simple.Name", "SunPositionType_Simple" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SkyCreatorPlugin_ESkyCreatorSunPositionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SkyCreatorPlugin,
		nullptr,
		"ESkyCreatorSunPositionType",
		"ESkyCreatorSunPositionType",
		Z_Construct_UEnum_SkyCreatorPlugin_ESkyCreatorSunPositionType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SkyCreatorPlugin_ESkyCreatorSunPositionType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_SkyCreatorPlugin_ESkyCreatorSunPositionType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SkyCreatorPlugin_ESkyCreatorSunPositionType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SkyCreatorPlugin_ESkyCreatorSunPositionType()
	{
		if (!Z_Registration_Info_UEnum_ESkyCreatorSunPositionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESkyCreatorSunPositionType.InnerSingleton, Z_Construct_UEnum_SkyCreatorPlugin_ESkyCreatorSunPositionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESkyCreatorSunPositionType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_ESkyCreatorSunPositionType_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_ESkyCreatorSunPositionType_h_Statics::EnumInfo[] = {
		{ ESkyCreatorSunPositionType_StaticEnum, TEXT("ESkyCreatorSunPositionType"), &Z_Registration_Info_UEnum_ESkyCreatorSunPositionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2553106437U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_ESkyCreatorSunPositionType_h_2733541449(TEXT("/Script/SkyCreatorPlugin"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_ESkyCreatorSunPositionType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_ESkyCreatorSunPositionType_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
