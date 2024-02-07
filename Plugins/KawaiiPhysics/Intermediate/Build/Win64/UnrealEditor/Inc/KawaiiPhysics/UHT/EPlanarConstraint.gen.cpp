// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KawaiiPhysics/Public/EPlanarConstraint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEPlanarConstraint() {}
// Cross Module References
	KAWAIIPHYSICS_API UEnum* Z_Construct_UEnum_KawaiiPhysics_EPlanarConstraint();
	UPackage* Z_Construct_UPackage__Script_KawaiiPhysics();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPlanarConstraint;
	static UEnum* EPlanarConstraint_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPlanarConstraint.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPlanarConstraint.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_KawaiiPhysics_EPlanarConstraint, Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("EPlanarConstraint"));
		}
		return Z_Registration_Info_UEnum_EPlanarConstraint.OuterSingleton;
	}
	template<> KAWAIIPHYSICS_API UEnum* StaticEnum<EPlanarConstraint>()
	{
		return EPlanarConstraint_StaticEnum();
	}
	struct Z_Construct_UEnum_KawaiiPhysics_EPlanarConstraint_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_KawaiiPhysics_EPlanarConstraint_Statics::Enumerators[] = {
		{ "EPlanarConstraint::None", (int64)EPlanarConstraint::None },
		{ "EPlanarConstraint::X", (int64)EPlanarConstraint::X },
		{ "EPlanarConstraint::Y", (int64)EPlanarConstraint::Y },
		{ "EPlanarConstraint::Z", (int64)EPlanarConstraint::Z },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_KawaiiPhysics_EPlanarConstraint_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EPlanarConstraint.h" },
		{ "None.Name", "EPlanarConstraint::None" },
		{ "X.Name", "EPlanarConstraint::X" },
		{ "Y.Name", "EPlanarConstraint::Y" },
		{ "Z.Name", "EPlanarConstraint::Z" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_KawaiiPhysics_EPlanarConstraint_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_KawaiiPhysics,
		nullptr,
		"EPlanarConstraint",
		"EPlanarConstraint",
		Z_Construct_UEnum_KawaiiPhysics_EPlanarConstraint_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_KawaiiPhysics_EPlanarConstraint_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_KawaiiPhysics_EPlanarConstraint_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_KawaiiPhysics_EPlanarConstraint_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_KawaiiPhysics_EPlanarConstraint()
	{
		if (!Z_Registration_Info_UEnum_EPlanarConstraint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPlanarConstraint.InnerSingleton, Z_Construct_UEnum_KawaiiPhysics_EPlanarConstraint_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPlanarConstraint.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_EPlanarConstraint_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_EPlanarConstraint_h_Statics::EnumInfo[] = {
		{ EPlanarConstraint_StaticEnum, TEXT("EPlanarConstraint"), &Z_Registration_Info_UEnum_EPlanarConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3229455534U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_EPlanarConstraint_h_3411364162(TEXT("/Script/KawaiiPhysics"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_EPlanarConstraint_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_EPlanarConstraint_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
