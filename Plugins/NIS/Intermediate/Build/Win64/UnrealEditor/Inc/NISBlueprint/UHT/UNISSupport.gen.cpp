// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NISBlueprint/Public/UNISSupport.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUNISSupport() {}
// Cross Module References
	NISBLUEPRINT_API UEnum* Z_Construct_UEnum_NISBlueprint_UNISSupport();
	UPackage* Z_Construct_UPackage__Script_NISBlueprint();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_UNISSupport;
	static UEnum* UNISSupport_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_UNISSupport.OuterSingleton)
		{
			Z_Registration_Info_UEnum_UNISSupport.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NISBlueprint_UNISSupport, Z_Construct_UPackage__Script_NISBlueprint(), TEXT("UNISSupport"));
		}
		return Z_Registration_Info_UEnum_UNISSupport.OuterSingleton;
	}
	template<> NISBLUEPRINT_API UEnum* StaticEnum<UNISSupport>()
	{
		return UNISSupport_StaticEnum();
	}
	struct Z_Construct_UEnum_NISBlueprint_UNISSupport_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_NISBlueprint_UNISSupport_Statics::Enumerators[] = {
		{ "UNISSupport::Supported", (int64)UNISSupport::Supported },
		{ "UNISSupport::NotSupported", (int64)UNISSupport::NotSupported },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_NISBlueprint_UNISSupport_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UNISSupport.h" },
		{ "NotSupported.Name", "UNISSupport::NotSupported" },
		{ "Supported.Name", "UNISSupport::Supported" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NISBlueprint_UNISSupport_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_NISBlueprint,
		nullptr,
		"UNISSupport",
		"UNISSupport",
		Z_Construct_UEnum_NISBlueprint_UNISSupport_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_NISBlueprint_UNISSupport_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_NISBlueprint_UNISSupport_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_NISBlueprint_UNISSupport_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_NISBlueprint_UNISSupport()
	{
		if (!Z_Registration_Info_UEnum_UNISSupport.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_UNISSupport.InnerSingleton, Z_Construct_UEnum_NISBlueprint_UNISSupport_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_UNISSupport.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_NIS_Source_NISBlueprint_Public_UNISSupport_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_NIS_Source_NISBlueprint_Public_UNISSupport_h_Statics::EnumInfo[] = {
		{ UNISSupport_StaticEnum, TEXT("UNISSupport"), &Z_Registration_Info_UEnum_UNISSupport, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3422800736U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_NIS_Source_NISBlueprint_Public_UNISSupport_h_4192180308(TEXT("/Script/NISBlueprint"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_NIS_Source_NISBlueprint_Public_UNISSupport_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_NIS_Source_NISBlueprint_Public_UNISSupport_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
