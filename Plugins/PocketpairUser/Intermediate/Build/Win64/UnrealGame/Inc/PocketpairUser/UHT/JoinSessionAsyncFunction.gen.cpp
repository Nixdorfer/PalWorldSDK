// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PocketpairUser/Public/JoinSessionAsyncFunction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJoinSessionAsyncFunction() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	POCKETPAIRUSER_API UClass* Z_Construct_UClass_UJoinSessionAsyncFunction();
	POCKETPAIRUSER_API UClass* Z_Construct_UClass_UJoinSessionAsyncFunction_NoRegister();
	POCKETPAIRUSER_API UFunction* Z_Construct_UDelegateFunction_PocketpairUser_AsyncCompletedJoinSessionFunction__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_PocketpairUser();
// End Cross Module References
	void UJoinSessionAsyncFunction::StaticRegisterNativesUJoinSessionAsyncFunction()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UJoinSessionAsyncFunction);
	UClass* Z_Construct_UClass_UJoinSessionAsyncFunction_NoRegister()
	{
		return UJoinSessionAsyncFunction::StaticClass();
	}
	struct Z_Construct_UClass_UJoinSessionAsyncFunction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Completed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Completed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Controller_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UJoinSessionAsyncFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PocketpairUser,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJoinSessionAsyncFunction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "JoinSessionAsyncFunction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/JoinSessionAsyncFunction.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJoinSessionAsyncFunction_Statics::NewProp_Completed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "JoinSessionAsyncFunction" },
		{ "ModuleRelativePath", "Public/JoinSessionAsyncFunction.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UJoinSessionAsyncFunction_Statics::NewProp_Completed = { "Completed", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UJoinSessionAsyncFunction, Completed), Z_Construct_UDelegateFunction_PocketpairUser_AsyncCompletedJoinSessionFunction__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UJoinSessionAsyncFunction_Statics::NewProp_Completed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJoinSessionAsyncFunction_Statics::NewProp_Completed_MetaData)) }; // 3296290341
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJoinSessionAsyncFunction_Statics::NewProp_Controller_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "JoinSessionAsyncFunction" },
		{ "ModuleRelativePath", "Public/JoinSessionAsyncFunction.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UJoinSessionAsyncFunction_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UJoinSessionAsyncFunction, Controller), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UJoinSessionAsyncFunction_Statics::NewProp_Controller_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJoinSessionAsyncFunction_Statics::NewProp_Controller_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UJoinSessionAsyncFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJoinSessionAsyncFunction_Statics::NewProp_Completed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJoinSessionAsyncFunction_Statics::NewProp_Controller,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UJoinSessionAsyncFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJoinSessionAsyncFunction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UJoinSessionAsyncFunction_Statics::ClassParams = {
		&UJoinSessionAsyncFunction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UJoinSessionAsyncFunction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UJoinSessionAsyncFunction_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UJoinSessionAsyncFunction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UJoinSessionAsyncFunction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UJoinSessionAsyncFunction()
	{
		if (!Z_Registration_Info_UClass_UJoinSessionAsyncFunction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UJoinSessionAsyncFunction.OuterSingleton, Z_Construct_UClass_UJoinSessionAsyncFunction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UJoinSessionAsyncFunction.OuterSingleton;
	}
	template<> POCKETPAIRUSER_API UClass* StaticClass<UJoinSessionAsyncFunction>()
	{
		return UJoinSessionAsyncFunction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UJoinSessionAsyncFunction);
	UJoinSessionAsyncFunction::~UJoinSessionAsyncFunction() {}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_JoinSessionAsyncFunction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_JoinSessionAsyncFunction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UJoinSessionAsyncFunction, UJoinSessionAsyncFunction::StaticClass, TEXT("UJoinSessionAsyncFunction"), &Z_Registration_Info_UClass_UJoinSessionAsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UJoinSessionAsyncFunction), 1150767648U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_JoinSessionAsyncFunction_h_3947963164(TEXT("/Script/PocketpairUser"),
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_JoinSessionAsyncFunction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_JoinSessionAsyncFunction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
