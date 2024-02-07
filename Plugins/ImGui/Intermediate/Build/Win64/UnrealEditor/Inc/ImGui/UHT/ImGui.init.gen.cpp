// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImGui_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ImGui;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ImGui()
	{
		if (!Z_Registration_Info_UPackage__Script_ImGui.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ImGui",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x8ECD110A,
				0xA5F31570,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ImGui.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ImGui.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ImGui(Z_Construct_UPackage__Script_ImGui, TEXT("/Script/ImGui"), Z_Registration_Info_UPackage__Script_ImGui, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x8ECD110A, 0xA5F31570));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
