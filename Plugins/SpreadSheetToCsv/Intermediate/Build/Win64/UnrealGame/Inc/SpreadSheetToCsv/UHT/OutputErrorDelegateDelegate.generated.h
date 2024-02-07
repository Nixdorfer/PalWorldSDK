// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OutputErrorDelegateDelegate.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPREADSHEETTOCSV_OutputErrorDelegateDelegate_generated_h
#error "OutputErrorDelegateDelegate.generated.h already included, missing '#pragma once' in OutputErrorDelegateDelegate.h"
#endif
#define SPREADSHEETTOCSV_OutputErrorDelegateDelegate_generated_h

#define FID_PalWorldSDK_Plugins_SpreadSheetToCsv_Source_SpreadSheetToCsv_Public_OutputErrorDelegateDelegate_h_5_DELEGATE \
struct _Script_SpreadSheetToCsv_eventOutputErrorDelegate_Parms \
{ \
	FString ErrorMsg; \
}; \
static inline void FOutputErrorDelegate_DelegateWrapper(const FMulticastScriptDelegate& OutputErrorDelegate, const FString& ErrorMsg) \
{ \
	_Script_SpreadSheetToCsv_eventOutputErrorDelegate_Parms Parms; \
	Parms.ErrorMsg=ErrorMsg; \
	OutputErrorDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PalWorldSDK_Plugins_SpreadSheetToCsv_Source_SpreadSheetToCsv_Public_OutputErrorDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
