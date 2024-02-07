// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkRtpc.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkRtpc() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioType();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkRtpc();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkRtpc_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void UAkRtpc::StaticRegisterNativesUAkRtpc()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkRtpc);
	UClass* Z_Construct_UClass_UAkRtpc_NoRegister()
	{
		return UAkRtpc::StaticClass();
	}
	struct Z_Construct_UClass_UAkRtpc_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkRtpc_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkAudioType,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkRtpc_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkRtpc.h" },
		{ "ModuleRelativePath", "Classes/AkRtpc.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkRtpc_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkRtpc>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkRtpc_Statics::ClassParams = {
		&UAkRtpc::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkRtpc_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkRtpc_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkRtpc()
	{
		if (!Z_Registration_Info_UClass_UAkRtpc.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkRtpc.OuterSingleton, Z_Construct_UClass_UAkRtpc_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkRtpc.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkRtpc>()
	{
		return UAkRtpc::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkRtpc);
	UAkRtpc::~UAkRtpc() {}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkRtpc_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkRtpc_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAkRtpc, UAkRtpc::StaticClass, TEXT("UAkRtpc"), &Z_Registration_Info_UClass_UAkRtpc, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkRtpc), 2428295504U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkRtpc_h_375474459(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkRtpc_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkRtpc_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
