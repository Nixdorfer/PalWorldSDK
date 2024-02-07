// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonUserOnInitializeCompleteDelegate.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCommonUserInfo;
enum class ECommonUserOnlineContext : uint8;
enum class ECommonUserPrivilege : uint8;
#ifdef COMMONUSER_CommonUserOnInitializeCompleteDelegate_generated_h
#error "CommonUserOnInitializeCompleteDelegate.generated.h already included, missing '#pragma once' in CommonUserOnInitializeCompleteDelegate.h"
#endif
#define COMMONUSER_CommonUserOnInitializeCompleteDelegate_generated_h

#define FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonUserOnInitializeCompleteDelegate_h_9_DELEGATE \
struct _Script_CommonUser_eventCommonUserOnInitializeComplete_Parms \
{ \
	const UCommonUserInfo* UserInfo; \
	bool bSuccess; \
	FText Error; \
	ECommonUserPrivilege RequestedPrivilege; \
	ECommonUserOnlineContext OnlineContext; \
}; \
static inline void FCommonUserOnInitializeComplete_DelegateWrapper(const FScriptDelegate& CommonUserOnInitializeComplete, const UCommonUserInfo* UserInfo, bool bSuccess, const FText& Error, ECommonUserPrivilege RequestedPrivilege, ECommonUserOnlineContext OnlineContext) \
{ \
	_Script_CommonUser_eventCommonUserOnInitializeComplete_Parms Parms; \
	Parms.UserInfo=UserInfo; \
	Parms.bSuccess=bSuccess ? true : false; \
	Parms.Error=Error; \
	Parms.RequestedPrivilege=RequestedPrivilege; \
	Parms.OnlineContext=OnlineContext; \
	CommonUserOnInitializeComplete.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonUserOnInitializeCompleteDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
