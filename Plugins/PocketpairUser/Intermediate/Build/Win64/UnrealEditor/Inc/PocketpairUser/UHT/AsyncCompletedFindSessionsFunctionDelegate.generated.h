// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncCompletedFindSessionsFunctionDelegate.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBlueprintSessionResult;
#ifdef POCKETPAIRUSER_AsyncCompletedFindSessionsFunctionDelegate_generated_h
#error "AsyncCompletedFindSessionsFunctionDelegate.generated.h already included, missing '#pragma once' in AsyncCompletedFindSessionsFunctionDelegate.h"
#endif
#define POCKETPAIRUSER_AsyncCompletedFindSessionsFunctionDelegate_generated_h

#define FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_AsyncCompletedFindSessionsFunctionDelegate_h_6_DELEGATE \
struct _Script_PocketpairUser_eventAsyncCompletedFindSessionsFunction_Parms \
{ \
	bool IsSuccess; \
	TArray<FBlueprintSessionResult> Results; \
	FString ErrorStr; \
}; \
static inline void FAsyncCompletedFindSessionsFunction_DelegateWrapper(const FMulticastScriptDelegate& AsyncCompletedFindSessionsFunction, bool IsSuccess, TArray<FBlueprintSessionResult> const& Results, const FString& ErrorStr) \
{ \
	_Script_PocketpairUser_eventAsyncCompletedFindSessionsFunction_Parms Parms; \
	Parms.IsSuccess=IsSuccess ? true : false; \
	Parms.Results=Results; \
	Parms.ErrorStr=ErrorStr; \
	AsyncCompletedFindSessionsFunction.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_AsyncCompletedFindSessionsFunctionDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
