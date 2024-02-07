// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SkyCreatorPlugin/Public/SkyCreatorLightningParameters.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkyCreatorLightningParameters() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	SKYCREATORPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSkyCreatorLightningParameters();
	UPackage* Z_Construct_UPackage__Script_SkyCreatorPlugin();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SkyCreatorLightningParameters;
class UScriptStruct* FSkyCreatorLightningParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SkyCreatorLightningParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SkyCreatorLightningParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkyCreatorLightningParameters, Z_Construct_UPackage__Script_SkyCreatorPlugin(), TEXT("SkyCreatorLightningParameters"));
	}
	return Z_Registration_Info_UScriptStruct_SkyCreatorLightningParameters.OuterSingleton;
}
template<> SKYCREATORPLUGIN_API UScriptStruct* StaticStruct<FSkyCreatorLightningParameters>()
{
	return FSkyCreatorLightningParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSkyCreatorLightningParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorLightningParameters_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SkyCreatorLightningParameters.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkyCreatorLightningParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkyCreatorLightningParameters>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorLightningParameters_Statics::NewProp_Position_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorLightningParameters" },
		{ "ModuleRelativePath", "Public/SkyCreatorLightningParameters.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorLightningParameters_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorLightningParameters, Position), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorLightningParameters_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorLightningParameters_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyCreatorLightningParameters_Statics::NewProp_Color_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SkyCreatorLightningParameters" },
		{ "ModuleRelativePath", "Public/SkyCreatorLightningParameters.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyCreatorLightningParameters_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkyCreatorLightningParameters, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorLightningParameters_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorLightningParameters_Statics::NewProp_Color_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkyCreatorLightningParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorLightningParameters_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyCreatorLightningParameters_Statics::NewProp_Color,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkyCreatorLightningParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SkyCreatorPlugin,
		nullptr,
		&NewStructOps,
		"SkyCreatorLightningParameters",
		sizeof(FSkyCreatorLightningParameters),
		alignof(FSkyCreatorLightningParameters),
		Z_Construct_UScriptStruct_FSkyCreatorLightningParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorLightningParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSkyCreatorLightningParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyCreatorLightningParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSkyCreatorLightningParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_SkyCreatorLightningParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SkyCreatorLightningParameters.InnerSingleton, Z_Construct_UScriptStruct_FSkyCreatorLightningParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SkyCreatorLightningParameters.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorLightningParameters_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorLightningParameters_h_Statics::ScriptStructInfo[] = {
		{ FSkyCreatorLightningParameters::StaticStruct, Z_Construct_UScriptStruct_FSkyCreatorLightningParameters_Statics::NewStructOps, TEXT("SkyCreatorLightningParameters"), &Z_Registration_Info_UScriptStruct_SkyCreatorLightningParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkyCreatorLightningParameters), 1168982529U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorLightningParameters_h_351509251(TEXT("/Script/SkyCreatorPlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorLightningParameters_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorLightningParameters_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
