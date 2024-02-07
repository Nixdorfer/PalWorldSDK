// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EDLSSPreset.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DLSS_EDLSSPreset_generated_h
#error "EDLSSPreset.generated.h already included, missing '#pragma once' in EDLSSPreset.h"
#endif
#define DLSS_EDLSSPreset_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PalWorldSDK_Plugins_DLSS_Source_DLSS_Public_EDLSSPreset_h


#define FOREACH_ENUM_EDLSSPRESET(op) \
	op(EDLSSPreset::Default) \
	op(EDLSSPreset::A) \
	op(EDLSSPreset::B) \
	op(EDLSSPreset::C) \
	op(EDLSSPreset::D) \
	op(EDLSSPreset::E) \
	op(EDLSSPreset::F) \
	op(EDLSSPreset::G) 

enum class EDLSSPreset : uint8;
template<> struct TIsUEnumClass<EDLSSPreset> { enum { Value = true }; };
template<> DLSS_API UEnum* StaticEnum<EDLSSPreset>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
