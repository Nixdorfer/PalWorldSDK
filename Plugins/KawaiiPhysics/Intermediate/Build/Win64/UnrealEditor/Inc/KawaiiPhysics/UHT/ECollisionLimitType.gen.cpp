// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KawaiiPhysics/Public/ECollisionLimitType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECollisionLimitType() {}
// Cross Module References
	KAWAIIPHYSICS_API UEnum* Z_Construct_UEnum_KawaiiPhysics_ECollisionLimitType();
	UPackage* Z_Construct_UPackage__Script_KawaiiPhysics();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECollisionLimitType;
	static UEnum* ECollisionLimitType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECollisionLimitType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECollisionLimitType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_KawaiiPhysics_ECollisionLimitType, Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("ECollisionLimitType"));
		}
		return Z_Registration_Info_UEnum_ECollisionLimitType.OuterSingleton;
	}
	template<> KAWAIIPHYSICS_API UEnum* StaticEnum<ECollisionLimitType>()
	{
		return ECollisionLimitType_StaticEnum();
	}
	struct Z_Construct_UEnum_KawaiiPhysics_ECollisionLimitType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_KawaiiPhysics_ECollisionLimitType_Statics::Enumerators[] = {
		{ "ECollisionLimitType::None", (int64)ECollisionLimitType::None },
		{ "ECollisionLimitType::Spherical", (int64)ECollisionLimitType::Spherical },
		{ "ECollisionLimitType::Capsule", (int64)ECollisionLimitType::Capsule },
		{ "ECollisionLimitType::Planar", (int64)ECollisionLimitType::Planar },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_KawaiiPhysics_ECollisionLimitType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Capsule.Name", "ECollisionLimitType::Capsule" },
		{ "ModuleRelativePath", "Public/ECollisionLimitType.h" },
		{ "None.Name", "ECollisionLimitType::None" },
		{ "Planar.Name", "ECollisionLimitType::Planar" },
		{ "Spherical.Name", "ECollisionLimitType::Spherical" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_KawaiiPhysics_ECollisionLimitType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_KawaiiPhysics,
		nullptr,
		"ECollisionLimitType",
		"ECollisionLimitType",
		Z_Construct_UEnum_KawaiiPhysics_ECollisionLimitType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_KawaiiPhysics_ECollisionLimitType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_KawaiiPhysics_ECollisionLimitType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_KawaiiPhysics_ECollisionLimitType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_KawaiiPhysics_ECollisionLimitType()
	{
		if (!Z_Registration_Info_UEnum_ECollisionLimitType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECollisionLimitType.InnerSingleton, Z_Construct_UEnum_KawaiiPhysics_ECollisionLimitType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECollisionLimitType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_ECollisionLimitType_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_ECollisionLimitType_h_Statics::EnumInfo[] = {
		{ ECollisionLimitType_StaticEnum, TEXT("ECollisionLimitType"), &Z_Registration_Info_UEnum_ECollisionLimitType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3072634654U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_ECollisionLimitType_h_244648660(TEXT("/Script/KawaiiPhysics"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_ECollisionLimitType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_ECollisionLimitType_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
