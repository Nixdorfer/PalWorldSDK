// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Platforms/AkPlatform_Windows/AkWindowsInitializationSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_AkWindowsInitializationSettings_generated_h
#error "AkWindowsInitializationSettings.generated.h already included, missing '#pragma once' in AkWindowsInitializationSettings.h"
#endif
#define AKAUDIO_AkWindowsInitializationSettings_generated_h

#define FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Windows_AkWindowsInitializationSettings_h_30_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAkWindowsAdvancedInitializationSettings_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct(); \
	typedef FAkAdvancedInitializationSettingsWithMultiCoreRendering Super;


template<> AKAUDIO_API UScriptStruct* StaticStruct<struct FAkWindowsAdvancedInitializationSettings>();

#define FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Windows_AkWindowsInitializationSettings_h_45_SPARSE_DATA
#define FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Windows_AkWindowsInitializationSettings_h_45_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMigrateMultiCoreRendering);


#define FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Windows_AkWindowsInitializationSettings_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMigrateMultiCoreRendering);


#define FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Windows_AkWindowsInitializationSettings_h_45_ACCESSORS
#define FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Windows_AkWindowsInitializationSettings_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkWindowsInitializationSettings(); \
	friend struct Z_Construct_UClass_UAkWindowsInitializationSettings_Statics; \
public: \
	DECLARE_CLASS(UAkWindowsInitializationSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkWindowsInitializationSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<UAkWindowsInitializationSettings*>(this); }


#define FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Windows_AkWindowsInitializationSettings_h_45_INCLASS \
private: \
	static void StaticRegisterNativesUAkWindowsInitializationSettings(); \
	friend struct Z_Construct_UClass_UAkWindowsInitializationSettings_Statics; \
public: \
	DECLARE_CLASS(UAkWindowsInitializationSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkWindowsInitializationSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<UAkWindowsInitializationSettings*>(this); }


#define FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Windows_AkWindowsInitializationSettings_h_45_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkWindowsInitializationSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkWindowsInitializationSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkWindowsInitializationSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkWindowsInitializationSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkWindowsInitializationSettings(UAkWindowsInitializationSettings&&); \
	NO_API UAkWindowsInitializationSettings(const UAkWindowsInitializationSettings&); \
public: \
	NO_API virtual ~UAkWindowsInitializationSettings();


#define FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Windows_AkWindowsInitializationSettings_h_45_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkWindowsInitializationSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkWindowsInitializationSettings(UAkWindowsInitializationSettings&&); \
	NO_API UAkWindowsInitializationSettings(const UAkWindowsInitializationSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkWindowsInitializationSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkWindowsInitializationSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkWindowsInitializationSettings) \
	NO_API virtual ~UAkWindowsInitializationSettings();


#define FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Windows_AkWindowsInitializationSettings_h_42_PROLOG
#define FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Windows_AkWindowsInitializationSettings_h_45_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Windows_AkWindowsInitializationSettings_h_45_SPARSE_DATA \
	FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Windows_AkWindowsInitializationSettings_h_45_RPC_WRAPPERS \
	FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Windows_AkWindowsInitializationSettings_h_45_ACCESSORS \
	FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Windows_AkWindowsInitializationSettings_h_45_INCLASS \
	FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Windows_AkWindowsInitializationSettings_h_45_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Windows_AkWindowsInitializationSettings_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Windows_AkWindowsInitializationSettings_h_45_SPARSE_DATA \
	FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Windows_AkWindowsInitializationSettings_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Windows_AkWindowsInitializationSettings_h_45_ACCESSORS \
	FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Windows_AkWindowsInitializationSettings_h_45_INCLASS_NO_PURE_DECLS \
	FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Windows_AkWindowsInitializationSettings_h_45_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AkWindowsInitializationSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkWindowsInitializationSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Windows_AkWindowsInitializationSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
