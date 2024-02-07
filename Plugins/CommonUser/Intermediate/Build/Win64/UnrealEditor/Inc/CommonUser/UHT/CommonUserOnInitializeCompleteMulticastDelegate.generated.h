// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonUserOnInitializeCompleteMulticastDelegate.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCommonUserInfo;
enum class ECommonUserOnlineContext : uint8;
enum class ECommonUserPrivilege : uint8;
#ifdef COMMONUSER_CommonUserOnInitializeCompleteMulticastDelegate_generated_h
#error "CommonUserOnInitializeCompleteMulticastDelegate.generated.h already included, missing '#pragma once' in CommonUserOnInitializeCompleteMulticastDelegate.h"
#endif
#define COMMONUSER_CommonUserOnInitializeCompleteMulticastDelegate_generated_h

#define FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonUserOnInitializeCompleteMulticastDelegate_h_9_DELEGATE \
struct _Script_CommonUser_eventCommonUserOnInitializeCompleteMulticast_Parms \
{ \
	const UCommonUserInfo* UserInfo; \
	bool bSuccess; \
	FText Error; \
	ECommonUserPrivilege RequestedPrivilege; \
	ECommonUserOnlineContext OnlineContext; \
}; \
static inline void FCommonUserOnInitializeCompleteMulticast_DelegateWrapper(const FMulticastScriptDelegate& CommonUserOnInitializeCompleteMulticast, const UCommonUserInfo* UserInfo, bool bSuccess, const FText& Error, ECommonUserPrivilege RequestedPrivilege, ECommonUserOnlineContext OnlineContext) \
{ \
	_Script_CommonUser_eventCommonUserOnInitializeCompleteMulticast_Parms Parms; \
	Parms.UserInfo=UserInfo; \
	Parms.bSuccess=bSuccess ? true : false; \
	Parms.Error=Error; \
	Parms.RequestedPrivilege=RequestedPrivilege; \
	Parms.OnlineContext=OnlineContext; \
	CommonUserOnInitializeCompleteMulticast.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonUserOnInitializeCompleteMulticastDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
