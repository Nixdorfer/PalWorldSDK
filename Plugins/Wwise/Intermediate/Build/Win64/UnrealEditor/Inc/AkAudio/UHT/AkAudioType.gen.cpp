// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkAudioType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkAudioType() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioType();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioType_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void UAkAudioType::StaticRegisterNativesUAkAudioType()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkAudioType);
	UClass* Z_Construct_UClass_UAkAudioType_NoRegister()
	{
		return UAkAudioType::StaticClass();
	}
	struct Z_Construct_UClass_UAkAudioType_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ID;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShortID_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_ShortID;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UserData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UserData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkAudioType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAudioType_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AkAudioType.h" },
		{ "ModuleRelativePath", "Classes/AkAudioType.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAudioType_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "AkAudioType" },
		{ "ModuleRelativePath", "Classes/AkAudioType.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkAudioType_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010010800020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkAudioType, ID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UAkAudioType_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioType_Statics::NewProp_ID_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAudioType_Statics::NewProp_ShortID_MetaData[] = {
		{ "Category", "AkAudioType" },
		{ "ModuleRelativePath", "Classes/AkAudioType.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UAkAudioType_Statics::NewProp_ShortID = { "ShortID", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkAudioType, ShortID), METADATA_PARAMS(Z_Construct_UClass_UAkAudioType_Statics::NewProp_ShortID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioType_Statics::NewProp_ShortID_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkAudioType_Statics::NewProp_UserData_Inner = { "UserData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAudioType_Statics::NewProp_UserData_MetaData[] = {
		{ "Category", "AkAudioType" },
		{ "ModuleRelativePath", "Classes/AkAudioType.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAkAudioType_Statics::NewProp_UserData = { "UserData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkAudioType, UserData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAkAudioType_Statics::NewProp_UserData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioType_Statics::NewProp_UserData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkAudioType_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioType_Statics::NewProp_ID,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioType_Statics::NewProp_ShortID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioType_Statics::NewProp_UserData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioType_Statics::NewProp_UserData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkAudioType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkAudioType>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkAudioType_Statics::ClassParams = {
		&UAkAudioType::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAkAudioType_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioType_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkAudioType_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioType_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkAudioType()
	{
		if (!Z_Registration_Info_UClass_UAkAudioType.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkAudioType.OuterSingleton, Z_Construct_UClass_UAkAudioType_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkAudioType.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkAudioType>()
	{
		return UAkAudioType::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkAudioType);
	UAkAudioType::~UAkAudioType() {}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkAudioType_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkAudioType_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAkAudioType, UAkAudioType::StaticClass, TEXT("UAkAudioType"), &Z_Registration_Info_UClass_UAkAudioType, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkAudioType), 722300476U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkAudioType_h_104774214(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkAudioType_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkAudioType_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
