// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AkSettingsPerUser.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_AkSettingsPerUser_generated_h
#error "AkSettingsPerUser.generated.h already included, missing '#pragma once' in AkSettingsPerUser.h"
#endif
#define AKAUDIO_AkSettingsPerUser_generated_h

#define FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkSettingsPerUser_h_30_SPARSE_DATA
#define FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkSettingsPerUser_h_30_RPC_WRAPPERS
#define FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkSettingsPerUser_h_30_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkSettingsPerUser_h_30_ACCESSORS
#define FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkSettingsPerUser_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkSettingsPerUser(); \
	friend struct Z_Construct_UClass_UAkSettingsPerUser_Statics; \
public: \
	DECLARE_CLASS(UAkSettingsPerUser, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkSettingsPerUser) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkSettingsPerUser_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUAkSettingsPerUser(); \
	friend struct Z_Construct_UClass_UAkSettingsPerUser_Statics; \
public: \
	DECLARE_CLASS(UAkSettingsPerUser, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkSettingsPerUser) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkSettingsPerUser_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkSettingsPerUser(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkSettingsPerUser) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkSettingsPerUser); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkSettingsPerUser); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkSettingsPerUser(UAkSettingsPerUser&&); \
	NO_API UAkSettingsPerUser(const UAkSettingsPerUser&); \
public: \
	NO_API virtual ~UAkSettingsPerUser();


#define FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkSettingsPerUser_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkSettingsPerUser(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkSettingsPerUser(UAkSettingsPerUser&&); \
	NO_API UAkSettingsPerUser(const UAkSettingsPerUser&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkSettingsPerUser); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkSettingsPerUser); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkSettingsPerUser) \
	NO_API virtual ~UAkSettingsPerUser();


#define FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkSettingsPerUser_h_27_PROLOG
#define FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkSettingsPerUser_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkSettingsPerUser_h_30_SPARSE_DATA \
	FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkSettingsPerUser_h_30_RPC_WRAPPERS \
	FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkSettingsPerUser_h_30_ACCESSORS \
	FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkSettingsPerUser_h_30_INCLASS \
	FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkSettingsPerUser_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkSettingsPerUser_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkSettingsPerUser_h_30_SPARSE_DATA \
	FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkSettingsPerUser_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkSettingsPerUser_h_30_ACCESSORS \
	FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkSettingsPerUser_h_30_INCLASS_NO_PURE_DECLS \
	FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkSettingsPerUser_h_30_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AkSettingsPerUser."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkSettingsPerUser>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkSettingsPerUser_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
