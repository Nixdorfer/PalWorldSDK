// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OnPingCompleteDelegate.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPingIP;
#ifdef POCKETPAIRUSER_OnPingCompleteDelegate_generated_h
#error "OnPingCompleteDelegate.generated.h already included, missing '#pragma once' in OnPingCompleteDelegate.h"
#endif
#define POCKETPAIRUSER_OnPingCompleteDelegate_generated_h

#define FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_OnPingCompleteDelegate_h_7_DELEGATE \
struct _Script_PocketpairUser_eventOnPingComplete_Parms \
{ \
	UPingIP* PingOperation; \
	FString HostName; \
	int32 TimeMS; \
}; \
static inline void FOnPingComplete_DelegateWrapper(const FMulticastScriptDelegate& OnPingComplete, UPingIP* PingOperation, const FString& HostName, int32 TimeMS) \
{ \
	_Script_PocketpairUser_eventOnPingComplete_Parms Parms; \
	Parms.PingOperation=PingOperation; \
	Parms.HostName=HostName; \
	Parms.TimeMS=TimeMS; \
	OnPingComplete.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_OnPingCompleteDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
