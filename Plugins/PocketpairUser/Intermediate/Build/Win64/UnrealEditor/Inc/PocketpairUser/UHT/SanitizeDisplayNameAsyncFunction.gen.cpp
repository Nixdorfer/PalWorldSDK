// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PocketpairUser/Public/SanitizeDisplayNameAsyncFunction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSanitizeDisplayNameAsyncFunction() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	POCKETPAIRUSER_API UClass* Z_Construct_UClass_UPocketpairUserSubsystem_NoRegister();
	POCKETPAIRUSER_API UClass* Z_Construct_UClass_USanitizeDisplayNameAsyncFunction();
	POCKETPAIRUSER_API UClass* Z_Construct_UClass_USanitizeDisplayNameAsyncFunction_NoRegister();
	POCKETPAIRUSER_API UFunction* Z_Construct_UDelegateFunction_PocketpairUser_SanitizeDisplayNameAsyncFunction__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_PocketpairUser();
// End Cross Module References
	DEFINE_FUNCTION(USanitizeDisplayNameAsyncFunction::execSanitizeDisplayNameAsyncFunction)
	{
		P_GET_OBJECT(UPocketpairUserSubsystem,Z_Param_Target);
		P_GET_PROPERTY(FStrProperty,Z_Param_InString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USanitizeDisplayNameAsyncFunction**)Z_Param__Result=USanitizeDisplayNameAsyncFunction::SanitizeDisplayNameAsyncFunction(Z_Param_Target,Z_Param_InString);
		P_NATIVE_END;
	}
	void USanitizeDisplayNameAsyncFunction::StaticRegisterNativesUSanitizeDisplayNameAsyncFunction()
	{
		UClass* Class = USanitizeDisplayNameAsyncFunction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SanitizeDisplayNameAsyncFunction", &USanitizeDisplayNameAsyncFunction::execSanitizeDisplayNameAsyncFunction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USanitizeDisplayNameAsyncFunction_SanitizeDisplayNameAsyncFunction_Statics
	{
		struct SanitizeDisplayNameAsyncFunction_eventSanitizeDisplayNameAsyncFunction_Parms
		{
			UPocketpairUserSubsystem* Target;
			FString InString;
			USanitizeDisplayNameAsyncFunction* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InString;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USanitizeDisplayNameAsyncFunction_SanitizeDisplayNameAsyncFunction_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SanitizeDisplayNameAsyncFunction_eventSanitizeDisplayNameAsyncFunction_Parms, Target), Z_Construct_UClass_UPocketpairUserSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USanitizeDisplayNameAsyncFunction_SanitizeDisplayNameAsyncFunction_Statics::NewProp_InString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USanitizeDisplayNameAsyncFunction_SanitizeDisplayNameAsyncFunction_Statics::NewProp_InString = { "InString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SanitizeDisplayNameAsyncFunction_eventSanitizeDisplayNameAsyncFunction_Parms, InString), METADATA_PARAMS(Z_Construct_UFunction_USanitizeDisplayNameAsyncFunction_SanitizeDisplayNameAsyncFunction_Statics::NewProp_InString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USanitizeDisplayNameAsyncFunction_SanitizeDisplayNameAsyncFunction_Statics::NewProp_InString_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USanitizeDisplayNameAsyncFunction_SanitizeDisplayNameAsyncFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SanitizeDisplayNameAsyncFunction_eventSanitizeDisplayNameAsyncFunction_Parms, ReturnValue), Z_Construct_UClass_USanitizeDisplayNameAsyncFunction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USanitizeDisplayNameAsyncFunction_SanitizeDisplayNameAsyncFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USanitizeDisplayNameAsyncFunction_SanitizeDisplayNameAsyncFunction_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USanitizeDisplayNameAsyncFunction_SanitizeDisplayNameAsyncFunction_Statics::NewProp_InString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USanitizeDisplayNameAsyncFunction_SanitizeDisplayNameAsyncFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USanitizeDisplayNameAsyncFunction_SanitizeDisplayNameAsyncFunction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SanitizeDisplayNameAsyncFunction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USanitizeDisplayNameAsyncFunction_SanitizeDisplayNameAsyncFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USanitizeDisplayNameAsyncFunction, nullptr, "SanitizeDisplayNameAsyncFunction", nullptr, nullptr, sizeof(Z_Construct_UFunction_USanitizeDisplayNameAsyncFunction_SanitizeDisplayNameAsyncFunction_Statics::SanitizeDisplayNameAsyncFunction_eventSanitizeDisplayNameAsyncFunction_Parms), Z_Construct_UFunction_USanitizeDisplayNameAsyncFunction_SanitizeDisplayNameAsyncFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USanitizeDisplayNameAsyncFunction_SanitizeDisplayNameAsyncFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USanitizeDisplayNameAsyncFunction_SanitizeDisplayNameAsyncFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USanitizeDisplayNameAsyncFunction_SanitizeDisplayNameAsyncFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USanitizeDisplayNameAsyncFunction_SanitizeDisplayNameAsyncFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USanitizeDisplayNameAsyncFunction_SanitizeDisplayNameAsyncFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USanitizeDisplayNameAsyncFunction);
	UClass* Z_Construct_UClass_USanitizeDisplayNameAsyncFunction_NoRegister()
	{
		return USanitizeDisplayNameAsyncFunction::StaticClass();
	}
	struct Z_Construct_UClass_USanitizeDisplayNameAsyncFunction_Statics
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
	UObject* (*const Z_Construct_UClass_USanitizeDisplayNameAsyncFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PocketpairUser,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USanitizeDisplayNameAsyncFunction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USanitizeDisplayNameAsyncFunction_SanitizeDisplayNameAsyncFunction, "SanitizeDisplayNameAsyncFunction" }, // 2933768465
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USanitizeDisplayNameAsyncFunction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SanitizeDisplayNameAsyncFunction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SanitizeDisplayNameAsyncFunction.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USanitizeDisplayNameAsyncFunction_Statics::NewProp_Completed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SanitizeDisplayNameAsyncFunction" },
		{ "ModuleRelativePath", "Public/SanitizeDisplayNameAsyncFunction.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USanitizeDisplayNameAsyncFunction_Statics::NewProp_Completed = { "Completed", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USanitizeDisplayNameAsyncFunction, Completed), Z_Construct_UDelegateFunction_PocketpairUser_SanitizeDisplayNameAsyncFunction__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USanitizeDisplayNameAsyncFunction_Statics::NewProp_Completed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USanitizeDisplayNameAsyncFunction_Statics::NewProp_Completed_MetaData)) }; // 3999756995
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USanitizeDisplayNameAsyncFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USanitizeDisplayNameAsyncFunction_Statics::NewProp_Completed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USanitizeDisplayNameAsyncFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USanitizeDisplayNameAsyncFunction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USanitizeDisplayNameAsyncFunction_Statics::ClassParams = {
		&USanitizeDisplayNameAsyncFunction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USanitizeDisplayNameAsyncFunction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USanitizeDisplayNameAsyncFunction_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USanitizeDisplayNameAsyncFunction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USanitizeDisplayNameAsyncFunction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USanitizeDisplayNameAsyncFunction()
	{
		if (!Z_Registration_Info_UClass_USanitizeDisplayNameAsyncFunction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USanitizeDisplayNameAsyncFunction.OuterSingleton, Z_Construct_UClass_USanitizeDisplayNameAsyncFunction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USanitizeDisplayNameAsyncFunction.OuterSingleton;
	}
	template<> POCKETPAIRUSER_API UClass* StaticClass<USanitizeDisplayNameAsyncFunction>()
	{
		return USanitizeDisplayNameAsyncFunction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USanitizeDisplayNameAsyncFunction);
	USanitizeDisplayNameAsyncFunction::~USanitizeDisplayNameAsyncFunction() {}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_SanitizeDisplayNameAsyncFunction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_SanitizeDisplayNameAsyncFunction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USanitizeDisplayNameAsyncFunction, USanitizeDisplayNameAsyncFunction::StaticClass, TEXT("USanitizeDisplayNameAsyncFunction"), &Z_Registration_Info_UClass_USanitizeDisplayNameAsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USanitizeDisplayNameAsyncFunction), 3413557901U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_SanitizeDisplayNameAsyncFunction_h_1368129422(TEXT("/Script/PocketpairUser"),
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_SanitizeDisplayNameAsyncFunction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_SanitizeDisplayNameAsyncFunction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
