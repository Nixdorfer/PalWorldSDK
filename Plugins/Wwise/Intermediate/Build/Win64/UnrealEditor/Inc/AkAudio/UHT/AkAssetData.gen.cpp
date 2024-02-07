// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkAssetData.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkAssetData() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAssetData();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAssetData_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAssetDataSwitchContainer();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAssetDataSwitchContainer_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAssetDataSwitchContainerData();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAssetDataSwitchContainerData_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAssetDataWithMedia();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAssetDataWithMedia_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAssetPlatformData();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAssetPlatformData_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEventData();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEventData_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAuxBus_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkGroupValue_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkMediaAsset_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkTrigger_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void UAkAssetData::StaticRegisterNativesUAkAssetData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkAssetData);
	UClass* Z_Construct_UClass_UAkAssetData_NoRegister()
	{
		return UAkAssetData::StaticClass();
	}
	struct Z_Construct_UClass_UAkAssetData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedHash_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_CachedHash;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BankLanguage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BankLanguage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkAssetData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAssetData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AkAssetData.h" },
		{ "ModuleRelativePath", "Classes/AkAssetData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAssetData_Statics::NewProp_CachedHash_MetaData[] = {
		{ "Category", "UAkAssetData" },
		{ "ModuleRelativePath", "Classes/AkAssetData.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UAkAssetData_Statics::NewProp_CachedHash = { "CachedHash", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkAssetData, CachedHash), METADATA_PARAMS(Z_Construct_UClass_UAkAssetData_Statics::NewProp_CachedHash_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetData_Statics::NewProp_CachedHash_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAssetData_Statics::NewProp_BankLanguage_MetaData[] = {
		{ "Category", "UAkAssetData" },
		{ "ModuleRelativePath", "Classes/AkAssetData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAkAssetData_Statics::NewProp_BankLanguage = { "BankLanguage", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkAssetData, BankLanguage), METADATA_PARAMS(Z_Construct_UClass_UAkAssetData_Statics::NewProp_BankLanguage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetData_Statics::NewProp_BankLanguage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkAssetData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAssetData_Statics::NewProp_CachedHash,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAssetData_Statics::NewProp_BankLanguage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkAssetData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkAssetData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkAssetData_Statics::ClassParams = {
		&UAkAssetData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAkAssetData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkAssetData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkAssetData()
	{
		if (!Z_Registration_Info_UClass_UAkAssetData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkAssetData.OuterSingleton, Z_Construct_UClass_UAkAssetData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkAssetData.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkAssetData>()
	{
		return UAkAssetData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkAssetData);
	UAkAssetData::~UAkAssetData() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAkAssetData)
	void UAkAssetDataWithMedia::StaticRegisterNativesUAkAssetDataWithMedia()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkAssetDataWithMedia);
	UClass* Z_Construct_UClass_UAkAssetDataWithMedia_NoRegister()
	{
		return UAkAssetDataWithMedia::StaticClass();
	}
	struct Z_Construct_UClass_UAkAssetDataWithMedia_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MediaList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MediaList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkAssetDataWithMedia_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkAssetData,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAssetDataWithMedia_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AkAssetData.h" },
		{ "ModuleRelativePath", "Classes/AkAssetData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkAssetDataWithMedia_Statics::NewProp_MediaList_Inner = { "MediaList", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAkMediaAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAssetDataWithMedia_Statics::NewProp_MediaList_MetaData[] = {
		{ "Category", "UAkAssetData" },
		{ "ModuleRelativePath", "Classes/AkAssetData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAkAssetDataWithMedia_Statics::NewProp_MediaList = { "MediaList", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkAssetDataWithMedia, MediaList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAkAssetDataWithMedia_Statics::NewProp_MediaList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetDataWithMedia_Statics::NewProp_MediaList_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkAssetDataWithMedia_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAssetDataWithMedia_Statics::NewProp_MediaList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAssetDataWithMedia_Statics::NewProp_MediaList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkAssetDataWithMedia_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkAssetDataWithMedia>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkAssetDataWithMedia_Statics::ClassParams = {
		&UAkAssetDataWithMedia::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAkAssetDataWithMedia_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetDataWithMedia_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkAssetDataWithMedia_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetDataWithMedia_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkAssetDataWithMedia()
	{
		if (!Z_Registration_Info_UClass_UAkAssetDataWithMedia.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkAssetDataWithMedia.OuterSingleton, Z_Construct_UClass_UAkAssetDataWithMedia_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkAssetDataWithMedia.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkAssetDataWithMedia>()
	{
		return UAkAssetDataWithMedia::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkAssetDataWithMedia);
	UAkAssetDataWithMedia::~UAkAssetDataWithMedia() {}
	void UAkAssetPlatformData::StaticRegisterNativesUAkAssetPlatformData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkAssetPlatformData);
	UClass* Z_Construct_UClass_UAkAssetPlatformData_NoRegister()
	{
		return UAkAssetPlatformData::StaticClass();
	}
	struct Z_Construct_UClass_UAkAssetPlatformData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetDataPerPlatform_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetDataPerPlatform_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetDataPerPlatform_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_AssetDataPerPlatform;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentAssetData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentAssetData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkAssetPlatformData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAssetPlatformData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AkAssetData.h" },
		{ "ModuleRelativePath", "Classes/AkAssetData.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkAssetPlatformData_Statics::NewProp_AssetDataPerPlatform_ValueProp = { "AssetDataPerPlatform", nullptr, (EPropertyFlags)0x0000000800020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UAkAssetData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAkAssetPlatformData_Statics::NewProp_AssetDataPerPlatform_Key_KeyProp = { "AssetDataPerPlatform_Key", nullptr, (EPropertyFlags)0x0000000800020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAssetPlatformData_Statics::NewProp_AssetDataPerPlatform_MetaData[] = {
		{ "Category", "UAkAssetData" },
		{ "ModuleRelativePath", "Classes/AkAssetData.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAkAssetPlatformData_Statics::NewProp_AssetDataPerPlatform = { "AssetDataPerPlatform", nullptr, (EPropertyFlags)0x0010000800020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkAssetPlatformData, AssetDataPerPlatform), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAkAssetPlatformData_Statics::NewProp_AssetDataPerPlatform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetPlatformData_Statics::NewProp_AssetDataPerPlatform_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAssetPlatformData_Statics::NewProp_CurrentAssetData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkAssetData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkAssetPlatformData_Statics::NewProp_CurrentAssetData = { "CurrentAssetData", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkAssetPlatformData, CurrentAssetData), Z_Construct_UClass_UAkAssetData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAkAssetPlatformData_Statics::NewProp_CurrentAssetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetPlatformData_Statics::NewProp_CurrentAssetData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkAssetPlatformData_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAssetPlatformData_Statics::NewProp_AssetDataPerPlatform_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAssetPlatformData_Statics::NewProp_AssetDataPerPlatform_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAssetPlatformData_Statics::NewProp_AssetDataPerPlatform,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAssetPlatformData_Statics::NewProp_CurrentAssetData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkAssetPlatformData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkAssetPlatformData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkAssetPlatformData_Statics::ClassParams = {
		&UAkAssetPlatformData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAkAssetPlatformData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetPlatformData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkAssetPlatformData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetPlatformData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkAssetPlatformData()
	{
		if (!Z_Registration_Info_UClass_UAkAssetPlatformData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkAssetPlatformData.OuterSingleton, Z_Construct_UClass_UAkAssetPlatformData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkAssetPlatformData.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkAssetPlatformData>()
	{
		return UAkAssetPlatformData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkAssetPlatformData);
	UAkAssetPlatformData::~UAkAssetPlatformData() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAkAssetPlatformData)
	void UAkAssetDataSwitchContainerData::StaticRegisterNativesUAkAssetDataSwitchContainerData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkAssetDataSwitchContainerData);
	UClass* Z_Construct_UClass_UAkAssetDataSwitchContainerData_NoRegister()
	{
		return UAkAssetDataSwitchContainerData::StaticClass();
	}
	struct Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupValue_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_GroupValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultGroupValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultGroupValue;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MediaList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MediaList;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Children_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Children_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Children;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AkAssetData.h" },
		{ "ModuleRelativePath", "Classes/AkAssetData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::NewProp_GroupValue_MetaData[] = {
		{ "Category", "AkAudioEventData" },
		{ "ModuleRelativePath", "Classes/AkAssetData.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::NewProp_GroupValue = { "GroupValue", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkAssetDataSwitchContainerData, GroupValue), Z_Construct_UClass_UAkGroupValue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::NewProp_GroupValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::NewProp_GroupValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::NewProp_DefaultGroupValue_MetaData[] = {
		{ "Category", "AkAudioEventData" },
		{ "ModuleRelativePath", "Classes/AkAssetData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::NewProp_DefaultGroupValue = { "DefaultGroupValue", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkAssetDataSwitchContainerData, DefaultGroupValue), Z_Construct_UClass_UAkGroupValue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::NewProp_DefaultGroupValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::NewProp_DefaultGroupValue_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::NewProp_MediaList_Inner = { "MediaList", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAkMediaAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::NewProp_MediaList_MetaData[] = {
		{ "Category", "AkAudioEventData" },
		{ "ModuleRelativePath", "Classes/AkAssetData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::NewProp_MediaList = { "MediaList", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkAssetDataSwitchContainerData, MediaList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::NewProp_MediaList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::NewProp_MediaList_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::NewProp_Children_Inner = { "Children", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAkAssetDataSwitchContainerData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::NewProp_Children_MetaData[] = {
		{ "Category", "AkAudioEventData" },
		{ "ModuleRelativePath", "Classes/AkAssetData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::NewProp_Children = { "Children", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkAssetDataSwitchContainerData, Children), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::NewProp_Children_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::NewProp_Children_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::NewProp_GroupValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::NewProp_DefaultGroupValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::NewProp_MediaList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::NewProp_MediaList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::NewProp_Children_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::NewProp_Children,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkAssetDataSwitchContainerData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::ClassParams = {
		&UAkAssetDataSwitchContainerData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkAssetDataSwitchContainerData()
	{
		if (!Z_Registration_Info_UClass_UAkAssetDataSwitchContainerData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkAssetDataSwitchContainerData.OuterSingleton, Z_Construct_UClass_UAkAssetDataSwitchContainerData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkAssetDataSwitchContainerData.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkAssetDataSwitchContainerData>()
	{
		return UAkAssetDataSwitchContainerData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkAssetDataSwitchContainerData);
	UAkAssetDataSwitchContainerData::~UAkAssetDataSwitchContainerData() {}
	void UAkAssetDataSwitchContainer::StaticRegisterNativesUAkAssetDataSwitchContainer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkAssetDataSwitchContainer);
	UClass* Z_Construct_UClass_UAkAssetDataSwitchContainer_NoRegister()
	{
		return UAkAssetDataSwitchContainer::StaticClass();
	}
	struct Z_Construct_UClass_UAkAssetDataSwitchContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SwitchContainers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SwitchContainers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SwitchContainers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultGroupValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultGroupValue;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetPlatform_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetPlatform;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkAssetDataSwitchContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkAssetDataWithMedia,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAssetDataSwitchContainer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AkAssetData.h" },
		{ "ModuleRelativePath", "Classes/AkAssetData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkAssetDataSwitchContainer_Statics::NewProp_SwitchContainers_Inner = { "SwitchContainers", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAkAssetDataSwitchContainerData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAssetDataSwitchContainer_Statics::NewProp_SwitchContainers_MetaData[] = {
		{ "Category", "SwitchContainerData" },
		{ "ModuleRelativePath", "Classes/AkAssetData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAkAssetDataSwitchContainer_Statics::NewProp_SwitchContainers = { "SwitchContainers", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkAssetDataSwitchContainer, SwitchContainers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAkAssetDataSwitchContainer_Statics::NewProp_SwitchContainers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetDataSwitchContainer_Statics::NewProp_SwitchContainers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAssetDataSwitchContainer_Statics::NewProp_DefaultGroupValue_MetaData[] = {
		{ "Category", "SwitchContainerData" },
		{ "ModuleRelativePath", "Classes/AkAssetData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkAssetDataSwitchContainer_Statics::NewProp_DefaultGroupValue = { "DefaultGroupValue", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkAssetDataSwitchContainer, DefaultGroupValue), Z_Construct_UClass_UAkGroupValue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAkAssetDataSwitchContainer_Statics::NewProp_DefaultGroupValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetDataSwitchContainer_Statics::NewProp_DefaultGroupValue_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAssetDataSwitchContainer_Statics::NewProp_AssetPlatform_MetaData[] = {
		{ "Category", "UAkAssetData" },
		{ "ModuleRelativePath", "Classes/AkAssetData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAkAssetDataSwitchContainer_Statics::NewProp_AssetPlatform = { "AssetPlatform", nullptr, (EPropertyFlags)0x0010000800020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkAssetDataSwitchContainer, AssetPlatform), METADATA_PARAMS(Z_Construct_UClass_UAkAssetDataSwitchContainer_Statics::NewProp_AssetPlatform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetDataSwitchContainer_Statics::NewProp_AssetPlatform_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkAssetDataSwitchContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAssetDataSwitchContainer_Statics::NewProp_SwitchContainers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAssetDataSwitchContainer_Statics::NewProp_SwitchContainers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAssetDataSwitchContainer_Statics::NewProp_DefaultGroupValue,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAssetDataSwitchContainer_Statics::NewProp_AssetPlatform,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkAssetDataSwitchContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkAssetDataSwitchContainer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkAssetDataSwitchContainer_Statics::ClassParams = {
		&UAkAssetDataSwitchContainer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAkAssetDataSwitchContainer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetDataSwitchContainer_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkAssetDataSwitchContainer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetDataSwitchContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkAssetDataSwitchContainer()
	{
		if (!Z_Registration_Info_UClass_UAkAssetDataSwitchContainer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkAssetDataSwitchContainer.OuterSingleton, Z_Construct_UClass_UAkAssetDataSwitchContainer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkAssetDataSwitchContainer.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkAssetDataSwitchContainer>()
	{
		return UAkAssetDataSwitchContainer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkAssetDataSwitchContainer);
	UAkAssetDataSwitchContainer::~UAkAssetDataSwitchContainer() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAkAssetDataSwitchContainer)
	void UAkAudioEventData::StaticRegisterNativesUAkAudioEventData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkAudioEventData);
	UClass* Z_Construct_UClass_UAkAudioEventData_NoRegister()
	{
		return UAkAudioEventData::StaticClass();
	}
	struct Z_Construct_UClass_UAkAudioEventData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxAttenuationRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAttenuationRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsInfinite_MetaData[];
#endif
		static void NewProp_IsInfinite_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsInfinite;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinimumDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximumDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumDuration;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LocalizedMedia_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_LocalizedMedia_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalizedMedia_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_LocalizedMedia;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PostedEvents_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostedEvents_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_PostedEvents;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UserDefinedSends_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserDefinedSends_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_UserDefinedSends;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PostedTriggers_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostedTriggers_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_PostedTriggers;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GroupValues_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupValues_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_GroupValues;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkAudioEventData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkAssetDataSwitchContainer,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAudioEventData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AkAssetData.h" },
		{ "ModuleRelativePath", "Classes/AkAssetData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_MaxAttenuationRadius_MetaData[] = {
		{ "Category", "AkAudioEventData" },
		{ "Comment", "/** Maximum attenuation radius for this event */" },
		{ "ModuleRelativePath", "Classes/AkAssetData.h" },
		{ "ToolTip", "Maximum attenuation radius for this event" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_MaxAttenuationRadius = { "MaxAttenuationRadius", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkAudioEventData, MaxAttenuationRadius), METADATA_PARAMS(Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_MaxAttenuationRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_MaxAttenuationRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_IsInfinite_MetaData[] = {
		{ "Category", "AkAudioEventData" },
		{ "Comment", "/** Whether this event is infinite (looping) or finite (duration parameters are valid) */" },
		{ "ModuleRelativePath", "Classes/AkAssetData.h" },
		{ "ToolTip", "Whether this event is infinite (looping) or finite (duration parameters are valid)" },
	};
#endif
	void Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_IsInfinite_SetBit(void* Obj)
	{
		((UAkAudioEventData*)Obj)->IsInfinite = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_IsInfinite = { "IsInfinite", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAkAudioEventData), &Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_IsInfinite_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_IsInfinite_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_IsInfinite_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_MinimumDuration_MetaData[] = {
		{ "Category", "AkAudioEventData" },
		{ "Comment", "/** Minimum duration */" },
		{ "ModuleRelativePath", "Classes/AkAssetData.h" },
		{ "ToolTip", "Minimum duration" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_MinimumDuration = { "MinimumDuration", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkAudioEventData, MinimumDuration), METADATA_PARAMS(Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_MinimumDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_MinimumDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_MaximumDuration_MetaData[] = {
		{ "Category", "AkAudioEventData" },
		{ "Comment", "/** Maximum duration */" },
		{ "ModuleRelativePath", "Classes/AkAssetData.h" },
		{ "ToolTip", "Maximum duration" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_MaximumDuration = { "MaximumDuration", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkAudioEventData, MaximumDuration), METADATA_PARAMS(Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_MaximumDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_MaximumDuration_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_LocalizedMedia_ValueProp = { "LocalizedMedia", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UAkAssetDataSwitchContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_LocalizedMedia_Key_KeyProp = { "LocalizedMedia_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_LocalizedMedia_MetaData[] = {
		{ "Comment", "// This map is used when the event is part of a AkAudioBank\n" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Localized media data" },
		{ "ModuleRelativePath", "Classes/AkAssetData.h" },
		{ "ToolTip", "This map is used when the event is part of a AkAudioBank" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_LocalizedMedia = { "LocalizedMedia", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkAudioEventData, LocalizedMedia_DEPRECATED), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_LocalizedMedia_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_LocalizedMedia_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_PostedEvents_ElementProp = { "PostedEvents", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_PostedEvents_MetaData[] = {
		{ "Category", "AkAudioEventData" },
		{ "ModuleRelativePath", "Classes/AkAssetData.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_PostedEvents = { "PostedEvents", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkAudioEventData, PostedEvents), METADATA_PARAMS(Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_PostedEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_PostedEvents_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_UserDefinedSends_ElementProp = { "UserDefinedSends", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAkAuxBus_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_UserDefinedSends_MetaData[] = {
		{ "Category", "AkAudioEventData" },
		{ "ModuleRelativePath", "Classes/AkAssetData.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_UserDefinedSends = { "UserDefinedSends", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkAudioEventData, UserDefinedSends), METADATA_PARAMS(Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_UserDefinedSends_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_UserDefinedSends_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_PostedTriggers_ElementProp = { "PostedTriggers", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAkTrigger_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_PostedTriggers_MetaData[] = {
		{ "Category", "AkAudioEventData" },
		{ "ModuleRelativePath", "Classes/AkAssetData.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_PostedTriggers = { "PostedTriggers", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkAudioEventData, PostedTriggers), METADATA_PARAMS(Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_PostedTriggers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_PostedTriggers_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_GroupValues_ElementProp = { "GroupValues", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAkGroupValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_GroupValues_MetaData[] = {
		{ "Category", "AkAudioEventData" },
		{ "ModuleRelativePath", "Classes/AkAssetData.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_GroupValues = { "GroupValues", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkAudioEventData, GroupValues), METADATA_PARAMS(Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_GroupValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_GroupValues_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkAudioEventData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_MaxAttenuationRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_IsInfinite,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_MinimumDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_MaximumDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_LocalizedMedia_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_LocalizedMedia_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_LocalizedMedia,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_PostedEvents_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_PostedEvents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_UserDefinedSends_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_UserDefinedSends,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_PostedTriggers_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_PostedTriggers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_GroupValues_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioEventData_Statics::NewProp_GroupValues,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkAudioEventData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkAudioEventData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkAudioEventData_Statics::ClassParams = {
		&UAkAudioEventData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAkAudioEventData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioEventData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkAudioEventData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioEventData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkAudioEventData()
	{
		if (!Z_Registration_Info_UClass_UAkAudioEventData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkAudioEventData.OuterSingleton, Z_Construct_UClass_UAkAudioEventData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkAudioEventData.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkAudioEventData>()
	{
		return UAkAudioEventData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkAudioEventData);
	UAkAudioEventData::~UAkAudioEventData() {}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkAssetData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkAssetData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAkAssetData, UAkAssetData::StaticClass, TEXT("UAkAssetData"), &Z_Registration_Info_UClass_UAkAssetData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkAssetData), 1351997821U) },
		{ Z_Construct_UClass_UAkAssetDataWithMedia, UAkAssetDataWithMedia::StaticClass, TEXT("UAkAssetDataWithMedia"), &Z_Registration_Info_UClass_UAkAssetDataWithMedia, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkAssetDataWithMedia), 563534932U) },
		{ Z_Construct_UClass_UAkAssetPlatformData, UAkAssetPlatformData::StaticClass, TEXT("UAkAssetPlatformData"), &Z_Registration_Info_UClass_UAkAssetPlatformData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkAssetPlatformData), 880251735U) },
		{ Z_Construct_UClass_UAkAssetDataSwitchContainerData, UAkAssetDataSwitchContainerData::StaticClass, TEXT("UAkAssetDataSwitchContainerData"), &Z_Registration_Info_UClass_UAkAssetDataSwitchContainerData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkAssetDataSwitchContainerData), 3102356415U) },
		{ Z_Construct_UClass_UAkAssetDataSwitchContainer, UAkAssetDataSwitchContainer::StaticClass, TEXT("UAkAssetDataSwitchContainer"), &Z_Registration_Info_UClass_UAkAssetDataSwitchContainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkAssetDataSwitchContainer), 2624856525U) },
		{ Z_Construct_UClass_UAkAudioEventData, UAkAudioEventData::StaticClass, TEXT("UAkAudioEventData"), &Z_Registration_Info_UClass_UAkAudioEventData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkAudioEventData), 4221474813U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkAssetData_h_4177842096(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkAssetData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkAssetData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
