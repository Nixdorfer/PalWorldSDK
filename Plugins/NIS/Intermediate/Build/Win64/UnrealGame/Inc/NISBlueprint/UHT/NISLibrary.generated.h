// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NISLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class UNISMode : uint8;
#ifdef NISBLUEPRINT_NISLibrary_generated_h
#error "NISLibrary.generated.h already included, missing '#pragma once' in NISLibrary.h"
#endif
#define NISBLUEPRINT_NISLibrary_generated_h

#define FID_PalWorldSDK_Plugins_NIS_Source_NISBlueprint_Public_NISLibrary_h_9_SPARSE_DATA
#define FID_PalWorldSDK_Plugins_NIS_Source_NISBlueprint_Public_NISLibrary_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDefaultNISMode); \
	DECLARE_FUNCTION(execGetNISRecommendedScreenPercentage); \
	DECLARE_FUNCTION(execGetNISScreenPercentageRange); \
	DECLARE_FUNCTION(execGetSupportedNISModes); \
	DECLARE_FUNCTION(execIsNISModeSupported); \
	DECLARE_FUNCTION(execIsNISSupported); \
	DECLARE_FUNCTION(execSetNISCustomScreenPercentage); \
	DECLARE_FUNCTION(execSetNISMode); \
	DECLARE_FUNCTION(execSetNISSharpness);


#define FID_PalWorldSDK_Plugins_NIS_Source_NISBlueprint_Public_NISLibrary_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDefaultNISMode); \
	DECLARE_FUNCTION(execGetNISRecommendedScreenPercentage); \
	DECLARE_FUNCTION(execGetNISScreenPercentageRange); \
	DECLARE_FUNCTION(execGetSupportedNISModes); \
	DECLARE_FUNCTION(execIsNISModeSupported); \
	DECLARE_FUNCTION(execIsNISSupported); \
	DECLARE_FUNCTION(execSetNISCustomScreenPercentage); \
	DECLARE_FUNCTION(execSetNISMode); \
	DECLARE_FUNCTION(execSetNISSharpness);


#define FID_PalWorldSDK_Plugins_NIS_Source_NISBlueprint_Public_NISLibrary_h_9_ACCESSORS
#define FID_PalWorldSDK_Plugins_NIS_Source_NISBlueprint_Public_NISLibrary_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNISLibrary(); \
	friend struct Z_Construct_UClass_UNISLibrary_Statics; \
public: \
	DECLARE_CLASS(UNISLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NISBlueprint"), NISBLUEPRINT_API) \
	DECLARE_SERIALIZER(UNISLibrary)


#define FID_PalWorldSDK_Plugins_NIS_Source_NISBlueprint_Public_NISLibrary_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUNISLibrary(); \
	friend struct Z_Construct_UClass_UNISLibrary_Statics; \
public: \
	DECLARE_CLASS(UNISLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NISBlueprint"), NISBLUEPRINT_API) \
	DECLARE_SERIALIZER(UNISLibrary)


#define FID_PalWorldSDK_Plugins_NIS_Source_NISBlueprint_Public_NISLibrary_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NISBLUEPRINT_API UNISLibrary(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNISLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NISBLUEPRINT_API, UNISLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNISLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NISBLUEPRINT_API UNISLibrary(UNISLibrary&&); \
	NISBLUEPRINT_API UNISLibrary(const UNISLibrary&); \
public: \
	NISBLUEPRINT_API virtual ~UNISLibrary();


#define FID_PalWorldSDK_Plugins_NIS_Source_NISBlueprint_Public_NISLibrary_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NISBLUEPRINT_API UNISLibrary(UNISLibrary&&); \
	NISBLUEPRINT_API UNISLibrary(const UNISLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NISBLUEPRINT_API, UNISLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNISLibrary); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNISLibrary) \
	NISBLUEPRINT_API virtual ~UNISLibrary();


#define FID_PalWorldSDK_Plugins_NIS_Source_NISBlueprint_Public_NISLibrary_h_7_PROLOG
#define FID_PalWorldSDK_Plugins_NIS_Source_NISBlueprint_Public_NISLibrary_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PalWorldSDK_Plugins_NIS_Source_NISBlueprint_Public_NISLibrary_h_9_SPARSE_DATA \
	FID_PalWorldSDK_Plugins_NIS_Source_NISBlueprint_Public_NISLibrary_h_9_RPC_WRAPPERS \
	FID_PalWorldSDK_Plugins_NIS_Source_NISBlueprint_Public_NISLibrary_h_9_ACCESSORS \
	FID_PalWorldSDK_Plugins_NIS_Source_NISBlueprint_Public_NISLibrary_h_9_INCLASS \
	FID_PalWorldSDK_Plugins_NIS_Source_NISBlueprint_Public_NISLibrary_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_PalWorldSDK_Plugins_NIS_Source_NISBlueprint_Public_NISLibrary_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PalWorldSDK_Plugins_NIS_Source_NISBlueprint_Public_NISLibrary_h_9_SPARSE_DATA \
	FID_PalWorldSDK_Plugins_NIS_Source_NISBlueprint_Public_NISLibrary_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PalWorldSDK_Plugins_NIS_Source_NISBlueprint_Public_NISLibrary_h_9_ACCESSORS \
	FID_PalWorldSDK_Plugins_NIS_Source_NISBlueprint_Public_NISLibrary_h_9_INCLASS_NO_PURE_DECLS \
	FID_PalWorldSDK_Plugins_NIS_Source_NISBlueprint_Public_NISLibrary_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NISBLUEPRINT_API UClass* StaticClass<class UNISLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PalWorldSDK_Plugins_NIS_Source_NISBlueprint_Public_NISLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
