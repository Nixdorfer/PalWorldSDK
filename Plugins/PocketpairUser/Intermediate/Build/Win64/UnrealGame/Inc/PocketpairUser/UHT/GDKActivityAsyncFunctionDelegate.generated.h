// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GDKActivityAsyncFunctionDelegate.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef POCKETPAIRUSER_GDKActivityAsyncFunctionDelegate_generated_h
#error "GDKActivityAsyncFunctionDelegate.generated.h already included, missing '#pragma once' in GDKActivityAsyncFunctionDelegate.h"
#endif
#define POCKETPAIRUSER_GDKActivityAsyncFunctionDelegate_generated_h

#define FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_GDKActivityAsyncFunctionDelegate_h_5_DELEGATE \
struct _Script_PocketpairUser_eventGDKActivityAsyncFunction_Parms \
{ \
	FString ResponseBody; \
	bool bResponseOK; \
	int32 ResponseCode; \
}; \
static inline void FGDKActivityAsyncFunction_DelegateWrapper(const FMulticastScriptDelegate& GDKActivityAsyncFunction, const FString& ResponseBody, bool bResponseOK, int32 ResponseCode) \
{ \
	_Script_PocketpairUser_eventGDKActivityAsyncFunction_Parms Parms; \
	Parms.ResponseBody=ResponseBody; \
	Parms.bResponseOK=bResponseOK ? true : false; \
	Parms.ResponseCode=ResponseCode; \
	GDKActivityAsyncFunction.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_GDKActivityAsyncFunctionDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
