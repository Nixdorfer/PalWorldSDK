// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EPlanarConstraint.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef KAWAIIPHYSICS_EPlanarConstraint_generated_h
#error "EPlanarConstraint.generated.h already included, missing '#pragma once' in EPlanarConstraint.h"
#endif
#define KAWAIIPHYSICS_EPlanarConstraint_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PalWorldSDK_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_EPlanarConstraint_h


#define FOREACH_ENUM_EPLANARCONSTRAINT(op) \
	op(EPlanarConstraint::None) \
	op(EPlanarConstraint::X) \
	op(EPlanarConstraint::Y) \
	op(EPlanarConstraint::Z) 

enum class EPlanarConstraint : uint8;
template<> struct TIsUEnumClass<EPlanarConstraint> { enum { Value = true }; };
template<> KAWAIIPHYSICS_API UEnum* StaticEnum<EPlanarConstraint>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
