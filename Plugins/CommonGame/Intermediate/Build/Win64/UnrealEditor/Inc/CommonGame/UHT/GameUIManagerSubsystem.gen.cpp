// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonGame/Public/GameUIManagerSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameUIManagerSubsystem() {}
// Cross Module References
	COMMONGAME_API UClass* Z_Construct_UClass_UGameUIManagerSubsystem();
	COMMONGAME_API UClass* Z_Construct_UClass_UGameUIManagerSubsystem_NoRegister();
	COMMONGAME_API UClass* Z_Construct_UClass_UGameUIPolicy_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_CommonGame();
// End Cross Module References
	void UGameUIManagerSubsystem::StaticRegisterNativesUGameUIManagerSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameUIManagerSubsystem);
	UClass* Z_Construct_UClass_UGameUIManagerSubsystem_NoRegister()
	{
		return UGameUIManagerSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UGameUIManagerSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPolicy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentPolicy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultUIPolicyClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_DefaultUIPolicyClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameUIManagerSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameUIManagerSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GameUIManagerSubsystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GameUIManagerSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameUIManagerSubsystem_Statics::NewProp_CurrentPolicy_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameUIManagerSubsystem" },
		{ "ModuleRelativePath", "Public/GameUIManagerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameUIManagerSubsystem_Statics::NewProp_CurrentPolicy = { "CurrentPolicy", nullptr, (EPropertyFlags)0x0040000000002005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameUIManagerSubsystem, CurrentPolicy), Z_Construct_UClass_UGameUIPolicy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameUIManagerSubsystem_Statics::NewProp_CurrentPolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameUIManagerSubsystem_Statics::NewProp_CurrentPolicy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameUIManagerSubsystem_Statics::NewProp_DefaultUIPolicyClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameUIManagerSubsystem" },
		{ "ModuleRelativePath", "Public/GameUIManagerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UGameUIManagerSubsystem_Statics::NewProp_DefaultUIPolicyClass = { "DefaultUIPolicyClass", nullptr, (EPropertyFlags)0x0044000000004005, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameUIManagerSubsystem, DefaultUIPolicyClass), Z_Construct_UClass_UGameUIPolicy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameUIManagerSubsystem_Statics::NewProp_DefaultUIPolicyClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameUIManagerSubsystem_Statics::NewProp_DefaultUIPolicyClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameUIManagerSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameUIManagerSubsystem_Statics::NewProp_CurrentPolicy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameUIManagerSubsystem_Statics::NewProp_DefaultUIPolicyClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameUIManagerSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameUIManagerSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameUIManagerSubsystem_Statics::ClassParams = {
		&UGameUIManagerSubsystem::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameUIManagerSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameUIManagerSubsystem_Statics::PropPointers),
		0,
		0x001000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UGameUIManagerSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameUIManagerSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameUIManagerSubsystem()
	{
		if (!Z_Registration_Info_UClass_UGameUIManagerSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameUIManagerSubsystem.OuterSingleton, Z_Construct_UClass_UGameUIManagerSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameUIManagerSubsystem.OuterSingleton;
	}
	template<> COMMONGAME_API UClass* StaticClass<UGameUIManagerSubsystem>()
	{
		return UGameUIManagerSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameUIManagerSubsystem);
	UGameUIManagerSubsystem::~UGameUIManagerSubsystem() {}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_GameUIManagerSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_GameUIManagerSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameUIManagerSubsystem, UGameUIManagerSubsystem::StaticClass, TEXT("UGameUIManagerSubsystem"), &Z_Registration_Info_UClass_UGameUIManagerSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameUIManagerSubsystem), 2590187064U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_GameUIManagerSubsystem_h_1661971894(TEXT("/Script/CommonGame"),
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_GameUIManagerSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_GameUIManagerSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
