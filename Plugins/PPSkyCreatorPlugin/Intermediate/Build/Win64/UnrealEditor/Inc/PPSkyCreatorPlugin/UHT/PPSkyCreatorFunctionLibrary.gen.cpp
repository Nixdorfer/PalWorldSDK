// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PPSkyCreatorPlugin/Public/PPSkyCreatorFunctionLibrary.h"
#include "PPSkyCreatorPlugin/Public/PPCelestialPositionData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePPSkyCreatorFunctionLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	PPSKYCREATORPLUGIN_API UClass* Z_Construct_UClass_UPPSkyCreatorFunctionLibrary();
	PPSKYCREATORPLUGIN_API UClass* Z_Construct_UClass_UPPSkyCreatorFunctionLibrary_NoRegister();
	PPSKYCREATORPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FPPCelestialPositionData();
	UPackage* Z_Construct_UPackage__Script_PPSkyCreatorPlugin();
// End Cross Module References
	DEFINE_FUNCTION(UPPSkyCreatorFunctionLibrary::execCentimetersToKilometers)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UPPSkyCreatorFunctionLibrary::CentimetersToKilometers(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPPSkyCreatorFunctionLibrary::execCheckCloudDensityAtPosition)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FVector,Z_Param_Position);
		P_GET_OBJECT(UMaterialParameterCollection,Z_Param_ParameterCollection);
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material);
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_RenderTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPPSkyCreatorFunctionLibrary::CheckCloudDensityAtPosition(Z_Param_WorldContextObject,Z_Param_Position,Z_Param_ParameterCollection,Z_Param_Material,Z_Param_RenderTarget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPPSkyCreatorFunctionLibrary::execConvertRenderTargetToTexture2D)
	{
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_RenderTarget);
		P_GET_OBJECT_REF(UTexture2D,Z_Param_Out_Texture);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPPSkyCreatorFunctionLibrary::ConvertRenderTargetToTexture2D(Z_Param_RenderTarget,Z_Param_Out_Texture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPPSkyCreatorFunctionLibrary::execCreateAndAssignMID)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UMaterialInterface,Z_Param_InMaterial);
		P_GET_OBJECT_REF(UMaterialInstanceDynamic,Z_Param_Out_InMID);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPPSkyCreatorFunctionLibrary::CreateAndAssignMID(Z_Param_WorldContextObject,Z_Param_InMaterial,Z_Param_Out_InMID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPPSkyCreatorFunctionLibrary::execDynamicConvertRenderTargetToTexture2D)
	{
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_RenderTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=P_THIS->DynamicConvertRenderTargetToTexture2D(Z_Param_RenderTarget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPPSkyCreatorFunctionLibrary::execElevationRefraction)
	{
		P_GET_PROPERTY(FDoubleProperty,Z_Param_F);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=UPPSkyCreatorFunctionLibrary::ElevationRefraction(Z_Param_F);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPPSkyCreatorFunctionLibrary::execFindLightningPosition)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_UBOOL(Z_Param_bSampleCloudDensity);
		P_GET_PROPERTY(FIntProperty,Z_Param_Samples);
		P_GET_OBJECT(UMaterialParameterCollection,Z_Param_ParameterCollection);
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material);
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_RenderTarget);
		P_GET_STRUCT(FVector,Z_Param_Position);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InnerRadius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_OuterRadius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MinHeight);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxHeight);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DensityThreshold);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPPSkyCreatorFunctionLibrary::FindLightningPosition(Z_Param_WorldContextObject,Z_Param_bSampleCloudDensity,Z_Param_Samples,Z_Param_ParameterCollection,Z_Param_Material,Z_Param_RenderTarget,Z_Param_Position,Z_Param_InnerRadius,Z_Param_OuterRadius,Z_Param_MinHeight,Z_Param_MaxHeight,Z_Param_DensityThreshold,Z_Param_Out_OutPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPPSkyCreatorFunctionLibrary::execGetCloudDensityAtPosition)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FVector,Z_Param_Position);
		P_GET_OBJECT(UMaterialParameterCollection,Z_Param_ParameterCollection);
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material);
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_RenderTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UPPSkyCreatorFunctionLibrary::GetCloudDensityAtPosition(Z_Param_WorldContextObject,Z_Param_Position,Z_Param_ParameterCollection,Z_Param_Material,Z_Param_RenderTarget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPPSkyCreatorFunctionLibrary::execGetRealMoonPosition)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Latitude);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Longitude);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeZone);
		P_GET_UBOOL(Z_Param_bIsDaylightSavingTime);
		P_GET_STRUCT(FDateTime,Z_Param_DateTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FPPCelestialPositionData*)Z_Param__Result=UPPSkyCreatorFunctionLibrary::GetRealMoonPosition(Z_Param_Latitude,Z_Param_Longitude,Z_Param_TimeZone,Z_Param_bIsDaylightSavingTime,Z_Param_DateTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPPSkyCreatorFunctionLibrary::execGetRealSunPosition)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Latitude);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Longitude);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeZone);
		P_GET_UBOOL(Z_Param_bIsDaylightSavingTime);
		P_GET_STRUCT(FDateTime,Z_Param_DateTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FPPCelestialPositionData*)Z_Param__Result=UPPSkyCreatorFunctionLibrary::GetRealSunPosition(Z_Param_Latitude,Z_Param_Longitude,Z_Param_TimeZone,Z_Param_bIsDaylightSavingTime,Z_Param_DateTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPPSkyCreatorFunctionLibrary::execIsApplicationForegroundNow)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPPSkyCreatorFunctionLibrary::IsApplicationForegroundNow();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPPSkyCreatorFunctionLibrary::execKilometersToCentimeters)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UPPSkyCreatorFunctionLibrary::KilometersToCentimeters(Z_Param_Value);
		P_NATIVE_END;
	}
	void UPPSkyCreatorFunctionLibrary::StaticRegisterNativesUPPSkyCreatorFunctionLibrary()
	{
		UClass* Class = UPPSkyCreatorFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CentimetersToKilometers", &UPPSkyCreatorFunctionLibrary::execCentimetersToKilometers },
			{ "CheckCloudDensityAtPosition", &UPPSkyCreatorFunctionLibrary::execCheckCloudDensityAtPosition },
			{ "ConvertRenderTargetToTexture2D", &UPPSkyCreatorFunctionLibrary::execConvertRenderTargetToTexture2D },
			{ "CreateAndAssignMID", &UPPSkyCreatorFunctionLibrary::execCreateAndAssignMID },
			{ "DynamicConvertRenderTargetToTexture2D", &UPPSkyCreatorFunctionLibrary::execDynamicConvertRenderTargetToTexture2D },
			{ "ElevationRefraction", &UPPSkyCreatorFunctionLibrary::execElevationRefraction },
			{ "FindLightningPosition", &UPPSkyCreatorFunctionLibrary::execFindLightningPosition },
			{ "GetCloudDensityAtPosition", &UPPSkyCreatorFunctionLibrary::execGetCloudDensityAtPosition },
			{ "GetRealMoonPosition", &UPPSkyCreatorFunctionLibrary::execGetRealMoonPosition },
			{ "GetRealSunPosition", &UPPSkyCreatorFunctionLibrary::execGetRealSunPosition },
			{ "IsApplicationForegroundNow", &UPPSkyCreatorFunctionLibrary::execIsApplicationForegroundNow },
			{ "KilometersToCentimeters", &UPPSkyCreatorFunctionLibrary::execKilometersToCentimeters },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_CentimetersToKilometers_Statics
	{
		struct PPSkyCreatorFunctionLibrary_eventCentimetersToKilometers_Parms
		{
			float Value;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_CentimetersToKilometers_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_CentimetersToKilometers_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PPSkyCreatorFunctionLibrary_eventCentimetersToKilometers_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_CentimetersToKilometers_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_CentimetersToKilometers_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_CentimetersToKilometers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PPSkyCreatorFunctionLibrary_eventCentimetersToKilometers_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_CentimetersToKilometers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_CentimetersToKilometers_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_CentimetersToKilometers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_CentimetersToKilometers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PPSkyCreatorFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_CentimetersToKilometers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPPSkyCreatorFunctionLibrary, nullptr, "CentimetersToKilometers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_CentimetersToKilometers_Statics::PPSkyCreatorFunctionLibrary_eventCentimetersToKilometers_Parms), Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_CentimetersToKilometers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_CentimetersToKilometers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_CentimetersToKilometers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_CentimetersToKilometers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_CentimetersToKilometers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_CentimetersToKilometers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_CheckCloudDensityAtPosition_Statics
	{
		struct PPSkyCreatorFunctionLibrary_eventCheckCloudDensityAtPosition_Parms
		{
			UObject* WorldContextObject;
			FVector Position;
			UMaterialParameterCollection* ParameterCollection;
			UMaterialInterface* Material;
			UTextureRenderTarget2D* RenderTarget;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ParameterCollection;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderTarget;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_CheckCloudDensityAtPosition_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PPSkyCreatorFunctionLibrary_eventCheckCloudDensityAtPosition_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_CheckCloudDensityAtPosition_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PPSkyCreatorFunctionLibrary_eventCheckCloudDensityAtPosition_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_CheckCloudDensityAtPosition_Statics::NewProp_ParameterCollection = { "ParameterCollection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PPSkyCreatorFunctionLibrary_eventCheckCloudDensityAtPosition_Parms, ParameterCollection), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_CheckCloudDensityAtPosition_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PPSkyCreatorFunctionLibrary_eventCheckCloudDensityAtPosition_Parms, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_CheckCloudDensityAtPosition_Statics::NewProp_RenderTarget = { "RenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PPSkyCreatorFunctionLibrary_eventCheckCloudDensityAtPosition_Parms, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_CheckCloudDensityAtPosition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PPSkyCreatorFunctionLibrary_eventCheckCloudDensityAtPosition_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_CheckCloudDensityAtPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PPSkyCreatorFunctionLibrary_eventCheckCloudDensityAtPosition_Parms), &Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_CheckCloudDensityAtPosition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_CheckCloudDensityAtPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_CheckCloudDensityAtPosition_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_CheckCloudDensityAtPosition_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_CheckCloudDensityAtPosition_Statics::NewProp_ParameterCollection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_CheckCloudDensityAtPosition_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_CheckCloudDensityAtPosition_Statics::NewProp_RenderTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_CheckCloudDensityAtPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_CheckCloudDensityAtPosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PPSkyCreatorFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_CheckCloudDensityAtPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPPSkyCreatorFunctionLibrary, nullptr, "CheckCloudDensityAtPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_CheckCloudDensityAtPosition_Statics::PPSkyCreatorFunctionLibrary_eventCheckCloudDensityAtPosition_Parms), Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_CheckCloudDensityAtPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_CheckCloudDensityAtPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_CheckCloudDensityAtPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_CheckCloudDensityAtPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_CheckCloudDensityAtPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_CheckCloudDensityAtPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_ConvertRenderTargetToTexture2D_Statics
	{
		struct PPSkyCreatorFunctionLibrary_eventConvertRenderTargetToTexture2D_Parms
		{
			UTextureRenderTarget2D* RenderTarget;
			UTexture2D* Texture;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderTarget;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_ConvertRenderTargetToTexture2D_Statics::NewProp_RenderTarget = { "RenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PPSkyCreatorFunctionLibrary_eventConvertRenderTargetToTexture2D_Parms, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_ConvertRenderTargetToTexture2D_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PPSkyCreatorFunctionLibrary_eventConvertRenderTargetToTexture2D_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_ConvertRenderTargetToTexture2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_ConvertRenderTargetToTexture2D_Statics::NewProp_RenderTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_ConvertRenderTargetToTexture2D_Statics::NewProp_Texture,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_ConvertRenderTargetToTexture2D_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PPSkyCreatorFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_ConvertRenderTargetToTexture2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPPSkyCreatorFunctionLibrary, nullptr, "ConvertRenderTargetToTexture2D", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_ConvertRenderTargetToTexture2D_Statics::PPSkyCreatorFunctionLibrary_eventConvertRenderTargetToTexture2D_Parms), Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_ConvertRenderTargetToTexture2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_ConvertRenderTargetToTexture2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_ConvertRenderTargetToTexture2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_ConvertRenderTargetToTexture2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_ConvertRenderTargetToTexture2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_ConvertRenderTargetToTexture2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_CreateAndAssignMID_Statics
	{
		struct PPSkyCreatorFunctionLibrary_eventCreateAndAssignMID_Parms
		{
			UObject* WorldContextObject;
			UMaterialInterface* InMaterial;
			UMaterialInstanceDynamic* InMID;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InMaterial;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InMID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_CreateAndAssignMID_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PPSkyCreatorFunctionLibrary_eventCreateAndAssignMID_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_CreateAndAssignMID_Statics::NewProp_InMaterial = { "InMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PPSkyCreatorFunctionLibrary_eventCreateAndAssignMID_Parms, InMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_CreateAndAssignMID_Statics::NewProp_InMID = { "InMID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PPSkyCreatorFunctionLibrary_eventCreateAndAssignMID_Parms, InMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_CreateAndAssignMID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_CreateAndAssignMID_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_CreateAndAssignMID_Statics::NewProp_InMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_CreateAndAssignMID_Statics::NewProp_InMID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_CreateAndAssignMID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PPSkyCreatorFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_CreateAndAssignMID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPPSkyCreatorFunctionLibrary, nullptr, "CreateAndAssignMID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_CreateAndAssignMID_Statics::PPSkyCreatorFunctionLibrary_eventCreateAndAssignMID_Parms), Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_CreateAndAssignMID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_CreateAndAssignMID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_CreateAndAssignMID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_CreateAndAssignMID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_CreateAndAssignMID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_CreateAndAssignMID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_DynamicConvertRenderTargetToTexture2D_Statics
	{
		struct PPSkyCreatorFunctionLibrary_eventDynamicConvertRenderTargetToTexture2D_Parms
		{
			UTextureRenderTarget2D* RenderTarget;
			UTexture2D* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderTarget;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_DynamicConvertRenderTargetToTexture2D_Statics::NewProp_RenderTarget = { "RenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PPSkyCreatorFunctionLibrary_eventDynamicConvertRenderTargetToTexture2D_Parms, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_DynamicConvertRenderTargetToTexture2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PPSkyCreatorFunctionLibrary_eventDynamicConvertRenderTargetToTexture2D_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_DynamicConvertRenderTargetToTexture2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_DynamicConvertRenderTargetToTexture2D_Statics::NewProp_RenderTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_DynamicConvertRenderTargetToTexture2D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_DynamicConvertRenderTargetToTexture2D_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PPSkyCreatorFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_DynamicConvertRenderTargetToTexture2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPPSkyCreatorFunctionLibrary, nullptr, "DynamicConvertRenderTargetToTexture2D", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_DynamicConvertRenderTargetToTexture2D_Statics::PPSkyCreatorFunctionLibrary_eventDynamicConvertRenderTargetToTexture2D_Parms), Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_DynamicConvertRenderTargetToTexture2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_DynamicConvertRenderTargetToTexture2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_DynamicConvertRenderTargetToTexture2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_DynamicConvertRenderTargetToTexture2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_DynamicConvertRenderTargetToTexture2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_DynamicConvertRenderTargetToTexture2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_ElevationRefraction_Statics
	{
		struct PPSkyCreatorFunctionLibrary_eventElevationRefraction_Parms
		{
			double F;
			double ReturnValue;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_F;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_ElevationRefraction_Statics::NewProp_F = { "F", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PPSkyCreatorFunctionLibrary_eventElevationRefraction_Parms, F), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_ElevationRefraction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PPSkyCreatorFunctionLibrary_eventElevationRefraction_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_ElevationRefraction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_ElevationRefraction_Statics::NewProp_F,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_ElevationRefraction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_ElevationRefraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PPSkyCreatorFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_ElevationRefraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPPSkyCreatorFunctionLibrary, nullptr, "ElevationRefraction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_ElevationRefraction_Statics::PPSkyCreatorFunctionLibrary_eventElevationRefraction_Parms), Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_ElevationRefraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_ElevationRefraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_ElevationRefraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_ElevationRefraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_ElevationRefraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_ElevationRefraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_FindLightningPosition_Statics
	{
		struct PPSkyCreatorFunctionLibrary_eventFindLightningPosition_Parms
		{
			UObject* WorldContextObject;
			bool bSampleCloudDensity;
			int32 Samples;
			UMaterialParameterCollection* ParameterCollection;
			UMaterialInterface* Material;
			UTextureRenderTarget2D* RenderTarget;
			FVector Position;
			float InnerRadius;
			float OuterRadius;
			float MinHeight;
			float MaxHeight;
			float DensityThreshold;
			FVector OutPosition;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_bSampleCloudDensity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSampleCloudDensity;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Samples;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ParameterCollection;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderTarget;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InnerRadius;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OuterRadius;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinHeight;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHeight;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DensityThreshold;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPosition;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_FindLightningPosition_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PPSkyCreatorFunctionLibrary_eventFindLightningPosition_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_FindLightningPosition_Statics::NewProp_bSampleCloudDensity_SetBit(void* Obj)
	{
		((PPSkyCreatorFunctionLibrary_eventFindLightningPosition_Parms*)Obj)->bSampleCloudDensity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_FindLightningPosition_Statics::NewProp_bSampleCloudDensity = { "bSampleCloudDensity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PPSkyCreatorFunctionLibrary_eventFindLightningPosition_Parms), &Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_FindLightningPosition_Statics::NewProp_bSampleCloudDensity_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_FindLightningPosition_Statics::NewProp_Samples = { "Samples", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PPSkyCreatorFunctionLibrary_eventFindLightningPosition_Parms, Samples), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_FindLightningPosition_Statics::NewProp_ParameterCollection = { "ParameterCollection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PPSkyCreatorFunctionLibrary_eventFindLightningPosition_Parms, ParameterCollection), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_FindLightningPosition_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PPSkyCreatorFunctionLibrary_eventFindLightningPosition_Parms, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_FindLightningPosition_Statics::NewProp_RenderTarget = { "RenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PPSkyCreatorFunctionLibrary_eventFindLightningPosition_Parms, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_FindLightningPosition_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PPSkyCreatorFunctionLibrary_eventFindLightningPosition_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_FindLightningPosition_Statics::NewProp_InnerRadius = { "InnerRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PPSkyCreatorFunctionLibrary_eventFindLightningPosition_Parms, InnerRadius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_FindLightningPosition_Statics::NewProp_OuterRadius = { "OuterRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PPSkyCreatorFunctionLibrary_eventFindLightningPosition_Parms, OuterRadius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_FindLightningPosition_Statics::NewProp_MinHeight = { "MinHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PPSkyCreatorFunctionLibrary_eventFindLightningPosition_Parms, MinHeight), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_FindLightningPosition_Statics::NewProp_MaxHeight = { "MaxHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PPSkyCreatorFunctionLibrary_eventFindLightningPosition_Parms, MaxHeight), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_FindLightningPosition_Statics::NewProp_DensityThreshold = { "DensityThreshold", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PPSkyCreatorFunctionLibrary_eventFindLightningPosition_Parms, DensityThreshold), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_FindLightningPosition_Statics::NewProp_OutPosition = { "OutPosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PPSkyCreatorFunctionLibrary_eventFindLightningPosition_Parms, OutPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_FindLightningPosition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PPSkyCreatorFunctionLibrary_eventFindLightningPosition_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_FindLightningPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PPSkyCreatorFunctionLibrary_eventFindLightningPosition_Parms), &Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_FindLightningPosition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_FindLightningPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_FindLightningPosition_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_FindLightningPosition_Statics::NewProp_bSampleCloudDensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_FindLightningPosition_Statics::NewProp_Samples,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_FindLightningPosition_Statics::NewProp_ParameterCollection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_FindLightningPosition_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_FindLightningPosition_Statics::NewProp_RenderTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_FindLightningPosition_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_FindLightningPosition_Statics::NewProp_InnerRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_FindLightningPosition_Statics::NewProp_OuterRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_FindLightningPosition_Statics::NewProp_MinHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_FindLightningPosition_Statics::NewProp_MaxHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_FindLightningPosition_Statics::NewProp_DensityThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_FindLightningPosition_Statics::NewProp_OutPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_FindLightningPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_FindLightningPosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PPSkyCreatorFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_FindLightningPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPPSkyCreatorFunctionLibrary, nullptr, "FindLightningPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_FindLightningPosition_Statics::PPSkyCreatorFunctionLibrary_eventFindLightningPosition_Parms), Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_FindLightningPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_FindLightningPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_FindLightningPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_FindLightningPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_FindLightningPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_FindLightningPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetCloudDensityAtPosition_Statics
	{
		struct PPSkyCreatorFunctionLibrary_eventGetCloudDensityAtPosition_Parms
		{
			UObject* WorldContextObject;
			FVector Position;
			UMaterialParameterCollection* ParameterCollection;
			UMaterialInterface* Material;
			UTextureRenderTarget2D* RenderTarget;
			float ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ParameterCollection;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderTarget;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetCloudDensityAtPosition_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PPSkyCreatorFunctionLibrary_eventGetCloudDensityAtPosition_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetCloudDensityAtPosition_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PPSkyCreatorFunctionLibrary_eventGetCloudDensityAtPosition_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetCloudDensityAtPosition_Statics::NewProp_ParameterCollection = { "ParameterCollection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PPSkyCreatorFunctionLibrary_eventGetCloudDensityAtPosition_Parms, ParameterCollection), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetCloudDensityAtPosition_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PPSkyCreatorFunctionLibrary_eventGetCloudDensityAtPosition_Parms, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetCloudDensityAtPosition_Statics::NewProp_RenderTarget = { "RenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PPSkyCreatorFunctionLibrary_eventGetCloudDensityAtPosition_Parms, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetCloudDensityAtPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PPSkyCreatorFunctionLibrary_eventGetCloudDensityAtPosition_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetCloudDensityAtPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetCloudDensityAtPosition_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetCloudDensityAtPosition_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetCloudDensityAtPosition_Statics::NewProp_ParameterCollection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetCloudDensityAtPosition_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetCloudDensityAtPosition_Statics::NewProp_RenderTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetCloudDensityAtPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetCloudDensityAtPosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PPSkyCreatorFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetCloudDensityAtPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPPSkyCreatorFunctionLibrary, nullptr, "GetCloudDensityAtPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetCloudDensityAtPosition_Statics::PPSkyCreatorFunctionLibrary_eventGetCloudDensityAtPosition_Parms), Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetCloudDensityAtPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetCloudDensityAtPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetCloudDensityAtPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetCloudDensityAtPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetCloudDensityAtPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetCloudDensityAtPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetRealMoonPosition_Statics
	{
		struct PPSkyCreatorFunctionLibrary_eventGetRealMoonPosition_Parms
		{
			float Latitude;
			float Longitude;
			float TimeZone;
			bool bIsDaylightSavingTime;
			FDateTime DateTime;
			FPPCelestialPositionData ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Latitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Latitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Longitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Longitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeZone_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeZone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsDaylightSavingTime_MetaData[];
#endif
		static void NewProp_bIsDaylightSavingTime_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDaylightSavingTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DateTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DateTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetRealMoonPosition_Statics::NewProp_Latitude_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetRealMoonPosition_Statics::NewProp_Latitude = { "Latitude", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PPSkyCreatorFunctionLibrary_eventGetRealMoonPosition_Parms, Latitude), METADATA_PARAMS(Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetRealMoonPosition_Statics::NewProp_Latitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetRealMoonPosition_Statics::NewProp_Latitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetRealMoonPosition_Statics::NewProp_Longitude_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetRealMoonPosition_Statics::NewProp_Longitude = { "Longitude", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PPSkyCreatorFunctionLibrary_eventGetRealMoonPosition_Parms, Longitude), METADATA_PARAMS(Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetRealMoonPosition_Statics::NewProp_Longitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetRealMoonPosition_Statics::NewProp_Longitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetRealMoonPosition_Statics::NewProp_TimeZone_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetRealMoonPosition_Statics::NewProp_TimeZone = { "TimeZone", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PPSkyCreatorFunctionLibrary_eventGetRealMoonPosition_Parms, TimeZone), METADATA_PARAMS(Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetRealMoonPosition_Statics::NewProp_TimeZone_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetRealMoonPosition_Statics::NewProp_TimeZone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetRealMoonPosition_Statics::NewProp_bIsDaylightSavingTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetRealMoonPosition_Statics::NewProp_bIsDaylightSavingTime_SetBit(void* Obj)
	{
		((PPSkyCreatorFunctionLibrary_eventGetRealMoonPosition_Parms*)Obj)->bIsDaylightSavingTime = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetRealMoonPosition_Statics::NewProp_bIsDaylightSavingTime = { "bIsDaylightSavingTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PPSkyCreatorFunctionLibrary_eventGetRealMoonPosition_Parms), &Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetRealMoonPosition_Statics::NewProp_bIsDaylightSavingTime_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetRealMoonPosition_Statics::NewProp_bIsDaylightSavingTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetRealMoonPosition_Statics::NewProp_bIsDaylightSavingTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetRealMoonPosition_Statics::NewProp_DateTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetRealMoonPosition_Statics::NewProp_DateTime = { "DateTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PPSkyCreatorFunctionLibrary_eventGetRealMoonPosition_Parms, DateTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetRealMoonPosition_Statics::NewProp_DateTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetRealMoonPosition_Statics::NewProp_DateTime_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetRealMoonPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PPSkyCreatorFunctionLibrary_eventGetRealMoonPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FPPCelestialPositionData, METADATA_PARAMS(nullptr, 0) }; // 4161803525
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetRealMoonPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetRealMoonPosition_Statics::NewProp_Latitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetRealMoonPosition_Statics::NewProp_Longitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetRealMoonPosition_Statics::NewProp_TimeZone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetRealMoonPosition_Statics::NewProp_bIsDaylightSavingTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetRealMoonPosition_Statics::NewProp_DateTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetRealMoonPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetRealMoonPosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PPSkyCreatorFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetRealMoonPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPPSkyCreatorFunctionLibrary, nullptr, "GetRealMoonPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetRealMoonPosition_Statics::PPSkyCreatorFunctionLibrary_eventGetRealMoonPosition_Parms), Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetRealMoonPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetRealMoonPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetRealMoonPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetRealMoonPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetRealMoonPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetRealMoonPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetRealSunPosition_Statics
	{
		struct PPSkyCreatorFunctionLibrary_eventGetRealSunPosition_Parms
		{
			float Latitude;
			float Longitude;
			float TimeZone;
			bool bIsDaylightSavingTime;
			FDateTime DateTime;
			FPPCelestialPositionData ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Latitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Latitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Longitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Longitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeZone_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeZone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsDaylightSavingTime_MetaData[];
#endif
		static void NewProp_bIsDaylightSavingTime_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDaylightSavingTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DateTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DateTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetRealSunPosition_Statics::NewProp_Latitude_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetRealSunPosition_Statics::NewProp_Latitude = { "Latitude", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PPSkyCreatorFunctionLibrary_eventGetRealSunPosition_Parms, Latitude), METADATA_PARAMS(Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetRealSunPosition_Statics::NewProp_Latitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetRealSunPosition_Statics::NewProp_Latitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetRealSunPosition_Statics::NewProp_Longitude_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetRealSunPosition_Statics::NewProp_Longitude = { "Longitude", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PPSkyCreatorFunctionLibrary_eventGetRealSunPosition_Parms, Longitude), METADATA_PARAMS(Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetRealSunPosition_Statics::NewProp_Longitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetRealSunPosition_Statics::NewProp_Longitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetRealSunPosition_Statics::NewProp_TimeZone_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetRealSunPosition_Statics::NewProp_TimeZone = { "TimeZone", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PPSkyCreatorFunctionLibrary_eventGetRealSunPosition_Parms, TimeZone), METADATA_PARAMS(Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetRealSunPosition_Statics::NewProp_TimeZone_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetRealSunPosition_Statics::NewProp_TimeZone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetRealSunPosition_Statics::NewProp_bIsDaylightSavingTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetRealSunPosition_Statics::NewProp_bIsDaylightSavingTime_SetBit(void* Obj)
	{
		((PPSkyCreatorFunctionLibrary_eventGetRealSunPosition_Parms*)Obj)->bIsDaylightSavingTime = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetRealSunPosition_Statics::NewProp_bIsDaylightSavingTime = { "bIsDaylightSavingTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PPSkyCreatorFunctionLibrary_eventGetRealSunPosition_Parms), &Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetRealSunPosition_Statics::NewProp_bIsDaylightSavingTime_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetRealSunPosition_Statics::NewProp_bIsDaylightSavingTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetRealSunPosition_Statics::NewProp_bIsDaylightSavingTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetRealSunPosition_Statics::NewProp_DateTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetRealSunPosition_Statics::NewProp_DateTime = { "DateTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PPSkyCreatorFunctionLibrary_eventGetRealSunPosition_Parms, DateTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetRealSunPosition_Statics::NewProp_DateTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetRealSunPosition_Statics::NewProp_DateTime_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetRealSunPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PPSkyCreatorFunctionLibrary_eventGetRealSunPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FPPCelestialPositionData, METADATA_PARAMS(nullptr, 0) }; // 4161803525
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetRealSunPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetRealSunPosition_Statics::NewProp_Latitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetRealSunPosition_Statics::NewProp_Longitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetRealSunPosition_Statics::NewProp_TimeZone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetRealSunPosition_Statics::NewProp_bIsDaylightSavingTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetRealSunPosition_Statics::NewProp_DateTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetRealSunPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetRealSunPosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PPSkyCreatorFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetRealSunPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPPSkyCreatorFunctionLibrary, nullptr, "GetRealSunPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetRealSunPosition_Statics::PPSkyCreatorFunctionLibrary_eventGetRealSunPosition_Parms), Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetRealSunPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetRealSunPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetRealSunPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetRealSunPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetRealSunPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetRealSunPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_IsApplicationForegroundNow_Statics
	{
		struct PPSkyCreatorFunctionLibrary_eventIsApplicationForegroundNow_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_IsApplicationForegroundNow_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PPSkyCreatorFunctionLibrary_eventIsApplicationForegroundNow_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_IsApplicationForegroundNow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PPSkyCreatorFunctionLibrary_eventIsApplicationForegroundNow_Parms), &Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_IsApplicationForegroundNow_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_IsApplicationForegroundNow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_IsApplicationForegroundNow_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_IsApplicationForegroundNow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PPSkyCreatorFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_IsApplicationForegroundNow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPPSkyCreatorFunctionLibrary, nullptr, "IsApplicationForegroundNow", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_IsApplicationForegroundNow_Statics::PPSkyCreatorFunctionLibrary_eventIsApplicationForegroundNow_Parms), Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_IsApplicationForegroundNow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_IsApplicationForegroundNow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_IsApplicationForegroundNow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_IsApplicationForegroundNow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_IsApplicationForegroundNow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_IsApplicationForegroundNow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_KilometersToCentimeters_Statics
	{
		struct PPSkyCreatorFunctionLibrary_eventKilometersToCentimeters_Parms
		{
			float Value;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_KilometersToCentimeters_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_KilometersToCentimeters_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PPSkyCreatorFunctionLibrary_eventKilometersToCentimeters_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_KilometersToCentimeters_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_KilometersToCentimeters_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_KilometersToCentimeters_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PPSkyCreatorFunctionLibrary_eventKilometersToCentimeters_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_KilometersToCentimeters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_KilometersToCentimeters_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_KilometersToCentimeters_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_KilometersToCentimeters_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PPSkyCreatorFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_KilometersToCentimeters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPPSkyCreatorFunctionLibrary, nullptr, "KilometersToCentimeters", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_KilometersToCentimeters_Statics::PPSkyCreatorFunctionLibrary_eventKilometersToCentimeters_Parms), Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_KilometersToCentimeters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_KilometersToCentimeters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_KilometersToCentimeters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_KilometersToCentimeters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_KilometersToCentimeters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_KilometersToCentimeters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPPSkyCreatorFunctionLibrary);
	UClass* Z_Construct_UClass_UPPSkyCreatorFunctionLibrary_NoRegister()
	{
		return UPPSkyCreatorFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UPPSkyCreatorFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPPSkyCreatorFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_PPSkyCreatorPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPPSkyCreatorFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_CentimetersToKilometers, "CentimetersToKilometers" }, // 2568189168
		{ &Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_CheckCloudDensityAtPosition, "CheckCloudDensityAtPosition" }, // 3077048576
		{ &Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_ConvertRenderTargetToTexture2D, "ConvertRenderTargetToTexture2D" }, // 33956296
		{ &Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_CreateAndAssignMID, "CreateAndAssignMID" }, // 1671725379
		{ &Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_DynamicConvertRenderTargetToTexture2D, "DynamicConvertRenderTargetToTexture2D" }, // 2090380264
		{ &Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_ElevationRefraction, "ElevationRefraction" }, // 475118255
		{ &Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_FindLightningPosition, "FindLightningPosition" }, // 217315242
		{ &Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetCloudDensityAtPosition, "GetCloudDensityAtPosition" }, // 514265551
		{ &Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetRealMoonPosition, "GetRealMoonPosition" }, // 3938597852
		{ &Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_GetRealSunPosition, "GetRealSunPosition" }, // 3554420122
		{ &Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_IsApplicationForegroundNow, "IsApplicationForegroundNow" }, // 368792119
		{ &Z_Construct_UFunction_UPPSkyCreatorFunctionLibrary_KilometersToCentimeters, "KilometersToCentimeters" }, // 837061956
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPPSkyCreatorFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PPSkyCreatorFunctionLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PPSkyCreatorFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPPSkyCreatorFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPPSkyCreatorFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPPSkyCreatorFunctionLibrary_Statics::ClassParams = {
		&UPPSkyCreatorFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPPSkyCreatorFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPPSkyCreatorFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPPSkyCreatorFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UPPSkyCreatorFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPPSkyCreatorFunctionLibrary.OuterSingleton, Z_Construct_UClass_UPPSkyCreatorFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPPSkyCreatorFunctionLibrary.OuterSingleton;
	}
	template<> PPSKYCREATORPLUGIN_API UClass* StaticClass<UPPSkyCreatorFunctionLibrary>()
	{
		return UPPSkyCreatorFunctionLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPPSkyCreatorFunctionLibrary);
	UPPSkyCreatorFunctionLibrary::~UPPSkyCreatorFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPSkyCreatorFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPSkyCreatorFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPPSkyCreatorFunctionLibrary, UPPSkyCreatorFunctionLibrary::StaticClass, TEXT("UPPSkyCreatorFunctionLibrary"), &Z_Registration_Info_UClass_UPPSkyCreatorFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPPSkyCreatorFunctionLibrary), 2294737131U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPSkyCreatorFunctionLibrary_h_631785345(TEXT("/Script/PPSkyCreatorPlugin"),
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPSkyCreatorFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPSkyCreatorFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
