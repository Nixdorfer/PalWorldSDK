// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PocketpairUser/Public/GDKActivityAsyncFunction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGDKActivityAsyncFunction() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	POCKETPAIRUSER_API UClass* Z_Construct_UClass_UGDKActivityAsyncFunction();
	POCKETPAIRUSER_API UClass* Z_Construct_UClass_UGDKActivityAsyncFunction_NoRegister();
	POCKETPAIRUSER_API UClass* Z_Construct_UClass_UPocketpairUserSubsystem_NoRegister();
	POCKETPAIRUSER_API UFunction* Z_Construct_UDelegateFunction_PocketpairUser_GDKActivityAsyncFunction__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_PocketpairUser();
// End Cross Module References
	DEFINE_FUNCTION(UGDKActivityAsyncFunction::execGDKActivityAsyncFunction)
	{
		P_GET_OBJECT(UPocketpairUserSubsystem,Z_Param_Target);
		P_GET_PROPERTY(FStrProperty,Z_Param_ConnectionString);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxPlayerNum);
		P_GET_PROPERTY(FIntProperty,Z_Param_CurrentPlayerNum);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGDKActivityAsyncFunction**)Z_Param__Result=UGDKActivityAsyncFunction::GDKActivityAsyncFunction(Z_Param_Target,Z_Param_ConnectionString,Z_Param_MaxPlayerNum,Z_Param_CurrentPlayerNum);
		P_NATIVE_END;
	}
	void UGDKActivityAsyncFunction::StaticRegisterNativesUGDKActivityAsyncFunction()
	{
		UClass* Class = UGDKActivityAsyncFunction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GDKActivityAsyncFunction", &UGDKActivityAsyncFunction::execGDKActivityAsyncFunction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGDKActivityAsyncFunction_GDKActivityAsyncFunction_Statics
	{
		struct GDKActivityAsyncFunction_eventGDKActivityAsyncFunction_Parms
		{
			UPocketpairUserSubsystem* Target;
			FString ConnectionString;
			int32 MaxPlayerNum;
			int32 CurrentPlayerNum;
			UGDKActivityAsyncFunction* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ConnectionString;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPlayerNum;
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentPlayerNum;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGDKActivityAsyncFunction_GDKActivityAsyncFunction_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GDKActivityAsyncFunction_eventGDKActivityAsyncFunction_Parms, Target), Z_Construct_UClass_UPocketpairUserSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGDKActivityAsyncFunction_GDKActivityAsyncFunction_Statics::NewProp_ConnectionString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGDKActivityAsyncFunction_GDKActivityAsyncFunction_Statics::NewProp_ConnectionString = { "ConnectionString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GDKActivityAsyncFunction_eventGDKActivityAsyncFunction_Parms, ConnectionString), METADATA_PARAMS(Z_Construct_UFunction_UGDKActivityAsyncFunction_GDKActivityAsyncFunction_Statics::NewProp_ConnectionString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGDKActivityAsyncFunction_GDKActivityAsyncFunction_Statics::NewProp_ConnectionString_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGDKActivityAsyncFunction_GDKActivityAsyncFunction_Statics::NewProp_MaxPlayerNum = { "MaxPlayerNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GDKActivityAsyncFunction_eventGDKActivityAsyncFunction_Parms, MaxPlayerNum), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGDKActivityAsyncFunction_GDKActivityAsyncFunction_Statics::NewProp_CurrentPlayerNum = { "CurrentPlayerNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GDKActivityAsyncFunction_eventGDKActivityAsyncFunction_Parms, CurrentPlayerNum), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGDKActivityAsyncFunction_GDKActivityAsyncFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GDKActivityAsyncFunction_eventGDKActivityAsyncFunction_Parms, ReturnValue), Z_Construct_UClass_UGDKActivityAsyncFunction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGDKActivityAsyncFunction_GDKActivityAsyncFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGDKActivityAsyncFunction_GDKActivityAsyncFunction_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGDKActivityAsyncFunction_GDKActivityAsyncFunction_Statics::NewProp_ConnectionString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGDKActivityAsyncFunction_GDKActivityAsyncFunction_Statics::NewProp_MaxPlayerNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGDKActivityAsyncFunction_GDKActivityAsyncFunction_Statics::NewProp_CurrentPlayerNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGDKActivityAsyncFunction_GDKActivityAsyncFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGDKActivityAsyncFunction_GDKActivityAsyncFunction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GDKActivityAsyncFunction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGDKActivityAsyncFunction_GDKActivityAsyncFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGDKActivityAsyncFunction, nullptr, "GDKActivityAsyncFunction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGDKActivityAsyncFunction_GDKActivityAsyncFunction_Statics::GDKActivityAsyncFunction_eventGDKActivityAsyncFunction_Parms), Z_Construct_UFunction_UGDKActivityAsyncFunction_GDKActivityAsyncFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGDKActivityAsyncFunction_GDKActivityAsyncFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGDKActivityAsyncFunction_GDKActivityAsyncFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGDKActivityAsyncFunction_GDKActivityAsyncFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGDKActivityAsyncFunction_GDKActivityAsyncFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGDKActivityAsyncFunction_GDKActivityAsyncFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGDKActivityAsyncFunction);
	UClass* Z_Construct_UClass_UGDKActivityAsyncFunction_NoRegister()
	{
		return UGDKActivityAsyncFunction::StaticClass();
	}
	struct Z_Construct_UClass_UGDKActivityAsyncFunction_Statics
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
	UObject* (*const Z_Construct_UClass_UGDKActivityAsyncFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PocketpairUser,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGDKActivityAsyncFunction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGDKActivityAsyncFunction_GDKActivityAsyncFunction, "GDKActivityAsyncFunction" }, // 976808576
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGDKActivityAsyncFunction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GDKActivityAsyncFunction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GDKActivityAsyncFunction.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGDKActivityAsyncFunction_Statics::NewProp_Completed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GDKActivityAsyncFunction" },
		{ "ModuleRelativePath", "Public/GDKActivityAsyncFunction.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGDKActivityAsyncFunction_Statics::NewProp_Completed = { "Completed", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGDKActivityAsyncFunction, Completed), Z_Construct_UDelegateFunction_PocketpairUser_GDKActivityAsyncFunction__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGDKActivityAsyncFunction_Statics::NewProp_Completed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGDKActivityAsyncFunction_Statics::NewProp_Completed_MetaData)) }; // 2952106046
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGDKActivityAsyncFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGDKActivityAsyncFunction_Statics::NewProp_Completed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGDKActivityAsyncFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGDKActivityAsyncFunction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGDKActivityAsyncFunction_Statics::ClassParams = {
		&UGDKActivityAsyncFunction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGDKActivityAsyncFunction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGDKActivityAsyncFunction_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGDKActivityAsyncFunction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGDKActivityAsyncFunction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGDKActivityAsyncFunction()
	{
		if (!Z_Registration_Info_UClass_UGDKActivityAsyncFunction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGDKActivityAsyncFunction.OuterSingleton, Z_Construct_UClass_UGDKActivityAsyncFunction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGDKActivityAsyncFunction.OuterSingleton;
	}
	template<> POCKETPAIRUSER_API UClass* StaticClass<UGDKActivityAsyncFunction>()
	{
		return UGDKActivityAsyncFunction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGDKActivityAsyncFunction);
	UGDKActivityAsyncFunction::~UGDKActivityAsyncFunction() {}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_GDKActivityAsyncFunction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_GDKActivityAsyncFunction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGDKActivityAsyncFunction, UGDKActivityAsyncFunction::StaticClass, TEXT("UGDKActivityAsyncFunction"), &Z_Registration_Info_UClass_UGDKActivityAsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGDKActivityAsyncFunction), 4097472427U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_GDKActivityAsyncFunction_h_4213243273(TEXT("/Script/PocketpairUser"),
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_GDKActivityAsyncFunction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_GDKActivityAsyncFunction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
