// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlacementTools/Public/EPlacementMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEPlacementMode() {}
// Cross Module References
	PLACEMENTTOOLS_API UEnum* Z_Construct_UEnum_PlacementTools_EPlacementMode();
	UPackage* Z_Construct_UPackage__Script_PlacementTools();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPlacementMode;
	static UEnum* EPlacementMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPlacementMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPlacementMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PlacementTools_EPlacementMode, Z_Construct_UPackage__Script_PlacementTools(), TEXT("EPlacementMode"));
		}
		return Z_Registration_Info_UEnum_EPlacementMode.OuterSingleton;
	}
	template<> PLACEMENTTOOLS_API UEnum* StaticEnum<EPlacementMode>()
	{
		return EPlacementMode_StaticEnum();
	}
	struct Z_Construct_UEnum_PlacementTools_EPlacementMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PlacementTools_EPlacementMode_Statics::Enumerators[] = {
		{ "Free", (int64)Free },
		{ "Surface", (int64)Surface },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PlacementTools_EPlacementMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Free.Name", "Free" },
		{ "ModuleRelativePath", "Public/EPlacementMode.h" },
		{ "Surface.Name", "Surface" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PlacementTools_EPlacementMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PlacementTools,
		nullptr,
		"EPlacementMode",
		"EPlacementMode",
		Z_Construct_UEnum_PlacementTools_EPlacementMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PlacementTools_EPlacementMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_PlacementTools_EPlacementMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PlacementTools_EPlacementMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PlacementTools_EPlacementMode()
	{
		if (!Z_Registration_Info_UEnum_EPlacementMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPlacementMode.InnerSingleton, Z_Construct_UEnum_PlacementTools_EPlacementMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPlacementMode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_PlacementTools_Source_PlacementTools_Public_EPlacementMode_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_PlacementTools_Source_PlacementTools_Public_EPlacementMode_h_Statics::EnumInfo[] = {
		{ EPlacementMode_StaticEnum, TEXT("EPlacementMode"), &Z_Registration_Info_UEnum_EPlacementMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 960145344U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_PlacementTools_Source_PlacementTools_Public_EPlacementMode_h_2235693497(TEXT("/Script/PlacementTools"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_PlacementTools_Source_PlacementTools_Public_EPlacementMode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_PlacementTools_Source_PlacementTools_Public_EPlacementMode_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
