// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PocketpairUserSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class UPocketpairUserInfo;
struct FSocialId;
#ifdef POCKETPAIRUSER_PocketpairUserSubsystem_generated_h
#error "PocketpairUserSubsystem.generated.h already included, missing '#pragma once' in PocketpairUserSubsystem.h"
#endif
#define POCKETPAIRUSER_PocketpairUserSubsystem_generated_h

#define FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_PocketpairUserSubsystem_h_12_SPARSE_DATA
#define FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_PocketpairUserSubsystem_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddPingResultCache); \
	DECLARE_FUNCTION(execGetDefaultOnlineSubsystemName); \
	DECLARE_FUNCTION(execGetInviteCode); \
	DECLARE_FUNCTION(execGetLocalUserInfo); \
	DECLARE_FUNCTION(execGetPingResultCache); \
	DECLARE_FUNCTION(execGetPlayerNo); \
	DECLARE_FUNCTION(execGetSaveDataUserId); \
	DECLARE_FUNCTION(execGetSocialId); \
	DECLARE_FUNCTION(execGetTelemetrySessionId); \
	DECLARE_FUNCTION(execGetTelemetryUserId); \
	DECLARE_FUNCTION(execOnSessionInviteReceived); \
	DECLARE_FUNCTION(execUnlockAchievement);


#define FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_PocketpairUserSubsystem_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddPingResultCache); \
	DECLARE_FUNCTION(execGetDefaultOnlineSubsystemName); \
	DECLARE_FUNCTION(execGetInviteCode); \
	DECLARE_FUNCTION(execGetLocalUserInfo); \
	DECLARE_FUNCTION(execGetPingResultCache); \
	DECLARE_FUNCTION(execGetPlayerNo); \
	DECLARE_FUNCTION(execGetSaveDataUserId); \
	DECLARE_FUNCTION(execGetSocialId); \
	DECLARE_FUNCTION(execGetTelemetrySessionId); \
	DECLARE_FUNCTION(execGetTelemetryUserId); \
	DECLARE_FUNCTION(execOnSessionInviteReceived); \
	DECLARE_FUNCTION(execUnlockAchievement);


#define FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_PocketpairUserSubsystem_h_12_ACCESSORS
#define FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_PocketpairUserSubsystem_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPocketpairUserSubsystem(); \
	friend struct Z_Construct_UClass_UPocketpairUserSubsystem_Statics; \
public: \
	DECLARE_CLASS(UPocketpairUserSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PocketpairUser"), NO_API) \
	DECLARE_SERIALIZER(UPocketpairUserSubsystem) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_PocketpairUserSubsystem_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUPocketpairUserSubsystem(); \
	friend struct Z_Construct_UClass_UPocketpairUserSubsystem_Statics; \
public: \
	DECLARE_CLASS(UPocketpairUserSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PocketpairUser"), NO_API) \
	DECLARE_SERIALIZER(UPocketpairUserSubsystem) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_PocketpairUserSubsystem_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPocketpairUserSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPocketpairUserSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPocketpairUserSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPocketpairUserSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPocketpairUserSubsystem(UPocketpairUserSubsystem&&); \
	NO_API UPocketpairUserSubsystem(const UPocketpairUserSubsystem&); \
public: \
	NO_API virtual ~UPocketpairUserSubsystem();


#define FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_PocketpairUserSubsystem_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPocketpairUserSubsystem(UPocketpairUserSubsystem&&); \
	NO_API UPocketpairUserSubsystem(const UPocketpairUserSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPocketpairUserSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPocketpairUserSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPocketpairUserSubsystem) \
	NO_API virtual ~UPocketpairUserSubsystem();


#define FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_PocketpairUserSubsystem_h_10_PROLOG
#define FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_PocketpairUserSubsystem_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_PocketpairUserSubsystem_h_12_SPARSE_DATA \
	FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_PocketpairUserSubsystem_h_12_RPC_WRAPPERS \
	FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_PocketpairUserSubsystem_h_12_ACCESSORS \
	FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_PocketpairUserSubsystem_h_12_INCLASS \
	FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_PocketpairUserSubsystem_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_PocketpairUserSubsystem_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_PocketpairUserSubsystem_h_12_SPARSE_DATA \
	FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_PocketpairUserSubsystem_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_PocketpairUserSubsystem_h_12_ACCESSORS \
	FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_PocketpairUserSubsystem_h_12_INCLASS_NO_PURE_DECLS \
	FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_PocketpairUserSubsystem_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> POCKETPAIRUSER_API UClass* StaticClass<class UPocketpairUserSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_PocketpairUserSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
