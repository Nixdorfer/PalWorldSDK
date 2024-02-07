// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudiokineticTools/Private/AssetManagement/AkFolderSearchFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkFolderSearchFilter() {}
// Cross Module References
	AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkFolderSearchFilter();
	AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkFolderSearchFilter_NoRegister();
	CONTENTBROWSER_API UClass* Z_Construct_UClass_UContentBrowserFrontEndFilterExtension();
	UPackage* Z_Construct_UPackage__Script_AudiokineticTools();
// End Cross Module References
	void UAkFolderSearchFilter::StaticRegisterNativesUAkFolderSearchFilter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkFolderSearchFilter);
	UClass* Z_Construct_UClass_UAkFolderSearchFilter_NoRegister()
	{
		return UAkFolderSearchFilter::StaticClass();
	}
	struct Z_Construct_UClass_UAkFolderSearchFilter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkFolderSearchFilter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UContentBrowserFrontEndFilterExtension,
		(UObject* (*)())Z_Construct_UPackage__Script_AudiokineticTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkFolderSearchFilter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetManagement/AkFolderSearchFilter.h" },
		{ "ModuleRelativePath", "Private/AssetManagement/AkFolderSearchFilter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkFolderSearchFilter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkFolderSearchFilter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkFolderSearchFilter_Statics::ClassParams = {
		&UAkFolderSearchFilter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkFolderSearchFilter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkFolderSearchFilter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkFolderSearchFilter()
	{
		if (!Z_Registration_Info_UClass_UAkFolderSearchFilter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkFolderSearchFilter.OuterSingleton, Z_Construct_UClass_UAkFolderSearchFilter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkFolderSearchFilter.OuterSingleton;
	}
	template<> AUDIOKINETICTOOLS_API UClass* StaticClass<UAkFolderSearchFilter>()
	{
		return UAkFolderSearchFilter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkFolderSearchFilter);
	UAkFolderSearchFilter::~UAkFolderSearchFilter() {}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_Wwise_Source_AudiokineticTools_Private_AssetManagement_AkFolderSearchFilter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_Wwise_Source_AudiokineticTools_Private_AssetManagement_AkFolderSearchFilter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAkFolderSearchFilter, UAkFolderSearchFilter::StaticClass, TEXT("UAkFolderSearchFilter"), &Z_Registration_Info_UClass_UAkFolderSearchFilter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkFolderSearchFilter), 3520718239U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_Wwise_Source_AudiokineticTools_Private_AssetManagement_AkFolderSearchFilter_h_3376671088(TEXT("/Script/AudiokineticTools"),
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_Wwise_Source_AudiokineticTools_Private_AssetManagement_AkFolderSearchFilter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_Wwise_Source_AudiokineticTools_Private_AssetManagement_AkFolderSearchFilter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
