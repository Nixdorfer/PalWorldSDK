// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PocketpairUser/Public/GDKInviteAsyncFunction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGDKInviteAsyncFunction() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	POCKETPAIRUSER_API UClass* Z_Construct_UClass_UGDKInviteAsyncFunction();
	POCKETPAIRUSER_API UClass* Z_Construct_UClass_UGDKInviteAsyncFunction_NoRegister();
	POCKETPAIRUSER_API UClass* Z_Construct_UClass_UPocketpairUserSubsystem_NoRegister();
	POCKETPAIRUSER_API UFunction* Z_Construct_UDelegateFunction_PocketpairUser_GDKInviteAsyncFunction__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_PocketpairUser();
// End Cross Module References
	DEFINE_FUNCTION(UGDKInviteAsyncFunction::execGDKInviteAsyncFunction)
	{
		P_GET_OBJECT(UPocketpairUserSubsystem,Z_Param_Target);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGDKInviteAsyncFunction**)Z_Param__Result=UGDKInviteAsyncFunction::GDKInviteAsyncFunction(Z_Param_Target);
		P_NATIVE_END;
	}
	void UGDKInviteAsyncFunction::StaticRegisterNativesUGDKInviteAsyncFunction()
	{
		UClass* Class = UGDKInviteAsyncFunction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GDKInviteAsyncFunction", &UGDKInviteAsyncFunction::execGDKInviteAsyncFunction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGDKInviteAsyncFunction_GDKInviteAsyncFunction_Statics
	{
		struct GDKInviteAsyncFunction_eventGDKInviteAsyncFunction_Parms
		{
			UPocketpairUserSubsystem* Target;
			UGDKInviteAsyncFunction* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGDKInviteAsyncFunction_GDKInviteAsyncFunction_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GDKInviteAsyncFunction_eventGDKInviteAsyncFunction_Parms, Target), Z_Construct_UClass_UPocketpairUserSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGDKInviteAsyncFunction_GDKInviteAsyncFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GDKInviteAsyncFunction_eventGDKInviteAsyncFunction_Parms, ReturnValue), Z_Construct_UClass_UGDKInviteAsyncFunction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGDKInviteAsyncFunction_GDKInviteAsyncFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGDKInviteAsyncFunction_GDKInviteAsyncFunction_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGDKInviteAsyncFunction_GDKInviteAsyncFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGDKInviteAsyncFunction_GDKInviteAsyncFunction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GDKInviteAsyncFunction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGDKInviteAsyncFunction_GDKInviteAsyncFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGDKInviteAsyncFunction, nullptr, "GDKInviteAsyncFunction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGDKInviteAsyncFunction_GDKInviteAsyncFunction_Statics::GDKInviteAsyncFunction_eventGDKInviteAsyncFunction_Parms), Z_Construct_UFunction_UGDKInviteAsyncFunction_GDKInviteAsyncFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGDKInviteAsyncFunction_GDKInviteAsyncFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGDKInviteAsyncFunction_GDKInviteAsyncFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGDKInviteAsyncFunction_GDKInviteAsyncFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGDKInviteAsyncFunction_GDKInviteAsyncFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGDKInviteAsyncFunction_GDKInviteAsyncFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGDKInviteAsyncFunction);
	UClass* Z_Construct_UClass_UGDKInviteAsyncFunction_NoRegister()
	{
		return UGDKInviteAsyncFunction::StaticClass();
	}
	struct Z_Construct_UClass_UGDKInviteAsyncFunction_Statics
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
	UObject* (*const Z_Construct_UClass_UGDKInviteAsyncFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PocketpairUser,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGDKInviteAsyncFunction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGDKInviteAsyncFunction_GDKInviteAsyncFunction, "GDKInviteAsyncFunction" }, // 1362922818
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGDKInviteAsyncFunction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GDKInviteAsyncFunction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GDKInviteAsyncFunction.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGDKInviteAsyncFunction_Statics::NewProp_Completed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GDKInviteAsyncFunction" },
		{ "ModuleRelativePath", "Public/GDKInviteAsyncFunction.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGDKInviteAsyncFunction_Statics::NewProp_Completed = { "Completed", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGDKInviteAsyncFunction, Completed), Z_Construct_UDelegateFunction_PocketpairUser_GDKInviteAsyncFunction__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGDKInviteAsyncFunction_Statics::NewProp_Completed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGDKInviteAsyncFunction_Statics::NewProp_Completed_MetaData)) }; // 4065940282
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGDKInviteAsyncFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGDKInviteAsyncFunction_Statics::NewProp_Completed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGDKInviteAsyncFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGDKInviteAsyncFunction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGDKInviteAsyncFunction_Statics::ClassParams = {
		&UGDKInviteAsyncFunction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGDKInviteAsyncFunction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGDKInviteAsyncFunction_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGDKInviteAsyncFunction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGDKInviteAsyncFunction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGDKInviteAsyncFunction()
	{
		if (!Z_Registration_Info_UClass_UGDKInviteAsyncFunction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGDKInviteAsyncFunction.OuterSingleton, Z_Construct_UClass_UGDKInviteAsyncFunction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGDKInviteAsyncFunction.OuterSingleton;
	}
	template<> POCKETPAIRUSER_API UClass* StaticClass<UGDKInviteAsyncFunction>()
	{
		return UGDKInviteAsyncFunction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGDKInviteAsyncFunction);
	UGDKInviteAsyncFunction::~UGDKInviteAsyncFunction() {}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_GDKInviteAsyncFunction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_GDKInviteAsyncFunction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGDKInviteAsyncFunction, UGDKInviteAsyncFunction::StaticClass, TEXT("UGDKInviteAsyncFunction"), &Z_Registration_Info_UClass_UGDKInviteAsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGDKInviteAsyncFunction), 717137226U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_GDKInviteAsyncFunction_h_1853567124(TEXT("/Script/PocketpairUser"),
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_GDKInviteAsyncFunction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_GDKInviteAsyncFunction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
