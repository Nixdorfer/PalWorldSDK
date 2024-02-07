// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ELocalMultiplayerInteractionMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMMONGAME_ELocalMultiplayerInteractionMode_generated_h
#error "ELocalMultiplayerInteractionMode.generated.h already included, missing '#pragma once' in ELocalMultiplayerInteractionMode.h"
#endif
#define COMMONGAME_ELocalMultiplayerInteractionMode_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_ELocalMultiplayerInteractionMode_h


#define FOREACH_ENUM_ELOCALMULTIPLAYERINTERACTIONMODE(op) \
	op(ELocalMultiplayerInteractionMode::PrimaryOnly) \
	op(ELocalMultiplayerInteractionMode::SingleToggle) \
	op(ELocalMultiplayerInteractionMode::Simultaneous) 

enum class ELocalMultiplayerInteractionMode : uint8;
template<> struct TIsUEnumClass<ELocalMultiplayerInteractionMode> { enum { Value = true }; };
template<> COMMONGAME_API UEnum* StaticEnum<ELocalMultiplayerInteractionMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
