// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PocketpairUser/Public/PingIP.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePingIP() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	POCKETPAIRUSER_API UClass* Z_Construct_UClass_UPingIP();
	POCKETPAIRUSER_API UClass* Z_Construct_UClass_UPingIP_NoRegister();
	POCKETPAIRUSER_API UFunction* Z_Construct_UDelegateFunction_PocketpairUser_OnPingComplete__DelegateSignature();
	POCKETPAIRUSER_API UFunction* Z_Construct_UDelegateFunction_PocketpairUser_OnPingFailure__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_PocketpairUser();
// End Cross Module References
	DEFINE_FUNCTION(UPingIP::execConstructPingObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPingIP**)Z_Param__Result=UPingIP::ConstructPingObject();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPingIP::execPollThread)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PollThread();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPingIP::execSendPing)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ipAddress);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendPing(Z_Param_ipAddress);
		P_NATIVE_END;
	}
	void UPingIP::StaticRegisterNativesUPingIP()
	{
		UClass* Class = UPingIP::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConstructPingObject", &UPingIP::execConstructPingObject },
			{ "PollThread", &UPingIP::execPollThread },
			{ "SendPing", &UPingIP::execSendPing },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPingIP_ConstructPingObject_Statics
	{
		struct PingIP_eventConstructPingObject_Parms
		{
			UPingIP* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPingIP_ConstructPingObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PingIP_eventConstructPingObject_Parms, ReturnValue), Z_Construct_UClass_UPingIP_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPingIP_ConstructPingObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPingIP_ConstructPingObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPingIP_ConstructPingObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PingIP.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPingIP_ConstructPingObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPingIP, nullptr, "ConstructPingObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPingIP_ConstructPingObject_Statics::PingIP_eventConstructPingObject_Parms), Z_Construct_UFunction_UPingIP_ConstructPingObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPingIP_ConstructPingObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPingIP_ConstructPingObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPingIP_ConstructPingObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPingIP_ConstructPingObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPingIP_ConstructPingObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPingIP_PollThread_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPingIP_PollThread_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PingIP.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPingIP_PollThread_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPingIP, nullptr, "PollThread", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPingIP_PollThread_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPingIP_PollThread_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPingIP_PollThread()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPingIP_PollThread_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPingIP_SendPing_Statics
	{
		struct PingIP_eventSendPing_Parms
		{
			FString ipAddress;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ipAddress_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ipAddress;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPingIP_SendPing_Statics::NewProp_ipAddress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPingIP_SendPing_Statics::NewProp_ipAddress = { "ipAddress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PingIP_eventSendPing_Parms, ipAddress), METADATA_PARAMS(Z_Construct_UFunction_UPingIP_SendPing_Statics::NewProp_ipAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPingIP_SendPing_Statics::NewProp_ipAddress_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPingIP_SendPing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPingIP_SendPing_Statics::NewProp_ipAddress,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPingIP_SendPing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PingIP.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPingIP_SendPing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPingIP, nullptr, "SendPing", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPingIP_SendPing_Statics::PingIP_eventSendPing_Parms), Z_Construct_UFunction_UPingIP_SendPing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPingIP_SendPing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPingIP_SendPing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPingIP_SendPing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPingIP_SendPing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPingIP_SendPing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPingIP);
	UClass* Z_Construct_UClass_UPingIP_NoRegister()
	{
		return UPingIP::StaticClass();
	}
	struct Z_Construct_UClass_UPingIP_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPingComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPingComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPingFailure_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPingFailure;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPingIP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PocketpairUser,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPingIP_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPingIP_ConstructPingObject, "ConstructPingObject" }, // 1219522374
		{ &Z_Construct_UFunction_UPingIP_PollThread, "PollThread" }, // 3844590188
		{ &Z_Construct_UFunction_UPingIP_SendPing, "SendPing" }, // 1113857587
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPingIP_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PingIP.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PingIP.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPingIP_Statics::NewProp_OnPingComplete_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PingIP" },
		{ "ModuleRelativePath", "Public/PingIP.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPingIP_Statics::NewProp_OnPingComplete = { "OnPingComplete", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPingIP, OnPingComplete), Z_Construct_UDelegateFunction_PocketpairUser_OnPingComplete__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPingIP_Statics::NewProp_OnPingComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPingIP_Statics::NewProp_OnPingComplete_MetaData)) }; // 3774464306
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPingIP_Statics::NewProp_OnPingFailure_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PingIP" },
		{ "ModuleRelativePath", "Public/PingIP.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPingIP_Statics::NewProp_OnPingFailure = { "OnPingFailure", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPingIP, OnPingFailure), Z_Construct_UDelegateFunction_PocketpairUser_OnPingFailure__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPingIP_Statics::NewProp_OnPingFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPingIP_Statics::NewProp_OnPingFailure_MetaData)) }; // 186316861
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPingIP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPingIP_Statics::NewProp_OnPingComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPingIP_Statics::NewProp_OnPingFailure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPingIP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPingIP>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPingIP_Statics::ClassParams = {
		&UPingIP::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPingIP_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPingIP_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPingIP_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPingIP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPingIP()
	{
		if (!Z_Registration_Info_UClass_UPingIP.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPingIP.OuterSingleton, Z_Construct_UClass_UPingIP_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPingIP.OuterSingleton;
	}
	template<> POCKETPAIRUSER_API UClass* StaticClass<UPingIP>()
	{
		return UPingIP::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPingIP);
	UPingIP::~UPingIP() {}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_PingIP_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_PingIP_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPingIP, UPingIP::StaticClass, TEXT("UPingIP"), &Z_Registration_Info_UClass_UPingIP, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPingIP), 161655443U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_PingIP_h_1738123306(TEXT("/Script/PocketpairUser"),
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_PingIP_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_PingIP_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
