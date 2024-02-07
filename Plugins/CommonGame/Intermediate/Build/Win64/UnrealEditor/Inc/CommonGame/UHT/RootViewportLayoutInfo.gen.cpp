// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonGame/Public/RootViewportLayoutInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRootViewportLayoutInfo() {}
// Cross Module References
	COMMONGAME_API UClass* Z_Construct_UClass_UPrimaryGameLayout_NoRegister();
	COMMONGAME_API UScriptStruct* Z_Construct_UScriptStruct_FRootViewportLayoutInfo();
	ENGINE_API UClass* Z_Construct_UClass_ULocalPlayer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CommonGame();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RootViewportLayoutInfo;
class UScriptStruct* FRootViewportLayoutInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RootViewportLayoutInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RootViewportLayoutInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRootViewportLayoutInfo, Z_Construct_UPackage__Script_CommonGame(), TEXT("RootViewportLayoutInfo"));
	}
	return Z_Registration_Info_UScriptStruct_RootViewportLayoutInfo.OuterSingleton;
}
template<> COMMONGAME_API UScriptStruct* StaticStruct<FRootViewportLayoutInfo>()
{
	return FRootViewportLayoutInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRootViewportLayoutInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalPlayer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LocalPlayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootLayout_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RootLayout;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAddedToViewport_MetaData[];
#endif
		static void NewProp_bAddedToViewport_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddedToViewport;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootViewportLayoutInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RootViewportLayoutInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRootViewportLayoutInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRootViewportLayoutInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootViewportLayoutInfo_Statics::NewProp_LocalPlayer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RootViewportLayoutInfo" },
		{ "ModuleRelativePath", "Public/RootViewportLayoutInfo.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRootViewportLayoutInfo_Statics::NewProp_LocalPlayer = { "LocalPlayer", nullptr, (EPropertyFlags)0x0010000000002005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRootViewportLayoutInfo, LocalPlayer), Z_Construct_UClass_ULocalPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRootViewportLayoutInfo_Statics::NewProp_LocalPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootViewportLayoutInfo_Statics::NewProp_LocalPlayer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootViewportLayoutInfo_Statics::NewProp_RootLayout_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RootViewportLayoutInfo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RootViewportLayoutInfo.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRootViewportLayoutInfo_Statics::NewProp_RootLayout = { "RootLayout", nullptr, (EPropertyFlags)0x001200000008200d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRootViewportLayoutInfo, RootLayout), Z_Construct_UClass_UPrimaryGameLayout_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRootViewportLayoutInfo_Statics::NewProp_RootLayout_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootViewportLayoutInfo_Statics::NewProp_RootLayout_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootViewportLayoutInfo_Statics::NewProp_bAddedToViewport_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RootViewportLayoutInfo" },
		{ "ModuleRelativePath", "Public/RootViewportLayoutInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRootViewportLayoutInfo_Statics::NewProp_bAddedToViewport_SetBit(void* Obj)
	{
		((FRootViewportLayoutInfo*)Obj)->bAddedToViewport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRootViewportLayoutInfo_Statics::NewProp_bAddedToViewport = { "bAddedToViewport", nullptr, (EPropertyFlags)0x0010000000002005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRootViewportLayoutInfo), &Z_Construct_UScriptStruct_FRootViewportLayoutInfo_Statics::NewProp_bAddedToViewport_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRootViewportLayoutInfo_Statics::NewProp_bAddedToViewport_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootViewportLayoutInfo_Statics::NewProp_bAddedToViewport_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRootViewportLayoutInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootViewportLayoutInfo_Statics::NewProp_LocalPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootViewportLayoutInfo_Statics::NewProp_RootLayout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootViewportLayoutInfo_Statics::NewProp_bAddedToViewport,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRootViewportLayoutInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CommonGame,
		nullptr,
		&NewStructOps,
		"RootViewportLayoutInfo",
		sizeof(FRootViewportLayoutInfo),
		alignof(FRootViewportLayoutInfo),
		Z_Construct_UScriptStruct_FRootViewportLayoutInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootViewportLayoutInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRootViewportLayoutInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootViewportLayoutInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRootViewportLayoutInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_RootViewportLayoutInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RootViewportLayoutInfo.InnerSingleton, Z_Construct_UScriptStruct_FRootViewportLayoutInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RootViewportLayoutInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_RootViewportLayoutInfo_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_RootViewportLayoutInfo_h_Statics::ScriptStructInfo[] = {
		{ FRootViewportLayoutInfo::StaticStruct, Z_Construct_UScriptStruct_FRootViewportLayoutInfo_Statics::NewStructOps, TEXT("RootViewportLayoutInfo"), &Z_Registration_Info_UScriptStruct_RootViewportLayoutInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRootViewportLayoutInfo), 1512199379U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_RootViewportLayoutInfo_h_3544044274(TEXT("/Script/CommonGame"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_RootViewportLayoutInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_RootViewportLayoutInfo_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
