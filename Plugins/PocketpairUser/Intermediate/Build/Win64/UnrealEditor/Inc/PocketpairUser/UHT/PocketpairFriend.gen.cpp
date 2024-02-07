// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PocketpairUser/Public/PocketpairFriend.h"
#include "Engine/Classes/GameFramework/OnlineReplStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePocketpairFriend() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	POCKETPAIRUSER_API UClass* Z_Construct_UClass_UPocketpairFriend();
	POCKETPAIRUSER_API UClass* Z_Construct_UClass_UPocketpairFriend_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PocketpairUser();
// End Cross Module References
	DEFINE_FUNCTION(UPocketpairFriend::execGetNetId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FUniqueNetIdRepl*)Z_Param__Result=P_THIS->GetNetId();
		P_NATIVE_END;
	}
	void UPocketpairFriend::StaticRegisterNativesUPocketpairFriend()
	{
		UClass* Class = UPocketpairFriend::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNetId", &UPocketpairFriend::execGetNetId },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPocketpairFriend_GetNetId_Statics
	{
		struct PocketpairFriend_eventGetNetId_Parms
		{
			FUniqueNetIdRepl ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPocketpairFriend_GetNetId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PocketpairFriend_eventGetNetId_Parms, ReturnValue), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPocketpairFriend_GetNetId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPocketpairFriend_GetNetId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPocketpairFriend_GetNetId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PocketpairFriend.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPocketpairFriend_GetNetId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPocketpairFriend, nullptr, "GetNetId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPocketpairFriend_GetNetId_Statics::PocketpairFriend_eventGetNetId_Parms), Z_Construct_UFunction_UPocketpairFriend_GetNetId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPocketpairFriend_GetNetId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPocketpairFriend_GetNetId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPocketpairFriend_GetNetId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPocketpairFriend_GetNetId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPocketpairFriend_GetNetId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPocketpairFriend);
	UClass* Z_Construct_UClass_UPocketpairFriend_NoRegister()
	{
		return UPocketpairFriend::StaticClass();
	}
	struct Z_Construct_UClass_UPocketpairFriend_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPocketpairFriend_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PocketpairUser,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPocketpairFriend_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPocketpairFriend_GetNetId, "GetNetId" }, // 2197244282
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPocketpairFriend_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PocketpairFriend.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PocketpairFriend.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPocketpairFriend_Statics::NewProp_DisplayName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PocketpairFriend" },
		{ "ModuleRelativePath", "Public/PocketpairFriend.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPocketpairFriend_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPocketpairFriend, DisplayName), METADATA_PARAMS(Z_Construct_UClass_UPocketpairFriend_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPocketpairFriend_Statics::NewProp_DisplayName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPocketpairFriend_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPocketpairFriend_Statics::NewProp_DisplayName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPocketpairFriend_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPocketpairFriend>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPocketpairFriend_Statics::ClassParams = {
		&UPocketpairFriend::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPocketpairFriend_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPocketpairFriend_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPocketpairFriend_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPocketpairFriend_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPocketpairFriend()
	{
		if (!Z_Registration_Info_UClass_UPocketpairFriend.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPocketpairFriend.OuterSingleton, Z_Construct_UClass_UPocketpairFriend_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPocketpairFriend.OuterSingleton;
	}
	template<> POCKETPAIRUSER_API UClass* StaticClass<UPocketpairFriend>()
	{
		return UPocketpairFriend::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPocketpairFriend);
	UPocketpairFriend::~UPocketpairFriend() {}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_PocketpairFriend_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_PocketpairFriend_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPocketpairFriend, UPocketpairFriend::StaticClass, TEXT("UPocketpairFriend"), &Z_Registration_Info_UClass_UPocketpairFriend, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPocketpairFriend), 1162163008U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_PocketpairFriend_h_2040916380(TEXT("/Script/PocketpairUser"),
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_PocketpairFriend_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_PocketpairFriend_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
