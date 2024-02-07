// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUser/Public/CommonSession_HostSessionRequest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonSession_HostSessionRequest() {}
// Cross Module References
	COMMONUSER_API UClass* Z_Construct_UClass_UCommonSession_HostSessionRequest();
	COMMONUSER_API UClass* Z_Construct_UClass_UCommonSession_HostSessionRequest_NoRegister();
	COMMONUSER_API UEnum* Z_Construct_UEnum_CommonUser_ECommonSessionOnlineMode();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetId();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CommonUser();
// End Cross Module References
	void UCommonSession_HostSessionRequest::StaticRegisterNativesUCommonSession_HostSessionRequest()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonSession_HostSessionRequest);
	UClass* Z_Construct_UClass_UCommonSession_HostSessionRequest_NoRegister()
	{
		return UCommonSession_HostSessionRequest::StaticClass();
	}
	struct Z_Construct_UClass_UCommonSession_HostSessionRequest_Statics
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModeNameForAdvertisement_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ModeNameForAdvertisement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MapID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MapID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Map_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Map;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExtraArgs_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExtraArgs_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtraArgs_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ExtraArgs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxPlayerCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPlayerCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonSession_HostSessionRequest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUser,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonSession_HostSessionRequest_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CommonSession_HostSessionRequest.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CommonSession_HostSessionRequest.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCommonSession_HostSessionRequest_Statics::NewProp_OnlineMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonSession_HostSessionRequest_Statics::NewProp_OnlineMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonSession_HostSessionRequest" },
		{ "ModuleRelativePath", "Public/CommonSession_HostSessionRequest.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCommonSession_HostSessionRequest_Statics::NewProp_OnlineMode = { "OnlineMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonSession_HostSessionRequest, OnlineMode), Z_Construct_UEnum_CommonUser_ECommonSessionOnlineMode, METADATA_PARAMS(Z_Construct_UClass_UCommonSession_HostSessionRequest_Statics::NewProp_OnlineMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonSession_HostSessionRequest_Statics::NewProp_OnlineMode_MetaData)) }; // 2203615273
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonSession_HostSessionRequest_Statics::NewProp_bUseLobbies_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonSession_HostSessionRequest" },
		{ "ModuleRelativePath", "Public/CommonSession_HostSessionRequest.h" },
	};
#endif
	void Z_Construct_UClass_UCommonSession_HostSessionRequest_Statics::NewProp_bUseLobbies_SetBit(void* Obj)
	{
		((UCommonSession_HostSessionRequest*)Obj)->bUseLobbies = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonSession_HostSessionRequest_Statics::NewProp_bUseLobbies = { "bUseLobbies", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCommonSession_HostSessionRequest), &Z_Construct_UClass_UCommonSession_HostSessionRequest_Statics::NewProp_bUseLobbies_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonSession_HostSessionRequest_Statics::NewProp_bUseLobbies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonSession_HostSessionRequest_Statics::NewProp_bUseLobbies_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonSession_HostSessionRequest_Statics::NewProp_ModeNameForAdvertisement_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonSession_HostSessionRequest" },
		{ "ModuleRelativePath", "Public/CommonSession_HostSessionRequest.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCommonSession_HostSessionRequest_Statics::NewProp_ModeNameForAdvertisement = { "ModeNameForAdvertisement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonSession_HostSessionRequest, ModeNameForAdvertisement), METADATA_PARAMS(Z_Construct_UClass_UCommonSession_HostSessionRequest_Statics::NewProp_ModeNameForAdvertisement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonSession_HostSessionRequest_Statics::NewProp_ModeNameForAdvertisement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonSession_HostSessionRequest_Statics::NewProp_MapID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonSession_HostSessionRequest" },
		{ "ModuleRelativePath", "Public/CommonSession_HostSessionRequest.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonSession_HostSessionRequest_Statics::NewProp_MapID = { "MapID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonSession_HostSessionRequest, MapID), Z_Construct_UScriptStruct_FPrimaryAssetId, METADATA_PARAMS(Z_Construct_UClass_UCommonSession_HostSessionRequest_Statics::NewProp_MapID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonSession_HostSessionRequest_Statics::NewProp_MapID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonSession_HostSessionRequest_Statics::NewProp_Map_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonSession_HostSessionRequest" },
		{ "ModuleRelativePath", "Public/CommonSession_HostSessionRequest.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UCommonSession_HostSessionRequest_Statics::NewProp_Map = { "Map", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonSession_HostSessionRequest, Map), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonSession_HostSessionRequest_Statics::NewProp_Map_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonSession_HostSessionRequest_Statics::NewProp_Map_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCommonSession_HostSessionRequest_Statics::NewProp_ExtraArgs_ValueProp = { "ExtraArgs", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCommonSession_HostSessionRequest_Statics::NewProp_ExtraArgs_Key_KeyProp = { "ExtraArgs_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonSession_HostSessionRequest_Statics::NewProp_ExtraArgs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonSession_HostSessionRequest" },
		{ "ModuleRelativePath", "Public/CommonSession_HostSessionRequest.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCommonSession_HostSessionRequest_Statics::NewProp_ExtraArgs = { "ExtraArgs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonSession_HostSessionRequest, ExtraArgs), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCommonSession_HostSessionRequest_Statics::NewProp_ExtraArgs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonSession_HostSessionRequest_Statics::NewProp_ExtraArgs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonSession_HostSessionRequest_Statics::NewProp_MaxPlayerCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonSession_HostSessionRequest" },
		{ "ModuleRelativePath", "Public/CommonSession_HostSessionRequest.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCommonSession_HostSessionRequest_Statics::NewProp_MaxPlayerCount = { "MaxPlayerCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonSession_HostSessionRequest, MaxPlayerCount), METADATA_PARAMS(Z_Construct_UClass_UCommonSession_HostSessionRequest_Statics::NewProp_MaxPlayerCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonSession_HostSessionRequest_Statics::NewProp_MaxPlayerCount_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonSession_HostSessionRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonSession_HostSessionRequest_Statics::NewProp_OnlineMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonSession_HostSessionRequest_Statics::NewProp_OnlineMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonSession_HostSessionRequest_Statics::NewProp_bUseLobbies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonSession_HostSessionRequest_Statics::NewProp_ModeNameForAdvertisement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonSession_HostSessionRequest_Statics::NewProp_MapID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonSession_HostSessionRequest_Statics::NewProp_Map,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonSession_HostSessionRequest_Statics::NewProp_ExtraArgs_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonSession_HostSessionRequest_Statics::NewProp_ExtraArgs_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonSession_HostSessionRequest_Statics::NewProp_ExtraArgs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonSession_HostSessionRequest_Statics::NewProp_MaxPlayerCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonSession_HostSessionRequest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonSession_HostSessionRequest>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonSession_HostSessionRequest_Statics::ClassParams = {
		&UCommonSession_HostSessionRequest::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCommonSession_HostSessionRequest_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCommonSession_HostSessionRequest_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCommonSession_HostSessionRequest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonSession_HostSessionRequest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonSession_HostSessionRequest()
	{
		if (!Z_Registration_Info_UClass_UCommonSession_HostSessionRequest.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonSession_HostSessionRequest.OuterSingleton, Z_Construct_UClass_UCommonSession_HostSessionRequest_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonSession_HostSessionRequest.OuterSingleton;
	}
	template<> COMMONUSER_API UClass* StaticClass<UCommonSession_HostSessionRequest>()
	{
		return UCommonSession_HostSessionRequest::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonSession_HostSessionRequest);
	UCommonSession_HostSessionRequest::~UCommonSession_HostSessionRequest() {}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonSession_HostSessionRequest_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonSession_HostSessionRequest_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCommonSession_HostSessionRequest, UCommonSession_HostSessionRequest::StaticClass, TEXT("UCommonSession_HostSessionRequest"), &Z_Registration_Info_UClass_UCommonSession_HostSessionRequest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonSession_HostSessionRequest), 4243127940U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonSession_HostSessionRequest_h_2344066268(TEXT("/Script/CommonUser"),
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonSession_HostSessionRequest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonSession_HostSessionRequest_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
