// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonGame/Public/CommonGameDialog.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonGameDialog() {}
// Cross Module References
	COMMONGAME_API UClass* Z_Construct_UClass_UCommonGameDialog();
	COMMONGAME_API UClass* Z_Construct_UClass_UCommonGameDialog_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidget();
	UPackage* Z_Construct_UPackage__Script_CommonGame();
// End Cross Module References
	void UCommonGameDialog::StaticRegisterNativesUCommonGameDialog()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonGameDialog);
	UClass* Z_Construct_UClass_UCommonGameDialog_NoRegister()
	{
		return UCommonGameDialog::StaticClass();
	}
	struct Z_Construct_UClass_UCommonGameDialog_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonGameDialog_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonActivatableWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonGameDialog_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CommonGameDialog.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CommonGameDialog.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonGameDialog_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonGameDialog>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonGameDialog_Statics::ClassParams = {
		&UCommonGameDialog::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCommonGameDialog_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonGameDialog_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonGameDialog()
	{
		if (!Z_Registration_Info_UClass_UCommonGameDialog.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonGameDialog.OuterSingleton, Z_Construct_UClass_UCommonGameDialog_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonGameDialog.OuterSingleton;
	}
	template<> COMMONGAME_API UClass* StaticClass<UCommonGameDialog>()
	{
		return UCommonGameDialog::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonGameDialog);
	UCommonGameDialog::~UCommonGameDialog() {}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_CommonGameDialog_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_CommonGameDialog_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCommonGameDialog, UCommonGameDialog::StaticClass, TEXT("UCommonGameDialog"), &Z_Registration_Info_UClass_UCommonGameDialog, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonGameDialog), 3017288275U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_CommonGameDialog_h_187803521(TEXT("/Script/CommonGame"),
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_CommonGameDialog_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_CommonGameDialog_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
