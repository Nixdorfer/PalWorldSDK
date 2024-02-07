// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonSession_FindSessionsFinishedDynamicDelegate.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMMONUSER_CommonSession_FindSessionsFinishedDynamicDelegate_generated_h
#error "CommonSession_FindSessionsFinishedDynamicDelegate.generated.h already included, missing '#pragma once' in CommonSession_FindSessionsFinishedDynamicDelegate.h"
#endif
#define COMMONUSER_CommonSession_FindSessionsFinishedDynamicDelegate_generated_h

#define FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonSession_FindSessionsFinishedDynamicDelegate_h_5_DELEGATE \
struct _Script_CommonUser_eventCommonSession_FindSessionsFinishedDynamic_Parms \
{ \
	bool bSucceeded; \
	FText ErrorMessage; \
}; \
static inline void FCommonSession_FindSessionsFinishedDynamic_DelegateWrapper(const FMulticastScriptDelegate& CommonSession_FindSessionsFinishedDynamic, bool bSucceeded, const FText& ErrorMessage) \
{ \
	_Script_CommonUser_eventCommonSession_FindSessionsFinishedDynamic_Parms Parms; \
	Parms.bSucceeded=bSucceeded ? true : false; \
	Parms.ErrorMessage=ErrorMessage; \
	CommonSession_FindSessionsFinishedDynamic.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonSession_FindSessionsFinishedDynamicDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
