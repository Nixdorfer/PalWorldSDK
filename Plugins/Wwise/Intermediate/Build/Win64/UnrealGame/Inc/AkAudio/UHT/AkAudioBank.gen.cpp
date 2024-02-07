// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkAudioBank.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkAudioBank() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAssetBase();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAssetPlatformData_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioBank();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioBank_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void UAkAudioBank::StaticRegisterNativesUAkAudioBank()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkAudioBank);
	UClass* Z_Construct_UClass_UAkAudioBank_NoRegister()
	{
		return UAkAudioBank::StaticClass();
	}
	struct Z_Construct_UClass_UAkAudioBank_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoLoad_MetaData[];
#endif
		static void NewProp_AutoLoad_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AutoLoad;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LocalizedPlatformAssetDataMap_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_LocalizedPlatformAssetDataMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalizedPlatformAssetDataMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_LocalizedPlatformAssetDataMap;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_LinkedAkEvents_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinkedAkEvents_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_LinkedAkEvents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLocalizedPlatformAssetData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentLocalizedPlatformAssetData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkAudioBank_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkAssetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAudioBank_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "IncludePath", "AkAudioBank.h" },
		{ "ModuleRelativePath", "Classes/AkAudioBank.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAudioBank_Statics::NewProp_AutoLoad_MetaData[] = {
		{ "Category", "Behaviour" },
		{ "Comment", "// Only applicable when you don't use the new Event-Based Packaging workflow\n" },
		{ "ModuleRelativePath", "Classes/AkAudioBank.h" },
		{ "ToolTip", "Only applicable when you don't use the new Event-Based Packaging workflow" },
	};
#endif
	void Z_Construct_UClass_UAkAudioBank_Statics::NewProp_AutoLoad_SetBit(void* Obj)
	{
		((UAkAudioBank*)Obj)->AutoLoad = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkAudioBank_Statics::NewProp_AutoLoad = { "AutoLoad", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAkAudioBank), &Z_Construct_UClass_UAkAudioBank_Statics::NewProp_AutoLoad_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkAudioBank_Statics::NewProp_AutoLoad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioBank_Statics::NewProp_AutoLoad_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkAudioBank_Statics::NewProp_LocalizedPlatformAssetDataMap_ValueProp = { "LocalizedPlatformAssetDataMap", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UAkAssetPlatformData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAkAudioBank_Statics::NewProp_LocalizedPlatformAssetDataMap_Key_KeyProp = { "LocalizedPlatformAssetDataMap_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAudioBank_Statics::NewProp_LocalizedPlatformAssetDataMap_MetaData[] = {
		{ "Category", "AkAudioBank" },
		{ "ModuleRelativePath", "Classes/AkAudioBank.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAkAudioBank_Statics::NewProp_LocalizedPlatformAssetDataMap = { "LocalizedPlatformAssetDataMap", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkAudioBank, LocalizedPlatformAssetDataMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAkAudioBank_Statics::NewProp_LocalizedPlatformAssetDataMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioBank_Statics::NewProp_LocalizedPlatformAssetDataMap_MetaData)) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UAkAudioBank_Statics::NewProp_LinkedAkEvents_ElementProp = { "LinkedAkEvents", nullptr, (EPropertyFlags)0x0004000000020001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAudioBank_Statics::NewProp_LinkedAkEvents_MetaData[] = {
		{ "Category", "AkAudioBank" },
		{ "ModuleRelativePath", "Classes/AkAudioBank.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UAkAudioBank_Statics::NewProp_LinkedAkEvents = { "LinkedAkEvents", nullptr, (EPropertyFlags)0x0014000000022015, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkAudioBank, LinkedAkEvents), METADATA_PARAMS(Z_Construct_UClass_UAkAudioBank_Statics::NewProp_LinkedAkEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioBank_Statics::NewProp_LinkedAkEvents_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAudioBank_Statics::NewProp_CurrentLocalizedPlatformAssetData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkAudioBank.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkAudioBank_Statics::NewProp_CurrentLocalizedPlatformAssetData = { "CurrentLocalizedPlatformAssetData", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkAudioBank, CurrentLocalizedPlatformAssetData), Z_Construct_UClass_UAkAssetPlatformData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAkAudioBank_Statics::NewProp_CurrentLocalizedPlatformAssetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioBank_Statics::NewProp_CurrentLocalizedPlatformAssetData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkAudioBank_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioBank_Statics::NewProp_AutoLoad,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioBank_Statics::NewProp_LocalizedPlatformAssetDataMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioBank_Statics::NewProp_LocalizedPlatformAssetDataMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioBank_Statics::NewProp_LocalizedPlatformAssetDataMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioBank_Statics::NewProp_LinkedAkEvents_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioBank_Statics::NewProp_LinkedAkEvents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioBank_Statics::NewProp_CurrentLocalizedPlatformAssetData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkAudioBank_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkAudioBank>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkAudioBank_Statics::ClassParams = {
		&UAkAudioBank::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAkAudioBank_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioBank_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkAudioBank_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioBank_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkAudioBank()
	{
		if (!Z_Registration_Info_UClass_UAkAudioBank.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkAudioBank.OuterSingleton, Z_Construct_UClass_UAkAudioBank_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkAudioBank.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkAudioBank>()
	{
		return UAkAudioBank::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkAudioBank);
	UAkAudioBank::~UAkAudioBank() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAkAudioBank)
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkAudioBank_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkAudioBank_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAkAudioBank, UAkAudioBank::StaticClass, TEXT("UAkAudioBank"), &Z_Registration_Info_UClass_UAkAudioBank, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkAudioBank), 1493202624U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkAudioBank_h_2238321952(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkAudioBank_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkAudioBank_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
