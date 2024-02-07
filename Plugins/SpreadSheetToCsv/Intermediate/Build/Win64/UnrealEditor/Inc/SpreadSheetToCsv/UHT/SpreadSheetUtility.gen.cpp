// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpreadSheetToCsv/Public/SpreadSheetUtility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpreadSheetUtility() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SPREADSHEETTOCSV_API UClass* Z_Construct_UClass_USpreadSheetUtility();
	SPREADSHEETTOCSV_API UClass* Z_Construct_UClass_USpreadSheetUtility_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SpreadSheetToCsv();
// End Cross Module References
	void USpreadSheetUtility::StaticRegisterNativesUSpreadSheetUtility()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpreadSheetUtility);
	UClass* Z_Construct_UClass_USpreadSheetUtility_NoRegister()
	{
		return USpreadSheetUtility::StaticClass();
	}
	struct Z_Construct_UClass_USpreadSheetUtility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpreadSheetUtility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SpreadSheetToCsv,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpreadSheetUtility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SpreadSheetUtility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SpreadSheetUtility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpreadSheetUtility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpreadSheetUtility>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USpreadSheetUtility_Statics::ClassParams = {
		&USpreadSheetUtility::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USpreadSheetUtility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpreadSheetUtility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpreadSheetUtility()
	{
		if (!Z_Registration_Info_UClass_USpreadSheetUtility.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpreadSheetUtility.OuterSingleton, Z_Construct_UClass_USpreadSheetUtility_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USpreadSheetUtility.OuterSingleton;
	}
	template<> SPREADSHEETTOCSV_API UClass* StaticClass<USpreadSheetUtility>()
	{
		return USpreadSheetUtility::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpreadSheetUtility);
	USpreadSheetUtility::~USpreadSheetUtility() {}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_SpreadSheetToCsv_Source_SpreadSheetToCsv_Public_SpreadSheetUtility_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_SpreadSheetToCsv_Source_SpreadSheetToCsv_Public_SpreadSheetUtility_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USpreadSheetUtility, USpreadSheetUtility::StaticClass, TEXT("USpreadSheetUtility"), &Z_Registration_Info_UClass_USpreadSheetUtility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpreadSheetUtility), 707659978U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_SpreadSheetToCsv_Source_SpreadSheetToCsv_Public_SpreadSheetUtility_h_71724624(TEXT("/Script/SpreadSheetToCsv"),
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_SpreadSheetToCsv_Source_SpreadSheetToCsv_Public_SpreadSheetUtility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_SpreadSheetToCsv_Source_SpreadSheetToCsv_Public_SpreadSheetUtility_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
