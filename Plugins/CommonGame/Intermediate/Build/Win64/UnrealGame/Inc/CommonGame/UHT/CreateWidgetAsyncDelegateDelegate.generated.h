// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CreateWidgetAsyncDelegateDelegate.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUserWidget;
#ifdef COMMONGAME_CreateWidgetAsyncDelegateDelegate_generated_h
#error "CreateWidgetAsyncDelegateDelegate.generated.h already included, missing '#pragma once' in CreateWidgetAsyncDelegateDelegate.h"
#endif
#define COMMONGAME_CreateWidgetAsyncDelegateDelegate_generated_h

#define FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_CreateWidgetAsyncDelegateDelegate_h_7_DELEGATE \
struct _Script_CommonGame_eventCreateWidgetAsyncDelegate_Parms \
{ \
	UUserWidget* UserWidget; \
}; \
static inline void FCreateWidgetAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& CreateWidgetAsyncDelegate, UUserWidget* UserWidget) \
{ \
	_Script_CommonGame_eventCreateWidgetAsyncDelegate_Parms Parms; \
	Parms.UserWidget=UserWidget; \
	CreateWidgetAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_CreateWidgetAsyncDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
