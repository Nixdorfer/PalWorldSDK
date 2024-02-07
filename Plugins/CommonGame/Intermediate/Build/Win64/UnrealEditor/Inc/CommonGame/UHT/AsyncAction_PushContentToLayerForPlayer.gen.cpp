// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonGame/Public/AsyncAction_PushContentToLayerForPlayer.h"
#include "GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsyncAction_PushContentToLayerForPlayer() {}
// Cross Module References
	COMMONGAME_API UClass* Z_Construct_UClass_UAsyncAction_PushContentToLayerForPlayer();
	COMMONGAME_API UClass* Z_Construct_UClass_UAsyncAction_PushContentToLayerForPlayer_NoRegister();
	COMMONGAME_API UFunction* Z_Construct_UDelegateFunction_CommonGame_PushContentToLayerForPlayerAsyncDelegate__DelegateSignature();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidget_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCancellableAsyncAction();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_CommonGame();
// End Cross Module References
	DEFINE_FUNCTION(UAsyncAction_PushContentToLayerForPlayer::execPushContentToLayerForPlayer)
	{
		P_GET_OBJECT(APlayerController,Z_Param_OwningPlayer);
		P_GET_SOFTCLASS(TSoftClassPtr<UCommonActivatableWidget> ,Z_Param_WidgetClass);
		P_GET_STRUCT(FGameplayTag,Z_Param_LayerName);
		P_GET_UBOOL(Z_Param_bSuspendInputUntilComplete);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAsyncAction_PushContentToLayerForPlayer**)Z_Param__Result=UAsyncAction_PushContentToLayerForPlayer::PushContentToLayerForPlayer(Z_Param_OwningPlayer,Z_Param_WidgetClass,Z_Param_LayerName,Z_Param_bSuspendInputUntilComplete);
		P_NATIVE_END;
	}
	void UAsyncAction_PushContentToLayerForPlayer::StaticRegisterNativesUAsyncAction_PushContentToLayerForPlayer()
	{
		UClass* Class = UAsyncAction_PushContentToLayerForPlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PushContentToLayerForPlayer", &UAsyncAction_PushContentToLayerForPlayer::execPushContentToLayerForPlayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAsyncAction_PushContentToLayerForPlayer_PushContentToLayerForPlayer_Statics
	{
		struct AsyncAction_PushContentToLayerForPlayer_eventPushContentToLayerForPlayer_Parms
		{
			APlayerController* OwningPlayer;
			TSoftClassPtr<UCommonActivatableWidget>  WidgetClass;
			FGameplayTag LayerName;
			bool bSuspendInputUntilComplete;
			UAsyncAction_PushContentToLayerForPlayer* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningPlayer;
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_WidgetClass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LayerName;
		static void NewProp_bSuspendInputUntilComplete_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuspendInputUntilComplete;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncAction_PushContentToLayerForPlayer_PushContentToLayerForPlayer_Statics::NewProp_OwningPlayer = { "OwningPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncAction_PushContentToLayerForPlayer_eventPushContentToLayerForPlayer_Parms, OwningPlayer), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_UAsyncAction_PushContentToLayerForPlayer_PushContentToLayerForPlayer_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncAction_PushContentToLayerForPlayer_eventPushContentToLayerForPlayer_Parms, WidgetClass), Z_Construct_UClass_UCommonActivatableWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncAction_PushContentToLayerForPlayer_PushContentToLayerForPlayer_Statics::NewProp_LayerName = { "LayerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncAction_PushContentToLayerForPlayer_eventPushContentToLayerForPlayer_Parms, LayerName), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	void Z_Construct_UFunction_UAsyncAction_PushContentToLayerForPlayer_PushContentToLayerForPlayer_Statics::NewProp_bSuspendInputUntilComplete_SetBit(void* Obj)
	{
		((AsyncAction_PushContentToLayerForPlayer_eventPushContentToLayerForPlayer_Parms*)Obj)->bSuspendInputUntilComplete = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAsyncAction_PushContentToLayerForPlayer_PushContentToLayerForPlayer_Statics::NewProp_bSuspendInputUntilComplete = { "bSuspendInputUntilComplete", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AsyncAction_PushContentToLayerForPlayer_eventPushContentToLayerForPlayer_Parms), &Z_Construct_UFunction_UAsyncAction_PushContentToLayerForPlayer_PushContentToLayerForPlayer_Statics::NewProp_bSuspendInputUntilComplete_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncAction_PushContentToLayerForPlayer_PushContentToLayerForPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncAction_PushContentToLayerForPlayer_eventPushContentToLayerForPlayer_Parms, ReturnValue), Z_Construct_UClass_UAsyncAction_PushContentToLayerForPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncAction_PushContentToLayerForPlayer_PushContentToLayerForPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_PushContentToLayerForPlayer_PushContentToLayerForPlayer_Statics::NewProp_OwningPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_PushContentToLayerForPlayer_PushContentToLayerForPlayer_Statics::NewProp_WidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_PushContentToLayerForPlayer_PushContentToLayerForPlayer_Statics::NewProp_LayerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_PushContentToLayerForPlayer_PushContentToLayerForPlayer_Statics::NewProp_bSuspendInputUntilComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_PushContentToLayerForPlayer_PushContentToLayerForPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncAction_PushContentToLayerForPlayer_PushContentToLayerForPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncAction_PushContentToLayerForPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncAction_PushContentToLayerForPlayer_PushContentToLayerForPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncAction_PushContentToLayerForPlayer, nullptr, "PushContentToLayerForPlayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAsyncAction_PushContentToLayerForPlayer_PushContentToLayerForPlayer_Statics::AsyncAction_PushContentToLayerForPlayer_eventPushContentToLayerForPlayer_Parms), Z_Construct_UFunction_UAsyncAction_PushContentToLayerForPlayer_PushContentToLayerForPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_PushContentToLayerForPlayer_PushContentToLayerForPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsyncAction_PushContentToLayerForPlayer_PushContentToLayerForPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_PushContentToLayerForPlayer_PushContentToLayerForPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsyncAction_PushContentToLayerForPlayer_PushContentToLayerForPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncAction_PushContentToLayerForPlayer_PushContentToLayerForPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAsyncAction_PushContentToLayerForPlayer);
	UClass* Z_Construct_UClass_UAsyncAction_PushContentToLayerForPlayer_NoRegister()
	{
		return UAsyncAction_PushContentToLayerForPlayer::StaticClass();
	}
	struct Z_Construct_UClass_UAsyncAction_PushContentToLayerForPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BeforePush_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_BeforePush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AfterPush_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_AfterPush;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAsyncAction_PushContentToLayerForPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCancellableAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAsyncAction_PushContentToLayerForPlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncAction_PushContentToLayerForPlayer_PushContentToLayerForPlayer, "PushContentToLayerForPlayer" }, // 782437134
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncAction_PushContentToLayerForPlayer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AsyncAction_PushContentToLayerForPlayer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AsyncAction_PushContentToLayerForPlayer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncAction_PushContentToLayerForPlayer_Statics::NewProp_BeforePush_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AsyncAction_PushContentToLayerForPlayer" },
		{ "ModuleRelativePath", "Public/AsyncAction_PushContentToLayerForPlayer.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncAction_PushContentToLayerForPlayer_Statics::NewProp_BeforePush = { "BeforePush", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAsyncAction_PushContentToLayerForPlayer, BeforePush), Z_Construct_UDelegateFunction_CommonGame_PushContentToLayerForPlayerAsyncDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAsyncAction_PushContentToLayerForPlayer_Statics::NewProp_BeforePush_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_PushContentToLayerForPlayer_Statics::NewProp_BeforePush_MetaData)) }; // 3661223925
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncAction_PushContentToLayerForPlayer_Statics::NewProp_AfterPush_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AsyncAction_PushContentToLayerForPlayer" },
		{ "ModuleRelativePath", "Public/AsyncAction_PushContentToLayerForPlayer.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncAction_PushContentToLayerForPlayer_Statics::NewProp_AfterPush = { "AfterPush", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAsyncAction_PushContentToLayerForPlayer, AfterPush), Z_Construct_UDelegateFunction_CommonGame_PushContentToLayerForPlayerAsyncDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAsyncAction_PushContentToLayerForPlayer_Statics::NewProp_AfterPush_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_PushContentToLayerForPlayer_Statics::NewProp_AfterPush_MetaData)) }; // 3661223925
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncAction_PushContentToLayerForPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncAction_PushContentToLayerForPlayer_Statics::NewProp_BeforePush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncAction_PushContentToLayerForPlayer_Statics::NewProp_AfterPush,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAsyncAction_PushContentToLayerForPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncAction_PushContentToLayerForPlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncAction_PushContentToLayerForPlayer_Statics::ClassParams = {
		&UAsyncAction_PushContentToLayerForPlayer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAsyncAction_PushContentToLayerForPlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_PushContentToLayerForPlayer_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAsyncAction_PushContentToLayerForPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_PushContentToLayerForPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAsyncAction_PushContentToLayerForPlayer()
	{
		if (!Z_Registration_Info_UClass_UAsyncAction_PushContentToLayerForPlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncAction_PushContentToLayerForPlayer.OuterSingleton, Z_Construct_UClass_UAsyncAction_PushContentToLayerForPlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAsyncAction_PushContentToLayerForPlayer.OuterSingleton;
	}
	template<> COMMONGAME_API UClass* StaticClass<UAsyncAction_PushContentToLayerForPlayer>()
	{
		return UAsyncAction_PushContentToLayerForPlayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncAction_PushContentToLayerForPlayer);
	UAsyncAction_PushContentToLayerForPlayer::~UAsyncAction_PushContentToLayerForPlayer() {}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_AsyncAction_PushContentToLayerForPlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_AsyncAction_PushContentToLayerForPlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAsyncAction_PushContentToLayerForPlayer, UAsyncAction_PushContentToLayerForPlayer::StaticClass, TEXT("UAsyncAction_PushContentToLayerForPlayer"), &Z_Registration_Info_UClass_UAsyncAction_PushContentToLayerForPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncAction_PushContentToLayerForPlayer), 3460128184U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_AsyncAction_PushContentToLayerForPlayer_h_1512748787(TEXT("/Script/CommonGame"),
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_AsyncAction_PushContentToLayerForPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_AsyncAction_PushContentToLayerForPlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
