// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ImGui/Public/ImGuiDPIScaleInfo.h"
#include "Engine/Classes/Curves/CurveFloat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImGuiDPIScaleInfo() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	IMGUI_API UEnum* Z_Construct_UEnum_ImGui_EImGuiDPIScaleMethod();
	IMGUI_API UScriptStruct* Z_Construct_UScriptStruct_FImGuiDPIScaleInfo();
	UPackage* Z_Construct_UPackage__Script_ImGui();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ImGuiDPIScaleInfo;
class UScriptStruct* FImGuiDPIScaleInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ImGuiDPIScaleInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ImGuiDPIScaleInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FImGuiDPIScaleInfo, Z_Construct_UPackage__Script_ImGui(), TEXT("ImGuiDPIScaleInfo"));
	}
	return Z_Registration_Info_UScriptStruct_ImGuiDPIScaleInfo.OuterSingleton;
}
template<> IMGUI_API UScriptStruct* StaticStruct<FImGuiDPIScaleInfo>()
{
	return FImGuiDPIScaleInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FImGuiDPIScaleInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_ScalingMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScalingMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ScalingMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DPICurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DPICurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bScaleWithCurve_MetaData[];
#endif
		static void NewProp_bScaleWithCurve_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bScaleWithCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImGuiDPIScaleInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ImGuiDPIScaleInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FImGuiDPIScaleInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FImGuiDPIScaleInfo>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FImGuiDPIScaleInfo_Statics::NewProp_ScalingMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImGuiDPIScaleInfo_Statics::NewProp_ScalingMethod_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ImGuiDPIScaleInfo" },
		{ "ModuleRelativePath", "Public/ImGuiDPIScaleInfo.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FImGuiDPIScaleInfo_Statics::NewProp_ScalingMethod = { "ScalingMethod", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FImGuiDPIScaleInfo, ScalingMethod), Z_Construct_UEnum_ImGui_EImGuiDPIScaleMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FImGuiDPIScaleInfo_Statics::NewProp_ScalingMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImGuiDPIScaleInfo_Statics::NewProp_ScalingMethod_MetaData)) }; // 2841410405
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImGuiDPIScaleInfo_Statics::NewProp_Scale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ImGuiDPIScaleInfo" },
		{ "ModuleRelativePath", "Public/ImGuiDPIScaleInfo.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FImGuiDPIScaleInfo_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FImGuiDPIScaleInfo, Scale), METADATA_PARAMS(Z_Construct_UScriptStruct_FImGuiDPIScaleInfo_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImGuiDPIScaleInfo_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImGuiDPIScaleInfo_Statics::NewProp_DPICurve_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ImGuiDPIScaleInfo" },
		{ "ModuleRelativePath", "Public/ImGuiDPIScaleInfo.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FImGuiDPIScaleInfo_Statics::NewProp_DPICurve = { "DPICurve", nullptr, (EPropertyFlags)0x0020080000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FImGuiDPIScaleInfo, DPICurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FImGuiDPIScaleInfo_Statics::NewProp_DPICurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImGuiDPIScaleInfo_Statics::NewProp_DPICurve_MetaData)) }; // 1477693291
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImGuiDPIScaleInfo_Statics::NewProp_bScaleWithCurve_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ImGuiDPIScaleInfo" },
		{ "ModuleRelativePath", "Public/ImGuiDPIScaleInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FImGuiDPIScaleInfo_Statics::NewProp_bScaleWithCurve_SetBit(void* Obj)
	{
		((FImGuiDPIScaleInfo*)Obj)->bScaleWithCurve = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FImGuiDPIScaleInfo_Statics::NewProp_bScaleWithCurve = { "bScaleWithCurve", nullptr, (EPropertyFlags)0x0020080000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FImGuiDPIScaleInfo), &Z_Construct_UScriptStruct_FImGuiDPIScaleInfo_Statics::NewProp_bScaleWithCurve_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FImGuiDPIScaleInfo_Statics::NewProp_bScaleWithCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImGuiDPIScaleInfo_Statics::NewProp_bScaleWithCurve_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FImGuiDPIScaleInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImGuiDPIScaleInfo_Statics::NewProp_ScalingMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImGuiDPIScaleInfo_Statics::NewProp_ScalingMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImGuiDPIScaleInfo_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImGuiDPIScaleInfo_Statics::NewProp_DPICurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImGuiDPIScaleInfo_Statics::NewProp_bScaleWithCurve,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FImGuiDPIScaleInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ImGui,
		nullptr,
		&NewStructOps,
		"ImGuiDPIScaleInfo",
		sizeof(FImGuiDPIScaleInfo),
		alignof(FImGuiDPIScaleInfo),
		Z_Construct_UScriptStruct_FImGuiDPIScaleInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImGuiDPIScaleInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FImGuiDPIScaleInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImGuiDPIScaleInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FImGuiDPIScaleInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_ImGuiDPIScaleInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ImGuiDPIScaleInfo.InnerSingleton, Z_Construct_UScriptStruct_FImGuiDPIScaleInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ImGuiDPIScaleInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_ImGui_Source_ImGui_Public_ImGuiDPIScaleInfo_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_ImGui_Source_ImGui_Public_ImGuiDPIScaleInfo_h_Statics::ScriptStructInfo[] = {
		{ FImGuiDPIScaleInfo::StaticStruct, Z_Construct_UScriptStruct_FImGuiDPIScaleInfo_Statics::NewStructOps, TEXT("ImGuiDPIScaleInfo"), &Z_Registration_Info_UScriptStruct_ImGuiDPIScaleInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FImGuiDPIScaleInfo), 3372812194U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_ImGui_Source_ImGui_Public_ImGuiDPIScaleInfo_h_2542310194(TEXT("/Script/ImGui"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_ImGui_Source_ImGui_Public_ImGuiDPIScaleInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_ImGui_Source_ImGui_Public_ImGuiDPIScaleInfo_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
