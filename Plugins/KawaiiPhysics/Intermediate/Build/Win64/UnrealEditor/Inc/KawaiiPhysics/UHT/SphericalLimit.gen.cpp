// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KawaiiPhysics/Public/SphericalLimit.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSphericalLimit() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_ESphericalLimitType();
	KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FCollisionLimitBase();
	KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FSphericalLimit();
	UPackage* Z_Construct_UPackage__Script_KawaiiPhysics();
// End Cross Module References

static_assert(std::is_polymorphic<FSphericalLimit>() == std::is_polymorphic<FCollisionLimitBase>(), "USTRUCT FSphericalLimit cannot be polymorphic unless super FCollisionLimitBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SphericalLimit;
class UScriptStruct* FSphericalLimit::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SphericalLimit.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SphericalLimit.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSphericalLimit, Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("SphericalLimit"));
	}
	return Z_Registration_Info_UScriptStruct_SphericalLimit.OuterSingleton;
}
template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<FSphericalLimit>()
{
	return FSphericalLimit::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSphericalLimit_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LimitType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LimitType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LimitType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSphericalLimit_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SphericalLimit.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSphericalLimit_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSphericalLimit>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSphericalLimit_Statics::NewProp_Radius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SphericalLimit" },
		{ "ModuleRelativePath", "Public/SphericalLimit.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSphericalLimit_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSphericalLimit, Radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FSphericalLimit_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphericalLimit_Statics::NewProp_Radius_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSphericalLimit_Statics::NewProp_LimitType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSphericalLimit_Statics::NewProp_LimitType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SphericalLimit" },
		{ "ModuleRelativePath", "Public/SphericalLimit.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSphericalLimit_Statics::NewProp_LimitType = { "LimitType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSphericalLimit, LimitType), Z_Construct_UEnum_AnimGraphRuntime_ESphericalLimitType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSphericalLimit_Statics::NewProp_LimitType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphericalLimit_Statics::NewProp_LimitType_MetaData)) }; // 1502951913
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSphericalLimit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSphericalLimit_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSphericalLimit_Statics::NewProp_LimitType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSphericalLimit_Statics::NewProp_LimitType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSphericalLimit_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KawaiiPhysics,
		Z_Construct_UScriptStruct_FCollisionLimitBase,
		&NewStructOps,
		"SphericalLimit",
		sizeof(FSphericalLimit),
		alignof(FSphericalLimit),
		Z_Construct_UScriptStruct_FSphericalLimit_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphericalLimit_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSphericalLimit_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphericalLimit_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSphericalLimit()
	{
		if (!Z_Registration_Info_UScriptStruct_SphericalLimit.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SphericalLimit.InnerSingleton, Z_Construct_UScriptStruct_FSphericalLimit_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SphericalLimit.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_SphericalLimit_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_SphericalLimit_h_Statics::ScriptStructInfo[] = {
		{ FSphericalLimit::StaticStruct, Z_Construct_UScriptStruct_FSphericalLimit_Statics::NewStructOps, TEXT("SphericalLimit"), &Z_Registration_Info_UScriptStruct_SphericalLimit, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSphericalLimit), 2006503540U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_SphericalLimit_h_2200671320(TEXT("/Script/KawaiiPhysics"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_SphericalLimit_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_SphericalLimit_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
