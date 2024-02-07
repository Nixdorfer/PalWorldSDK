// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NiagaraUIRenderer/Public/NiagaraSystemWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraSystemWidget() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	NIAGARAUIRENDERER_API UClass* Z_Construct_UClass_ANiagaraUIActor_NoRegister();
	NIAGARAUIRENDERER_API UClass* Z_Construct_UClass_UNiagaraSystemWidget();
	NIAGARAUIRENDERER_API UClass* Z_Construct_UClass_UNiagaraSystemWidget_NoRegister();
	NIAGARAUIRENDERER_API UClass* Z_Construct_UClass_UNiagaraUIComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UPackage* Z_Construct_UPackage__Script_NiagaraUIRenderer();
// End Cross Module References
	DEFINE_FUNCTION(UNiagaraSystemWidget::execActivateSystem)
	{
		P_GET_UBOOL(Z_Param_Reset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateSystem(Z_Param_Reset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraSystemWidget::execDeactivateSystem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeactivateSystem();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraSystemWidget::execGetNiagaraComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNiagaraUIComponent**)Z_Param__Result=P_THIS->GetNiagaraComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraSystemWidget::execGetRemapMaterial)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_OriginalMaterial);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterialInterface**)Z_Param__Result=P_THIS->GetRemapMaterial(Z_Param_OriginalMaterial);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraSystemWidget::execSetDesiredWidgetSize)
	{
		P_GET_STRUCT(FVector2D,Z_Param_NewDesiredSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDesiredWidgetSize(Z_Param_NewDesiredSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraSystemWidget::execSetRemapMaterial)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_OriginalMaterial);
		P_GET_OBJECT(UMaterialInterface,Z_Param_RemapMaterial);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRemapMaterial(Z_Param_OriginalMaterial,Z_Param_RemapMaterial);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraSystemWidget::execUpdateNiagaraSystemReference)
	{
		P_GET_OBJECT(UNiagaraSystem,Z_Param_NewNiagaraSystem);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateNiagaraSystemReference(Z_Param_NewNiagaraSystem);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraSystemWidget::execUpdateTickWhenPaused)
	{
		P_GET_UBOOL(Z_Param_NewTickWhenPaused);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateTickWhenPaused(Z_Param_NewTickWhenPaused);
		P_NATIVE_END;
	}
	void UNiagaraSystemWidget::StaticRegisterNativesUNiagaraSystemWidget()
	{
		UClass* Class = UNiagaraSystemWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateSystem", &UNiagaraSystemWidget::execActivateSystem },
			{ "DeactivateSystem", &UNiagaraSystemWidget::execDeactivateSystem },
			{ "GetNiagaraComponent", &UNiagaraSystemWidget::execGetNiagaraComponent },
			{ "GetRemapMaterial", &UNiagaraSystemWidget::execGetRemapMaterial },
			{ "SetDesiredWidgetSize", &UNiagaraSystemWidget::execSetDesiredWidgetSize },
			{ "SetRemapMaterial", &UNiagaraSystemWidget::execSetRemapMaterial },
			{ "UpdateNiagaraSystemReference", &UNiagaraSystemWidget::execUpdateNiagaraSystemReference },
			{ "UpdateTickWhenPaused", &UNiagaraSystemWidget::execUpdateTickWhenPaused },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNiagaraSystemWidget_ActivateSystem_Statics
	{
		struct NiagaraSystemWidget_eventActivateSystem_Parms
		{
			bool Reset;
		};
		static void NewProp_Reset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Reset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNiagaraSystemWidget_ActivateSystem_Statics::NewProp_Reset_SetBit(void* Obj)
	{
		((NiagaraSystemWidget_eventActivateSystem_Parms*)Obj)->Reset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraSystemWidget_ActivateSystem_Statics::NewProp_Reset = { "Reset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraSystemWidget_eventActivateSystem_Parms), &Z_Construct_UFunction_UNiagaraSystemWidget_ActivateSystem_Statics::NewProp_Reset_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraSystemWidget_ActivateSystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSystemWidget_ActivateSystem_Statics::NewProp_Reset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraSystemWidget_ActivateSystem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraSystemWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraSystemWidget_ActivateSystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraSystemWidget, nullptr, "ActivateSystem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraSystemWidget_ActivateSystem_Statics::NiagaraSystemWidget_eventActivateSystem_Parms), Z_Construct_UFunction_UNiagaraSystemWidget_ActivateSystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraSystemWidget_ActivateSystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraSystemWidget_ActivateSystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraSystemWidget_ActivateSystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraSystemWidget_ActivateSystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraSystemWidget_ActivateSystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraSystemWidget_DeactivateSystem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraSystemWidget_DeactivateSystem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraSystemWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraSystemWidget_DeactivateSystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraSystemWidget, nullptr, "DeactivateSystem", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraSystemWidget_DeactivateSystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraSystemWidget_DeactivateSystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraSystemWidget_DeactivateSystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraSystemWidget_DeactivateSystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraSystemWidget_GetNiagaraComponent_Statics
	{
		struct NiagaraSystemWidget_eventGetNiagaraComponent_Parms
		{
			UNiagaraUIComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraSystemWidget_GetNiagaraComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraSystemWidget_GetNiagaraComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraSystemWidget_eventGetNiagaraComponent_Parms, ReturnValue), Z_Construct_UClass_UNiagaraUIComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraSystemWidget_GetNiagaraComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraSystemWidget_GetNiagaraComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraSystemWidget_GetNiagaraComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSystemWidget_GetNiagaraComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraSystemWidget_GetNiagaraComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraSystemWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraSystemWidget_GetNiagaraComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraSystemWidget, nullptr, "GetNiagaraComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraSystemWidget_GetNiagaraComponent_Statics::NiagaraSystemWidget_eventGetNiagaraComponent_Parms), Z_Construct_UFunction_UNiagaraSystemWidget_GetNiagaraComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraSystemWidget_GetNiagaraComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraSystemWidget_GetNiagaraComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraSystemWidget_GetNiagaraComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraSystemWidget_GetNiagaraComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraSystemWidget_GetNiagaraComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraSystemWidget_GetRemapMaterial_Statics
	{
		struct NiagaraSystemWidget_eventGetRemapMaterial_Parms
		{
			UMaterialInterface* OriginalMaterial;
			UMaterialInterface* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OriginalMaterial;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraSystemWidget_GetRemapMaterial_Statics::NewProp_OriginalMaterial = { "OriginalMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraSystemWidget_eventGetRemapMaterial_Parms, OriginalMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraSystemWidget_GetRemapMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraSystemWidget_eventGetRemapMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraSystemWidget_GetRemapMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSystemWidget_GetRemapMaterial_Statics::NewProp_OriginalMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSystemWidget_GetRemapMaterial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraSystemWidget_GetRemapMaterial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraSystemWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraSystemWidget_GetRemapMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraSystemWidget, nullptr, "GetRemapMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraSystemWidget_GetRemapMaterial_Statics::NiagaraSystemWidget_eventGetRemapMaterial_Parms), Z_Construct_UFunction_UNiagaraSystemWidget_GetRemapMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraSystemWidget_GetRemapMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraSystemWidget_GetRemapMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraSystemWidget_GetRemapMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraSystemWidget_GetRemapMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraSystemWidget_GetRemapMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraSystemWidget_SetDesiredWidgetSize_Statics
	{
		struct NiagaraSystemWidget_eventSetDesiredWidgetSize_Parms
		{
			FVector2D NewDesiredSize;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewDesiredSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraSystemWidget_SetDesiredWidgetSize_Statics::NewProp_NewDesiredSize = { "NewDesiredSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraSystemWidget_eventSetDesiredWidgetSize_Parms, NewDesiredSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraSystemWidget_SetDesiredWidgetSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSystemWidget_SetDesiredWidgetSize_Statics::NewProp_NewDesiredSize,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraSystemWidget_SetDesiredWidgetSize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraSystemWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraSystemWidget_SetDesiredWidgetSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraSystemWidget, nullptr, "SetDesiredWidgetSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraSystemWidget_SetDesiredWidgetSize_Statics::NiagaraSystemWidget_eventSetDesiredWidgetSize_Parms), Z_Construct_UFunction_UNiagaraSystemWidget_SetDesiredWidgetSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraSystemWidget_SetDesiredWidgetSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraSystemWidget_SetDesiredWidgetSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraSystemWidget_SetDesiredWidgetSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraSystemWidget_SetDesiredWidgetSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraSystemWidget_SetDesiredWidgetSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraSystemWidget_SetRemapMaterial_Statics
	{
		struct NiagaraSystemWidget_eventSetRemapMaterial_Parms
		{
			UMaterialInterface* OriginalMaterial;
			UMaterialInterface* RemapMaterial;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OriginalMaterial;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RemapMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraSystemWidget_SetRemapMaterial_Statics::NewProp_OriginalMaterial = { "OriginalMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraSystemWidget_eventSetRemapMaterial_Parms, OriginalMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraSystemWidget_SetRemapMaterial_Statics::NewProp_RemapMaterial = { "RemapMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraSystemWidget_eventSetRemapMaterial_Parms, RemapMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraSystemWidget_SetRemapMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSystemWidget_SetRemapMaterial_Statics::NewProp_OriginalMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSystemWidget_SetRemapMaterial_Statics::NewProp_RemapMaterial,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraSystemWidget_SetRemapMaterial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraSystemWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraSystemWidget_SetRemapMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraSystemWidget, nullptr, "SetRemapMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraSystemWidget_SetRemapMaterial_Statics::NiagaraSystemWidget_eventSetRemapMaterial_Parms), Z_Construct_UFunction_UNiagaraSystemWidget_SetRemapMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraSystemWidget_SetRemapMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraSystemWidget_SetRemapMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraSystemWidget_SetRemapMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraSystemWidget_SetRemapMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraSystemWidget_SetRemapMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraSystemWidget_UpdateNiagaraSystemReference_Statics
	{
		struct NiagaraSystemWidget_eventUpdateNiagaraSystemReference_Parms
		{
			UNiagaraSystem* NewNiagaraSystem;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewNiagaraSystem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraSystemWidget_UpdateNiagaraSystemReference_Statics::NewProp_NewNiagaraSystem = { "NewNiagaraSystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraSystemWidget_eventUpdateNiagaraSystemReference_Parms, NewNiagaraSystem), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraSystemWidget_UpdateNiagaraSystemReference_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSystemWidget_UpdateNiagaraSystemReference_Statics::NewProp_NewNiagaraSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraSystemWidget_UpdateNiagaraSystemReference_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraSystemWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraSystemWidget_UpdateNiagaraSystemReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraSystemWidget, nullptr, "UpdateNiagaraSystemReference", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraSystemWidget_UpdateNiagaraSystemReference_Statics::NiagaraSystemWidget_eventUpdateNiagaraSystemReference_Parms), Z_Construct_UFunction_UNiagaraSystemWidget_UpdateNiagaraSystemReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraSystemWidget_UpdateNiagaraSystemReference_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraSystemWidget_UpdateNiagaraSystemReference_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraSystemWidget_UpdateNiagaraSystemReference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraSystemWidget_UpdateNiagaraSystemReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraSystemWidget_UpdateNiagaraSystemReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraSystemWidget_UpdateTickWhenPaused_Statics
	{
		struct NiagaraSystemWidget_eventUpdateTickWhenPaused_Parms
		{
			bool NewTickWhenPaused;
		};
		static void NewProp_NewTickWhenPaused_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_NewTickWhenPaused;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNiagaraSystemWidget_UpdateTickWhenPaused_Statics::NewProp_NewTickWhenPaused_SetBit(void* Obj)
	{
		((NiagaraSystemWidget_eventUpdateTickWhenPaused_Parms*)Obj)->NewTickWhenPaused = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraSystemWidget_UpdateTickWhenPaused_Statics::NewProp_NewTickWhenPaused = { "NewTickWhenPaused", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraSystemWidget_eventUpdateTickWhenPaused_Parms), &Z_Construct_UFunction_UNiagaraSystemWidget_UpdateTickWhenPaused_Statics::NewProp_NewTickWhenPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraSystemWidget_UpdateTickWhenPaused_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSystemWidget_UpdateTickWhenPaused_Statics::NewProp_NewTickWhenPaused,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraSystemWidget_UpdateTickWhenPaused_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraSystemWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraSystemWidget_UpdateTickWhenPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraSystemWidget, nullptr, "UpdateTickWhenPaused", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraSystemWidget_UpdateTickWhenPaused_Statics::NiagaraSystemWidget_eventUpdateTickWhenPaused_Parms), Z_Construct_UFunction_UNiagaraSystemWidget_UpdateTickWhenPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraSystemWidget_UpdateTickWhenPaused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraSystemWidget_UpdateTickWhenPaused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraSystemWidget_UpdateTickWhenPaused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraSystemWidget_UpdateTickWhenPaused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraSystemWidget_UpdateTickWhenPaused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraSystemWidget);
	UClass* Z_Construct_UClass_UNiagaraSystemWidget_NoRegister()
	{
		return UNiagaraSystemWidget::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraSystemWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystemReference_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystemReference;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialRemapList_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialRemapList_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialRemapList_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_MaterialRemapList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoActivate_MetaData[];
#endif
		static void NewProp_AutoActivate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AutoActivate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TickWhenPaused_MetaData[];
#endif
		static void NewProp_TickWhenPaused_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_TickWhenPaused;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DesiredWidgetSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DesiredWidgetSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FakeDepthScale_MetaData[];
#endif
		static void NewProp_FakeDepthScale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_FakeDepthScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FakeDepthScaleDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FakeDepthScaleDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShowDebugSystemInWorld_MetaData[];
#endif
		static void NewProp_ShowDebugSystemInWorld_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowDebugSystemInWorld;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisableWarnings_MetaData[];
#endif
		static void NewProp_DisableWarnings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DisableWarnings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraSystemWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraUIRenderer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNiagaraSystemWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNiagaraSystemWidget_ActivateSystem, "ActivateSystem" }, // 4077830781
		{ &Z_Construct_UFunction_UNiagaraSystemWidget_DeactivateSystem, "DeactivateSystem" }, // 2038469214
		{ &Z_Construct_UFunction_UNiagaraSystemWidget_GetNiagaraComponent, "GetNiagaraComponent" }, // 2106833326
		{ &Z_Construct_UFunction_UNiagaraSystemWidget_GetRemapMaterial, "GetRemapMaterial" }, // 3398782002
		{ &Z_Construct_UFunction_UNiagaraSystemWidget_SetDesiredWidgetSize, "SetDesiredWidgetSize" }, // 1706684522
		{ &Z_Construct_UFunction_UNiagaraSystemWidget_SetRemapMaterial, "SetRemapMaterial" }, // 1260938529
		{ &Z_Construct_UFunction_UNiagaraSystemWidget_UpdateNiagaraSystemReference, "UpdateNiagaraSystemReference" }, // 2319064886
		{ &Z_Construct_UFunction_UNiagaraSystemWidget_UpdateTickWhenPaused, "UpdateTickWhenPaused" }, // 2192773793
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystemWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "NiagaraSystemWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NiagaraSystemWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystemWidget_Statics::NewProp_NiagaraSystemReference_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NiagaraSystemWidget" },
		{ "ModuleRelativePath", "Public/NiagaraSystemWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraSystemWidget_Statics::NewProp_NiagaraSystemReference = { "NiagaraSystemReference", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSystemWidget, NiagaraSystemReference), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystemWidget_Statics::NewProp_NiagaraSystemReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystemWidget_Statics::NewProp_NiagaraSystemReference_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraSystemWidget_Statics::NewProp_MaterialRemapList_ValueProp = { "MaterialRemapList", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraSystemWidget_Statics::NewProp_MaterialRemapList_Key_KeyProp = { "MaterialRemapList_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystemWidget_Statics::NewProp_MaterialRemapList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NiagaraSystemWidget" },
		{ "ModuleRelativePath", "Public/NiagaraSystemWidget.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNiagaraSystemWidget_Statics::NewProp_MaterialRemapList = { "MaterialRemapList", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSystemWidget, MaterialRemapList), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystemWidget_Statics::NewProp_MaterialRemapList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystemWidget_Statics::NewProp_MaterialRemapList_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystemWidget_Statics::NewProp_AutoActivate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NiagaraSystemWidget" },
		{ "ModuleRelativePath", "Public/NiagaraSystemWidget.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraSystemWidget_Statics::NewProp_AutoActivate_SetBit(void* Obj)
	{
		((UNiagaraSystemWidget*)Obj)->AutoActivate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystemWidget_Statics::NewProp_AutoActivate = { "AutoActivate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraSystemWidget), &Z_Construct_UClass_UNiagaraSystemWidget_Statics::NewProp_AutoActivate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystemWidget_Statics::NewProp_AutoActivate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystemWidget_Statics::NewProp_AutoActivate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystemWidget_Statics::NewProp_TickWhenPaused_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NiagaraSystemWidget" },
		{ "ModuleRelativePath", "Public/NiagaraSystemWidget.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraSystemWidget_Statics::NewProp_TickWhenPaused_SetBit(void* Obj)
	{
		((UNiagaraSystemWidget*)Obj)->TickWhenPaused = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystemWidget_Statics::NewProp_TickWhenPaused = { "TickWhenPaused", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraSystemWidget), &Z_Construct_UClass_UNiagaraSystemWidget_Statics::NewProp_TickWhenPaused_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystemWidget_Statics::NewProp_TickWhenPaused_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystemWidget_Statics::NewProp_TickWhenPaused_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystemWidget_Statics::NewProp_DesiredWidgetSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NiagaraSystemWidget" },
		{ "ModuleRelativePath", "Public/NiagaraSystemWidget.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSystemWidget_Statics::NewProp_DesiredWidgetSize = { "DesiredWidgetSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSystemWidget, DesiredWidgetSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystemWidget_Statics::NewProp_DesiredWidgetSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystemWidget_Statics::NewProp_DesiredWidgetSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystemWidget_Statics::NewProp_FakeDepthScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NiagaraSystemWidget" },
		{ "ModuleRelativePath", "Public/NiagaraSystemWidget.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraSystemWidget_Statics::NewProp_FakeDepthScale_SetBit(void* Obj)
	{
		((UNiagaraSystemWidget*)Obj)->FakeDepthScale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystemWidget_Statics::NewProp_FakeDepthScale = { "FakeDepthScale", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraSystemWidget), &Z_Construct_UClass_UNiagaraSystemWidget_Statics::NewProp_FakeDepthScale_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystemWidget_Statics::NewProp_FakeDepthScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystemWidget_Statics::NewProp_FakeDepthScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystemWidget_Statics::NewProp_FakeDepthScaleDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NiagaraSystemWidget" },
		{ "ModuleRelativePath", "Public/NiagaraSystemWidget.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraSystemWidget_Statics::NewProp_FakeDepthScaleDistance = { "FakeDepthScaleDistance", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSystemWidget, FakeDepthScaleDistance), METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystemWidget_Statics::NewProp_FakeDepthScaleDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystemWidget_Statics::NewProp_FakeDepthScaleDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystemWidget_Statics::NewProp_ShowDebugSystemInWorld_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NiagaraSystemWidget" },
		{ "ModuleRelativePath", "Public/NiagaraSystemWidget.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraSystemWidget_Statics::NewProp_ShowDebugSystemInWorld_SetBit(void* Obj)
	{
		((UNiagaraSystemWidget*)Obj)->ShowDebugSystemInWorld = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystemWidget_Statics::NewProp_ShowDebugSystemInWorld = { "ShowDebugSystemInWorld", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraSystemWidget), &Z_Construct_UClass_UNiagaraSystemWidget_Statics::NewProp_ShowDebugSystemInWorld_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystemWidget_Statics::NewProp_ShowDebugSystemInWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystemWidget_Statics::NewProp_ShowDebugSystemInWorld_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystemWidget_Statics::NewProp_DisableWarnings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NiagaraSystemWidget" },
		{ "ModuleRelativePath", "Public/NiagaraSystemWidget.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraSystemWidget_Statics::NewProp_DisableWarnings_SetBit(void* Obj)
	{
		((UNiagaraSystemWidget*)Obj)->DisableWarnings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystemWidget_Statics::NewProp_DisableWarnings = { "DisableWarnings", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraSystemWidget), &Z_Construct_UClass_UNiagaraSystemWidget_Statics::NewProp_DisableWarnings_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystemWidget_Statics::NewProp_DisableWarnings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystemWidget_Statics::NewProp_DisableWarnings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystemWidget_Statics::NewProp_NiagaraActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NiagaraSystemWidget" },
		{ "ModuleRelativePath", "Public/NiagaraSystemWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraSystemWidget_Statics::NewProp_NiagaraActor = { "NiagaraActor", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSystemWidget, NiagaraActor), Z_Construct_UClass_ANiagaraUIActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystemWidget_Statics::NewProp_NiagaraActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystemWidget_Statics::NewProp_NiagaraActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystemWidget_Statics::NewProp_NiagaraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NiagaraSystemWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NiagaraSystemWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraSystemWidget_Statics::NewProp_NiagaraComponent = { "NiagaraComponent", nullptr, (EPropertyFlags)0x004200000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSystemWidget, NiagaraComponent), Z_Construct_UClass_UNiagaraUIComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystemWidget_Statics::NewProp_NiagaraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystemWidget_Statics::NewProp_NiagaraComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraSystemWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystemWidget_Statics::NewProp_NiagaraSystemReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystemWidget_Statics::NewProp_MaterialRemapList_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystemWidget_Statics::NewProp_MaterialRemapList_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystemWidget_Statics::NewProp_MaterialRemapList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystemWidget_Statics::NewProp_AutoActivate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystemWidget_Statics::NewProp_TickWhenPaused,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystemWidget_Statics::NewProp_DesiredWidgetSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystemWidget_Statics::NewProp_FakeDepthScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystemWidget_Statics::NewProp_FakeDepthScaleDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystemWidget_Statics::NewProp_ShowDebugSystemInWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystemWidget_Statics::NewProp_DisableWarnings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystemWidget_Statics::NewProp_NiagaraActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystemWidget_Statics::NewProp_NiagaraComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraSystemWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraSystemWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraSystemWidget_Statics::ClassParams = {
		&UNiagaraSystemWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNiagaraSystemWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystemWidget_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystemWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystemWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraSystemWidget()
	{
		if (!Z_Registration_Info_UClass_UNiagaraSystemWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraSystemWidget.OuterSingleton, Z_Construct_UClass_UNiagaraSystemWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraSystemWidget.OuterSingleton;
	}
	template<> NIAGARAUIRENDERER_API UClass* StaticClass<UNiagaraSystemWidget>()
	{
		return UNiagaraSystemWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraSystemWidget);
	UNiagaraSystemWidget::~UNiagaraSystemWidget() {}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_NiagaraUIRenderer_Source_NiagaraUIRenderer_Public_NiagaraSystemWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_NiagaraUIRenderer_Source_NiagaraUIRenderer_Public_NiagaraSystemWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraSystemWidget, UNiagaraSystemWidget::StaticClass, TEXT("UNiagaraSystemWidget"), &Z_Registration_Info_UClass_UNiagaraSystemWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraSystemWidget), 1810043844U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_NiagaraUIRenderer_Source_NiagaraUIRenderer_Public_NiagaraSystemWidget_h_1928242427(TEXT("/Script/NiagaraUIRenderer"),
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_NiagaraUIRenderer_Source_NiagaraUIRenderer_Public_NiagaraSystemWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_NiagaraUIRenderer_Source_NiagaraUIRenderer_Public_NiagaraSystemWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
