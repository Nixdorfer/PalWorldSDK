// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PushContentToLayerForPlayerAsyncDelegateDelegate.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCommonActivatableWidget;
#ifdef COMMONGAME_PushContentToLayerForPlayerAsyncDelegateDelegate_generated_h
#error "PushContentToLayerForPlayerAsyncDelegateDelegate.generated.h already included, missing '#pragma once' in PushContentToLayerForPlayerAsyncDelegateDelegate.h"
#endif
#define COMMONGAME_PushContentToLayerForPlayerAsyncDelegateDelegate_generated_h

#define FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_PushContentToLayerForPlayerAsyncDelegateDelegate_h_7_DELEGATE \
struct _Script_CommonGame_eventPushContentToLayerForPlayerAsyncDelegate_Parms \
{ \
	UCommonActivatableWidget* UserWidget; \
}; \
static inline void FPushContentToLayerForPlayerAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& PushContentToLayerForPlayerAsyncDelegate, UCommonActivatableWidget* UserWidget) \
{ \
	_Script_CommonGame_eventPushContentToLayerForPlayerAsyncDelegate_Parms Parms; \
	Parms.UserWidget=UserWidget; \
	PushContentToLayerForPlayerAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_PushContentToLayerForPlayerAsyncDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
