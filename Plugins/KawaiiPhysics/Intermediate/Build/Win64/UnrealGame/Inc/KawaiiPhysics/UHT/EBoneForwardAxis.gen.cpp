// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KawaiiPhysics/Public/EBoneForwardAxis.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEBoneForwardAxis() {}
// Cross Module References
	KAWAIIPHYSICS_API UEnum* Z_Construct_UEnum_KawaiiPhysics_EBoneForwardAxis();
	UPackage* Z_Construct_UPackage__Script_KawaiiPhysics();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBoneForwardAxis;
	static UEnum* EBoneForwardAxis_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBoneForwardAxis.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBoneForwardAxis.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_KawaiiPhysics_EBoneForwardAxis, Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("EBoneForwardAxis"));
		}
		return Z_Registration_Info_UEnum_EBoneForwardAxis.OuterSingleton;
	}
	template<> KAWAIIPHYSICS_API UEnum* StaticEnum<EBoneForwardAxis>()
	{
		return EBoneForwardAxis_StaticEnum();
	}
	struct Z_Construct_UEnum_KawaiiPhysics_EBoneForwardAxis_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_KawaiiPhysics_EBoneForwardAxis_Statics::Enumerators[] = {
		{ "EBoneForwardAxis::X_Positive", (int64)EBoneForwardAxis::X_Positive },
		{ "EBoneForwardAxis::X_Negative", (int64)EBoneForwardAxis::X_Negative },
		{ "EBoneForwardAxis::Y_Positive", (int64)EBoneForwardAxis::Y_Positive },
		{ "EBoneForwardAxis::Y_Negative", (int64)EBoneForwardAxis::Y_Negative },
		{ "EBoneForwardAxis::Z_Positive", (int64)EBoneForwardAxis::Z_Positive },
		{ "EBoneForwardAxis::Z_Negative", (int64)EBoneForwardAxis::Z_Negative },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_KawaiiPhysics_EBoneForwardAxis_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EBoneForwardAxis.h" },
		{ "X_Negative.Name", "EBoneForwardAxis::X_Negative" },
		{ "X_Positive.Name", "EBoneForwardAxis::X_Positive" },
		{ "Y_Negative.Name", "EBoneForwardAxis::Y_Negative" },
		{ "Y_Positive.Name", "EBoneForwardAxis::Y_Positive" },
		{ "Z_Negative.Name", "EBoneForwardAxis::Z_Negative" },
		{ "Z_Positive.Name", "EBoneForwardAxis::Z_Positive" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_KawaiiPhysics_EBoneForwardAxis_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_KawaiiPhysics,
		nullptr,
		"EBoneForwardAxis",
		"EBoneForwardAxis",
		Z_Construct_UEnum_KawaiiPhysics_EBoneForwardAxis_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_KawaiiPhysics_EBoneForwardAxis_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_KawaiiPhysics_EBoneForwardAxis_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_KawaiiPhysics_EBoneForwardAxis_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_KawaiiPhysics_EBoneForwardAxis()
	{
		if (!Z_Registration_Info_UEnum_EBoneForwardAxis.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBoneForwardAxis.InnerSingleton, Z_Construct_UEnum_KawaiiPhysics_EBoneForwardAxis_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBoneForwardAxis.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_EBoneForwardAxis_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_EBoneForwardAxis_h_Statics::EnumInfo[] = {
		{ EBoneForwardAxis_StaticEnum, TEXT("EBoneForwardAxis"), &Z_Registration_Info_UEnum_EBoneForwardAxis, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2942432821U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_EBoneForwardAxis_h_4257555661(TEXT("/Script/KawaiiPhysics"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_EBoneForwardAxis_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_EBoneForwardAxis_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
