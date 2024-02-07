// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SanitizeDisplayNameAsyncFunctionDelegate.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef POCKETPAIRUSER_SanitizeDisplayNameAsyncFunctionDelegate_generated_h
#error "SanitizeDisplayNameAsyncFunctionDelegate.generated.h already included, missing '#pragma once' in SanitizeDisplayNameAsyncFunctionDelegate.h"
#endif
#define POCKETPAIRUSER_SanitizeDisplayNameAsyncFunctionDelegate_generated_h

#define FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_SanitizeDisplayNameAsyncFunctionDelegate_h_5_DELEGATE \
struct _Script_PocketpairUser_eventSanitizeDisplayNameAsyncFunction_Parms \
{ \
	bool IsSuccess; \
	FString OutString; \
}; \
static inline void FSanitizeDisplayNameAsyncFunction_DelegateWrapper(const FMulticastScriptDelegate& SanitizeDisplayNameAsyncFunction, bool IsSuccess, const FString& OutString) \
{ \
	_Script_PocketpairUser_eventSanitizeDisplayNameAsyncFunction_Parms Parms; \
	Parms.IsSuccess=IsSuccess ? true : false; \
	Parms.OutString=OutString; \
	SanitizeDisplayNameAsyncFunction.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_SanitizeDisplayNameAsyncFunctionDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
