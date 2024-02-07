// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UNISSupport.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NISBLUEPRINT_UNISSupport_generated_h
#error "UNISSupport.generated.h already included, missing '#pragma once' in UNISSupport.h"
#endif
#define NISBLUEPRINT_UNISSupport_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PalWorldSDK_Plugins_NIS_Source_NISBlueprint_Public_UNISSupport_h


#define FOREACH_ENUM_UNISSUPPORT(op) \
	op(UNISSupport::Supported) \
	op(UNISSupport::NotSupported) 

enum class UNISSupport : uint8;
template<> struct TIsUEnumClass<UNISSupport> { enum { Value = true }; };
template<> NISBLUEPRINT_API UEnum* StaticEnum<UNISSupport>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
