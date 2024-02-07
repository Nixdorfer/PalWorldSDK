// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonSessionOnCreateSessionComplete_DynamicDelegate.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FOnlineResultInformation;
#ifdef COMMONUSER_CommonSessionOnCreateSessionComplete_DynamicDelegate_generated_h
#error "CommonSessionOnCreateSessionComplete_DynamicDelegate.generated.h already included, missing '#pragma once' in CommonSessionOnCreateSessionComplete_DynamicDelegate.h"
#endif
#define COMMONUSER_CommonSessionOnCreateSessionComplete_DynamicDelegate_generated_h

#define FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionOnCreateSessionComplete_DynamicDelegate_h_6_DELEGATE \
struct _Script_CommonUser_eventCommonSessionOnCreateSessionComplete_Dynamic_Parms \
{ \
	FOnlineResultInformation Result; \
}; \
static inline void FCommonSessionOnCreateSessionComplete_Dynamic_DelegateWrapper(const FMulticastScriptDelegate& CommonSessionOnCreateSessionComplete_Dynamic, FOnlineResultInformation const& Result) \
{ \
	_Script_CommonUser_eventCommonSessionOnCreateSessionComplete_Dynamic_Parms Parms; \
	Parms.Result=Result; \
	CommonSessionOnCreateSessionComplete_Dynamic.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionOnCreateSessionComplete_DynamicDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
