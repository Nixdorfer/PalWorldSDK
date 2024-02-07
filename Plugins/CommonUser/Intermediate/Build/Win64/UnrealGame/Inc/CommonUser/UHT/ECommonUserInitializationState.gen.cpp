// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUser/Public/ECommonUserInitializationState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECommonUserInitializationState() {}
// Cross Module References
	COMMONUSER_API UEnum* Z_Construct_UEnum_CommonUser_ECommonUserInitializationState();
	UPackage* Z_Construct_UPackage__Script_CommonUser();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECommonUserInitializationState;
	static UEnum* ECommonUserInitializationState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECommonUserInitializationState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECommonUserInitializationState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CommonUser_ECommonUserInitializationState, Z_Construct_UPackage__Script_CommonUser(), TEXT("ECommonUserInitializationState"));
		}
		return Z_Registration_Info_UEnum_ECommonUserInitializationState.OuterSingleton;
	}
	template<> COMMONUSER_API UEnum* StaticEnum<ECommonUserInitializationState>()
	{
		return ECommonUserInitializationState_StaticEnum();
	}
	struct Z_Construct_UEnum_CommonUser_ECommonUserInitializationState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CommonUser_ECommonUserInitializationState_Statics::Enumerators[] = {
		{ "ECommonUserInitializationState::Unknown", (int64)ECommonUserInitializationState::Unknown },
		{ "ECommonUserInitializationState::DoingInitialLogin", (int64)ECommonUserInitializationState::DoingInitialLogin },
		{ "ECommonUserInitializationState::DoingNetworkLogin", (int64)ECommonUserInitializationState::DoingNetworkLogin },
		{ "ECommonUserInitializationState::FailedtoLogin", (int64)ECommonUserInitializationState::FailedtoLogin },
		{ "ECommonUserInitializationState::LoggedInOnline", (int64)ECommonUserInitializationState::LoggedInOnline },
		{ "ECommonUserInitializationState::LoggedInLocalOnly", (int64)ECommonUserInitializationState::LoggedInLocalOnly },
		{ "ECommonUserInitializationState::Invalid", (int64)ECommonUserInitializationState::Invalid },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CommonUser_ECommonUserInitializationState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DoingInitialLogin.Name", "ECommonUserInitializationState::DoingInitialLogin" },
		{ "DoingNetworkLogin.Name", "ECommonUserInitializationState::DoingNetworkLogin" },
		{ "FailedtoLogin.Name", "ECommonUserInitializationState::FailedtoLogin" },
		{ "Invalid.Name", "ECommonUserInitializationState::Invalid" },
		{ "LoggedInLocalOnly.Name", "ECommonUserInitializationState::LoggedInLocalOnly" },
		{ "LoggedInOnline.Name", "ECommonUserInitializationState::LoggedInOnline" },
		{ "ModuleRelativePath", "Public/ECommonUserInitializationState.h" },
		{ "Unknown.Name", "ECommonUserInitializationState::Unknown" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CommonUser_ECommonUserInitializationState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CommonUser,
		nullptr,
		"ECommonUserInitializationState",
		"ECommonUserInitializationState",
		Z_Construct_UEnum_CommonUser_ECommonUserInitializationState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CommonUser_ECommonUserInitializationState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CommonUser_ECommonUserInitializationState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CommonUser_ECommonUserInitializationState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CommonUser_ECommonUserInitializationState()
	{
		if (!Z_Registration_Info_UEnum_ECommonUserInitializationState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECommonUserInitializationState.InnerSingleton, Z_Construct_UEnum_CommonUser_ECommonUserInitializationState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECommonUserInitializationState.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_ECommonUserInitializationState_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_ECommonUserInitializationState_h_Statics::EnumInfo[] = {
		{ ECommonUserInitializationState_StaticEnum, TEXT("ECommonUserInitializationState"), &Z_Registration_Info_UEnum_ECommonUserInitializationState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 409346955U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_ECommonUserInitializationState_h_2367774614(TEXT("/Script/CommonUser"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_ECommonUserInitializationState_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_ECommonUserInitializationState_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
