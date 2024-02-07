// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TraceUtils.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UObject;
struct FHitResult;
struct FLinearColor;
#ifdef CAPSULETRACEROTATION_TraceUtils_generated_h
#error "TraceUtils.generated.h already included, missing '#pragma once' in TraceUtils.h"
#endif
#define CAPSULETRACEROTATION_TraceUtils_generated_h

#define FID_PalWorldSDK_Plugins_EnginePlugins_CapsuleTraceRotation_Source_CapsuleTraceRotation_Public_TraceUtils_h_18_SPARSE_DATA
#define FID_PalWorldSDK_Plugins_EnginePlugins_CapsuleTraceRotation_Source_CapsuleTraceRotation_Public_TraceUtils_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCapsuleTraceMulti); \
	DECLARE_FUNCTION(execCapsuleTraceMultiByProfile); \
	DECLARE_FUNCTION(execCapsuleTraceMultiForObjects); \
	DECLARE_FUNCTION(execCapsuleTraceSingle); \
	DECLARE_FUNCTION(execCapsuleTraceSingleByProfile); \
	DECLARE_FUNCTION(execCapsuleTraceSingleForObjects);


#define FID_PalWorldSDK_Plugins_EnginePlugins_CapsuleTraceRotation_Source_CapsuleTraceRotation_Public_TraceUtils_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCapsuleTraceMulti); \
	DECLARE_FUNCTION(execCapsuleTraceMultiByProfile); \
	DECLARE_FUNCTION(execCapsuleTraceMultiForObjects); \
	DECLARE_FUNCTION(execCapsuleTraceSingle); \
	DECLARE_FUNCTION(execCapsuleTraceSingleByProfile); \
	DECLARE_FUNCTION(execCapsuleTraceSingleForObjects);


#define FID_PalWorldSDK_Plugins_EnginePlugins_CapsuleTraceRotation_Source_CapsuleTraceRotation_Public_TraceUtils_h_18_ACCESSORS
#define FID_PalWorldSDK_Plugins_EnginePlugins_CapsuleTraceRotation_Source_CapsuleTraceRotation_Public_TraceUtils_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTraceUtils(); \
	friend struct Z_Construct_UClass_UTraceUtils_Statics; \
public: \
	DECLARE_CLASS(UTraceUtils, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CapsuleTraceRotation"), NO_API) \
	DECLARE_SERIALIZER(UTraceUtils)


#define FID_PalWorldSDK_Plugins_EnginePlugins_CapsuleTraceRotation_Source_CapsuleTraceRotation_Public_TraceUtils_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUTraceUtils(); \
	friend struct Z_Construct_UClass_UTraceUtils_Statics; \
public: \
	DECLARE_CLASS(UTraceUtils, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CapsuleTraceRotation"), NO_API) \
	DECLARE_SERIALIZER(UTraceUtils)


#define FID_PalWorldSDK_Plugins_EnginePlugins_CapsuleTraceRotation_Source_CapsuleTraceRotation_Public_TraceUtils_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTraceUtils(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTraceUtils) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTraceUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTraceUtils); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTraceUtils(UTraceUtils&&); \
	NO_API UTraceUtils(const UTraceUtils&); \
public: \
	NO_API virtual ~UTraceUtils();


#define FID_PalWorldSDK_Plugins_EnginePlugins_CapsuleTraceRotation_Source_CapsuleTraceRotation_Public_TraceUtils_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTraceUtils(UTraceUtils&&); \
	NO_API UTraceUtils(const UTraceUtils&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTraceUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTraceUtils); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTraceUtils) \
	NO_API virtual ~UTraceUtils();


#define FID_PalWorldSDK_Plugins_EnginePlugins_CapsuleTraceRotation_Source_CapsuleTraceRotation_Public_TraceUtils_h_16_PROLOG
#define FID_PalWorldSDK_Plugins_EnginePlugins_CapsuleTraceRotation_Source_CapsuleTraceRotation_Public_TraceUtils_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PalWorldSDK_Plugins_EnginePlugins_CapsuleTraceRotation_Source_CapsuleTraceRotation_Public_TraceUtils_h_18_SPARSE_DATA \
	FID_PalWorldSDK_Plugins_EnginePlugins_CapsuleTraceRotation_Source_CapsuleTraceRotation_Public_TraceUtils_h_18_RPC_WRAPPERS \
	FID_PalWorldSDK_Plugins_EnginePlugins_CapsuleTraceRotation_Source_CapsuleTraceRotation_Public_TraceUtils_h_18_ACCESSORS \
	FID_PalWorldSDK_Plugins_EnginePlugins_CapsuleTraceRotation_Source_CapsuleTraceRotation_Public_TraceUtils_h_18_INCLASS \
	FID_PalWorldSDK_Plugins_EnginePlugins_CapsuleTraceRotation_Source_CapsuleTraceRotation_Public_TraceUtils_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_PalWorldSDK_Plugins_EnginePlugins_CapsuleTraceRotation_Source_CapsuleTraceRotation_Public_TraceUtils_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PalWorldSDK_Plugins_EnginePlugins_CapsuleTraceRotation_Source_CapsuleTraceRotation_Public_TraceUtils_h_18_SPARSE_DATA \
	FID_PalWorldSDK_Plugins_EnginePlugins_CapsuleTraceRotation_Source_CapsuleTraceRotation_Public_TraceUtils_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PalWorldSDK_Plugins_EnginePlugins_CapsuleTraceRotation_Source_CapsuleTraceRotation_Public_TraceUtils_h_18_ACCESSORS \
	FID_PalWorldSDK_Plugins_EnginePlugins_CapsuleTraceRotation_Source_CapsuleTraceRotation_Public_TraceUtils_h_18_INCLASS_NO_PURE_DECLS \
	FID_PalWorldSDK_Plugins_EnginePlugins_CapsuleTraceRotation_Source_CapsuleTraceRotation_Public_TraceUtils_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CAPSULETRACEROTATION_API UClass* StaticClass<class UTraceUtils>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PalWorldSDK_Plugins_EnginePlugins_CapsuleTraceRotation_Source_CapsuleTraceRotation_Public_TraceUtils_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
