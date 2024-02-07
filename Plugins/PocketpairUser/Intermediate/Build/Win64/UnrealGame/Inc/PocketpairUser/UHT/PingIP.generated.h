// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PingIP.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPingIP;
#ifdef POCKETPAIRUSER_PingIP_generated_h
#error "PingIP.generated.h already included, missing '#pragma once' in PingIP.h"
#endif
#define POCKETPAIRUSER_PingIP_generated_h

#define FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_PingIP_h_12_SPARSE_DATA
#define FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_PingIP_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConstructPingObject); \
	DECLARE_FUNCTION(execPollThread); \
	DECLARE_FUNCTION(execSendPing);


#define FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_PingIP_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConstructPingObject); \
	DECLARE_FUNCTION(execPollThread); \
	DECLARE_FUNCTION(execSendPing);


#define FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_PingIP_h_12_ACCESSORS
#define FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_PingIP_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPingIP(); \
	friend struct Z_Construct_UClass_UPingIP_Statics; \
public: \
	DECLARE_CLASS(UPingIP, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PocketpairUser"), NO_API) \
	DECLARE_SERIALIZER(UPingIP) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_PingIP_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUPingIP(); \
	friend struct Z_Construct_UClass_UPingIP_Statics; \
public: \
	DECLARE_CLASS(UPingIP, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PocketpairUser"), NO_API) \
	DECLARE_SERIALIZER(UPingIP) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_PingIP_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPingIP(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPingIP) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPingIP); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPingIP); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPingIP(UPingIP&&); \
	NO_API UPingIP(const UPingIP&); \
public: \
	NO_API virtual ~UPingIP();


#define FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_PingIP_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPingIP(UPingIP&&); \
	NO_API UPingIP(const UPingIP&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPingIP); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPingIP); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPingIP) \
	NO_API virtual ~UPingIP();


#define FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_PingIP_h_10_PROLOG
#define FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_PingIP_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_PingIP_h_12_SPARSE_DATA \
	FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_PingIP_h_12_RPC_WRAPPERS \
	FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_PingIP_h_12_ACCESSORS \
	FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_PingIP_h_12_INCLASS \
	FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_PingIP_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_PingIP_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_PingIP_h_12_SPARSE_DATA \
	FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_PingIP_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_PingIP_h_12_ACCESSORS \
	FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_PingIP_h_12_INCLASS_NO_PURE_DECLS \
	FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_PingIP_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> POCKETPAIRUSER_API UClass* StaticClass<class UPingIP>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_PingIP_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
