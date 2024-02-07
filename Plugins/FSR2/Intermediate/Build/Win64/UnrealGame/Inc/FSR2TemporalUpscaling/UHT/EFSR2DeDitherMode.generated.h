// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EFSR2DeDitherMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FSR2TEMPORALUPSCALING_EFSR2DeDitherMode_generated_h
#error "EFSR2DeDitherMode.generated.h already included, missing '#pragma once' in EFSR2DeDitherMode.h"
#endif
#define FSR2TEMPORALUPSCALING_EFSR2DeDitherMode_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PalWorldSDK_Plugins_FSR2_Source_FSR2TemporalUpscaling_Public_EFSR2DeDitherMode_h


#define FOREACH_ENUM_EFSR2DEDITHERMODE(op) \
	op(EFSR2DeDitherMode::Off) \
	op(EFSR2DeDitherMode::Full) \
	op(EFSR2DeDitherMode::HairOnly) 

enum class EFSR2DeDitherMode : int32;
template<> struct TIsUEnumClass<EFSR2DeDitherMode> { enum { Value = true }; };
template<> FSR2TEMPORALUPSCALING_API UEnum* StaticEnum<EFSR2DeDitherMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
