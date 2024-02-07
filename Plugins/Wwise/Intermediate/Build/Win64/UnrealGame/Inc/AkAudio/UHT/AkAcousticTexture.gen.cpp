// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkAcousticTexture.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkAcousticTexture() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAcousticTexture();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAcousticTexture_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void UAkAcousticTexture::StaticRegisterNativesUAkAcousticTexture()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkAcousticTexture);
	UClass* Z_Construct_UClass_UAkAcousticTexture_NoRegister()
	{
		return UAkAcousticTexture::StaticClass();
	}
	struct Z_Construct_UClass_UAkAcousticTexture_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EditColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkAcousticTexture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkAudioType,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAcousticTexture_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkAcousticTexture.h" },
		{ "ModuleRelativePath", "Classes/AkAcousticTexture.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAcousticTexture_Statics::NewProp_EditColor_MetaData[] = {
		{ "Category", "AkTexture" },
		{ "ModuleRelativePath", "Classes/AkAcousticTexture.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkAcousticTexture_Statics::NewProp_EditColor = { "EditColor", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkAcousticTexture, EditColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UAkAcousticTexture_Statics::NewProp_EditColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAcousticTexture_Statics::NewProp_EditColor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkAcousticTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAcousticTexture_Statics::NewProp_EditColor,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkAcousticTexture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkAcousticTexture>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkAcousticTexture_Statics::ClassParams = {
		&UAkAcousticTexture::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UAkAcousticTexture_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UAkAcousticTexture_Statics::PropPointers), 0),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkAcousticTexture_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAcousticTexture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkAcousticTexture()
	{
		if (!Z_Registration_Info_UClass_UAkAcousticTexture.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkAcousticTexture.OuterSingleton, Z_Construct_UClass_UAkAcousticTexture_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkAcousticTexture.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkAcousticTexture>()
	{
		return UAkAcousticTexture::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkAcousticTexture);
	UAkAcousticTexture::~UAkAcousticTexture() {}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticTexture_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticTexture_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAkAcousticTexture, UAkAcousticTexture::StaticClass, TEXT("UAkAcousticTexture"), &Z_Registration_Info_UClass_UAkAcousticTexture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkAcousticTexture), 3674666323U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticTexture_h_684549885(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticTexture_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkAcousticTexture_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
