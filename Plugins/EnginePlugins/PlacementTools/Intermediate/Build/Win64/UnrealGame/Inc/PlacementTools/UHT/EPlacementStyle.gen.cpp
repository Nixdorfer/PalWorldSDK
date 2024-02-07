// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlacementTools/Public/EPlacementStyle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEPlacementStyle() {}
// Cross Module References
	PLACEMENTTOOLS_API UEnum* Z_Construct_UEnum_PlacementTools_EPlacementStyle();
	UPackage* Z_Construct_UPackage__Script_PlacementTools();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPlacementStyle;
	static UEnum* EPlacementStyle_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPlacementStyle.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPlacementStyle.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PlacementTools_EPlacementStyle, Z_Construct_UPackage__Script_PlacementTools(), TEXT("EPlacementStyle"));
		}
		return Z_Registration_Info_UEnum_EPlacementStyle.OuterSingleton;
	}
	template<> PLACEMENTTOOLS_API UEnum* StaticEnum<EPlacementStyle>()
	{
		return EPlacementStyle_StaticEnum();
	}
	struct Z_Construct_UEnum_PlacementTools_EPlacementStyle_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PlacementTools_EPlacementStyle_Statics::Enumerators[] = {
		{ "Fade", (int64)Fade },
		{ "FadeOut", (int64)FadeOut },
		{ "FadeIn", (int64)FadeIn },
		{ "CustomFade", (int64)CustomFade },
		{ "Random", (int64)Random },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PlacementTools_EPlacementStyle_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CustomFade.Name", "CustomFade" },
		{ "Fade.Name", "Fade" },
		{ "FadeIn.Name", "FadeIn" },
		{ "FadeOut.Name", "FadeOut" },
		{ "ModuleRelativePath", "Public/EPlacementStyle.h" },
		{ "Random.Name", "Random" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PlacementTools_EPlacementStyle_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PlacementTools,
		nullptr,
		"EPlacementStyle",
		"EPlacementStyle",
		Z_Construct_UEnum_PlacementTools_EPlacementStyle_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PlacementTools_EPlacementStyle_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_PlacementTools_EPlacementStyle_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PlacementTools_EPlacementStyle_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PlacementTools_EPlacementStyle()
	{
		if (!Z_Registration_Info_UEnum_EPlacementStyle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPlacementStyle.InnerSingleton, Z_Construct_UEnum_PlacementTools_EPlacementStyle_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPlacementStyle.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_PlacementTools_Source_PlacementTools_Public_EPlacementStyle_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_PlacementTools_Source_PlacementTools_Public_EPlacementStyle_h_Statics::EnumInfo[] = {
		{ EPlacementStyle_StaticEnum, TEXT("EPlacementStyle"), &Z_Registration_Info_UEnum_EPlacementStyle, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1450609921U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_PlacementTools_Source_PlacementTools_Public_EPlacementStyle_h_946588848(TEXT("/Script/PlacementTools"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_PlacementTools_Source_PlacementTools_Public_EPlacementStyle_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_PlacementTools_Source_PlacementTools_Public_EPlacementStyle_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
