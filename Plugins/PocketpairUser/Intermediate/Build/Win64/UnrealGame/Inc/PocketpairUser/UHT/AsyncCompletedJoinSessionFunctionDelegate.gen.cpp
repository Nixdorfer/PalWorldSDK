// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PocketpairUser/Public/AsyncCompletedJoinSessionFunctionDelegate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsyncCompletedJoinSessionFunctionDelegate() {}
// Cross Module References
	POCKETPAIRUSER_API UEnum* Z_Construct_UEnum_PocketpairUser_JoinSessionResultType();
	POCKETPAIRUSER_API UFunction* Z_Construct_UDelegateFunction_PocketpairUser_AsyncCompletedJoinSessionFunction__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_PocketpairUser();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_PocketpairUser_AsyncCompletedJoinSessionFunction__DelegateSignature_Statics
	{
		struct _Script_PocketpairUser_eventAsyncCompletedJoinSessionFunction_Parms
		{
			bool IsSuccess;
			JoinSessionResultType Type;
		};
		static void NewProp_IsSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsSuccess;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_PocketpairUser_AsyncCompletedJoinSessionFunction__DelegateSignature_Statics::NewProp_IsSuccess_SetBit(void* Obj)
	{
		((_Script_PocketpairUser_eventAsyncCompletedJoinSessionFunction_Parms*)Obj)->IsSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_PocketpairUser_AsyncCompletedJoinSessionFunction__DelegateSignature_Statics::NewProp_IsSuccess = { "IsSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_PocketpairUser_eventAsyncCompletedJoinSessionFunction_Parms), &Z_Construct_UDelegateFunction_PocketpairUser_AsyncCompletedJoinSessionFunction__DelegateSignature_Statics::NewProp_IsSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_PocketpairUser_AsyncCompletedJoinSessionFunction__DelegateSignature_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_PocketpairUser_AsyncCompletedJoinSessionFunction__DelegateSignature_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_PocketpairUser_eventAsyncCompletedJoinSessionFunction_Parms, Type), Z_Construct_UEnum_PocketpairUser_JoinSessionResultType, METADATA_PARAMS(nullptr, 0) }; // 3584610619
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PocketpairUser_AsyncCompletedJoinSessionFunction__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PocketpairUser_AsyncCompletedJoinSessionFunction__DelegateSignature_Statics::NewProp_IsSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PocketpairUser_AsyncCompletedJoinSessionFunction__DelegateSignature_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PocketpairUser_AsyncCompletedJoinSessionFunction__DelegateSignature_Statics::NewProp_Type,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PocketpairUser_AsyncCompletedJoinSessionFunction__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncCompletedJoinSessionFunctionDelegate.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PocketpairUser_AsyncCompletedJoinSessionFunction__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PocketpairUser, nullptr, "AsyncCompletedJoinSessionFunction__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_PocketpairUser_AsyncCompletedJoinSessionFunction__DelegateSignature_Statics::_Script_PocketpairUser_eventAsyncCompletedJoinSessionFunction_Parms), Z_Construct_UDelegateFunction_PocketpairUser_AsyncCompletedJoinSessionFunction__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PocketpairUser_AsyncCompletedJoinSessionFunction__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_PocketpairUser_AsyncCompletedJoinSessionFunction__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PocketpairUser_AsyncCompletedJoinSessionFunction__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_PocketpairUser_AsyncCompletedJoinSessionFunction__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PocketpairUser_AsyncCompletedJoinSessionFunction__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
