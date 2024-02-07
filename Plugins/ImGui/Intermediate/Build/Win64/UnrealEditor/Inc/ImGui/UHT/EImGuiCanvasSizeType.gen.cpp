// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ImGui/Public/EImGuiCanvasSizeType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEImGuiCanvasSizeType() {}
// Cross Module References
	IMGUI_API UEnum* Z_Construct_UEnum_ImGui_EImGuiCanvasSizeType();
	UPackage* Z_Construct_UPackage__Script_ImGui();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EImGuiCanvasSizeType;
	static UEnum* EImGuiCanvasSizeType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EImGuiCanvasSizeType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EImGuiCanvasSizeType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ImGui_EImGuiCanvasSizeType, Z_Construct_UPackage__Script_ImGui(), TEXT("EImGuiCanvasSizeType"));
		}
		return Z_Registration_Info_UEnum_EImGuiCanvasSizeType.OuterSingleton;
	}
	template<> IMGUI_API UEnum* StaticEnum<EImGuiCanvasSizeType>()
	{
		return EImGuiCanvasSizeType_StaticEnum();
	}
	struct Z_Construct_UEnum_ImGui_EImGuiCanvasSizeType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ImGui_EImGuiCanvasSizeType_Statics::Enumerators[] = {
		{ "EImGuiCanvasSizeType::Custom", (int64)EImGuiCanvasSizeType::Custom },
		{ "EImGuiCanvasSizeType::Desktop", (int64)EImGuiCanvasSizeType::Desktop },
		{ "EImGuiCanvasSizeType::Viewport", (int64)EImGuiCanvasSizeType::Viewport },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ImGui_EImGuiCanvasSizeType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Custom.Name", "EImGuiCanvasSizeType::Custom" },
		{ "Desktop.Name", "EImGuiCanvasSizeType::Desktop" },
		{ "ModuleRelativePath", "Public/EImGuiCanvasSizeType.h" },
		{ "Viewport.Name", "EImGuiCanvasSizeType::Viewport" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ImGui_EImGuiCanvasSizeType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ImGui,
		nullptr,
		"EImGuiCanvasSizeType",
		"EImGuiCanvasSizeType",
		Z_Construct_UEnum_ImGui_EImGuiCanvasSizeType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ImGui_EImGuiCanvasSizeType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ImGui_EImGuiCanvasSizeType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ImGui_EImGuiCanvasSizeType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ImGui_EImGuiCanvasSizeType()
	{
		if (!Z_Registration_Info_UEnum_EImGuiCanvasSizeType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EImGuiCanvasSizeType.InnerSingleton, Z_Construct_UEnum_ImGui_EImGuiCanvasSizeType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EImGuiCanvasSizeType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_ImGui_Source_ImGui_Public_EImGuiCanvasSizeType_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_ImGui_Source_ImGui_Public_EImGuiCanvasSizeType_h_Statics::EnumInfo[] = {
		{ EImGuiCanvasSizeType_StaticEnum, TEXT("EImGuiCanvasSizeType"), &Z_Registration_Info_UEnum_EImGuiCanvasSizeType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1483776669U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_ImGui_Source_ImGui_Public_EImGuiCanvasSizeType_h_1430135699(TEXT("/Script/ImGui"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_ImGui_Source_ImGui_Public_EImGuiCanvasSizeType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_ImGui_Source_ImGui_Public_EImGuiCanvasSizeType_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
