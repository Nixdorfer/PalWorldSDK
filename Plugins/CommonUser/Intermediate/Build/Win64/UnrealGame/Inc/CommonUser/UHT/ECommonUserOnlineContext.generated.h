// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ECommonUserOnlineContext.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMMONUSER_ECommonUserOnlineContext_generated_h
#error "ECommonUserOnlineContext.generated.h already included, missing '#pragma once' in ECommonUserOnlineContext.h"
#endif
#define COMMONUSER_ECommonUserOnlineContext_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_ECommonUserOnlineContext_h


#define FOREACH_ENUM_ECOMMONUSERONLINECONTEXT(op) \
	op(ECommonUserOnlineContext::Game) \
	op(ECommonUserOnlineContext::Default) \
	op(ECommonUserOnlineContext::Service) \
	op(ECommonUserOnlineContext::ServiceOrDefault) \
	op(ECommonUserOnlineContext::Platform) \
	op(ECommonUserOnlineContext::PlatformOrDefault) \
	op(ECommonUserOnlineContext::Invalid) 

enum class ECommonUserOnlineContext : uint8;
template<> struct TIsUEnumClass<ECommonUserOnlineContext> { enum { Value = true }; };
template<> COMMONUSER_API UEnum* StaticEnum<ECommonUserOnlineContext>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
