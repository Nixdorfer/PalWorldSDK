// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NiagaraUIRenderer/Public/NiagaraUIComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraUIComponent() {}
// Cross Module References
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent();
	NIAGARAUIRENDERER_API UClass* Z_Construct_UClass_UNiagaraUIComponent();
	NIAGARAUIRENDERER_API UClass* Z_Construct_UClass_UNiagaraUIComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NiagaraUIRenderer();
// End Cross Module References
	void UNiagaraUIComponent::StaticRegisterNativesUNiagaraUIComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraUIComponent);
	UClass* Z_Construct_UClass_UNiagaraUIComponent_NoRegister()
	{
		return UNiagaraUIComponent::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraUIComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraUIComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraUIRenderer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraUIComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Object Physics Collision Mobility VirtualTexture" },
		{ "IncludePath", "NiagaraUIComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NiagaraUIComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraUIComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraUIComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraUIComponent_Statics::ClassParams = {
		&UNiagaraUIComponent::StaticClass,
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
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraUIComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraUIComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraUIComponent()
	{
		if (!Z_Registration_Info_UClass_UNiagaraUIComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraUIComponent.OuterSingleton, Z_Construct_UClass_UNiagaraUIComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraUIComponent.OuterSingleton;
	}
	template<> NIAGARAUIRENDERER_API UClass* StaticClass<UNiagaraUIComponent>()
	{
		return UNiagaraUIComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraUIComponent);
	UNiagaraUIComponent::~UNiagaraUIComponent() {}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_NiagaraUIRenderer_Source_NiagaraUIRenderer_Public_NiagaraUIComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_NiagaraUIRenderer_Source_NiagaraUIRenderer_Public_NiagaraUIComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraUIComponent, UNiagaraUIComponent::StaticClass, TEXT("UNiagaraUIComponent"), &Z_Registration_Info_UClass_UNiagaraUIComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraUIComponent), 519459934U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_NiagaraUIRenderer_Source_NiagaraUIRenderer_Public_NiagaraUIComponent_h_2204325636(TEXT("/Script/NiagaraUIRenderer"),
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_NiagaraUIRenderer_Source_NiagaraUIRenderer_Public_NiagaraUIComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_NiagaraUIRenderer_Source_NiagaraUIRenderer_Public_NiagaraUIComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
