// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUser/Public/ECommonSessionOnlineMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECommonSessionOnlineMode() {}
// Cross Module References
	COMMONUSER_API UEnum* Z_Construct_UEnum_CommonUser_ECommonSessionOnlineMode();
	UPackage* Z_Construct_UPackage__Script_CommonUser();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECommonSessionOnlineMode;
	static UEnum* ECommonSessionOnlineMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECommonSessionOnlineMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECommonSessionOnlineMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CommonUser_ECommonSessionOnlineMode, Z_Construct_UPackage__Script_CommonUser(), TEXT("ECommonSessionOnlineMode"));
		}
		return Z_Registration_Info_UEnum_ECommonSessionOnlineMode.OuterSingleton;
	}
	template<> COMMONUSER_API UEnum* StaticEnum<ECommonSessionOnlineMode>()
	{
		return ECommonSessionOnlineMode_StaticEnum();
	}
	struct Z_Construct_UEnum_CommonUser_ECommonSessionOnlineMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CommonUser_ECommonSessionOnlineMode_Statics::Enumerators[] = {
		{ "ECommonSessionOnlineMode::Offline", (int64)ECommonSessionOnlineMode::Offline },
		{ "ECommonSessionOnlineMode::LAN", (int64)ECommonSessionOnlineMode::LAN },
		{ "ECommonSessionOnlineMode::Online", (int64)ECommonSessionOnlineMode::Online },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CommonUser_ECommonSessionOnlineMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "LAN.Name", "ECommonSessionOnlineMode::LAN" },
		{ "ModuleRelativePath", "Public/ECommonSessionOnlineMode.h" },
		{ "Offline.Name", "ECommonSessionOnlineMode::Offline" },
		{ "Online.Name", "ECommonSessionOnlineMode::Online" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CommonUser_ECommonSessionOnlineMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CommonUser,
		nullptr,
		"ECommonSessionOnlineMode",
		"ECommonSessionOnlineMode",
		Z_Construct_UEnum_CommonUser_ECommonSessionOnlineMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CommonUser_ECommonSessionOnlineMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CommonUser_ECommonSessionOnlineMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CommonUser_ECommonSessionOnlineMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CommonUser_ECommonSessionOnlineMode()
	{
		if (!Z_Registration_Info_UEnum_ECommonSessionOnlineMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECommonSessionOnlineMode.InnerSingleton, Z_Construct_UEnum_CommonUser_ECommonSessionOnlineMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECommonSessionOnlineMode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_ECommonSessionOnlineMode_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_ECommonSessionOnlineMode_h_Statics::EnumInfo[] = {
		{ ECommonSessionOnlineMode_StaticEnum, TEXT("ECommonSessionOnlineMode"), &Z_Registration_Info_UEnum_ECommonSessionOnlineMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2203615273U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_ECommonSessionOnlineMode_h_522413806(TEXT("/Script/CommonUser"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_ECommonSessionOnlineMode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonUser_Source_CommonUser_Public_ECommonSessionOnlineMode_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
