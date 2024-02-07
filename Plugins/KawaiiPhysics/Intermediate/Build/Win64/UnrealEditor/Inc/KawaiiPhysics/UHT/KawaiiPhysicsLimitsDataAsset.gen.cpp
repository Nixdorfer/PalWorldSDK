// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KawaiiPhysics/Public/KawaiiPhysicsLimitsDataAsset.h"
#include "KawaiiPhysics/Public/CapsuleLimit.h"
#include "KawaiiPhysics/Public/PlanarLimit.h"
#include "KawaiiPhysics/Public/SphericalLimit.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKawaiiPhysicsLimitsDataAsset() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	KAWAIIPHYSICS_API UClass* Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset();
	KAWAIIPHYSICS_API UClass* Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_NoRegister();
	KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FCapsuleLimit();
	KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FPlanarLimit();
	KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FSphericalLimit();
	UPackage* Z_Construct_UPackage__Script_KawaiiPhysics();
// End Cross Module References
	void UKawaiiPhysicsLimitsDataAsset::StaticRegisterNativesUKawaiiPhysicsLimitsDataAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UKawaiiPhysicsLimitsDataAsset);
	UClass* Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_NoRegister()
	{
		return UKawaiiPhysicsLimitsDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SphericalLimits_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SphericalLimits_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SphericalLimits;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CapsuleLimits_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleLimits_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CapsuleLimits;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlanarLimits_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlanarLimits_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PlanarLimits;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_KawaiiPhysics,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "KawaiiPhysicsLimitsDataAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_SphericalLimits_Inner = { "SphericalLimits", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSphericalLimit, METADATA_PARAMS(nullptr, 0) }; // 2006503540
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_SphericalLimits_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "KawaiiPhysicsLimitsDataAsset" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_SphericalLimits = { "SphericalLimits", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKawaiiPhysicsLimitsDataAsset, SphericalLimits), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_SphericalLimits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_SphericalLimits_MetaData)) }; // 2006503540
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_CapsuleLimits_Inner = { "CapsuleLimits", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCapsuleLimit, METADATA_PARAMS(nullptr, 0) }; // 3743386246
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_CapsuleLimits_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "KawaiiPhysicsLimitsDataAsset" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_CapsuleLimits = { "CapsuleLimits", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKawaiiPhysicsLimitsDataAsset, CapsuleLimits), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_CapsuleLimits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_CapsuleLimits_MetaData)) }; // 3743386246
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_PlanarLimits_Inner = { "PlanarLimits", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPlanarLimit, METADATA_PARAMS(nullptr, 0) }; // 1872324481
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_PlanarLimits_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "KawaiiPhysicsLimitsDataAsset" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_PlanarLimits = { "PlanarLimits", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKawaiiPhysicsLimitsDataAsset, PlanarLimits), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_PlanarLimits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_PlanarLimits_MetaData)) }; // 1872324481
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_SphericalLimits_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_SphericalLimits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_CapsuleLimits_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_CapsuleLimits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_PlanarLimits_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_PlanarLimits,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKawaiiPhysicsLimitsDataAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::ClassParams = {
		&UKawaiiPhysicsLimitsDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset()
	{
		if (!Z_Registration_Info_UClass_UKawaiiPhysicsLimitsDataAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKawaiiPhysicsLimitsDataAsset.OuterSingleton, Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UKawaiiPhysicsLimitsDataAsset.OuterSingleton;
	}
	template<> KAWAIIPHYSICS_API UClass* StaticClass<UKawaiiPhysicsLimitsDataAsset>()
	{
		return UKawaiiPhysicsLimitsDataAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKawaiiPhysicsLimitsDataAsset);
	UKawaiiPhysicsLimitsDataAsset::~UKawaiiPhysicsLimitsDataAsset() {}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsLimitsDataAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsLimitsDataAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset, UKawaiiPhysicsLimitsDataAsset::StaticClass, TEXT("UKawaiiPhysicsLimitsDataAsset"), &Z_Registration_Info_UClass_UKawaiiPhysicsLimitsDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKawaiiPhysicsLimitsDataAsset), 3371496453U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsLimitsDataAsset_h_1764500793(TEXT("/Script/KawaiiPhysics"),
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsLimitsDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsLimitsDataAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
