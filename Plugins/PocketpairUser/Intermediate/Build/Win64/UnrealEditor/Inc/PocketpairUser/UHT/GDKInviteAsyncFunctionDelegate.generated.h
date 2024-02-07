// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GDKInviteAsyncFunctionDelegate.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef POCKETPAIRUSER_GDKInviteAsyncFunctionDelegate_generated_h
#error "GDKInviteAsyncFunctionDelegate.generated.h already included, missing '#pragma once' in GDKInviteAsyncFunctionDelegate.h"
#endif
#define POCKETPAIRUSER_GDKInviteAsyncFunctionDelegate_generated_h

#define FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_GDKInviteAsyncFunctionDelegate_h_5_DELEGATE \
struct _Script_PocketpairUser_eventGDKInviteAsyncFunction_Parms \
{ \
	FString InviteCode; \
}; \
static inline void FGDKInviteAsyncFunction_DelegateWrapper(const FMulticastScriptDelegate& GDKInviteAsyncFunction, const FString& InviteCode) \
{ \
	_Script_PocketpairUser_eventGDKInviteAsyncFunction_Parms Parms; \
	Parms.InviteCode=InviteCode; \
	GDKInviteAsyncFunction.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_GDKInviteAsyncFunctionDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
