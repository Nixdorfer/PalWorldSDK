// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Platforms/AkPlatform_XboxOne/AkXboxOneInitializationSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_AkXboxOneInitializationSettings_generated_h
#error "AkXboxOneInitializationSettings.generated.h already included, missing '#pragma once' in AkXboxOneInitializationSettings.h"
#endif
#define AKAUDIO_AkXboxOneInitializationSettings_generated_h

#define FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_XboxOne_AkXboxOneInitializationSettings_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAkXboxOneAdvancedInitializationSettings_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct(); \
	typedef FAkAdvancedInitializationSettingsWithMultiCoreRendering Super;


template<> AKAUDIO_API UScriptStruct* StaticStruct<struct FAkXboxOneAdvancedInitializationSettings>();

#define FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_XboxOne_AkXboxOneInitializationSettings_h_46_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAkXboxOneApuHeapInitializationSettings_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct();


template<> AKAUDIO_API UScriptStruct* StaticStruct<struct FAkXboxOneApuHeapInitializationSettings>();

#define FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_XboxOne_AkXboxOneInitializationSettings_h_61_SPARSE_DATA
#define FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_XboxOne_AkXboxOneInitializationSettings_h_61_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMigrateMultiCoreRendering);


#define FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_XboxOne_AkXboxOneInitializationSettings_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMigrateMultiCoreRendering);


#define FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_XboxOne_AkXboxOneInitializationSettings_h_61_ACCESSORS
#define FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_XboxOne_AkXboxOneInitializationSettings_h_61_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkXboxOneInitializationSettings(); \
	friend struct Z_Construct_UClass_UAkXboxOneInitializationSettings_Statics; \
public: \
	DECLARE_CLASS(UAkXboxOneInitializationSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkXboxOneInitializationSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<UAkXboxOneInitializationSettings*>(this); }


#define FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_XboxOne_AkXboxOneInitializationSettings_h_61_INCLASS \
private: \
	static void StaticRegisterNativesUAkXboxOneInitializationSettings(); \
	friend struct Z_Construct_UClass_UAkXboxOneInitializationSettings_Statics; \
public: \
	DECLARE_CLASS(UAkXboxOneInitializationSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkXboxOneInitializationSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<UAkXboxOneInitializationSettings*>(this); }


#define FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_XboxOne_AkXboxOneInitializationSettings_h_61_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkXboxOneInitializationSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkXboxOneInitializationSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkXboxOneInitializationSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkXboxOneInitializationSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkXboxOneInitializationSettings(UAkXboxOneInitializationSettings&&); \
	NO_API UAkXboxOneInitializationSettings(const UAkXboxOneInitializationSettings&); \
public: \
	NO_API virtual ~UAkXboxOneInitializationSettings();


#define FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_XboxOne_AkXboxOneInitializationSettings_h_61_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkXboxOneInitializationSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkXboxOneInitializationSettings(UAkXboxOneInitializationSettings&&); \
	NO_API UAkXboxOneInitializationSettings(const UAkXboxOneInitializationSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkXboxOneInitializationSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkXboxOneInitializationSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkXboxOneInitializationSettings) \
	NO_API virtual ~UAkXboxOneInitializationSettings();


#define FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_XboxOne_AkXboxOneInitializationSettings_h_58_PROLOG
#define FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_XboxOne_AkXboxOneInitializationSettings_h_61_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_XboxOne_AkXboxOneInitializationSettings_h_61_SPARSE_DATA \
	FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_XboxOne_AkXboxOneInitializationSettings_h_61_RPC_WRAPPERS \
	FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_XboxOne_AkXboxOneInitializationSettings_h_61_ACCESSORS \
	FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_XboxOne_AkXboxOneInitializationSettings_h_61_INCLASS \
	FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_XboxOne_AkXboxOneInitializationSettings_h_61_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_XboxOne_AkXboxOneInitializationSettings_h_61_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_XboxOne_AkXboxOneInitializationSettings_h_61_SPARSE_DATA \
	FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_XboxOne_AkXboxOneInitializationSettings_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_XboxOne_AkXboxOneInitializationSettings_h_61_ACCESSORS \
	FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_XboxOne_AkXboxOneInitializationSettings_h_61_INCLASS_NO_PURE_DECLS \
	FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_XboxOne_AkXboxOneInitializationSettings_h_61_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AkXboxOneInitializationSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkXboxOneInitializationSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_XboxOne_AkXboxOneInitializationSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
