// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KawaiiPhysics/Public/CapsuleLimitData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCapsuleLimitData() {}
// Cross Module References
	KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FCapsuleLimitData();
	KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FCollisionLimitDataBase();
	UPackage* Z_Construct_UPackage__Script_KawaiiPhysics();
// End Cross Module References

static_assert(std::is_polymorphic<FCapsuleLimitData>() == std::is_polymorphic<FCollisionLimitDataBase>(), "USTRUCT FCapsuleLimitData cannot be polymorphic unless super FCollisionLimitDataBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CapsuleLimitData;
class UScriptStruct* FCapsuleLimitData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CapsuleLimitData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CapsuleLimitData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCapsuleLimitData, Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("CapsuleLimitData"));
	}
	return Z_Registration_Info_UScriptStruct_CapsuleLimitData.OuterSingleton;
}
template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<FCapsuleLimitData>()
{
	return FCapsuleLimitData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCapsuleLimitData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Length_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Length;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CapsuleLimitData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCapsuleLimitData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::NewProp_Radius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CapsuleLimitData" },
		{ "ModuleRelativePath", "Public/CapsuleLimitData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCapsuleLimitData, Radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::NewProp_Length_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CapsuleLimitData" },
		{ "ModuleRelativePath", "Public/CapsuleLimitData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCapsuleLimitData, Length), METADATA_PARAMS(Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::NewProp_Length_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::NewProp_Length_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::NewProp_Length,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KawaiiPhysics,
		Z_Construct_UScriptStruct_FCollisionLimitDataBase,
		&NewStructOps,
		"CapsuleLimitData",
		sizeof(FCapsuleLimitData),
		alignof(FCapsuleLimitData),
		Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCapsuleLimitData()
	{
		if (!Z_Registration_Info_UScriptStruct_CapsuleLimitData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CapsuleLimitData.InnerSingleton, Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CapsuleLimitData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_CapsuleLimitData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_CapsuleLimitData_h_Statics::ScriptStructInfo[] = {
		{ FCapsuleLimitData::StaticStruct, Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::NewStructOps, TEXT("CapsuleLimitData"), &Z_Registration_Info_UScriptStruct_CapsuleLimitData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCapsuleLimitData), 3801806207U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_CapsuleLimitData_h_3093906280(TEXT("/Script/KawaiiPhysics"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_CapsuleLimitData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_CapsuleLimitData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
