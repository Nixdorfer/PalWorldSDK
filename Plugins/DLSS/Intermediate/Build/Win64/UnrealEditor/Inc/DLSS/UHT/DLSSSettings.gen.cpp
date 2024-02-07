// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DLSS/Public/DLSSSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDLSSSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DLSS_API UClass* Z_Construct_UClass_UDLSSSettings();
	DLSS_API UClass* Z_Construct_UClass_UDLSSSettings_NoRegister();
	DLSS_API UEnum* Z_Construct_UEnum_DLSS_EDLSSPreset();
	UPackage* Z_Construct_UPackage__Script_DLSS();
// End Cross Module References
	void UDLSSSettings::StaticRegisterNativesUDLSSSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDLSSSettings);
	UClass* Z_Construct_UClass_UDLSSSettings_NoRegister()
	{
		return UDLSSSettings::StaticClass();
	}
	struct Z_Construct_UClass_UDLSSSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDLSSD3D12_MetaData[];
#endif
		static void NewProp_bEnableDLSSD3D12_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDLSSD3D12;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDLSSD3D11_MetaData[];
#endif
		static void NewProp_bEnableDLSSD3D11_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDLSSD3D11;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDLSSVulkan_MetaData[];
#endif
		static void NewProp_bEnableDLSSVulkan_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDLSSVulkan;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDLSSInEditorViewports_MetaData[];
#endif
		static void NewProp_bEnableDLSSInEditorViewports_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDLSSInEditorViewports;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDLSSInPlayInEditorViewports_MetaData[];
#endif
		static void NewProp_bEnableDLSSInPlayInEditorViewports_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDLSSInPlayInEditorViewports;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowDLSSSDebugOnScreenMessages_MetaData[];
#endif
		static void NewProp_bShowDLSSSDebugOnScreenMessages_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowDLSSSDebugOnScreenMessages;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GenericDLSSBinaryPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GenericDLSSBinaryPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGenericDLSSBinaryExists_MetaData[];
#endif
		static void NewProp_bGenericDLSSBinaryExists_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenericDLSSBinaryExists;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NVIDIANGXApplicationId_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_NVIDIANGXApplicationId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomDLSSBinaryPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CustomDLSSBinaryPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCustomDLSSBinaryExists_MetaData[];
#endif
		static void NewProp_bCustomDLSSBinaryExists_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCustomDLSSBinaryExists;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowOTAUpdate_MetaData[];
#endif
		static void NewProp_bAllowOTAUpdate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowOTAUpdate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowDLSSIncompatiblePluginsToolsWarnings_MetaData[];
#endif
		static void NewProp_bShowDLSSIncompatiblePluginsToolsWarnings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowDLSSIncompatiblePluginsToolsWarnings;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DLAAPreset_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DLAAPreset_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DLAAPreset;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DLSSQualityPreset_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DLSSQualityPreset_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DLSSQualityPreset;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DLSSBalancedPreset_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DLSSBalancedPreset_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DLSSBalancedPreset;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DLSSPerformancePreset_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DLSSPerformancePreset_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DLSSPerformancePreset;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DLSSUltraPerformancePreset_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DLSSUltraPerformancePreset_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DLSSUltraPerformancePreset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDLSSSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DLSS,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDLSSSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DLSSSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DLSSSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDLSSSettings_Statics::NewProp_bEnableDLSSD3D12_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DLSSSettings" },
		{ "ModuleRelativePath", "Public/DLSSSettings.h" },
	};
#endif
	void Z_Construct_UClass_UDLSSSettings_Statics::NewProp_bEnableDLSSD3D12_SetBit(void* Obj)
	{
		((UDLSSSettings*)Obj)->bEnableDLSSD3D12 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDLSSSettings_Statics::NewProp_bEnableDLSSD3D12 = { "bEnableDLSSD3D12", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDLSSSettings), &Z_Construct_UClass_UDLSSSettings_Statics::NewProp_bEnableDLSSD3D12_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDLSSSettings_Statics::NewProp_bEnableDLSSD3D12_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDLSSSettings_Statics::NewProp_bEnableDLSSD3D12_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDLSSSettings_Statics::NewProp_bEnableDLSSD3D11_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DLSSSettings" },
		{ "ModuleRelativePath", "Public/DLSSSettings.h" },
	};
#endif
	void Z_Construct_UClass_UDLSSSettings_Statics::NewProp_bEnableDLSSD3D11_SetBit(void* Obj)
	{
		((UDLSSSettings*)Obj)->bEnableDLSSD3D11 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDLSSSettings_Statics::NewProp_bEnableDLSSD3D11 = { "bEnableDLSSD3D11", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDLSSSettings), &Z_Construct_UClass_UDLSSSettings_Statics::NewProp_bEnableDLSSD3D11_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDLSSSettings_Statics::NewProp_bEnableDLSSD3D11_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDLSSSettings_Statics::NewProp_bEnableDLSSD3D11_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDLSSSettings_Statics::NewProp_bEnableDLSSVulkan_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DLSSSettings" },
		{ "ModuleRelativePath", "Public/DLSSSettings.h" },
	};
#endif
	void Z_Construct_UClass_UDLSSSettings_Statics::NewProp_bEnableDLSSVulkan_SetBit(void* Obj)
	{
		((UDLSSSettings*)Obj)->bEnableDLSSVulkan = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDLSSSettings_Statics::NewProp_bEnableDLSSVulkan = { "bEnableDLSSVulkan", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDLSSSettings), &Z_Construct_UClass_UDLSSSettings_Statics::NewProp_bEnableDLSSVulkan_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDLSSSettings_Statics::NewProp_bEnableDLSSVulkan_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDLSSSettings_Statics::NewProp_bEnableDLSSVulkan_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDLSSSettings_Statics::NewProp_bEnableDLSSInEditorViewports_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DLSSSettings" },
		{ "ModuleRelativePath", "Public/DLSSSettings.h" },
	};
#endif
	void Z_Construct_UClass_UDLSSSettings_Statics::NewProp_bEnableDLSSInEditorViewports_SetBit(void* Obj)
	{
		((UDLSSSettings*)Obj)->bEnableDLSSInEditorViewports = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDLSSSettings_Statics::NewProp_bEnableDLSSInEditorViewports = { "bEnableDLSSInEditorViewports", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDLSSSettings), &Z_Construct_UClass_UDLSSSettings_Statics::NewProp_bEnableDLSSInEditorViewports_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDLSSSettings_Statics::NewProp_bEnableDLSSInEditorViewports_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDLSSSettings_Statics::NewProp_bEnableDLSSInEditorViewports_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDLSSSettings_Statics::NewProp_bEnableDLSSInPlayInEditorViewports_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DLSSSettings" },
		{ "ModuleRelativePath", "Public/DLSSSettings.h" },
	};
#endif
	void Z_Construct_UClass_UDLSSSettings_Statics::NewProp_bEnableDLSSInPlayInEditorViewports_SetBit(void* Obj)
	{
		((UDLSSSettings*)Obj)->bEnableDLSSInPlayInEditorViewports = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDLSSSettings_Statics::NewProp_bEnableDLSSInPlayInEditorViewports = { "bEnableDLSSInPlayInEditorViewports", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDLSSSettings), &Z_Construct_UClass_UDLSSSettings_Statics::NewProp_bEnableDLSSInPlayInEditorViewports_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDLSSSettings_Statics::NewProp_bEnableDLSSInPlayInEditorViewports_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDLSSSettings_Statics::NewProp_bEnableDLSSInPlayInEditorViewports_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDLSSSettings_Statics::NewProp_bShowDLSSSDebugOnScreenMessages_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DLSSSettings" },
		{ "ModuleRelativePath", "Public/DLSSSettings.h" },
	};
#endif
	void Z_Construct_UClass_UDLSSSettings_Statics::NewProp_bShowDLSSSDebugOnScreenMessages_SetBit(void* Obj)
	{
		((UDLSSSettings*)Obj)->bShowDLSSSDebugOnScreenMessages = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDLSSSettings_Statics::NewProp_bShowDLSSSDebugOnScreenMessages = { "bShowDLSSSDebugOnScreenMessages", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDLSSSettings), &Z_Construct_UClass_UDLSSSettings_Statics::NewProp_bShowDLSSSDebugOnScreenMessages_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDLSSSettings_Statics::NewProp_bShowDLSSSDebugOnScreenMessages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDLSSSettings_Statics::NewProp_bShowDLSSSDebugOnScreenMessages_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDLSSSettings_Statics::NewProp_GenericDLSSBinaryPath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DLSSSettings" },
		{ "ModuleRelativePath", "Public/DLSSSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDLSSSettings_Statics::NewProp_GenericDLSSBinaryPath = { "GenericDLSSBinaryPath", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDLSSSettings, GenericDLSSBinaryPath), METADATA_PARAMS(Z_Construct_UClass_UDLSSSettings_Statics::NewProp_GenericDLSSBinaryPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDLSSSettings_Statics::NewProp_GenericDLSSBinaryPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDLSSSettings_Statics::NewProp_bGenericDLSSBinaryExists_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DLSSSettings" },
		{ "ModuleRelativePath", "Public/DLSSSettings.h" },
	};
#endif
	void Z_Construct_UClass_UDLSSSettings_Statics::NewProp_bGenericDLSSBinaryExists_SetBit(void* Obj)
	{
		((UDLSSSettings*)Obj)->bGenericDLSSBinaryExists = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDLSSSettings_Statics::NewProp_bGenericDLSSBinaryExists = { "bGenericDLSSBinaryExists", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDLSSSettings), &Z_Construct_UClass_UDLSSSettings_Statics::NewProp_bGenericDLSSBinaryExists_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDLSSSettings_Statics::NewProp_bGenericDLSSBinaryExists_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDLSSSettings_Statics::NewProp_bGenericDLSSBinaryExists_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDLSSSettings_Statics::NewProp_NVIDIANGXApplicationId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DLSSSettings" },
		{ "ModuleRelativePath", "Public/DLSSSettings.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UDLSSSettings_Statics::NewProp_NVIDIANGXApplicationId = { "NVIDIANGXApplicationId", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDLSSSettings, NVIDIANGXApplicationId), METADATA_PARAMS(Z_Construct_UClass_UDLSSSettings_Statics::NewProp_NVIDIANGXApplicationId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDLSSSettings_Statics::NewProp_NVIDIANGXApplicationId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDLSSSettings_Statics::NewProp_CustomDLSSBinaryPath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DLSSSettings" },
		{ "ModuleRelativePath", "Public/DLSSSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDLSSSettings_Statics::NewProp_CustomDLSSBinaryPath = { "CustomDLSSBinaryPath", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDLSSSettings, CustomDLSSBinaryPath), METADATA_PARAMS(Z_Construct_UClass_UDLSSSettings_Statics::NewProp_CustomDLSSBinaryPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDLSSSettings_Statics::NewProp_CustomDLSSBinaryPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDLSSSettings_Statics::NewProp_bCustomDLSSBinaryExists_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DLSSSettings" },
		{ "ModuleRelativePath", "Public/DLSSSettings.h" },
	};
#endif
	void Z_Construct_UClass_UDLSSSettings_Statics::NewProp_bCustomDLSSBinaryExists_SetBit(void* Obj)
	{
		((UDLSSSettings*)Obj)->bCustomDLSSBinaryExists = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDLSSSettings_Statics::NewProp_bCustomDLSSBinaryExists = { "bCustomDLSSBinaryExists", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDLSSSettings), &Z_Construct_UClass_UDLSSSettings_Statics::NewProp_bCustomDLSSBinaryExists_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDLSSSettings_Statics::NewProp_bCustomDLSSBinaryExists_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDLSSSettings_Statics::NewProp_bCustomDLSSBinaryExists_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDLSSSettings_Statics::NewProp_bAllowOTAUpdate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DLSSSettings" },
		{ "ModuleRelativePath", "Public/DLSSSettings.h" },
	};
#endif
	void Z_Construct_UClass_UDLSSSettings_Statics::NewProp_bAllowOTAUpdate_SetBit(void* Obj)
	{
		((UDLSSSettings*)Obj)->bAllowOTAUpdate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDLSSSettings_Statics::NewProp_bAllowOTAUpdate = { "bAllowOTAUpdate", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDLSSSettings), &Z_Construct_UClass_UDLSSSettings_Statics::NewProp_bAllowOTAUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDLSSSettings_Statics::NewProp_bAllowOTAUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDLSSSettings_Statics::NewProp_bAllowOTAUpdate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDLSSSettings_Statics::NewProp_bShowDLSSIncompatiblePluginsToolsWarnings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DLSSSettings" },
		{ "ModuleRelativePath", "Public/DLSSSettings.h" },
	};
#endif
	void Z_Construct_UClass_UDLSSSettings_Statics::NewProp_bShowDLSSIncompatiblePluginsToolsWarnings_SetBit(void* Obj)
	{
		((UDLSSSettings*)Obj)->bShowDLSSIncompatiblePluginsToolsWarnings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDLSSSettings_Statics::NewProp_bShowDLSSIncompatiblePluginsToolsWarnings = { "bShowDLSSIncompatiblePluginsToolsWarnings", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDLSSSettings), &Z_Construct_UClass_UDLSSSettings_Statics::NewProp_bShowDLSSIncompatiblePluginsToolsWarnings_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDLSSSettings_Statics::NewProp_bShowDLSSIncompatiblePluginsToolsWarnings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDLSSSettings_Statics::NewProp_bShowDLSSIncompatiblePluginsToolsWarnings_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDLSSSettings_Statics::NewProp_DLAAPreset_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDLSSSettings_Statics::NewProp_DLAAPreset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DLSSSettings" },
		{ "ModuleRelativePath", "Public/DLSSSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDLSSSettings_Statics::NewProp_DLAAPreset = { "DLAAPreset", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDLSSSettings, DLAAPreset), Z_Construct_UEnum_DLSS_EDLSSPreset, METADATA_PARAMS(Z_Construct_UClass_UDLSSSettings_Statics::NewProp_DLAAPreset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDLSSSettings_Statics::NewProp_DLAAPreset_MetaData)) }; // 109253994
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDLSSSettings_Statics::NewProp_DLSSQualityPreset_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDLSSSettings_Statics::NewProp_DLSSQualityPreset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DLSSSettings" },
		{ "ModuleRelativePath", "Public/DLSSSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDLSSSettings_Statics::NewProp_DLSSQualityPreset = { "DLSSQualityPreset", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDLSSSettings, DLSSQualityPreset), Z_Construct_UEnum_DLSS_EDLSSPreset, METADATA_PARAMS(Z_Construct_UClass_UDLSSSettings_Statics::NewProp_DLSSQualityPreset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDLSSSettings_Statics::NewProp_DLSSQualityPreset_MetaData)) }; // 109253994
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDLSSSettings_Statics::NewProp_DLSSBalancedPreset_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDLSSSettings_Statics::NewProp_DLSSBalancedPreset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DLSSSettings" },
		{ "ModuleRelativePath", "Public/DLSSSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDLSSSettings_Statics::NewProp_DLSSBalancedPreset = { "DLSSBalancedPreset", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDLSSSettings, DLSSBalancedPreset), Z_Construct_UEnum_DLSS_EDLSSPreset, METADATA_PARAMS(Z_Construct_UClass_UDLSSSettings_Statics::NewProp_DLSSBalancedPreset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDLSSSettings_Statics::NewProp_DLSSBalancedPreset_MetaData)) }; // 109253994
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDLSSSettings_Statics::NewProp_DLSSPerformancePreset_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDLSSSettings_Statics::NewProp_DLSSPerformancePreset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DLSSSettings" },
		{ "ModuleRelativePath", "Public/DLSSSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDLSSSettings_Statics::NewProp_DLSSPerformancePreset = { "DLSSPerformancePreset", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDLSSSettings, DLSSPerformancePreset), Z_Construct_UEnum_DLSS_EDLSSPreset, METADATA_PARAMS(Z_Construct_UClass_UDLSSSettings_Statics::NewProp_DLSSPerformancePreset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDLSSSettings_Statics::NewProp_DLSSPerformancePreset_MetaData)) }; // 109253994
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDLSSSettings_Statics::NewProp_DLSSUltraPerformancePreset_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDLSSSettings_Statics::NewProp_DLSSUltraPerformancePreset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DLSSSettings" },
		{ "ModuleRelativePath", "Public/DLSSSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDLSSSettings_Statics::NewProp_DLSSUltraPerformancePreset = { "DLSSUltraPerformancePreset", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDLSSSettings, DLSSUltraPerformancePreset), Z_Construct_UEnum_DLSS_EDLSSPreset, METADATA_PARAMS(Z_Construct_UClass_UDLSSSettings_Statics::NewProp_DLSSUltraPerformancePreset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDLSSSettings_Statics::NewProp_DLSSUltraPerformancePreset_MetaData)) }; // 109253994
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDLSSSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDLSSSettings_Statics::NewProp_bEnableDLSSD3D12,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDLSSSettings_Statics::NewProp_bEnableDLSSD3D11,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDLSSSettings_Statics::NewProp_bEnableDLSSVulkan,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDLSSSettings_Statics::NewProp_bEnableDLSSInEditorViewports,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDLSSSettings_Statics::NewProp_bEnableDLSSInPlayInEditorViewports,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDLSSSettings_Statics::NewProp_bShowDLSSSDebugOnScreenMessages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDLSSSettings_Statics::NewProp_GenericDLSSBinaryPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDLSSSettings_Statics::NewProp_bGenericDLSSBinaryExists,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDLSSSettings_Statics::NewProp_NVIDIANGXApplicationId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDLSSSettings_Statics::NewProp_CustomDLSSBinaryPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDLSSSettings_Statics::NewProp_bCustomDLSSBinaryExists,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDLSSSettings_Statics::NewProp_bAllowOTAUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDLSSSettings_Statics::NewProp_bShowDLSSIncompatiblePluginsToolsWarnings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDLSSSettings_Statics::NewProp_DLAAPreset_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDLSSSettings_Statics::NewProp_DLAAPreset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDLSSSettings_Statics::NewProp_DLSSQualityPreset_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDLSSSettings_Statics::NewProp_DLSSQualityPreset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDLSSSettings_Statics::NewProp_DLSSBalancedPreset_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDLSSSettings_Statics::NewProp_DLSSBalancedPreset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDLSSSettings_Statics::NewProp_DLSSPerformancePreset_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDLSSSettings_Statics::NewProp_DLSSPerformancePreset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDLSSSettings_Statics::NewProp_DLSSUltraPerformancePreset_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDLSSSettings_Statics::NewProp_DLSSUltraPerformancePreset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDLSSSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDLSSSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDLSSSettings_Statics::ClassParams = {
		&UDLSSSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDLSSSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDLSSSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UDLSSSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDLSSSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDLSSSettings()
	{
		if (!Z_Registration_Info_UClass_UDLSSSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDLSSSettings.OuterSingleton, Z_Construct_UClass_UDLSSSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDLSSSettings.OuterSingleton;
	}
	template<> DLSS_API UClass* StaticClass<UDLSSSettings>()
	{
		return UDLSSSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDLSSSettings);
	UDLSSSettings::~UDLSSSettings() {}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_DLSS_Source_DLSS_Public_DLSSSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_DLSS_Source_DLSS_Public_DLSSSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDLSSSettings, UDLSSSettings::StaticClass, TEXT("UDLSSSettings"), &Z_Registration_Info_UClass_UDLSSSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDLSSSettings), 1448226850U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_DLSS_Source_DLSS_Public_DLSSSettings_h_2533756170(TEXT("/Script/DLSS"),
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_DLSS_Source_DLSS_Public_DLSSSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_DLSS_Source_DLSS_Public_DLSSSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
