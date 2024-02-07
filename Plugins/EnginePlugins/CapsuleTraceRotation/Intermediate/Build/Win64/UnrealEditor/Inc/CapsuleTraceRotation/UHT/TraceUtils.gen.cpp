// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CapsuleTraceRotation/Public/TraceUtils.h"
#include "Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTraceUtils() {}
// Cross Module References
	CAPSULETRACEROTATION_API UClass* Z_Construct_UClass_UTraceUtils();
	CAPSULETRACEROTATION_API UClass* Z_Construct_UClass_UTraceUtils_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDrawDebugTrace();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETraceTypeQuery();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	UPackage* Z_Construct_UPackage__Script_CapsuleTraceRotation();
// End Cross Module References
	DEFINE_FUNCTION(UTraceUtils::execCapsuleTraceMulti)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FVector,Z_Param_Start);
		P_GET_STRUCT(FVector,Z_Param_End);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_HalfHeight);
		P_GET_STRUCT(FRotator,Z_Param_Orientation);
		P_GET_PROPERTY(FByteProperty,Z_Param_TraceChannel);
		P_GET_UBOOL(Z_Param_bTraceComplex);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore);
		P_GET_PROPERTY(FByteProperty,Z_Param_DrawDebugType);
		P_GET_TARRAY_REF(FHitResult,Z_Param_Out_OutHits);
		P_GET_UBOOL(Z_Param_bIgnoreSelf);
		P_GET_STRUCT(FLinearColor,Z_Param_TraceColor);
		P_GET_STRUCT(FLinearColor,Z_Param_TraceHitColor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DrawTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTraceUtils::CapsuleTraceMulti(Z_Param_WorldContextObject,Z_Param_Start,Z_Param_End,Z_Param_Radius,Z_Param_HalfHeight,Z_Param_Orientation,ETraceTypeQuery(Z_Param_TraceChannel),Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHits,Z_Param_bIgnoreSelf,Z_Param_TraceColor,Z_Param_TraceHitColor,Z_Param_DrawTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTraceUtils::execCapsuleTraceMultiByProfile)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FVector,Z_Param_Start);
		P_GET_STRUCT(FVector,Z_Param_End);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_HalfHeight);
		P_GET_STRUCT(FRotator,Z_Param_Orientation);
		P_GET_PROPERTY(FNameProperty,Z_Param_ProfileName);
		P_GET_UBOOL(Z_Param_bTraceComplex);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore);
		P_GET_PROPERTY(FByteProperty,Z_Param_DrawDebugType);
		P_GET_TARRAY_REF(FHitResult,Z_Param_Out_OutHits);
		P_GET_UBOOL(Z_Param_bIgnoreSelf);
		P_GET_STRUCT(FLinearColor,Z_Param_TraceColor);
		P_GET_STRUCT(FLinearColor,Z_Param_TraceHitColor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DrawTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTraceUtils::CapsuleTraceMultiByProfile(Z_Param_WorldContextObject,Z_Param_Start,Z_Param_End,Z_Param_Radius,Z_Param_HalfHeight,Z_Param_Orientation,Z_Param_ProfileName,Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHits,Z_Param_bIgnoreSelf,Z_Param_TraceColor,Z_Param_TraceHitColor,Z_Param_DrawTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTraceUtils::execCapsuleTraceMultiForObjects)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FVector,Z_Param_Start);
		P_GET_STRUCT(FVector,Z_Param_End);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_HalfHeight);
		P_GET_STRUCT(FRotator,Z_Param_Orientation);
		P_GET_TARRAY_REF(TEnumAsByte<EObjectTypeQuery>,Z_Param_Out_ObjectTypes);
		P_GET_UBOOL(Z_Param_bTraceComplex);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore);
		P_GET_PROPERTY(FByteProperty,Z_Param_DrawDebugType);
		P_GET_TARRAY_REF(FHitResult,Z_Param_Out_OutHits);
		P_GET_UBOOL(Z_Param_bIgnoreSelf);
		P_GET_STRUCT(FLinearColor,Z_Param_TraceColor);
		P_GET_STRUCT(FLinearColor,Z_Param_TraceHitColor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DrawTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTraceUtils::CapsuleTraceMultiForObjects(Z_Param_WorldContextObject,Z_Param_Start,Z_Param_End,Z_Param_Radius,Z_Param_HalfHeight,Z_Param_Orientation,Z_Param_Out_ObjectTypes,Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHits,Z_Param_bIgnoreSelf,Z_Param_TraceColor,Z_Param_TraceHitColor,Z_Param_DrawTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTraceUtils::execCapsuleTraceSingle)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FVector,Z_Param_Start);
		P_GET_STRUCT(FVector,Z_Param_End);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_HalfHeight);
		P_GET_STRUCT(FRotator,Z_Param_Orientation);
		P_GET_PROPERTY(FByteProperty,Z_Param_TraceChannel);
		P_GET_UBOOL(Z_Param_bTraceComplex);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore);
		P_GET_PROPERTY(FByteProperty,Z_Param_DrawDebugType);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit);
		P_GET_UBOOL(Z_Param_bIgnoreSelf);
		P_GET_STRUCT(FLinearColor,Z_Param_TraceColor);
		P_GET_STRUCT(FLinearColor,Z_Param_TraceHitColor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DrawTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTraceUtils::CapsuleTraceSingle(Z_Param_WorldContextObject,Z_Param_Start,Z_Param_End,Z_Param_Radius,Z_Param_HalfHeight,Z_Param_Orientation,ETraceTypeQuery(Z_Param_TraceChannel),Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHit,Z_Param_bIgnoreSelf,Z_Param_TraceColor,Z_Param_TraceHitColor,Z_Param_DrawTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTraceUtils::execCapsuleTraceSingleByProfile)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FVector,Z_Param_Start);
		P_GET_STRUCT(FVector,Z_Param_End);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_HalfHeight);
		P_GET_STRUCT(FRotator,Z_Param_Orientation);
		P_GET_PROPERTY(FNameProperty,Z_Param_ProfileName);
		P_GET_UBOOL(Z_Param_bTraceComplex);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore);
		P_GET_PROPERTY(FByteProperty,Z_Param_DrawDebugType);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit);
		P_GET_UBOOL(Z_Param_bIgnoreSelf);
		P_GET_STRUCT(FLinearColor,Z_Param_TraceColor);
		P_GET_STRUCT(FLinearColor,Z_Param_TraceHitColor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DrawTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTraceUtils::CapsuleTraceSingleByProfile(Z_Param_WorldContextObject,Z_Param_Start,Z_Param_End,Z_Param_Radius,Z_Param_HalfHeight,Z_Param_Orientation,Z_Param_ProfileName,Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHit,Z_Param_bIgnoreSelf,Z_Param_TraceColor,Z_Param_TraceHitColor,Z_Param_DrawTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTraceUtils::execCapsuleTraceSingleForObjects)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FVector,Z_Param_Start);
		P_GET_STRUCT(FVector,Z_Param_End);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_HalfHeight);
		P_GET_STRUCT(FRotator,Z_Param_Orientation);
		P_GET_TARRAY_REF(TEnumAsByte<EObjectTypeQuery>,Z_Param_Out_ObjectTypes);
		P_GET_UBOOL(Z_Param_bTraceComplex);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore);
		P_GET_PROPERTY(FByteProperty,Z_Param_DrawDebugType);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit);
		P_GET_UBOOL(Z_Param_bIgnoreSelf);
		P_GET_STRUCT(FLinearColor,Z_Param_TraceColor);
		P_GET_STRUCT(FLinearColor,Z_Param_TraceHitColor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DrawTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTraceUtils::CapsuleTraceSingleForObjects(Z_Param_WorldContextObject,Z_Param_Start,Z_Param_End,Z_Param_Radius,Z_Param_HalfHeight,Z_Param_Orientation,Z_Param_Out_ObjectTypes,Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_Out_OutHit,Z_Param_bIgnoreSelf,Z_Param_TraceColor,Z_Param_TraceHitColor,Z_Param_DrawTime);
		P_NATIVE_END;
	}
	void UTraceUtils::StaticRegisterNativesUTraceUtils()
	{
		UClass* Class = UTraceUtils::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CapsuleTraceMulti", &UTraceUtils::execCapsuleTraceMulti },
			{ "CapsuleTraceMultiByProfile", &UTraceUtils::execCapsuleTraceMultiByProfile },
			{ "CapsuleTraceMultiForObjects", &UTraceUtils::execCapsuleTraceMultiForObjects },
			{ "CapsuleTraceSingle", &UTraceUtils::execCapsuleTraceSingle },
			{ "CapsuleTraceSingleByProfile", &UTraceUtils::execCapsuleTraceSingleByProfile },
			{ "CapsuleTraceSingleForObjects", &UTraceUtils::execCapsuleTraceSingleForObjects },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTraceUtils_CapsuleTraceMulti_Statics
	{
		struct TraceUtils_eventCapsuleTraceMulti_Parms
		{
			UObject* WorldContextObject;
			FVector Start;
			FVector End;
			float Radius;
			float HalfHeight;
			FRotator Orientation;
			TEnumAsByte<ETraceTypeQuery> TraceChannel;
			bool bTraceComplex;
			TArray<AActor*> ActorsToIgnore;
			TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType;
			TArray<FHitResult> OutHits;
			bool bIgnoreSelf;
			FLinearColor TraceColor;
			FLinearColor TraceHitColor;
			float DrawTime;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_End;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HalfHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Orientation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
		static void NewProp_bTraceComplex_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTraceComplex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnore_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorsToIgnore_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnore;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DrawDebugType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutHits_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutHits;
		static void NewProp_bIgnoreSelf_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreSelf;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TraceColor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TraceHitColor;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DrawTime;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceMulti_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtils_eventCapsuleTraceMulti_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTraceUtils_CapsuleTraceMulti_Statics::NewProp_Start_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceMulti_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtils_eventCapsuleTraceMulti_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UTraceUtils_CapsuleTraceMulti_Statics::NewProp_Start_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraceUtils_CapsuleTraceMulti_Statics::NewProp_Start_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTraceUtils_CapsuleTraceMulti_Statics::NewProp_End_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceMulti_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtils_eventCapsuleTraceMulti_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UTraceUtils_CapsuleTraceMulti_Statics::NewProp_End_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraceUtils_CapsuleTraceMulti_Statics::NewProp_End_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceMulti_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtils_eventCapsuleTraceMulti_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceMulti_Statics::NewProp_HalfHeight = { "HalfHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtils_eventCapsuleTraceMulti_Parms, HalfHeight), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTraceUtils_CapsuleTraceMulti_Statics::NewProp_Orientation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceMulti_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtils_eventCapsuleTraceMulti_Parms, Orientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UTraceUtils_CapsuleTraceMulti_Statics::NewProp_Orientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraceUtils_CapsuleTraceMulti_Statics::NewProp_Orientation_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceMulti_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtils_eventCapsuleTraceMulti_Parms, TraceChannel), Z_Construct_UEnum_Engine_ETraceTypeQuery, METADATA_PARAMS(nullptr, 0) }; // 2906040657
	void Z_Construct_UFunction_UTraceUtils_CapsuleTraceMulti_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
	{
		((TraceUtils_eventCapsuleTraceMulti_Parms*)Obj)->bTraceComplex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceMulti_Statics::NewProp_bTraceComplex = { "bTraceComplex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TraceUtils_eventCapsuleTraceMulti_Parms), &Z_Construct_UFunction_UTraceUtils_CapsuleTraceMulti_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceMulti_Statics::NewProp_ActorsToIgnore_Inner = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTraceUtils_CapsuleTraceMulti_Statics::NewProp_ActorsToIgnore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceMulti_Statics::NewProp_ActorsToIgnore = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtils_eventCapsuleTraceMulti_Parms, ActorsToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTraceUtils_CapsuleTraceMulti_Statics::NewProp_ActorsToIgnore_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraceUtils_CapsuleTraceMulti_Statics::NewProp_ActorsToIgnore_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceMulti_Statics::NewProp_DrawDebugType = { "DrawDebugType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtils_eventCapsuleTraceMulti_Parms, DrawDebugType), Z_Construct_UEnum_Engine_EDrawDebugTrace, METADATA_PARAMS(nullptr, 0) }; // 2158289653
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceMulti_Statics::NewProp_OutHits_Inner = { "OutHits", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) }; // 1287526515
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceMulti_Statics::NewProp_OutHits = { "OutHits", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtils_eventCapsuleTraceMulti_Parms, OutHits), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1287526515
	void Z_Construct_UFunction_UTraceUtils_CapsuleTraceMulti_Statics::NewProp_bIgnoreSelf_SetBit(void* Obj)
	{
		((TraceUtils_eventCapsuleTraceMulti_Parms*)Obj)->bIgnoreSelf = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceMulti_Statics::NewProp_bIgnoreSelf = { "bIgnoreSelf", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TraceUtils_eventCapsuleTraceMulti_Parms), &Z_Construct_UFunction_UTraceUtils_CapsuleTraceMulti_Statics::NewProp_bIgnoreSelf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceMulti_Statics::NewProp_TraceColor = { "TraceColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtils_eventCapsuleTraceMulti_Parms, TraceColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceMulti_Statics::NewProp_TraceHitColor = { "TraceHitColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtils_eventCapsuleTraceMulti_Parms, TraceHitColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceMulti_Statics::NewProp_DrawTime = { "DrawTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtils_eventCapsuleTraceMulti_Parms, DrawTime), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTraceUtils_CapsuleTraceMulti_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TraceUtils_eventCapsuleTraceMulti_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceMulti_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TraceUtils_eventCapsuleTraceMulti_Parms), &Z_Construct_UFunction_UTraceUtils_CapsuleTraceMulti_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTraceUtils_CapsuleTraceMulti_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceMulti_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceMulti_Statics::NewProp_Start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceMulti_Statics::NewProp_End,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceMulti_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceMulti_Statics::NewProp_HalfHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceMulti_Statics::NewProp_Orientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceMulti_Statics::NewProp_TraceChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceMulti_Statics::NewProp_bTraceComplex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceMulti_Statics::NewProp_ActorsToIgnore_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceMulti_Statics::NewProp_ActorsToIgnore,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceMulti_Statics::NewProp_DrawDebugType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceMulti_Statics::NewProp_OutHits_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceMulti_Statics::NewProp_OutHits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceMulti_Statics::NewProp_bIgnoreSelf,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceMulti_Statics::NewProp_TraceColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceMulti_Statics::NewProp_TraceHitColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceMulti_Statics::NewProp_DrawTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceMulti_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTraceUtils_CapsuleTraceMulti_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TraceUtils.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceMulti_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTraceUtils, nullptr, "CapsuleTraceMulti", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTraceUtils_CapsuleTraceMulti_Statics::TraceUtils_eventCapsuleTraceMulti_Parms), Z_Construct_UFunction_UTraceUtils_CapsuleTraceMulti_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraceUtils_CapsuleTraceMulti_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTraceUtils_CapsuleTraceMulti_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraceUtils_CapsuleTraceMulti_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTraceUtils_CapsuleTraceMulti()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTraceUtils_CapsuleTraceMulti_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiByProfile_Statics
	{
		struct TraceUtils_eventCapsuleTraceMultiByProfile_Parms
		{
			UObject* WorldContextObject;
			FVector Start;
			FVector End;
			float Radius;
			float HalfHeight;
			FRotator Orientation;
			FName ProfileName;
			bool bTraceComplex;
			TArray<AActor*> ActorsToIgnore;
			TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType;
			TArray<FHitResult> OutHits;
			bool bIgnoreSelf;
			FLinearColor TraceColor;
			FLinearColor TraceHitColor;
			float DrawTime;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_End;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HalfHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Orientation;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ProfileName;
		static void NewProp_bTraceComplex_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTraceComplex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnore_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorsToIgnore_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnore;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DrawDebugType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutHits_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutHits;
		static void NewProp_bIgnoreSelf_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreSelf;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TraceColor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TraceHitColor;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DrawTime;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiByProfile_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtils_eventCapsuleTraceMultiByProfile_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiByProfile_Statics::NewProp_Start_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiByProfile_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtils_eventCapsuleTraceMultiByProfile_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiByProfile_Statics::NewProp_Start_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiByProfile_Statics::NewProp_Start_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiByProfile_Statics::NewProp_End_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiByProfile_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtils_eventCapsuleTraceMultiByProfile_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiByProfile_Statics::NewProp_End_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiByProfile_Statics::NewProp_End_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiByProfile_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtils_eventCapsuleTraceMultiByProfile_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiByProfile_Statics::NewProp_HalfHeight = { "HalfHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtils_eventCapsuleTraceMultiByProfile_Parms, HalfHeight), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiByProfile_Statics::NewProp_Orientation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiByProfile_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtils_eventCapsuleTraceMultiByProfile_Parms, Orientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiByProfile_Statics::NewProp_Orientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiByProfile_Statics::NewProp_Orientation_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiByProfile_Statics::NewProp_ProfileName = { "ProfileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtils_eventCapsuleTraceMultiByProfile_Parms, ProfileName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiByProfile_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
	{
		((TraceUtils_eventCapsuleTraceMultiByProfile_Parms*)Obj)->bTraceComplex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiByProfile_Statics::NewProp_bTraceComplex = { "bTraceComplex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TraceUtils_eventCapsuleTraceMultiByProfile_Parms), &Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiByProfile_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiByProfile_Statics::NewProp_ActorsToIgnore_Inner = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiByProfile_Statics::NewProp_ActorsToIgnore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiByProfile_Statics::NewProp_ActorsToIgnore = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtils_eventCapsuleTraceMultiByProfile_Parms, ActorsToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiByProfile_Statics::NewProp_ActorsToIgnore_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiByProfile_Statics::NewProp_ActorsToIgnore_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiByProfile_Statics::NewProp_DrawDebugType = { "DrawDebugType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtils_eventCapsuleTraceMultiByProfile_Parms, DrawDebugType), Z_Construct_UEnum_Engine_EDrawDebugTrace, METADATA_PARAMS(nullptr, 0) }; // 2158289653
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiByProfile_Statics::NewProp_OutHits_Inner = { "OutHits", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) }; // 1287526515
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiByProfile_Statics::NewProp_OutHits = { "OutHits", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtils_eventCapsuleTraceMultiByProfile_Parms, OutHits), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1287526515
	void Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiByProfile_Statics::NewProp_bIgnoreSelf_SetBit(void* Obj)
	{
		((TraceUtils_eventCapsuleTraceMultiByProfile_Parms*)Obj)->bIgnoreSelf = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiByProfile_Statics::NewProp_bIgnoreSelf = { "bIgnoreSelf", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TraceUtils_eventCapsuleTraceMultiByProfile_Parms), &Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiByProfile_Statics::NewProp_bIgnoreSelf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiByProfile_Statics::NewProp_TraceColor = { "TraceColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtils_eventCapsuleTraceMultiByProfile_Parms, TraceColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiByProfile_Statics::NewProp_TraceHitColor = { "TraceHitColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtils_eventCapsuleTraceMultiByProfile_Parms, TraceHitColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiByProfile_Statics::NewProp_DrawTime = { "DrawTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtils_eventCapsuleTraceMultiByProfile_Parms, DrawTime), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiByProfile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TraceUtils_eventCapsuleTraceMultiByProfile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiByProfile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TraceUtils_eventCapsuleTraceMultiByProfile_Parms), &Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiByProfile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiByProfile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiByProfile_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiByProfile_Statics::NewProp_Start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiByProfile_Statics::NewProp_End,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiByProfile_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiByProfile_Statics::NewProp_HalfHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiByProfile_Statics::NewProp_Orientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiByProfile_Statics::NewProp_ProfileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiByProfile_Statics::NewProp_bTraceComplex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiByProfile_Statics::NewProp_ActorsToIgnore_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiByProfile_Statics::NewProp_ActorsToIgnore,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiByProfile_Statics::NewProp_DrawDebugType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiByProfile_Statics::NewProp_OutHits_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiByProfile_Statics::NewProp_OutHits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiByProfile_Statics::NewProp_bIgnoreSelf,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiByProfile_Statics::NewProp_TraceColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiByProfile_Statics::NewProp_TraceHitColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiByProfile_Statics::NewProp_DrawTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiByProfile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiByProfile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TraceUtils.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiByProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTraceUtils, nullptr, "CapsuleTraceMultiByProfile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiByProfile_Statics::TraceUtils_eventCapsuleTraceMultiByProfile_Parms), Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiByProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiByProfile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiByProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiByProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiByProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiByProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiForObjects_Statics
	{
		struct TraceUtils_eventCapsuleTraceMultiForObjects_Parms
		{
			UObject* WorldContextObject;
			FVector Start;
			FVector End;
			float Radius;
			float HalfHeight;
			FRotator Orientation;
			TArray<TEnumAsByte<EObjectTypeQuery> > ObjectTypes;
			bool bTraceComplex;
			TArray<AActor*> ActorsToIgnore;
			TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType;
			TArray<FHitResult> OutHits;
			bool bIgnoreSelf;
			FLinearColor TraceColor;
			FLinearColor TraceHitColor;
			float DrawTime;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_End;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HalfHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Orientation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ObjectTypes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectTypes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectTypes;
		static void NewProp_bTraceComplex_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTraceComplex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnore_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorsToIgnore_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnore;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DrawDebugType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutHits_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutHits;
		static void NewProp_bIgnoreSelf_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreSelf;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TraceColor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TraceHitColor;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DrawTime;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiForObjects_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtils_eventCapsuleTraceMultiForObjects_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiForObjects_Statics::NewProp_Start_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiForObjects_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtils_eventCapsuleTraceMultiForObjects_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiForObjects_Statics::NewProp_Start_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiForObjects_Statics::NewProp_Start_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiForObjects_Statics::NewProp_End_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiForObjects_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtils_eventCapsuleTraceMultiForObjects_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiForObjects_Statics::NewProp_End_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiForObjects_Statics::NewProp_End_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiForObjects_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtils_eventCapsuleTraceMultiForObjects_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiForObjects_Statics::NewProp_HalfHeight = { "HalfHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtils_eventCapsuleTraceMultiForObjects_Parms, HalfHeight), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiForObjects_Statics::NewProp_Orientation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiForObjects_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtils_eventCapsuleTraceMultiForObjects_Parms, Orientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiForObjects_Statics::NewProp_Orientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiForObjects_Statics::NewProp_Orientation_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiForObjects_Statics::NewProp_ObjectTypes_Inner = { "ObjectTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) }; // 3629342158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiForObjects_Statics::NewProp_ObjectTypes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiForObjects_Statics::NewProp_ObjectTypes = { "ObjectTypes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtils_eventCapsuleTraceMultiForObjects_Parms, ObjectTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiForObjects_Statics::NewProp_ObjectTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiForObjects_Statics::NewProp_ObjectTypes_MetaData)) }; // 3629342158
	void Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiForObjects_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
	{
		((TraceUtils_eventCapsuleTraceMultiForObjects_Parms*)Obj)->bTraceComplex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiForObjects_Statics::NewProp_bTraceComplex = { "bTraceComplex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TraceUtils_eventCapsuleTraceMultiForObjects_Parms), &Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiForObjects_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiForObjects_Statics::NewProp_ActorsToIgnore_Inner = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiForObjects_Statics::NewProp_ActorsToIgnore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiForObjects_Statics::NewProp_ActorsToIgnore = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtils_eventCapsuleTraceMultiForObjects_Parms, ActorsToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiForObjects_Statics::NewProp_ActorsToIgnore_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiForObjects_Statics::NewProp_ActorsToIgnore_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiForObjects_Statics::NewProp_DrawDebugType = { "DrawDebugType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtils_eventCapsuleTraceMultiForObjects_Parms, DrawDebugType), Z_Construct_UEnum_Engine_EDrawDebugTrace, METADATA_PARAMS(nullptr, 0) }; // 2158289653
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiForObjects_Statics::NewProp_OutHits_Inner = { "OutHits", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) }; // 1287526515
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiForObjects_Statics::NewProp_OutHits = { "OutHits", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtils_eventCapsuleTraceMultiForObjects_Parms, OutHits), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1287526515
	void Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiForObjects_Statics::NewProp_bIgnoreSelf_SetBit(void* Obj)
	{
		((TraceUtils_eventCapsuleTraceMultiForObjects_Parms*)Obj)->bIgnoreSelf = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiForObjects_Statics::NewProp_bIgnoreSelf = { "bIgnoreSelf", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TraceUtils_eventCapsuleTraceMultiForObjects_Parms), &Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiForObjects_Statics::NewProp_bIgnoreSelf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiForObjects_Statics::NewProp_TraceColor = { "TraceColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtils_eventCapsuleTraceMultiForObjects_Parms, TraceColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiForObjects_Statics::NewProp_TraceHitColor = { "TraceHitColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtils_eventCapsuleTraceMultiForObjects_Parms, TraceHitColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiForObjects_Statics::NewProp_DrawTime = { "DrawTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtils_eventCapsuleTraceMultiForObjects_Parms, DrawTime), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiForObjects_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TraceUtils_eventCapsuleTraceMultiForObjects_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiForObjects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TraceUtils_eventCapsuleTraceMultiForObjects_Parms), &Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiForObjects_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiForObjects_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiForObjects_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiForObjects_Statics::NewProp_Start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiForObjects_Statics::NewProp_End,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiForObjects_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiForObjects_Statics::NewProp_HalfHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiForObjects_Statics::NewProp_Orientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiForObjects_Statics::NewProp_ObjectTypes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiForObjects_Statics::NewProp_ObjectTypes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiForObjects_Statics::NewProp_bTraceComplex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiForObjects_Statics::NewProp_ActorsToIgnore_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiForObjects_Statics::NewProp_ActorsToIgnore,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiForObjects_Statics::NewProp_DrawDebugType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiForObjects_Statics::NewProp_OutHits_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiForObjects_Statics::NewProp_OutHits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiForObjects_Statics::NewProp_bIgnoreSelf,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiForObjects_Statics::NewProp_TraceColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiForObjects_Statics::NewProp_TraceHitColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiForObjects_Statics::NewProp_DrawTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiForObjects_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiForObjects_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TraceUtils.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiForObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTraceUtils, nullptr, "CapsuleTraceMultiForObjects", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiForObjects_Statics::TraceUtils_eventCapsuleTraceMultiForObjects_Parms), Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiForObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiForObjects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiForObjects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiForObjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiForObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiForObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingle_Statics
	{
		struct TraceUtils_eventCapsuleTraceSingle_Parms
		{
			UObject* WorldContextObject;
			FVector Start;
			FVector End;
			float Radius;
			float HalfHeight;
			FRotator Orientation;
			TEnumAsByte<ETraceTypeQuery> TraceChannel;
			bool bTraceComplex;
			TArray<AActor*> ActorsToIgnore;
			TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType;
			FHitResult OutHit;
			bool bIgnoreSelf;
			FLinearColor TraceColor;
			FLinearColor TraceHitColor;
			float DrawTime;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_End;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HalfHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Orientation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
		static void NewProp_bTraceComplex_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTraceComplex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnore_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorsToIgnore_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnore;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DrawDebugType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutHit;
		static void NewProp_bIgnoreSelf_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreSelf;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TraceColor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TraceHitColor;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DrawTime;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingle_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtils_eventCapsuleTraceSingle_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingle_Statics::NewProp_Start_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingle_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtils_eventCapsuleTraceSingle_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingle_Statics::NewProp_Start_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingle_Statics::NewProp_Start_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingle_Statics::NewProp_End_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingle_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtils_eventCapsuleTraceSingle_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingle_Statics::NewProp_End_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingle_Statics::NewProp_End_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingle_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtils_eventCapsuleTraceSingle_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingle_Statics::NewProp_HalfHeight = { "HalfHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtils_eventCapsuleTraceSingle_Parms, HalfHeight), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingle_Statics::NewProp_Orientation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingle_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtils_eventCapsuleTraceSingle_Parms, Orientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingle_Statics::NewProp_Orientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingle_Statics::NewProp_Orientation_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingle_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtils_eventCapsuleTraceSingle_Parms, TraceChannel), Z_Construct_UEnum_Engine_ETraceTypeQuery, METADATA_PARAMS(nullptr, 0) }; // 2906040657
	void Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingle_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
	{
		((TraceUtils_eventCapsuleTraceSingle_Parms*)Obj)->bTraceComplex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingle_Statics::NewProp_bTraceComplex = { "bTraceComplex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TraceUtils_eventCapsuleTraceSingle_Parms), &Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingle_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingle_Statics::NewProp_ActorsToIgnore_Inner = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingle_Statics::NewProp_ActorsToIgnore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingle_Statics::NewProp_ActorsToIgnore = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtils_eventCapsuleTraceSingle_Parms, ActorsToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingle_Statics::NewProp_ActorsToIgnore_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingle_Statics::NewProp_ActorsToIgnore_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingle_Statics::NewProp_DrawDebugType = { "DrawDebugType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtils_eventCapsuleTraceSingle_Parms, DrawDebugType), Z_Construct_UEnum_Engine_EDrawDebugTrace, METADATA_PARAMS(nullptr, 0) }; // 2158289653
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingle_Statics::NewProp_OutHit = { "OutHit", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtils_eventCapsuleTraceSingle_Parms, OutHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) }; // 1287526515
	void Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingle_Statics::NewProp_bIgnoreSelf_SetBit(void* Obj)
	{
		((TraceUtils_eventCapsuleTraceSingle_Parms*)Obj)->bIgnoreSelf = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingle_Statics::NewProp_bIgnoreSelf = { "bIgnoreSelf", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TraceUtils_eventCapsuleTraceSingle_Parms), &Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingle_Statics::NewProp_bIgnoreSelf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingle_Statics::NewProp_TraceColor = { "TraceColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtils_eventCapsuleTraceSingle_Parms, TraceColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingle_Statics::NewProp_TraceHitColor = { "TraceHitColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtils_eventCapsuleTraceSingle_Parms, TraceHitColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingle_Statics::NewProp_DrawTime = { "DrawTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtils_eventCapsuleTraceSingle_Parms, DrawTime), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TraceUtils_eventCapsuleTraceSingle_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TraceUtils_eventCapsuleTraceSingle_Parms), &Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingle_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingle_Statics::NewProp_Start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingle_Statics::NewProp_End,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingle_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingle_Statics::NewProp_HalfHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingle_Statics::NewProp_Orientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingle_Statics::NewProp_TraceChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingle_Statics::NewProp_bTraceComplex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingle_Statics::NewProp_ActorsToIgnore_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingle_Statics::NewProp_ActorsToIgnore,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingle_Statics::NewProp_DrawDebugType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingle_Statics::NewProp_OutHit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingle_Statics::NewProp_bIgnoreSelf,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingle_Statics::NewProp_TraceColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingle_Statics::NewProp_TraceHitColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingle_Statics::NewProp_DrawTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TraceUtils.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTraceUtils, nullptr, "CapsuleTraceSingle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingle_Statics::TraceUtils_eventCapsuleTraceSingle_Parms), Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleByProfile_Statics
	{
		struct TraceUtils_eventCapsuleTraceSingleByProfile_Parms
		{
			UObject* WorldContextObject;
			FVector Start;
			FVector End;
			float Radius;
			float HalfHeight;
			FRotator Orientation;
			FName ProfileName;
			bool bTraceComplex;
			TArray<AActor*> ActorsToIgnore;
			TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType;
			FHitResult OutHit;
			bool bIgnoreSelf;
			FLinearColor TraceColor;
			FLinearColor TraceHitColor;
			float DrawTime;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_End;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HalfHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Orientation;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ProfileName;
		static void NewProp_bTraceComplex_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTraceComplex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnore_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorsToIgnore_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnore;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DrawDebugType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutHit;
		static void NewProp_bIgnoreSelf_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreSelf;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TraceColor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TraceHitColor;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DrawTime;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleByProfile_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtils_eventCapsuleTraceSingleByProfile_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleByProfile_Statics::NewProp_Start_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleByProfile_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtils_eventCapsuleTraceSingleByProfile_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleByProfile_Statics::NewProp_Start_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleByProfile_Statics::NewProp_Start_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleByProfile_Statics::NewProp_End_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleByProfile_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtils_eventCapsuleTraceSingleByProfile_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleByProfile_Statics::NewProp_End_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleByProfile_Statics::NewProp_End_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleByProfile_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtils_eventCapsuleTraceSingleByProfile_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleByProfile_Statics::NewProp_HalfHeight = { "HalfHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtils_eventCapsuleTraceSingleByProfile_Parms, HalfHeight), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleByProfile_Statics::NewProp_Orientation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleByProfile_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtils_eventCapsuleTraceSingleByProfile_Parms, Orientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleByProfile_Statics::NewProp_Orientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleByProfile_Statics::NewProp_Orientation_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleByProfile_Statics::NewProp_ProfileName = { "ProfileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtils_eventCapsuleTraceSingleByProfile_Parms, ProfileName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleByProfile_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
	{
		((TraceUtils_eventCapsuleTraceSingleByProfile_Parms*)Obj)->bTraceComplex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleByProfile_Statics::NewProp_bTraceComplex = { "bTraceComplex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TraceUtils_eventCapsuleTraceSingleByProfile_Parms), &Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleByProfile_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleByProfile_Statics::NewProp_ActorsToIgnore_Inner = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleByProfile_Statics::NewProp_ActorsToIgnore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleByProfile_Statics::NewProp_ActorsToIgnore = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtils_eventCapsuleTraceSingleByProfile_Parms, ActorsToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleByProfile_Statics::NewProp_ActorsToIgnore_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleByProfile_Statics::NewProp_ActorsToIgnore_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleByProfile_Statics::NewProp_DrawDebugType = { "DrawDebugType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtils_eventCapsuleTraceSingleByProfile_Parms, DrawDebugType), Z_Construct_UEnum_Engine_EDrawDebugTrace, METADATA_PARAMS(nullptr, 0) }; // 2158289653
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleByProfile_Statics::NewProp_OutHit = { "OutHit", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtils_eventCapsuleTraceSingleByProfile_Parms, OutHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) }; // 1287526515
	void Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleByProfile_Statics::NewProp_bIgnoreSelf_SetBit(void* Obj)
	{
		((TraceUtils_eventCapsuleTraceSingleByProfile_Parms*)Obj)->bIgnoreSelf = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleByProfile_Statics::NewProp_bIgnoreSelf = { "bIgnoreSelf", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TraceUtils_eventCapsuleTraceSingleByProfile_Parms), &Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleByProfile_Statics::NewProp_bIgnoreSelf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleByProfile_Statics::NewProp_TraceColor = { "TraceColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtils_eventCapsuleTraceSingleByProfile_Parms, TraceColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleByProfile_Statics::NewProp_TraceHitColor = { "TraceHitColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtils_eventCapsuleTraceSingleByProfile_Parms, TraceHitColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleByProfile_Statics::NewProp_DrawTime = { "DrawTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtils_eventCapsuleTraceSingleByProfile_Parms, DrawTime), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleByProfile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TraceUtils_eventCapsuleTraceSingleByProfile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleByProfile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TraceUtils_eventCapsuleTraceSingleByProfile_Parms), &Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleByProfile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleByProfile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleByProfile_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleByProfile_Statics::NewProp_Start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleByProfile_Statics::NewProp_End,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleByProfile_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleByProfile_Statics::NewProp_HalfHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleByProfile_Statics::NewProp_Orientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleByProfile_Statics::NewProp_ProfileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleByProfile_Statics::NewProp_bTraceComplex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleByProfile_Statics::NewProp_ActorsToIgnore_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleByProfile_Statics::NewProp_ActorsToIgnore,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleByProfile_Statics::NewProp_DrawDebugType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleByProfile_Statics::NewProp_OutHit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleByProfile_Statics::NewProp_bIgnoreSelf,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleByProfile_Statics::NewProp_TraceColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleByProfile_Statics::NewProp_TraceHitColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleByProfile_Statics::NewProp_DrawTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleByProfile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleByProfile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TraceUtils.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleByProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTraceUtils, nullptr, "CapsuleTraceSingleByProfile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleByProfile_Statics::TraceUtils_eventCapsuleTraceSingleByProfile_Parms), Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleByProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleByProfile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleByProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleByProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleByProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleByProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleForObjects_Statics
	{
		struct TraceUtils_eventCapsuleTraceSingleForObjects_Parms
		{
			UObject* WorldContextObject;
			FVector Start;
			FVector End;
			float Radius;
			float HalfHeight;
			FRotator Orientation;
			TArray<TEnumAsByte<EObjectTypeQuery> > ObjectTypes;
			bool bTraceComplex;
			TArray<AActor*> ActorsToIgnore;
			TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType;
			FHitResult OutHit;
			bool bIgnoreSelf;
			FLinearColor TraceColor;
			FLinearColor TraceHitColor;
			float DrawTime;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_End;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HalfHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Orientation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ObjectTypes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectTypes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectTypes;
		static void NewProp_bTraceComplex_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTraceComplex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnore_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorsToIgnore_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnore;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DrawDebugType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutHit;
		static void NewProp_bIgnoreSelf_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreSelf;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TraceColor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TraceHitColor;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DrawTime;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleForObjects_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtils_eventCapsuleTraceSingleForObjects_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleForObjects_Statics::NewProp_Start_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleForObjects_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtils_eventCapsuleTraceSingleForObjects_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleForObjects_Statics::NewProp_Start_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleForObjects_Statics::NewProp_Start_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleForObjects_Statics::NewProp_End_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleForObjects_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtils_eventCapsuleTraceSingleForObjects_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleForObjects_Statics::NewProp_End_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleForObjects_Statics::NewProp_End_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleForObjects_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtils_eventCapsuleTraceSingleForObjects_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleForObjects_Statics::NewProp_HalfHeight = { "HalfHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtils_eventCapsuleTraceSingleForObjects_Parms, HalfHeight), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleForObjects_Statics::NewProp_Orientation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleForObjects_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtils_eventCapsuleTraceSingleForObjects_Parms, Orientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleForObjects_Statics::NewProp_Orientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleForObjects_Statics::NewProp_Orientation_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleForObjects_Statics::NewProp_ObjectTypes_Inner = { "ObjectTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) }; // 3629342158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleForObjects_Statics::NewProp_ObjectTypes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleForObjects_Statics::NewProp_ObjectTypes = { "ObjectTypes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtils_eventCapsuleTraceSingleForObjects_Parms, ObjectTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleForObjects_Statics::NewProp_ObjectTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleForObjects_Statics::NewProp_ObjectTypes_MetaData)) }; // 3629342158
	void Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleForObjects_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
	{
		((TraceUtils_eventCapsuleTraceSingleForObjects_Parms*)Obj)->bTraceComplex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleForObjects_Statics::NewProp_bTraceComplex = { "bTraceComplex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TraceUtils_eventCapsuleTraceSingleForObjects_Parms), &Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleForObjects_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleForObjects_Statics::NewProp_ActorsToIgnore_Inner = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleForObjects_Statics::NewProp_ActorsToIgnore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleForObjects_Statics::NewProp_ActorsToIgnore = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtils_eventCapsuleTraceSingleForObjects_Parms, ActorsToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleForObjects_Statics::NewProp_ActorsToIgnore_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleForObjects_Statics::NewProp_ActorsToIgnore_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleForObjects_Statics::NewProp_DrawDebugType = { "DrawDebugType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtils_eventCapsuleTraceSingleForObjects_Parms, DrawDebugType), Z_Construct_UEnum_Engine_EDrawDebugTrace, METADATA_PARAMS(nullptr, 0) }; // 2158289653
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleForObjects_Statics::NewProp_OutHit = { "OutHit", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtils_eventCapsuleTraceSingleForObjects_Parms, OutHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) }; // 1287526515
	void Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleForObjects_Statics::NewProp_bIgnoreSelf_SetBit(void* Obj)
	{
		((TraceUtils_eventCapsuleTraceSingleForObjects_Parms*)Obj)->bIgnoreSelf = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleForObjects_Statics::NewProp_bIgnoreSelf = { "bIgnoreSelf", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TraceUtils_eventCapsuleTraceSingleForObjects_Parms), &Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleForObjects_Statics::NewProp_bIgnoreSelf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleForObjects_Statics::NewProp_TraceColor = { "TraceColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtils_eventCapsuleTraceSingleForObjects_Parms, TraceColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleForObjects_Statics::NewProp_TraceHitColor = { "TraceHitColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtils_eventCapsuleTraceSingleForObjects_Parms, TraceHitColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleForObjects_Statics::NewProp_DrawTime = { "DrawTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceUtils_eventCapsuleTraceSingleForObjects_Parms, DrawTime), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleForObjects_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TraceUtils_eventCapsuleTraceSingleForObjects_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleForObjects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TraceUtils_eventCapsuleTraceSingleForObjects_Parms), &Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleForObjects_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleForObjects_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleForObjects_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleForObjects_Statics::NewProp_Start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleForObjects_Statics::NewProp_End,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleForObjects_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleForObjects_Statics::NewProp_HalfHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleForObjects_Statics::NewProp_Orientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleForObjects_Statics::NewProp_ObjectTypes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleForObjects_Statics::NewProp_ObjectTypes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleForObjects_Statics::NewProp_bTraceComplex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleForObjects_Statics::NewProp_ActorsToIgnore_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleForObjects_Statics::NewProp_ActorsToIgnore,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleForObjects_Statics::NewProp_DrawDebugType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleForObjects_Statics::NewProp_OutHit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleForObjects_Statics::NewProp_bIgnoreSelf,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleForObjects_Statics::NewProp_TraceColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleForObjects_Statics::NewProp_TraceHitColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleForObjects_Statics::NewProp_DrawTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleForObjects_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleForObjects_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TraceUtils.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleForObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTraceUtils, nullptr, "CapsuleTraceSingleForObjects", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleForObjects_Statics::TraceUtils_eventCapsuleTraceSingleForObjects_Parms), Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleForObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleForObjects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleForObjects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleForObjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleForObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleForObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTraceUtils);
	UClass* Z_Construct_UClass_UTraceUtils_NoRegister()
	{
		return UTraceUtils::StaticClass();
	}
	struct Z_Construct_UClass_UTraceUtils_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTraceUtils_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CapsuleTraceRotation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTraceUtils_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTraceUtils_CapsuleTraceMulti, "CapsuleTraceMulti" }, // 3499218712
		{ &Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiByProfile, "CapsuleTraceMultiByProfile" }, // 3047935940
		{ &Z_Construct_UFunction_UTraceUtils_CapsuleTraceMultiForObjects, "CapsuleTraceMultiForObjects" }, // 1676981748
		{ &Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingle, "CapsuleTraceSingle" }, // 2256356514
		{ &Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleByProfile, "CapsuleTraceSingleByProfile" }, // 2598767878
		{ &Z_Construct_UFunction_UTraceUtils_CapsuleTraceSingleForObjects, "CapsuleTraceSingleForObjects" }, // 4197070580
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTraceUtils_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TraceUtils.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TraceUtils.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTraceUtils_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTraceUtils>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTraceUtils_Statics::ClassParams = {
		&UTraceUtils::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTraceUtils_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTraceUtils_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTraceUtils()
	{
		if (!Z_Registration_Info_UClass_UTraceUtils.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTraceUtils.OuterSingleton, Z_Construct_UClass_UTraceUtils_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTraceUtils.OuterSingleton;
	}
	template<> CAPSULETRACEROTATION_API UClass* StaticClass<UTraceUtils>()
	{
		return UTraceUtils::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTraceUtils);
	UTraceUtils::~UTraceUtils() {}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_CapsuleTraceRotation_Source_CapsuleTraceRotation_Public_TraceUtils_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_CapsuleTraceRotation_Source_CapsuleTraceRotation_Public_TraceUtils_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTraceUtils, UTraceUtils::StaticClass, TEXT("UTraceUtils"), &Z_Registration_Info_UClass_UTraceUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTraceUtils), 3583668186U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_CapsuleTraceRotation_Source_CapsuleTraceRotation_Public_TraceUtils_h_4177697774(TEXT("/Script/CapsuleTraceRotation"),
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_CapsuleTraceRotation_Source_CapsuleTraceRotation_Public_TraceUtils_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_CapsuleTraceRotation_Source_CapsuleTraceRotation_Public_TraceUtils_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
