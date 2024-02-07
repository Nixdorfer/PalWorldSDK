// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlacementTools/Public/BoxPlacement.h"
#include "PlacementTools/Public/Directions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoxPlacement() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	PLACEMENTTOOLS_API UClass* Z_Construct_UClass_ABoxPlacement();
	PLACEMENTTOOLS_API UClass* Z_Construct_UClass_ABoxPlacement_NoRegister();
	PLACEMENTTOOLS_API UClass* Z_Construct_UClass_APlacementToolBase();
	PLACEMENTTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FDirections();
	UPackage* Z_Construct_UPackage__Script_PlacementTools();
// End Cross Module References
	void ABoxPlacement::StaticRegisterNativesABoxPlacement()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABoxPlacement);
	UClass* Z_Construct_UClass_ABoxPlacement_NoRegister()
	{
		return ABoxPlacement::StaticClass();
	}
	struct Z_Construct_UClass_ABoxPlacement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxExtent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoxExtent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxBrush_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FadeDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FadeDirection;
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
	UObject* (*const Z_Construct_UClass_ABoxPlacement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlacementToolBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PlacementTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxPlacement_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BoxPlacement.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BoxPlacement.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxPlacement_Statics::NewProp_BoxExtent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BoxPlacement" },
		{ "ModuleRelativePath", "Public/BoxPlacement.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABoxPlacement_Statics::NewProp_BoxExtent = { "BoxExtent", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABoxPlacement, BoxExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABoxPlacement_Statics::NewProp_BoxExtent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxPlacement_Statics::NewProp_BoxExtent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxPlacement_Statics::NewProp_BoxBrush_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BoxPlacement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BoxPlacement.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoxPlacement_Statics::NewProp_BoxBrush = { "BoxBrush", nullptr, (EPropertyFlags)0x002208000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABoxPlacement, BoxBrush), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoxPlacement_Statics::NewProp_BoxBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxPlacement_Statics::NewProp_BoxBrush_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxPlacement_Statics::NewProp_FadeDirection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BoxPlacement" },
		{ "ModuleRelativePath", "Public/BoxPlacement.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABoxPlacement_Statics::NewProp_FadeDirection = { "FadeDirection", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABoxPlacement, FadeDirection), Z_Construct_UScriptStruct_FDirections, METADATA_PARAMS(Z_Construct_UClass_ABoxPlacement_Statics::NewProp_FadeDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxPlacement_Statics::NewProp_FadeDirection_MetaData)) }; // 667030282
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxPlacement_Statics::NewProp_TraceChannel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BoxPlacement" },
		{ "ModuleRelativePath", "Public/BoxPlacement.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABoxPlacement_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABoxPlacement, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UClass_ABoxPlacement_Statics::NewProp_TraceChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxPlacement_Statics::NewProp_TraceChannel_MetaData)) }; // 727872708
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ABoxPlacement_Statics::NewProp_NotPlaceOnActorTags_Inner = { "NotPlaceOnActorTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxPlacement_Statics::NewProp_NotPlaceOnActorTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BoxPlacement" },
		{ "ModuleRelativePath", "Public/BoxPlacement.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABoxPlacement_Statics::NewProp_NotPlaceOnActorTags = { "NotPlaceOnActorTags", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABoxPlacement, NotPlaceOnActorTags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABoxPlacement_Statics::NewProp_NotPlaceOnActorTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxPlacement_Statics::NewProp_NotPlaceOnActorTags_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABoxPlacement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxPlacement_Statics::NewProp_BoxExtent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxPlacement_Statics::NewProp_BoxBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxPlacement_Statics::NewProp_FadeDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxPlacement_Statics::NewProp_TraceChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxPlacement_Statics::NewProp_NotPlaceOnActorTags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxPlacement_Statics::NewProp_NotPlaceOnActorTags,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABoxPlacement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABoxPlacement>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABoxPlacement_Statics::ClassParams = {
		&ABoxPlacement::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABoxPlacement_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABoxPlacement_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABoxPlacement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABoxPlacement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABoxPlacement()
	{
		if (!Z_Registration_Info_UClass_ABoxPlacement.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABoxPlacement.OuterSingleton, Z_Construct_UClass_ABoxPlacement_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABoxPlacement.OuterSingleton;
	}
	template<> PLACEMENTTOOLS_API UClass* StaticClass<ABoxPlacement>()
	{
		return ABoxPlacement::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABoxPlacement);
	ABoxPlacement::~ABoxPlacement() {}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_PlacementTools_Source_PlacementTools_Public_BoxPlacement_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_PlacementTools_Source_PlacementTools_Public_BoxPlacement_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABoxPlacement, ABoxPlacement::StaticClass, TEXT("ABoxPlacement"), &Z_Registration_Info_UClass_ABoxPlacement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABoxPlacement), 1098165392U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_PlacementTools_Source_PlacementTools_Public_BoxPlacement_h_2569839642(TEXT("/Script/PlacementTools"),
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_PlacementTools_Source_PlacementTools_Public_BoxPlacement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_PlacementTools_Source_PlacementTools_Public_BoxPlacement_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
