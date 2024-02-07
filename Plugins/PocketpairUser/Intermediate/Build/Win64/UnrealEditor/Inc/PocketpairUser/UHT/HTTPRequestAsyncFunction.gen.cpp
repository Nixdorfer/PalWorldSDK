// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PocketpairUser/Public/HTTPRequestAsyncFunction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHTTPRequestAsyncFunction() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	POCKETPAIRUSER_API UClass* Z_Construct_UClass_UHTTPRequestAsyncFunction();
	POCKETPAIRUSER_API UClass* Z_Construct_UClass_UHTTPRequestAsyncFunction_NoRegister();
	POCKETPAIRUSER_API UClass* Z_Construct_UClass_UPocketpairUserSubsystem_NoRegister();
	POCKETPAIRUSER_API UFunction* Z_Construct_UDelegateFunction_PocketpairUser_AsyncHTTPRequestFunction__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_PocketpairUser();
// End Cross Module References
	DEFINE_FUNCTION(UHTTPRequestAsyncFunction::execHTTPRequestAsyncFunction)
	{
		P_GET_OBJECT(UPocketpairUserSubsystem,Z_Param_Target);
		P_GET_PROPERTY(FStrProperty,Z_Param_URL);
		P_GET_PROPERTY(FStrProperty,Z_Param_Verb);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UHTTPRequestAsyncFunction**)Z_Param__Result=UHTTPRequestAsyncFunction::HTTPRequestAsyncFunction(Z_Param_Target,Z_Param_URL,Z_Param_Verb);
		P_NATIVE_END;
	}
	void UHTTPRequestAsyncFunction::StaticRegisterNativesUHTTPRequestAsyncFunction()
	{
		UClass* Class = UHTTPRequestAsyncFunction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HTTPRequestAsyncFunction", &UHTTPRequestAsyncFunction::execHTTPRequestAsyncFunction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHTTPRequestAsyncFunction_HTTPRequestAsyncFunction_Statics
	{
		struct HTTPRequestAsyncFunction_eventHTTPRequestAsyncFunction_Parms
		{
			UPocketpairUserSubsystem* Target;
			FString URL;
			FString Verb;
			UHTTPRequestAsyncFunction* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Verb_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Verb;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHTTPRequestAsyncFunction_HTTPRequestAsyncFunction_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HTTPRequestAsyncFunction_eventHTTPRequestAsyncFunction_Parms, Target), Z_Construct_UClass_UPocketpairUserSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHTTPRequestAsyncFunction_HTTPRequestAsyncFunction_Statics::NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHTTPRequestAsyncFunction_HTTPRequestAsyncFunction_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HTTPRequestAsyncFunction_eventHTTPRequestAsyncFunction_Parms, URL), METADATA_PARAMS(Z_Construct_UFunction_UHTTPRequestAsyncFunction_HTTPRequestAsyncFunction_Statics::NewProp_URL_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPRequestAsyncFunction_HTTPRequestAsyncFunction_Statics::NewProp_URL_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHTTPRequestAsyncFunction_HTTPRequestAsyncFunction_Statics::NewProp_Verb_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHTTPRequestAsyncFunction_HTTPRequestAsyncFunction_Statics::NewProp_Verb = { "Verb", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HTTPRequestAsyncFunction_eventHTTPRequestAsyncFunction_Parms, Verb), METADATA_PARAMS(Z_Construct_UFunction_UHTTPRequestAsyncFunction_HTTPRequestAsyncFunction_Statics::NewProp_Verb_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPRequestAsyncFunction_HTTPRequestAsyncFunction_Statics::NewProp_Verb_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHTTPRequestAsyncFunction_HTTPRequestAsyncFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HTTPRequestAsyncFunction_eventHTTPRequestAsyncFunction_Parms, ReturnValue), Z_Construct_UClass_UHTTPRequestAsyncFunction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHTTPRequestAsyncFunction_HTTPRequestAsyncFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTTPRequestAsyncFunction_HTTPRequestAsyncFunction_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTTPRequestAsyncFunction_HTTPRequestAsyncFunction_Statics::NewProp_URL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTTPRequestAsyncFunction_HTTPRequestAsyncFunction_Statics::NewProp_Verb,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTTPRequestAsyncFunction_HTTPRequestAsyncFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHTTPRequestAsyncFunction_HTTPRequestAsyncFunction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HTTPRequestAsyncFunction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHTTPRequestAsyncFunction_HTTPRequestAsyncFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHTTPRequestAsyncFunction, nullptr, "HTTPRequestAsyncFunction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHTTPRequestAsyncFunction_HTTPRequestAsyncFunction_Statics::HTTPRequestAsyncFunction_eventHTTPRequestAsyncFunction_Parms), Z_Construct_UFunction_UHTTPRequestAsyncFunction_HTTPRequestAsyncFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPRequestAsyncFunction_HTTPRequestAsyncFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHTTPRequestAsyncFunction_HTTPRequestAsyncFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTPRequestAsyncFunction_HTTPRequestAsyncFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHTTPRequestAsyncFunction_HTTPRequestAsyncFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHTTPRequestAsyncFunction_HTTPRequestAsyncFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHTTPRequestAsyncFunction);
	UClass* Z_Construct_UClass_UHTTPRequestAsyncFunction_NoRegister()
	{
		return UHTTPRequestAsyncFunction::StaticClass();
	}
	struct Z_Construct_UClass_UHTTPRequestAsyncFunction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Completed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Completed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHTTPRequestAsyncFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PocketpairUser,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHTTPRequestAsyncFunction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHTTPRequestAsyncFunction_HTTPRequestAsyncFunction, "HTTPRequestAsyncFunction" }, // 3713779667
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHTTPRequestAsyncFunction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HTTPRequestAsyncFunction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HTTPRequestAsyncFunction.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHTTPRequestAsyncFunction_Statics::NewProp_Completed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HTTPRequestAsyncFunction" },
		{ "ModuleRelativePath", "Public/HTTPRequestAsyncFunction.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHTTPRequestAsyncFunction_Statics::NewProp_Completed = { "Completed", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHTTPRequestAsyncFunction, Completed), Z_Construct_UDelegateFunction_PocketpairUser_AsyncHTTPRequestFunction__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UHTTPRequestAsyncFunction_Statics::NewProp_Completed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHTTPRequestAsyncFunction_Statics::NewProp_Completed_MetaData)) }; // 1709508803
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHTTPRequestAsyncFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHTTPRequestAsyncFunction_Statics::NewProp_Completed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHTTPRequestAsyncFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHTTPRequestAsyncFunction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHTTPRequestAsyncFunction_Statics::ClassParams = {
		&UHTTPRequestAsyncFunction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHTTPRequestAsyncFunction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHTTPRequestAsyncFunction_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHTTPRequestAsyncFunction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHTTPRequestAsyncFunction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHTTPRequestAsyncFunction()
	{
		if (!Z_Registration_Info_UClass_UHTTPRequestAsyncFunction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHTTPRequestAsyncFunction.OuterSingleton, Z_Construct_UClass_UHTTPRequestAsyncFunction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHTTPRequestAsyncFunction.OuterSingleton;
	}
	template<> POCKETPAIRUSER_API UClass* StaticClass<UHTTPRequestAsyncFunction>()
	{
		return UHTTPRequestAsyncFunction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHTTPRequestAsyncFunction);
	UHTTPRequestAsyncFunction::~UHTTPRequestAsyncFunction() {}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_HTTPRequestAsyncFunction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_HTTPRequestAsyncFunction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHTTPRequestAsyncFunction, UHTTPRequestAsyncFunction::StaticClass, TEXT("UHTTPRequestAsyncFunction"), &Z_Registration_Info_UClass_UHTTPRequestAsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHTTPRequestAsyncFunction), 2041586590U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_HTTPRequestAsyncFunction_h_2669375550(TEXT("/Script/PocketpairUser"),
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_HTTPRequestAsyncFunction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_HTTPRequestAsyncFunction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
