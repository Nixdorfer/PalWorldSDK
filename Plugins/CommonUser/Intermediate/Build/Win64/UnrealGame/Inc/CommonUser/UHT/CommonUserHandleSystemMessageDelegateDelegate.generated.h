// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonUserHandleSystemMessageDelegateDelegate.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
#ifdef COMMONUSER_CommonUserHandleSystemMessageDelegateDelegate_generated_h
#error "CommonUserHandleSystemMessageDelegateDelegate.generated.h already included, missing '#pragma once' in CommonUserHandleSystemMessageDelegateDelegate.h"
#endif
#define COMMONUSER_CommonUserHandleSystemMessageDelegateDelegate_generated_h

#define FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonUserHandleSystemMessageDelegateDelegate_h_6_DELEGATE \
struct _Script_CommonUser_eventCommonUserHandleSystemMessageDelegate_Parms \
{ \
	FGameplayTag MessageType; \
	FText TitleText; \
	FText BodyText; \
}; \
static inline void FCommonUserHandleSystemMessageDelegate_DelegateWrapper(const FMulticastScriptDelegate& CommonUserHandleSystemMessageDelegate, FGameplayTag MessageType, const FText& TitleText, const FText& BodyText) \
{ \
	_Script_CommonUser_eventCommonUserHandleSystemMessageDelegate_Parms Parms; \
	Parms.MessageType=MessageType; \
	Parms.TitleText=TitleText; \
	Parms.BodyText=BodyText; \
	CommonUserHandleSystemMessageDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_CommonUserHandleSystemMessageDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
