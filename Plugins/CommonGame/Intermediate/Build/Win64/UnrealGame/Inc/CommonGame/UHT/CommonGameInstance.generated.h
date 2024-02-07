// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonGameInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCommonUserInfo;
enum class ECommonUserAvailability : uint8;
enum class ECommonUserPrivilege : uint8;
struct FGameplayTag;
#ifdef COMMONGAME_CommonGameInstance_generated_h
#error "CommonGameInstance.generated.h already included, missing '#pragma once' in CommonGameInstance.h"
#endif
#define COMMONGAME_CommonGameInstance_generated_h

#define FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_CommonGameInstance_h_14_SPARSE_DATA
#define FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_CommonGameInstance_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandlePrivilegeChanged); \
	DECLARE_FUNCTION(execHandleSystemMessage);


#define FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_CommonGameInstance_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandlePrivilegeChanged); \
	DECLARE_FUNCTION(execHandleSystemMessage);


#define FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_CommonGameInstance_h_14_ACCESSORS
#define FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_CommonGameInstance_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonGameInstance(); \
	friend struct Z_Construct_UClass_UCommonGameInstance_Statics; \
public: \
	DECLARE_CLASS(UCommonGameInstance, UGameInstance, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CommonGame"), NO_API) \
	DECLARE_SERIALIZER(UCommonGameInstance)


#define FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_CommonGameInstance_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUCommonGameInstance(); \
	friend struct Z_Construct_UClass_UCommonGameInstance_Statics; \
public: \
	DECLARE_CLASS(UCommonGameInstance, UGameInstance, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CommonGame"), NO_API) \
	DECLARE_SERIALIZER(UCommonGameInstance)


#define FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_CommonGameInstance_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonGameInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonGameInstance(UCommonGameInstance&&); \
	NO_API UCommonGameInstance(const UCommonGameInstance&); \
public: \
	NO_API virtual ~UCommonGameInstance();


#define FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_CommonGameInstance_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonGameInstance(UCommonGameInstance&&); \
	NO_API UCommonGameInstance(const UCommonGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonGameInstance); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UCommonGameInstance) \
	NO_API virtual ~UCommonGameInstance();


#define FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_CommonGameInstance_h_12_PROLOG
#define FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_CommonGameInstance_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_CommonGameInstance_h_14_SPARSE_DATA \
	FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_CommonGameInstance_h_14_RPC_WRAPPERS \
	FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_CommonGameInstance_h_14_ACCESSORS \
	FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_CommonGameInstance_h_14_INCLASS \
	FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_CommonGameInstance_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_CommonGameInstance_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_CommonGameInstance_h_14_SPARSE_DATA \
	FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_CommonGameInstance_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_CommonGameInstance_h_14_ACCESSORS \
	FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_CommonGameInstance_h_14_INCLASS_NO_PURE_DECLS \
	FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_CommonGameInstance_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMMONGAME_API UClass* StaticClass<class UCommonGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_CommonGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
