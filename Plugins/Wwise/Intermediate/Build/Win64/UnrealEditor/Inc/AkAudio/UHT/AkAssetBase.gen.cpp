// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkAssetBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkAssetBase() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAssetBase();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAssetBase_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAssetPlatformData_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioType();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void UAkAssetBase::StaticRegisterNativesUAkAssetBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkAssetBase);
	UClass* Z_Construct_UClass_UAkAssetBase_NoRegister()
	{
		return UAkAssetBase::StaticClass();
	}
	struct Z_Construct_UClass_UAkAssetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlatformAssetData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlatformAssetData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkAssetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkAudioType,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAssetBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AkAssetBase.h" },
		{ "ModuleRelativePath", "Classes/AkAssetBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAssetBase_Statics::NewProp_PlatformAssetData_MetaData[] = {
		{ "Category", "AkAssetBase" },
		{ "ModuleRelativePath", "Classes/AkAssetBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkAssetBase_Statics::NewProp_PlatformAssetData = { "PlatformAssetData", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkAssetBase, PlatformAssetData), Z_Construct_UClass_UAkAssetPlatformData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAkAssetBase_Statics::NewProp_PlatformAssetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetBase_Statics::NewProp_PlatformAssetData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkAssetBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAssetBase_Statics::NewProp_PlatformAssetData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkAssetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkAssetBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkAssetBase_Statics::ClassParams = {
		&UAkAssetBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAkAssetBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetBase_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkAssetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkAssetBase()
	{
		if (!Z_Registration_Info_UClass_UAkAssetBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkAssetBase.OuterSingleton, Z_Construct_UClass_UAkAssetBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkAssetBase.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkAssetBase>()
	{
		return UAkAssetBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkAssetBase);
	UAkAssetBase::~UAkAssetBase() {}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkAssetBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkAssetBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAkAssetBase, UAkAssetBase::StaticClass, TEXT("UAkAssetBase"), &Z_Registration_Info_UClass_UAkAssetBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkAssetBase), 3714318064U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkAssetBase_h_118493924(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkAssetBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkAssetBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
