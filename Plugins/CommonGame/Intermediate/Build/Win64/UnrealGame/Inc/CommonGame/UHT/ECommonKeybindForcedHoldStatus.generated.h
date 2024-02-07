// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ECommonKeybindForcedHoldStatus.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMMONGAME_ECommonKeybindForcedHoldStatus_generated_h
#error "ECommonKeybindForcedHoldStatus.generated.h already included, missing '#pragma once' in ECommonKeybindForcedHoldStatus.h"
#endif
#define COMMONGAME_ECommonKeybindForcedHoldStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_ECommonKeybindForcedHoldStatus_h


#define FOREACH_ENUM_ECOMMONKEYBINDFORCEDHOLDSTATUS(op) \
	op(ECommonKeybindForcedHoldStatus::NoForcedHold) \
	op(ECommonKeybindForcedHoldStatus::ForcedHold) \
	op(ECommonKeybindForcedHoldStatus::NeverShowHold) 

enum class ECommonKeybindForcedHoldStatus : uint8;
template<> struct TIsUEnumClass<ECommonKeybindForcedHoldStatus> { enum { Value = true }; };
template<> COMMONGAME_API UEnum* StaticEnum<ECommonKeybindForcedHoldStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
