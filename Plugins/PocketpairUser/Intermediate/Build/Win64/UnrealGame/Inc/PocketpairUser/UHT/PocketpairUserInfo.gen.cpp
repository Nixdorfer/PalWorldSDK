// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PocketpairUser/Public/PocketpairUserInfo.h"
#include "Engine/Classes/GameFramework/OnlineReplStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePocketpairUserInfo() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	POCKETPAIRUSER_API UClass* Z_Construct_UClass_UPocketpairUserInfo();
	POCKETPAIRUSER_API UClass* Z_Construct_UClass_UPocketpairUserInfo_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PocketpairUser();
// End Cross Module References
	DEFINE_FUNCTION(UPocketpairUserInfo::execGetDebugString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetDebugString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPocketpairUserInfo::execGetNetId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FUniqueNetIdRepl*)Z_Param__Result=P_THIS->GetNetId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPocketpairUserInfo::execGetNickname)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetNickname();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPocketpairUserInfo::execGetOnlineSubsystemName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetOnlineSubsystemName();
		P_NATIVE_END;
	}
	void UPocketpairUserInfo::StaticRegisterNativesUPocketpairUserInfo()
	{
		UClass* Class = UPocketpairUserInfo::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDebugString", &UPocketpairUserInfo::execGetDebugString },
			{ "GetNetId", &UPocketpairUserInfo::execGetNetId },
			{ "GetNickname", &UPocketpairUserInfo::execGetNickname },
			{ "GetOnlineSubsystemName", &UPocketpairUserInfo::execGetOnlineSubsystemName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPocketpairUserInfo_GetDebugString_Statics
	{
		struct PocketpairUserInfo_eventGetDebugString_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPocketpairUserInfo_GetDebugString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PocketpairUserInfo_eventGetDebugString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPocketpairUserInfo_GetDebugString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPocketpairUserInfo_GetDebugString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPocketpairUserInfo_GetDebugString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PocketpairUserInfo.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPocketpairUserInfo_GetDebugString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPocketpairUserInfo, nullptr, "GetDebugString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPocketpairUserInfo_GetDebugString_Statics::PocketpairUserInfo_eventGetDebugString_Parms), Z_Construct_UFunction_UPocketpairUserInfo_GetDebugString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPocketpairUserInfo_GetDebugString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPocketpairUserInfo_GetDebugString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPocketpairUserInfo_GetDebugString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPocketpairUserInfo_GetDebugString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPocketpairUserInfo_GetDebugString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPocketpairUserInfo_GetNetId_Statics
	{
		struct PocketpairUserInfo_eventGetNetId_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPocketpairUserInfo_GetNetId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PocketpairUserInfo_eventGetNetId_Parms, ReturnValue), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPocketpairUserInfo_GetNetId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPocketpairUserInfo_GetNetId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPocketpairUserInfo_GetNetId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PocketpairUserInfo.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPocketpairUserInfo_GetNetId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPocketpairUserInfo, nullptr, "GetNetId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPocketpairUserInfo_GetNetId_Statics::PocketpairUserInfo_eventGetNetId_Parms), Z_Construct_UFunction_UPocketpairUserInfo_GetNetId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPocketpairUserInfo_GetNetId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPocketpairUserInfo_GetNetId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPocketpairUserInfo_GetNetId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPocketpairUserInfo_GetNetId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPocketpairUserInfo_GetNetId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPocketpairUserInfo_GetNickname_Statics
	{
		struct PocketpairUserInfo_eventGetNickname_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPocketpairUserInfo_GetNickname_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PocketpairUserInfo_eventGetNickname_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPocketpairUserInfo_GetNickname_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPocketpairUserInfo_GetNickname_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPocketpairUserInfo_GetNickname_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PocketpairUserInfo.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPocketpairUserInfo_GetNickname_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPocketpairUserInfo, nullptr, "GetNickname", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPocketpairUserInfo_GetNickname_Statics::PocketpairUserInfo_eventGetNickname_Parms), Z_Construct_UFunction_UPocketpairUserInfo_GetNickname_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPocketpairUserInfo_GetNickname_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPocketpairUserInfo_GetNickname_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPocketpairUserInfo_GetNickname_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPocketpairUserInfo_GetNickname()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPocketpairUserInfo_GetNickname_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPocketpairUserInfo_GetOnlineSubsystemName_Statics
	{
		struct PocketpairUserInfo_eventGetOnlineSubsystemName_Parms
		{
			FName ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPocketpairUserInfo_GetOnlineSubsystemName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PocketpairUserInfo_eventGetOnlineSubsystemName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPocketpairUserInfo_GetOnlineSubsystemName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPocketpairUserInfo_GetOnlineSubsystemName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPocketpairUserInfo_GetOnlineSubsystemName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PocketpairUserInfo.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPocketpairUserInfo_GetOnlineSubsystemName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPocketpairUserInfo, nullptr, "GetOnlineSubsystemName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPocketpairUserInfo_GetOnlineSubsystemName_Statics::PocketpairUserInfo_eventGetOnlineSubsystemName_Parms), Z_Construct_UFunction_UPocketpairUserInfo_GetOnlineSubsystemName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPocketpairUserInfo_GetOnlineSubsystemName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPocketpairUserInfo_GetOnlineSubsystemName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPocketpairUserInfo_GetOnlineSubsystemName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPocketpairUserInfo_GetOnlineSubsystemName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPocketpairUserInfo_GetOnlineSubsystemName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPocketpairUserInfo);
	UClass* Z_Construct_UClass_UPocketpairUserInfo_NoRegister()
	{
		return UPocketpairUserInfo::StaticClass();
	}
	struct Z_Construct_UClass_UPocketpairUserInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPocketpairUserInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PocketpairUser,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPocketpairUserInfo_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPocketpairUserInfo_GetDebugString, "GetDebugString" }, // 3810840317
		{ &Z_Construct_UFunction_UPocketpairUserInfo_GetNetId, "GetNetId" }, // 3740881492
		{ &Z_Construct_UFunction_UPocketpairUserInfo_GetNickname, "GetNickname" }, // 29217271
		{ &Z_Construct_UFunction_UPocketpairUserInfo_GetOnlineSubsystemName, "GetOnlineSubsystemName" }, // 2487177341
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPocketpairUserInfo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PocketpairUserInfo.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PocketpairUserInfo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPocketpairUserInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPocketpairUserInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPocketpairUserInfo_Statics::ClassParams = {
		&UPocketpairUserInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPocketpairUserInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPocketpairUserInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPocketpairUserInfo()
	{
		if (!Z_Registration_Info_UClass_UPocketpairUserInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPocketpairUserInfo.OuterSingleton, Z_Construct_UClass_UPocketpairUserInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPocketpairUserInfo.OuterSingleton;
	}
	template<> POCKETPAIRUSER_API UClass* StaticClass<UPocketpairUserInfo>()
	{
		return UPocketpairUserInfo::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPocketpairUserInfo);
	UPocketpairUserInfo::~UPocketpairUserInfo() {}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_PocketpairUserInfo_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_PocketpairUserInfo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPocketpairUserInfo, UPocketpairUserInfo::StaticClass, TEXT("UPocketpairUserInfo"), &Z_Registration_Info_UClass_UPocketpairUserInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPocketpairUserInfo), 1875220081U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_PocketpairUserInfo_h_2714681093(TEXT("/Script/PocketpairUser"),
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_PocketpairUserInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_PocketpairUserInfo_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
