// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonUserInfo.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ECommonUserAvailability : uint8;
enum class ECommonUserOnlineContext : uint8;
enum class ECommonUserPrivilege : uint8;
enum class ECommonUserPrivilegeResult : uint8;
struct FUniqueNetIdRepl;
#ifdef COMMONUSER_CommonUserInfo_generated_h
#error "CommonUserInfo.generated.h already included, missing '#pragma once' in CommonUserInfo.h"
#endif
#define COMMONUSER_CommonUserInfo_generated_h

#define FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonUserInfo_h_16_SPARSE_DATA
#define FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonUserInfo_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCachedPrivilegeResult); \
	DECLARE_FUNCTION(execGetDebugString); \
	DECLARE_FUNCTION(execGetNetId); \
	DECLARE_FUNCTION(execGetNickname); \
	DECLARE_FUNCTION(execGetPrivilegeAvailability);


#define FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonUserInfo_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCachedPrivilegeResult); \
	DECLARE_FUNCTION(execGetDebugString); \
	DECLARE_FUNCTION(execGetNetId); \
	DECLARE_FUNCTION(execGetNickname); \
	DECLARE_FUNCTION(execGetPrivilegeAvailability);


#define FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonUserInfo_h_16_ACCESSORS
#define FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonUserInfo_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonUserInfo(); \
	friend struct Z_Construct_UClass_UCommonUserInfo_Statics; \
public: \
	DECLARE_CLASS(UCommonUserInfo, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUser"), NO_API) \
	DECLARE_SERIALIZER(UCommonUserInfo)


#define FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonUserInfo_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUCommonUserInfo(); \
	friend struct Z_Construct_UClass_UCommonUserInfo_Statics; \
public: \
	DECLARE_CLASS(UCommonUserInfo, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUser"), NO_API) \
	DECLARE_SERIALIZER(UCommonUserInfo)


#define FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonUserInfo_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonUserInfo(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonUserInfo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonUserInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonUserInfo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonUserInfo(UCommonUserInfo&&); \
	NO_API UCommonUserInfo(const UCommonUserInfo&); \
public: \
	NO_API virtual ~UCommonUserInfo();


#define FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonUserInfo_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonUserInfo(UCommonUserInfo&&); \
	NO_API UCommonUserInfo(const UCommonUserInfo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonUserInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonUserInfo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCommonUserInfo) \
	NO_API virtual ~UCommonUserInfo();


#define FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonUserInfo_h_14_PROLOG
#define FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonUserInfo_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonUserInfo_h_16_SPARSE_DATA \
	FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonUserInfo_h_16_RPC_WRAPPERS \
	FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonUserInfo_h_16_ACCESSORS \
	FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonUserInfo_h_16_INCLASS \
	FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonUserInfo_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonUserInfo_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonUserInfo_h_16_SPARSE_DATA \
	FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonUserInfo_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonUserInfo_h_16_ACCESSORS \
	FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonUserInfo_h_16_INCLASS_NO_PURE_DECLS \
	FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonUserInfo_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMMONUSER_API UClass* StaticClass<class UCommonUserInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonUserInfo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
