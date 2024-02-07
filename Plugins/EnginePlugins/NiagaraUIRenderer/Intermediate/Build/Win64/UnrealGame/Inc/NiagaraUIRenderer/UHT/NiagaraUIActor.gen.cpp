// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NiagaraUIRenderer/Public/NiagaraUIActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraUIActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	NIAGARAUIRENDERER_API UClass* Z_Construct_UClass_ANiagaraUIActor();
	NIAGARAUIRENDERER_API UClass* Z_Construct_UClass_ANiagaraUIActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NiagaraUIRenderer();
// End Cross Module References
	void ANiagaraUIActor::StaticRegisterNativesANiagaraUIActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANiagaraUIActor);
	UClass* Z_Construct_UClass_ANiagaraUIActor_NoRegister()
	{
		return ANiagaraUIActor::StaticClass();
	}
	struct Z_Construct_UClass_ANiagaraUIActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANiagaraUIActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraUIRenderer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANiagaraUIActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "NiagaraUIActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NiagaraUIActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANiagaraUIActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANiagaraUIActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANiagaraUIActor_Statics::ClassParams = {
		&ANiagaraUIActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANiagaraUIActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANiagaraUIActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANiagaraUIActor()
	{
		if (!Z_Registration_Info_UClass_ANiagaraUIActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANiagaraUIActor.OuterSingleton, Z_Construct_UClass_ANiagaraUIActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANiagaraUIActor.OuterSingleton;
	}
	template<> NIAGARAUIRENDERER_API UClass* StaticClass<ANiagaraUIActor>()
	{
		return ANiagaraUIActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANiagaraUIActor);
	ANiagaraUIActor::~ANiagaraUIActor() {}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_NiagaraUIRenderer_Source_NiagaraUIRenderer_Public_NiagaraUIActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_NiagaraUIRenderer_Source_NiagaraUIRenderer_Public_NiagaraUIActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANiagaraUIActor, ANiagaraUIActor::StaticClass, TEXT("ANiagaraUIActor"), &Z_Registration_Info_UClass_ANiagaraUIActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANiagaraUIActor), 377429144U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_NiagaraUIRenderer_Source_NiagaraUIRenderer_Public_NiagaraUIActor_h_2798055115(TEXT("/Script/NiagaraUIRenderer"),
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_NiagaraUIRenderer_Source_NiagaraUIRenderer_Public_NiagaraUIActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_NiagaraUIRenderer_Source_NiagaraUIRenderer_Public_NiagaraUIActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
