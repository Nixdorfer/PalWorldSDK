// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PocketpairUser/Public/CreateSessionAsyncFunction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCreateSessionAsyncFunction() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	POCKETPAIRUSER_API UClass* Z_Construct_UClass_UCreateSessionAsyncFunction();
	POCKETPAIRUSER_API UClass* Z_Construct_UClass_UCreateSessionAsyncFunction_NoRegister();
	POCKETPAIRUSER_API UClass* Z_Construct_UClass_UPocketpairUserSubsystem_NoRegister();
	POCKETPAIRUSER_API UFunction* Z_Construct_UDelegateFunction_PocketpairUser_AsyncCompletedCreateSessionFunction__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_PocketpairUser();
// End Cross Module References
	DEFINE_FUNCTION(UCreateSessionAsyncFunction::execCreateSessionAsyncFunction)
	{
		P_GET_OBJECT(UPocketpairUserSubsystem,Z_Param_Target);
		P_GET_UBOOL(Z_Param_IsDedicatedServer);
		P_GET_PROPERTY(FIntProperty,Z_Param_PublicConnections);
		P_GET_PROPERTY(FStrProperty,Z_Param_InviteCode);
		P_GET_PROPERTY(FStrProperty,Z_Param_ServerName);
		P_GET_PROPERTY(FStrProperty,Z_Param_Desc);
		P_GET_PROPERTY(FStrProperty,Z_Param_ServerAddress);
		P_GET_PROPERTY(FIntProperty,Z_Param_ServerPort);
		P_GET_UBOOL(Z_Param_IsPassword);
		P_GET_PROPERTY(FStrProperty,Z_Param_Version);
		P_GET_PROPERTY(FStrProperty,Z_Param_ServerType);
		P_GET_PROPERTY(FStrProperty,Z_Param_Region);
		P_GET_PROPERTY(FStrProperty,Z_Param_Namespace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCreateSessionAsyncFunction**)Z_Param__Result=UCreateSessionAsyncFunction::CreateSessionAsyncFunction(Z_Param_Target,Z_Param_IsDedicatedServer,Z_Param_PublicConnections,Z_Param_InviteCode,Z_Param_ServerName,Z_Param_Desc,Z_Param_ServerAddress,Z_Param_ServerPort,Z_Param_IsPassword,Z_Param_Version,Z_Param_ServerType,Z_Param_Region,Z_Param_Namespace);
		P_NATIVE_END;
	}
	void UCreateSessionAsyncFunction::StaticRegisterNativesUCreateSessionAsyncFunction()
	{
		UClass* Class = UCreateSessionAsyncFunction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateSessionAsyncFunction", &UCreateSessionAsyncFunction::execCreateSessionAsyncFunction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCreateSessionAsyncFunction_CreateSessionAsyncFunction_Statics
	{
		struct CreateSessionAsyncFunction_eventCreateSessionAsyncFunction_Parms
		{
			UPocketpairUserSubsystem* Target;
			bool IsDedicatedServer;
			int32 PublicConnections;
			FString InviteCode;
			FString ServerName;
			FString Desc;
			FString ServerAddress;
			int32 ServerPort;
			bool IsPassword;
			FString Version;
			FString ServerType;
			FString Region;
			FString Namespace;
			UCreateSessionAsyncFunction* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
		static void NewProp_IsDedicatedServer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsDedicatedServer;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PublicConnections;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InviteCode_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InviteCode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ServerName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Desc_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Desc;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerAddress_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ServerAddress;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ServerPort;
		static void NewProp_IsPassword_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsPassword;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Version;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ServerType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Region_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Region;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCreateSessionAsyncFunction_CreateSessionAsyncFunction_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CreateSessionAsyncFunction_eventCreateSessionAsyncFunction_Parms, Target), Z_Construct_UClass_UPocketpairUserSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCreateSessionAsyncFunction_CreateSessionAsyncFunction_Statics::NewProp_IsDedicatedServer_SetBit(void* Obj)
	{
		((CreateSessionAsyncFunction_eventCreateSessionAsyncFunction_Parms*)Obj)->IsDedicatedServer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCreateSessionAsyncFunction_CreateSessionAsyncFunction_Statics::NewProp_IsDedicatedServer = { "IsDedicatedServer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CreateSessionAsyncFunction_eventCreateSessionAsyncFunction_Parms), &Z_Construct_UFunction_UCreateSessionAsyncFunction_CreateSessionAsyncFunction_Statics::NewProp_IsDedicatedServer_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCreateSessionAsyncFunction_CreateSessionAsyncFunction_Statics::NewProp_PublicConnections = { "PublicConnections", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CreateSessionAsyncFunction_eventCreateSessionAsyncFunction_Parms, PublicConnections), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCreateSessionAsyncFunction_CreateSessionAsyncFunction_Statics::NewProp_InviteCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCreateSessionAsyncFunction_CreateSessionAsyncFunction_Statics::NewProp_InviteCode = { "InviteCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CreateSessionAsyncFunction_eventCreateSessionAsyncFunction_Parms, InviteCode), METADATA_PARAMS(Z_Construct_UFunction_UCreateSessionAsyncFunction_CreateSessionAsyncFunction_Statics::NewProp_InviteCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreateSessionAsyncFunction_CreateSessionAsyncFunction_Statics::NewProp_InviteCode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCreateSessionAsyncFunction_CreateSessionAsyncFunction_Statics::NewProp_ServerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCreateSessionAsyncFunction_CreateSessionAsyncFunction_Statics::NewProp_ServerName = { "ServerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CreateSessionAsyncFunction_eventCreateSessionAsyncFunction_Parms, ServerName), METADATA_PARAMS(Z_Construct_UFunction_UCreateSessionAsyncFunction_CreateSessionAsyncFunction_Statics::NewProp_ServerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreateSessionAsyncFunction_CreateSessionAsyncFunction_Statics::NewProp_ServerName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCreateSessionAsyncFunction_CreateSessionAsyncFunction_Statics::NewProp_Desc_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCreateSessionAsyncFunction_CreateSessionAsyncFunction_Statics::NewProp_Desc = { "Desc", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CreateSessionAsyncFunction_eventCreateSessionAsyncFunction_Parms, Desc), METADATA_PARAMS(Z_Construct_UFunction_UCreateSessionAsyncFunction_CreateSessionAsyncFunction_Statics::NewProp_Desc_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreateSessionAsyncFunction_CreateSessionAsyncFunction_Statics::NewProp_Desc_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCreateSessionAsyncFunction_CreateSessionAsyncFunction_Statics::NewProp_ServerAddress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCreateSessionAsyncFunction_CreateSessionAsyncFunction_Statics::NewProp_ServerAddress = { "ServerAddress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CreateSessionAsyncFunction_eventCreateSessionAsyncFunction_Parms, ServerAddress), METADATA_PARAMS(Z_Construct_UFunction_UCreateSessionAsyncFunction_CreateSessionAsyncFunction_Statics::NewProp_ServerAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreateSessionAsyncFunction_CreateSessionAsyncFunction_Statics::NewProp_ServerAddress_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCreateSessionAsyncFunction_CreateSessionAsyncFunction_Statics::NewProp_ServerPort = { "ServerPort", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CreateSessionAsyncFunction_eventCreateSessionAsyncFunction_Parms, ServerPort), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCreateSessionAsyncFunction_CreateSessionAsyncFunction_Statics::NewProp_IsPassword_SetBit(void* Obj)
	{
		((CreateSessionAsyncFunction_eventCreateSessionAsyncFunction_Parms*)Obj)->IsPassword = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCreateSessionAsyncFunction_CreateSessionAsyncFunction_Statics::NewProp_IsPassword = { "IsPassword", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CreateSessionAsyncFunction_eventCreateSessionAsyncFunction_Parms), &Z_Construct_UFunction_UCreateSessionAsyncFunction_CreateSessionAsyncFunction_Statics::NewProp_IsPassword_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCreateSessionAsyncFunction_CreateSessionAsyncFunction_Statics::NewProp_Version_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCreateSessionAsyncFunction_CreateSessionAsyncFunction_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CreateSessionAsyncFunction_eventCreateSessionAsyncFunction_Parms, Version), METADATA_PARAMS(Z_Construct_UFunction_UCreateSessionAsyncFunction_CreateSessionAsyncFunction_Statics::NewProp_Version_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreateSessionAsyncFunction_CreateSessionAsyncFunction_Statics::NewProp_Version_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCreateSessionAsyncFunction_CreateSessionAsyncFunction_Statics::NewProp_ServerType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCreateSessionAsyncFunction_CreateSessionAsyncFunction_Statics::NewProp_ServerType = { "ServerType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CreateSessionAsyncFunction_eventCreateSessionAsyncFunction_Parms, ServerType), METADATA_PARAMS(Z_Construct_UFunction_UCreateSessionAsyncFunction_CreateSessionAsyncFunction_Statics::NewProp_ServerType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreateSessionAsyncFunction_CreateSessionAsyncFunction_Statics::NewProp_ServerType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCreateSessionAsyncFunction_CreateSessionAsyncFunction_Statics::NewProp_Region_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCreateSessionAsyncFunction_CreateSessionAsyncFunction_Statics::NewProp_Region = { "Region", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CreateSessionAsyncFunction_eventCreateSessionAsyncFunction_Parms, Region), METADATA_PARAMS(Z_Construct_UFunction_UCreateSessionAsyncFunction_CreateSessionAsyncFunction_Statics::NewProp_Region_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreateSessionAsyncFunction_CreateSessionAsyncFunction_Statics::NewProp_Region_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCreateSessionAsyncFunction_CreateSessionAsyncFunction_Statics::NewProp_Namespace_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCreateSessionAsyncFunction_CreateSessionAsyncFunction_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CreateSessionAsyncFunction_eventCreateSessionAsyncFunction_Parms, Namespace), METADATA_PARAMS(Z_Construct_UFunction_UCreateSessionAsyncFunction_CreateSessionAsyncFunction_Statics::NewProp_Namespace_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreateSessionAsyncFunction_CreateSessionAsyncFunction_Statics::NewProp_Namespace_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCreateSessionAsyncFunction_CreateSessionAsyncFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CreateSessionAsyncFunction_eventCreateSessionAsyncFunction_Parms, ReturnValue), Z_Construct_UClass_UCreateSessionAsyncFunction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCreateSessionAsyncFunction_CreateSessionAsyncFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateSessionAsyncFunction_CreateSessionAsyncFunction_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateSessionAsyncFunction_CreateSessionAsyncFunction_Statics::NewProp_IsDedicatedServer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateSessionAsyncFunction_CreateSessionAsyncFunction_Statics::NewProp_PublicConnections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateSessionAsyncFunction_CreateSessionAsyncFunction_Statics::NewProp_InviteCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateSessionAsyncFunction_CreateSessionAsyncFunction_Statics::NewProp_ServerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateSessionAsyncFunction_CreateSessionAsyncFunction_Statics::NewProp_Desc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateSessionAsyncFunction_CreateSessionAsyncFunction_Statics::NewProp_ServerAddress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateSessionAsyncFunction_CreateSessionAsyncFunction_Statics::NewProp_ServerPort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateSessionAsyncFunction_CreateSessionAsyncFunction_Statics::NewProp_IsPassword,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateSessionAsyncFunction_CreateSessionAsyncFunction_Statics::NewProp_Version,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateSessionAsyncFunction_CreateSessionAsyncFunction_Statics::NewProp_ServerType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateSessionAsyncFunction_CreateSessionAsyncFunction_Statics::NewProp_Region,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateSessionAsyncFunction_CreateSessionAsyncFunction_Statics::NewProp_Namespace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateSessionAsyncFunction_CreateSessionAsyncFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCreateSessionAsyncFunction_CreateSessionAsyncFunction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CreateSessionAsyncFunction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCreateSessionAsyncFunction_CreateSessionAsyncFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCreateSessionAsyncFunction, nullptr, "CreateSessionAsyncFunction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCreateSessionAsyncFunction_CreateSessionAsyncFunction_Statics::CreateSessionAsyncFunction_eventCreateSessionAsyncFunction_Parms), Z_Construct_UFunction_UCreateSessionAsyncFunction_CreateSessionAsyncFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreateSessionAsyncFunction_CreateSessionAsyncFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCreateSessionAsyncFunction_CreateSessionAsyncFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreateSessionAsyncFunction_CreateSessionAsyncFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCreateSessionAsyncFunction_CreateSessionAsyncFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCreateSessionAsyncFunction_CreateSessionAsyncFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCreateSessionAsyncFunction);
	UClass* Z_Construct_UClass_UCreateSessionAsyncFunction_NoRegister()
	{
		return UCreateSessionAsyncFunction::StaticClass();
	}
	struct Z_Construct_UClass_UCreateSessionAsyncFunction_Statics
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
	UObject* (*const Z_Construct_UClass_UCreateSessionAsyncFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PocketpairUser,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCreateSessionAsyncFunction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCreateSessionAsyncFunction_CreateSessionAsyncFunction, "CreateSessionAsyncFunction" }, // 1800402340
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreateSessionAsyncFunction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CreateSessionAsyncFunction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CreateSessionAsyncFunction.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreateSessionAsyncFunction_Statics::NewProp_Completed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CreateSessionAsyncFunction" },
		{ "ModuleRelativePath", "Public/CreateSessionAsyncFunction.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCreateSessionAsyncFunction_Statics::NewProp_Completed = { "Completed", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCreateSessionAsyncFunction, Completed), Z_Construct_UDelegateFunction_PocketpairUser_AsyncCompletedCreateSessionFunction__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCreateSessionAsyncFunction_Statics::NewProp_Completed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCreateSessionAsyncFunction_Statics::NewProp_Completed_MetaData)) }; // 1086861545
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCreateSessionAsyncFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreateSessionAsyncFunction_Statics::NewProp_Completed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCreateSessionAsyncFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCreateSessionAsyncFunction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCreateSessionAsyncFunction_Statics::ClassParams = {
		&UCreateSessionAsyncFunction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCreateSessionAsyncFunction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCreateSessionAsyncFunction_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCreateSessionAsyncFunction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCreateSessionAsyncFunction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCreateSessionAsyncFunction()
	{
		if (!Z_Registration_Info_UClass_UCreateSessionAsyncFunction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCreateSessionAsyncFunction.OuterSingleton, Z_Construct_UClass_UCreateSessionAsyncFunction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCreateSessionAsyncFunction.OuterSingleton;
	}
	template<> POCKETPAIRUSER_API UClass* StaticClass<UCreateSessionAsyncFunction>()
	{
		return UCreateSessionAsyncFunction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCreateSessionAsyncFunction);
	UCreateSessionAsyncFunction::~UCreateSessionAsyncFunction() {}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_CreateSessionAsyncFunction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_CreateSessionAsyncFunction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCreateSessionAsyncFunction, UCreateSessionAsyncFunction::StaticClass, TEXT("UCreateSessionAsyncFunction"), &Z_Registration_Info_UClass_UCreateSessionAsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCreateSessionAsyncFunction), 4084003355U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_CreateSessionAsyncFunction_h_1451261753(TEXT("/Script/PocketpairUser"),
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_CreateSessionAsyncFunction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_PocketpairUser_Source_PocketpairUser_Public_CreateSessionAsyncFunction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
