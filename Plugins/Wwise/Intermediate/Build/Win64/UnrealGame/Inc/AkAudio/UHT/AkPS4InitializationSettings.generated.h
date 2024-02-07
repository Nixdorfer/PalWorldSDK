// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Platforms/AkPlatform_PS4/AkPS4InitializationSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_AkPS4InitializationSettings_generated_h
#error "AkPS4InitializationSettings.generated.h already included, missing '#pragma once' in AkPS4InitializationSettings.h"
#endif
#define AKAUDIO_AkPS4InitializationSettings_generated_h

#define FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_PS4_AkPS4InitializationSettings_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAkPS4AdvancedInitializationSettings_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct(); \
	typedef FAkAdvancedInitializationSettingsWithMultiCoreRendering Super;


template<> AKAUDIO_API UScriptStruct* StaticStruct<struct FAkPS4AdvancedInitializationSettings>();

#define FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_PS4_AkPS4InitializationSettings_h_46_SPARSE_DATA
#define FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_PS4_AkPS4InitializationSettings_h_46_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMigrateMultiCoreRendering);


#define FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_PS4_AkPS4InitializationSettings_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMigrateMultiCoreRendering);


#define FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_PS4_AkPS4InitializationSettings_h_46_ACCESSORS
#define FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_PS4_AkPS4InitializationSettings_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkPS4InitializationSettings(); \
	friend struct Z_Construct_UClass_UAkPS4InitializationSettings_Statics; \
public: \
	DECLARE_CLASS(UAkPS4InitializationSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkPS4InitializationSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<UAkPS4InitializationSettings*>(this); }


#define FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_PS4_AkPS4InitializationSettings_h_46_INCLASS \
private: \
	static void StaticRegisterNativesUAkPS4InitializationSettings(); \
	friend struct Z_Construct_UClass_UAkPS4InitializationSettings_Statics; \
public: \
	DECLARE_CLASS(UAkPS4InitializationSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkPS4InitializationSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<UAkPS4InitializationSettings*>(this); }


#define FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_PS4_AkPS4InitializationSettings_h_46_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkPS4InitializationSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkPS4InitializationSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkPS4InitializationSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkPS4InitializationSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkPS4InitializationSettings(UAkPS4InitializationSettings&&); \
	NO_API UAkPS4InitializationSettings(const UAkPS4InitializationSettings&); \
public: \
	NO_API virtual ~UAkPS4InitializationSettings();


#define FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_PS4_AkPS4InitializationSettings_h_46_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkPS4InitializationSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkPS4InitializationSettings(UAkPS4InitializationSettings&&); \
	NO_API UAkPS4InitializationSettings(const UAkPS4InitializationSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkPS4InitializationSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkPS4InitializationSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkPS4InitializationSettings) \
	NO_API virtual ~UAkPS4InitializationSettings();


#define FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_PS4_AkPS4InitializationSettings_h_43_PROLOG
#define FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_PS4_AkPS4InitializationSettings_h_46_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_PS4_AkPS4InitializationSettings_h_46_SPARSE_DATA \
	FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_PS4_AkPS4InitializationSettings_h_46_RPC_WRAPPERS \
	FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_PS4_AkPS4InitializationSettings_h_46_ACCESSORS \
	FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_PS4_AkPS4InitializationSettings_h_46_INCLASS \
	FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_PS4_AkPS4InitializationSettings_h_46_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_PS4_AkPS4InitializationSettings_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_PS4_AkPS4InitializationSettings_h_46_SPARSE_DATA \
	FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_PS4_AkPS4InitializationSettings_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_PS4_AkPS4InitializationSettings_h_46_ACCESSORS \
	FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_PS4_AkPS4InitializationSettings_h_46_INCLASS_NO_PURE_DECLS \
	FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_PS4_AkPS4InitializationSettings_h_46_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AkPS4InitializationSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkPS4InitializationSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_PS4_AkPS4InitializationSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
