// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ELoginStatusType.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef POCKETPAIRUSER_ELoginStatusType_generated_h
#error "ELoginStatusType.generated.h already included, missing '#pragma once' in ELoginStatusType.h"
#endif
#define POCKETPAIRUSER_ELoginStatusType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_ELoginStatusType_h


#define FOREACH_ENUM_ELOGINSTATUSTYPE(op) \
	op(ELoginStatusType::NotLoggedIn) \
	op(ELoginStatusType::UsingLocalProfile) \
	op(ELoginStatusType::LoggedIn) 

enum class ELoginStatusType : uint8;
template<> struct TIsUEnumClass<ELoginStatusType> { enum { Value = true }; };
template<> POCKETPAIRUSER_API UEnum* StaticEnum<ELoginStatusType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
