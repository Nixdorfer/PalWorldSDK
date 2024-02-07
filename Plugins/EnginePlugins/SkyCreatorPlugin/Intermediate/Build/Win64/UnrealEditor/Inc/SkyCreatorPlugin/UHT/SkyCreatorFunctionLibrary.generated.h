// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SkyCreatorFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UMaterialParameterCollection;
class UObject;
class UTexture2D;
class UTextureRenderTarget2D;
struct FCelestialPositionData;
struct FDateTime;
#ifdef SKYCREATORPLUGIN_SkyCreatorFunctionLibrary_generated_h
#error "SkyCreatorFunctionLibrary.generated.h already included, missing '#pragma once' in SkyCreatorFunctionLibrary.h"
#endif
#define SKYCREATORPLUGIN_SkyCreatorFunctionLibrary_generated_h

#define FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorFunctionLibrary_h_18_SPARSE_DATA
#define FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorFunctionLibrary_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCentimetersToKilometers); \
	DECLARE_FUNCTION(execCheckCloudDensityAtPosition); \
	DECLARE_FUNCTION(execConvertRenderTargetToTexture2D); \
	DECLARE_FUNCTION(execCreateAndAssignMID); \
	DECLARE_FUNCTION(execDynamicConvertRenderTargetToTexture2D); \
	DECLARE_FUNCTION(execElevationRefraction); \
	DECLARE_FUNCTION(execFindLightningPosition); \
	DECLARE_FUNCTION(execGetCloudDensityAtPosition); \
	DECLARE_FUNCTION(execGetRealMoonPosition); \
	DECLARE_FUNCTION(execGetRealSunPosition); \
	DECLARE_FUNCTION(execIsApplicationForegroundNow); \
	DECLARE_FUNCTION(execKilometersToCentimeters);


#define FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorFunctionLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCentimetersToKilometers); \
	DECLARE_FUNCTION(execCheckCloudDensityAtPosition); \
	DECLARE_FUNCTION(execConvertRenderTargetToTexture2D); \
	DECLARE_FUNCTION(execCreateAndAssignMID); \
	DECLARE_FUNCTION(execDynamicConvertRenderTargetToTexture2D); \
	DECLARE_FUNCTION(execElevationRefraction); \
	DECLARE_FUNCTION(execFindLightningPosition); \
	DECLARE_FUNCTION(execGetCloudDensityAtPosition); \
	DECLARE_FUNCTION(execGetRealMoonPosition); \
	DECLARE_FUNCTION(execGetRealSunPosition); \
	DECLARE_FUNCTION(execIsApplicationForegroundNow); \
	DECLARE_FUNCTION(execKilometersToCentimeters);


#define FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorFunctionLibrary_h_18_ACCESSORS
#define FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorFunctionLibrary_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSkyCreatorFunctionLibrary(); \
	friend struct Z_Construct_UClass_USkyCreatorFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(USkyCreatorFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SkyCreatorPlugin"), NO_API) \
	DECLARE_SERIALIZER(USkyCreatorFunctionLibrary)


#define FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorFunctionLibrary_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUSkyCreatorFunctionLibrary(); \
	friend struct Z_Construct_UClass_USkyCreatorFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(USkyCreatorFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SkyCreatorPlugin"), NO_API) \
	DECLARE_SERIALIZER(USkyCreatorFunctionLibrary)


#define FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorFunctionLibrary_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USkyCreatorFunctionLibrary(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkyCreatorFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USkyCreatorFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkyCreatorFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USkyCreatorFunctionLibrary(USkyCreatorFunctionLibrary&&); \
	NO_API USkyCreatorFunctionLibrary(const USkyCreatorFunctionLibrary&); \
public: \
	NO_API virtual ~USkyCreatorFunctionLibrary();


#define FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorFunctionLibrary_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USkyCreatorFunctionLibrary(USkyCreatorFunctionLibrary&&); \
	NO_API USkyCreatorFunctionLibrary(const USkyCreatorFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USkyCreatorFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkyCreatorFunctionLibrary); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USkyCreatorFunctionLibrary) \
	NO_API virtual ~USkyCreatorFunctionLibrary();


#define FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorFunctionLibrary_h_16_PROLOG
#define FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorFunctionLibrary_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorFunctionLibrary_h_18_SPARSE_DATA \
	FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorFunctionLibrary_h_18_RPC_WRAPPERS \
	FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorFunctionLibrary_h_18_ACCESSORS \
	FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorFunctionLibrary_h_18_INCLASS \
	FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorFunctionLibrary_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorFunctionLibrary_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorFunctionLibrary_h_18_SPARSE_DATA \
	FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorFunctionLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorFunctionLibrary_h_18_ACCESSORS \
	FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorFunctionLibrary_h_18_INCLASS_NO_PURE_DECLS \
	FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorFunctionLibrary_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SKYCREATORPLUGIN_API UClass* StaticClass<class USkyCreatorFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PalWorldSDK_Plugins_EnginePlugins_SkyCreatorPlugin_Source_SkyCreatorPlugin_Public_SkyCreatorFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
