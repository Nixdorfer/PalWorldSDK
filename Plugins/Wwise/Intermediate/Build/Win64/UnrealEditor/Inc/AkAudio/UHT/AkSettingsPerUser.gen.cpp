// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkSettingsPerUser.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkSettingsPerUser() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkSettingsPerUser();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkSettingsPerUser_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void UAkSettingsPerUser::StaticRegisterNativesUAkSettingsPerUser()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkSettingsPerUser);
	UClass* Z_Construct_UClass_UAkSettingsPerUser_NoRegister()
	{
		return UAkSettingsPerUser::StaticClass();
	}
	struct Z_Construct_UClass_UAkSettingsPerUser_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WwiseWindowsInstallationPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WwiseWindowsInstallationPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WwiseMacInstallationPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WwiseMacInstallationPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnableAutomaticAssetSynchronization_MetaData[];
#endif
		static void NewProp_EnableAutomaticAssetSynchronization_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableAutomaticAssetSynchronization;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaapiIPAddress_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_WaapiIPAddress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaapiPort_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_WaapiPort;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoConnectToWAAPI_MetaData[];
#endif
		static void NewProp_bAutoConnectToWAAPI_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoConnectToWAAPI;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoSyncSelection_MetaData[];
#endif
		static void NewProp_AutoSyncSelection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AutoSyncSelection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SuppressWwiseProjectPathWarnings_MetaData[];
#endif
		static void NewProp_SuppressWwiseProjectPathWarnings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SuppressWwiseProjectPathWarnings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundDataGenerationSkipLanguage_MetaData[];
#endif
		static void NewProp_SoundDataGenerationSkipLanguage_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SoundDataGenerationSkipLanguage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkSettingsPerUser_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettingsPerUser_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AkSettingsPerUser.h" },
		{ "ModuleRelativePath", "Classes/AkSettingsPerUser.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_WwiseWindowsInstallationPath_MetaData[] = {
		{ "Category", "Installation" },
		{ "Comment", "// Wwise Installation Path (Windows Authoring tool)\n" },
		{ "ModuleRelativePath", "Classes/AkSettingsPerUser.h" },
		{ "ToolTip", "Wwise Installation Path (Windows Authoring tool)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_WwiseWindowsInstallationPath = { "WwiseWindowsInstallationPath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkSettingsPerUser, WwiseWindowsInstallationPath), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_WwiseWindowsInstallationPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_WwiseWindowsInstallationPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_WwiseMacInstallationPath_MetaData[] = {
		{ "AbsolutePath", "" },
		{ "Category", "Installation" },
		{ "Comment", "// Wwise Installation Path (Mac Authoring tool)\n" },
		{ "FilePathFilter", "app" },
		{ "ModuleRelativePath", "Classes/AkSettingsPerUser.h" },
		{ "ToolTip", "Wwise Installation Path (Mac Authoring tool)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_WwiseMacInstallationPath = { "WwiseMacInstallationPath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkSettingsPerUser, WwiseMacInstallationPath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_WwiseMacInstallationPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_WwiseMacInstallationPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_EnableAutomaticAssetSynchronization_MetaData[] = {
		{ "Category", "Sound Data" },
		{ "Comment", "// Enable automatic asset synchronization with the new asset management system\n// Changes to this settings will only reflect after restarting the editor\n" },
		{ "ModuleRelativePath", "Classes/AkSettingsPerUser.h" },
		{ "ToolTip", "Enable automatic asset synchronization with the new asset management system\nChanges to this settings will only reflect after restarting the editor" },
	};
#endif
	void Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_EnableAutomaticAssetSynchronization_SetBit(void* Obj)
	{
		((UAkSettingsPerUser*)Obj)->EnableAutomaticAssetSynchronization = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_EnableAutomaticAssetSynchronization = { "EnableAutomaticAssetSynchronization", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAkSettingsPerUser), &Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_EnableAutomaticAssetSynchronization_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_EnableAutomaticAssetSynchronization_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_EnableAutomaticAssetSynchronization_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_WaapiIPAddress_MetaData[] = {
		{ "Category", "WAAPI" },
		{ "Comment", "// IP Address used to connect to WAAPI. Changing this requires Editor restart\n" },
		{ "ModuleRelativePath", "Classes/AkSettingsPerUser.h" },
		{ "ToolTip", "IP Address used to connect to WAAPI. Changing this requires Editor restart" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_WaapiIPAddress = { "WaapiIPAddress", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkSettingsPerUser, WaapiIPAddress), METADATA_PARAMS(Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_WaapiIPAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_WaapiIPAddress_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_WaapiPort_MetaData[] = {
		{ "Category", "WAAPI" },
		{ "Comment", "// Network Port used to connect to WAAPI. Changing this requires Editor restart\n" },
		{ "ModuleRelativePath", "Classes/AkSettingsPerUser.h" },
		{ "ToolTip", "Network Port used to connect to WAAPI. Changing this requires Editor restart" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_WaapiPort = { "WaapiPort", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkSettingsPerUser, WaapiPort), METADATA_PARAMS(Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_WaapiPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_WaapiPort_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_bAutoConnectToWAAPI_MetaData[] = {
		{ "Category", "WAAPI" },
		{ "Comment", "// Whether to connect to WAAPI or not\n" },
		{ "ModuleRelativePath", "Classes/AkSettingsPerUser.h" },
		{ "ToolTip", "Whether to connect to WAAPI or not" },
	};
#endif
	void Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_bAutoConnectToWAAPI_SetBit(void* Obj)
	{
		((UAkSettingsPerUser*)Obj)->bAutoConnectToWAAPI = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_bAutoConnectToWAAPI = { "bAutoConnectToWAAPI", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAkSettingsPerUser), &Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_bAutoConnectToWAAPI_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_bAutoConnectToWAAPI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_bAutoConnectToWAAPI_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_AutoSyncSelection_MetaData[] = {
		{ "Category", "WAAPI" },
		{ "Comment", "// Whether to synchronize the selection between the WAAPI picker and the Wwise Project Explorer\n" },
		{ "ModuleRelativePath", "Classes/AkSettingsPerUser.h" },
		{ "ToolTip", "Whether to synchronize the selection between the WAAPI picker and the Wwise Project Explorer" },
	};
#endif
	void Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_AutoSyncSelection_SetBit(void* Obj)
	{
		((UAkSettingsPerUser*)Obj)->AutoSyncSelection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_AutoSyncSelection = { "AutoSyncSelection", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAkSettingsPerUser), &Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_AutoSyncSelection_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_AutoSyncSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_AutoSyncSelection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_SuppressWwiseProjectPathWarnings_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkSettingsPerUser.h" },
	};
#endif
	void Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_SuppressWwiseProjectPathWarnings_SetBit(void* Obj)
	{
		((UAkSettingsPerUser*)Obj)->SuppressWwiseProjectPathWarnings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_SuppressWwiseProjectPathWarnings = { "SuppressWwiseProjectPathWarnings", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAkSettingsPerUser), &Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_SuppressWwiseProjectPathWarnings_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_SuppressWwiseProjectPathWarnings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_SuppressWwiseProjectPathWarnings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_SoundDataGenerationSkipLanguage_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkSettingsPerUser.h" },
	};
#endif
	void Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_SoundDataGenerationSkipLanguage_SetBit(void* Obj)
	{
		((UAkSettingsPerUser*)Obj)->SoundDataGenerationSkipLanguage = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_SoundDataGenerationSkipLanguage = { "SoundDataGenerationSkipLanguage", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAkSettingsPerUser), &Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_SoundDataGenerationSkipLanguage_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_SoundDataGenerationSkipLanguage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_SoundDataGenerationSkipLanguage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkSettingsPerUser_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_WwiseWindowsInstallationPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_WwiseMacInstallationPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_EnableAutomaticAssetSynchronization,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_WaapiIPAddress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_WaapiPort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_bAutoConnectToWAAPI,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_AutoSyncSelection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_SuppressWwiseProjectPathWarnings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettingsPerUser_Statics::NewProp_SoundDataGenerationSkipLanguage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkSettingsPerUser_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkSettingsPerUser>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkSettingsPerUser_Statics::ClassParams = {
		&UAkSettingsPerUser::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAkSettingsPerUser_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettingsPerUser_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAkSettingsPerUser_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettingsPerUser_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkSettingsPerUser()
	{
		if (!Z_Registration_Info_UClass_UAkSettingsPerUser.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkSettingsPerUser.OuterSingleton, Z_Construct_UClass_UAkSettingsPerUser_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkSettingsPerUser.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkSettingsPerUser>()
	{
		return UAkSettingsPerUser::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkSettingsPerUser);
	UAkSettingsPerUser::~UAkSettingsPerUser() {}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkSettingsPerUser_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkSettingsPerUser_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAkSettingsPerUser, UAkSettingsPerUser::StaticClass, TEXT("UAkSettingsPerUser"), &Z_Registration_Info_UClass_UAkSettingsPerUser, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkSettingsPerUser), 2248089896U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkSettingsPerUser_h_518736974(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkSettingsPerUser_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkSettingsPerUser_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
