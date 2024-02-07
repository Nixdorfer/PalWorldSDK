// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonGame/Public/AsyncAction_ShowConfirmation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsyncAction_ShowConfirmation() {}
// Cross Module References
	COMMONGAME_API UClass* Z_Construct_UClass_UAsyncAction_ShowConfirmation();
	COMMONGAME_API UClass* Z_Construct_UClass_UAsyncAction_ShowConfirmation_NoRegister();
	COMMONGAME_API UClass* Z_Construct_UClass_UCommonGameDialogDescriptor_NoRegister();
	COMMONGAME_API UFunction* Z_Construct_UDelegateFunction_CommonGame_CommonMessagingResultMCDelegate__DelegateSignature();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	ENGINE_API UClass* Z_Construct_UClass_ULocalPlayer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CommonGame();
// End Cross Module References
	DEFINE_FUNCTION(UAsyncAction_ShowConfirmation::execShowConfirmationCustom)
	{
		P_GET_OBJECT(UObject,Z_Param_InWorldContextObject);
		P_GET_OBJECT(UCommonGameDialogDescriptor,Z_Param_NewDescriptor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAsyncAction_ShowConfirmation**)Z_Param__Result=UAsyncAction_ShowConfirmation::ShowConfirmationCustom(Z_Param_InWorldContextObject,Z_Param_NewDescriptor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAsyncAction_ShowConfirmation::execShowConfirmationOkCancel)
	{
		P_GET_OBJECT(UObject,Z_Param_InWorldContextObject);
		P_GET_PROPERTY(FTextProperty,Z_Param_Title);
		P_GET_PROPERTY(FTextProperty,Z_Param_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAsyncAction_ShowConfirmation**)Z_Param__Result=UAsyncAction_ShowConfirmation::ShowConfirmationOkCancel(Z_Param_InWorldContextObject,Z_Param_Title,Z_Param_Message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAsyncAction_ShowConfirmation::execShowConfirmationYesNo)
	{
		P_GET_OBJECT(UObject,Z_Param_InWorldContextObject);
		P_GET_PROPERTY(FTextProperty,Z_Param_Title);
		P_GET_PROPERTY(FTextProperty,Z_Param_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAsyncAction_ShowConfirmation**)Z_Param__Result=UAsyncAction_ShowConfirmation::ShowConfirmationYesNo(Z_Param_InWorldContextObject,Z_Param_Title,Z_Param_Message);
		P_NATIVE_END;
	}
	void UAsyncAction_ShowConfirmation::StaticRegisterNativesUAsyncAction_ShowConfirmation()
	{
		UClass* Class = UAsyncAction_ShowConfirmation::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ShowConfirmationCustom", &UAsyncAction_ShowConfirmation::execShowConfirmationCustom },
			{ "ShowConfirmationOkCancel", &UAsyncAction_ShowConfirmation::execShowConfirmationOkCancel },
			{ "ShowConfirmationYesNo", &UAsyncAction_ShowConfirmation::execShowConfirmationYesNo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAsyncAction_ShowConfirmation_ShowConfirmationCustom_Statics
	{
		struct AsyncAction_ShowConfirmation_eventShowConfirmationCustom_Parms
		{
			UObject* InWorldContextObject;
			UCommonGameDialogDescriptor* NewDescriptor;
			UAsyncAction_ShowConfirmation* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InWorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewDescriptor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncAction_ShowConfirmation_ShowConfirmationCustom_Statics::NewProp_InWorldContextObject = { "InWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncAction_ShowConfirmation_eventShowConfirmationCustom_Parms, InWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncAction_ShowConfirmation_ShowConfirmationCustom_Statics::NewProp_NewDescriptor = { "NewDescriptor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncAction_ShowConfirmation_eventShowConfirmationCustom_Parms, NewDescriptor), Z_Construct_UClass_UCommonGameDialogDescriptor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncAction_ShowConfirmation_ShowConfirmationCustom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncAction_ShowConfirmation_eventShowConfirmationCustom_Parms, ReturnValue), Z_Construct_UClass_UAsyncAction_ShowConfirmation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncAction_ShowConfirmation_ShowConfirmationCustom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_ShowConfirmation_ShowConfirmationCustom_Statics::NewProp_InWorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_ShowConfirmation_ShowConfirmationCustom_Statics::NewProp_NewDescriptor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_ShowConfirmation_ShowConfirmationCustom_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncAction_ShowConfirmation_ShowConfirmationCustom_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncAction_ShowConfirmation.h" },
		{ "WorldContext", "InWorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncAction_ShowConfirmation_ShowConfirmationCustom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncAction_ShowConfirmation, nullptr, "ShowConfirmationCustom", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAsyncAction_ShowConfirmation_ShowConfirmationCustom_Statics::AsyncAction_ShowConfirmation_eventShowConfirmationCustom_Parms), Z_Construct_UFunction_UAsyncAction_ShowConfirmation_ShowConfirmationCustom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_ShowConfirmation_ShowConfirmationCustom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsyncAction_ShowConfirmation_ShowConfirmationCustom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_ShowConfirmation_ShowConfirmationCustom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsyncAction_ShowConfirmation_ShowConfirmationCustom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncAction_ShowConfirmation_ShowConfirmationCustom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAsyncAction_ShowConfirmation_ShowConfirmationOkCancel_Statics
	{
		struct AsyncAction_ShowConfirmation_eventShowConfirmationOkCancel_Parms
		{
			UObject* InWorldContextObject;
			FText Title;
			FText Message;
			UAsyncAction_ShowConfirmation* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InWorldContextObject;
		static const UECodeGen_Private::FTextPropertyParams NewProp_Title;
		static const UECodeGen_Private::FTextPropertyParams NewProp_Message;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncAction_ShowConfirmation_ShowConfirmationOkCancel_Statics::NewProp_InWorldContextObject = { "InWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncAction_ShowConfirmation_eventShowConfirmationOkCancel_Parms, InWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UAsyncAction_ShowConfirmation_ShowConfirmationOkCancel_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncAction_ShowConfirmation_eventShowConfirmationOkCancel_Parms, Title), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UAsyncAction_ShowConfirmation_ShowConfirmationOkCancel_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncAction_ShowConfirmation_eventShowConfirmationOkCancel_Parms, Message), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncAction_ShowConfirmation_ShowConfirmationOkCancel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncAction_ShowConfirmation_eventShowConfirmationOkCancel_Parms, ReturnValue), Z_Construct_UClass_UAsyncAction_ShowConfirmation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncAction_ShowConfirmation_ShowConfirmationOkCancel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_ShowConfirmation_ShowConfirmationOkCancel_Statics::NewProp_InWorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_ShowConfirmation_ShowConfirmationOkCancel_Statics::NewProp_Title,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_ShowConfirmation_ShowConfirmationOkCancel_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_ShowConfirmation_ShowConfirmationOkCancel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncAction_ShowConfirmation_ShowConfirmationOkCancel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncAction_ShowConfirmation.h" },
		{ "WorldContext", "InWorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncAction_ShowConfirmation_ShowConfirmationOkCancel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncAction_ShowConfirmation, nullptr, "ShowConfirmationOkCancel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAsyncAction_ShowConfirmation_ShowConfirmationOkCancel_Statics::AsyncAction_ShowConfirmation_eventShowConfirmationOkCancel_Parms), Z_Construct_UFunction_UAsyncAction_ShowConfirmation_ShowConfirmationOkCancel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_ShowConfirmation_ShowConfirmationOkCancel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsyncAction_ShowConfirmation_ShowConfirmationOkCancel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_ShowConfirmation_ShowConfirmationOkCancel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsyncAction_ShowConfirmation_ShowConfirmationOkCancel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncAction_ShowConfirmation_ShowConfirmationOkCancel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAsyncAction_ShowConfirmation_ShowConfirmationYesNo_Statics
	{
		struct AsyncAction_ShowConfirmation_eventShowConfirmationYesNo_Parms
		{
			UObject* InWorldContextObject;
			FText Title;
			FText Message;
			UAsyncAction_ShowConfirmation* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InWorldContextObject;
		static const UECodeGen_Private::FTextPropertyParams NewProp_Title;
		static const UECodeGen_Private::FTextPropertyParams NewProp_Message;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncAction_ShowConfirmation_ShowConfirmationYesNo_Statics::NewProp_InWorldContextObject = { "InWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncAction_ShowConfirmation_eventShowConfirmationYesNo_Parms, InWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UAsyncAction_ShowConfirmation_ShowConfirmationYesNo_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncAction_ShowConfirmation_eventShowConfirmationYesNo_Parms, Title), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UAsyncAction_ShowConfirmation_ShowConfirmationYesNo_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncAction_ShowConfirmation_eventShowConfirmationYesNo_Parms, Message), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncAction_ShowConfirmation_ShowConfirmationYesNo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncAction_ShowConfirmation_eventShowConfirmationYesNo_Parms, ReturnValue), Z_Construct_UClass_UAsyncAction_ShowConfirmation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncAction_ShowConfirmation_ShowConfirmationYesNo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_ShowConfirmation_ShowConfirmationYesNo_Statics::NewProp_InWorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_ShowConfirmation_ShowConfirmationYesNo_Statics::NewProp_Title,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_ShowConfirmation_ShowConfirmationYesNo_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_ShowConfirmation_ShowConfirmationYesNo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncAction_ShowConfirmation_ShowConfirmationYesNo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncAction_ShowConfirmation.h" },
		{ "WorldContext", "InWorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncAction_ShowConfirmation_ShowConfirmationYesNo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncAction_ShowConfirmation, nullptr, "ShowConfirmationYesNo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAsyncAction_ShowConfirmation_ShowConfirmationYesNo_Statics::AsyncAction_ShowConfirmation_eventShowConfirmationYesNo_Parms), Z_Construct_UFunction_UAsyncAction_ShowConfirmation_ShowConfirmationYesNo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_ShowConfirmation_ShowConfirmationYesNo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsyncAction_ShowConfirmation_ShowConfirmationYesNo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_ShowConfirmation_ShowConfirmationYesNo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsyncAction_ShowConfirmation_ShowConfirmationYesNo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncAction_ShowConfirmation_ShowConfirmationYesNo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAsyncAction_ShowConfirmation);
	UClass* Z_Construct_UClass_UAsyncAction_ShowConfirmation_NoRegister()
	{
		return UAsyncAction_ShowConfirmation::StaticClass();
	}
	struct Z_Construct_UClass_UAsyncAction_ShowConfirmation_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnResult_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetLocalPlayer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetLocalPlayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Descriptor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Descriptor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAsyncAction_ShowConfirmation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAsyncAction_ShowConfirmation_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncAction_ShowConfirmation_ShowConfirmationCustom, "ShowConfirmationCustom" }, // 1245515350
		{ &Z_Construct_UFunction_UAsyncAction_ShowConfirmation_ShowConfirmationOkCancel, "ShowConfirmationOkCancel" }, // 895233557
		{ &Z_Construct_UFunction_UAsyncAction_ShowConfirmation_ShowConfirmationYesNo, "ShowConfirmationYesNo" }, // 978771048
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncAction_ShowConfirmation_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AsyncAction_ShowConfirmation.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AsyncAction_ShowConfirmation.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncAction_ShowConfirmation_Statics::NewProp_OnResult_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AsyncAction_ShowConfirmation" },
		{ "ModuleRelativePath", "Public/AsyncAction_ShowConfirmation.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncAction_ShowConfirmation_Statics::NewProp_OnResult = { "OnResult", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAsyncAction_ShowConfirmation, OnResult), Z_Construct_UDelegateFunction_CommonGame_CommonMessagingResultMCDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAsyncAction_ShowConfirmation_Statics::NewProp_OnResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_ShowConfirmation_Statics::NewProp_OnResult_MetaData)) }; // 2240095816
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncAction_ShowConfirmation_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AsyncAction_ShowConfirmation" },
		{ "ModuleRelativePath", "Public/AsyncAction_ShowConfirmation.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAsyncAction_ShowConfirmation_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0040000000002005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAsyncAction_ShowConfirmation, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAsyncAction_ShowConfirmation_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_ShowConfirmation_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncAction_ShowConfirmation_Statics::NewProp_TargetLocalPlayer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AsyncAction_ShowConfirmation" },
		{ "ModuleRelativePath", "Public/AsyncAction_ShowConfirmation.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAsyncAction_ShowConfirmation_Statics::NewProp_TargetLocalPlayer = { "TargetLocalPlayer", nullptr, (EPropertyFlags)0x0040000000002005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAsyncAction_ShowConfirmation, TargetLocalPlayer), Z_Construct_UClass_ULocalPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAsyncAction_ShowConfirmation_Statics::NewProp_TargetLocalPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_ShowConfirmation_Statics::NewProp_TargetLocalPlayer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncAction_ShowConfirmation_Statics::NewProp_Descriptor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AsyncAction_ShowConfirmation" },
		{ "ModuleRelativePath", "Public/AsyncAction_ShowConfirmation.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAsyncAction_ShowConfirmation_Statics::NewProp_Descriptor = { "Descriptor", nullptr, (EPropertyFlags)0x0040000000002005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAsyncAction_ShowConfirmation, Descriptor), Z_Construct_UClass_UCommonGameDialogDescriptor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAsyncAction_ShowConfirmation_Statics::NewProp_Descriptor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_ShowConfirmation_Statics::NewProp_Descriptor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncAction_ShowConfirmation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncAction_ShowConfirmation_Statics::NewProp_OnResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncAction_ShowConfirmation_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncAction_ShowConfirmation_Statics::NewProp_TargetLocalPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncAction_ShowConfirmation_Statics::NewProp_Descriptor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAsyncAction_ShowConfirmation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncAction_ShowConfirmation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncAction_ShowConfirmation_Statics::ClassParams = {
		&UAsyncAction_ShowConfirmation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAsyncAction_ShowConfirmation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_ShowConfirmation_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAsyncAction_ShowConfirmation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_ShowConfirmation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAsyncAction_ShowConfirmation()
	{
		if (!Z_Registration_Info_UClass_UAsyncAction_ShowConfirmation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncAction_ShowConfirmation.OuterSingleton, Z_Construct_UClass_UAsyncAction_ShowConfirmation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAsyncAction_ShowConfirmation.OuterSingleton;
	}
	template<> COMMONGAME_API UClass* StaticClass<UAsyncAction_ShowConfirmation>()
	{
		return UAsyncAction_ShowConfirmation::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncAction_ShowConfirmation);
	UAsyncAction_ShowConfirmation::~UAsyncAction_ShowConfirmation() {}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_AsyncAction_ShowConfirmation_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_AsyncAction_ShowConfirmation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAsyncAction_ShowConfirmation, UAsyncAction_ShowConfirmation::StaticClass, TEXT("UAsyncAction_ShowConfirmation"), &Z_Registration_Info_UClass_UAsyncAction_ShowConfirmation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncAction_ShowConfirmation), 394455185U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_AsyncAction_ShowConfirmation_h_106051014(TEXT("/Script/CommonGame"),
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_AsyncAction_ShowConfirmation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_AsyncAction_ShowConfirmation_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
