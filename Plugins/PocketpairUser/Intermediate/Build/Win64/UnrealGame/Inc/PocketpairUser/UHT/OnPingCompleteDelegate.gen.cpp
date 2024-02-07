// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PocketpairUser/Public/OnPingCompleteDelegate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnPingCompleteDelegate() {}
// Cross Module References
	POCKETPAIRUSER_API UClass* Z_Construct_UClass_UPingIP_NoRegister();
	POCKETPAIRUSER_API UFunction* Z_Construct_UDelegateFunction_PocketpairUser_OnPingComplete__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_PocketpairUser();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_PocketpairUser_OnPingComplete__DelegateSignature_Statics
	{
		struct _Script_PocketpairUser_eventOnPingComplete_Parms
		{
			UPingIP* PingOperation;
			FString HostName;
			int32 TimeMS;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PingOperation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HostName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_HostName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TimeMS;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_PocketpairUser_OnPingComplete__DelegateSignature_Statics::NewProp_PingOperation = { "PingOperation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_PocketpairUser_eventOnPingComplete_Parms, PingOperation), Z_Construct_UClass_UPingIP_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PocketpairUser_OnPingComplete__DelegateSignature_Statics::NewProp_HostName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_PocketpairUser_OnPingComplete__DelegateSignature_Statics::NewProp_HostName = { "HostName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_PocketpairUser_eventOnPingComplete_Parms, HostName), METADATA_PARAMS(Z_Construct_UDelegateFunction_PocketpairUser_OnPingComplete__DelegateSignature_Statics::NewProp_HostName_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PocketpairUser_OnPingComplete__DelegateSignature_Statics::NewProp_HostName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_PocketpairUser_OnPingComplete__DelegateSignature_Statics::NewProp_TimeMS = { "TimeMS", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_PocketpairUser_eventOnPingComplete_Parms, TimeMS), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PocketpairUser_OnPingComplete__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PocketpairUser_OnPingComplete__DelegateSignature_Statics::NewProp_PingOperation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PocketpairUser_OnPingComplete__DelegateSignature_Statics::NewProp_HostName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PocketpairUser_OnPingComplete__DelegateSignature_Statics::NewProp_TimeMS,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PocketpairUser_OnPingComplete__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnPingCompleteDelegate.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PocketpairUser_OnPingComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PocketpairUser, nullptr, "OnPingComplete__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_PocketpairUser_OnPingComplete__DelegateSignature_Statics::_Script_PocketpairUser_eventOnPingComplete_Parms), Z_Construct_UDelegateFunction_PocketpairUser_OnPingComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PocketpairUser_OnPingComplete__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_PocketpairUser_OnPingComplete__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PocketpairUser_OnPingComplete__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_PocketpairUser_OnPingComplete__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PocketpairUser_OnPingComplete__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
