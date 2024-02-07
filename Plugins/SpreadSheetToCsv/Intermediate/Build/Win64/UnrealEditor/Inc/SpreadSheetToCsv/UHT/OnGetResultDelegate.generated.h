// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OnGetResultDelegate.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USpreadSheetImpoter;
enum class EFetchResult : uint8;
#ifdef SPREADSHEETTOCSV_OnGetResultDelegate_generated_h
#error "OnGetResultDelegate.generated.h already included, missing '#pragma once' in OnGetResultDelegate.h"
#endif
#define SPREADSHEETTOCSV_OnGetResultDelegate_generated_h

#define FID_PalWorldSDK_Plugins_SpreadSheetToCsv_Source_SpreadSheetToCsv_Public_OnGetResultDelegate_h_8_DELEGATE \
struct _Script_SpreadSheetToCsv_eventOnGetResult_Parms \
{ \
	bool bSuccess; \
	USpreadSheetImpoter* Importer; \
	EFetchResult Status; \
}; \
static inline void FOnGetResult_DelegateWrapper(const FMulticastScriptDelegate& OnGetResult, bool bSuccess, USpreadSheetImpoter* Importer, const EFetchResult Status) \
{ \
	_Script_SpreadSheetToCsv_eventOnGetResult_Parms Parms; \
	Parms.bSuccess=bSuccess ? true : false; \
	Parms.Importer=Importer; \
	Parms.Status=Status; \
	OnGetResult.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PalWorldSDK_Plugins_SpreadSheetToCsv_Source_SpreadSheetToCsv_Public_OnGetResultDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
