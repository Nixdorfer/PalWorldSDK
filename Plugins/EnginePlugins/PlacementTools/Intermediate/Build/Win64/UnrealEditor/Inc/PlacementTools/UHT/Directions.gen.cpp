// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlacementTools/Public/Directions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDirections() {}
// Cross Module References
	PLACEMENTTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FDirections();
	UPackage* Z_Construct_UPackage__Script_PlacementTools();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Directions;
class UScriptStruct* FDirections::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Directions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Directions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDirections, Z_Construct_UPackage__Script_PlacementTools(), TEXT("Directions"));
	}
	return Z_Registration_Info_UScriptStruct_Directions.OuterSingleton;
}
template<> PLACEMENTTOOLS_API UScriptStruct* StaticStruct<FDirections>()
{
	return FDirections::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDirections_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_xDown_MetaData[];
#endif
		static void NewProp_xDown_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_xDown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_xUp_MetaData[];
#endif
		static void NewProp_xUp_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_xUp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_yDown_MetaData[];
#endif
		static void NewProp_yDown_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_yDown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_yUp_MetaData[];
#endif
		static void NewProp_yUp_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_yUp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_zDown_MetaData[];
#endif
		static void NewProp_zDown_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_zDown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_zUp_MetaData[];
#endif
		static void NewProp_zUp_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_zUp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirections_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Directions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDirections_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDirections>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirections_Statics::NewProp_xDown_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Directions" },
		{ "ModuleRelativePath", "Public/Directions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDirections_Statics::NewProp_xDown_SetBit(void* Obj)
	{
		((FDirections*)Obj)->xDown = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDirections_Statics::NewProp_xDown = { "xDown", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDirections), &Z_Construct_UScriptStruct_FDirections_Statics::NewProp_xDown_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDirections_Statics::NewProp_xDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirections_Statics::NewProp_xDown_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirections_Statics::NewProp_xUp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Directions" },
		{ "ModuleRelativePath", "Public/Directions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDirections_Statics::NewProp_xUp_SetBit(void* Obj)
	{
		((FDirections*)Obj)->xUp = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDirections_Statics::NewProp_xUp = { "xUp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDirections), &Z_Construct_UScriptStruct_FDirections_Statics::NewProp_xUp_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDirections_Statics::NewProp_xUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirections_Statics::NewProp_xUp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirections_Statics::NewProp_yDown_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Directions" },
		{ "ModuleRelativePath", "Public/Directions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDirections_Statics::NewProp_yDown_SetBit(void* Obj)
	{
		((FDirections*)Obj)->yDown = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDirections_Statics::NewProp_yDown = { "yDown", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDirections), &Z_Construct_UScriptStruct_FDirections_Statics::NewProp_yDown_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDirections_Statics::NewProp_yDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirections_Statics::NewProp_yDown_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirections_Statics::NewProp_yUp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Directions" },
		{ "ModuleRelativePath", "Public/Directions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDirections_Statics::NewProp_yUp_SetBit(void* Obj)
	{
		((FDirections*)Obj)->yUp = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDirections_Statics::NewProp_yUp = { "yUp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDirections), &Z_Construct_UScriptStruct_FDirections_Statics::NewProp_yUp_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDirections_Statics::NewProp_yUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirections_Statics::NewProp_yUp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirections_Statics::NewProp_zDown_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Directions" },
		{ "ModuleRelativePath", "Public/Directions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDirections_Statics::NewProp_zDown_SetBit(void* Obj)
	{
		((FDirections*)Obj)->zDown = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDirections_Statics::NewProp_zDown = { "zDown", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDirections), &Z_Construct_UScriptStruct_FDirections_Statics::NewProp_zDown_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDirections_Statics::NewProp_zDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirections_Statics::NewProp_zDown_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirections_Statics::NewProp_zUp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Directions" },
		{ "ModuleRelativePath", "Public/Directions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDirections_Statics::NewProp_zUp_SetBit(void* Obj)
	{
		((FDirections*)Obj)->zUp = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDirections_Statics::NewProp_zUp = { "zUp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDirections), &Z_Construct_UScriptStruct_FDirections_Statics::NewProp_zUp_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDirections_Statics::NewProp_zUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirections_Statics::NewProp_zUp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDirections_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirections_Statics::NewProp_xDown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirections_Statics::NewProp_xUp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirections_Statics::NewProp_yDown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirections_Statics::NewProp_yUp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirections_Statics::NewProp_zDown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirections_Statics::NewProp_zUp,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDirections_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlacementTools,
		nullptr,
		&NewStructOps,
		"Directions",
		sizeof(FDirections),
		alignof(FDirections),
		Z_Construct_UScriptStruct_FDirections_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirections_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDirections_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirections_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDirections()
	{
		if (!Z_Registration_Info_UScriptStruct_Directions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Directions.InnerSingleton, Z_Construct_UScriptStruct_FDirections_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Directions.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_PlacementTools_Source_PlacementTools_Public_Directions_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_PlacementTools_Source_PlacementTools_Public_Directions_h_Statics::ScriptStructInfo[] = {
		{ FDirections::StaticStruct, Z_Construct_UScriptStruct_FDirections_Statics::NewStructOps, TEXT("Directions"), &Z_Registration_Info_UScriptStruct_Directions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDirections), 667030282U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_PlacementTools_Source_PlacementTools_Public_Directions_h_4274694465(TEXT("/Script/PlacementTools"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_PlacementTools_Source_PlacementTools_Public_Directions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_EnginePlugins_PlacementTools_Source_PlacementTools_Public_Directions_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
