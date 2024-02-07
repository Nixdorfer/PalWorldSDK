// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncCompletedLoginFunctionDelegate.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPocketpairUserInfo;
#ifdef POCKETPAIRUSER_AsyncCompletedLoginFunctionDelegate_generated_h
#error "AsyncCompletedLoginFunctionDelegate.generated.h already included, missing '#pragma once' in AsyncCompletedLoginFunctionDelegate.h"
#endif
#define POCKETPAIRUSER_AsyncCompletedLoginFunctionDelegate_generated_h

#define FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_AsyncCompletedLoginFunctionDelegate_h_7_DELEGATE \
struct _Script_PocketpairUser_eventAsyncCompletedLoginFunction_Parms \
{ \
	const UPocketpairUserInfo* UserInfo; \
	bool bSuccess; \
	FString ErrorStr; \
}; \
static inline void FAsyncCompletedLoginFunction_DelegateWrapper(const FMulticastScriptDelegate& AsyncCompletedLoginFunction, const UPocketpairUserInfo* UserInfo, bool bSuccess, const FString& ErrorStr) \
{ \
	_Script_PocketpairUser_eventAsyncCompletedLoginFunction_Parms Parms; \
	Parms.UserInfo=UserInfo; \
	Parms.bSuccess=bSuccess ? true : false; \
	Parms.ErrorStr=ErrorStr; \
	AsyncCompletedLoginFunction.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_AsyncCompletedLoginFunctionDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
