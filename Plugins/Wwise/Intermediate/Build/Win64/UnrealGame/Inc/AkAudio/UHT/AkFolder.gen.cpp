// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkFolder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkFolder() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioType();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkFolder();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkFolder_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void UAkFolder::StaticRegisterNativesUAkFolder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkFolder);
	UClass* Z_Construct_UClass_UAkFolder_NoRegister()
	{
		return UAkFolder::StaticClass();
	}
	struct Z_Construct_UClass_UAkFolder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnrealFolderPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UnrealFolderPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WwiseFolderPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_WwiseFolderPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkFolder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkAudioType,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkFolder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AkFolder.h" },
		{ "ModuleRelativePath", "Classes/AkFolder.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkFolder_Statics::NewProp_UnrealFolderPath_MetaData[] = {
		{ "Category", "AkFolder" },
		{ "ModuleRelativePath", "Classes/AkFolder.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAkFolder_Statics::NewProp_UnrealFolderPath = { "UnrealFolderPath", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkFolder, UnrealFolderPath), METADATA_PARAMS(Z_Construct_UClass_UAkFolder_Statics::NewProp_UnrealFolderPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkFolder_Statics::NewProp_UnrealFolderPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkFolder_Statics::NewProp_WwiseFolderPath_MetaData[] = {
		{ "Category", "AkFolder" },
		{ "ModuleRelativePath", "Classes/AkFolder.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAkFolder_Statics::NewProp_WwiseFolderPath = { "WwiseFolderPath", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkFolder, WwiseFolderPath), METADATA_PARAMS(Z_Construct_UClass_UAkFolder_Statics::NewProp_WwiseFolderPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkFolder_Statics::NewProp_WwiseFolderPath_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkFolder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkFolder_Statics::NewProp_UnrealFolderPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkFolder_Statics::NewProp_WwiseFolderPath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkFolder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkFolder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkFolder_Statics::ClassParams = {
		&UAkFolder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAkFolder_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkFolder_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkFolder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkFolder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkFolder()
	{
		if (!Z_Registration_Info_UClass_UAkFolder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkFolder.OuterSingleton, Z_Construct_UClass_UAkFolder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkFolder.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkFolder>()
	{
		return UAkFolder::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkFolder);
	UAkFolder::~UAkFolder() {}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkFolder_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkFolder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAkFolder, UAkFolder::StaticClass, TEXT("UAkFolder"), &Z_Registration_Info_UClass_UAkFolder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkFolder), 470678346U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkFolder_h_137987498(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkFolder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkFolder_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
