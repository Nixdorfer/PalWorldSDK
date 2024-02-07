// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonGame/Public/GameUIPolicy.h"
#include "CommonGame/Public/GameUIManagerSubsystem.h"
#include "CommonGame/Public/RootViewportLayoutInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameUIPolicy() {}
// Cross Module References
	COMMONGAME_API UClass* Z_Construct_UClass_UGameUIPolicy();
	COMMONGAME_API UClass* Z_Construct_UClass_UGameUIPolicy_NoRegister();
	COMMONGAME_API UClass* Z_Construct_UClass_UPrimaryGameLayout_NoRegister();
	COMMONGAME_API UScriptStruct* Z_Construct_UScriptStruct_FRootViewportLayoutInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_CommonGame();
// End Cross Module References
	void UGameUIPolicy::StaticRegisterNativesUGameUIPolicy()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameUIPolicy);
	UClass* Z_Construct_UClass_UGameUIPolicy_NoRegister()
	{
		return UGameUIPolicy::StaticClass();
	}
	struct Z_Construct_UClass_UGameUIPolicy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayoutClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_LayoutClass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RootViewportLayouts_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootViewportLayouts_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RootViewportLayouts;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameUIPolicy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameUIPolicy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GameUIPolicy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GameUIPolicy.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameUIPolicy_Statics::NewProp_LayoutClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameUIPolicy" },
		{ "ModuleRelativePath", "Public/GameUIPolicy.h" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UGameUIPolicy_Statics::NewProp_LayoutClass = { "LayoutClass", nullptr, (EPropertyFlags)0x0044000000000005, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameUIPolicy, LayoutClass), Z_Construct_UClass_UPrimaryGameLayout_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameUIPolicy_Statics::NewProp_LayoutClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameUIPolicy_Statics::NewProp_LayoutClass_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameUIPolicy_Statics::NewProp_RootViewportLayouts_Inner = { "RootViewportLayouts", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRootViewportLayoutInfo, METADATA_PARAMS(nullptr, 0) }; // 1512199379
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameUIPolicy_Statics::NewProp_RootViewportLayouts_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameUIPolicy" },
		{ "ModuleRelativePath", "Public/GameUIPolicy.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameUIPolicy_Statics::NewProp_RootViewportLayouts = { "RootViewportLayouts", nullptr, (EPropertyFlags)0x0040008000002005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameUIPolicy, RootViewportLayouts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameUIPolicy_Statics::NewProp_RootViewportLayouts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameUIPolicy_Statics::NewProp_RootViewportLayouts_MetaData)) }; // 1512199379
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameUIPolicy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameUIPolicy_Statics::NewProp_LayoutClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameUIPolicy_Statics::NewProp_RootViewportLayouts_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameUIPolicy_Statics::NewProp_RootViewportLayouts,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameUIPolicy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameUIPolicy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameUIPolicy_Statics::ClassParams = {
		&UGameUIPolicy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameUIPolicy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameUIPolicy_Statics::PropPointers),
		0,
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGameUIPolicy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameUIPolicy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameUIPolicy()
	{
		if (!Z_Registration_Info_UClass_UGameUIPolicy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameUIPolicy.OuterSingleton, Z_Construct_UClass_UGameUIPolicy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameUIPolicy.OuterSingleton;
	}
	template<> COMMONGAME_API UClass* StaticClass<UGameUIPolicy>()
	{
		return UGameUIPolicy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameUIPolicy);
	UGameUIPolicy::~UGameUIPolicy() {}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_GameUIPolicy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_GameUIPolicy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameUIPolicy, UGameUIPolicy::StaticClass, TEXT("UGameUIPolicy"), &Z_Registration_Info_UClass_UGameUIPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameUIPolicy), 1724018115U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_GameUIPolicy_h_464235033(TEXT("/Script/CommonGame"),
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_GameUIPolicy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_GameUIPolicy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
