// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PocketpairUser/Public/FindSessionsAsyncFunction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFindSessionsAsyncFunction() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	POCKETPAIRUSER_API UClass* Z_Construct_UClass_UFindSessionsAsyncFunction();
	POCKETPAIRUSER_API UClass* Z_Construct_UClass_UFindSessionsAsyncFunction_NoRegister();
	POCKETPAIRUSER_API UClass* Z_Construct_UClass_UPocketpairUserSubsystem_NoRegister();
	POCKETPAIRUSER_API UFunction* Z_Construct_UDelegateFunction_PocketpairUser_AsyncCompletedFindSessionsFunction__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_PocketpairUser();
// End Cross Module References
	DEFINE_FUNCTION(UFindSessionsAsyncFunction::execFindSessionsAsyncFunction)
	{
		P_GET_OBJECT(UPocketpairUserSubsystem,Z_Param_Target);
		P_GET_UBOOL(Z_Param_IsDedicatedServer);
		P_GET_PROPERTY(FStrProperty,Z_Param_InviteCode);
		P_GET_PROPERTY(FStrProperty,Z_Param_ServerType);
		P_GET_PROPERTY(FStrProperty,Z_Param_Region);
		P_GET_PROPERTY(FIntProperty,Z_Param_LessThanTime);
		P_GET_PROPERTY(FStrProperty,Z_Param_WorldGUID);
		P_GET_PROPERTY(FStrProperty,Z_Param_Namespace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFindSessionsAsyncFunction**)Z_Param__Result=UFindSessionsAsyncFunction::FindSessionsAsyncFunction(Z_Param_Target,Z_Param_IsDedicatedServer,Z_Param_InviteCode,Z_Param_ServerType,Z_Param_Region,Z_Param_LessThanTime,Z_Param_WorldGUID,Z_Param_Namespace);
		P_NATIVE_END;
	}
	void UFindSessionsAsyncFunction::StaticRegisterNativesUFindSessionsAsyncFunction()
	{
		UClass* Class = UFindSessionsAsyncFunction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindSessionsAsyncFunction", &UFindSessionsAsyncFunction::execFindSessionsAsyncFunction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFindSessionsAsyncFunction_FindSessionsAsyncFunction_Statics
	{
		struct FindSessionsAsyncFunction_eventFindSessionsAsyncFunction_Parms
		{
			UPocketpairUserSubsystem* Target;
			bool IsDedicatedServer;
			FString InviteCode;
			FString ServerType;
			FString Region;
			int32 LessThanTime;
			FString WorldGUID;
			FString Namespace;
			UFindSessionsAsyncFunction* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
		static void NewProp_IsDedicatedServer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsDedicatedServer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InviteCode_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InviteCode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ServerType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Region_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Region;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LessThanTime_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LessThanTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldGUID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_WorldGUID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Namespace_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Namespace;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFindSessionsAsyncFunction_FindSessionsAsyncFunction_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FindSessionsAsyncFunction_eventFindSessionsAsyncFunction_Parms, Target), Z_Construct_UClass_UPocketpairUserSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFindSessionsAsyncFunction_FindSessionsAsyncFunction_Statics::NewProp_IsDedicatedServer_SetBit(void* Obj)
	{
		((FindSessionsAsyncFunction_eventFindSessionsAsyncFunction_Parms*)Obj)->IsDedicatedServer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFindSessionsAsyncFunction_FindSessionsAsyncFunction_Statics::NewProp_IsDedicatedServer = { "IsDedicatedServer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FindSessionsAsyncFunction_eventFindSessionsAsyncFunction_Parms), &Z_Construct_UFunction_UFindSessionsAsyncFunction_FindSessionsAsyncFunction_Statics::NewProp_IsDedicatedServer_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFindSessionsAsyncFunction_FindSessionsAsyncFunction_Statics::NewProp_InviteCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFindSessionsAsyncFunction_FindSessionsAsyncFunction_Statics::NewProp_InviteCode = { "InviteCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FindSessionsAsyncFunction_eventFindSessionsAsyncFunction_Parms, InviteCode), METADATA_PARAMS(Z_Construct_UFunction_UFindSessionsAsyncFunction_FindSessionsAsyncFunction_Statics::NewProp_InviteCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFindSessionsAsyncFunction_FindSessionsAsyncFunction_Statics::NewProp_InviteCode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFindSessionsAsyncFunction_FindSessionsAsyncFunction_Statics::NewProp_ServerType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFindSessionsAsyncFunction_FindSessionsAsyncFunction_Statics::NewProp_ServerType = { "ServerType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FindSessionsAsyncFunction_eventFindSessionsAsyncFunction_Parms, ServerType), METADATA_PARAMS(Z_Construct_UFunction_UFindSessionsAsyncFunction_FindSessionsAsyncFunction_Statics::NewProp_ServerType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFindSessionsAsyncFunction_FindSessionsAsyncFunction_Statics::NewProp_ServerType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFindSessionsAsyncFunction_FindSessionsAsyncFunction_Statics::NewProp_Region_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFindSessionsAsyncFunction_FindSessionsAsyncFunction_Statics::NewProp_Region = { "Region", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FindSessionsAsyncFunction_eventFindSessionsAsyncFunction_Parms, Region), METADATA_PARAMS(Z_Construct_UFunction_UFindSessionsAsyncFunction_FindSessionsAsyncFunction_Statics::NewProp_Region_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFindSessionsAsyncFunction_FindSessionsAsyncFunction_Statics::NewProp_Region_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFindSessionsAsyncFunction_FindSessionsAsyncFunction_Statics::NewProp_LessThanTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFindSessionsAsyncFunction_FindSessionsAsyncFunction_Statics::NewProp_LessThanTime = { "LessThanTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FindSessionsAsyncFunction_eventFindSessionsAsyncFunction_Parms, LessThanTime), METADATA_PARAMS(Z_Construct_UFunction_UFindSessionsAsyncFunction_FindSessionsAsyncFunction_Statics::NewProp_LessThanTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFindSessionsAsyncFunction_FindSessionsAsyncFunction_Statics::NewProp_LessThanTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFindSessionsAsyncFunction_FindSessionsAsyncFunction_Statics::NewProp_WorldGUID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFindSessionsAsyncFunction_FindSessionsAsyncFunction_Statics::NewProp_WorldGUID = { "WorldGUID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FindSessionsAsyncFunction_eventFindSessionsAsyncFunction_Parms, WorldGUID), METADATA_PARAMS(Z_Construct_UFunction_UFindSessionsAsyncFunction_FindSessionsAsyncFunction_Statics::NewProp_WorldGUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFindSessionsAsyncFunction_FindSessionsAsyncFunction_Statics::NewProp_WorldGUID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFindSessionsAsyncFunction_FindSessionsAsyncFunction_Statics::NewProp_Namespace_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFindSessionsAsyncFunction_FindSessionsAsyncFunction_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FindSessionsAsyncFunction_eventFindSessionsAsyncFunction_Parms, Namespace), METADATA_PARAMS(Z_Construct_UFunction_UFindSessionsAsyncFunction_FindSessionsAsyncFunction_Statics::NewProp_Namespace_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFindSessionsAsyncFunction_FindSessionsAsyncFunction_Statics::NewProp_Namespace_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFindSessionsAsyncFunction_FindSessionsAsyncFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FindSessionsAsyncFunction_eventFindSessionsAsyncFunction_Parms, ReturnValue), Z_Construct_UClass_UFindSessionsAsyncFunction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFindSessionsAsyncFunction_FindSessionsAsyncFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsAsyncFunction_FindSessionsAsyncFunction_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsAsyncFunction_FindSessionsAsyncFunction_Statics::NewProp_IsDedicatedServer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsAsyncFunction_FindSessionsAsyncFunction_Statics::NewProp_InviteCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsAsyncFunction_FindSessionsAsyncFunction_Statics::NewProp_ServerType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsAsyncFunction_FindSessionsAsyncFunction_Statics::NewProp_Region,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsAsyncFunction_FindSessionsAsyncFunction_Statics::NewProp_LessThanTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsAsyncFunction_FindSessionsAsyncFunction_Statics::NewProp_WorldGUID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsAsyncFunction_FindSessionsAsyncFunction_Statics::NewProp_Namespace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsAsyncFunction_FindSessionsAsyncFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFindSessionsAsyncFunction_FindSessionsAsyncFunction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FindSessionsAsyncFunction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFindSessionsAsyncFunction_FindSessionsAsyncFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFindSessionsAsyncFunction, nullptr, "FindSessionsAsyncFunction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFindSessionsAsyncFunction_FindSessionsAsyncFunction_Statics::FindSessionsAsyncFunction_eventFindSessionsAsyncFunction_Parms), Z_Construct_UFunction_UFindSessionsAsyncFunction_FindSessionsAsyncFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFindSessionsAsyncFunction_FindSessionsAsyncFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFindSessionsAsyncFunction_FindSessionsAsyncFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFindSessionsAsyncFunction_FindSessionsAsyncFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFindSessionsAsyncFunction_FindSessionsAsyncFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFindSessionsAsyncFunction_FindSessionsAsyncFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFindSessionsAsyncFunction);
	UClass* Z_Construct_UClass_UFindSessionsAsyncFunction_NoRegister()
	{
		return UFindSessionsAsyncFunction::StaticClass();
	}
	struct Z_Construct_UClass_UFindSessionsAsyncFunction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Completed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Completed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFindSessionsAsyncFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PocketpairUser,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFindSessionsAsyncFunction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFindSessionsAsyncFunction_FindSessionsAsyncFunction, "FindSessionsAsyncFunction" }, // 1070388651
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFindSessionsAsyncFunction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FindSessionsAsyncFunction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FindSessionsAsyncFunction.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFindSessionsAsyncFunction_Statics::NewProp_Completed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FindSessionsAsyncFunction" },
		{ "ModuleRelativePath", "Public/FindSessionsAsyncFunction.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFindSessionsAsyncFunction_Statics::NewProp_Completed = { "Completed", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFindSessionsAsyncFunction, Completed), Z_Construct_UDelegateFunction_PocketpairUser_AsyncCompletedFindSessionsFunction__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFindSessionsAsyncFunction_Statics::NewProp_Completed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFindSessionsAsyncFunction_Statics::NewProp_Completed_MetaData)) }; // 353134819
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFindSessionsAsyncFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFindSessionsAsyncFunction_Statics::NewProp_Completed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFindSessionsAsyncFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFindSessionsAsyncFunction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFindSessionsAsyncFunction_Statics::ClassParams = {
		&UFindSessionsAsyncFunction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFindSessionsAsyncFunction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFindSessionsAsyncFunction_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFindSessionsAsyncFunction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFindSessionsAsyncFunction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFindSessionsAsyncFunction()
	{
		if (!Z_Registration_Info_UClass_UFindSessionsAsyncFunction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFindSessionsAsyncFunction.OuterSingleton, Z_Construct_UClass_UFindSessionsAsyncFunction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFindSessionsAsyncFunction.OuterSingleton;
	}
	template<> POCKETPAIRUSER_API UClass* StaticClass<UFindSessionsAsyncFunction>()
	{
		return UFindSessionsAsyncFunction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFindSessionsAsyncFunction);
	UFindSessionsAsyncFunction::~UFindSessionsAsyncFunction() {}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_FindSessionsAsyncFunction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_FindSessionsAsyncFunction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFindSessionsAsyncFunction, UFindSessionsAsyncFunction::StaticClass, TEXT("UFindSessionsAsyncFunction"), &Z_Registration_Info_UClass_UFindSessionsAsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFindSessionsAsyncFunction), 3865527237U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_FindSessionsAsyncFunction_h_3711533010(TEXT("/Script/PocketpairUser"),
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_FindSessionsAsyncFunction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_FindSessionsAsyncFunction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
