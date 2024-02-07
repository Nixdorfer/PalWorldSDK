// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EFSR2MoviePipelineQuality.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FSR2MOVIERENDERPIPELINE_EFSR2MoviePipelineQuality_generated_h
#error "EFSR2MoviePipelineQuality.generated.h already included, missing '#pragma once' in EFSR2MoviePipelineQuality.h"
#endif
#define FSR2MOVIERENDERPIPELINE_EFSR2MoviePipelineQuality_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PalWorldSDK_Plugins_FSR2MovieRenderPipeline_Source_FSR2MovieRenderPipeline_Public_EFSR2MoviePipelineQuality_h


#define FOREACH_ENUM_EFSR2MOVIEPIPELINEQUALITY(op) \
	op(EFSR2MoviePipelineQuality::Unused) \
	op(EFSR2MoviePipelineQuality::Quality) \
	op(EFSR2MoviePipelineQuality::Balanced) \
	op(EFSR2MoviePipelineQuality::Performance) \
	op(EFSR2MoviePipelineQuality::UltraPerformance) 

enum class EFSR2MoviePipelineQuality : uint8;
template<> struct TIsUEnumClass<EFSR2MoviePipelineQuality> { enum { Value = true }; };
template<> FSR2MOVIERENDERPIPELINE_API UEnum* StaticEnum<EFSR2MoviePipelineQuality>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
