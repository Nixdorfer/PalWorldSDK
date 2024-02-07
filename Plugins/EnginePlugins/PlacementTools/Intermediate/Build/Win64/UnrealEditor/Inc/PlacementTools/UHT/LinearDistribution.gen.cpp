// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlacementTools/Public/LinearDistribution.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLinearDistribution() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	PLACEMENTTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FLinearDistribution();
	UPackage* Z_Construct_UPackage__Script_PlacementTools();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LinearDistribution;
class UScriptStruct* FLinearDistribution::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LinearDistribution.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LinearDistribution.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLinearDistribution, Z_Construct_UPackage__Script_PlacementTools(), TEXT("LinearDistribution"));
	}
	return Z_Registration_Info_UScriptStruct_LinearDistribution.OuterSingleton;
}
template<> PLACEMENTTOOLS_API UScriptStruct* StaticStruct<FLinearDistribution>()
{
	return FLinearDistribution::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLinearDistribution_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurvePoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurvePoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CurvePoints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLinearDistribution_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LinearDistribution.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLinearDistribution_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLinearDistribution>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLinearDistribution_Statics::NewProp_CurvePoints_Inner = { "CurvePoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLinearDistribution_Statics::NewProp_CurvePoints_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LinearDistribution" },
		{ "ModuleRelativePath", "Public/LinearDistribution.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLinearDistribution_Statics::NewProp_CurvePoints = { "CurvePoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLinearDistribution, CurvePoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLinearDistribution_Statics::NewProp_CurvePoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLinearDistribution_Statics::NewProp_CurvePoints_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLinearDistribution_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLinearDistribution_Statics::NewProp_CurvePoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLinearDistribution_Statics::NewProp_CurvePoints,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLinearDistribution_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlacementTools,
		nullptr,
		&NewStructOps,
		"LinearDistribution",
		sizeof(FLinearDistribution),
		alignof(FLinearDistribution),
		Z_Construct_UScriptStruct_FLinearDistribution_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLinearDistribution_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLinearDistribution_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLinearDistribution_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLinearDistribution()
	{
		if (!Z_Registration_Info_UScriptStruct_LinearDistribution.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LinearDistribution.InnerSingleton, Z_Construct_UScriptStruct_FLinearDistribution_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LinearDistribution.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_PlacementTools_Source_PlacementTools_Public_LinearDistribution_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_PlacementTools_Source_PlacementTools_Public_LinearDistribution_h_Statics::ScriptStructInfo[] = {
		{ FLinearDistribution::StaticStruct, Z_Construct_UScriptStruct_FLinearDistribution_Statics::NewStructOps, TEXT("LinearDistribution"), &Z_Registration_Info_UScriptStruct_LinearDistribution, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLinearDistribution), 229009543U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_PlacementTools_Source_PlacementTools_Public_LinearDistribution_h_4260553937(TEXT("/Script/PlacementTools"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_PlacementTools_Source_PlacementTools_Public_LinearDistribution_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_PlacementTools_Source_PlacementTools_Public_LinearDistribution_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
