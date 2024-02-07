// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PocketpairUser/Public/PocketpairTelemetry.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePocketpairTelemetry() {}
// Cross Module References
	POCKETPAIRUSER_API UScriptStruct* Z_Construct_UScriptStruct_FPocketpairTelemetry();
	UPackage* Z_Construct_UPackage__Script_PocketpairUser();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PocketpairTelemetry;
class UScriptStruct* FPocketpairTelemetry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PocketpairTelemetry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PocketpairTelemetry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPocketpairTelemetry, Z_Construct_UPackage__Script_PocketpairUser(), TEXT("PocketpairTelemetry"));
	}
	return Z_Registration_Info_UScriptStruct_PocketpairTelemetry.OuterSingleton;
}
template<> POCKETPAIRUSER_API UScriptStruct* StaticStruct<FPocketpairTelemetry>()
{
	return FPocketpairTelemetry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPocketpairTelemetry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPocketpairTelemetry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PocketpairTelemetry.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPocketpairTelemetry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPocketpairTelemetry>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPocketpairTelemetry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PocketpairUser,
		nullptr,
		&NewStructOps,
		"PocketpairTelemetry",
		sizeof(FPocketpairTelemetry),
		alignof(FPocketpairTelemetry),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPocketpairTelemetry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPocketpairTelemetry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPocketpairTelemetry()
	{
		if (!Z_Registration_Info_UScriptStruct_PocketpairTelemetry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PocketpairTelemetry.InnerSingleton, Z_Construct_UScriptStruct_FPocketpairTelemetry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PocketpairTelemetry.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_PocketpairTelemetry_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_PocketpairTelemetry_h_Statics::ScriptStructInfo[] = {
		{ FPocketpairTelemetry::StaticStruct, Z_Construct_UScriptStruct_FPocketpairTelemetry_Statics::NewStructOps, TEXT("PocketpairTelemetry"), &Z_Registration_Info_UScriptStruct_PocketpairTelemetry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPocketpairTelemetry), 92188488U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_PocketpairTelemetry_h_3137223978(TEXT("/Script/PocketpairUser"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_PocketpairTelemetry_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_PocketpairTelemetry_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
