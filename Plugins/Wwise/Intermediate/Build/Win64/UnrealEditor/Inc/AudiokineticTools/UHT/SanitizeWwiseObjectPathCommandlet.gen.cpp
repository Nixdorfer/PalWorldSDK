// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudiokineticTools/Classes/AssetManagement/SanitizeWwiseObjectPathCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSanitizeWwiseObjectPathCommandlet() {}
// Cross Module References
	AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_USanitizeWwiseObjectPathCommandlet();
	AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_USanitizeWwiseObjectPathCommandlet_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UPackage* Z_Construct_UPackage__Script_AudiokineticTools();
// End Cross Module References
	void USanitizeWwiseObjectPathCommandlet::StaticRegisterNativesUSanitizeWwiseObjectPathCommandlet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USanitizeWwiseObjectPathCommandlet);
	UClass* Z_Construct_UClass_USanitizeWwiseObjectPathCommandlet_NoRegister()
	{
		return USanitizeWwiseObjectPathCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_USanitizeWwiseObjectPathCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USanitizeWwiseObjectPathCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_AudiokineticTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USanitizeWwiseObjectPathCommandlet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetManagement/SanitizeWwiseObjectPathCommandlet.h" },
		{ "ModuleRelativePath", "Classes/AssetManagement/SanitizeWwiseObjectPathCommandlet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USanitizeWwiseObjectPathCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USanitizeWwiseObjectPathCommandlet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USanitizeWwiseObjectPathCommandlet_Statics::ClassParams = {
		&USanitizeWwiseObjectPathCommandlet::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USanitizeWwiseObjectPathCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USanitizeWwiseObjectPathCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USanitizeWwiseObjectPathCommandlet()
	{
		if (!Z_Registration_Info_UClass_USanitizeWwiseObjectPathCommandlet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USanitizeWwiseObjectPathCommandlet.OuterSingleton, Z_Construct_UClass_USanitizeWwiseObjectPathCommandlet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USanitizeWwiseObjectPathCommandlet.OuterSingleton;
	}
	template<> AUDIOKINETICTOOLS_API UClass* StaticClass<USanitizeWwiseObjectPathCommandlet>()
	{
		return USanitizeWwiseObjectPathCommandlet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USanitizeWwiseObjectPathCommandlet);
	USanitizeWwiseObjectPathCommandlet::~USanitizeWwiseObjectPathCommandlet() {}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_Wwise_Source_AudiokineticTools_Classes_AssetManagement_SanitizeWwiseObjectPathCommandlet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_Wwise_Source_AudiokineticTools_Classes_AssetManagement_SanitizeWwiseObjectPathCommandlet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USanitizeWwiseObjectPathCommandlet, USanitizeWwiseObjectPathCommandlet::StaticClass, TEXT("USanitizeWwiseObjectPathCommandlet"), &Z_Registration_Info_UClass_USanitizeWwiseObjectPathCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USanitizeWwiseObjectPathCommandlet), 3237666230U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_Wwise_Source_AudiokineticTools_Classes_AssetManagement_SanitizeWwiseObjectPathCommandlet_h_2885296906(TEXT("/Script/AudiokineticTools"),
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_Wwise_Source_AudiokineticTools_Classes_AssetManagement_SanitizeWwiseObjectPathCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_Wwise_Source_AudiokineticTools_Classes_AssetManagement_SanitizeWwiseObjectPathCommandlet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
