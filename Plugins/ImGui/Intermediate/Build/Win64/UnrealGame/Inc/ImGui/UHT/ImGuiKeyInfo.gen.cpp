// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ImGui/Public/ImGuiKeyInfo.h"
#include "InputCore/Classes/InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImGuiKeyInfo() {}
// Cross Module References
	IMGUI_API UScriptStruct* Z_Construct_UScriptStruct_FImGuiKeyInfo();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ECheckBoxState();
	UPackage* Z_Construct_UPackage__Script_ImGui();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ImGuiKeyInfo;
class UScriptStruct* FImGuiKeyInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ImGuiKeyInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ImGuiKeyInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FImGuiKeyInfo, Z_Construct_UPackage__Script_ImGui(), TEXT("ImGuiKeyInfo"));
	}
	return Z_Registration_Info_UScriptStruct_ImGuiKeyInfo.OuterSingleton;
}
template<> IMGUI_API UScriptStruct* StaticStruct<FImGuiKeyInfo>()
{
	return FImGuiKeyInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Shift_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Shift_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Shift;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Ctrl_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ctrl_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Ctrl;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Alt_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Alt_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Alt;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Cmd_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Cmd_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Cmd;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ImGuiKeyInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FImGuiKeyInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::NewProp_Key_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ImGuiKeyInfo" },
		{ "ModuleRelativePath", "Public/ImGuiKeyInfo.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FImGuiKeyInfo, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::NewProp_Key_MetaData)) }; // 2101135134
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::NewProp_Shift_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::NewProp_Shift_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ImGuiKeyInfo" },
		{ "ModuleRelativePath", "Public/ImGuiKeyInfo.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::NewProp_Shift = { "Shift", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FImGuiKeyInfo, Shift), Z_Construct_UEnum_SlateCore_ECheckBoxState, METADATA_PARAMS(Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::NewProp_Shift_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::NewProp_Shift_MetaData)) }; // 1662204813
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::NewProp_Ctrl_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::NewProp_Ctrl_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ImGuiKeyInfo" },
		{ "ModuleRelativePath", "Public/ImGuiKeyInfo.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::NewProp_Ctrl = { "Ctrl", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FImGuiKeyInfo, Ctrl), Z_Construct_UEnum_SlateCore_ECheckBoxState, METADATA_PARAMS(Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::NewProp_Ctrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::NewProp_Ctrl_MetaData)) }; // 1662204813
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::NewProp_Alt_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::NewProp_Alt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ImGuiKeyInfo" },
		{ "ModuleRelativePath", "Public/ImGuiKeyInfo.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::NewProp_Alt = { "Alt", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FImGuiKeyInfo, Alt), Z_Construct_UEnum_SlateCore_ECheckBoxState, METADATA_PARAMS(Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::NewProp_Alt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::NewProp_Alt_MetaData)) }; // 1662204813
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::NewProp_Cmd_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::NewProp_Cmd_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ImGuiKeyInfo" },
		{ "ModuleRelativePath", "Public/ImGuiKeyInfo.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::NewProp_Cmd = { "Cmd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FImGuiKeyInfo, Cmd), Z_Construct_UEnum_SlateCore_ECheckBoxState, METADATA_PARAMS(Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::NewProp_Cmd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::NewProp_Cmd_MetaData)) }; // 1662204813
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::NewProp_Shift_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::NewProp_Shift,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::NewProp_Ctrl_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::NewProp_Ctrl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::NewProp_Alt_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::NewProp_Alt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::NewProp_Cmd_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::NewProp_Cmd,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ImGui,
		nullptr,
		&NewStructOps,
		"ImGuiKeyInfo",
		sizeof(FImGuiKeyInfo),
		alignof(FImGuiKeyInfo),
		Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FImGuiKeyInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_ImGuiKeyInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ImGuiKeyInfo.InnerSingleton, Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ImGuiKeyInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_ImGui_Source_ImGui_Public_ImGuiKeyInfo_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_ImGui_Source_ImGui_Public_ImGuiKeyInfo_h_Statics::ScriptStructInfo[] = {
		{ FImGuiKeyInfo::StaticStruct, Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::NewStructOps, TEXT("ImGuiKeyInfo"), &Z_Registration_Info_UScriptStruct_ImGuiKeyInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FImGuiKeyInfo), 1521689554U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_ImGui_Source_ImGui_Public_ImGuiKeyInfo_h_3431399697(TEXT("/Script/ImGui"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_ImGui_Source_ImGui_Public_ImGuiKeyInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_ImGui_Source_ImGui_Public_ImGuiKeyInfo_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
