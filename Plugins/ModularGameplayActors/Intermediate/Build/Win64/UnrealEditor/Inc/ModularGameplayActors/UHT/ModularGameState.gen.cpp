// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularGameplayActors/Public/ModularGameState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModularGameState() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameState();
	MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularGameState();
	MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularGameState_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ModularGameplayActors();
// End Cross Module References
	void AModularGameState::StaticRegisterNativesAModularGameState()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AModularGameState);
	UClass* Z_Construct_UClass_AModularGameState_NoRegister()
	{
		return AModularGameState::StaticClass();
	}
	struct Z_Construct_UClass_AModularGameState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AModularGameState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameState,
		(UObject* (*)())Z_Construct_UPackage__Script_ModularGameplayActors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularGameState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ModularGameState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ModularGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AModularGameState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AModularGameState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AModularGameState_Statics::ClassParams = {
		&AModularGameState::StaticClass,
		"Game",
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
		METADATA_PARAMS(Z_Construct_UClass_AModularGameState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AModularGameState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AModularGameState()
	{
		if (!Z_Registration_Info_UClass_AModularGameState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AModularGameState.OuterSingleton, Z_Construct_UClass_AModularGameState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AModularGameState.OuterSingleton;
	}
	template<> MODULARGAMEPLAYACTORS_API UClass* StaticClass<AModularGameState>()
	{
		return AModularGameState::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AModularGameState);
	AModularGameState::~AModularGameState() {}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_ModularGameplayActors_Source_ModularGameplayActors_Public_ModularGameState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_ModularGameplayActors_Source_ModularGameplayActors_Public_ModularGameState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AModularGameState, AModularGameState::StaticClass, TEXT("AModularGameState"), &Z_Registration_Info_UClass_AModularGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AModularGameState), 416164346U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_ModularGameplayActors_Source_ModularGameplayActors_Public_ModularGameState_h_521769377(TEXT("/Script/ModularGameplayActors"),
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_ModularGameplayActors_Source_ModularGameplayActors_Public_ModularGameState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_ModularGameplayActors_Source_ModularGameplayActors_Public_ModularGameState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
