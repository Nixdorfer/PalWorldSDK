// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AkAmbientSound.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_AkAmbientSound_generated_h
#error "AkAmbientSound.generated.h already included, missing '#pragma once' in AkAmbientSound.h"
#endif
#define AKAUDIO_AkAmbientSound_generated_h

#define FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkAmbientSound_h_33_SPARSE_DATA
#define FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkAmbientSound_h_33_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStopAmbientSound); \
	DECLARE_FUNCTION(execStartAmbientSound);


#define FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkAmbientSound_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStopAmbientSound); \
	DECLARE_FUNCTION(execStartAmbientSound);


#define FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkAmbientSound_h_33_ACCESSORS
#define FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkAmbientSound_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAkAmbientSound(); \
	friend struct Z_Construct_UClass_AAkAmbientSound_Statics; \
public: \
	DECLARE_CLASS(AAkAmbientSound, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(AAkAmbientSound)


#define FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkAmbientSound_h_33_INCLASS \
private: \
	static void StaticRegisterNativesAAkAmbientSound(); \
	friend struct Z_Construct_UClass_AAkAmbientSound_Statics; \
public: \
	DECLARE_CLASS(AAkAmbientSound, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(AAkAmbientSound)


#define FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkAmbientSound_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAkAmbientSound(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAkAmbientSound) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAkAmbientSound); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAkAmbientSound); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAkAmbientSound(AAkAmbientSound&&); \
	NO_API AAkAmbientSound(const AAkAmbientSound&); \
public: \
	NO_API virtual ~AAkAmbientSound();


#define FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkAmbientSound_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAkAmbientSound(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAkAmbientSound(AAkAmbientSound&&); \
	NO_API AAkAmbientSound(const AAkAmbientSound&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAkAmbientSound); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAkAmbientSound); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAkAmbientSound) \
	NO_API virtual ~AAkAmbientSound();


#define FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkAmbientSound_h_30_PROLOG
#define FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkAmbientSound_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkAmbientSound_h_33_SPARSE_DATA \
	FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkAmbientSound_h_33_RPC_WRAPPERS \
	FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkAmbientSound_h_33_ACCESSORS \
	FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkAmbientSound_h_33_INCLASS \
	FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkAmbientSound_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkAmbientSound_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkAmbientSound_h_33_SPARSE_DATA \
	FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkAmbientSound_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkAmbientSound_h_33_ACCESSORS \
	FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkAmbientSound_h_33_INCLASS_NO_PURE_DECLS \
	FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkAmbientSound_h_33_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AkAmbientSound."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class AAkAmbientSound>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkAmbientSound_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
