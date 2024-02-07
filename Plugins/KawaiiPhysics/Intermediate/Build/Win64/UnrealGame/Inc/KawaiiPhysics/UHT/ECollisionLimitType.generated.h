// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ECollisionLimitType.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef KAWAIIPHYSICS_ECollisionLimitType_generated_h
#error "ECollisionLimitType.generated.h already included, missing '#pragma once' in ECollisionLimitType.h"
#endif
#define KAWAIIPHYSICS_ECollisionLimitType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PalWorldSDK_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_ECollisionLimitType_h


#define FOREACH_ENUM_ECOLLISIONLIMITTYPE(op) \
	op(ECollisionLimitType::None) \
	op(ECollisionLimitType::Spherical) \
	op(ECollisionLimitType::Capsule) \
	op(ECollisionLimitType::Planar) 

enum class ECollisionLimitType : uint8;
template<> struct TIsUEnumClass<ECollisionLimitType> { enum { Value = true }; };
template<> KAWAIIPHYSICS_API UEnum* StaticEnum<ECollisionLimitType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
