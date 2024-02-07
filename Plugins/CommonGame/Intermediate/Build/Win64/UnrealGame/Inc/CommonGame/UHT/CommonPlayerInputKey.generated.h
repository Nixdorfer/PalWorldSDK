// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonPlayerInputKey.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ECommonKeybindForcedHoldStatus : uint8;
struct FKey;
#ifdef COMMONGAME_CommonPlayerInputKey_generated_h
#error "CommonPlayerInputKey.generated.h already included, missing '#pragma once' in CommonPlayerInputKey.h"
#endif
#define COMMONGAME_CommonPlayerInputKey_generated_h

#define FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_CommonPlayerInputKey_h_18_SPARSE_DATA
#define FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_CommonPlayerInputKey_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsBoundKeyValid); \
	DECLARE_FUNCTION(execIsHoldKeybind); \
	DECLARE_FUNCTION(execSetAxisScale); \
	DECLARE_FUNCTION(execSetBoundAction); \
	DECLARE_FUNCTION(execSetBoundKey); \
	DECLARE_FUNCTION(execSetForcedHoldKeybind); \
	DECLARE_FUNCTION(execSetForcedHoldKeybindStatus); \
	DECLARE_FUNCTION(execSetPresetNameOverride); \
	DECLARE_FUNCTION(execSetShowProgressCountDown); \
	DECLARE_FUNCTION(execStartHoldProgress); \
	DECLARE_FUNCTION(execStopHoldProgress); \
	DECLARE_FUNCTION(execUpdateKeybindWidget);


#define FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_CommonPlayerInputKey_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsBoundKeyValid); \
	DECLARE_FUNCTION(execIsHoldKeybind); \
	DECLARE_FUNCTION(execSetAxisScale); \
	DECLARE_FUNCTION(execSetBoundAction); \
	DECLARE_FUNCTION(execSetBoundKey); \
	DECLARE_FUNCTION(execSetForcedHoldKeybind); \
	DECLARE_FUNCTION(execSetForcedHoldKeybindStatus); \
	DECLARE_FUNCTION(execSetPresetNameOverride); \
	DECLARE_FUNCTION(execSetShowProgressCountDown); \
	DECLARE_FUNCTION(execStartHoldProgress); \
	DECLARE_FUNCTION(execStopHoldProgress); \
	DECLARE_FUNCTION(execUpdateKeybindWidget);


#define FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_CommonPlayerInputKey_h_18_ACCESSORS
#define FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_CommonPlayerInputKey_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonPlayerInputKey(); \
	friend struct Z_Construct_UClass_UCommonPlayerInputKey_Statics; \
public: \
	DECLARE_CLASS(UCommonPlayerInputKey, UCommonUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CommonGame"), NO_API) \
	DECLARE_SERIALIZER(UCommonPlayerInputKey)


#define FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_CommonPlayerInputKey_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUCommonPlayerInputKey(); \
	friend struct Z_Construct_UClass_UCommonPlayerInputKey_Statics; \
public: \
	DECLARE_CLASS(UCommonPlayerInputKey, UCommonUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CommonGame"), NO_API) \
	DECLARE_SERIALIZER(UCommonPlayerInputKey)


#define FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_CommonPlayerInputKey_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonPlayerInputKey(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonPlayerInputKey) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonPlayerInputKey); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonPlayerInputKey); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonPlayerInputKey(UCommonPlayerInputKey&&); \
	NO_API UCommonPlayerInputKey(const UCommonPlayerInputKey&); \
public: \
	NO_API virtual ~UCommonPlayerInputKey();


#define FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_CommonPlayerInputKey_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonPlayerInputKey(UCommonPlayerInputKey&&); \
	NO_API UCommonPlayerInputKey(const UCommonPlayerInputKey&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonPlayerInputKey); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonPlayerInputKey); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UCommonPlayerInputKey) \
	NO_API virtual ~UCommonPlayerInputKey();


#define FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_CommonPlayerInputKey_h_16_PROLOG
#define FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_CommonPlayerInputKey_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_CommonPlayerInputKey_h_18_SPARSE_DATA \
	FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_CommonPlayerInputKey_h_18_RPC_WRAPPERS \
	FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_CommonPlayerInputKey_h_18_ACCESSORS \
	FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_CommonPlayerInputKey_h_18_INCLASS \
	FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_CommonPlayerInputKey_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_CommonPlayerInputKey_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_CommonPlayerInputKey_h_18_SPARSE_DATA \
	FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_CommonPlayerInputKey_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_CommonPlayerInputKey_h_18_ACCESSORS \
	FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_CommonPlayerInputKey_h_18_INCLASS_NO_PURE_DECLS \
	FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_CommonPlayerInputKey_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMMONGAME_API UClass* StaticClass<class UCommonPlayerInputKey>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_CommonPlayerInputKey_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
