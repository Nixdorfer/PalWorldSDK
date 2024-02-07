// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUser/Public/CommonSession_SearchSessionRequest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonSession_SearchSessionRequest() {}
// Cross Module References
	COMMONUSER_API UClass* Z_Construct_UClass_UCommonSession_SearchResult_NoRegister();
	COMMONUSER_API UClass* Z_Construct_UClass_UCommonSession_SearchSessionRequest();
	COMMONUSER_API UClass* Z_Construct_UClass_UCommonSession_SearchSessionRequest_NoRegister();
	COMMONUSER_API UEnum* Z_Construct_UEnum_CommonUser_ECommonSessionOnlineMode();
	COMMONUSER_API UFunction* Z_Construct_UDelegateFunction_CommonUser_CommonSession_FindSessionsFinishedDynamic__DelegateSignature();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_CommonUser();
// End Cross Module References
	void UCommonSession_SearchSessionRequest::StaticRegisterNativesUCommonSession_SearchSessionRequest()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonSession_SearchSessionRequest);
	UClass* Z_Construct_UClass_UCommonSession_SearchSessionRequest_NoRegister()
	{
		return UCommonSession_SearchSessionRequest::StaticClass();
	}
	struct Z_Construct_UClass_UCommonSession_SearchSessionRequest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_OnlineMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnlineMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OnlineMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseLobbies_MetaData[];
#endif
		static void NewProp_bUseLobbies_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLobbies;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Results_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Results_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Results;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_K2_OnSearchFinished_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_K2_OnSearchFinished;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonSession_SearchSessionRequest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUser,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonSession_SearchSessionRequest_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CommonSession_SearchSessionRequest.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CommonSession_SearchSessionRequest.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCommonSession_SearchSessionRequest_Statics::NewProp_OnlineMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonSession_SearchSessionRequest_Statics::NewProp_OnlineMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonSession_SearchSessionRequest" },
		{ "ModuleRelativePath", "Public/CommonSession_SearchSessionRequest.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCommonSession_SearchSessionRequest_Statics::NewProp_OnlineMode = { "OnlineMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonSession_SearchSessionRequest, OnlineMode), Z_Construct_UEnum_CommonUser_ECommonSessionOnlineMode, METADATA_PARAMS(Z_Construct_UClass_UCommonSession_SearchSessionRequest_Statics::NewProp_OnlineMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonSession_SearchSessionRequest_Statics::NewProp_OnlineMode_MetaData)) }; // 2203615273
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonSession_SearchSessionRequest_Statics::NewProp_bUseLobbies_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonSession_SearchSessionRequest" },
		{ "ModuleRelativePath", "Public/CommonSession_SearchSessionRequest.h" },
	};
#endif
	void Z_Construct_UClass_UCommonSession_SearchSessionRequest_Statics::NewProp_bUseLobbies_SetBit(void* Obj)
	{
		((UCommonSession_SearchSessionRequest*)Obj)->bUseLobbies = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonSession_SearchSessionRequest_Statics::NewProp_bUseLobbies = { "bUseLobbies", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCommonSession_SearchSessionRequest), &Z_Construct_UClass_UCommonSession_SearchSessionRequest_Statics::NewProp_bUseLobbies_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonSession_SearchSessionRequest_Statics::NewProp_bUseLobbies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonSession_SearchSessionRequest_Statics::NewProp_bUseLobbies_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCommonSession_SearchSessionRequest_Statics::NewProp_Results_Inner = { "Results", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UCommonSession_SearchResult_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonSession_SearchSessionRequest_Statics::NewProp_Results_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonSession_SearchSessionRequest" },
		{ "ModuleRelativePath", "Public/CommonSession_SearchSessionRequest.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCommonSession_SearchSessionRequest_Statics::NewProp_Results = { "Results", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonSession_SearchSessionRequest, Results), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCommonSession_SearchSessionRequest_Statics::NewProp_Results_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonSession_SearchSessionRequest_Statics::NewProp_Results_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonSession_SearchSessionRequest_Statics::NewProp_K2_OnSearchFinished_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonSession_SearchSessionRequest" },
		{ "ModuleRelativePath", "Public/CommonSession_SearchSessionRequest.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCommonSession_SearchSessionRequest_Statics::NewProp_K2_OnSearchFinished = { "K2_OnSearchFinished", nullptr, (EPropertyFlags)0x0040000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonSession_SearchSessionRequest, K2_OnSearchFinished), Z_Construct_UDelegateFunction_CommonUser_CommonSession_FindSessionsFinishedDynamic__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCommonSession_SearchSessionRequest_Statics::NewProp_K2_OnSearchFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonSession_SearchSessionRequest_Statics::NewProp_K2_OnSearchFinished_MetaData)) }; // 3975721915
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonSession_SearchSessionRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonSession_SearchSessionRequest_Statics::NewProp_OnlineMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonSession_SearchSessionRequest_Statics::NewProp_OnlineMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonSession_SearchSessionRequest_Statics::NewProp_bUseLobbies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonSession_SearchSessionRequest_Statics::NewProp_Results_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonSession_SearchSessionRequest_Statics::NewProp_Results,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonSession_SearchSessionRequest_Statics::NewProp_K2_OnSearchFinished,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonSession_SearchSessionRequest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonSession_SearchSessionRequest>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonSession_SearchSessionRequest_Statics::ClassParams = {
		&UCommonSession_SearchSessionRequest::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCommonSession_SearchSessionRequest_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCommonSession_SearchSessionRequest_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCommonSession_SearchSessionRequest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonSession_SearchSessionRequest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonSession_SearchSessionRequest()
	{
		if (!Z_Registration_Info_UClass_UCommonSession_SearchSessionRequest.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonSession_SearchSessionRequest.OuterSingleton, Z_Construct_UClass_UCommonSession_SearchSessionRequest_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonSession_SearchSessionRequest.OuterSingleton;
	}
	template<> COMMONUSER_API UClass* StaticClass<UCommonSession_SearchSessionRequest>()
	{
		return UCommonSession_SearchSessionRequest::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonSession_SearchSessionRequest);
	UCommonSession_SearchSessionRequest::~UCommonSession_SearchSessionRequest() {}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonSession_SearchSessionRequest_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonSession_SearchSessionRequest_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCommonSession_SearchSessionRequest, UCommonSession_SearchSessionRequest::StaticClass, TEXT("UCommonSession_SearchSessionRequest"), &Z_Registration_Info_UClass_UCommonSession_SearchSessionRequest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonSession_SearchSessionRequest), 682979933U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonSession_SearchSessionRequest_h_1887024564(TEXT("/Script/CommonUser"),
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonSession_SearchSessionRequest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonSession_SearchSessionRequest_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
