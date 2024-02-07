// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AkAudioEvent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_AkAudioEvent_generated_h
#error "AkAudioEvent.generated.h already included, missing '#pragma once' in AkAudioEvent.h"
#endif
#define AKAUDIO_AkAudioEvent_generated_h

#define FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkAudioEvent_h_35_SPARSE_DATA
#define FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkAudioEvent_h_35_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMaximumDuration); \
	DECLARE_FUNCTION(execGetMinimumDuration); \
	DECLARE_FUNCTION(execGetIsInfinite); \
	DECLARE_FUNCTION(execGetMaxAttenuationRadius);


#define FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkAudioEvent_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMaximumDuration); \
	DECLARE_FUNCTION(execGetMinimumDuration); \
	DECLARE_FUNCTION(execGetIsInfinite); \
	DECLARE_FUNCTION(execGetMaxAttenuationRadius);


#define FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkAudioEvent_h_35_ACCESSORS
#define FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkAudioEvent_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkAudioEvent(); \
	friend struct Z_Construct_UClass_UAkAudioEvent_Statics; \
public: \
	DECLARE_CLASS(UAkAudioEvent, UAkAssetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkAudioEvent)


#define FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkAudioEvent_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUAkAudioEvent(); \
	friend struct Z_Construct_UClass_UAkAudioEvent_Statics; \
public: \
	DECLARE_CLASS(UAkAudioEvent, UAkAssetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkAudioEvent)


#define FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkAudioEvent_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkAudioEvent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkAudioEvent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkAudioEvent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkAudioEvent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkAudioEvent(UAkAudioEvent&&); \
	NO_API UAkAudioEvent(const UAkAudioEvent&); \
public: \
	NO_API virtual ~UAkAudioEvent();


#define FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkAudioEvent_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkAudioEvent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkAudioEvent(UAkAudioEvent&&); \
	NO_API UAkAudioEvent(const UAkAudioEvent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkAudioEvent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkAudioEvent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkAudioEvent) \
	NO_API virtual ~UAkAudioEvent();


#define FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkAudioEvent_h_32_PROLOG
#define FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkAudioEvent_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkAudioEvent_h_35_SPARSE_DATA \
	FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkAudioEvent_h_35_RPC_WRAPPERS \
	FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkAudioEvent_h_35_ACCESSORS \
	FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkAudioEvent_h_35_INCLASS \
	FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkAudioEvent_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkAudioEvent_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkAudioEvent_h_35_SPARSE_DATA \
	FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkAudioEvent_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkAudioEvent_h_35_ACCESSORS \
	FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkAudioEvent_h_35_INCLASS_NO_PURE_DECLS \
	FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkAudioEvent_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkAudioEvent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_AkAudioEvent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
