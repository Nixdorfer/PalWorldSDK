// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularGameplayActors/Public/ModularAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModularAIController() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularAIController();
	MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularAIController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ModularGameplayActors();
// End Cross Module References
	void AModularAIController::StaticRegisterNativesAModularAIController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AModularAIController);
	UClass* Z_Construct_UClass_AModularAIController_NoRegister()
	{
		return AModularAIController::StaticClass();
	}
	struct Z_Construct_UClass_AModularAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AModularAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_ModularGameplayActors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularAIController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "ModularAIController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ModularAIController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AModularAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AModularAIController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AModularAIController_Statics::ClassParams = {
		&AModularAIController::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AModularAIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AModularAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AModularAIController()
	{
		if (!Z_Registration_Info_UClass_AModularAIController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AModularAIController.OuterSingleton, Z_Construct_UClass_AModularAIController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AModularAIController.OuterSingleton;
	}
	template<> MODULARGAMEPLAYACTORS_API UClass* StaticClass<AModularAIController>()
	{
		return AModularAIController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AModularAIController);
	AModularAIController::~AModularAIController() {}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_ModularGameplayActors_Source_ModularGameplayActors_Public_ModularAIController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_ModularGameplayActors_Source_ModularGameplayActors_Public_ModularAIController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AModularAIController, AModularAIController::StaticClass, TEXT("AModularAIController"), &Z_Registration_Info_UClass_AModularAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AModularAIController), 3666074925U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_ModularGameplayActors_Source_ModularGameplayActors_Public_ModularAIController_h_1897877416(TEXT("/Script/ModularGameplayActors"),
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_ModularGameplayActors_Source_ModularGameplayActors_Public_ModularAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_ModularGameplayActors_Source_ModularGameplayActors_Public_ModularAIController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
