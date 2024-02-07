// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkyCreatorPlugin_init() {}
	SKYCREATORPLUGIN_API UFunction* Z_Construct_UDelegateFunction_SkyCreatorPlugin_OnLightningStrike__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SkyCreatorPlugin;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SkyCreatorPlugin()
	{
		if (!Z_Registration_Info_UPackage__Script_SkyCreatorPlugin.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_SkyCreatorPlugin_OnLightningStrike__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SkyCreatorPlugin",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x3B28C746,
				0x812C4877,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SkyCreatorPlugin.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SkyCreatorPlugin.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SkyCreatorPlugin(Z_Construct_UPackage__Script_SkyCreatorPlugin, TEXT("/Script/SkyCreatorPlugin"), Z_Registration_Info_UPackage__Script_SkyCreatorPlugin, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x3B28C746, 0x812C4877));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
