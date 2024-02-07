// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OnPingFailureDelegate.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPingIP;
#ifdef POCKETPAIRUSER_OnPingFailureDelegate_generated_h
#error "OnPingFailureDelegate.generated.h already included, missing '#pragma once' in OnPingFailureDelegate.h"
#endif
#define POCKETPAIRUSER_OnPingFailureDelegate_generated_h

#define FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_OnPingFailureDelegate_h_7_DELEGATE \
struct _Script_PocketpairUser_eventOnPingFailure_Parms \
{ \
	UPingIP* PingOperation; \
	FString HostName; \
}; \
static inline void FOnPingFailure_DelegateWrapper(const FMulticastScriptDelegate& OnPingFailure, UPingIP* PingOperation, const FString& HostName) \
{ \
	_Script_PocketpairUser_eventOnPingFailure_Parms Parms; \
	Parms.PingOperation=PingOperation; \
	Parms.HostName=HostName; \
	OnPingFailure.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_OnPingFailureDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
