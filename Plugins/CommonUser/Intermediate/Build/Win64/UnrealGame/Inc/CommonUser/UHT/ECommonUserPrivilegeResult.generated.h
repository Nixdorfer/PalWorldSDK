// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ECommonUserPrivilegeResult.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMMONUSER_ECommonUserPrivilegeResult_generated_h
#error "ECommonUserPrivilegeResult.generated.h already included, missing '#pragma once' in ECommonUserPrivilegeResult.h"
#endif
#define COMMONUSER_ECommonUserPrivilegeResult_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_ECommonUserPrivilegeResult_h


#define FOREACH_ENUM_ECOMMONUSERPRIVILEGERESULT(op) \
	op(ECommonUserPrivilegeResult::Unknown) \
	op(ECommonUserPrivilegeResult::Available) \
	op(ECommonUserPrivilegeResult::UserNotLoggedIn) \
	op(ECommonUserPrivilegeResult::LicenseInvalid) \
	op(ECommonUserPrivilegeResult::VersionOutdated) \
	op(ECommonUserPrivilegeResult::NetworkConnectionUnavailable) \
	op(ECommonUserPrivilegeResult::AgeRestricted) \
	op(ECommonUserPrivilegeResult::AccountTypeRestricted) \
	op(ECommonUserPrivilegeResult::AccountUseRestricted) \
	op(ECommonUserPrivilegeResult::PlatformFailure) 

enum class ECommonUserPrivilegeResult : uint8;
template<> struct TIsUEnumClass<ECommonUserPrivilegeResult> { enum { Value = true }; };
template<> COMMONUSER_API UEnum* StaticEnum<ECommonUserPrivilegeResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
