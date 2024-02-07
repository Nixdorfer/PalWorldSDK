// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUser/Public/ECommonUserOnlineContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECommonUserOnlineContext() {}
// Cross Module References
	COMMONUSER_API UEnum* Z_Construct_UEnum_CommonUser_ECommonUserOnlineContext();
	UPackage* Z_Construct_UPackage__Script_CommonUser();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECommonUserOnlineContext;
	static UEnum* ECommonUserOnlineContext_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECommonUserOnlineContext.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECommonUserOnlineContext.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CommonUser_ECommonUserOnlineContext, Z_Construct_UPackage__Script_CommonUser(), TEXT("ECommonUserOnlineContext"));
		}
		return Z_Registration_Info_UEnum_ECommonUserOnlineContext.OuterSingleton;
	}
	template<> COMMONUSER_API UEnum* StaticEnum<ECommonUserOnlineContext>()
	{
		return ECommonUserOnlineContext_StaticEnum();
	}
	struct Z_Construct_UEnum_CommonUser_ECommonUserOnlineContext_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CommonUser_ECommonUserOnlineContext_Statics::Enumerators[] = {
		{ "ECommonUserOnlineContext::Game", (int64)ECommonUserOnlineContext::Game },
		{ "ECommonUserOnlineContext::Default", (int64)ECommonUserOnlineContext::Default },
		{ "ECommonUserOnlineContext::Service", (int64)ECommonUserOnlineContext::Service },
		{ "ECommonUserOnlineContext::ServiceOrDefault", (int64)ECommonUserOnlineContext::ServiceOrDefault },
		{ "ECommonUserOnlineContext::Platform", (int64)ECommonUserOnlineContext::Platform },
		{ "ECommonUserOnlineContext::PlatformOrDefault", (int64)ECommonUserOnlineContext::PlatformOrDefault },
		{ "ECommonUserOnlineContext::Invalid", (int64)ECommonUserOnlineContext::Invalid },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CommonUser_ECommonUserOnlineContext_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Default.Name", "ECommonUserOnlineContext::Default" },
		{ "Game.Name", "ECommonUserOnlineContext::Game" },
		{ "Invalid.Name", "ECommonUserOnlineContext::Invalid" },
		{ "ModuleRelativePath", "Public/ECommonUserOnlineContext.h" },
		{ "Platform.Name", "ECommonUserOnlineContext::Platform" },
		{ "PlatformOrDefault.Name", "ECommonUserOnlineContext::PlatformOrDefault" },
		{ "Service.Name", "ECommonUserOnlineContext::Service" },
		{ "ServiceOrDefault.Name", "ECommonUserOnlineContext::ServiceOrDefault" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CommonUser_ECommonUserOnlineContext_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CommonUser,
		nullptr,
		"ECommonUserOnlineContext",
		"ECommonUserOnlineContext",
		Z_Construct_UEnum_CommonUser_ECommonUserOnlineContext_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CommonUser_ECommonUserOnlineContext_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CommonUser_ECommonUserOnlineContext_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CommonUser_ECommonUserOnlineContext_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CommonUser_ECommonUserOnlineContext()
	{
		if (!Z_Registration_Info_UEnum_ECommonUserOnlineContext.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECommonUserOnlineContext.InnerSingleton, Z_Construct_UEnum_CommonUser_ECommonUserOnlineContext_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECommonUserOnlineContext.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_ECommonUserOnlineContext_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_ECommonUserOnlineContext_h_Statics::EnumInfo[] = {
		{ ECommonUserOnlineContext_StaticEnum, TEXT("ECommonUserOnlineContext"), &Z_Registration_Info_UEnum_ECommonUserOnlineContext, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 731275418U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_ECommonUserOnlineContext_h_1166725165(TEXT("/Script/CommonUser"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_ECommonUserOnlineContext_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_ECommonUserOnlineContext_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
