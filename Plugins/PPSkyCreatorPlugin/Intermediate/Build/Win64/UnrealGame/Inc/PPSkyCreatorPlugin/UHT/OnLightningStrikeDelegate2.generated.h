// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OnLightningStrikeDelegate2.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PPSKYCREATORPLUGIN_OnLightningStrikeDelegate2_generated_h
#error "OnLightningStrikeDelegate2.generated.h already included, missing '#pragma once' in OnLightningStrikeDelegate2.h"
#endif
#define PPSKYCREATORPLUGIN_OnLightningStrikeDelegate2_generated_h

#define FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_OnLightningStrikeDelegate2_h_6_DELEGATE \
struct _Script_PPSkyCreatorPlugin_eventOnLightningStrike_Parms \
{ \
	FVector LightningPosition; \
}; \
static inline void FOnLightningStrike_DelegateWrapper(const FMulticastScriptDelegate& OnLightningStrike, FVector LightningPosition) \
{ \
	_Script_PPSkyCreatorPlugin_eventOnLightningStrike_Parms Parms; \
	Parms.LightningPosition=LightningPosition; \
	OnLightningStrike.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PalWorldSDK_Plugins_PPSkyCreatorPlugin_Source_PPSkyCreatorPlugin_Public_OnLightningStrikeDelegate2_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
