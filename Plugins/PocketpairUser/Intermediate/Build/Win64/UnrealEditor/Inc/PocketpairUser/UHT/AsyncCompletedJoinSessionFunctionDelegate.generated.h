// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncCompletedJoinSessionFunctionDelegate.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class JoinSessionResultType : uint8;
#ifdef POCKETPAIRUSER_AsyncCompletedJoinSessionFunctionDelegate_generated_h
#error "AsyncCompletedJoinSessionFunctionDelegate.generated.h already included, missing '#pragma once' in AsyncCompletedJoinSessionFunctionDelegate.h"
#endif
#define POCKETPAIRUSER_AsyncCompletedJoinSessionFunctionDelegate_generated_h

#define FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_AsyncCompletedJoinSessionFunctionDelegate_h_6_DELEGATE \
struct _Script_PocketpairUser_eventAsyncCompletedJoinSessionFunction_Parms \
{ \
	bool IsSuccess; \
	JoinSessionResultType Type; \
}; \
static inline void FAsyncCompletedJoinSessionFunction_DelegateWrapper(const FMulticastScriptDelegate& AsyncCompletedJoinSessionFunction, bool IsSuccess, JoinSessionResultType Type) \
{ \
	_Script_PocketpairUser_eventAsyncCompletedJoinSessionFunction_Parms Parms; \
	Parms.IsSuccess=IsSuccess ? true : false; \
	Parms.Type=Type; \
	AsyncCompletedJoinSessionFunction.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_AsyncCompletedJoinSessionFunctionDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
