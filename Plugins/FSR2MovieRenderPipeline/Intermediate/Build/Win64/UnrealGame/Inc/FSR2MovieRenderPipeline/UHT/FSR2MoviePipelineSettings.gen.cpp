// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FSR2MovieRenderPipeline/Public/FSR2MoviePipelineSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFSR2MoviePipelineSettings() {}
// Cross Module References
	FSR2MOVIERENDERPIPELINE_API UClass* Z_Construct_UClass_UFSR2MoviePipelineSettings();
	FSR2MOVIERENDERPIPELINE_API UClass* Z_Construct_UClass_UFSR2MoviePipelineSettings_NoRegister();
	FSR2MOVIERENDERPIPELINE_API UEnum* Z_Construct_UEnum_FSR2MovieRenderPipeline_EFSR2MoviePipelineQuality();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineViewFamilySetting();
	UPackage* Z_Construct_UPackage__Script_FSR2MovieRenderPipeline();
// End Cross Module References
	void UFSR2MoviePipelineSettings::StaticRegisterNativesUFSR2MoviePipelineSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFSR2MoviePipelineSettings);
	UClass* Z_Construct_UClass_UFSR2MoviePipelineSettings_NoRegister()
	{
		return UFSR2MoviePipelineSettings::StaticClass();
	}
	struct Z_Construct_UClass_UFSR2MoviePipelineSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_FSR2Quality_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FSR2Quality_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FSR2Quality;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFSR2MoviePipelineSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMoviePipelineViewFamilySetting,
		(UObject* (*)())Z_Construct_UPackage__Script_FSR2MovieRenderPipeline,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFSR2MoviePipelineSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FSR2MoviePipelineSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FSR2MoviePipelineSettings.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFSR2MoviePipelineSettings_Statics::NewProp_FSR2Quality_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFSR2MoviePipelineSettings_Statics::NewProp_FSR2Quality_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FSR2MoviePipelineSettings" },
		{ "ModuleRelativePath", "Public/FSR2MoviePipelineSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFSR2MoviePipelineSettings_Statics::NewProp_FSR2Quality = { "FSR2Quality", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFSR2MoviePipelineSettings, FSR2Quality), Z_Construct_UEnum_FSR2MovieRenderPipeline_EFSR2MoviePipelineQuality, METADATA_PARAMS(Z_Construct_UClass_UFSR2MoviePipelineSettings_Statics::NewProp_FSR2Quality_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFSR2MoviePipelineSettings_Statics::NewProp_FSR2Quality_MetaData)) }; // 4241831223
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFSR2MoviePipelineSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFSR2MoviePipelineSettings_Statics::NewProp_FSR2Quality_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFSR2MoviePipelineSettings_Statics::NewProp_FSR2Quality,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFSR2MoviePipelineSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFSR2MoviePipelineSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFSR2MoviePipelineSettings_Statics::ClassParams = {
		&UFSR2MoviePipelineSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFSR2MoviePipelineSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFSR2MoviePipelineSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFSR2MoviePipelineSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFSR2MoviePipelineSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFSR2MoviePipelineSettings()
	{
		if (!Z_Registration_Info_UClass_UFSR2MoviePipelineSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFSR2MoviePipelineSettings.OuterSingleton, Z_Construct_UClass_UFSR2MoviePipelineSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFSR2MoviePipelineSettings.OuterSingleton;
	}
	template<> FSR2MOVIERENDERPIPELINE_API UClass* StaticClass<UFSR2MoviePipelineSettings>()
	{
		return UFSR2MoviePipelineSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFSR2MoviePipelineSettings);
	UFSR2MoviePipelineSettings::~UFSR2MoviePipelineSettings() {}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_FSR2MovieRenderPipeline_Source_FSR2MovieRenderPipeline_Public_FSR2MoviePipelineSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_FSR2MovieRenderPipeline_Source_FSR2MovieRenderPipeline_Public_FSR2MoviePipelineSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFSR2MoviePipelineSettings, UFSR2MoviePipelineSettings::StaticClass, TEXT("UFSR2MoviePipelineSettings"), &Z_Registration_Info_UClass_UFSR2MoviePipelineSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFSR2MoviePipelineSettings), 4222879076U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_FSR2MovieRenderPipeline_Source_FSR2MovieRenderPipeline_Public_FSR2MoviePipelineSettings_h_3615636302(TEXT("/Script/FSR2MovieRenderPipeline"),
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_FSR2MovieRenderPipeline_Source_FSR2MovieRenderPipeline_Public_FSR2MoviePipelineSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_FSR2MovieRenderPipeline_Source_FSR2MovieRenderPipeline_Public_FSR2MoviePipelineSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
