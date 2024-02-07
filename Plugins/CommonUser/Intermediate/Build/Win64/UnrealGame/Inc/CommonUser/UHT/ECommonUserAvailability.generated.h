// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ECommonUserAvailability.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMMONUSER_ECommonUserAvailability_generated_h
#error "ECommonUserAvailability.generated.h already included, missing '#pragma once' in ECommonUserAvailability.h"
#endif
#define COMMONUSER_ECommonUserAvailability_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_ECommonUserAvailability_h


#define FOREACH_ENUM_ECOMMONUSERAVAILABILITY(op) \
	op(ECommonUserAvailability::Unknown) \
	op(ECommonUserAvailability::NowAvailable) \
	op(ECommonUserAvailability::PossiblyAvailable) \
	op(ECommonUserAvailability::CurrentlyUnavailable) \
	op(ECommonUserAvailability::AlwaysUnavailable) \
	op(ECommonUserAvailability::Invalid) 

enum class ECommonUserAvailability : uint8;
template<> struct TIsUEnumClass<ECommonUserAvailability> { enum { Value = true }; };
template<> COMMONUSER_API UEnum* StaticEnum<ECommonUserAvailability>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
