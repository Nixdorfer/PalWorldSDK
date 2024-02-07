// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonGame/Public/CommonMessagingResultMCDelegateDelegate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonMessagingResultMCDelegateDelegate() {}
// Cross Module References
	COMMONGAME_API UEnum* Z_Construct_UEnum_CommonGame_ECommonMessagingResult();
	COMMONGAME_API UFunction* Z_Construct_UDelegateFunction_CommonGame_CommonMessagingResultMCDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_CommonGame();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_CommonGame_CommonMessagingResultMCDelegate__DelegateSignature_Statics
	{
		struct _Script_CommonGame_eventCommonMessagingResultMCDelegate_Parms
		{
			ECommonMessagingResult Result;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_CommonGame_CommonMessagingResultMCDelegate__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_CommonGame_CommonMessagingResultMCDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_CommonGame_eventCommonMessagingResultMCDelegate_Parms, Result), Z_Construct_UEnum_CommonGame_ECommonMessagingResult, METADATA_PARAMS(nullptr, 0) }; // 1065910484
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CommonGame_CommonMessagingResultMCDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CommonGame_CommonMessagingResultMCDelegate__DelegateSignature_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CommonGame_CommonMessagingResultMCDelegate__DelegateSignature_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CommonGame_CommonMessagingResultMCDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonMessagingResultMCDelegateDelegate.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CommonGame_CommonMessagingResultMCDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CommonGame, nullptr, "CommonMessagingResultMCDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_CommonGame_CommonMessagingResultMCDelegate__DelegateSignature_Statics::_Script_CommonGame_eventCommonMessagingResultMCDelegate_Parms), Z_Construct_UDelegateFunction_CommonGame_CommonMessagingResultMCDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CommonGame_CommonMessagingResultMCDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CommonGame_CommonMessagingResultMCDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CommonGame_CommonMessagingResultMCDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CommonGame_CommonMessagingResultMCDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CommonGame_CommonMessagingResultMCDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
