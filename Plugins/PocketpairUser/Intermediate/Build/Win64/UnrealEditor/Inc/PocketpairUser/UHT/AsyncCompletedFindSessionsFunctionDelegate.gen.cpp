// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PocketpairUser/Public/AsyncCompletedFindSessionsFunctionDelegate.h"
#include "OnlineSubsystemUtils/Classes/FindSessionsCallbackProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsyncCompletedFindSessionsFunctionDelegate() {}
// Cross Module References
	ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintSessionResult();
	POCKETPAIRUSER_API UFunction* Z_Construct_UDelegateFunction_PocketpairUser_AsyncCompletedFindSessionsFunction__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_PocketpairUser();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_PocketpairUser_AsyncCompletedFindSessionsFunction__DelegateSignature_Statics
	{
		struct _Script_PocketpairUser_eventAsyncCompletedFindSessionsFunction_Parms
		{
			bool IsSuccess;
			TArray<FBlueprintSessionResult> Results;
			FString ErrorStr;
		};
		static void NewProp_IsSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsSuccess;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Results_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Results_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Results;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorStr_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorStr;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_PocketpairUser_AsyncCompletedFindSessionsFunction__DelegateSignature_Statics::NewProp_IsSuccess_SetBit(void* Obj)
	{
		((_Script_PocketpairUser_eventAsyncCompletedFindSessionsFunction_Parms*)Obj)->IsSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_PocketpairUser_AsyncCompletedFindSessionsFunction__DelegateSignature_Statics::NewProp_IsSuccess = { "IsSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_PocketpairUser_eventAsyncCompletedFindSessionsFunction_Parms), &Z_Construct_UDelegateFunction_PocketpairUser_AsyncCompletedFindSessionsFunction__DelegateSignature_Statics::NewProp_IsSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_PocketpairUser_AsyncCompletedFindSessionsFunction__DelegateSignature_Statics::NewProp_Results_Inner = { "Results", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBlueprintSessionResult, METADATA_PARAMS(nullptr, 0) }; // 399430119
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PocketpairUser_AsyncCompletedFindSessionsFunction__DelegateSignature_Statics::NewProp_Results_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_PocketpairUser_AsyncCompletedFindSessionsFunction__DelegateSignature_Statics::NewProp_Results = { "Results", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_PocketpairUser_eventAsyncCompletedFindSessionsFunction_Parms, Results), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_PocketpairUser_AsyncCompletedFindSessionsFunction__DelegateSignature_Statics::NewProp_Results_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PocketpairUser_AsyncCompletedFindSessionsFunction__DelegateSignature_Statics::NewProp_Results_MetaData)) }; // 399430119
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PocketpairUser_AsyncCompletedFindSessionsFunction__DelegateSignature_Statics::NewProp_ErrorStr_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_PocketpairUser_AsyncCompletedFindSessionsFunction__DelegateSignature_Statics::NewProp_ErrorStr = { "ErrorStr", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_PocketpairUser_eventAsyncCompletedFindSessionsFunction_Parms, ErrorStr), METADATA_PARAMS(Z_Construct_UDelegateFunction_PocketpairUser_AsyncCompletedFindSessionsFunction__DelegateSignature_Statics::NewProp_ErrorStr_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PocketpairUser_AsyncCompletedFindSessionsFunction__DelegateSignature_Statics::NewProp_ErrorStr_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PocketpairUser_AsyncCompletedFindSessionsFunction__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PocketpairUser_AsyncCompletedFindSessionsFunction__DelegateSignature_Statics::NewProp_IsSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PocketpairUser_AsyncCompletedFindSessionsFunction__DelegateSignature_Statics::NewProp_Results_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PocketpairUser_AsyncCompletedFindSessionsFunction__DelegateSignature_Statics::NewProp_Results,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PocketpairUser_AsyncCompletedFindSessionsFunction__DelegateSignature_Statics::NewProp_ErrorStr,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PocketpairUser_AsyncCompletedFindSessionsFunction__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncCompletedFindSessionsFunctionDelegate.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PocketpairUser_AsyncCompletedFindSessionsFunction__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PocketpairUser, nullptr, "AsyncCompletedFindSessionsFunction__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_PocketpairUser_AsyncCompletedFindSessionsFunction__DelegateSignature_Statics::_Script_PocketpairUser_eventAsyncCompletedFindSessionsFunction_Parms), Z_Construct_UDelegateFunction_PocketpairUser_AsyncCompletedFindSessionsFunction__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PocketpairUser_AsyncCompletedFindSessionsFunction__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_PocketpairUser_AsyncCompletedFindSessionsFunction__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PocketpairUser_AsyncCompletedFindSessionsFunction__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_PocketpairUser_AsyncCompletedFindSessionsFunction__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PocketpairUser_AsyncCompletedFindSessionsFunction__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
