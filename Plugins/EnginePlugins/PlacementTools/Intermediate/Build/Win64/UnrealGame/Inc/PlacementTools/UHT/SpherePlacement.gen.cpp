// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlacementTools/Public/SpherePlacement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpherePlacement() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	PLACEMENTTOOLS_API UClass* Z_Construct_UClass_APlacementToolBase();
	PLACEMENTTOOLS_API UClass* Z_Construct_UClass_ASpherePlacement();
	PLACEMENTTOOLS_API UClass* Z_Construct_UClass_ASpherePlacement_NoRegister();
	PLACEMENTTOOLS_API UEnum* Z_Construct_UEnum_PlacementTools_EFadeAxis();
	UPackage* Z_Construct_UPackage__Script_PlacementTools();
// End Cross Module References
	void ASpherePlacement::StaticRegisterNativesASpherePlacement()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpherePlacement);
	UClass* Z_Construct_UClass_ASpherePlacement_NoRegister()
	{
		return ASpherePlacement::StaticClass();
	}
	struct Z_Construct_UClass_ASpherePlacement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SphereBrush_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FadeDirection_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_FadeDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceChannel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
		static const UECodeGen_Private::FNamePropertyParams NewProp_NotPlaceOnActorTags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NotPlaceOnActorTags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NotPlaceOnActorTags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpherePlacement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlacementToolBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PlacementTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpherePlacement_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SpherePlacement.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SpherePlacement.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpherePlacement_Statics::NewProp_Radius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SpherePlacement" },
		{ "ModuleRelativePath", "Public/SpherePlacement.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpherePlacement_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASpherePlacement, Radius), METADATA_PARAMS(Z_Construct_UClass_ASpherePlacement_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpherePlacement_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpherePlacement_Statics::NewProp_SphereBrush_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SpherePlacement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SpherePlacement.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpherePlacement_Statics::NewProp_SphereBrush = { "SphereBrush", nullptr, (EPropertyFlags)0x002208000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASpherePlacement, SphereBrush), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpherePlacement_Statics::NewProp_SphereBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpherePlacement_Statics::NewProp_SphereBrush_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpherePlacement_Statics::NewProp_FadeDirection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SpherePlacement" },
		{ "ModuleRelativePath", "Public/SpherePlacement.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASpherePlacement_Statics::NewProp_FadeDirection = { "FadeDirection", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASpherePlacement, FadeDirection), Z_Construct_UEnum_PlacementTools_EFadeAxis, METADATA_PARAMS(Z_Construct_UClass_ASpherePlacement_Statics::NewProp_FadeDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpherePlacement_Statics::NewProp_FadeDirection_MetaData)) }; // 1952967975
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpherePlacement_Statics::NewProp_TraceChannel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SpherePlacement" },
		{ "ModuleRelativePath", "Public/SpherePlacement.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASpherePlacement_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASpherePlacement, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UClass_ASpherePlacement_Statics::NewProp_TraceChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpherePlacement_Statics::NewProp_TraceChannel_MetaData)) }; // 727872708
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASpherePlacement_Statics::NewProp_NotPlaceOnActorTags_Inner = { "NotPlaceOnActorTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpherePlacement_Statics::NewProp_NotPlaceOnActorTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SpherePlacement" },
		{ "ModuleRelativePath", "Public/SpherePlacement.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASpherePlacement_Statics::NewProp_NotPlaceOnActorTags = { "NotPlaceOnActorTags", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASpherePlacement, NotPlaceOnActorTags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASpherePlacement_Statics::NewProp_NotPlaceOnActorTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpherePlacement_Statics::NewProp_NotPlaceOnActorTags_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpherePlacement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpherePlacement_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpherePlacement_Statics::NewProp_SphereBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpherePlacement_Statics::NewProp_FadeDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpherePlacement_Statics::NewProp_TraceChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpherePlacement_Statics::NewProp_NotPlaceOnActorTags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpherePlacement_Statics::NewProp_NotPlaceOnActorTags,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpherePlacement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpherePlacement>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpherePlacement_Statics::ClassParams = {
		&ASpherePlacement::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASpherePlacement_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASpherePlacement_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASpherePlacement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpherePlacement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpherePlacement()
	{
		if (!Z_Registration_Info_UClass_ASpherePlacement.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpherePlacement.OuterSingleton, Z_Construct_UClass_ASpherePlacement_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASpherePlacement.OuterSingleton;
	}
	template<> PLACEMENTTOOLS_API UClass* StaticClass<ASpherePlacement>()
	{
		return ASpherePlacement::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpherePlacement);
	ASpherePlacement::~ASpherePlacement() {}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_PlacementTools_Source_PlacementTools_Public_SpherePlacement_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_PlacementTools_Source_PlacementTools_Public_SpherePlacement_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASpherePlacement, ASpherePlacement::StaticClass, TEXT("ASpherePlacement"), &Z_Registration_Info_UClass_ASpherePlacement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpherePlacement), 721821538U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_PlacementTools_Source_PlacementTools_Public_SpherePlacement_h_3108904345(TEXT("/Script/PlacementTools"),
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_PlacementTools_Source_PlacementTools_Public_SpherePlacement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_PlacementTools_Source_PlacementTools_Public_SpherePlacement_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
