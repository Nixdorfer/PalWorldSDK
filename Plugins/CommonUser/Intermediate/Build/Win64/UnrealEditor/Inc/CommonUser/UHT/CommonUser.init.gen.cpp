// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonUser_init() {}
	COMMONUSER_API UFunction* Z_Construct_UDelegateFunction_CommonUser_CommonSession_FindSessionsFinishedDynamic__DelegateSignature();
	COMMONUSER_API UFunction* Z_Construct_UDelegateFunction_CommonUser_CommonSessionOnCreateSessionComplete_Dynamic__DelegateSignature();
	COMMONUSER_API UFunction* Z_Construct_UDelegateFunction_CommonUser_CommonSessionOnJoinSessionComplete_Dynamic__DelegateSignature();
	COMMONUSER_API UFunction* Z_Construct_UDelegateFunction_CommonUser_CommonSessionOnUserRequestedSession_Dynamic__DelegateSignature();
	COMMONUSER_API UFunction* Z_Construct_UDelegateFunction_CommonUser_CommonUserAvailabilityChangedDelegate__DelegateSignature();
	COMMONUSER_API UFunction* Z_Construct_UDelegateFunction_CommonUser_CommonUserHandleSystemMessageDelegate__DelegateSignature();
	COMMONUSER_API UFunction* Z_Construct_UDelegateFunction_CommonUser_CommonUserOnInitializeComplete__DelegateSignature();
	COMMONUSER_API UFunction* Z_Construct_UDelegateFunction_CommonUser_CommonUserOnInitializeCompleteMulticast__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_CommonUser;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_CommonUser()
	{
		if (!Z_Registration_Info_UPackage__Script_CommonUser.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_CommonUser_CommonSession_FindSessionsFinishedDynamic__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_CommonUser_CommonSessionOnCreateSessionComplete_Dynamic__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_CommonUser_CommonSessionOnJoinSessionComplete_Dynamic__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_CommonUser_CommonSessionOnUserRequestedSession_Dynamic__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_CommonUser_CommonUserAvailabilityChangedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_CommonUser_CommonUserHandleSystemMessageDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_CommonUser_CommonUserOnInitializeComplete__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_CommonUser_CommonUserOnInitializeCompleteMulticast__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/CommonUser",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x40F22F76,
				0xAB591328,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_CommonUser.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_CommonUser.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_CommonUser(Z_Construct_UPackage__Script_CommonUser, TEXT("/Script/CommonUser"), Z_Registration_Info_UPackage__Script_CommonUser, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x40F22F76, 0xAB591328));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
