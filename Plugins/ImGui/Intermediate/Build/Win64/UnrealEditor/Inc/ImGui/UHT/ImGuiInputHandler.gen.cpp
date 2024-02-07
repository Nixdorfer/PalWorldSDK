// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ImGui/Public/ImGuiInputHandler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImGuiInputHandler() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	IMGUI_API UClass* Z_Construct_UClass_UImGuiInputHandler();
	IMGUI_API UClass* Z_Construct_UClass_UImGuiInputHandler_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ImGui();
// End Cross Module References
	void UImGuiInputHandler::StaticRegisterNativesUImGuiInputHandler()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UImGuiInputHandler);
	UClass* Z_Construct_UClass_UImGuiInputHandler_NoRegister()
	{
		return UImGuiInputHandler::StaticClass();
	}
	struct Z_Construct_UClass_UImGuiInputHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UImGuiInputHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ImGui,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImGuiInputHandler_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ImGuiInputHandler.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ImGuiInputHandler.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UImGuiInputHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UImGuiInputHandler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UImGuiInputHandler_Statics::ClassParams = {
		&UImGuiInputHandler::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UImGuiInputHandler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UImGuiInputHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UImGuiInputHandler()
	{
		if (!Z_Registration_Info_UClass_UImGuiInputHandler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UImGuiInputHandler.OuterSingleton, Z_Construct_UClass_UImGuiInputHandler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UImGuiInputHandler.OuterSingleton;
	}
	template<> IMGUI_API UClass* StaticClass<UImGuiInputHandler>()
	{
		return UImGuiInputHandler::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UImGuiInputHandler);
	UImGuiInputHandler::~UImGuiInputHandler() {}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_ImGui_Source_ImGui_Public_ImGuiInputHandler_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_ImGui_Source_ImGui_Public_ImGuiInputHandler_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UImGuiInputHandler, UImGuiInputHandler::StaticClass, TEXT("UImGuiInputHandler"), &Z_Registration_Info_UClass_UImGuiInputHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UImGuiInputHandler), 2742977951U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_ImGui_Source_ImGui_Public_ImGuiInputHandler_h_1371174562(TEXT("/Script/ImGui"),
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_ImGui_Source_ImGui_Public_ImGuiInputHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_ImGui_Source_ImGui_Public_ImGuiInputHandler_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
