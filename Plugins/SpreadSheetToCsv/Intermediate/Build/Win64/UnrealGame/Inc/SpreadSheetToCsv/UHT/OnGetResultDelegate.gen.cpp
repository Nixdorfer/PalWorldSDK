// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpreadSheetToCsv/Public/OnGetResultDelegate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnGetResultDelegate() {}
// Cross Module References
	SPREADSHEETTOCSV_API UClass* Z_Construct_UClass_USpreadSheetImpoter_NoRegister();
	SPREADSHEETTOCSV_API UEnum* Z_Construct_UEnum_SpreadSheetToCsv_EFetchResult();
	SPREADSHEETTOCSV_API UFunction* Z_Construct_UDelegateFunction_SpreadSheetToCsv_OnGetResult__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SpreadSheetToCsv();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SpreadSheetToCsv_OnGetResult__DelegateSignature_Statics
	{
		struct _Script_SpreadSheetToCsv_eventOnGetResult_Parms
		{
			bool bSuccess;
			USpreadSheetImpoter* Importer;
			EFetchResult Status;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSuccess_MetaData[];
#endif
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Importer;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Status_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Status;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SpreadSheetToCsv_OnGetResult__DelegateSignature_Statics::NewProp_bSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UDelegateFunction_SpreadSheetToCsv_OnGetResult__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((_Script_SpreadSheetToCsv_eventOnGetResult_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SpreadSheetToCsv_OnGetResult__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_SpreadSheetToCsv_eventOnGetResult_Parms), &Z_Construct_UDelegateFunction_SpreadSheetToCsv_OnGetResult__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(Z_Construct_UDelegateFunction_SpreadSheetToCsv_OnGetResult__DelegateSignature_Statics::NewProp_bSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SpreadSheetToCsv_OnGetResult__DelegateSignature_Statics::NewProp_bSuccess_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SpreadSheetToCsv_OnGetResult__DelegateSignature_Statics::NewProp_Importer = { "Importer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SpreadSheetToCsv_eventOnGetResult_Parms, Importer), Z_Construct_UClass_USpreadSheetImpoter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SpreadSheetToCsv_OnGetResult__DelegateSignature_Statics::NewProp_Status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SpreadSheetToCsv_OnGetResult__DelegateSignature_Statics::NewProp_Status_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SpreadSheetToCsv_OnGetResult__DelegateSignature_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SpreadSheetToCsv_eventOnGetResult_Parms, Status), Z_Construct_UEnum_SpreadSheetToCsv_EFetchResult, METADATA_PARAMS(Z_Construct_UDelegateFunction_SpreadSheetToCsv_OnGetResult__DelegateSignature_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SpreadSheetToCsv_OnGetResult__DelegateSignature_Statics::NewProp_Status_MetaData)) }; // 249618276
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SpreadSheetToCsv_OnGetResult__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SpreadSheetToCsv_OnGetResult__DelegateSignature_Statics::NewProp_bSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SpreadSheetToCsv_OnGetResult__DelegateSignature_Statics::NewProp_Importer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SpreadSheetToCsv_OnGetResult__DelegateSignature_Statics::NewProp_Status_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SpreadSheetToCsv_OnGetResult__DelegateSignature_Statics::NewProp_Status,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SpreadSheetToCsv_OnGetResult__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnGetResultDelegate.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SpreadSheetToCsv_OnGetResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SpreadSheetToCsv, nullptr, "OnGetResult__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SpreadSheetToCsv_OnGetResult__DelegateSignature_Statics::_Script_SpreadSheetToCsv_eventOnGetResult_Parms), Z_Construct_UDelegateFunction_SpreadSheetToCsv_OnGetResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SpreadSheetToCsv_OnGetResult__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SpreadSheetToCsv_OnGetResult__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SpreadSheetToCsv_OnGetResult__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SpreadSheetToCsv_OnGetResult__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SpreadSheetToCsv_OnGetResult__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
