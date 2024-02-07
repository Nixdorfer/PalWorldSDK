// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkInitBank.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkInitBank() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAssetBase();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAssetDataWithMedia();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkInitBank();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkInitBank_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkInitBankAssetData();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkInitBankAssetData_NoRegister();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkPluginInfo();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkPluginInfo;
class UScriptStruct* FAkPluginInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkPluginInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkPluginInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkPluginInfo, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkPluginInfo"));
	}
	return Z_Registration_Info_UScriptStruct_AkPluginInfo.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkPluginInfo>()
{
	return FAkPluginInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkPluginInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PluginID_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_PluginID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DLL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DLL;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkPluginInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/AkInitBank.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkPluginInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkPluginInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkPluginInfo_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "AkInitBank" },
		{ "ModuleRelativePath", "Classes/AkInitBank.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAkPluginInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkPluginInfo, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkPluginInfo_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkPluginInfo_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkPluginInfo_Statics::NewProp_PluginID_MetaData[] = {
		{ "Category", "AkInitBank" },
		{ "ModuleRelativePath", "Classes/AkInitBank.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkPluginInfo_Statics::NewProp_PluginID = { "PluginID", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkPluginInfo, PluginID), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkPluginInfo_Statics::NewProp_PluginID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkPluginInfo_Statics::NewProp_PluginID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkPluginInfo_Statics::NewProp_DLL_MetaData[] = {
		{ "Category", "AkInitBank" },
		{ "ModuleRelativePath", "Classes/AkInitBank.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAkPluginInfo_Statics::NewProp_DLL = { "DLL", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkPluginInfo, DLL), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkPluginInfo_Statics::NewProp_DLL_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkPluginInfo_Statics::NewProp_DLL_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkPluginInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkPluginInfo_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkPluginInfo_Statics::NewProp_PluginID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkPluginInfo_Statics::NewProp_DLL,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkPluginInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkPluginInfo",
		sizeof(FAkPluginInfo),
		alignof(FAkPluginInfo),
		Z_Construct_UScriptStruct_FAkPluginInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkPluginInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkPluginInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkPluginInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkPluginInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_AkPluginInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkPluginInfo.InnerSingleton, Z_Construct_UScriptStruct_FAkPluginInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkPluginInfo.InnerSingleton;
	}
	void UAkInitBankAssetData::StaticRegisterNativesUAkInitBankAssetData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkInitBankAssetData);
	UClass* Z_Construct_UClass_UAkInitBankAssetData_NoRegister()
	{
		return UAkInitBankAssetData::StaticClass();
	}
	struct Z_Construct_UClass_UAkInitBankAssetData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PluginInfos_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PluginInfos_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PluginInfos;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkInitBankAssetData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkAssetDataWithMedia,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkInitBankAssetData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AkInitBank.h" },
		{ "ModuleRelativePath", "Classes/AkInitBank.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkInitBankAssetData_Statics::NewProp_PluginInfos_Inner = { "PluginInfos", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAkPluginInfo, METADATA_PARAMS(nullptr, 0) }; // 3966609535
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkInitBankAssetData_Statics::NewProp_PluginInfos_MetaData[] = {
		{ "Category", "AkInitBank" },
		{ "ModuleRelativePath", "Classes/AkInitBank.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAkInitBankAssetData_Statics::NewProp_PluginInfos = { "PluginInfos", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkInitBankAssetData, PluginInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAkInitBankAssetData_Statics::NewProp_PluginInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkInitBankAssetData_Statics::NewProp_PluginInfos_MetaData)) }; // 3966609535
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkInitBankAssetData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkInitBankAssetData_Statics::NewProp_PluginInfos_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkInitBankAssetData_Statics::NewProp_PluginInfos,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkInitBankAssetData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkInitBankAssetData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkInitBankAssetData_Statics::ClassParams = {
		&UAkInitBankAssetData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAkInitBankAssetData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkInitBankAssetData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkInitBankAssetData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkInitBankAssetData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkInitBankAssetData()
	{
		if (!Z_Registration_Info_UClass_UAkInitBankAssetData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkInitBankAssetData.OuterSingleton, Z_Construct_UClass_UAkInitBankAssetData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkInitBankAssetData.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkInitBankAssetData>()
	{
		return UAkInitBankAssetData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkInitBankAssetData);
	UAkInitBankAssetData::~UAkInitBankAssetData() {}
	void UAkInitBank::StaticRegisterNativesUAkInitBank()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkInitBank);
	UClass* Z_Construct_UClass_UAkInitBank_NoRegister()
	{
		return UAkInitBank::StaticClass();
	}
	struct Z_Construct_UClass_UAkInitBank_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AvailableAudioCultures_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvailableAudioCultures_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AvailableAudioCultures;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultLanguage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultLanguage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkInitBank_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkAssetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkInitBank_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AkInitBank.h" },
		{ "ModuleRelativePath", "Classes/AkInitBank.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAkInitBank_Statics::NewProp_AvailableAudioCultures_Inner = { "AvailableAudioCultures", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkInitBank_Statics::NewProp_AvailableAudioCultures_MetaData[] = {
		{ "Category", "AkInitBank" },
		{ "ModuleRelativePath", "Classes/AkInitBank.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAkInitBank_Statics::NewProp_AvailableAudioCultures = { "AvailableAudioCultures", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkInitBank, AvailableAudioCultures), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAkInitBank_Statics::NewProp_AvailableAudioCultures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkInitBank_Statics::NewProp_AvailableAudioCultures_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkInitBank_Statics::NewProp_DefaultLanguage_MetaData[] = {
		{ "Category", "AkInitBank" },
		{ "ModuleRelativePath", "Classes/AkInitBank.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAkInitBank_Statics::NewProp_DefaultLanguage = { "DefaultLanguage", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkInitBank, DefaultLanguage), METADATA_PARAMS(Z_Construct_UClass_UAkInitBank_Statics::NewProp_DefaultLanguage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkInitBank_Statics::NewProp_DefaultLanguage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkInitBank_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkInitBank_Statics::NewProp_AvailableAudioCultures_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkInitBank_Statics::NewProp_AvailableAudioCultures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkInitBank_Statics::NewProp_DefaultLanguage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkInitBank_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkInitBank>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkInitBank_Statics::ClassParams = {
		&UAkInitBank::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAkInitBank_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkInitBank_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkInitBank_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkInitBank_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkInitBank()
	{
		if (!Z_Registration_Info_UClass_UAkInitBank.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkInitBank.OuterSingleton, Z_Construct_UClass_UAkInitBank_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkInitBank.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkInitBank>()
	{
		return UAkInitBank::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkInitBank);
	UAkInitBank::~UAkInitBank() {}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkInitBank_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkInitBank_h_Statics::ScriptStructInfo[] = {
		{ FAkPluginInfo::StaticStruct, Z_Construct_UScriptStruct_FAkPluginInfo_Statics::NewStructOps, TEXT("AkPluginInfo"), &Z_Registration_Info_UScriptStruct_AkPluginInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkPluginInfo), 3966609535U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkInitBank_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAkInitBankAssetData, UAkInitBankAssetData::StaticClass, TEXT("UAkInitBankAssetData"), &Z_Registration_Info_UClass_UAkInitBankAssetData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkInitBankAssetData), 3104885602U) },
		{ Z_Construct_UClass_UAkInitBank, UAkInitBank::StaticClass, TEXT("UAkInitBank"), &Z_Registration_Info_UClass_UAkInitBank, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkInitBank), 1507698255U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkInitBank_h_3617460241(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkInitBank_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkInitBank_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkInitBank_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkInitBank_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
