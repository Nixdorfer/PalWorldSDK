// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlacementToolBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLACEMENTTOOLS_PlacementToolBase_generated_h
#error "PlacementToolBase.generated.h already included, missing '#pragma once' in PlacementToolBase.h"
#endif
#define PLACEMENTTOOLS_PlacementToolBase_generated_h

#define FID_PalWorldSDK_Plugins_EnginePlugins_PlacementTools_Source_PlacementTools_Public_PlacementToolBase_h_20_SPARSE_DATA
#define FID_PalWorldSDK_Plugins_EnginePlugins_PlacementTools_Source_PlacementTools_Public_PlacementToolBase_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGenerate); \
	DECLARE_FUNCTION(execRandomizeSeed);


#define FID_PalWorldSDK_Plugins_EnginePlugins_PlacementTools_Source_PlacementTools_Public_PlacementToolBase_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGenerate); \
	DECLARE_FUNCTION(execRandomizeSeed);


#define FID_PalWorldSDK_Plugins_EnginePlugins_PlacementTools_Source_PlacementTools_Public_PlacementToolBase_h_20_ACCESSORS
#define FID_PalWorldSDK_Plugins_EnginePlugins_PlacementTools_Source_PlacementTools_Public_PlacementToolBase_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlacementToolBase(); \
	friend struct Z_Construct_UClass_APlacementToolBase_Statics; \
public: \
	DECLARE_CLASS(APlacementToolBase, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/PlacementTools"), NO_API) \
	DECLARE_SERIALIZER(APlacementToolBase)


#define FID_PalWorldSDK_Plugins_EnginePlugins_PlacementTools_Source_PlacementTools_Public_PlacementToolBase_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAPlacementToolBase(); \
	friend struct Z_Construct_UClass_APlacementToolBase_Statics; \
public: \
	DECLARE_CLASS(APlacementToolBase, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/PlacementTools"), NO_API) \
	DECLARE_SERIALIZER(APlacementToolBase)


#define FID_PalWorldSDK_Plugins_EnginePlugins_PlacementTools_Source_PlacementTools_Public_PlacementToolBase_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlacementToolBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlacementToolBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlacementToolBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlacementToolBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlacementToolBase(APlacementToolBase&&); \
	NO_API APlacementToolBase(const APlacementToolBase&); \
public: \
	NO_API virtual ~APlacementToolBase();


#define FID_PalWorldSDK_Plugins_EnginePlugins_PlacementTools_Source_PlacementTools_Public_PlacementToolBase_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlacementToolBase(APlacementToolBase&&); \
	NO_API APlacementToolBase(const APlacementToolBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlacementToolBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlacementToolBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(APlacementToolBase) \
	NO_API virtual ~APlacementToolBase();


#define FID_PalWorldSDK_Plugins_EnginePlugins_PlacementTools_Source_PlacementTools_Public_PlacementToolBase_h_18_PROLOG
#define FID_PalWorldSDK_Plugins_EnginePlugins_PlacementTools_Source_PlacementTools_Public_PlacementToolBase_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PalWorldSDK_Plugins_EnginePlugins_PlacementTools_Source_PlacementTools_Public_PlacementToolBase_h_20_SPARSE_DATA \
	FID_PalWorldSDK_Plugins_EnginePlugins_PlacementTools_Source_PlacementTools_Public_PlacementToolBase_h_20_RPC_WRAPPERS \
	FID_PalWorldSDK_Plugins_EnginePlugins_PlacementTools_Source_PlacementTools_Public_PlacementToolBase_h_20_ACCESSORS \
	FID_PalWorldSDK_Plugins_EnginePlugins_PlacementTools_Source_PlacementTools_Public_PlacementToolBase_h_20_INCLASS \
	FID_PalWorldSDK_Plugins_EnginePlugins_PlacementTools_Source_PlacementTools_Public_PlacementToolBase_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_PalWorldSDK_Plugins_EnginePlugins_PlacementTools_Source_PlacementTools_Public_PlacementToolBase_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PalWorldSDK_Plugins_EnginePlugins_PlacementTools_Source_PlacementTools_Public_PlacementToolBase_h_20_SPARSE_DATA \
	FID_PalWorldSDK_Plugins_EnginePlugins_PlacementTools_Source_PlacementTools_Public_PlacementToolBase_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PalWorldSDK_Plugins_EnginePlugins_PlacementTools_Source_PlacementTools_Public_PlacementToolBase_h_20_ACCESSORS \
	FID_PalWorldSDK_Plugins_EnginePlugins_PlacementTools_Source_PlacementTools_Public_PlacementToolBase_h_20_INCLASS_NO_PURE_DECLS \
	FID_PalWorldSDK_Plugins_EnginePlugins_PlacementTools_Source_PlacementTools_Public_PlacementToolBase_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLACEMENTTOOLS_API UClass* StaticClass<class APlacementToolBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PalWorldSDK_Plugins_EnginePlugins_PlacementTools_Source_PlacementTools_Public_PlacementToolBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
