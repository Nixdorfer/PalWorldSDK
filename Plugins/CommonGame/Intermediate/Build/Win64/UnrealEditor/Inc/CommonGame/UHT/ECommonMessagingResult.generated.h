// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ECommonMessagingResult.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMMONGAME_ECommonMessagingResult_generated_h
#error "ECommonMessagingResult.generated.h already included, missing '#pragma once' in ECommonMessagingResult.h"
#endif
#define COMMONGAME_ECommonMessagingResult_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_ECommonMessagingResult_h


#define FOREACH_ENUM_ECOMMONMESSAGINGRESULT(op) \
	op(ECommonMessagingResult::Confirmed) \
	op(ECommonMessagingResult::Declined) \
	op(ECommonMessagingResult::Cancelled) \
	op(ECommonMessagingResult::Killed) \
	op(ECommonMessagingResult::Unknown) 

enum class ECommonMessagingResult : uint8;
template<> struct TIsUEnumClass<ECommonMessagingResult> { enum { Value = true }; };
template<> COMMONGAME_API UEnum* StaticEnum<ECommonMessagingResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
