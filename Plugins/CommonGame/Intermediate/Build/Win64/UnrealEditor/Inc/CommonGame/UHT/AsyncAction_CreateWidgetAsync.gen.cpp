// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonGame/Public/AsyncAction_CreateWidgetAsync.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsyncAction_CreateWidgetAsync() {}
// Cross Module References
	COMMONGAME_API UClass* Z_Construct_UClass_UAsyncAction_CreateWidgetAsync();
	COMMONGAME_API UClass* Z_Construct_UClass_UAsyncAction_CreateWidgetAsync_NoRegister();
	COMMONGAME_API UFunction* Z_Construct_UDelegateFunction_CommonGame_CreateWidgetAsyncDelegate__DelegateSignature();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCancellableAsyncAction();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CommonGame();
// End Cross Module References
	DEFINE_FUNCTION(UAsyncAction_CreateWidgetAsync::execCreateWidgetAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_SOFTCLASS(TSoftClassPtr<UUserWidget> ,Z_Param_UserWidgetSoftClass);
		P_GET_OBJECT(APlayerController,Z_Param_OwningPlayer);
		P_GET_UBOOL(Z_Param_bSuspendInputUntilComplete);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAsyncAction_CreateWidgetAsync**)Z_Param__Result=UAsyncAction_CreateWidgetAsync::CreateWidgetAsync(Z_Param_WorldContextObject,Z_Param_UserWidgetSoftClass,Z_Param_OwningPlayer,Z_Param_bSuspendInputUntilComplete);
		P_NATIVE_END;
	}
	void UAsyncAction_CreateWidgetAsync::StaticRegisterNativesUAsyncAction_CreateWidgetAsync()
	{
		UClass* Class = UAsyncAction_CreateWidgetAsync::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateWidgetAsync", &UAsyncAction_CreateWidgetAsync::execCreateWidgetAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAsyncAction_CreateWidgetAsync_CreateWidgetAsync_Statics
	{
		struct AsyncAction_CreateWidgetAsync_eventCreateWidgetAsync_Parms
		{
			UObject* WorldContextObject;
			TSoftClassPtr<UUserWidget>  UserWidgetSoftClass;
			APlayerController* OwningPlayer;
			bool bSuspendInputUntilComplete;
			UAsyncAction_CreateWidgetAsync* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_UserWidgetSoftClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningPlayer;
		static void NewProp_bSuspendInputUntilComplete_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuspendInputUntilComplete;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncAction_CreateWidgetAsync_CreateWidgetAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncAction_CreateWidgetAsync_eventCreateWidgetAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_UAsyncAction_CreateWidgetAsync_CreateWidgetAsync_Statics::NewProp_UserWidgetSoftClass = { "UserWidgetSoftClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncAction_CreateWidgetAsync_eventCreateWidgetAsync_Parms, UserWidgetSoftClass), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncAction_CreateWidgetAsync_CreateWidgetAsync_Statics::NewProp_OwningPlayer = { "OwningPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncAction_CreateWidgetAsync_eventCreateWidgetAsync_Parms, OwningPlayer), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAsyncAction_CreateWidgetAsync_CreateWidgetAsync_Statics::NewProp_bSuspendInputUntilComplete_SetBit(void* Obj)
	{
		((AsyncAction_CreateWidgetAsync_eventCreateWidgetAsync_Parms*)Obj)->bSuspendInputUntilComplete = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAsyncAction_CreateWidgetAsync_CreateWidgetAsync_Statics::NewProp_bSuspendInputUntilComplete = { "bSuspendInputUntilComplete", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AsyncAction_CreateWidgetAsync_eventCreateWidgetAsync_Parms), &Z_Construct_UFunction_UAsyncAction_CreateWidgetAsync_CreateWidgetAsync_Statics::NewProp_bSuspendInputUntilComplete_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncAction_CreateWidgetAsync_CreateWidgetAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncAction_CreateWidgetAsync_eventCreateWidgetAsync_Parms, ReturnValue), Z_Construct_UClass_UAsyncAction_CreateWidgetAsync_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncAction_CreateWidgetAsync_CreateWidgetAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_CreateWidgetAsync_CreateWidgetAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_CreateWidgetAsync_CreateWidgetAsync_Statics::NewProp_UserWidgetSoftClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_CreateWidgetAsync_CreateWidgetAsync_Statics::NewProp_OwningPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_CreateWidgetAsync_CreateWidgetAsync_Statics::NewProp_bSuspendInputUntilComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_CreateWidgetAsync_CreateWidgetAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncAction_CreateWidgetAsync_CreateWidgetAsync_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncAction_CreateWidgetAsync.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncAction_CreateWidgetAsync_CreateWidgetAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncAction_CreateWidgetAsync, nullptr, "CreateWidgetAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAsyncAction_CreateWidgetAsync_CreateWidgetAsync_Statics::AsyncAction_CreateWidgetAsync_eventCreateWidgetAsync_Parms), Z_Construct_UFunction_UAsyncAction_CreateWidgetAsync_CreateWidgetAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_CreateWidgetAsync_CreateWidgetAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsyncAction_CreateWidgetAsync_CreateWidgetAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_CreateWidgetAsync_CreateWidgetAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsyncAction_CreateWidgetAsync_CreateWidgetAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncAction_CreateWidgetAsync_CreateWidgetAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAsyncAction_CreateWidgetAsync);
	UClass* Z_Construct_UClass_UAsyncAction_CreateWidgetAsync_NoRegister()
	{
		return UAsyncAction_CreateWidgetAsync::StaticClass();
	}
	struct Z_Construct_UClass_UAsyncAction_CreateWidgetAsync_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnComplete;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAsyncAction_CreateWidgetAsync_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCancellableAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAsyncAction_CreateWidgetAsync_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncAction_CreateWidgetAsync_CreateWidgetAsync, "CreateWidgetAsync" }, // 842921298
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncAction_CreateWidgetAsync_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AsyncAction_CreateWidgetAsync.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AsyncAction_CreateWidgetAsync.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncAction_CreateWidgetAsync_Statics::NewProp_OnComplete_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AsyncAction_CreateWidgetAsync" },
		{ "ModuleRelativePath", "Public/AsyncAction_CreateWidgetAsync.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncAction_CreateWidgetAsync_Statics::NewProp_OnComplete = { "OnComplete", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAsyncAction_CreateWidgetAsync, OnComplete), Z_Construct_UDelegateFunction_CommonGame_CreateWidgetAsyncDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAsyncAction_CreateWidgetAsync_Statics::NewProp_OnComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_CreateWidgetAsync_Statics::NewProp_OnComplete_MetaData)) }; // 3984904479
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncAction_CreateWidgetAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncAction_CreateWidgetAsync_Statics::NewProp_OnComplete,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAsyncAction_CreateWidgetAsync_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncAction_CreateWidgetAsync>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncAction_CreateWidgetAsync_Statics::ClassParams = {
		&UAsyncAction_CreateWidgetAsync::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAsyncAction_CreateWidgetAsync_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_CreateWidgetAsync_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAsyncAction_CreateWidgetAsync_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_CreateWidgetAsync_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAsyncAction_CreateWidgetAsync()
	{
		if (!Z_Registration_Info_UClass_UAsyncAction_CreateWidgetAsync.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncAction_CreateWidgetAsync.OuterSingleton, Z_Construct_UClass_UAsyncAction_CreateWidgetAsync_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAsyncAction_CreateWidgetAsync.OuterSingleton;
	}
	template<> COMMONGAME_API UClass* StaticClass<UAsyncAction_CreateWidgetAsync>()
	{
		return UAsyncAction_CreateWidgetAsync::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncAction_CreateWidgetAsync);
	UAsyncAction_CreateWidgetAsync::~UAsyncAction_CreateWidgetAsync() {}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_AsyncAction_CreateWidgetAsync_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_AsyncAction_CreateWidgetAsync_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAsyncAction_CreateWidgetAsync, UAsyncAction_CreateWidgetAsync::StaticClass, TEXT("UAsyncAction_CreateWidgetAsync"), &Z_Registration_Info_UClass_UAsyncAction_CreateWidgetAsync, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncAction_CreateWidgetAsync), 3641991152U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_AsyncAction_CreateWidgetAsync_h_3127628532(TEXT("/Script/CommonGame"),
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_AsyncAction_CreateWidgetAsync_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_AsyncAction_CreateWidgetAsync_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
