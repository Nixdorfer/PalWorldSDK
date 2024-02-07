// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ECommonUserPrivilege.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMMONUSER_ECommonUserPrivilege_generated_h
#error "ECommonUserPrivilege.generated.h already included, missing '#pragma once' in ECommonUserPrivilege.h"
#endif
#define COMMONUSER_ECommonUserPrivilege_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_ECommonUserPrivilege_h


#define FOREACH_ENUM_ECOMMONUSERPRIVILEGE(op) \
	op(ECommonUserPrivilege::CanPlay) \
	op(ECommonUserPrivilege::CanPlayOnline) \
	op(ECommonUserPrivilege::CanCommunicateViaTextOnline) \
	op(ECommonUserPrivilege::CanCommunicateViaVoiceOnline) \
	op(ECommonUserPrivilege::CanUseUserGeneratedContent) \
	op(ECommonUserPrivilege::CanUseCrossPlay) \
	op(ECommonUserPrivilege::Invalid_Count) 

enum class ECommonUserPrivilege : uint8;
template<> struct TIsUEnumClass<ECommonUserPrivilege> { enum { Value = true }; };
template<> COMMONUSER_API UEnum* StaticEnum<ECommonUserPrivilege>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
