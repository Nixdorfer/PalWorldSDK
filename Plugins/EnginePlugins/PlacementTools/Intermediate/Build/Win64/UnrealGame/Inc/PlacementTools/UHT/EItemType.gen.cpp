// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlacementTools/Public/EItemType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEItemType() {}
// Cross Module References
	PLACEMENTTOOLS_API UEnum* Z_Construct_UEnum_PlacementTools_EItemType();
	UPackage* Z_Construct_UPackage__Script_PlacementTools();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EItemType;
	static UEnum* EItemType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EItemType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EItemType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PlacementTools_EItemType, Z_Construct_UPackage__Script_PlacementTools(), TEXT("EItemType"));
		}
		return Z_Registration_Info_UEnum_EItemType.OuterSingleton;
	}
	template<> PLACEMENTTOOLS_API UEnum* StaticEnum<EItemType>()
	{
		return EItemType_StaticEnum();
	}
	struct Z_Construct_UEnum_PlacementTools_EItemType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PlacementTools_EItemType_Statics::Enumerators[] = {
		{ "Actor", (int64)Actor },
		{ "StaticMesh", (int64)StaticMesh },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PlacementTools_EItemType_Statics::Enum_MetaDataParams[] = {
		{ "Actor.Name", "Actor" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EItemType.h" },
		{ "StaticMesh.Name", "StaticMesh" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PlacementTools_EItemType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PlacementTools,
		nullptr,
		"EItemType",
		"EItemType",
		Z_Construct_UEnum_PlacementTools_EItemType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PlacementTools_EItemType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_PlacementTools_EItemType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PlacementTools_EItemType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PlacementTools_EItemType()
	{
		if (!Z_Registration_Info_UEnum_EItemType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EItemType.InnerSingleton, Z_Construct_UEnum_PlacementTools_EItemType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EItemType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_PlacementTools_Source_PlacementTools_Public_EItemType_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_PlacementTools_Source_PlacementTools_Public_EItemType_h_Statics::EnumInfo[] = {
		{ EItemType_StaticEnum, TEXT("EItemType"), &Z_Registration_Info_UEnum_EItemType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1519370505U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_PlacementTools_Source_PlacementTools_Public_EItemType_h_555683785(TEXT("/Script/PlacementTools"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_PlacementTools_Source_PlacementTools_Public_EItemType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_PlacementTools_Source_PlacementTools_Public_EItemType_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
