// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PPSkyCreatorPlugin/Public/OnLightningStrikeDelegate2.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnLightningStrikeDelegate2() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	PPSKYCREATORPLUGIN_API UFunction* Z_Construct_UDelegateFunction_PPSkyCreatorPlugin_OnLightningStrike__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_PPSkyCreatorPlugin();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_PPSkyCreatorPlugin_OnLightningStrike__DelegateSignature_Statics
	{
		struct _Script_PPSkyCreatorPlugin_eventOnLightningStrike_Parms
		{
			FVector LightningPosition;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_LightningPosition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_PPSkyCreatorPlugin_OnLightningStrike__DelegateSignature_Statics::NewProp_LightningPosition = { "LightningPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_PPSkyCreatorPlugin_eventOnLightningStrike_Parms, LightningPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PPSkyCreatorPlugin_OnLightningStrike__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PPSkyCreatorPlugin_OnLightningStrike__DelegateSignature_Statics::NewProp_LightningPosition,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PPSkyCreatorPlugin_OnLightningStrike__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnLightningStrikeDelegate2.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PPSkyCreatorPlugin_OnLightningStrike__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PPSkyCreatorPlugin, nullptr, "OnLightningStrike__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_PPSkyCreatorPlugin_OnLightningStrike__DelegateSignature_Statics::_Script_PPSkyCreatorPlugin_eventOnLightningStrike_Parms), Z_Construct_UDelegateFunction_PPSkyCreatorPlugin_OnLightningStrike__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PPSkyCreatorPlugin_OnLightningStrike__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_PPSkyCreatorPlugin_OnLightningStrike__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PPSkyCreatorPlugin_OnLightningStrike__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_PPSkyCreatorPlugin_OnLightningStrike__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PPSkyCreatorPlugin_OnLightningStrike__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
