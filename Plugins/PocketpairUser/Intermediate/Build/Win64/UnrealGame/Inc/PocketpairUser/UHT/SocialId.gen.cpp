// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PocketpairUser/Public/SocialId.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSocialId() {}
// Cross Module References
	POCKETPAIRUSER_API UScriptStruct* Z_Construct_UScriptStruct_FSocialId();
	UPackage* Z_Construct_UPackage__Script_PocketpairUser();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SocialId;
class UScriptStruct* FSocialId::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SocialId.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SocialId.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSocialId, Z_Construct_UPackage__Script_PocketpairUser(), TEXT("SocialId"));
	}
	return Z_Registration_Info_UScriptStruct_SocialId.OuterSingleton;
}
template<> POCKETPAIRUSER_API UScriptStruct* StaticStruct<FSocialId>()
{
	return FSocialId::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSocialId_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialId_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SocialId.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSocialId_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSocialId>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSocialId_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PocketpairUser,
		nullptr,
		&NewStructOps,
		"SocialId",
		sizeof(FSocialId),
		alignof(FSocialId),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialId_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialId_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSocialId()
	{
		if (!Z_Registration_Info_UScriptStruct_SocialId.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SocialId.InnerSingleton, Z_Construct_UScriptStruct_FSocialId_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SocialId.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_SocialId_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_SocialId_h_Statics::ScriptStructInfo[] = {
		{ FSocialId::StaticStruct, Z_Construct_UScriptStruct_FSocialId_Statics::NewStructOps, TEXT("SocialId"), &Z_Registration_Info_UScriptStruct_SocialId, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSocialId), 3695477237U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_SocialId_h_2170799624(TEXT("/Script/PocketpairUser"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_SocialId_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_SocialId_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
