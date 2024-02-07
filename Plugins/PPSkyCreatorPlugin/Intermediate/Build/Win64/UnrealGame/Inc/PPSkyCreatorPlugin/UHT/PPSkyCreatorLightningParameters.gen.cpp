// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PPSkyCreatorPlugin/Public/PPSkyCreatorLightningParameters.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePPSkyCreatorLightningParameters() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	PPSKYCREATORPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FPPSkyCreatorLightningParameters();
	UPackage* Z_Construct_UPackage__Script_PPSkyCreatorPlugin();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PPSkyCreatorLightningParameters;
class UScriptStruct* FPPSkyCreatorLightningParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PPSkyCreatorLightningParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PPSkyCreatorLightningParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPPSkyCreatorLightningParameters, Z_Construct_UPackage__Script_PPSkyCreatorPlugin(), TEXT("PPSkyCreatorLightningParameters"));
	}
	return Z_Registration_Info_UScriptStruct_PPSkyCreatorLightningParameters.OuterSingleton;
}
template<> PPSKYCREATORPLUGIN_API UScriptStruct* StaticStruct<FPPSkyCreatorLightningParameters>()
{
	return FPPSkyCreatorLightningParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPPSkyCreatorLightningParameters_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorLightningParameters_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorLightningParameters.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPPSkyCreatorLightningParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPPSkyCreatorLightningParameters>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorLightningParameters_Statics::NewProp_Position_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorLightningParameters" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorLightningParameters.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorLightningParameters_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorLightningParameters, Position), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorLightningParameters_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorLightningParameters_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPPSkyCreatorLightningParameters_Statics::NewProp_Color_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PPSkyCreatorLightningParameters" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorLightningParameters.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPPSkyCreatorLightningParameters_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPPSkyCreatorLightningParameters, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorLightningParameters_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorLightningParameters_Statics::NewProp_Color_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPPSkyCreatorLightningParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorLightningParameters_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPPSkyCreatorLightningParameters_Statics::NewProp_Color,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPPSkyCreatorLightningParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PPSkyCreatorPlugin,
		nullptr,
		&NewStructOps,
		"PPSkyCreatorLightningParameters",
		sizeof(FPPSkyCreatorLightningParameters),
		alignof(FPPSkyCreatorLightningParameters),
		Z_Construct_UScriptStruct_FPPSkyCreatorLightningParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorLightningParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPPSkyCreatorLightningParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPPSkyCreatorLightningParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPPSkyCreatorLightningParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_PPSkyCreatorLightningParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PPSkyCreatorLightningParameters.InnerSingleton, Z_Construct_UScriptStruct_FPPSkyCreatorLightningParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PPSkyCreatorLightningParameters.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPSkyCreatorLightningParameters_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPSkyCreatorLightningParameters_h_Statics::ScriptStructInfo[] = {
		{ FPPSkyCreatorLightningParameters::StaticStruct, Z_Construct_UScriptStruct_FPPSkyCreatorLightningParameters_Statics::NewStructOps, TEXT("PPSkyCreatorLightningParameters"), &Z_Registration_Info_UScriptStruct_PPSkyCreatorLightningParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPPSkyCreatorLightningParameters), 2875362138U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPSkyCreatorLightningParameters_h_690436568(TEXT("/Script/PPSkyCreatorPlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPSkyCreatorLightningParameters_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPSkyCreatorLightningParameters_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
