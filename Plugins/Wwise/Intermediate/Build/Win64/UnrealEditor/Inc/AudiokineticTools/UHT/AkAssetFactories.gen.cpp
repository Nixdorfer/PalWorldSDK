// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudiokineticTools/Private/Factories/AkAssetFactories.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkAssetFactories() {}
// Cross Module References
	AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkAcousticTextureFactory();
	AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkAcousticTextureFactory_NoRegister();
	AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkAssetFactory();
	AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkAssetFactory_NoRegister();
	AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkAudioBankFactory();
	AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkAudioBankFactory_NoRegister();
	AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkAudioEventFactory();
	AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkAudioEventFactory_NoRegister();
	AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkAuxBusFactory();
	AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkAuxBusFactory_NoRegister();
	AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkExternalSourceFactory();
	AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkExternalSourceFactory_NoRegister();
	AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkRtpcFactory();
	AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkRtpcFactory_NoRegister();
	AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkStateValueFactory();
	AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkStateValueFactory_NoRegister();
	AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkSwitchValueFactory();
	AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkSwitchValueFactory_NoRegister();
	AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkTriggerFactory();
	AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkTriggerFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_AudiokineticTools();
// End Cross Module References
	void UAkAssetFactory::StaticRegisterNativesUAkAssetFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkAssetFactory);
	UClass* Z_Construct_UClass_UAkAssetFactory_NoRegister()
	{
		return UAkAssetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UAkAssetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkAssetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_AudiokineticTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAssetFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/AkAssetFactories.h" },
		{ "ModuleRelativePath", "Private/Factories/AkAssetFactories.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkAssetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkAssetFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkAssetFactory_Statics::ClassParams = {
		&UAkAssetFactory::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkAssetFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAssetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkAssetFactory()
	{
		if (!Z_Registration_Info_UClass_UAkAssetFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkAssetFactory.OuterSingleton, Z_Construct_UClass_UAkAssetFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkAssetFactory.OuterSingleton;
	}
	template<> AUDIOKINETICTOOLS_API UClass* StaticClass<UAkAssetFactory>()
	{
		return UAkAssetFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkAssetFactory);
	UAkAssetFactory::~UAkAssetFactory() {}
	void UAkAcousticTextureFactory::StaticRegisterNativesUAkAcousticTextureFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkAcousticTextureFactory);
	UClass* Z_Construct_UClass_UAkAcousticTextureFactory_NoRegister()
	{
		return UAkAcousticTextureFactory::StaticClass();
	}
	struct Z_Construct_UClass_UAkAcousticTextureFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkAcousticTextureFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkAssetFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_AudiokineticTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAcousticTextureFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Factories/AkAssetFactories.h" },
		{ "ModuleRelativePath", "Private/Factories/AkAssetFactories.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkAcousticTextureFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkAcousticTextureFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkAcousticTextureFactory_Statics::ClassParams = {
		&UAkAcousticTextureFactory::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkAcousticTextureFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAcousticTextureFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkAcousticTextureFactory()
	{
		if (!Z_Registration_Info_UClass_UAkAcousticTextureFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkAcousticTextureFactory.OuterSingleton, Z_Construct_UClass_UAkAcousticTextureFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkAcousticTextureFactory.OuterSingleton;
	}
	template<> AUDIOKINETICTOOLS_API UClass* StaticClass<UAkAcousticTextureFactory>()
	{
		return UAkAcousticTextureFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkAcousticTextureFactory);
	UAkAcousticTextureFactory::~UAkAcousticTextureFactory() {}
	void UAkAudioBankFactory::StaticRegisterNativesUAkAudioBankFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkAudioBankFactory);
	UClass* Z_Construct_UClass_UAkAudioBankFactory_NoRegister()
	{
		return UAkAudioBankFactory::StaticClass();
	}
	struct Z_Construct_UClass_UAkAudioBankFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkAudioBankFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkAssetFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_AudiokineticTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAudioBankFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Factories/AkAssetFactories.h" },
		{ "ModuleRelativePath", "Private/Factories/AkAssetFactories.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkAudioBankFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkAudioBankFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkAudioBankFactory_Statics::ClassParams = {
		&UAkAudioBankFactory::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkAudioBankFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioBankFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkAudioBankFactory()
	{
		if (!Z_Registration_Info_UClass_UAkAudioBankFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkAudioBankFactory.OuterSingleton, Z_Construct_UClass_UAkAudioBankFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkAudioBankFactory.OuterSingleton;
	}
	template<> AUDIOKINETICTOOLS_API UClass* StaticClass<UAkAudioBankFactory>()
	{
		return UAkAudioBankFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkAudioBankFactory);
	UAkAudioBankFactory::~UAkAudioBankFactory() {}
	void UAkAudioEventFactory::StaticRegisterNativesUAkAudioEventFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkAudioEventFactory);
	UClass* Z_Construct_UClass_UAkAudioEventFactory_NoRegister()
	{
		return UAkAudioEventFactory::StaticClass();
	}
	struct Z_Construct_UClass_UAkAudioEventFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkAudioEventFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkAssetFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_AudiokineticTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAudioEventFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Factories/AkAssetFactories.h" },
		{ "ModuleRelativePath", "Private/Factories/AkAssetFactories.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkAudioEventFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkAudioEventFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkAudioEventFactory_Statics::ClassParams = {
		&UAkAudioEventFactory::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkAudioEventFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioEventFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkAudioEventFactory()
	{
		if (!Z_Registration_Info_UClass_UAkAudioEventFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkAudioEventFactory.OuterSingleton, Z_Construct_UClass_UAkAudioEventFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkAudioEventFactory.OuterSingleton;
	}
	template<> AUDIOKINETICTOOLS_API UClass* StaticClass<UAkAudioEventFactory>()
	{
		return UAkAudioEventFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkAudioEventFactory);
	UAkAudioEventFactory::~UAkAudioEventFactory() {}
	void UAkAuxBusFactory::StaticRegisterNativesUAkAuxBusFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkAuxBusFactory);
	UClass* Z_Construct_UClass_UAkAuxBusFactory_NoRegister()
	{
		return UAkAuxBusFactory::StaticClass();
	}
	struct Z_Construct_UClass_UAkAuxBusFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkAuxBusFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkAssetFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_AudiokineticTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAuxBusFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Factories/AkAssetFactories.h" },
		{ "ModuleRelativePath", "Private/Factories/AkAssetFactories.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkAuxBusFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkAuxBusFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkAuxBusFactory_Statics::ClassParams = {
		&UAkAuxBusFactory::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkAuxBusFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAuxBusFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkAuxBusFactory()
	{
		if (!Z_Registration_Info_UClass_UAkAuxBusFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkAuxBusFactory.OuterSingleton, Z_Construct_UClass_UAkAuxBusFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkAuxBusFactory.OuterSingleton;
	}
	template<> AUDIOKINETICTOOLS_API UClass* StaticClass<UAkAuxBusFactory>()
	{
		return UAkAuxBusFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkAuxBusFactory);
	UAkAuxBusFactory::~UAkAuxBusFactory() {}
	void UAkRtpcFactory::StaticRegisterNativesUAkRtpcFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkRtpcFactory);
	UClass* Z_Construct_UClass_UAkRtpcFactory_NoRegister()
	{
		return UAkRtpcFactory::StaticClass();
	}
	struct Z_Construct_UClass_UAkRtpcFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkRtpcFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkAssetFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_AudiokineticTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkRtpcFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Factories/AkAssetFactories.h" },
		{ "ModuleRelativePath", "Private/Factories/AkAssetFactories.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkRtpcFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkRtpcFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkRtpcFactory_Statics::ClassParams = {
		&UAkRtpcFactory::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkRtpcFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkRtpcFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkRtpcFactory()
	{
		if (!Z_Registration_Info_UClass_UAkRtpcFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkRtpcFactory.OuterSingleton, Z_Construct_UClass_UAkRtpcFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkRtpcFactory.OuterSingleton;
	}
	template<> AUDIOKINETICTOOLS_API UClass* StaticClass<UAkRtpcFactory>()
	{
		return UAkRtpcFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkRtpcFactory);
	UAkRtpcFactory::~UAkRtpcFactory() {}
	void UAkTriggerFactory::StaticRegisterNativesUAkTriggerFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkTriggerFactory);
	UClass* Z_Construct_UClass_UAkTriggerFactory_NoRegister()
	{
		return UAkTriggerFactory::StaticClass();
	}
	struct Z_Construct_UClass_UAkTriggerFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkTriggerFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkAssetFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_AudiokineticTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkTriggerFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Factories/AkAssetFactories.h" },
		{ "ModuleRelativePath", "Private/Factories/AkAssetFactories.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkTriggerFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkTriggerFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkTriggerFactory_Statics::ClassParams = {
		&UAkTriggerFactory::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkTriggerFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkTriggerFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkTriggerFactory()
	{
		if (!Z_Registration_Info_UClass_UAkTriggerFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkTriggerFactory.OuterSingleton, Z_Construct_UClass_UAkTriggerFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkTriggerFactory.OuterSingleton;
	}
	template<> AUDIOKINETICTOOLS_API UClass* StaticClass<UAkTriggerFactory>()
	{
		return UAkTriggerFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkTriggerFactory);
	UAkTriggerFactory::~UAkTriggerFactory() {}
	void UAkExternalSourceFactory::StaticRegisterNativesUAkExternalSourceFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkExternalSourceFactory);
	UClass* Z_Construct_UClass_UAkExternalSourceFactory_NoRegister()
	{
		return UAkExternalSourceFactory::StaticClass();
	}
	struct Z_Construct_UClass_UAkExternalSourceFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkExternalSourceFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkAssetFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_AudiokineticTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkExternalSourceFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Factories/AkAssetFactories.h" },
		{ "ModuleRelativePath", "Private/Factories/AkAssetFactories.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkExternalSourceFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkExternalSourceFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkExternalSourceFactory_Statics::ClassParams = {
		&UAkExternalSourceFactory::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkExternalSourceFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkExternalSourceFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkExternalSourceFactory()
	{
		if (!Z_Registration_Info_UClass_UAkExternalSourceFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkExternalSourceFactory.OuterSingleton, Z_Construct_UClass_UAkExternalSourceFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkExternalSourceFactory.OuterSingleton;
	}
	template<> AUDIOKINETICTOOLS_API UClass* StaticClass<UAkExternalSourceFactory>()
	{
		return UAkExternalSourceFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkExternalSourceFactory);
	UAkExternalSourceFactory::~UAkExternalSourceFactory() {}
	void UAkStateValueFactory::StaticRegisterNativesUAkStateValueFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkStateValueFactory);
	UClass* Z_Construct_UClass_UAkStateValueFactory_NoRegister()
	{
		return UAkStateValueFactory::StaticClass();
	}
	struct Z_Construct_UClass_UAkStateValueFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkStateValueFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkAssetFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_AudiokineticTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkStateValueFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// mlarouche - For now Switch and State factory are only used in drag & drop\n" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Factories/AkAssetFactories.h" },
		{ "ModuleRelativePath", "Private/Factories/AkAssetFactories.h" },
		{ "ToolTip", "mlarouche - For now Switch and State factory are only used in drag & drop" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkStateValueFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkStateValueFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkStateValueFactory_Statics::ClassParams = {
		&UAkStateValueFactory::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkStateValueFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkStateValueFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkStateValueFactory()
	{
		if (!Z_Registration_Info_UClass_UAkStateValueFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkStateValueFactory.OuterSingleton, Z_Construct_UClass_UAkStateValueFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkStateValueFactory.OuterSingleton;
	}
	template<> AUDIOKINETICTOOLS_API UClass* StaticClass<UAkStateValueFactory>()
	{
		return UAkStateValueFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkStateValueFactory);
	UAkStateValueFactory::~UAkStateValueFactory() {}
	void UAkSwitchValueFactory::StaticRegisterNativesUAkSwitchValueFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkSwitchValueFactory);
	UClass* Z_Construct_UClass_UAkSwitchValueFactory_NoRegister()
	{
		return UAkSwitchValueFactory::StaticClass();
	}
	struct Z_Construct_UClass_UAkSwitchValueFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkSwitchValueFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkAssetFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_AudiokineticTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSwitchValueFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Factories/AkAssetFactories.h" },
		{ "ModuleRelativePath", "Private/Factories/AkAssetFactories.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkSwitchValueFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkSwitchValueFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkSwitchValueFactory_Statics::ClassParams = {
		&UAkSwitchValueFactory::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkSwitchValueFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSwitchValueFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkSwitchValueFactory()
	{
		if (!Z_Registration_Info_UClass_UAkSwitchValueFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkSwitchValueFactory.OuterSingleton, Z_Construct_UClass_UAkSwitchValueFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkSwitchValueFactory.OuterSingleton;
	}
	template<> AUDIOKINETICTOOLS_API UClass* StaticClass<UAkSwitchValueFactory>()
	{
		return UAkSwitchValueFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkSwitchValueFactory);
	UAkSwitchValueFactory::~UAkSwitchValueFactory() {}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_Wwise_Source_AudiokineticTools_Private_Factories_AkAssetFactories_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_Wwise_Source_AudiokineticTools_Private_Factories_AkAssetFactories_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAkAssetFactory, UAkAssetFactory::StaticClass, TEXT("UAkAssetFactory"), &Z_Registration_Info_UClass_UAkAssetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkAssetFactory), 876749247U) },
		{ Z_Construct_UClass_UAkAcousticTextureFactory, UAkAcousticTextureFactory::StaticClass, TEXT("UAkAcousticTextureFactory"), &Z_Registration_Info_UClass_UAkAcousticTextureFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkAcousticTextureFactory), 2875652597U) },
		{ Z_Construct_UClass_UAkAudioBankFactory, UAkAudioBankFactory::StaticClass, TEXT("UAkAudioBankFactory"), &Z_Registration_Info_UClass_UAkAudioBankFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkAudioBankFactory), 525938286U) },
		{ Z_Construct_UClass_UAkAudioEventFactory, UAkAudioEventFactory::StaticClass, TEXT("UAkAudioEventFactory"), &Z_Registration_Info_UClass_UAkAudioEventFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkAudioEventFactory), 3408469330U) },
		{ Z_Construct_UClass_UAkAuxBusFactory, UAkAuxBusFactory::StaticClass, TEXT("UAkAuxBusFactory"), &Z_Registration_Info_UClass_UAkAuxBusFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkAuxBusFactory), 3469301000U) },
		{ Z_Construct_UClass_UAkRtpcFactory, UAkRtpcFactory::StaticClass, TEXT("UAkRtpcFactory"), &Z_Registration_Info_UClass_UAkRtpcFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkRtpcFactory), 228327028U) },
		{ Z_Construct_UClass_UAkTriggerFactory, UAkTriggerFactory::StaticClass, TEXT("UAkTriggerFactory"), &Z_Registration_Info_UClass_UAkTriggerFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkTriggerFactory), 71064620U) },
		{ Z_Construct_UClass_UAkExternalSourceFactory, UAkExternalSourceFactory::StaticClass, TEXT("UAkExternalSourceFactory"), &Z_Registration_Info_UClass_UAkExternalSourceFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkExternalSourceFactory), 95349724U) },
		{ Z_Construct_UClass_UAkStateValueFactory, UAkStateValueFactory::StaticClass, TEXT("UAkStateValueFactory"), &Z_Registration_Info_UClass_UAkStateValueFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkStateValueFactory), 326475254U) },
		{ Z_Construct_UClass_UAkSwitchValueFactory, UAkSwitchValueFactory::StaticClass, TEXT("UAkSwitchValueFactory"), &Z_Registration_Info_UClass_UAkSwitchValueFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkSwitchValueFactory), 2389582155U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_Wwise_Source_AudiokineticTools_Private_Factories_AkAssetFactories_h_1351316649(TEXT("/Script/AudiokineticTools"),
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_Wwise_Source_AudiokineticTools_Private_Factories_AkAssetFactories_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_Wwise_Source_AudiokineticTools_Private_Factories_AkAssetFactories_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
