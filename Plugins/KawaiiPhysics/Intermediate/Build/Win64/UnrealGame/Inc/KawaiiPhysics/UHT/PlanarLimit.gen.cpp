// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KawaiiPhysics/Public/PlanarLimit.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlanarLimit() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPlane();
	KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FCollisionLimitBase();
	KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FPlanarLimit();
	UPackage* Z_Construct_UPackage__Script_KawaiiPhysics();
// End Cross Module References

static_assert(std::is_polymorphic<FPlanarLimit>() == std::is_polymorphic<FCollisionLimitBase>(), "USTRUCT FPlanarLimit cannot be polymorphic unless super FCollisionLimitBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlanarLimit;
class UScriptStruct* FPlanarLimit::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlanarLimit.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlanarLimit.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlanarLimit, Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("PlanarLimit"));
	}
	return Z_Registration_Info_UScriptStruct_PlanarLimit.OuterSingleton;
}
template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<FPlanarLimit>()
{
	return FPlanarLimit::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPlanarLimit_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Plane_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Plane;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlanarLimit_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PlanarLimit.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlanarLimit_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlanarLimit>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlanarLimit_Statics::NewProp_Plane_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlanarLimit" },
		{ "ModuleRelativePath", "Public/PlanarLimit.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlanarLimit_Statics::NewProp_Plane = { "Plane", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlanarLimit, Plane), Z_Construct_UScriptStruct_FPlane, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlanarLimit_Statics::NewProp_Plane_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlanarLimit_Statics::NewProp_Plane_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlanarLimit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlanarLimit_Statics::NewProp_Plane,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlanarLimit_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KawaiiPhysics,
		Z_Construct_UScriptStruct_FCollisionLimitBase,
		&NewStructOps,
		"PlanarLimit",
		sizeof(FPlanarLimit),
		alignof(FPlanarLimit),
		Z_Construct_UScriptStruct_FPlanarLimit_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlanarLimit_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlanarLimit_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlanarLimit_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlanarLimit()
	{
		if (!Z_Registration_Info_UScriptStruct_PlanarLimit.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlanarLimit.InnerSingleton, Z_Construct_UScriptStruct_FPlanarLimit_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PlanarLimit.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_PlanarLimit_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_PlanarLimit_h_Statics::ScriptStructInfo[] = {
		{ FPlanarLimit::StaticStruct, Z_Construct_UScriptStruct_FPlanarLimit_Statics::NewStructOps, TEXT("PlanarLimit"), &Z_Registration_Info_UScriptStruct_PlanarLimit, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlanarLimit), 1872324481U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_PlanarLimit_h_1586729253(TEXT("/Script/KawaiiPhysics"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_PlanarLimit_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_PlanarLimit_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
