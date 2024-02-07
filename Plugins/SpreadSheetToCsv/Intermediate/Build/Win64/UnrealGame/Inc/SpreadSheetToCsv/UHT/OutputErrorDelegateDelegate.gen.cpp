// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpreadSheetToCsv/Public/OutputErrorDelegateDelegate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOutputErrorDelegateDelegate() {}
// Cross Module References
	SPREADSHEETTOCSV_API UFunction* Z_Construct_UDelegateFunction_SpreadSheetToCsv_OutputErrorDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SpreadSheetToCsv();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SpreadSheetToCsv_OutputErrorDelegate__DelegateSignature_Statics
	{
		struct _Script_SpreadSheetToCsv_eventOutputErrorDelegate_Parms
		{
			FString ErrorMsg;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMsg_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMsg;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SpreadSheetToCsv_OutputErrorDelegate__DelegateSignature_Statics::NewProp_ErrorMsg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SpreadSheetToCsv_OutputErrorDelegate__DelegateSignature_Statics::NewProp_ErrorMsg = { "ErrorMsg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SpreadSheetToCsv_eventOutputErrorDelegate_Parms, ErrorMsg), METADATA_PARAMS(Z_Construct_UDelegateFunction_SpreadSheetToCsv_OutputErrorDelegate__DelegateSignature_Statics::NewProp_ErrorMsg_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SpreadSheetToCsv_OutputErrorDelegate__DelegateSignature_Statics::NewProp_ErrorMsg_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SpreadSheetToCsv_OutputErrorDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SpreadSheetToCsv_OutputErrorDelegate__DelegateSignature_Statics::NewProp_ErrorMsg,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SpreadSheetToCsv_OutputErrorDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OutputErrorDelegateDelegate.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SpreadSheetToCsv_OutputErrorDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SpreadSheetToCsv, nullptr, "OutputErrorDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SpreadSheetToCsv_OutputErrorDelegate__DelegateSignature_Statics::_Script_SpreadSheetToCsv_eventOutputErrorDelegate_Parms), Z_Construct_UDelegateFunction_SpreadSheetToCsv_OutputErrorDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SpreadSheetToCsv_OutputErrorDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SpreadSheetToCsv_OutputErrorDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SpreadSheetToCsv_OutputErrorDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SpreadSheetToCsv_OutputErrorDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SpreadSheetToCsv_OutputErrorDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
