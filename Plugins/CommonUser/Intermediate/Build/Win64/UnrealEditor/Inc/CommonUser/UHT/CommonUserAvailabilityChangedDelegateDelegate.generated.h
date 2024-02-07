// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonUserAvailabilityChangedDelegateDelegate.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCommonUserInfo;
enum class ECommonUserAvailability : uint8;
enum class ECommonUserPrivilege : uint8;
#ifdef COMMONUSER_CommonUserAvailabilityChangedDelegateDelegate_generated_h
#error "CommonUserAvailabilityChangedDelegateDelegate.generated.h already included, missing '#pragma once' in CommonUserAvailabilityChangedDelegateDelegate.h"
#endif
#define COMMONUSER_CommonUserAvailabilityChangedDelegateDelegate_generated_h

#define FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonUserAvailabilityChangedDelegateDelegate_h_9_DELEGATE \
struct _Script_CommonUser_eventCommonUserAvailabilityChangedDelegate_Parms \
{ \
	const UCommonUserInfo* UserInfo; \
	ECommonUserPrivilege Privilege; \
	ECommonUserAvailability OldAvailability; \
	ECommonUserAvailability NewAvailability; \
}; \
static inline void FCommonUserAvailabilityChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& CommonUserAvailabilityChangedDelegate, const UCommonUserInfo* UserInfo, ECommonUserPrivilege Privilege, ECommonUserAvailability OldAvailability, ECommonUserAvailability NewAvailability) \
{ \
	_Script_CommonUser_eventCommonUserAvailabilityChangedDelegate_Parms Parms; \
	Parms.UserInfo=UserInfo; \
	Parms.Privilege=Privilege; \
	Parms.OldAvailability=OldAvailability; \
	Parms.NewAvailability=NewAvailability; \
	CommonUserAvailabilityChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonUserAvailabilityChangedDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
