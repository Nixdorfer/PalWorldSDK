// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncCompletedLoginEOSFunctionDelegate.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPocketpairUserInfo;
#ifdef POCKETPAIRUSER_AsyncCompletedLoginEOSFunctionDelegate_generated_h
#error "AsyncCompletedLoginEOSFunctionDelegate.generated.h already included, missing '#pragma once' in AsyncCompletedLoginEOSFunctionDelegate.h"
#endif
#define POCKETPAIRUSER_AsyncCompletedLoginEOSFunctionDelegate_generated_h

#define FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_AsyncCompletedLoginEOSFunctionDelegate_h_7_DELEGATE \
struct _Script_PocketpairUser_eventAsyncCompletedLoginEOSFunction_Parms \
{ \
	const UPocketpairUserInfo* UserInfo; \
	bool bSuccess; \
	FString ErrorStr; \
}; \
static inline void FAsyncCompletedLoginEOSFunction_DelegateWrapper(const FMulticastScriptDelegate& AsyncCompletedLoginEOSFunction, const UPocketpairUserInfo* UserInfo, bool bSuccess, const FString& ErrorStr) \
{ \
	_Script_PocketpairUser_eventAsyncCompletedLoginEOSFunction_Parms Parms; \
	Parms.UserInfo=UserInfo; \
	Parms.bSuccess=bSuccess ? true : false; \
	Parms.ErrorStr=ErrorStr; \
	AsyncCompletedLoginEOSFunction.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_AsyncCompletedLoginEOSFunctionDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
