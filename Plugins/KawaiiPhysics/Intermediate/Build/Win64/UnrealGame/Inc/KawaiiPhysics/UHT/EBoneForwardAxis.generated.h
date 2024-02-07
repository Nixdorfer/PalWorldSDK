// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EBoneForwardAxis.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef KAWAIIPHYSICS_EBoneForwardAxis_generated_h
#error "EBoneForwardAxis.generated.h already included, missing '#pragma once' in EBoneForwardAxis.h"
#endif
#define KAWAIIPHYSICS_EBoneForwardAxis_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PalWorldSDK_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_EBoneForwardAxis_h


#define FOREACH_ENUM_EBONEFORWARDAXIS(op) \
	op(EBoneForwardAxis::X_Positive) \
	op(EBoneForwardAxis::X_Negative) \
	op(EBoneForwardAxis::Y_Positive) \
	op(EBoneForwardAxis::Y_Negative) \
	op(EBoneForwardAxis::Z_Positive) \
	op(EBoneForwardAxis::Z_Negative) 

enum class EBoneForwardAxis : uint8;
template<> struct TIsUEnumClass<EBoneForwardAxis> { enum { Value = true }; };
template<> KAWAIIPHYSICS_API UEnum* StaticEnum<EBoneForwardAxis>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
