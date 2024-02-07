// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LoadingProcessTask.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULoadingProcessTask;
class UObject;
#ifdef COMMONLOADINGSCREEN_LoadingProcessTask_generated_h
#error "LoadingProcessTask.generated.h already included, missing '#pragma once' in LoadingProcessTask.h"
#endif
#define COMMONLOADINGSCREEN_LoadingProcessTask_generated_h

#define FID_PalWorldSDK_Plugins_CommonLoadingScreen_Source_CommonLoadingScreen_Public_LoadingProcessTask_h_11_SPARSE_DATA
#define FID_PalWorldSDK_Plugins_CommonLoadingScreen_Source_CommonLoadingScreen_Public_LoadingProcessTask_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateLoadingScreenProcessTask); \
	DECLARE_FUNCTION(execSetShowLoadingScreenReason); \
	DECLARE_FUNCTION(execUnregister);


#define FID_PalWorldSDK_Plugins_CommonLoadingScreen_Source_CommonLoadingScreen_Public_LoadingProcessTask_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateLoadingScreenProcessTask); \
	DECLARE_FUNCTION(execSetShowLoadingScreenReason); \
	DECLARE_FUNCTION(execUnregister);


#define FID_PalWorldSDK_Plugins_CommonLoadingScreen_Source_CommonLoadingScreen_Public_LoadingProcessTask_h_11_ACCESSORS
#define FID_PalWorldSDK_Plugins_CommonLoadingScreen_Source_CommonLoadingScreen_Public_LoadingProcessTask_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULoadingProcessTask(); \
	friend struct Z_Construct_UClass_ULoadingProcessTask_Statics; \
public: \
	DECLARE_CLASS(ULoadingProcessTask, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonLoadingScreen"), NO_API) \
	DECLARE_SERIALIZER(ULoadingProcessTask) \
	virtual UObject* _getUObject() const override { return const_cast<ULoadingProcessTask*>(this); }


#define FID_PalWorldSDK_Plugins_CommonLoadingScreen_Source_CommonLoadingScreen_Public_LoadingProcessTask_h_11_INCLASS \
private: \
	static void StaticRegisterNativesULoadingProcessTask(); \
	friend struct Z_Construct_UClass_ULoadingProcessTask_Statics; \
public: \
	DECLARE_CLASS(ULoadingProcessTask, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonLoadingScreen"), NO_API) \
	DECLARE_SERIALIZER(ULoadingProcessTask) \
	virtual UObject* _getUObject() const override { return const_cast<ULoadingProcessTask*>(this); }


#define FID_PalWorldSDK_Plugins_CommonLoadingScreen_Source_CommonLoadingScreen_Public_LoadingProcessTask_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULoadingProcessTask(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULoadingProcessTask) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULoadingProcessTask); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULoadingProcessTask); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULoadingProcessTask(ULoadingProcessTask&&); \
	NO_API ULoadingProcessTask(const ULoadingProcessTask&); \
public: \
	NO_API virtual ~ULoadingProcessTask();


#define FID_PalWorldSDK_Plugins_CommonLoadingScreen_Source_CommonLoadingScreen_Public_LoadingProcessTask_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULoadingProcessTask(ULoadingProcessTask&&); \
	NO_API ULoadingProcessTask(const ULoadingProcessTask&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULoadingProcessTask); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULoadingProcessTask); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULoadingProcessTask) \
	NO_API virtual ~ULoadingProcessTask();


#define FID_PalWorldSDK_Plugins_CommonLoadingScreen_Source_CommonLoadingScreen_Public_LoadingProcessTask_h_9_PROLOG
#define FID_PalWorldSDK_Plugins_CommonLoadingScreen_Source_CommonLoadingScreen_Public_LoadingProcessTask_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PalWorldSDK_Plugins_CommonLoadingScreen_Source_CommonLoadingScreen_Public_LoadingProcessTask_h_11_SPARSE_DATA \
	FID_PalWorldSDK_Plugins_CommonLoadingScreen_Source_CommonLoadingScreen_Public_LoadingProcessTask_h_11_RPC_WRAPPERS \
	FID_PalWorldSDK_Plugins_CommonLoadingScreen_Source_CommonLoadingScreen_Public_LoadingProcessTask_h_11_ACCESSORS \
	FID_PalWorldSDK_Plugins_CommonLoadingScreen_Source_CommonLoadingScreen_Public_LoadingProcessTask_h_11_INCLASS \
	FID_PalWorldSDK_Plugins_CommonLoadingScreen_Source_CommonLoadingScreen_Public_LoadingProcessTask_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_PalWorldSDK_Plugins_CommonLoadingScreen_Source_CommonLoadingScreen_Public_LoadingProcessTask_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PalWorldSDK_Plugins_CommonLoadingScreen_Source_CommonLoadingScreen_Public_LoadingProcessTask_h_11_SPARSE_DATA \
	FID_PalWorldSDK_Plugins_CommonLoadingScreen_Source_CommonLoadingScreen_Public_LoadingProcessTask_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PalWorldSDK_Plugins_CommonLoadingScreen_Source_CommonLoadingScreen_Public_LoadingProcessTask_h_11_ACCESSORS \
	FID_PalWorldSDK_Plugins_CommonLoadingScreen_Source_CommonLoadingScreen_Public_LoadingProcessTask_h_11_INCLASS_NO_PURE_DECLS \
	FID_PalWorldSDK_Plugins_CommonLoadingScreen_Source_CommonLoadingScreen_Public_LoadingProcessTask_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMMONLOADINGSCREEN_API UClass* StaticClass<class ULoadingProcessTask>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PalWorldSDK_Plugins_CommonLoadingScreen_Source_CommonLoadingScreen_Public_LoadingProcessTask_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
