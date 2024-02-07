// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ImGui/Public/ImGuiCanvasSizeInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImGuiCanvasSizeInfo() {}
// Cross Module References
	IMGUI_API UEnum* Z_Construct_UEnum_ImGui_EImGuiCanvasSizeType();
	IMGUI_API UScriptStruct* Z_Construct_UScriptStruct_FImGuiCanvasSizeInfo();
	UPackage* Z_Construct_UPackage__Script_ImGui();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ImGuiCanvasSizeInfo;
class UScriptStruct* FImGuiCanvasSizeInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ImGuiCanvasSizeInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ImGuiCanvasSizeInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FImGuiCanvasSizeInfo, Z_Construct_UPackage__Script_ImGui(), TEXT("ImGuiCanvasSizeInfo"));
	}
	return Z_Registration_Info_UScriptStruct_ImGuiCanvasSizeInfo.OuterSingleton;
}
template<> IMGUI_API UScriptStruct* StaticStruct<FImGuiCanvasSizeInfo>()
{
	return FImGuiCanvasSizeInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FImGuiCanvasSizeInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_SizeType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SizeType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SizeType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExtendToViewport_MetaData[];
#endif
		static void NewProp_bExtendToViewport_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExtendToViewport;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImGuiCanvasSizeInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ImGuiCanvasSizeInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FImGuiCanvasSizeInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FImGuiCanvasSizeInfo>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FImGuiCanvasSizeInfo_Statics::NewProp_SizeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImGuiCanvasSizeInfo_Statics::NewProp_SizeType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ImGuiCanvasSizeInfo" },
		{ "ModuleRelativePath", "Public/ImGuiCanvasSizeInfo.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FImGuiCanvasSizeInfo_Statics::NewProp_SizeType = { "SizeType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FImGuiCanvasSizeInfo, SizeType), Z_Construct_UEnum_ImGui_EImGuiCanvasSizeType, METADATA_PARAMS(Z_Construct_UScriptStruct_FImGuiCanvasSizeInfo_Statics::NewProp_SizeType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImGuiCanvasSizeInfo_Statics::NewProp_SizeType_MetaData)) }; // 1483776669
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImGuiCanvasSizeInfo_Statics::NewProp_Width_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ImGuiCanvasSizeInfo" },
		{ "ModuleRelativePath", "Public/ImGuiCanvasSizeInfo.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FImGuiCanvasSizeInfo_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FImGuiCanvasSizeInfo, Width), METADATA_PARAMS(Z_Construct_UScriptStruct_FImGuiCanvasSizeInfo_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImGuiCanvasSizeInfo_Statics::NewProp_Width_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImGuiCanvasSizeInfo_Statics::NewProp_Height_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ImGuiCanvasSizeInfo" },
		{ "ModuleRelativePath", "Public/ImGuiCanvasSizeInfo.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FImGuiCanvasSizeInfo_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FImGuiCanvasSizeInfo, Height), METADATA_PARAMS(Z_Construct_UScriptStruct_FImGuiCanvasSizeInfo_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImGuiCanvasSizeInfo_Statics::NewProp_Height_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImGuiCanvasSizeInfo_Statics::NewProp_bExtendToViewport_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ImGuiCanvasSizeInfo" },
		{ "ModuleRelativePath", "Public/ImGuiCanvasSizeInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FImGuiCanvasSizeInfo_Statics::NewProp_bExtendToViewport_SetBit(void* Obj)
	{
		((FImGuiCanvasSizeInfo*)Obj)->bExtendToViewport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FImGuiCanvasSizeInfo_Statics::NewProp_bExtendToViewport = { "bExtendToViewport", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FImGuiCanvasSizeInfo), &Z_Construct_UScriptStruct_FImGuiCanvasSizeInfo_Statics::NewProp_bExtendToViewport_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FImGuiCanvasSizeInfo_Statics::NewProp_bExtendToViewport_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImGuiCanvasSizeInfo_Statics::NewProp_bExtendToViewport_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FImGuiCanvasSizeInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImGuiCanvasSizeInfo_Statics::NewProp_SizeType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImGuiCanvasSizeInfo_Statics::NewProp_SizeType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImGuiCanvasSizeInfo_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImGuiCanvasSizeInfo_Statics::NewProp_Height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImGuiCanvasSizeInfo_Statics::NewProp_bExtendToViewport,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FImGuiCanvasSizeInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ImGui,
		nullptr,
		&NewStructOps,
		"ImGuiCanvasSizeInfo",
		sizeof(FImGuiCanvasSizeInfo),
		alignof(FImGuiCanvasSizeInfo),
		Z_Construct_UScriptStruct_FImGuiCanvasSizeInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImGuiCanvasSizeInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FImGuiCanvasSizeInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImGuiCanvasSizeInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FImGuiCanvasSizeInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_ImGuiCanvasSizeInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ImGuiCanvasSizeInfo.InnerSingleton, Z_Construct_UScriptStruct_FImGuiCanvasSizeInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ImGuiCanvasSizeInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_ImGui_Source_ImGui_Public_ImGuiCanvasSizeInfo_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_ImGui_Source_ImGui_Public_ImGuiCanvasSizeInfo_h_Statics::ScriptStructInfo[] = {
		{ FImGuiCanvasSizeInfo::StaticStruct, Z_Construct_UScriptStruct_FImGuiCanvasSizeInfo_Statics::NewStructOps, TEXT("ImGuiCanvasSizeInfo"), &Z_Registration_Info_UScriptStruct_ImGuiCanvasSizeInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FImGuiCanvasSizeInfo), 3818632808U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_ImGui_Source_ImGui_Public_ImGuiCanvasSizeInfo_h_478478001(TEXT("/Script/ImGui"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_ImGui_Source_ImGui_Public_ImGuiCanvasSizeInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_ImGui_Source_ImGui_Public_ImGuiCanvasSizeInfo_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
