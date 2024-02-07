// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonSessionOnJoinSessionComplete_DynamicDelegate.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FOnlineResultInformation;
#ifdef COMMONUSER_CommonSessionOnJoinSessionComplete_DynamicDelegate_generated_h
#error "CommonSessionOnJoinSessionComplete_DynamicDelegate.generated.h already included, missing '#pragma once' in CommonSessionOnJoinSessionComplete_DynamicDelegate.h"
#endif
#define COMMONUSER_CommonSessionOnJoinSessionComplete_DynamicDelegate_generated_h

#define FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionOnJoinSessionComplete_DynamicDelegate_h_6_DELEGATE \
struct _Script_CommonUser_eventCommonSessionOnJoinSessionComplete_Dynamic_Parms \
{ \
	FOnlineResultInformation Result; \
}; \
static inline void FCommonSessionOnJoinSessionComplete_Dynamic_DelegateWrapper(const FMulticastScriptDelegate& CommonSessionOnJoinSessionComplete_Dynamic, FOnlineResultInformation const& Result) \
{ \
	_Script_CommonUser_eventCommonSessionOnJoinSessionComplete_Dynamic_Parms Parms; \
	Parms.Result=Result; \
	CommonSessionOnJoinSessionComplete_Dynamic.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonSessionOnJoinSessionComplete_DynamicDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
