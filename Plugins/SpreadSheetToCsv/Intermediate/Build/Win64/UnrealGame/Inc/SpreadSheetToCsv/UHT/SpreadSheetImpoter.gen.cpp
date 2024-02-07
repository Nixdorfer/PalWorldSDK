// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpreadSheetToCsv/Public/SpreadSheetImpoter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpreadSheetImpoter() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	SPREADSHEETTOCSV_API UClass* Z_Construct_UClass_USpreadSheetImpoter();
	SPREADSHEETTOCSV_API UClass* Z_Construct_UClass_USpreadSheetImpoter_NoRegister();
	SPREADSHEETTOCSV_API UFunction* Z_Construct_UDelegateFunction_SpreadSheetToCsv_OnGetResult__DelegateSignature();
	SPREADSHEETTOCSV_API UFunction* Z_Construct_UDelegateFunction_SpreadSheetToCsv_OutputErrorDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SpreadSheetToCsv();
// End Cross Module References
	DEFINE_FUNCTION(USpreadSheetImpoter::execCreate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USpreadSheetImpoter**)Z_Param__Result=USpreadSheetImpoter::Create();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpreadSheetImpoter::execCreateSheetUrlString)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_sheetId);
		P_GET_PROPERTY(FNameProperty,Z_Param_sheetNameId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=USpreadSheetImpoter::CreateSheetUrlString(Z_Param_sheetId,Z_Param_sheetNameId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpreadSheetImpoter::execFromString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FromString(Z_Param_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpreadSheetImpoter::execGetRequest)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_sheetId);
		P_GET_PROPERTY(FNameProperty,Z_Param_sheetName);
		P_GET_PROPERTY(FNameProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USpreadSheetImpoter**)Z_Param__Result=USpreadSheetImpoter::GetRequest(Z_Param_sheetId,Z_Param_sheetName,Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpreadSheetImpoter::execIsExistNewRecord)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsExistNewRecord();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpreadSheetImpoter::execPostProcessImport)
	{
		P_GET_UBOOL_REF(Z_Param_Out_bAppliedPostProcess);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PostProcessImport(Z_Param_Out_bAppliedPostProcess);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpreadSheetImpoter::execToCsvString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->ToCsvString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpreadSheetImpoter::execToCsvStringForLocalizedText)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_pickCultureName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->ToCsvStringForLocalizedText(Z_Param_pickCultureName);
		P_NATIVE_END;
	}
	void USpreadSheetImpoter::StaticRegisterNativesUSpreadSheetImpoter()
	{
		UClass* Class = USpreadSheetImpoter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Create", &USpreadSheetImpoter::execCreate },
			{ "CreateSheetUrlString", &USpreadSheetImpoter::execCreateSheetUrlString },
			{ "FromString", &USpreadSheetImpoter::execFromString },
			{ "GetRequest", &USpreadSheetImpoter::execGetRequest },
			{ "IsExistNewRecord", &USpreadSheetImpoter::execIsExistNewRecord },
			{ "PostProcessImport", &USpreadSheetImpoter::execPostProcessImport },
			{ "ToCsvString", &USpreadSheetImpoter::execToCsvString },
			{ "ToCsvStringForLocalizedText", &USpreadSheetImpoter::execToCsvStringForLocalizedText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USpreadSheetImpoter_Create_Statics
	{
		struct SpreadSheetImpoter_eventCreate_Parms
		{
			USpreadSheetImpoter* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpreadSheetImpoter_Create_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpreadSheetImpoter_eventCreate_Parms, ReturnValue), Z_Construct_UClass_USpreadSheetImpoter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpreadSheetImpoter_Create_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpreadSheetImpoter_Create_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpreadSheetImpoter_Create_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpreadSheetImpoter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpreadSheetImpoter_Create_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpreadSheetImpoter, nullptr, "Create", nullptr, nullptr, sizeof(Z_Construct_UFunction_USpreadSheetImpoter_Create_Statics::SpreadSheetImpoter_eventCreate_Parms), Z_Construct_UFunction_USpreadSheetImpoter_Create_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpreadSheetImpoter_Create_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpreadSheetImpoter_Create_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpreadSheetImpoter_Create_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpreadSheetImpoter_Create()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpreadSheetImpoter_Create_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpreadSheetImpoter_CreateSheetUrlString_Statics
	{
		struct SpreadSheetImpoter_eventCreateSheetUrlString_Parms
		{
			FName sheetId;
			FName sheetNameId;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sheetId_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_sheetId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sheetNameId_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_sheetNameId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpreadSheetImpoter_CreateSheetUrlString_Statics::NewProp_sheetId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USpreadSheetImpoter_CreateSheetUrlString_Statics::NewProp_sheetId = { "sheetId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpreadSheetImpoter_eventCreateSheetUrlString_Parms, sheetId), METADATA_PARAMS(Z_Construct_UFunction_USpreadSheetImpoter_CreateSheetUrlString_Statics::NewProp_sheetId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USpreadSheetImpoter_CreateSheetUrlString_Statics::NewProp_sheetId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpreadSheetImpoter_CreateSheetUrlString_Statics::NewProp_sheetNameId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USpreadSheetImpoter_CreateSheetUrlString_Statics::NewProp_sheetNameId = { "sheetNameId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpreadSheetImpoter_eventCreateSheetUrlString_Parms, sheetNameId), METADATA_PARAMS(Z_Construct_UFunction_USpreadSheetImpoter_CreateSheetUrlString_Statics::NewProp_sheetNameId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USpreadSheetImpoter_CreateSheetUrlString_Statics::NewProp_sheetNameId_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USpreadSheetImpoter_CreateSheetUrlString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpreadSheetImpoter_eventCreateSheetUrlString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpreadSheetImpoter_CreateSheetUrlString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpreadSheetImpoter_CreateSheetUrlString_Statics::NewProp_sheetId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpreadSheetImpoter_CreateSheetUrlString_Statics::NewProp_sheetNameId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpreadSheetImpoter_CreateSheetUrlString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpreadSheetImpoter_CreateSheetUrlString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpreadSheetImpoter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpreadSheetImpoter_CreateSheetUrlString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpreadSheetImpoter, nullptr, "CreateSheetUrlString", nullptr, nullptr, sizeof(Z_Construct_UFunction_USpreadSheetImpoter_CreateSheetUrlString_Statics::SpreadSheetImpoter_eventCreateSheetUrlString_Parms), Z_Construct_UFunction_USpreadSheetImpoter_CreateSheetUrlString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpreadSheetImpoter_CreateSheetUrlString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpreadSheetImpoter_CreateSheetUrlString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpreadSheetImpoter_CreateSheetUrlString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpreadSheetImpoter_CreateSheetUrlString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpreadSheetImpoter_CreateSheetUrlString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpreadSheetImpoter_FromString_Statics
	{
		struct SpreadSheetImpoter_eventFromString_Parms
		{
			FString Data;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Data;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpreadSheetImpoter_FromString_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USpreadSheetImpoter_FromString_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpreadSheetImpoter_eventFromString_Parms, Data), METADATA_PARAMS(Z_Construct_UFunction_USpreadSheetImpoter_FromString_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USpreadSheetImpoter_FromString_Statics::NewProp_Data_MetaData)) };
	void Z_Construct_UFunction_USpreadSheetImpoter_FromString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SpreadSheetImpoter_eventFromString_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpreadSheetImpoter_FromString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SpreadSheetImpoter_eventFromString_Parms), &Z_Construct_UFunction_USpreadSheetImpoter_FromString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpreadSheetImpoter_FromString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpreadSheetImpoter_FromString_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpreadSheetImpoter_FromString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpreadSheetImpoter_FromString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpreadSheetImpoter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpreadSheetImpoter_FromString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpreadSheetImpoter, nullptr, "FromString", nullptr, nullptr, sizeof(Z_Construct_UFunction_USpreadSheetImpoter_FromString_Statics::SpreadSheetImpoter_eventFromString_Parms), Z_Construct_UFunction_USpreadSheetImpoter_FromString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpreadSheetImpoter_FromString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpreadSheetImpoter_FromString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpreadSheetImpoter_FromString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpreadSheetImpoter_FromString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpreadSheetImpoter_FromString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpreadSheetImpoter_GetRequest_Statics
	{
		struct SpreadSheetImpoter_eventGetRequest_Parms
		{
			FName sheetId;
			FName sheetName;
			FName Key;
			USpreadSheetImpoter* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sheetId_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_sheetId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sheetName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_sheetName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpreadSheetImpoter_GetRequest_Statics::NewProp_sheetId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USpreadSheetImpoter_GetRequest_Statics::NewProp_sheetId = { "sheetId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpreadSheetImpoter_eventGetRequest_Parms, sheetId), METADATA_PARAMS(Z_Construct_UFunction_USpreadSheetImpoter_GetRequest_Statics::NewProp_sheetId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USpreadSheetImpoter_GetRequest_Statics::NewProp_sheetId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpreadSheetImpoter_GetRequest_Statics::NewProp_sheetName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USpreadSheetImpoter_GetRequest_Statics::NewProp_sheetName = { "sheetName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpreadSheetImpoter_eventGetRequest_Parms, sheetName), METADATA_PARAMS(Z_Construct_UFunction_USpreadSheetImpoter_GetRequest_Statics::NewProp_sheetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USpreadSheetImpoter_GetRequest_Statics::NewProp_sheetName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpreadSheetImpoter_GetRequest_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USpreadSheetImpoter_GetRequest_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpreadSheetImpoter_eventGetRequest_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_USpreadSheetImpoter_GetRequest_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USpreadSheetImpoter_GetRequest_Statics::NewProp_Key_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpreadSheetImpoter_GetRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpreadSheetImpoter_eventGetRequest_Parms, ReturnValue), Z_Construct_UClass_USpreadSheetImpoter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpreadSheetImpoter_GetRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpreadSheetImpoter_GetRequest_Statics::NewProp_sheetId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpreadSheetImpoter_GetRequest_Statics::NewProp_sheetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpreadSheetImpoter_GetRequest_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpreadSheetImpoter_GetRequest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpreadSheetImpoter_GetRequest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpreadSheetImpoter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpreadSheetImpoter_GetRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpreadSheetImpoter, nullptr, "GetRequest", nullptr, nullptr, sizeof(Z_Construct_UFunction_USpreadSheetImpoter_GetRequest_Statics::SpreadSheetImpoter_eventGetRequest_Parms), Z_Construct_UFunction_USpreadSheetImpoter_GetRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpreadSheetImpoter_GetRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpreadSheetImpoter_GetRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpreadSheetImpoter_GetRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpreadSheetImpoter_GetRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpreadSheetImpoter_GetRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpreadSheetImpoter_IsExistNewRecord_Statics
	{
		struct SpreadSheetImpoter_eventIsExistNewRecord_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USpreadSheetImpoter_IsExistNewRecord_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SpreadSheetImpoter_eventIsExistNewRecord_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpreadSheetImpoter_IsExistNewRecord_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SpreadSheetImpoter_eventIsExistNewRecord_Parms), &Z_Construct_UFunction_USpreadSheetImpoter_IsExistNewRecord_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpreadSheetImpoter_IsExistNewRecord_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpreadSheetImpoter_IsExistNewRecord_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpreadSheetImpoter_IsExistNewRecord_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpreadSheetImpoter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpreadSheetImpoter_IsExistNewRecord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpreadSheetImpoter, nullptr, "IsExistNewRecord", nullptr, nullptr, sizeof(Z_Construct_UFunction_USpreadSheetImpoter_IsExistNewRecord_Statics::SpreadSheetImpoter_eventIsExistNewRecord_Parms), Z_Construct_UFunction_USpreadSheetImpoter_IsExistNewRecord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpreadSheetImpoter_IsExistNewRecord_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpreadSheetImpoter_IsExistNewRecord_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpreadSheetImpoter_IsExistNewRecord_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpreadSheetImpoter_IsExistNewRecord()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpreadSheetImpoter_IsExistNewRecord_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpreadSheetImpoter_PostProcessImport_Statics
	{
		struct SpreadSheetImpoter_eventPostProcessImport_Parms
		{
			bool bAppliedPostProcess;
		};
		static void NewProp_bAppliedPostProcess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAppliedPostProcess;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USpreadSheetImpoter_PostProcessImport_Statics::NewProp_bAppliedPostProcess_SetBit(void* Obj)
	{
		((SpreadSheetImpoter_eventPostProcessImport_Parms*)Obj)->bAppliedPostProcess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpreadSheetImpoter_PostProcessImport_Statics::NewProp_bAppliedPostProcess = { "bAppliedPostProcess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SpreadSheetImpoter_eventPostProcessImport_Parms), &Z_Construct_UFunction_USpreadSheetImpoter_PostProcessImport_Statics::NewProp_bAppliedPostProcess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpreadSheetImpoter_PostProcessImport_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpreadSheetImpoter_PostProcessImport_Statics::NewProp_bAppliedPostProcess,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpreadSheetImpoter_PostProcessImport_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpreadSheetImpoter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpreadSheetImpoter_PostProcessImport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpreadSheetImpoter, nullptr, "PostProcessImport", nullptr, nullptr, sizeof(Z_Construct_UFunction_USpreadSheetImpoter_PostProcessImport_Statics::SpreadSheetImpoter_eventPostProcessImport_Parms), Z_Construct_UFunction_USpreadSheetImpoter_PostProcessImport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpreadSheetImpoter_PostProcessImport_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpreadSheetImpoter_PostProcessImport_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpreadSheetImpoter_PostProcessImport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpreadSheetImpoter_PostProcessImport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpreadSheetImpoter_PostProcessImport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpreadSheetImpoter_ToCsvString_Statics
	{
		struct SpreadSheetImpoter_eventToCsvString_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USpreadSheetImpoter_ToCsvString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpreadSheetImpoter_eventToCsvString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpreadSheetImpoter_ToCsvString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpreadSheetImpoter_ToCsvString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpreadSheetImpoter_ToCsvString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpreadSheetImpoter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpreadSheetImpoter_ToCsvString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpreadSheetImpoter, nullptr, "ToCsvString", nullptr, nullptr, sizeof(Z_Construct_UFunction_USpreadSheetImpoter_ToCsvString_Statics::SpreadSheetImpoter_eventToCsvString_Parms), Z_Construct_UFunction_USpreadSheetImpoter_ToCsvString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpreadSheetImpoter_ToCsvString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpreadSheetImpoter_ToCsvString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpreadSheetImpoter_ToCsvString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpreadSheetImpoter_ToCsvString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpreadSheetImpoter_ToCsvString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpreadSheetImpoter_ToCsvStringForLocalizedText_Statics
	{
		struct SpreadSheetImpoter_eventToCsvStringForLocalizedText_Parms
		{
			FString pickCultureName;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pickCultureName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_pickCultureName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpreadSheetImpoter_ToCsvStringForLocalizedText_Statics::NewProp_pickCultureName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USpreadSheetImpoter_ToCsvStringForLocalizedText_Statics::NewProp_pickCultureName = { "pickCultureName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpreadSheetImpoter_eventToCsvStringForLocalizedText_Parms, pickCultureName), METADATA_PARAMS(Z_Construct_UFunction_USpreadSheetImpoter_ToCsvStringForLocalizedText_Statics::NewProp_pickCultureName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USpreadSheetImpoter_ToCsvStringForLocalizedText_Statics::NewProp_pickCultureName_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USpreadSheetImpoter_ToCsvStringForLocalizedText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpreadSheetImpoter_eventToCsvStringForLocalizedText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpreadSheetImpoter_ToCsvStringForLocalizedText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpreadSheetImpoter_ToCsvStringForLocalizedText_Statics::NewProp_pickCultureName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpreadSheetImpoter_ToCsvStringForLocalizedText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpreadSheetImpoter_ToCsvStringForLocalizedText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpreadSheetImpoter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpreadSheetImpoter_ToCsvStringForLocalizedText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpreadSheetImpoter, nullptr, "ToCsvStringForLocalizedText", nullptr, nullptr, sizeof(Z_Construct_UFunction_USpreadSheetImpoter_ToCsvStringForLocalizedText_Statics::SpreadSheetImpoter_eventToCsvStringForLocalizedText_Parms), Z_Construct_UFunction_USpreadSheetImpoter_ToCsvStringForLocalizedText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpreadSheetImpoter_ToCsvStringForLocalizedText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpreadSheetImpoter_ToCsvStringForLocalizedText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpreadSheetImpoter_ToCsvStringForLocalizedText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpreadSheetImpoter_ToCsvStringForLocalizedText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpreadSheetImpoter_ToCsvStringForLocalizedText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpreadSheetImpoter);
	UClass* Z_Construct_UClass_USpreadSheetImpoter_NoRegister()
	{
		return USpreadSheetImpoter::StaticClass();
	}
	struct Z_Construct_UClass_USpreadSheetImpoter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnGetResult_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGetResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorLogger_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ErrorLogger;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetDataTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetDataTable;
		static const UECodeGen_Private::FIntPropertyParams NewProp_IgnoreRowIndexes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IgnoreRowIndexes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IgnoreRowIndexes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoUniqueIdColumnName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AutoUniqueIdColumnName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RowNameHashColumnName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_RowNameHashColumnName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_MetaTagText_IgnoreRow_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MetaTagText_IgnoreRow_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MetaTagText_IgnoreRow;
		static const UECodeGen_Private::FNamePropertyParams NewProp_BlueprintName2ObjectPathColumnNameMap_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_BlueprintName2ObjectPathColumnNameMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintName2ObjectPathColumnNameMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_BlueprintName2ObjectPathColumnNameMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintNamePrefix_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BlueprintNamePrefix;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNoticeMessageAtNewRecordImported_MetaData[];
#endif
		static void NewProp_bNoticeMessageAtNewRecordImported_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNoticeMessageAtNewRecordImported;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpreadSheetImpoter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SpreadSheetToCsv,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USpreadSheetImpoter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USpreadSheetImpoter_Create, "Create" }, // 3687161079
		{ &Z_Construct_UFunction_USpreadSheetImpoter_CreateSheetUrlString, "CreateSheetUrlString" }, // 950123128
		{ &Z_Construct_UFunction_USpreadSheetImpoter_FromString, "FromString" }, // 545624789
		{ &Z_Construct_UFunction_USpreadSheetImpoter_GetRequest, "GetRequest" }, // 420539732
		{ &Z_Construct_UFunction_USpreadSheetImpoter_IsExistNewRecord, "IsExistNewRecord" }, // 1594504830
		{ &Z_Construct_UFunction_USpreadSheetImpoter_PostProcessImport, "PostProcessImport" }, // 3882124843
		{ &Z_Construct_UFunction_USpreadSheetImpoter_ToCsvString, "ToCsvString" }, // 2362657888
		{ &Z_Construct_UFunction_USpreadSheetImpoter_ToCsvStringForLocalizedText, "ToCsvStringForLocalizedText" }, // 2016939484
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpreadSheetImpoter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SpreadSheetImpoter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SpreadSheetImpoter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpreadSheetImpoter_Statics::NewProp_OnGetResult_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SpreadSheetImpoter" },
		{ "ModuleRelativePath", "Public/SpreadSheetImpoter.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USpreadSheetImpoter_Statics::NewProp_OnGetResult = { "OnGetResult", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USpreadSheetImpoter, OnGetResult), Z_Construct_UDelegateFunction_SpreadSheetToCsv_OnGetResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USpreadSheetImpoter_Statics::NewProp_OnGetResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpreadSheetImpoter_Statics::NewProp_OnGetResult_MetaData)) }; // 1234418461
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpreadSheetImpoter_Statics::NewProp_ErrorLogger_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SpreadSheetImpoter" },
		{ "ModuleRelativePath", "Public/SpreadSheetImpoter.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USpreadSheetImpoter_Statics::NewProp_ErrorLogger = { "ErrorLogger", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USpreadSheetImpoter, ErrorLogger), Z_Construct_UDelegateFunction_SpreadSheetToCsv_OutputErrorDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USpreadSheetImpoter_Statics::NewProp_ErrorLogger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpreadSheetImpoter_Statics::NewProp_ErrorLogger_MetaData)) }; // 873730519
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpreadSheetImpoter_Statics::NewProp_TargetDataTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SpreadSheetImpoter" },
		{ "ModuleRelativePath", "Public/SpreadSheetImpoter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpreadSheetImpoter_Statics::NewProp_TargetDataTable = { "TargetDataTable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USpreadSheetImpoter, TargetDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpreadSheetImpoter_Statics::NewProp_TargetDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpreadSheetImpoter_Statics::NewProp_TargetDataTable_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USpreadSheetImpoter_Statics::NewProp_IgnoreRowIndexes_Inner = { "IgnoreRowIndexes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpreadSheetImpoter_Statics::NewProp_IgnoreRowIndexes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SpreadSheetImpoter" },
		{ "ModuleRelativePath", "Public/SpreadSheetImpoter.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USpreadSheetImpoter_Statics::NewProp_IgnoreRowIndexes = { "IgnoreRowIndexes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USpreadSheetImpoter, IgnoreRowIndexes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USpreadSheetImpoter_Statics::NewProp_IgnoreRowIndexes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpreadSheetImpoter_Statics::NewProp_IgnoreRowIndexes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpreadSheetImpoter_Statics::NewProp_AutoUniqueIdColumnName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SpreadSheetImpoter" },
		{ "ModuleRelativePath", "Public/SpreadSheetImpoter.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USpreadSheetImpoter_Statics::NewProp_AutoUniqueIdColumnName = { "AutoUniqueIdColumnName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USpreadSheetImpoter, AutoUniqueIdColumnName), METADATA_PARAMS(Z_Construct_UClass_USpreadSheetImpoter_Statics::NewProp_AutoUniqueIdColumnName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpreadSheetImpoter_Statics::NewProp_AutoUniqueIdColumnName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpreadSheetImpoter_Statics::NewProp_RowNameHashColumnName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SpreadSheetImpoter" },
		{ "ModuleRelativePath", "Public/SpreadSheetImpoter.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USpreadSheetImpoter_Statics::NewProp_RowNameHashColumnName = { "RowNameHashColumnName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USpreadSheetImpoter, RowNameHashColumnName), METADATA_PARAMS(Z_Construct_UClass_USpreadSheetImpoter_Statics::NewProp_RowNameHashColumnName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpreadSheetImpoter_Statics::NewProp_RowNameHashColumnName_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USpreadSheetImpoter_Statics::NewProp_MetaTagText_IgnoreRow_Inner = { "MetaTagText_IgnoreRow", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpreadSheetImpoter_Statics::NewProp_MetaTagText_IgnoreRow_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SpreadSheetImpoter" },
		{ "ModuleRelativePath", "Public/SpreadSheetImpoter.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USpreadSheetImpoter_Statics::NewProp_MetaTagText_IgnoreRow = { "MetaTagText_IgnoreRow", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USpreadSheetImpoter, MetaTagText_IgnoreRow), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USpreadSheetImpoter_Statics::NewProp_MetaTagText_IgnoreRow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpreadSheetImpoter_Statics::NewProp_MetaTagText_IgnoreRow_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USpreadSheetImpoter_Statics::NewProp_BlueprintName2ObjectPathColumnNameMap_ValueProp = { "BlueprintName2ObjectPathColumnNameMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USpreadSheetImpoter_Statics::NewProp_BlueprintName2ObjectPathColumnNameMap_Key_KeyProp = { "BlueprintName2ObjectPathColumnNameMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpreadSheetImpoter_Statics::NewProp_BlueprintName2ObjectPathColumnNameMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SpreadSheetImpoter" },
		{ "ModuleRelativePath", "Public/SpreadSheetImpoter.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USpreadSheetImpoter_Statics::NewProp_BlueprintName2ObjectPathColumnNameMap = { "BlueprintName2ObjectPathColumnNameMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USpreadSheetImpoter, BlueprintName2ObjectPathColumnNameMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USpreadSheetImpoter_Statics::NewProp_BlueprintName2ObjectPathColumnNameMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpreadSheetImpoter_Statics::NewProp_BlueprintName2ObjectPathColumnNameMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpreadSheetImpoter_Statics::NewProp_BlueprintNamePrefix_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SpreadSheetImpoter" },
		{ "ModuleRelativePath", "Public/SpreadSheetImpoter.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USpreadSheetImpoter_Statics::NewProp_BlueprintNamePrefix = { "BlueprintNamePrefix", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USpreadSheetImpoter, BlueprintNamePrefix), METADATA_PARAMS(Z_Construct_UClass_USpreadSheetImpoter_Statics::NewProp_BlueprintNamePrefix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpreadSheetImpoter_Statics::NewProp_BlueprintNamePrefix_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpreadSheetImpoter_Statics::NewProp_bNoticeMessageAtNewRecordImported_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SpreadSheetImpoter" },
		{ "ModuleRelativePath", "Public/SpreadSheetImpoter.h" },
	};
#endif
	void Z_Construct_UClass_USpreadSheetImpoter_Statics::NewProp_bNoticeMessageAtNewRecordImported_SetBit(void* Obj)
	{
		((USpreadSheetImpoter*)Obj)->bNoticeMessageAtNewRecordImported = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpreadSheetImpoter_Statics::NewProp_bNoticeMessageAtNewRecordImported = { "bNoticeMessageAtNewRecordImported", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USpreadSheetImpoter), &Z_Construct_UClass_USpreadSheetImpoter_Statics::NewProp_bNoticeMessageAtNewRecordImported_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpreadSheetImpoter_Statics::NewProp_bNoticeMessageAtNewRecordImported_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpreadSheetImpoter_Statics::NewProp_bNoticeMessageAtNewRecordImported_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpreadSheetImpoter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpreadSheetImpoter_Statics::NewProp_OnGetResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpreadSheetImpoter_Statics::NewProp_ErrorLogger,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpreadSheetImpoter_Statics::NewProp_TargetDataTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpreadSheetImpoter_Statics::NewProp_IgnoreRowIndexes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpreadSheetImpoter_Statics::NewProp_IgnoreRowIndexes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpreadSheetImpoter_Statics::NewProp_AutoUniqueIdColumnName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpreadSheetImpoter_Statics::NewProp_RowNameHashColumnName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpreadSheetImpoter_Statics::NewProp_MetaTagText_IgnoreRow_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpreadSheetImpoter_Statics::NewProp_MetaTagText_IgnoreRow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpreadSheetImpoter_Statics::NewProp_BlueprintName2ObjectPathColumnNameMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpreadSheetImpoter_Statics::NewProp_BlueprintName2ObjectPathColumnNameMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpreadSheetImpoter_Statics::NewProp_BlueprintName2ObjectPathColumnNameMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpreadSheetImpoter_Statics::NewProp_BlueprintNamePrefix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpreadSheetImpoter_Statics::NewProp_bNoticeMessageAtNewRecordImported,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpreadSheetImpoter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpreadSheetImpoter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USpreadSheetImpoter_Statics::ClassParams = {
		&USpreadSheetImpoter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USpreadSheetImpoter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USpreadSheetImpoter_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USpreadSheetImpoter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpreadSheetImpoter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpreadSheetImpoter()
	{
		if (!Z_Registration_Info_UClass_USpreadSheetImpoter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpreadSheetImpoter.OuterSingleton, Z_Construct_UClass_USpreadSheetImpoter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USpreadSheetImpoter.OuterSingleton;
	}
	template<> SPREADSHEETTOCSV_API UClass* StaticClass<USpreadSheetImpoter>()
	{
		return USpreadSheetImpoter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpreadSheetImpoter);
	USpreadSheetImpoter::~USpreadSheetImpoter() {}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_SpreadSheetToCsv_Source_SpreadSheetToCsv_Public_SpreadSheetImpoter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_SpreadSheetToCsv_Source_SpreadSheetToCsv_Public_SpreadSheetImpoter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USpreadSheetImpoter, USpreadSheetImpoter::StaticClass, TEXT("USpreadSheetImpoter"), &Z_Registration_Info_UClass_USpreadSheetImpoter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpreadSheetImpoter), 2792113727U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_SpreadSheetToCsv_Source_SpreadSheetToCsv_Public_SpreadSheetImpoter_h_154445535(TEXT("/Script/SpreadSheetToCsv"),
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_SpreadSheetToCsv_Source_SpreadSheetToCsv_Public_SpreadSheetImpoter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_SpreadSheetToCsv_Source_SpreadSheetToCsv_Public_SpreadSheetImpoter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
