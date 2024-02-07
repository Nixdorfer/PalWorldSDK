// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EFSR2LandscapeHISMMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FSR2TEMPORALUPSCALING_EFSR2LandscapeHISMMode_generated_h
#error "EFSR2LandscapeHISMMode.generated.h already included, missing '#pragma once' in EFSR2LandscapeHISMMode.h"
#endif
#define FSR2TEMPORALUPSCALING_EFSR2LandscapeHISMMode_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PalWorldSDK_Plugins_FSR2_Source_FSR2TemporalUpscaling_Public_EFSR2LandscapeHISMMode_h


#define FOREACH_ENUM_EFSR2LANDSCAPEHISMMODE(op) \
	op(EFSR2LandscapeHISMMode::Off) \
	op(EFSR2LandscapeHISMMode::AllStatic) \
	op(EFSR2LandscapeHISMMode::StaticWPO) 

enum class EFSR2LandscapeHISMMode : int32;
template<> struct TIsUEnumClass<EFSR2LandscapeHISMMode> { enum { Value = true }; };
template<> FSR2TEMPORALUPSCALING_API UEnum* StaticEnum<EFSR2LandscapeHISMMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
