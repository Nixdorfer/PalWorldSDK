// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonGame/Public/CommonMessagingSubsystem.h"
#include "Engine/Classes/Engine/LocalPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonMessagingSubsystem() {}
// Cross Module References
	COMMONGAME_API UClass* Z_Construct_UClass_UCommonMessagingSubsystem();
	COMMONGAME_API UClass* Z_Construct_UClass_UCommonMessagingSubsystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULocalPlayerSubsystem();
	UPackage* Z_Construct_UPackage__Script_CommonGame();
// End Cross Module References
	void UCommonMessagingSubsystem::StaticRegisterNativesUCommonMessagingSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonMessagingSubsystem);
	UClass* Z_Construct_UClass_UCommonMessagingSubsystem_NoRegister()
	{
		return UCommonMessagingSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UCommonMessagingSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonMessagingSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULocalPlayerSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonMessagingSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CommonMessagingSubsystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CommonMessagingSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonMessagingSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonMessagingSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonMessagingSubsystem_Statics::ClassParams = {
		&UCommonMessagingSubsystem::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCommonMessagingSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonMessagingSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonMessagingSubsystem()
	{
		if (!Z_Registration_Info_UClass_UCommonMessagingSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonMessagingSubsystem.OuterSingleton, Z_Construct_UClass_UCommonMessagingSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonMessagingSubsystem.OuterSingleton;
	}
	template<> COMMONGAME_API UClass* StaticClass<UCommonMessagingSubsystem>()
	{
		return UCommonMessagingSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonMessagingSubsystem);
	UCommonMessagingSubsystem::~UCommonMessagingSubsystem() {}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_CommonMessagingSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_CommonMessagingSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCommonMessagingSubsystem, UCommonMessagingSubsystem::StaticClass, TEXT("UCommonMessagingSubsystem"), &Z_Registration_Info_UClass_UCommonMessagingSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonMessagingSubsystem), 4042934894U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_CommonMessagingSubsystem_h_2007700732(TEXT("/Script/CommonGame"),
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_CommonMessagingSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_CommonMessagingSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
