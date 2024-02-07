// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PPSkyCreatorFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UMaterialParameterCollection;
class UObject;
class UTexture2D;
class UTextureRenderTarget2D;
struct FDateTime;
struct FPPCelestialPositionData;
#ifdef PPSKYCREATORPLUGIN_PPSkyCreatorFunctionLibrary_generated_h
#error "PPSkyCreatorFunctionLibrary.generated.h already included, missing '#pragma once' in PPSkyCreatorFunctionLibrary.h"
#endif
#define PPSKYCREATORPLUGIN_PPSkyCreatorFunctionLibrary_generated_h

#define FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPSkyCreatorFunctionLibrary_h_18_SPARSE_DATA
#define FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPSkyCreatorFunctionLibrary_h_18_RPC_WRAPPERS \
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


#define FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPSkyCreatorFunctionLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPSkyCreatorFunctionLibrary_h_18_ACCESSORS
#define FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPSkyCreatorFunctionLibrary_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPPSkyCreatorFunctionLibrary(); \
	friend struct Z_Construct_UClass_UPPSkyCreatorFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UPPSkyCreatorFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PPSkyCreatorPlugin"), NO_API) \
	DECLARE_SERIALIZER(UPPSkyCreatorFunctionLibrary)


#define FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPSkyCreatorFunctionLibrary_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUPPSkyCreatorFunctionLibrary(); \
	friend struct Z_Construct_UClass_UPPSkyCreatorFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UPPSkyCreatorFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PPSkyCreatorPlugin"), NO_API) \
	DECLARE_SERIALIZER(UPPSkyCreatorFunctionLibrary)


#define FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPSkyCreatorFunctionLibrary_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPPSkyCreatorFunctionLibrary(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPPSkyCreatorFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPPSkyCreatorFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPPSkyCreatorFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPPSkyCreatorFunctionLibrary(UPPSkyCreatorFunctionLibrary&&); \
	NO_API UPPSkyCreatorFunctionLibrary(const UPPSkyCreatorFunctionLibrary&); \
public: \
	NO_API virtual ~UPPSkyCreatorFunctionLibrary();


#define FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPSkyCreatorFunctionLibrary_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPPSkyCreatorFunctionLibrary(UPPSkyCreatorFunctionLibrary&&); \
	NO_API UPPSkyCreatorFunctionLibrary(const UPPSkyCreatorFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPPSkyCreatorFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPPSkyCreatorFunctionLibrary); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPPSkyCreatorFunctionLibrary) \
	NO_API virtual ~UPPSkyCreatorFunctionLibrary();


#define FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPSkyCreatorFunctionLibrary_h_16_PROLOG
#define FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPSkyCreatorFunctionLibrary_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPSkyCreatorFunctionLibrary_h_18_SPARSE_DATA \
	FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPSkyCreatorFunctionLibrary_h_18_RPC_WRAPPERS \
	FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPSkyCreatorFunctionLibrary_h_18_ACCESSORS \
	FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPSkyCreatorFunctionLibrary_h_18_INCLASS \
	FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPSkyCreatorFunctionLibrary_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPSkyCreatorFunctionLibrary_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPSkyCreatorFunctionLibrary_h_18_SPARSE_DATA \
	FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPSkyCreatorFunctionLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPSkyCreatorFunctionLibrary_h_18_ACCESSORS \
	FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPSkyCreatorFunctionLibrary_h_18_INCLASS_NO_PURE_DECLS \
	FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPSkyCreatorFunctionLibrary_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PPSKYCREATORPLUGIN_API UClass* StaticClass<class UPPSkyCreatorFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_PPSkyCreatorFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
