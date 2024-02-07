// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PocketpairUser/Public/JoinSessionResultType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJoinSessionResultType() {}
// Cross Module References
	POCKETPAIRUSER_API UEnum* Z_Construct_UEnum_PocketpairUser_JoinSessionResultType();
	UPackage* Z_Construct_UPackage__Script_PocketpairUser();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_JoinSessionResultType;
	static UEnum* JoinSessionResultType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_JoinSessionResultType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_JoinSessionResultType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PocketpairUser_JoinSessionResultType, Z_Construct_UPackage__Script_PocketpairUser(), TEXT("JoinSessionResultType"));
		}
		return Z_Registration_Info_UEnum_JoinSessionResultType.OuterSingleton;
	}
	template<> POCKETPAIRUSER_API UEnum* StaticEnum<JoinSessionResultType>()
	{
		return JoinSessionResultType_StaticEnum();
	}
	struct Z_Construct_UEnum_PocketpairUser_JoinSessionResultType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PocketpairUser_JoinSessionResultType_Statics::Enumerators[] = {
		{ "JoinSessionResultType::Success", (int64)JoinSessionResultType::Success },
		{ "JoinSessionResultType::SessionIsFull", (int64)JoinSessionResultType::SessionIsFull },
		{ "JoinSessionResultType::SessionDoesNotExist", (int64)JoinSessionResultType::SessionDoesNotExist },
		{ "JoinSessionResultType::CouldNotRetrieveAddress", (int64)JoinSessionResultType::CouldNotRetrieveAddress },
		{ "JoinSessionResultType::AlreadyInSession", (int64)JoinSessionResultType::AlreadyInSession },
		{ "JoinSessionResultType::UnknownError", (int64)JoinSessionResultType::UnknownError },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PocketpairUser_JoinSessionResultType_Statics::Enum_MetaDataParams[] = {
		{ "AlreadyInSession.Name", "JoinSessionResultType::AlreadyInSession" },
		{ "BlueprintType", "true" },
		{ "CouldNotRetrieveAddress.Name", "JoinSessionResultType::CouldNotRetrieveAddress" },
		{ "ModuleRelativePath", "Public/JoinSessionResultType.h" },
		{ "SessionDoesNotExist.Name", "JoinSessionResultType::SessionDoesNotExist" },
		{ "SessionIsFull.Name", "JoinSessionResultType::SessionIsFull" },
		{ "Success.Name", "JoinSessionResultType::Success" },
		{ "UnknownError.Name", "JoinSessionResultType::UnknownError" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PocketpairUser_JoinSessionResultType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PocketpairUser,
		nullptr,
		"JoinSessionResultType",
		"JoinSessionResultType",
		Z_Construct_UEnum_PocketpairUser_JoinSessionResultType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PocketpairUser_JoinSessionResultType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PocketpairUser_JoinSessionResultType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PocketpairUser_JoinSessionResultType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PocketpairUser_JoinSessionResultType()
	{
		if (!Z_Registration_Info_UEnum_JoinSessionResultType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_JoinSessionResultType.InnerSingleton, Z_Construct_UEnum_PocketpairUser_JoinSessionResultType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_JoinSessionResultType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_JoinSessionResultType_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_JoinSessionResultType_h_Statics::EnumInfo[] = {
		{ JoinSessionResultType_StaticEnum, TEXT("JoinSessionResultType"), &Z_Registration_Info_UEnum_JoinSessionResultType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3584610619U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_JoinSessionResultType_h_1470353625(TEXT("/Script/PocketpairUser"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_JoinSessionResultType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_JoinSessionResultType_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
