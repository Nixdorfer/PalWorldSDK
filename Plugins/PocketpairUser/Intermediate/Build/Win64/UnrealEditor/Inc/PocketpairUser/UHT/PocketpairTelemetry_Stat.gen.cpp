// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PocketpairUser/Public/PocketpairTelemetry_Stat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePocketpairTelemetry_Stat() {}
// Cross Module References
	POCKETPAIRUSER_API UScriptStruct* Z_Construct_UScriptStruct_FPocketpairTelemetry_Stat();
	UPackage* Z_Construct_UPackage__Script_PocketpairUser();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PocketpairTelemetry_Stat;
class UScriptStruct* FPocketpairTelemetry_Stat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PocketpairTelemetry_Stat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PocketpairTelemetry_Stat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPocketpairTelemetry_Stat, Z_Construct_UPackage__Script_PocketpairUser(), TEXT("PocketpairTelemetry_Stat"));
	}
	return Z_Registration_Info_UScriptStruct_PocketpairTelemetry_Stat.OuterSingleton;
}
template<> POCKETPAIRUSER_API UScriptStruct* StaticStruct<FPocketpairTelemetry_Stat>()
{
	return FPocketpairTelemetry_Stat::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPocketpairTelemetry_Stat_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPocketpairTelemetry_Stat_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PocketpairTelemetry_Stat.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPocketpairTelemetry_Stat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPocketpairTelemetry_Stat>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPocketpairTelemetry_Stat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PocketpairUser,
		nullptr,
		&NewStructOps,
		"PocketpairTelemetry_Stat",
		sizeof(FPocketpairTelemetry_Stat),
		alignof(FPocketpairTelemetry_Stat),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPocketpairTelemetry_Stat_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPocketpairTelemetry_Stat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPocketpairTelemetry_Stat()
	{
		if (!Z_Registration_Info_UScriptStruct_PocketpairTelemetry_Stat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PocketpairTelemetry_Stat.InnerSingleton, Z_Construct_UScriptStruct_FPocketpairTelemetry_Stat_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PocketpairTelemetry_Stat.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_PocketpairTelemetry_Stat_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_PocketpairTelemetry_Stat_h_Statics::ScriptStructInfo[] = {
		{ FPocketpairTelemetry_Stat::StaticStruct, Z_Construct_UScriptStruct_FPocketpairTelemetry_Stat_Statics::NewStructOps, TEXT("PocketpairTelemetry_Stat"), &Z_Registration_Info_UScriptStruct_PocketpairTelemetry_Stat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPocketpairTelemetry_Stat), 1368637900U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_PocketpairTelemetry_Stat_h_924996371(TEXT("/Script/PocketpairUser"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_PocketpairTelemetry_Stat_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_PocketpairTelemetry_Stat_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
