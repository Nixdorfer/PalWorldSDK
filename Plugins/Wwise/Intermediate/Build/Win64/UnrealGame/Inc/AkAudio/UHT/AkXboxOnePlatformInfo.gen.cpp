// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/Platforms/AkPlatform_XboxOne/AkXboxOnePlatformInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkXboxOnePlatformInfo() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkPlatformInfo();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkXboxOnePlatformInfo();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkXboxOnePlatformInfo_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void UAkXboxOnePlatformInfo::StaticRegisterNativesUAkXboxOnePlatformInfo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkXboxOnePlatformInfo);
	UClass* Z_Construct_UClass_UAkXboxOnePlatformInfo_NoRegister()
	{
		return UAkXboxOnePlatformInfo::StaticClass();
	}
	struct Z_Construct_UClass_UAkXboxOnePlatformInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkXboxOnePlatformInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkPlatformInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkXboxOnePlatformInfo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Platforms/AkPlatform_XboxOne/AkXboxOnePlatformInfo.h" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_XboxOne/AkXboxOnePlatformInfo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkXboxOnePlatformInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkXboxOnePlatformInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkXboxOnePlatformInfo_Statics::ClassParams = {
		&UAkXboxOnePlatformInfo::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAkXboxOnePlatformInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkXboxOnePlatformInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkXboxOnePlatformInfo()
	{
		if (!Z_Registration_Info_UClass_UAkXboxOnePlatformInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkXboxOnePlatformInfo.OuterSingleton, Z_Construct_UClass_UAkXboxOnePlatformInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkXboxOnePlatformInfo.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkXboxOnePlatformInfo>()
	{
		return UAkXboxOnePlatformInfo::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkXboxOnePlatformInfo);
	UAkXboxOnePlatformInfo::~UAkXboxOnePlatformInfo() {}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_XboxOne_AkXboxOnePlatformInfo_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_XboxOne_AkXboxOnePlatformInfo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAkXboxOnePlatformInfo, UAkXboxOnePlatformInfo::StaticClass, TEXT("UAkXboxOnePlatformInfo"), &Z_Registration_Info_UClass_UAkXboxOnePlatformInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkXboxOnePlatformInfo), 328029806U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_XboxOne_AkXboxOnePlatformInfo_h_8157404(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_XboxOne_AkXboxOnePlatformInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_XboxOne_AkXboxOnePlatformInfo_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
