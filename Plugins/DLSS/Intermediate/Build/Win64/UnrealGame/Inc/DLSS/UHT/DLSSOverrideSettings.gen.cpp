// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DLSS/Public/DLSSOverrideSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDLSSOverrideSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DLSS_API UClass* Z_Construct_UClass_UDLSSOverrideSettings();
	DLSS_API UClass* Z_Construct_UClass_UDLSSOverrideSettings_NoRegister();
	DLSS_API UEnum* Z_Construct_UEnum_DLSS_EDLSSSettingOverride();
	UPackage* Z_Construct_UPackage__Script_DLSS();
// End Cross Module References
	void UDLSSOverrideSettings::StaticRegisterNativesUDLSSOverrideSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDLSSOverrideSettings);
	UClass* Z_Construct_UClass_UDLSSOverrideSettings_NoRegister()
	{
		return UDLSSOverrideSettings::StaticClass();
	}
	struct Z_Construct_UClass_UDLSSOverrideSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_EnableDLSSInEditorViewportsOverride_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnableDLSSInEditorViewportsOverride_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EnableDLSSInEditorViewportsOverride;
		static const UECodeGen_Private::FBytePropertyParams NewProp_EnableDLSSInPlayInEditorViewportsOverride_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnableDLSSInPlayInEditorViewportsOverride_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EnableDLSSInPlayInEditorViewportsOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowDLSSIncompatiblePluginsToolsWarnings_MetaData[];
#endif
		static void NewProp_bShowDLSSIncompatiblePluginsToolsWarnings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowDLSSIncompatiblePluginsToolsWarnings;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ShowDLSSSDebugOnScreenMessages_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShowDLSSSDebugOnScreenMessages_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ShowDLSSSDebugOnScreenMessages;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDLSSOverrideSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DLSS,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDLSSOverrideSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DLSSOverrideSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DLSSOverrideSettings.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDLSSOverrideSettings_Statics::NewProp_EnableDLSSInEditorViewportsOverride_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDLSSOverrideSettings_Statics::NewProp_EnableDLSSInEditorViewportsOverride_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DLSSOverrideSettings" },
		{ "ModuleRelativePath", "Public/DLSSOverrideSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDLSSOverrideSettings_Statics::NewProp_EnableDLSSInEditorViewportsOverride = { "EnableDLSSInEditorViewportsOverride", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDLSSOverrideSettings, EnableDLSSInEditorViewportsOverride), Z_Construct_UEnum_DLSS_EDLSSSettingOverride, METADATA_PARAMS(Z_Construct_UClass_UDLSSOverrideSettings_Statics::NewProp_EnableDLSSInEditorViewportsOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDLSSOverrideSettings_Statics::NewProp_EnableDLSSInEditorViewportsOverride_MetaData)) }; // 2003877657
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDLSSOverrideSettings_Statics::NewProp_EnableDLSSInPlayInEditorViewportsOverride_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDLSSOverrideSettings_Statics::NewProp_EnableDLSSInPlayInEditorViewportsOverride_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DLSSOverrideSettings" },
		{ "ModuleRelativePath", "Public/DLSSOverrideSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDLSSOverrideSettings_Statics::NewProp_EnableDLSSInPlayInEditorViewportsOverride = { "EnableDLSSInPlayInEditorViewportsOverride", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDLSSOverrideSettings, EnableDLSSInPlayInEditorViewportsOverride), Z_Construct_UEnum_DLSS_EDLSSSettingOverride, METADATA_PARAMS(Z_Construct_UClass_UDLSSOverrideSettings_Statics::NewProp_EnableDLSSInPlayInEditorViewportsOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDLSSOverrideSettings_Statics::NewProp_EnableDLSSInPlayInEditorViewportsOverride_MetaData)) }; // 2003877657
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDLSSOverrideSettings_Statics::NewProp_bShowDLSSIncompatiblePluginsToolsWarnings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DLSSOverrideSettings" },
		{ "ModuleRelativePath", "Public/DLSSOverrideSettings.h" },
	};
#endif
	void Z_Construct_UClass_UDLSSOverrideSettings_Statics::NewProp_bShowDLSSIncompatiblePluginsToolsWarnings_SetBit(void* Obj)
	{
		((UDLSSOverrideSettings*)Obj)->bShowDLSSIncompatiblePluginsToolsWarnings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDLSSOverrideSettings_Statics::NewProp_bShowDLSSIncompatiblePluginsToolsWarnings = { "bShowDLSSIncompatiblePluginsToolsWarnings", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDLSSOverrideSettings), &Z_Construct_UClass_UDLSSOverrideSettings_Statics::NewProp_bShowDLSSIncompatiblePluginsToolsWarnings_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDLSSOverrideSettings_Statics::NewProp_bShowDLSSIncompatiblePluginsToolsWarnings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDLSSOverrideSettings_Statics::NewProp_bShowDLSSIncompatiblePluginsToolsWarnings_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDLSSOverrideSettings_Statics::NewProp_ShowDLSSSDebugOnScreenMessages_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDLSSOverrideSettings_Statics::NewProp_ShowDLSSSDebugOnScreenMessages_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DLSSOverrideSettings" },
		{ "ModuleRelativePath", "Public/DLSSOverrideSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDLSSOverrideSettings_Statics::NewProp_ShowDLSSSDebugOnScreenMessages = { "ShowDLSSSDebugOnScreenMessages", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDLSSOverrideSettings, ShowDLSSSDebugOnScreenMessages), Z_Construct_UEnum_DLSS_EDLSSSettingOverride, METADATA_PARAMS(Z_Construct_UClass_UDLSSOverrideSettings_Statics::NewProp_ShowDLSSSDebugOnScreenMessages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDLSSOverrideSettings_Statics::NewProp_ShowDLSSSDebugOnScreenMessages_MetaData)) }; // 2003877657
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDLSSOverrideSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDLSSOverrideSettings_Statics::NewProp_EnableDLSSInEditorViewportsOverride_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDLSSOverrideSettings_Statics::NewProp_EnableDLSSInEditorViewportsOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDLSSOverrideSettings_Statics::NewProp_EnableDLSSInPlayInEditorViewportsOverride_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDLSSOverrideSettings_Statics::NewProp_EnableDLSSInPlayInEditorViewportsOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDLSSOverrideSettings_Statics::NewProp_bShowDLSSIncompatiblePluginsToolsWarnings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDLSSOverrideSettings_Statics::NewProp_ShowDLSSSDebugOnScreenMessages_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDLSSOverrideSettings_Statics::NewProp_ShowDLSSSDebugOnScreenMessages,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDLSSOverrideSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDLSSOverrideSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDLSSOverrideSettings_Statics::ClassParams = {
		&UDLSSOverrideSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDLSSOverrideSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDLSSOverrideSettings_Statics::PropPointers),
		0,
		0x001000E4u,
		METADATA_PARAMS(Z_Construct_UClass_UDLSSOverrideSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDLSSOverrideSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDLSSOverrideSettings()
	{
		if (!Z_Registration_Info_UClass_UDLSSOverrideSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDLSSOverrideSettings.OuterSingleton, Z_Construct_UClass_UDLSSOverrideSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDLSSOverrideSettings.OuterSingleton;
	}
	template<> DLSS_API UClass* StaticClass<UDLSSOverrideSettings>()
	{
		return UDLSSOverrideSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDLSSOverrideSettings);
	UDLSSOverrideSettings::~UDLSSOverrideSettings() {}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_DLSS_Source_DLSS_Public_DLSSOverrideSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_DLSS_Source_DLSS_Public_DLSSOverrideSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDLSSOverrideSettings, UDLSSOverrideSettings::StaticClass, TEXT("UDLSSOverrideSettings"), &Z_Registration_Info_UClass_UDLSSOverrideSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDLSSOverrideSettings), 3480137463U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_DLSS_Source_DLSS_Public_DLSSOverrideSettings_h_3121097540(TEXT("/Script/DLSS"),
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_DLSS_Source_DLSS_Public_DLSSOverrideSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_DLSS_Source_DLSS_Public_DLSSOverrideSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
