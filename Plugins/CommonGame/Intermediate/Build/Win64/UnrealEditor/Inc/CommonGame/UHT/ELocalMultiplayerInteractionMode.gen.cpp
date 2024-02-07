// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonGame/Public/ELocalMultiplayerInteractionMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELocalMultiplayerInteractionMode() {}
// Cross Module References
	COMMONGAME_API UEnum* Z_Construct_UEnum_CommonGame_ELocalMultiplayerInteractionMode();
	UPackage* Z_Construct_UPackage__Script_CommonGame();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELocalMultiplayerInteractionMode;
	static UEnum* ELocalMultiplayerInteractionMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELocalMultiplayerInteractionMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELocalMultiplayerInteractionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CommonGame_ELocalMultiplayerInteractionMode, Z_Construct_UPackage__Script_CommonGame(), TEXT("ELocalMultiplayerInteractionMode"));
		}
		return Z_Registration_Info_UEnum_ELocalMultiplayerInteractionMode.OuterSingleton;
	}
	template<> COMMONGAME_API UEnum* StaticEnum<ELocalMultiplayerInteractionMode>()
	{
		return ELocalMultiplayerInteractionMode_StaticEnum();
	}
	struct Z_Construct_UEnum_CommonGame_ELocalMultiplayerInteractionMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CommonGame_ELocalMultiplayerInteractionMode_Statics::Enumerators[] = {
		{ "ELocalMultiplayerInteractionMode::PrimaryOnly", (int64)ELocalMultiplayerInteractionMode::PrimaryOnly },
		{ "ELocalMultiplayerInteractionMode::SingleToggle", (int64)ELocalMultiplayerInteractionMode::SingleToggle },
		{ "ELocalMultiplayerInteractionMode::Simultaneous", (int64)ELocalMultiplayerInteractionMode::Simultaneous },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CommonGame_ELocalMultiplayerInteractionMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELocalMultiplayerInteractionMode.h" },
		{ "PrimaryOnly.Name", "ELocalMultiplayerInteractionMode::PrimaryOnly" },
		{ "Simultaneous.Name", "ELocalMultiplayerInteractionMode::Simultaneous" },
		{ "SingleToggle.Name", "ELocalMultiplayerInteractionMode::SingleToggle" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CommonGame_ELocalMultiplayerInteractionMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CommonGame,
		nullptr,
		"ELocalMultiplayerInteractionMode",
		"ELocalMultiplayerInteractionMode",
		Z_Construct_UEnum_CommonGame_ELocalMultiplayerInteractionMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CommonGame_ELocalMultiplayerInteractionMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CommonGame_ELocalMultiplayerInteractionMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CommonGame_ELocalMultiplayerInteractionMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CommonGame_ELocalMultiplayerInteractionMode()
	{
		if (!Z_Registration_Info_UEnum_ELocalMultiplayerInteractionMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELocalMultiplayerInteractionMode.InnerSingleton, Z_Construct_UEnum_CommonGame_ELocalMultiplayerInteractionMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELocalMultiplayerInteractionMode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_ELocalMultiplayerInteractionMode_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_ELocalMultiplayerInteractionMode_h_Statics::EnumInfo[] = {
		{ ELocalMultiplayerInteractionMode_StaticEnum, TEXT("ELocalMultiplayerInteractionMode"), &Z_Registration_Info_UEnum_ELocalMultiplayerInteractionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3034824818U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_ELocalMultiplayerInteractionMode_h_3015671979(TEXT("/Script/CommonGame"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_ELocalMultiplayerInteractionMode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_ELocalMultiplayerInteractionMode_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
