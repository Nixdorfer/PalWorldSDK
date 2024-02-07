// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SkyCreatorPlugin/Public/CelestialPositionData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCelestialPositionData() {}
// Cross Module References
	SKYCREATORPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCelestialPositionData();
	UPackage* Z_Construct_UPackage__Script_SkyCreatorPlugin();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CelestialPositionData;
class UScriptStruct* FCelestialPositionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CelestialPositionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CelestialPositionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCelestialPositionData, Z_Construct_UPackage__Script_SkyCreatorPlugin(), TEXT("CelestialPositionData"));
	}
	return Z_Registration_Info_UScriptStruct_CelestialPositionData.OuterSingleton;
}
template<> SKYCREATORPLUGIN_API UScriptStruct* StaticStruct<FCelestialPositionData>()
{
	return FCelestialPositionData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCelestialPositionData_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCelestialPositionData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CelestialPositionData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCelestialPositionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCelestialPositionData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCelestialPositionData_Statics::NewProp_Elevation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CelestialPositionData" },
		{ "ModuleRelativePath", "Public/CelestialPositionData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCelestialPositionData_Statics::NewProp_Elevation = { "Elevation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCelestialPositionData, Elevation), METADATA_PARAMS(Z_Construct_UScriptStruct_FCelestialPositionData_Statics::NewProp_Elevation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCelestialPositionData_Statics::NewProp_Elevation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCelestialPositionData_Statics::NewProp_Azimuth_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CelestialPositionData" },
		{ "ModuleRelativePath", "Public/CelestialPositionData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCelestialPositionData_Statics::NewProp_Azimuth = { "Azimuth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCelestialPositionData, Azimuth), METADATA_PARAMS(Z_Construct_UScriptStruct_FCelestialPositionData_Statics::NewProp_Azimuth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCelestialPositionData_Statics::NewProp_Azimuth_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCelestialPositionData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCelestialPositionData_Statics::NewProp_Elevation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCelestialPositionData_Statics::NewProp_Azimuth,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCelestialPositionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SkyCreatorPlugin,
		nullptr,
		&NewStructOps,
		"CelestialPositionData",
		sizeof(FCelestialPositionData),
		alignof(FCelestialPositionData),
		Z_Construct_UScriptStruct_FCelestialPositionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCelestialPositionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCelestialPositionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCelestialPositionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCelestialPositionData()
	{
		if (!Z_Registration_Info_UScriptStruct_CelestialPositionData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CelestialPositionData.InnerSingleton, Z_Construct_UScriptStruct_FCelestialPositionData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CelestialPositionData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_CelestialPositionData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_CelestialPositionData_h_Statics::ScriptStructInfo[] = {
		{ FCelestialPositionData::StaticStruct, Z_Construct_UScriptStruct_FCelestialPositionData_Statics::NewStructOps, TEXT("CelestialPositionData"), &Z_Registration_Info_UScriptStruct_CelestialPositionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCelestialPositionData), 3092464801U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_CelestialPositionData_h_1219945743(TEXT("/Script/SkyCreatorPlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_CelestialPositionData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_CelestialPositionData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
