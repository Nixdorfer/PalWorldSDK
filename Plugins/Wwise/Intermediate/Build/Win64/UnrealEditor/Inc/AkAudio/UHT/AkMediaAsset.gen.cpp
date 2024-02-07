// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkMediaAsset.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkMediaAsset() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkExternalMediaAsset();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkExternalMediaAsset_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkLocalizedMediaAsset();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkLocalizedMediaAsset_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkMediaAsset();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkMediaAsset_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkMediaAssetData();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkMediaAssetData_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void UAkMediaAssetData::StaticRegisterNativesUAkMediaAssetData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkMediaAssetData);
	UClass* Z_Construct_UClass_UAkMediaAssetData_NoRegister()
	{
		return UAkMediaAssetData::StaticClass();
	}
	struct Z_Construct_UClass_UAkMediaAssetData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsStreamed_MetaData[];
#endif
		static void NewProp_IsStreamed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsStreamed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseDeviceMemory_MetaData[];
#endif
		static void NewProp_UseDeviceMemory_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseDeviceMemory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Language;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastWriteTime_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_LastWriteTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaContentHash_MetaData[];
#endif
		static const UECodeGen_Private::FFInt64PropertyParams NewProp_MediaContentHash;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetPlatform_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetPlatform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkMediaAssetData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkMediaAssetData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AkMediaAsset.h" },
		{ "ModuleRelativePath", "Classes/AkMediaAsset.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkMediaAssetData_Statics::NewProp_IsStreamed_MetaData[] = {
		{ "Category", "AkMediaAsset" },
		{ "ModuleRelativePath", "Classes/AkMediaAsset.h" },
	};
#endif
	void Z_Construct_UClass_UAkMediaAssetData_Statics::NewProp_IsStreamed_SetBit(void* Obj)
	{
		((UAkMediaAssetData*)Obj)->IsStreamed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkMediaAssetData_Statics::NewProp_IsStreamed = { "IsStreamed", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAkMediaAssetData), &Z_Construct_UClass_UAkMediaAssetData_Statics::NewProp_IsStreamed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkMediaAssetData_Statics::NewProp_IsStreamed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkMediaAssetData_Statics::NewProp_IsStreamed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkMediaAssetData_Statics::NewProp_UseDeviceMemory_MetaData[] = {
		{ "Category", "AkMediaAsset" },
		{ "ModuleRelativePath", "Classes/AkMediaAsset.h" },
	};
#endif
	void Z_Construct_UClass_UAkMediaAssetData_Statics::NewProp_UseDeviceMemory_SetBit(void* Obj)
	{
		((UAkMediaAssetData*)Obj)->UseDeviceMemory = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkMediaAssetData_Statics::NewProp_UseDeviceMemory = { "UseDeviceMemory", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAkMediaAssetData), &Z_Construct_UClass_UAkMediaAssetData_Statics::NewProp_UseDeviceMemory_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkMediaAssetData_Statics::NewProp_UseDeviceMemory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkMediaAssetData_Statics::NewProp_UseDeviceMemory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkMediaAssetData_Statics::NewProp_Language_MetaData[] = {
		{ "Category", "AkMediaAsset" },
		{ "ModuleRelativePath", "Classes/AkMediaAsset.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAkMediaAssetData_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkMediaAssetData, Language), METADATA_PARAMS(Z_Construct_UClass_UAkMediaAssetData_Statics::NewProp_Language_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkMediaAssetData_Statics::NewProp_Language_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkMediaAssetData_Statics::NewProp_LastWriteTime_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkMediaAsset.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UClass_UAkMediaAssetData_Statics::NewProp_LastWriteTime = { "LastWriteTime", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkMediaAssetData, LastWriteTime), METADATA_PARAMS(Z_Construct_UClass_UAkMediaAssetData_Statics::NewProp_LastWriteTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkMediaAssetData_Statics::NewProp_LastWriteTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkMediaAssetData_Statics::NewProp_MediaContentHash_MetaData[] = {
		{ "Category", "AkMediaAsset" },
		{ "ModuleRelativePath", "Classes/AkMediaAsset.h" },
	};
#endif
	const UECodeGen_Private::FFInt64PropertyParams Z_Construct_UClass_UAkMediaAssetData_Statics::NewProp_MediaContentHash = { "MediaContentHash", nullptr, (EPropertyFlags)0x0010000800020001, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkMediaAssetData, MediaContentHash), METADATA_PARAMS(Z_Construct_UClass_UAkMediaAssetData_Statics::NewProp_MediaContentHash_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkMediaAssetData_Statics::NewProp_MediaContentHash_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkMediaAssetData_Statics::NewProp_AssetPlatform_MetaData[] = {
		{ "Category", "AkMediaAsset" },
		{ "ModuleRelativePath", "Classes/AkMediaAsset.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAkMediaAssetData_Statics::NewProp_AssetPlatform = { "AssetPlatform", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkMediaAssetData, AssetPlatform), METADATA_PARAMS(Z_Construct_UClass_UAkMediaAssetData_Statics::NewProp_AssetPlatform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkMediaAssetData_Statics::NewProp_AssetPlatform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkMediaAssetData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkMediaAssetData_Statics::NewProp_IsStreamed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkMediaAssetData_Statics::NewProp_UseDeviceMemory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkMediaAssetData_Statics::NewProp_Language,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkMediaAssetData_Statics::NewProp_LastWriteTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkMediaAssetData_Statics::NewProp_MediaContentHash,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkMediaAssetData_Statics::NewProp_AssetPlatform,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkMediaAssetData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkMediaAssetData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkMediaAssetData_Statics::ClassParams = {
		&UAkMediaAssetData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAkMediaAssetData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkMediaAssetData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkMediaAssetData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkMediaAssetData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkMediaAssetData()
	{
		if (!Z_Registration_Info_UClass_UAkMediaAssetData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkMediaAssetData.OuterSingleton, Z_Construct_UClass_UAkMediaAssetData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkMediaAssetData.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkMediaAssetData>()
	{
		return UAkMediaAssetData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkMediaAssetData);
	UAkMediaAssetData::~UAkMediaAssetData() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAkMediaAssetData)
	void UAkMediaAsset::StaticRegisterNativesUAkMediaAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkMediaAsset);
	UClass* Z_Construct_UClass_UAkMediaAsset_NoRegister()
	{
		return UAkMediaAsset::StaticClass();
	}
	struct Z_Construct_UClass_UAkMediaAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Id;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MediaAssetDataPerPlatform_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_MediaAssetDataPerPlatform_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaAssetDataPerPlatform_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_MediaAssetDataPerPlatform;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MediaName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoLoad_MetaData[];
#endif
		static void NewProp_AutoLoad_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AutoLoad;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UserData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UserData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Language;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMediaAssetData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentMediaAssetData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkMediaAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkMediaAsset_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AkMediaAsset.h" },
		{ "ModuleRelativePath", "Classes/AkMediaAsset.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "AkMediaAsset" },
		{ "ModuleRelativePath", "Classes/AkMediaAsset.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkMediaAsset, Id), METADATA_PARAMS(Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_Id_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_MediaAssetDataPerPlatform_ValueProp = { "MediaAssetDataPerPlatform", nullptr, (EPropertyFlags)0x0000000800020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UAkMediaAssetData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_MediaAssetDataPerPlatform_Key_KeyProp = { "MediaAssetDataPerPlatform_Key", nullptr, (EPropertyFlags)0x0000000800020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_MediaAssetDataPerPlatform_MetaData[] = {
		{ "Category", "AkMediaAsset" },
		{ "ModuleRelativePath", "Classes/AkMediaAsset.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_MediaAssetDataPerPlatform = { "MediaAssetDataPerPlatform", nullptr, (EPropertyFlags)0x0010000800020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkMediaAsset, MediaAssetDataPerPlatform), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_MediaAssetDataPerPlatform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_MediaAssetDataPerPlatform_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_MediaName_MetaData[] = {
		{ "Category", "AkMediaAsset" },
		{ "ModuleRelativePath", "Classes/AkMediaAsset.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_MediaName = { "MediaName", nullptr, (EPropertyFlags)0x0010010000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkMediaAsset, MediaName), METADATA_PARAMS(Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_MediaName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_MediaName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_AutoLoad_MetaData[] = {
		{ "Category", "AkMediaAsset" },
		{ "ModuleRelativePath", "Classes/AkMediaAsset.h" },
	};
#endif
	void Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_AutoLoad_SetBit(void* Obj)
	{
		((UAkMediaAsset*)Obj)->AutoLoad = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_AutoLoad = { "AutoLoad", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAkMediaAsset), &Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_AutoLoad_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_AutoLoad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_AutoLoad_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_UserData_Inner = { "UserData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_UserData_MetaData[] = {
		{ "Category", "AkMediaAsset" },
		{ "ModuleRelativePath", "Classes/AkMediaAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_UserData = { "UserData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkMediaAsset, UserData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_UserData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_UserData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_Language_MetaData[] = {
		{ "Category", "AkMediaAsset" },
		{ "ModuleRelativePath", "Classes/AkMediaAsset.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkMediaAsset, Language), METADATA_PARAMS(Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_Language_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_Language_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_CurrentMediaAssetData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkMediaAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_CurrentMediaAssetData = { "CurrentMediaAssetData", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkMediaAsset, CurrentMediaAssetData), Z_Construct_UClass_UAkMediaAssetData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_CurrentMediaAssetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_CurrentMediaAssetData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkMediaAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_Id,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_MediaAssetDataPerPlatform_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_MediaAssetDataPerPlatform_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_MediaAssetDataPerPlatform,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_MediaName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_AutoLoad,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_UserData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_UserData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_Language,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkMediaAsset_Statics::NewProp_CurrentMediaAssetData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkMediaAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkMediaAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkMediaAsset_Statics::ClassParams = {
		&UAkMediaAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAkMediaAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkMediaAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkMediaAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkMediaAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkMediaAsset()
	{
		if (!Z_Registration_Info_UClass_UAkMediaAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkMediaAsset.OuterSingleton, Z_Construct_UClass_UAkMediaAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkMediaAsset.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkMediaAsset>()
	{
		return UAkMediaAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkMediaAsset);
	UAkMediaAsset::~UAkMediaAsset() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAkMediaAsset)
	void UAkLocalizedMediaAsset::StaticRegisterNativesUAkLocalizedMediaAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkLocalizedMediaAsset);
	UClass* Z_Construct_UClass_UAkLocalizedMediaAsset_NoRegister()
	{
		return UAkLocalizedMediaAsset::StaticClass();
	}
	struct Z_Construct_UClass_UAkLocalizedMediaAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkLocalizedMediaAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkMediaAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkLocalizedMediaAsset_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AkMediaAsset.h" },
		{ "ModuleRelativePath", "Classes/AkMediaAsset.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkLocalizedMediaAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkLocalizedMediaAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkLocalizedMediaAsset_Statics::ClassParams = {
		&UAkLocalizedMediaAsset::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAkLocalizedMediaAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkLocalizedMediaAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkLocalizedMediaAsset()
	{
		if (!Z_Registration_Info_UClass_UAkLocalizedMediaAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkLocalizedMediaAsset.OuterSingleton, Z_Construct_UClass_UAkLocalizedMediaAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkLocalizedMediaAsset.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkLocalizedMediaAsset>()
	{
		return UAkLocalizedMediaAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkLocalizedMediaAsset);
	UAkLocalizedMediaAsset::~UAkLocalizedMediaAsset() {}
	void UAkExternalMediaAsset::StaticRegisterNativesUAkExternalMediaAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkExternalMediaAsset);
	UClass* Z_Construct_UClass_UAkExternalMediaAsset_NoRegister()
	{
		return UAkExternalMediaAsset::StaticClass();
	}
	struct Z_Construct_UClass_UAkExternalMediaAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkExternalMediaAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkMediaAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkExternalMediaAsset_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AkMediaAsset.h" },
		{ "ModuleRelativePath", "Classes/AkMediaAsset.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkExternalMediaAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkExternalMediaAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkExternalMediaAsset_Statics::ClassParams = {
		&UAkExternalMediaAsset::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAkExternalMediaAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkExternalMediaAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkExternalMediaAsset()
	{
		if (!Z_Registration_Info_UClass_UAkExternalMediaAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkExternalMediaAsset.OuterSingleton, Z_Construct_UClass_UAkExternalMediaAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkExternalMediaAsset.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkExternalMediaAsset>()
	{
		return UAkExternalMediaAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkExternalMediaAsset);
	UAkExternalMediaAsset::~UAkExternalMediaAsset() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAkExternalMediaAsset)
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkMediaAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkMediaAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAkMediaAssetData, UAkMediaAssetData::StaticClass, TEXT("UAkMediaAssetData"), &Z_Registration_Info_UClass_UAkMediaAssetData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkMediaAssetData), 1545893783U) },
		{ Z_Construct_UClass_UAkMediaAsset, UAkMediaAsset::StaticClass, TEXT("UAkMediaAsset"), &Z_Registration_Info_UClass_UAkMediaAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkMediaAsset), 540534334U) },
		{ Z_Construct_UClass_UAkLocalizedMediaAsset, UAkLocalizedMediaAsset::StaticClass, TEXT("UAkLocalizedMediaAsset"), &Z_Registration_Info_UClass_UAkLocalizedMediaAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkLocalizedMediaAsset), 1157601621U) },
		{ Z_Construct_UClass_UAkExternalMediaAsset, UAkExternalMediaAsset::StaticClass, TEXT("UAkExternalMediaAsset"), &Z_Registration_Info_UClass_UAkExternalMediaAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkExternalMediaAsset), 2796547447U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkMediaAsset_h_339740237(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkMediaAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkMediaAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
