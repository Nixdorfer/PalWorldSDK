// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkReverbDescriptor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkReverbDescriptor() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkReverbDescriptor();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkReverbDescriptor;
class UScriptStruct* FAkReverbDescriptor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkReverbDescriptor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkReverbDescriptor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkReverbDescriptor, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkReverbDescriptor"));
	}
	return Z_Registration_Info_UScriptStruct_AkReverbDescriptor.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkReverbDescriptor>()
{
	return FAkReverbDescriptor::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkReverbDescriptor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkReverbDescriptor_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * FAkReverbDescriptor is used to estimate the reverb parameters of a primitive component, by calculating its volume and surface area, and using the 'sabine equation' to estimate the reverb tail.\n * It also estimates the Time to First Reflection and the HFDamping.\n */" },
		{ "ModuleRelativePath", "Classes/AkReverbDescriptor.h" },
		{ "ToolTip", "FAkReverbDescriptor is used to estimate the reverb parameters of a primitive component, by calculating its volume and surface area, and using the 'sabine equation' to estimate the reverb tail.\nIt also estimates the Time to First Reflection and the HFDamping." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkReverbDescriptor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkReverbDescriptor>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkReverbDescriptor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkReverbDescriptor",
		sizeof(FAkReverbDescriptor),
		alignof(FAkReverbDescriptor),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkReverbDescriptor_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkReverbDescriptor_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkReverbDescriptor()
	{
		if (!Z_Registration_Info_UScriptStruct_AkReverbDescriptor.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkReverbDescriptor.InnerSingleton, Z_Construct_UScriptStruct_FAkReverbDescriptor_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkReverbDescriptor.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkReverbDescriptor_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkReverbDescriptor_h_Statics::ScriptStructInfo[] = {
		{ FAkReverbDescriptor::StaticStruct, Z_Construct_UScriptStruct_FAkReverbDescriptor_Statics::NewStructOps, TEXT("AkReverbDescriptor"), &Z_Registration_Info_UScriptStruct_AkReverbDescriptor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkReverbDescriptor), 1144292824U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkReverbDescriptor_h_1616388013(TEXT("/Script/AkAudio"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkReverbDescriptor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkReverbDescriptor_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
