// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ImGui/Public/EImGuiDPIScaleMethod.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEImGuiDPIScaleMethod() {}
// Cross Module References
	IMGUI_API UEnum* Z_Construct_UEnum_ImGui_EImGuiDPIScaleMethod();
	UPackage* Z_Construct_UPackage__Script_ImGui();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EImGuiDPIScaleMethod;
	static UEnum* EImGuiDPIScaleMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EImGuiDPIScaleMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EImGuiDPIScaleMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ImGui_EImGuiDPIScaleMethod, Z_Construct_UPackage__Script_ImGui(), TEXT("EImGuiDPIScaleMethod"));
		}
		return Z_Registration_Info_UEnum_EImGuiDPIScaleMethod.OuterSingleton;
	}
	template<> IMGUI_API UEnum* StaticEnum<EImGuiDPIScaleMethod>()
	{
		return EImGuiDPIScaleMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_ImGui_EImGuiDPIScaleMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ImGui_EImGuiDPIScaleMethod_Statics::Enumerators[] = {
		{ "EImGuiDPIScaleMethod::ImGui", (int64)EImGuiDPIScaleMethod::ImGui },
		{ "EImGuiDPIScaleMethod::Slate", (int64)EImGuiDPIScaleMethod::Slate },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ImGui_EImGuiDPIScaleMethod_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ImGui.Name", "EImGuiDPIScaleMethod::ImGui" },
		{ "ModuleRelativePath", "Public/EImGuiDPIScaleMethod.h" },
		{ "Slate.Name", "EImGuiDPIScaleMethod::Slate" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ImGui_EImGuiDPIScaleMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ImGui,
		nullptr,
		"EImGuiDPIScaleMethod",
		"EImGuiDPIScaleMethod",
		Z_Construct_UEnum_ImGui_EImGuiDPIScaleMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ImGui_EImGuiDPIScaleMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ImGui_EImGuiDPIScaleMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ImGui_EImGuiDPIScaleMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ImGui_EImGuiDPIScaleMethod()
	{
		if (!Z_Registration_Info_UEnum_EImGuiDPIScaleMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EImGuiDPIScaleMethod.InnerSingleton, Z_Construct_UEnum_ImGui_EImGuiDPIScaleMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EImGuiDPIScaleMethod.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_ImGui_Source_ImGui_Public_EImGuiDPIScaleMethod_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_ImGui_Source_ImGui_Public_EImGuiDPIScaleMethod_h_Statics::EnumInfo[] = {
		{ EImGuiDPIScaleMethod_StaticEnum, TEXT("EImGuiDPIScaleMethod"), &Z_Registration_Info_UEnum_EImGuiDPIScaleMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2841410405U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_ImGui_Source_ImGui_Public_EImGuiDPIScaleMethod_h_1465872131(TEXT("/Script/ImGui"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_ImGui_Source_ImGui_Public_EImGuiDPIScaleMethod_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_ImGui_Source_ImGui_Public_EImGuiDPIScaleMethod_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
