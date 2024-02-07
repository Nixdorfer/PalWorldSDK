// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncCompletedCreateSessionFunctionDelegate.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef POCKETPAIRUSER_AsyncCompletedCreateSessionFunctionDelegate_generated_h
#error "AsyncCompletedCreateSessionFunctionDelegate.generated.h already included, missing '#pragma once' in AsyncCompletedCreateSessionFunctionDelegate.h"
#endif
#define POCKETPAIRUSER_AsyncCompletedCreateSessionFunctionDelegate_generated_h

#define FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_AsyncCompletedCreateSessionFunctionDelegate_h_5_DELEGATE \
struct _Script_PocketpairUser_eventAsyncCompletedCreateSessionFunction_Parms \
{ \
	bool IsSuccess; \
	FString ErrorStr; \
}; \
static inline void FAsyncCompletedCreateSessionFunction_DelegateWrapper(const FMulticastScriptDelegate& AsyncCompletedCreateSessionFunction, bool IsSuccess, const FString& ErrorStr) \
{ \
	_Script_PocketpairUser_eventAsyncCompletedCreateSessionFunction_Parms Parms; \
	Parms.IsSuccess=IsSuccess ? true : false; \
	Parms.ErrorStr=ErrorStr; \
	AsyncCompletedCreateSessionFunction.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_AsyncCompletedCreateSessionFunctionDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
