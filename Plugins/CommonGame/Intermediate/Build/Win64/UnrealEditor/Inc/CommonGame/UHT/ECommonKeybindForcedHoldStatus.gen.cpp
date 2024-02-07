// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonGame/Public/ECommonKeybindForcedHoldStatus.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECommonKeybindForcedHoldStatus() {}
// Cross Module References
	COMMONGAME_API UEnum* Z_Construct_UEnum_CommonGame_ECommonKeybindForcedHoldStatus();
	UPackage* Z_Construct_UPackage__Script_CommonGame();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECommonKeybindForcedHoldStatus;
	static UEnum* ECommonKeybindForcedHoldStatus_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECommonKeybindForcedHoldStatus.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECommonKeybindForcedHoldStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CommonGame_ECommonKeybindForcedHoldStatus, Z_Construct_UPackage__Script_CommonGame(), TEXT("ECommonKeybindForcedHoldStatus"));
		}
		return Z_Registration_Info_UEnum_ECommonKeybindForcedHoldStatus.OuterSingleton;
	}
	template<> COMMONGAME_API UEnum* StaticEnum<ECommonKeybindForcedHoldStatus>()
	{
		return ECommonKeybindForcedHoldStatus_StaticEnum();
	}
	struct Z_Construct_UEnum_CommonGame_ECommonKeybindForcedHoldStatus_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CommonGame_ECommonKeybindForcedHoldStatus_Statics::Enumerators[] = {
		{ "ECommonKeybindForcedHoldStatus::NoForcedHold", (int64)ECommonKeybindForcedHoldStatus::NoForcedHold },
		{ "ECommonKeybindForcedHoldStatus::ForcedHold", (int64)ECommonKeybindForcedHoldStatus::ForcedHold },
		{ "ECommonKeybindForcedHoldStatus::NeverShowHold", (int64)ECommonKeybindForcedHoldStatus::NeverShowHold },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CommonGame_ECommonKeybindForcedHoldStatus_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ForcedHold.Name", "ECommonKeybindForcedHoldStatus::ForcedHold" },
		{ "ModuleRelativePath", "Public/ECommonKeybindForcedHoldStatus.h" },
		{ "NeverShowHold.Name", "ECommonKeybindForcedHoldStatus::NeverShowHold" },
		{ "NoForcedHold.Name", "ECommonKeybindForcedHoldStatus::NoForcedHold" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CommonGame_ECommonKeybindForcedHoldStatus_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CommonGame,
		nullptr,
		"ECommonKeybindForcedHoldStatus",
		"ECommonKeybindForcedHoldStatus",
		Z_Construct_UEnum_CommonGame_ECommonKeybindForcedHoldStatus_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CommonGame_ECommonKeybindForcedHoldStatus_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CommonGame_ECommonKeybindForcedHoldStatus_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CommonGame_ECommonKeybindForcedHoldStatus_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CommonGame_ECommonKeybindForcedHoldStatus()
	{
		if (!Z_Registration_Info_UEnum_ECommonKeybindForcedHoldStatus.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECommonKeybindForcedHoldStatus.InnerSingleton, Z_Construct_UEnum_CommonGame_ECommonKeybindForcedHoldStatus_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECommonKeybindForcedHoldStatus.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_ECommonKeybindForcedHoldStatus_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_ECommonKeybindForcedHoldStatus_h_Statics::EnumInfo[] = {
		{ ECommonKeybindForcedHoldStatus_StaticEnum, TEXT("ECommonKeybindForcedHoldStatus"), &Z_Registration_Info_UEnum_ECommonKeybindForcedHoldStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2109228790U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_ECommonKeybindForcedHoldStatus_h_4033343930(TEXT("/Script/CommonGame"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_ECommonKeybindForcedHoldStatus_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_ECommonKeybindForcedHoldStatus_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
