// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonGame/Public/ConfirmationDialogAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConfirmationDialogAction() {}
// Cross Module References
	COMMONGAME_API UEnum* Z_Construct_UEnum_CommonGame_ECommonMessagingResult();
	COMMONGAME_API UScriptStruct* Z_Construct_UScriptStruct_FConfirmationDialogAction();
	UPackage* Z_Construct_UPackage__Script_CommonGame();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConfirmationDialogAction;
class UScriptStruct* FConfirmationDialogAction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConfirmationDialogAction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConfirmationDialogAction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConfirmationDialogAction, Z_Construct_UPackage__Script_CommonGame(), TEXT("ConfirmationDialogAction"));
	}
	return Z_Registration_Info_UScriptStruct_ConfirmationDialogAction.OuterSingleton;
}
template<> COMMONGAME_API UScriptStruct* StaticStruct<FConfirmationDialogAction>()
{
	return FConfirmationDialogAction::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConfirmationDialogAction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptionalDisplayText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_OptionalDisplayText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConfirmationDialogAction_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ConfirmationDialogAction.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConfirmationDialogAction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConfirmationDialogAction>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConfirmationDialogAction_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConfirmationDialogAction_Statics::NewProp_Result_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConfirmationDialogAction" },
		{ "ModuleRelativePath", "Public/ConfirmationDialogAction.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FConfirmationDialogAction_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConfirmationDialogAction, Result), Z_Construct_UEnum_CommonGame_ECommonMessagingResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FConfirmationDialogAction_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfirmationDialogAction_Statics::NewProp_Result_MetaData)) }; // 1065910484
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConfirmationDialogAction_Statics::NewProp_OptionalDisplayText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConfirmationDialogAction" },
		{ "ModuleRelativePath", "Public/ConfirmationDialogAction.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FConfirmationDialogAction_Statics::NewProp_OptionalDisplayText = { "OptionalDisplayText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConfirmationDialogAction, OptionalDisplayText), METADATA_PARAMS(Z_Construct_UScriptStruct_FConfirmationDialogAction_Statics::NewProp_OptionalDisplayText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfirmationDialogAction_Statics::NewProp_OptionalDisplayText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConfirmationDialogAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConfirmationDialogAction_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConfirmationDialogAction_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConfirmationDialogAction_Statics::NewProp_OptionalDisplayText,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConfirmationDialogAction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CommonGame,
		nullptr,
		&NewStructOps,
		"ConfirmationDialogAction",
		sizeof(FConfirmationDialogAction),
		alignof(FConfirmationDialogAction),
		Z_Construct_UScriptStruct_FConfirmationDialogAction_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfirmationDialogAction_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConfirmationDialogAction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfirmationDialogAction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConfirmationDialogAction()
	{
		if (!Z_Registration_Info_UScriptStruct_ConfirmationDialogAction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConfirmationDialogAction.InnerSingleton, Z_Construct_UScriptStruct_FConfirmationDialogAction_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConfirmationDialogAction.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_ConfirmationDialogAction_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_ConfirmationDialogAction_h_Statics::ScriptStructInfo[] = {
		{ FConfirmationDialogAction::StaticStruct, Z_Construct_UScriptStruct_FConfirmationDialogAction_Statics::NewStructOps, TEXT("ConfirmationDialogAction"), &Z_Registration_Info_UScriptStruct_ConfirmationDialogAction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConfirmationDialogAction), 3648334222U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_ConfirmationDialogAction_h_3423680346(TEXT("/Script/CommonGame"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_ConfirmationDialogAction_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_ConfirmationDialogAction_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
