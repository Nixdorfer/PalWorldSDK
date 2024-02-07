// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonMessagingResultMCDelegateDelegate.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ECommonMessagingResult : uint8;
#ifdef COMMONGAME_CommonMessagingResultMCDelegateDelegate_generated_h
#error "CommonMessagingResultMCDelegateDelegate.generated.h already included, missing '#pragma once' in CommonMessagingResultMCDelegateDelegate.h"
#endif
#define COMMONGAME_CommonMessagingResultMCDelegateDelegate_generated_h

#define FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_CommonMessagingResultMCDelegateDelegate_h_6_DELEGATE \
struct _Script_CommonGame_eventCommonMessagingResultMCDelegate_Parms \
{ \
	ECommonMessagingResult Result; \
}; \
static inline void FCommonMessagingResultMCDelegate_DelegateWrapper(const FMulticastScriptDelegate& CommonMessagingResultMCDelegate, ECommonMessagingResult Result) \
{ \
	_Script_CommonGame_eventCommonMessagingResultMCDelegate_Parms Parms; \
	Parms.Result=Result; \
	CommonMessagingResultMCDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_CommonMessagingResultMCDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
