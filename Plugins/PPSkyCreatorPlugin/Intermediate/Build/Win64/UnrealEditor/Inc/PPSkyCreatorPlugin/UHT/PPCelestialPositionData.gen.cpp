// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PPSkyCreatorPlugin/Public/PPCelestialPositionData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePPCelestialPositionData() {}
// Cross Module References
	PPSKYCREATORPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FPPCelestialPositionData();
	UPackage* Z_Construct_UPackage__Script_PPSkyCreatorPlugin();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PPCelestialPositionData;
class UScriptStruct* FPPCelestialPositionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PPCelestialPositionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PPCelestialPositionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPPCelestialPositionData, Z_Construct_UPackage__Script_PPSkyCreatorPlugin(), TEXT("PPCelestialPositionData"));
	}
	return Z_Registration_Info_UScriptStruct_PPCelestialPositionData.OuterSingleton;
}
template<> PPSKYCREATORPLUGIN_API UScriptStruct* StaticStruct<FPPCelestialPositionData>()
{
	return FPPCelestialPositionData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPPCelestialPositionData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Elevation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Elevation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Azimuth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Azimuth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPCelestialPositionData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PPCelestialPositionData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPPCelestialPositionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPPCelestialPositionData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPCelestialPositionData_Statics::NewProp_Elevation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPCelestialPositionData" },
		{ "ModuleRelativePath", "Public/PPCelestialPositionData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPCelestialPositionData_Statics::NewProp_Elevation = { "Elevation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPCelestialPositionData, Elevation), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPCelestialPositionData_Statics::NewProp_Elevation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPCelestialPositionData_Statics::NewProp_Elevation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPCelestialPositionData_Statics::NewProp_Azimuth_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPCelestialPositionData" },
		{ "ModuleRelativePath", "Public/PPCelestialPositionData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPPCelestialPositionData_Statics::NewProp_Azimuth = { "Azimuth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPCelestialPositionData, Azimuth), METADATA_PARAMS(Z_Construct_UScriptStruct_FPPCelestialPositionData_Statics::NewProp_Azimuth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPCelestialPositionData_Statics::NewProp_Azimuth_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPPCelestialPositionData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPCelestialPositionData_Statics::NewProp_Elevation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPCelestialPositionData_Statics::NewProp_Azimuth,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPPCelestialPositionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PPSkyCreatorPlugin,
		nullptr,
		&NewStructOps,
		"PPCelestialPositionData",
		sizeof(FPPCelestialPositionData),
		alignof(FPPCelestialPositionData),
		Z_Construct_UScriptStruct_FPPCelestialPositionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPCelestialPositionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPPCelestialPositionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPCelestialPositionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPPCelestialPositionData()
	{
		if (!Z_Registration_Info_UScriptStruct_PPCelestialPositionData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PPCelestialPositionData.InnerSingleton, Z_Construct_UScriptStruct_FPPCelestialPositionData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PPCelestialPositionData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPCelestialPositionData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPCelestialPositionData_h_Statics::ScriptStructInfo[] = {
		{ FPPCelestialPositionData::StaticStruct, Z_Construct_UScriptStruct_FPPCelestialPositionData_Statics::NewStructOps, TEXT("PPCelestialPositionData"), &Z_Registration_Info_UScriptStruct_PPCelestialPositionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPPCelestialPositionData), 4161803525U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPCelestialPositionData_h_3336565959(TEXT("/Script/PPSkyCreatorPlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPCelestialPositionData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPCelestialPositionData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
