// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PocketpairUser/Public/LoginEOSAsyncFunction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoginEOSAsyncFunction() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	POCKETPAIRUSER_API UClass* Z_Construct_UClass_ULoginEOSAsyncFunction();
	POCKETPAIRUSER_API UClass* Z_Construct_UClass_ULoginEOSAsyncFunction_NoRegister();
	POCKETPAIRUSER_API UClass* Z_Construct_UClass_UPocketpairUserSubsystem_NoRegister();
	POCKETPAIRUSER_API UFunction* Z_Construct_UDelegateFunction_PocketpairUser_AsyncCompletedLoginEOSFunction__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_PocketpairUser();
// End Cross Module References
	DEFINE_FUNCTION(ULoginEOSAsyncFunction::execLoginEOSAsyncFunction)
	{
		P_GET_OBJECT(UPocketpairUserSubsystem,Z_Param_Target);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULoginEOSAsyncFunction**)Z_Param__Result=ULoginEOSAsyncFunction::LoginEOSAsyncFunction(Z_Param_Target);
		P_NATIVE_END;
	}
	void ULoginEOSAsyncFunction::StaticRegisterNativesULoginEOSAsyncFunction()
	{
		UClass* Class = ULoginEOSAsyncFunction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoginEOSAsyncFunction", &ULoginEOSAsyncFunction::execLoginEOSAsyncFunction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULoginEOSAsyncFunction_LoginEOSAsyncFunction_Statics
	{
		struct LoginEOSAsyncFunction_eventLoginEOSAsyncFunction_Parms
		{
			UPocketpairUserSubsystem* Target;
			ULoginEOSAsyncFunction* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoginEOSAsyncFunction_LoginEOSAsyncFunction_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LoginEOSAsyncFunction_eventLoginEOSAsyncFunction_Parms, Target), Z_Construct_UClass_UPocketpairUserSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoginEOSAsyncFunction_LoginEOSAsyncFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LoginEOSAsyncFunction_eventLoginEOSAsyncFunction_Parms, ReturnValue), Z_Construct_UClass_ULoginEOSAsyncFunction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoginEOSAsyncFunction_LoginEOSAsyncFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoginEOSAsyncFunction_LoginEOSAsyncFunction_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoginEOSAsyncFunction_LoginEOSAsyncFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoginEOSAsyncFunction_LoginEOSAsyncFunction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LoginEOSAsyncFunction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoginEOSAsyncFunction_LoginEOSAsyncFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoginEOSAsyncFunction, nullptr, "LoginEOSAsyncFunction", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULoginEOSAsyncFunction_LoginEOSAsyncFunction_Statics::LoginEOSAsyncFunction_eventLoginEOSAsyncFunction_Parms), Z_Construct_UFunction_ULoginEOSAsyncFunction_LoginEOSAsyncFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoginEOSAsyncFunction_LoginEOSAsyncFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoginEOSAsyncFunction_LoginEOSAsyncFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoginEOSAsyncFunction_LoginEOSAsyncFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoginEOSAsyncFunction_LoginEOSAsyncFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULoginEOSAsyncFunction_LoginEOSAsyncFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULoginEOSAsyncFunction);
	UClass* Z_Construct_UClass_ULoginEOSAsyncFunction_NoRegister()
	{
		return ULoginEOSAsyncFunction::StaticClass();
	}
	struct Z_Construct_UClass_ULoginEOSAsyncFunction_Statics
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
	UObject* (*const Z_Construct_UClass_ULoginEOSAsyncFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PocketpairUser,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULoginEOSAsyncFunction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULoginEOSAsyncFunction_LoginEOSAsyncFunction, "LoginEOSAsyncFunction" }, // 326623012
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoginEOSAsyncFunction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LoginEOSAsyncFunction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LoginEOSAsyncFunction.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoginEOSAsyncFunction_Statics::NewProp_Completed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LoginEOSAsyncFunction" },
		{ "ModuleRelativePath", "Public/LoginEOSAsyncFunction.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULoginEOSAsyncFunction_Statics::NewProp_Completed = { "Completed", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULoginEOSAsyncFunction, Completed), Z_Construct_UDelegateFunction_PocketpairUser_AsyncCompletedLoginEOSFunction__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULoginEOSAsyncFunction_Statics::NewProp_Completed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoginEOSAsyncFunction_Statics::NewProp_Completed_MetaData)) }; // 2506179345
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULoginEOSAsyncFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoginEOSAsyncFunction_Statics::NewProp_Completed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULoginEOSAsyncFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULoginEOSAsyncFunction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULoginEOSAsyncFunction_Statics::ClassParams = {
		&ULoginEOSAsyncFunction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULoginEOSAsyncFunction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULoginEOSAsyncFunction_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULoginEOSAsyncFunction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULoginEOSAsyncFunction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULoginEOSAsyncFunction()
	{
		if (!Z_Registration_Info_UClass_ULoginEOSAsyncFunction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULoginEOSAsyncFunction.OuterSingleton, Z_Construct_UClass_ULoginEOSAsyncFunction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULoginEOSAsyncFunction.OuterSingleton;
	}
	template<> POCKETPAIRUSER_API UClass* StaticClass<ULoginEOSAsyncFunction>()
	{
		return ULoginEOSAsyncFunction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULoginEOSAsyncFunction);
	ULoginEOSAsyncFunction::~ULoginEOSAsyncFunction() {}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_LoginEOSAsyncFunction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_LoginEOSAsyncFunction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULoginEOSAsyncFunction, ULoginEOSAsyncFunction::StaticClass, TEXT("ULoginEOSAsyncFunction"), &Z_Registration_Info_UClass_ULoginEOSAsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULoginEOSAsyncFunction), 1981395786U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_LoginEOSAsyncFunction_h_1713294898(TEXT("/Script/PocketpairUser"),
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_LoginEOSAsyncFunction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_LoginEOSAsyncFunction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
