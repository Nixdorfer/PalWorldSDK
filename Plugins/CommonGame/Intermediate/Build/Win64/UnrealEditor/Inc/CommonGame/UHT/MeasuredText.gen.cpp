// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonGame/Public/MeasuredText.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeasuredText() {}
// Cross Module References
	COMMONGAME_API UScriptStruct* Z_Construct_UScriptStruct_FMeasuredText();
	UPackage* Z_Construct_UPackage__Script_CommonGame();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MeasuredText;
class UScriptStruct* FMeasuredText::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MeasuredText.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MeasuredText.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeasuredText, Z_Construct_UPackage__Script_CommonGame(), TEXT("MeasuredText"));
	}
	return Z_Registration_Info_UScriptStruct_MeasuredText.OuterSingleton;
}
template<> COMMONGAME_API UScriptStruct* StaticStruct<FMeasuredText>()
{
	return FMeasuredText::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMeasuredText_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeasuredText_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MeasuredText.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMeasuredText_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeasuredText>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeasuredText_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CommonGame,
		nullptr,
		&NewStructOps,
		"MeasuredText",
		sizeof(FMeasuredText),
		alignof(FMeasuredText),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMeasuredText_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeasuredText_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMeasuredText()
	{
		if (!Z_Registration_Info_UScriptStruct_MeasuredText.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MeasuredText.InnerSingleton, Z_Construct_UScriptStruct_FMeasuredText_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MeasuredText.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_MeasuredText_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_MeasuredText_h_Statics::ScriptStructInfo[] = {
		{ FMeasuredText::StaticStruct, Z_Construct_UScriptStruct_FMeasuredText_Statics::NewStructOps, TEXT("MeasuredText"), &Z_Registration_Info_UScriptStruct_MeasuredText, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMeasuredText), 426055262U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_MeasuredText_h_2953380980(TEXT("/Script/CommonGame"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_MeasuredText_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_MeasuredText_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
