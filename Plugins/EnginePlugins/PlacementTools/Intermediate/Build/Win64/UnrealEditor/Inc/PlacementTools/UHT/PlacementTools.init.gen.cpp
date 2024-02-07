// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlacementTools_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_PlacementTools;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_PlacementTools()
	{
		if (!Z_Registration_Info_UPackage__Script_PlacementTools.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/PlacementTools",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xF3271C01,
				0x24D04855,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_PlacementTools.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_PlacementTools.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_PlacementTools(Z_Construct_UPackage__Script_PlacementTools, TEXT("/Script/PlacementTools"), Z_Registration_Info_UPackage__Script_PlacementTools, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xF3271C01, 0x24D04855));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
