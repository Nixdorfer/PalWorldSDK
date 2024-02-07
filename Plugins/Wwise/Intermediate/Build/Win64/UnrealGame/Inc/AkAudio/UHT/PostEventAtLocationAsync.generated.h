// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlueprintNodes/PostEventAtLocationAsync.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAkAudioEvent;
class UObject;
class UPostEventAtLocationAsync;
#ifdef AKAUDIO_PostEventAtLocationAsync_generated_h
#error "PostEventAtLocationAsync.generated.h already included, missing '#pragma once' in PostEventAtLocationAsync.h"
#endif
#define AKAUDIO_PostEventAtLocationAsync_generated_h

#define FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAtLocationAsync_h_25_DELEGATE \
struct _Script_AkAudio_eventPostEventAtLocationAsyncOutputPin_Parms \
{ \
	int32 PlayingID; \
}; \
static inline void FPostEventAtLocationAsyncOutputPin_DelegateWrapper(const FMulticastScriptDelegate& PostEventAtLocationAsyncOutputPin, int32 PlayingID) \
{ \
	_Script_AkAudio_eventPostEventAtLocationAsyncOutputPin_Parms Parms; \
	Parms.PlayingID=PlayingID; \
	PostEventAtLocationAsyncOutputPin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAtLocationAsync_h_30_SPARSE_DATA
#define FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAtLocationAsync_h_30_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPollPostEventFuture); \
	DECLARE_FUNCTION(execPostEventAtLocationAsync);


#define FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAtLocationAsync_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPollPostEventFuture); \
	DECLARE_FUNCTION(execPostEventAtLocationAsync);


#define FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAtLocationAsync_h_30_ACCESSORS
#define FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAtLocationAsync_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPostEventAtLocationAsync(); \
	friend struct Z_Construct_UClass_UPostEventAtLocationAsync_Statics; \
public: \
	DECLARE_CLASS(UPostEventAtLocationAsync, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UPostEventAtLocationAsync)


#define FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAtLocationAsync_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUPostEventAtLocationAsync(); \
	friend struct Z_Construct_UClass_UPostEventAtLocationAsync_Statics; \
public: \
	DECLARE_CLASS(UPostEventAtLocationAsync, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UPostEventAtLocationAsync)


#define FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAtLocationAsync_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPostEventAtLocationAsync(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPostEventAtLocationAsync) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPostEventAtLocationAsync); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPostEventAtLocationAsync); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPostEventAtLocationAsync(UPostEventAtLocationAsync&&); \
	NO_API UPostEventAtLocationAsync(const UPostEventAtLocationAsync&); \
public: \
	NO_API virtual ~UPostEventAtLocationAsync();


#define FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAtLocationAsync_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPostEventAtLocationAsync(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPostEventAtLocationAsync(UPostEventAtLocationAsync&&); \
	NO_API UPostEventAtLocationAsync(const UPostEventAtLocationAsync&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPostEventAtLocationAsync); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPostEventAtLocationAsync); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPostEventAtLocationAsync) \
	NO_API virtual ~UPostEventAtLocationAsync();


#define FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAtLocationAsync_h_27_PROLOG
#define FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAtLocationAsync_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAtLocationAsync_h_30_SPARSE_DATA \
	FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAtLocationAsync_h_30_RPC_WRAPPERS \
	FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAtLocationAsync_h_30_ACCESSORS \
	FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAtLocationAsync_h_30_INCLASS \
	FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAtLocationAsync_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAtLocationAsync_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAtLocationAsync_h_30_SPARSE_DATA \
	FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAtLocationAsync_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAtLocationAsync_h_30_ACCESSORS \
	FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAtLocationAsync_h_30_INCLASS_NO_PURE_DECLS \
	FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAtLocationAsync_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UPostEventAtLocationAsync>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PalWorldSDK_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAtLocationAsync_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
