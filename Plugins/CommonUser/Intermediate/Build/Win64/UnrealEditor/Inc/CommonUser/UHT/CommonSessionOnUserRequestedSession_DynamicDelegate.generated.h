// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonSessionOnUserRequestedSession_DynamicDelegate.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCommonSession_SearchResult;
struct FOnlineResultInformation;
struct FPlatformUserId;
#ifdef COMMONUSER_CommonSessionOnUserRequestedSession_DynamicDelegate_generated_h
#error "CommonSessionOnUserRequestedSession_DynamicDelegate.generated.h already included, missing '#pragma once' in CommonSessionOnUserRequestedSession_DynamicDelegate.h"
#endif
#define COMMONUSER_CommonSessionOnUserRequestedSession_DynamicDelegate_generated_h

#define FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionOnUserRequestedSession_DynamicDelegate_h_9_DELEGATE \
struct _Script_CommonUser_eventCommonSessionOnUserRequestedSession_Dynamic_Parms \
{ \
	FPlatformUserId LocalPlatformUserId; \
	UCommonSession_SearchResult* RequestedSession; \
	FOnlineResultInformation RequestedSessionResult; \
}; \
static inline void FCommonSessionOnUserRequestedSession_Dynamic_DelegateWrapper(const FMulticastScriptDelegate& CommonSessionOnUserRequestedSession_Dynamic, FPlatformUserId const& LocalPlatformUserId, UCommonSession_SearchResult* RequestedSession, FOnlineResultInformation const& RequestedSessionResult) \
{ \
	_Script_CommonUser_eventCommonSessionOnUserRequestedSession_Dynamic_Parms Parms; \
	Parms.LocalPlatformUserId=LocalPlatformUserId; \
	Parms.RequestedSession=RequestedSession; \
	Parms.RequestedSessionResult=RequestedSessionResult; \
	CommonSessionOnUserRequestedSession_Dynamic.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionOnUserRequestedSession_DynamicDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
