// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonLoadingScreen/Public/CommonLoadingScreenSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonLoadingScreenSettings() {}
// Cross Module References
	COMMONLOADINGSCREEN_API UClass* Z_Construct_UClass_UCommonLoadingScreenSettings();
	COMMONLOADINGSCREEN_API UClass* Z_Construct_UClass_UCommonLoadingScreenSettings_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettingsBackedByCVars();
	UPackage* Z_Construct_UPackage__Script_CommonLoadingScreen();
// End Cross Module References
	void UCommonLoadingScreenSettings::StaticRegisterNativesUCommonLoadingScreenSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonLoadingScreenSettings);
	UClass* Z_Construct_UClass_UCommonLoadingScreenSettings_NoRegister()
	{
		return UCommonLoadingScreenSettings::StaticClass();
	}
	struct Z_Construct_UClass_UCommonLoadingScreenSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadingScreenWidget_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LoadingScreenWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadingScreenZOrder_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LoadingScreenZOrder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoldLoadingScreenAdditionalSecs_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HoldLoadingScreenAdditionalSecs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadingScreenHeartbeatHangDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LoadingScreenHeartbeatHangDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LogLoadingScreenHeartbeatInterval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LogLoadingScreenHeartbeatInterval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LogLoadingScreenReasonEveryFrame_MetaData[];
#endif
		static void NewProp_LogLoadingScreenReasonEveryFrame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_LogLoadingScreenReasonEveryFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForceLoadingScreenVisible_MetaData[];
#endif
		static void NewProp_ForceLoadingScreenVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ForceLoadingScreenVisible;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoldLoadingScreenAdditionalSecsEvenInEditor_MetaData[];
#endif
		static void NewProp_HoldLoadingScreenAdditionalSecsEvenInEditor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_HoldLoadingScreenAdditionalSecsEvenInEditor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForceTickLoadingScreenEvenInEditor_MetaData[];
#endif
		static void NewProp_ForceTickLoadingScreenEvenInEditor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ForceTickLoadingScreenEvenInEditor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettingsBackedByCVars,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonLoadingScreen,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CommonLoadingScreenSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CommonLoadingScreenSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_LoadingScreenWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonLoadingScreenSettings" },
		{ "ModuleRelativePath", "Public/CommonLoadingScreenSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_LoadingScreenWidget = { "LoadingScreenWidget", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonLoadingScreenSettings, LoadingScreenWidget), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_LoadingScreenWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_LoadingScreenWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_LoadingScreenZOrder_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonLoadingScreenSettings" },
		{ "ModuleRelativePath", "Public/CommonLoadingScreenSettings.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_LoadingScreenZOrder = { "LoadingScreenZOrder", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonLoadingScreenSettings, LoadingScreenZOrder), METADATA_PARAMS(Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_LoadingScreenZOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_LoadingScreenZOrder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_HoldLoadingScreenAdditionalSecs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonLoadingScreenSettings" },
		{ "ModuleRelativePath", "Public/CommonLoadingScreenSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_HoldLoadingScreenAdditionalSecs = { "HoldLoadingScreenAdditionalSecs", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonLoadingScreenSettings, HoldLoadingScreenAdditionalSecs), METADATA_PARAMS(Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_HoldLoadingScreenAdditionalSecs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_HoldLoadingScreenAdditionalSecs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_LoadingScreenHeartbeatHangDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonLoadingScreenSettings" },
		{ "ModuleRelativePath", "Public/CommonLoadingScreenSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_LoadingScreenHeartbeatHangDuration = { "LoadingScreenHeartbeatHangDuration", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonLoadingScreenSettings, LoadingScreenHeartbeatHangDuration), METADATA_PARAMS(Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_LoadingScreenHeartbeatHangDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_LoadingScreenHeartbeatHangDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_LogLoadingScreenHeartbeatInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonLoadingScreenSettings" },
		{ "ModuleRelativePath", "Public/CommonLoadingScreenSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_LogLoadingScreenHeartbeatInterval = { "LogLoadingScreenHeartbeatInterval", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonLoadingScreenSettings, LogLoadingScreenHeartbeatInterval), METADATA_PARAMS(Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_LogLoadingScreenHeartbeatInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_LogLoadingScreenHeartbeatInterval_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_LogLoadingScreenReasonEveryFrame_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonLoadingScreenSettings" },
		{ "ModuleRelativePath", "Public/CommonLoadingScreenSettings.h" },
	};
#endif
	void Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_LogLoadingScreenReasonEveryFrame_SetBit(void* Obj)
	{
		((UCommonLoadingScreenSettings*)Obj)->LogLoadingScreenReasonEveryFrame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_LogLoadingScreenReasonEveryFrame = { "LogLoadingScreenReasonEveryFrame", nullptr, (EPropertyFlags)0x0010000000002005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCommonLoadingScreenSettings), &Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_LogLoadingScreenReasonEveryFrame_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_LogLoadingScreenReasonEveryFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_LogLoadingScreenReasonEveryFrame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_ForceLoadingScreenVisible_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonLoadingScreenSettings" },
		{ "ModuleRelativePath", "Public/CommonLoadingScreenSettings.h" },
	};
#endif
	void Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_ForceLoadingScreenVisible_SetBit(void* Obj)
	{
		((UCommonLoadingScreenSettings*)Obj)->ForceLoadingScreenVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_ForceLoadingScreenVisible = { "ForceLoadingScreenVisible", nullptr, (EPropertyFlags)0x0010000000002005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCommonLoadingScreenSettings), &Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_ForceLoadingScreenVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_ForceLoadingScreenVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_ForceLoadingScreenVisible_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_HoldLoadingScreenAdditionalSecsEvenInEditor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonLoadingScreenSettings" },
		{ "ModuleRelativePath", "Public/CommonLoadingScreenSettings.h" },
	};
#endif
	void Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_HoldLoadingScreenAdditionalSecsEvenInEditor_SetBit(void* Obj)
	{
		((UCommonLoadingScreenSettings*)Obj)->HoldLoadingScreenAdditionalSecsEvenInEditor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_HoldLoadingScreenAdditionalSecsEvenInEditor = { "HoldLoadingScreenAdditionalSecsEvenInEditor", nullptr, (EPropertyFlags)0x0010000000002005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCommonLoadingScreenSettings), &Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_HoldLoadingScreenAdditionalSecsEvenInEditor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_HoldLoadingScreenAdditionalSecsEvenInEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_HoldLoadingScreenAdditionalSecsEvenInEditor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_ForceTickLoadingScreenEvenInEditor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonLoadingScreenSettings" },
		{ "ModuleRelativePath", "Public/CommonLoadingScreenSettings.h" },
	};
#endif
	void Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_ForceTickLoadingScreenEvenInEditor_SetBit(void* Obj)
	{
		((UCommonLoadingScreenSettings*)Obj)->ForceTickLoadingScreenEvenInEditor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_ForceTickLoadingScreenEvenInEditor = { "ForceTickLoadingScreenEvenInEditor", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCommonLoadingScreenSettings), &Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_ForceTickLoadingScreenEvenInEditor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_ForceTickLoadingScreenEvenInEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_ForceTickLoadingScreenEvenInEditor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_LoadingScreenWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_LoadingScreenZOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_HoldLoadingScreenAdditionalSecs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_LoadingScreenHeartbeatHangDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_LogLoadingScreenHeartbeatInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_LogLoadingScreenReasonEveryFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_ForceLoadingScreenVisible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_HoldLoadingScreenAdditionalSecsEvenInEditor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::NewProp_ForceTickLoadingScreenEvenInEditor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonLoadingScreenSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::ClassParams = {
		&UCommonLoadingScreenSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::PropPointers),
		0,
		0x000000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonLoadingScreenSettings()
	{
		if (!Z_Registration_Info_UClass_UCommonLoadingScreenSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonLoadingScreenSettings.OuterSingleton, Z_Construct_UClass_UCommonLoadingScreenSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonLoadingScreenSettings.OuterSingleton;
	}
	template<> COMMONLOADINGSCREEN_API UClass* StaticClass<UCommonLoadingScreenSettings>()
	{
		return UCommonLoadingScreenSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonLoadingScreenSettings);
	UCommonLoadingScreenSettings::~UCommonLoadingScreenSettings() {}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonLoadingScreen_Source_CommonLoadingScreen_Public_CommonLoadingScreenSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonLoadingScreen_Source_CommonLoadingScreen_Public_CommonLoadingScreenSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCommonLoadingScreenSettings, UCommonLoadingScreenSettings::StaticClass, TEXT("UCommonLoadingScreenSettings"), &Z_Registration_Info_UClass_UCommonLoadingScreenSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonLoadingScreenSettings), 216904478U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonLoadingScreen_Source_CommonLoadingScreen_Public_CommonLoadingScreenSettings_h_4171315640(TEXT("/Script/CommonLoadingScreen"),
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonLoadingScreen_Source_CommonLoadingScreen_Public_CommonLoadingScreenSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonLoadingScreen_Source_CommonLoadingScreen_Public_CommonLoadingScreenSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
