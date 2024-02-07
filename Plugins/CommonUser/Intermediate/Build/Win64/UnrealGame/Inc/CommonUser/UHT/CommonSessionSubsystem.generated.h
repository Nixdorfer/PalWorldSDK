// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonSessionSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class UCommonSession_HostSessionRequest;
class UCommonSession_SearchResult;
class UCommonSession_SearchSessionRequest;
#ifdef COMMONUSER_CommonSessionSubsystem_generated_h
#error "CommonSessionSubsystem.generated.h already included, missing '#pragma once' in CommonSessionSubsystem.h"
#endif
#define COMMONUSER_CommonSessionSubsystem_generated_h

#define FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_16_SPARSE_DATA
#define FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCleanUpSessions); \
	DECLARE_FUNCTION(execCreateOnlineHostSessionRequest); \
	DECLARE_FUNCTION(execCreateOnlineSearchSessionRequest); \
	DECLARE_FUNCTION(execFindSessions); \
	DECLARE_FUNCTION(execHostSession); \
	DECLARE_FUNCTION(execJoinSession); \
	DECLARE_FUNCTION(execQuickPlaySession);


#define FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCleanUpSessions); \
	DECLARE_FUNCTION(execCreateOnlineHostSessionRequest); \
	DECLARE_FUNCTION(execCreateOnlineSearchSessionRequest); \
	DECLARE_FUNCTION(execFindSessions); \
	DECLARE_FUNCTION(execHostSession); \
	DECLARE_FUNCTION(execJoinSession); \
	DECLARE_FUNCTION(execQuickPlaySession);


#define FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_16_ACCESSORS
#define FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonSessionSubsystem(); \
	friend struct Z_Construct_UClass_UCommonSessionSubsystem_Statics; \
public: \
	DECLARE_CLASS(UCommonSessionSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUser"), NO_API) \
	DECLARE_SERIALIZER(UCommonSessionSubsystem)


#define FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUCommonSessionSubsystem(); \
	friend struct Z_Construct_UClass_UCommonSessionSubsystem_Statics; \
public: \
	DECLARE_CLASS(UCommonSessionSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUser"), NO_API) \
	DECLARE_SERIALIZER(UCommonSessionSubsystem)


#define FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonSessionSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonSessionSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonSessionSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonSessionSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonSessionSubsystem(UCommonSessionSubsystem&&); \
	NO_API UCommonSessionSubsystem(const UCommonSessionSubsystem&); \
public: \
	NO_API virtual ~UCommonSessionSubsystem();


#define FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonSessionSubsystem(UCommonSessionSubsystem&&); \
	NO_API UCommonSessionSubsystem(const UCommonSessionSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonSessionSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonSessionSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCommonSessionSubsystem) \
	NO_API virtual ~UCommonSessionSubsystem();


#define FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_14_PROLOG
#define FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_16_SPARSE_DATA \
	FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_16_RPC_WRAPPERS \
	FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_16_ACCESSORS \
	FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_16_INCLASS \
	FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_16_SPARSE_DATA \
	FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_16_ACCESSORS \
	FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_16_INCLASS_NO_PURE_DECLS \
	FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMMONUSER_API UClass* StaticClass<class UCommonSessionSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
