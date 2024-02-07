// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonUserSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCommonUserInfo;
enum class ECommonUserInitializationState : uint8;
struct FCommonUserInitializeParams;
struct FGameplayTag;
struct FInputDeviceId;
struct FKey;
struct FPlatformUserId;
struct FUniqueNetIdRepl;
#ifdef COMMONUSER_CommonUserSubsystem_generated_h
#error "CommonUserSubsystem.generated.h already included, missing '#pragma once' in CommonUserSubsystem.h"
#endif
#define COMMONUSER_CommonUserSubsystem_generated_h

#define FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_20_SPARSE_DATA
#define FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCancelUserInitialization); \
	DECLARE_FUNCTION(execGetLocalPlayerInitializationState); \
	DECLARE_FUNCTION(execGetMaxLocalPlayers); \
	DECLARE_FUNCTION(execGetNumLocalPlayers); \
	DECLARE_FUNCTION(execGetUserInfoForControllerId); \
	DECLARE_FUNCTION(execGetUserInfoForInputDevice); \
	DECLARE_FUNCTION(execGetUserInfoForLocalPlayerIndex); \
	DECLARE_FUNCTION(execGetUserInfoForPlatformUser); \
	DECLARE_FUNCTION(execGetUserInfoForPlatformUserIndex); \
	DECLARE_FUNCTION(execGetUserInfoForUniqueNetId); \
	DECLARE_FUNCTION(execHasTraitTag); \
	DECLARE_FUNCTION(execListenForLoginKeyInput); \
	DECLARE_FUNCTION(execResetUserState); \
	DECLARE_FUNCTION(execSendSystemMessage); \
	DECLARE_FUNCTION(execSetMaxLocalPlayers); \
	DECLARE_FUNCTION(execShouldWaitForStartInput); \
	DECLARE_FUNCTION(execTryToInitializeForLocalPlay); \
	DECLARE_FUNCTION(execTryToInitializeUser); \
	DECLARE_FUNCTION(execTryToLoginForOnlinePlay);


#define FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCancelUserInitialization); \
	DECLARE_FUNCTION(execGetLocalPlayerInitializationState); \
	DECLARE_FUNCTION(execGetMaxLocalPlayers); \
	DECLARE_FUNCTION(execGetNumLocalPlayers); \
	DECLARE_FUNCTION(execGetUserInfoForControllerId); \
	DECLARE_FUNCTION(execGetUserInfoForInputDevice); \
	DECLARE_FUNCTION(execGetUserInfoForLocalPlayerIndex); \
	DECLARE_FUNCTION(execGetUserInfoForPlatformUser); \
	DECLARE_FUNCTION(execGetUserInfoForPlatformUserIndex); \
	DECLARE_FUNCTION(execGetUserInfoForUniqueNetId); \
	DECLARE_FUNCTION(execHasTraitTag); \
	DECLARE_FUNCTION(execListenForLoginKeyInput); \
	DECLARE_FUNCTION(execResetUserState); \
	DECLARE_FUNCTION(execSendSystemMessage); \
	DECLARE_FUNCTION(execSetMaxLocalPlayers); \
	DECLARE_FUNCTION(execShouldWaitForStartInput); \
	DECLARE_FUNCTION(execTryToInitializeForLocalPlay); \
	DECLARE_FUNCTION(execTryToInitializeUser); \
	DECLARE_FUNCTION(execTryToLoginForOnlinePlay);


#define FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_20_ACCESSORS
#define FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonUserSubsystem(); \
	friend struct Z_Construct_UClass_UCommonUserSubsystem_Statics; \
public: \
	DECLARE_CLASS(UCommonUserSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUser"), NO_API) \
	DECLARE_SERIALIZER(UCommonUserSubsystem) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUCommonUserSubsystem(); \
	friend struct Z_Construct_UClass_UCommonUserSubsystem_Statics; \
public: \
	DECLARE_CLASS(UCommonUserSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUser"), NO_API) \
	DECLARE_SERIALIZER(UCommonUserSubsystem) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonUserSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonUserSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonUserSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonUserSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonUserSubsystem(UCommonUserSubsystem&&); \
	NO_API UCommonUserSubsystem(const UCommonUserSubsystem&); \
public: \
	NO_API virtual ~UCommonUserSubsystem();


#define FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonUserSubsystem(UCommonUserSubsystem&&); \
	NO_API UCommonUserSubsystem(const UCommonUserSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonUserSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonUserSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCommonUserSubsystem) \
	NO_API virtual ~UCommonUserSubsystem();


#define FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_18_PROLOG
#define FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_20_SPARSE_DATA \
	FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_20_RPC_WRAPPERS \
	FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_20_ACCESSORS \
	FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_20_INCLASS \
	FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_20_SPARSE_DATA \
	FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_20_ACCESSORS \
	FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_20_INCLASS_NO_PURE_DECLS \
	FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMMONUSER_API UClass* StaticClass<class UCommonUserSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonUserSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
