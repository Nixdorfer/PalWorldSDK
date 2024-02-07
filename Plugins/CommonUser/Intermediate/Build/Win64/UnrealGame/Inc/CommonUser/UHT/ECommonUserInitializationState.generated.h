// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ECommonUserInitializationState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMMONUSER_ECommonUserInitializationState_generated_h
#error "ECommonUserInitializationState.generated.h already included, missing '#pragma once' in ECommonUserInitializationState.h"
#endif
#define COMMONUSER_ECommonUserInitializationState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_ECommonUserInitializationState_h


#define FOREACH_ENUM_ECOMMONUSERINITIALIZATIONSTATE(op) \
	op(ECommonUserInitializationState::Unknown) \
	op(ECommonUserInitializationState::DoingInitialLogin) \
	op(ECommonUserInitializationState::DoingNetworkLogin) \
	op(ECommonUserInitializationState::FailedtoLogin) \
	op(ECommonUserInitializationState::LoggedInOnline) \
	op(ECommonUserInitializationState::LoggedInLocalOnly) \
	op(ECommonUserInitializationState::Invalid) 

enum class ECommonUserInitializationState : uint8;
template<> struct TIsUEnumClass<ECommonUserInitializationState> { enum { Value = true }; };
template<> COMMONUSER_API UEnum* StaticEnum<ECommonUserInitializationState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
