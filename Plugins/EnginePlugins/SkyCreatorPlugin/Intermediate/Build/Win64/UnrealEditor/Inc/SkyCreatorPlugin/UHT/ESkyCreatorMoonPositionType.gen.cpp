// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SkyCreatorPlugin/Public/ESkyCreatorMoonPositionType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESkyCreatorMoonPositionType() {}
// Cross Module References
	SKYCREATORPLUGIN_API UEnum* Z_Construct_UEnum_SkyCreatorPlugin_ESkyCreatorMoonPositionType();
	UPackage* Z_Construct_UPackage__Script_SkyCreatorPlugin();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESkyCreatorMoonPositionType;
	static UEnum* ESkyCreatorMoonPositionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESkyCreatorMoonPositionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESkyCreatorMoonPositionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SkyCreatorPlugin_ESkyCreatorMoonPositionType, Z_Construct_UPackage__Script_SkyCreatorPlugin(), TEXT("ESkyCreatorMoonPositionType"));
		}
		return Z_Registration_Info_UEnum_ESkyCreatorMoonPositionType.OuterSingleton;
	}
	template<> SKYCREATORPLUGIN_API UEnum* StaticEnum<ESkyCreatorMoonPositionType>()
	{
		return ESkyCreatorMoonPositionType_StaticEnum();
	}
	struct Z_Construct_UEnum_SkyCreatorPlugin_ESkyCreatorMoonPositionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SkyCreatorPlugin_ESkyCreatorMoonPositionType_Statics::Enumerators[] = {
		{ "MoonPositionType_Simple", (int64)MoonPositionType_Simple },
		{ "MoonPositionType_SimpleFixedElevation", (int64)MoonPositionType_SimpleFixedElevation },
		{ "MoonPositionType_Real", (int64)MoonPositionType_Real },
		{ "MoonPositionType_MAX", (int64)MoonPositionType_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SkyCreatorPlugin_ESkyCreatorMoonPositionType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ESkyCreatorMoonPositionType.h" },
		{ "MoonPositionType_MAX.Hidden", "" },
		{ "MoonPositionType_MAX.Name", "MoonPositionType_MAX" },
		{ "MoonPositionType_Real.Name", "MoonPositionType_Real" },
		{ "MoonPositionType_Simple.Name", "MoonPositionType_Simple" },
		{ "MoonPositionType_SimpleFixedElevation.Name", "MoonPositionType_SimpleFixedElevation" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SkyCreatorPlugin_ESkyCreatorMoonPositionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SkyCreatorPlugin,
		nullptr,
		"ESkyCreatorMoonPositionType",
		"ESkyCreatorMoonPositionType",
		Z_Construct_UEnum_SkyCreatorPlugin_ESkyCreatorMoonPositionType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SkyCreatorPlugin_ESkyCreatorMoonPositionType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_SkyCreatorPlugin_ESkyCreatorMoonPositionType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SkyCreatorPlugin_ESkyCreatorMoonPositionType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SkyCreatorPlugin_ESkyCreatorMoonPositionType()
	{
		if (!Z_Registration_Info_UEnum_ESkyCreatorMoonPositionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESkyCreatorMoonPositionType.InnerSingleton, Z_Construct_UEnum_SkyCreatorPlugin_ESkyCreatorMoonPositionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESkyCreatorMoonPositionType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_ESkyCreatorMoonPositionType_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_ESkyCreatorMoonPositionType_h_Statics::EnumInfo[] = {
		{ ESkyCreatorMoonPositionType_StaticEnum, TEXT("ESkyCreatorMoonPositionType"), &Z_Registration_Info_UEnum_ESkyCreatorMoonPositionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2526260272U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_ESkyCreatorMoonPositionType_h_2530742244(TEXT("/Script/SkyCreatorPlugin"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_ESkyCreatorMoonPositionType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_ESkyCreatorMoonPositionType_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
