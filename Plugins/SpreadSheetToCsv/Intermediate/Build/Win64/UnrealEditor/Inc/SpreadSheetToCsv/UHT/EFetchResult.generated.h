// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EFetchResult.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPREADSHEETTOCSV_EFetchResult_generated_h
#error "EFetchResult.generated.h already included, missing '#pragma once' in EFetchResult.h"
#endif
#define SPREADSHEETTOCSV_EFetchResult_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PalWorldSDK_Plugins_SpreadSheetToCsv_Source_SpreadSheetToCsv_Public_EFetchResult_h


#define FOREACH_ENUM_EFETCHRESULT(op) \
	op(EFetchResult::Success) \
	op(EFetchResult::HttpFailed) \
	op(EFetchResult::JSONParsingFailed) 

enum class EFetchResult : uint8;
template<> struct TIsUEnumClass<EFetchResult> { enum { Value = true }; };
template<> SPREADSHEETTOCSV_API UEnum* StaticEnum<EFetchResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
