// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlacementTools/Public/PlacementToolBase.h"
#include "PlacementTools/Public/Directions.h"
#include "PlacementTools/Public/LinearDistribution.h"
#include "PlacementTools/Public/PlacementItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlacementToolBase() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRandomStream();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	PLACEMENTTOOLS_API UClass* Z_Construct_UClass_APlacementToolBase();
	PLACEMENTTOOLS_API UClass* Z_Construct_UClass_APlacementToolBase_NoRegister();
	PLACEMENTTOOLS_API UEnum* Z_Construct_UEnum_PlacementTools_EPlacementMode();
	PLACEMENTTOOLS_API UEnum* Z_Construct_UEnum_PlacementTools_EPlacementStyle();
	PLACEMENTTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FDirections();
	PLACEMENTTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FLinearDistribution();
	PLACEMENTTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FPlacementItem();
	UPackage* Z_Construct_UPackage__Script_PlacementTools();
// End Cross Module References
	DEFINE_FUNCTION(APlacementToolBase::execGenerate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Generate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlacementToolBase::execRandomizeSeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RandomizeSeed();
		P_NATIVE_END;
	}
	void APlacementToolBase::StaticRegisterNativesAPlacementToolBase()
	{
		UClass* Class = APlacementToolBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Generate", &APlacementToolBase::execGenerate },
			{ "RandomizeSeed", &APlacementToolBase::execRandomizeSeed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlacementToolBase_Generate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlacementToolBase_Generate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlacementToolBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlacementToolBase_Generate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlacementToolBase, nullptr, "Generate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlacementToolBase_Generate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlacementToolBase_Generate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlacementToolBase_Generate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlacementToolBase_Generate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlacementToolBase_RandomizeSeed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlacementToolBase_RandomizeSeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlacementToolBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlacementToolBase_RandomizeSeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlacementToolBase, nullptr, "RandomizeSeed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlacementToolBase_RandomizeSeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlacementToolBase_RandomizeSeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlacementToolBase_RandomizeSeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlacementToolBase_RandomizeSeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlacementToolBase);
	UClass* Z_Construct_UClass_APlacementToolBase_NoRegister()
	{
		return APlacementToolBase::StaticClass();
	}
	struct Z_Construct_UClass_APlacementToolBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isInEditor_MetaData[];
#endif
		static void NewProp_isInEditor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isInEditor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EasySelectBillboard_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EasySelectBillboard;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomStream_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RandomStream;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistributionCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DistributionCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlacementMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_PlacementMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlacementStyle_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_PlacementStyle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlacementItems_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlacementItems_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PlacementItems;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SurfaceDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Seed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRandomizeRotation_MetaData[];
#endif
		static void NewProp_bRandomizeRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandomizeRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationMin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationMax_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRandomizeScale_MetaData[];
#endif
		static void NewProp_bRandomizeScale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandomizeScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUniformScale_MetaData[];
#endif
		static void NewProp_bUniformScale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUniformScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleMin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScaleMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleMax_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScaleMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRotateToSurface_MetaData[];
#endif
		static void NewProp_bRotateToSurface_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRotateToSurface;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAdjustToSurface_MetaData[];
#endif
		static void NewProp_bAdjustToSurface_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAdjustToSurface;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAvoidOverlapBounds_MetaData[];
#endif
		static void NewProp_bAvoidOverlapBounds_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAvoidOverlapBounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDeleteChildrenWhenDeleted_MetaData[];
#endif
		static void NewProp_bDeleteChildrenWhenDeleted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeleteChildrenWhenDeleted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHideBrush_MetaData[];
#endif
		static void NewProp_bHideBrush_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideBrush;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlacementToolBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PlacementTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APlacementToolBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlacementToolBase_Generate, "Generate" }, // 685319919
		{ &Z_Construct_UFunction_APlacementToolBase_RandomizeSeed, "RandomizeSeed" }, // 3115705874
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlacementToolBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PlacementToolBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PlacementToolBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlacementToolBase_Statics::NewProp_isInEditor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlacementToolBase" },
		{ "ModuleRelativePath", "Public/PlacementToolBase.h" },
	};
#endif
	void Z_Construct_UClass_APlacementToolBase_Statics::NewProp_isInEditor_SetBit(void* Obj)
	{
		((APlacementToolBase*)Obj)->isInEditor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlacementToolBase_Statics::NewProp_isInEditor = { "isInEditor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(APlacementToolBase), &Z_Construct_UClass_APlacementToolBase_Statics::NewProp_isInEditor_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlacementToolBase_Statics::NewProp_isInEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlacementToolBase_Statics::NewProp_isInEditor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlacementToolBase_Statics::NewProp_SceneComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlacementToolBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlacementToolBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlacementToolBase_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x002208000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlacementToolBase, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlacementToolBase_Statics::NewProp_SceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlacementToolBase_Statics::NewProp_SceneComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlacementToolBase_Statics::NewProp_EasySelectBillboard_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlacementToolBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlacementToolBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlacementToolBase_Statics::NewProp_EasySelectBillboard = { "EasySelectBillboard", nullptr, (EPropertyFlags)0x002208000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlacementToolBase, EasySelectBillboard), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlacementToolBase_Statics::NewProp_EasySelectBillboard_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlacementToolBase_Statics::NewProp_EasySelectBillboard_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlacementToolBase_Statics::NewProp_RandomStream_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlacementToolBase" },
		{ "ModuleRelativePath", "Public/PlacementToolBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlacementToolBase_Statics::NewProp_RandomStream = { "RandomStream", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlacementToolBase, RandomStream), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(Z_Construct_UClass_APlacementToolBase_Statics::NewProp_RandomStream_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlacementToolBase_Statics::NewProp_RandomStream_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlacementToolBase_Statics::NewProp_DistributionCurve_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlacementToolBase" },
		{ "ModuleRelativePath", "Public/PlacementToolBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlacementToolBase_Statics::NewProp_DistributionCurve = { "DistributionCurve", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlacementToolBase, DistributionCurve), Z_Construct_UScriptStruct_FLinearDistribution, METADATA_PARAMS(Z_Construct_UClass_APlacementToolBase_Statics::NewProp_DistributionCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlacementToolBase_Statics::NewProp_DistributionCurve_MetaData)) }; // 229009543
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlacementToolBase_Statics::NewProp_PlacementMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlacementToolBase" },
		{ "ModuleRelativePath", "Public/PlacementToolBase.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APlacementToolBase_Statics::NewProp_PlacementMode = { "PlacementMode", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlacementToolBase, PlacementMode), Z_Construct_UEnum_PlacementTools_EPlacementMode, METADATA_PARAMS(Z_Construct_UClass_APlacementToolBase_Statics::NewProp_PlacementMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlacementToolBase_Statics::NewProp_PlacementMode_MetaData)) }; // 960145344
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlacementToolBase_Statics::NewProp_PlacementStyle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlacementToolBase" },
		{ "ModuleRelativePath", "Public/PlacementToolBase.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APlacementToolBase_Statics::NewProp_PlacementStyle = { "PlacementStyle", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlacementToolBase, PlacementStyle), Z_Construct_UEnum_PlacementTools_EPlacementStyle, METADATA_PARAMS(Z_Construct_UClass_APlacementToolBase_Statics::NewProp_PlacementStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlacementToolBase_Statics::NewProp_PlacementStyle_MetaData)) }; // 1450609921
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlacementToolBase_Statics::NewProp_PlacementItems_Inner = { "PlacementItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPlacementItem, METADATA_PARAMS(nullptr, 0) }; // 1288786844
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlacementToolBase_Statics::NewProp_PlacementItems_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlacementToolBase" },
		{ "ModuleRelativePath", "Public/PlacementToolBase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APlacementToolBase_Statics::NewProp_PlacementItems = { "PlacementItems", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlacementToolBase, PlacementItems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_APlacementToolBase_Statics::NewProp_PlacementItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlacementToolBase_Statics::NewProp_PlacementItems_MetaData)) }; // 1288786844
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlacementToolBase_Statics::NewProp_SurfaceDirection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlacementToolBase" },
		{ "ModuleRelativePath", "Public/PlacementToolBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlacementToolBase_Statics::NewProp_SurfaceDirection = { "SurfaceDirection", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlacementToolBase, SurfaceDirection), Z_Construct_UScriptStruct_FDirections, METADATA_PARAMS(Z_Construct_UClass_APlacementToolBase_Statics::NewProp_SurfaceDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlacementToolBase_Statics::NewProp_SurfaceDirection_MetaData)) }; // 667030282
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlacementToolBase_Statics::NewProp_Amount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlacementToolBase" },
		{ "ModuleRelativePath", "Public/PlacementToolBase.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APlacementToolBase_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlacementToolBase, Amount), METADATA_PARAMS(Z_Construct_UClass_APlacementToolBase_Statics::NewProp_Amount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlacementToolBase_Statics::NewProp_Amount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlacementToolBase_Statics::NewProp_Seed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlacementToolBase" },
		{ "ModuleRelativePath", "Public/PlacementToolBase.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APlacementToolBase_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlacementToolBase, Seed), METADATA_PARAMS(Z_Construct_UClass_APlacementToolBase_Statics::NewProp_Seed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlacementToolBase_Statics::NewProp_Seed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlacementToolBase_Statics::NewProp_Offset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlacementToolBase" },
		{ "ModuleRelativePath", "Public/PlacementToolBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlacementToolBase_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlacementToolBase, Offset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_APlacementToolBase_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlacementToolBase_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlacementToolBase_Statics::NewProp_bRandomizeRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlacementToolBase" },
		{ "ModuleRelativePath", "Public/PlacementToolBase.h" },
	};
#endif
	void Z_Construct_UClass_APlacementToolBase_Statics::NewProp_bRandomizeRotation_SetBit(void* Obj)
	{
		((APlacementToolBase*)Obj)->bRandomizeRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlacementToolBase_Statics::NewProp_bRandomizeRotation = { "bRandomizeRotation", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(APlacementToolBase), &Z_Construct_UClass_APlacementToolBase_Statics::NewProp_bRandomizeRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlacementToolBase_Statics::NewProp_bRandomizeRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlacementToolBase_Statics::NewProp_bRandomizeRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlacementToolBase_Statics::NewProp_RotationMin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlacementToolBase" },
		{ "ModuleRelativePath", "Public/PlacementToolBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlacementToolBase_Statics::NewProp_RotationMin = { "RotationMin", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlacementToolBase, RotationMin), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_APlacementToolBase_Statics::NewProp_RotationMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlacementToolBase_Statics::NewProp_RotationMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlacementToolBase_Statics::NewProp_RotationMax_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlacementToolBase" },
		{ "ModuleRelativePath", "Public/PlacementToolBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlacementToolBase_Statics::NewProp_RotationMax = { "RotationMax", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlacementToolBase, RotationMax), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_APlacementToolBase_Statics::NewProp_RotationMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlacementToolBase_Statics::NewProp_RotationMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlacementToolBase_Statics::NewProp_bRandomizeScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlacementToolBase" },
		{ "ModuleRelativePath", "Public/PlacementToolBase.h" },
	};
#endif
	void Z_Construct_UClass_APlacementToolBase_Statics::NewProp_bRandomizeScale_SetBit(void* Obj)
	{
		((APlacementToolBase*)Obj)->bRandomizeScale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlacementToolBase_Statics::NewProp_bRandomizeScale = { "bRandomizeScale", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(APlacementToolBase), &Z_Construct_UClass_APlacementToolBase_Statics::NewProp_bRandomizeScale_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlacementToolBase_Statics::NewProp_bRandomizeScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlacementToolBase_Statics::NewProp_bRandomizeScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlacementToolBase_Statics::NewProp_bUniformScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlacementToolBase" },
		{ "ModuleRelativePath", "Public/PlacementToolBase.h" },
	};
#endif
	void Z_Construct_UClass_APlacementToolBase_Statics::NewProp_bUniformScale_SetBit(void* Obj)
	{
		((APlacementToolBase*)Obj)->bUniformScale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlacementToolBase_Statics::NewProp_bUniformScale = { "bUniformScale", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(APlacementToolBase), &Z_Construct_UClass_APlacementToolBase_Statics::NewProp_bUniformScale_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlacementToolBase_Statics::NewProp_bUniformScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlacementToolBase_Statics::NewProp_bUniformScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlacementToolBase_Statics::NewProp_ScaleMin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlacementToolBase" },
		{ "ModuleRelativePath", "Public/PlacementToolBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlacementToolBase_Statics::NewProp_ScaleMin = { "ScaleMin", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlacementToolBase, ScaleMin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_APlacementToolBase_Statics::NewProp_ScaleMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlacementToolBase_Statics::NewProp_ScaleMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlacementToolBase_Statics::NewProp_ScaleMax_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlacementToolBase" },
		{ "ModuleRelativePath", "Public/PlacementToolBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlacementToolBase_Statics::NewProp_ScaleMax = { "ScaleMax", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlacementToolBase, ScaleMax), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_APlacementToolBase_Statics::NewProp_ScaleMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlacementToolBase_Statics::NewProp_ScaleMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlacementToolBase_Statics::NewProp_bRotateToSurface_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlacementToolBase" },
		{ "ModuleRelativePath", "Public/PlacementToolBase.h" },
	};
#endif
	void Z_Construct_UClass_APlacementToolBase_Statics::NewProp_bRotateToSurface_SetBit(void* Obj)
	{
		((APlacementToolBase*)Obj)->bRotateToSurface = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlacementToolBase_Statics::NewProp_bRotateToSurface = { "bRotateToSurface", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(APlacementToolBase), &Z_Construct_UClass_APlacementToolBase_Statics::NewProp_bRotateToSurface_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlacementToolBase_Statics::NewProp_bRotateToSurface_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlacementToolBase_Statics::NewProp_bRotateToSurface_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlacementToolBase_Statics::NewProp_bAdjustToSurface_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlacementToolBase" },
		{ "ModuleRelativePath", "Public/PlacementToolBase.h" },
	};
#endif
	void Z_Construct_UClass_APlacementToolBase_Statics::NewProp_bAdjustToSurface_SetBit(void* Obj)
	{
		((APlacementToolBase*)Obj)->bAdjustToSurface = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlacementToolBase_Statics::NewProp_bAdjustToSurface = { "bAdjustToSurface", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(APlacementToolBase), &Z_Construct_UClass_APlacementToolBase_Statics::NewProp_bAdjustToSurface_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlacementToolBase_Statics::NewProp_bAdjustToSurface_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlacementToolBase_Statics::NewProp_bAdjustToSurface_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlacementToolBase_Statics::NewProp_bAvoidOverlapBounds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlacementToolBase" },
		{ "ModuleRelativePath", "Public/PlacementToolBase.h" },
	};
#endif
	void Z_Construct_UClass_APlacementToolBase_Statics::NewProp_bAvoidOverlapBounds_SetBit(void* Obj)
	{
		((APlacementToolBase*)Obj)->bAvoidOverlapBounds = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlacementToolBase_Statics::NewProp_bAvoidOverlapBounds = { "bAvoidOverlapBounds", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(APlacementToolBase), &Z_Construct_UClass_APlacementToolBase_Statics::NewProp_bAvoidOverlapBounds_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlacementToolBase_Statics::NewProp_bAvoidOverlapBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlacementToolBase_Statics::NewProp_bAvoidOverlapBounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlacementToolBase_Statics::NewProp_bDeleteChildrenWhenDeleted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlacementToolBase" },
		{ "ModuleRelativePath", "Public/PlacementToolBase.h" },
	};
#endif
	void Z_Construct_UClass_APlacementToolBase_Statics::NewProp_bDeleteChildrenWhenDeleted_SetBit(void* Obj)
	{
		((APlacementToolBase*)Obj)->bDeleteChildrenWhenDeleted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlacementToolBase_Statics::NewProp_bDeleteChildrenWhenDeleted = { "bDeleteChildrenWhenDeleted", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(APlacementToolBase), &Z_Construct_UClass_APlacementToolBase_Statics::NewProp_bDeleteChildrenWhenDeleted_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlacementToolBase_Statics::NewProp_bDeleteChildrenWhenDeleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlacementToolBase_Statics::NewProp_bDeleteChildrenWhenDeleted_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlacementToolBase_Statics::NewProp_bHideBrush_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlacementToolBase" },
		{ "ModuleRelativePath", "Public/PlacementToolBase.h" },
	};
#endif
	void Z_Construct_UClass_APlacementToolBase_Statics::NewProp_bHideBrush_SetBit(void* Obj)
	{
		((APlacementToolBase*)Obj)->bHideBrush = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlacementToolBase_Statics::NewProp_bHideBrush = { "bHideBrush", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(APlacementToolBase), &Z_Construct_UClass_APlacementToolBase_Statics::NewProp_bHideBrush_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlacementToolBase_Statics::NewProp_bHideBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlacementToolBase_Statics::NewProp_bHideBrush_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlacementToolBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlacementToolBase_Statics::NewProp_isInEditor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlacementToolBase_Statics::NewProp_SceneComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlacementToolBase_Statics::NewProp_EasySelectBillboard,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlacementToolBase_Statics::NewProp_RandomStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlacementToolBase_Statics::NewProp_DistributionCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlacementToolBase_Statics::NewProp_PlacementMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlacementToolBase_Statics::NewProp_PlacementStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlacementToolBase_Statics::NewProp_PlacementItems_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlacementToolBase_Statics::NewProp_PlacementItems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlacementToolBase_Statics::NewProp_SurfaceDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlacementToolBase_Statics::NewProp_Amount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlacementToolBase_Statics::NewProp_Seed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlacementToolBase_Statics::NewProp_Offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlacementToolBase_Statics::NewProp_bRandomizeRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlacementToolBase_Statics::NewProp_RotationMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlacementToolBase_Statics::NewProp_RotationMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlacementToolBase_Statics::NewProp_bRandomizeScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlacementToolBase_Statics::NewProp_bUniformScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlacementToolBase_Statics::NewProp_ScaleMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlacementToolBase_Statics::NewProp_ScaleMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlacementToolBase_Statics::NewProp_bRotateToSurface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlacementToolBase_Statics::NewProp_bAdjustToSurface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlacementToolBase_Statics::NewProp_bAvoidOverlapBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlacementToolBase_Statics::NewProp_bDeleteChildrenWhenDeleted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlacementToolBase_Statics::NewProp_bHideBrush,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlacementToolBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlacementToolBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlacementToolBase_Statics::ClassParams = {
		&APlacementToolBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APlacementToolBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APlacementToolBase_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_APlacementToolBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlacementToolBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlacementToolBase()
	{
		if (!Z_Registration_Info_UClass_APlacementToolBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlacementToolBase.OuterSingleton, Z_Construct_UClass_APlacementToolBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlacementToolBase.OuterSingleton;
	}
	template<> PLACEMENTTOOLS_API UClass* StaticClass<APlacementToolBase>()
	{
		return APlacementToolBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlacementToolBase);
	APlacementToolBase::~APlacementToolBase() {}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_PlacementTools_Source_PlacementTools_Public_PlacementToolBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_PlacementTools_Source_PlacementTools_Public_PlacementToolBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlacementToolBase, APlacementToolBase::StaticClass, TEXT("APlacementToolBase"), &Z_Registration_Info_UClass_APlacementToolBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlacementToolBase), 4248701865U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_PlacementTools_Source_PlacementTools_Public_PlacementToolBase_h_271789456(TEXT("/Script/PlacementTools"),
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_PlacementTools_Source_PlacementTools_Public_PlacementToolBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_PlacementTools_Source_PlacementTools_Public_PlacementToolBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
