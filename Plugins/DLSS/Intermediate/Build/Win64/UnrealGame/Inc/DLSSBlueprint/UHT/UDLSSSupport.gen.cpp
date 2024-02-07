// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DLSSBlueprint/Public/UDLSSSupport.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUDLSSSupport() {}
// Cross Module References
	DLSSBLUEPRINT_API UEnum* Z_Construct_UEnum_DLSSBlueprint_UDLSSSupport();
	UPackage* Z_Construct_UPackage__Script_DLSSBlueprint();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_UDLSSSupport;
	static UEnum* UDLSSSupport_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_UDLSSSupport.OuterSingleton)
		{
			Z_Registration_Info_UEnum_UDLSSSupport.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DLSSBlueprint_UDLSSSupport, Z_Construct_UPackage__Script_DLSSBlueprint(), TEXT("UDLSSSupport"));
		}
		return Z_Registration_Info_UEnum_UDLSSSupport.OuterSingleton;
	}
	template<> DLSSBLUEPRINT_API UEnum* StaticEnum<UDLSSSupport>()
	{
		return UDLSSSupport_StaticEnum();
	}
	struct Z_Construct_UEnum_DLSSBlueprint_UDLSSSupport_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DLSSBlueprint_UDLSSSupport_Statics::Enumerators[] = {
		{ "UDLSSSupport::Supported", (int64)UDLSSSupport::Supported },
		{ "UDLSSSupport::NotSupported", (int64)UDLSSSupport::NotSupported },
		{ "UDLSSSupport::NotSupportedIncompatibleHardware", (int64)UDLSSSupport::NotSupportedIncompatibleHardware },
		{ "UDLSSSupport::NotSupportedDriverOutOfDate", (int64)UDLSSSupport::NotSupportedDriverOutOfDate },
		{ "UDLSSSupport::NotSupportedOperatingSystemOutOfDate", (int64)UDLSSSupport::NotSupportedOperatingSystemOutOfDate },
		{ "UDLSSSupport::NotSupportedByPlatformAtBuildTime", (int64)UDLSSSupport::NotSupportedByPlatformAtBuildTime },
		{ "UDLSSSupport::NotSupportedIncompatibleAPICaptureToolActive", (int64)UDLSSSupport::NotSupportedIncompatibleAPICaptureToolActive },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DLSSBlueprint_UDLSSSupport_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UDLSSSupport.h" },
		{ "NotSupported.Name", "UDLSSSupport::NotSupported" },
		{ "NotSupportedByPlatformAtBuildTime.Name", "UDLSSSupport::NotSupportedByPlatformAtBuildTime" },
		{ "NotSupportedDriverOutOfDate.Name", "UDLSSSupport::NotSupportedDriverOutOfDate" },
		{ "NotSupportedIncompatibleAPICaptureToolActive.Name", "UDLSSSupport::NotSupportedIncompatibleAPICaptureToolActive" },
		{ "NotSupportedIncompatibleHardware.Name", "UDLSSSupport::NotSupportedIncompatibleHardware" },
		{ "NotSupportedOperatingSystemOutOfDate.Name", "UDLSSSupport::NotSupportedOperatingSystemOutOfDate" },
		{ "Supported.Name", "UDLSSSupport::Supported" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DLSSBlueprint_UDLSSSupport_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DLSSBlueprint,
		nullptr,
		"UDLSSSupport",
		"UDLSSSupport",
		Z_Construct_UEnum_DLSSBlueprint_UDLSSSupport_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DLSSBlueprint_UDLSSSupport_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DLSSBlueprint_UDLSSSupport_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DLSSBlueprint_UDLSSSupport_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DLSSBlueprint_UDLSSSupport()
	{
		if (!Z_Registration_Info_UEnum_UDLSSSupport.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_UDLSSSupport.InnerSingleton, Z_Construct_UEnum_DLSSBlueprint_UDLSSSupport_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_UDLSSSupport.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_DLSS_Source_DLSSBlueprint_Public_UDLSSSupport_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_DLSS_Source_DLSSBlueprint_Public_UDLSSSupport_h_Statics::EnumInfo[] = {
		{ UDLSSSupport_StaticEnum, TEXT("UDLSSSupport"), &Z_Registration_Info_UEnum_UDLSSSupport, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3038643600U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_DLSS_Source_DLSSBlueprint_Public_UDLSSSupport_h_1260702317(TEXT("/Script/DLSSBlueprint"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_DLSS_Source_DLSSBlueprint_Public_UDLSSSupport_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_DLSS_Source_DLSSBlueprint_Public_UDLSSSupport_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
