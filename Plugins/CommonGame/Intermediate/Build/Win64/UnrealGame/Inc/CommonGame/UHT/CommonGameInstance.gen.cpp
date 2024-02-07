// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonGame/Public/CommonGameInstance.h"
#include "GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonGameInstance() {}
// Cross Module References
	COMMONGAME_API UClass* Z_Construct_UClass_UCommonGameInstance();
	COMMONGAME_API UClass* Z_Construct_UClass_UCommonGameInstance_NoRegister();
	COMMONUSER_API UClass* Z_Construct_UClass_UCommonSession_SearchResult_NoRegister();
	COMMONUSER_API UClass* Z_Construct_UClass_UCommonUserInfo_NoRegister();
	COMMONUSER_API UEnum* Z_Construct_UEnum_CommonUser_ECommonUserAvailability();
	COMMONUSER_API UEnum* Z_Construct_UEnum_CommonUser_ECommonUserPrivilege();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_CommonGame();
// End Cross Module References
	DEFINE_FUNCTION(UCommonGameInstance::execHandlePrivilegeChanged)
	{
		P_GET_OBJECT(UCommonUserInfo,Z_Param_UserInfo);
		P_GET_ENUM(ECommonUserPrivilege,Z_Param_Privilege);
		P_GET_ENUM(ECommonUserAvailability,Z_Param_OldAvailability);
		P_GET_ENUM(ECommonUserAvailability,Z_Param_NewAvailability);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandlePrivilegeChanged(Z_Param_UserInfo,ECommonUserPrivilege(Z_Param_Privilege),ECommonUserAvailability(Z_Param_OldAvailability),ECommonUserAvailability(Z_Param_NewAvailability));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonGameInstance::execHandleSystemMessage)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_MessageType);
		P_GET_PROPERTY(FTextProperty,Z_Param_Title);
		P_GET_PROPERTY(FTextProperty,Z_Param_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleSystemMessage(Z_Param_MessageType,Z_Param_Title,Z_Param_Message);
		P_NATIVE_END;
	}
	void UCommonGameInstance::StaticRegisterNativesUCommonGameInstance()
	{
		UClass* Class = UCommonGameInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandlePrivilegeChanged", &UCommonGameInstance::execHandlePrivilegeChanged },
			{ "HandleSystemMessage", &UCommonGameInstance::execHandleSystemMessage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCommonGameInstance_HandlePrivilegeChanged_Statics
	{
		struct CommonGameInstance_eventHandlePrivilegeChanged_Parms
		{
			const UCommonUserInfo* UserInfo;
			ECommonUserPrivilege Privilege;
			ECommonUserAvailability OldAvailability;
			ECommonUserAvailability NewAvailability;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserInfo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UserInfo;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Privilege_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Privilege;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OldAvailability_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OldAvailability;
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewAvailability_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewAvailability;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonGameInstance_HandlePrivilegeChanged_Statics::NewProp_UserInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonGameInstance_HandlePrivilegeChanged_Statics::NewProp_UserInfo = { "UserInfo", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonGameInstance_eventHandlePrivilegeChanged_Parms, UserInfo), Z_Construct_UClass_UCommonUserInfo_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCommonGameInstance_HandlePrivilegeChanged_Statics::NewProp_UserInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonGameInstance_HandlePrivilegeChanged_Statics::NewProp_UserInfo_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCommonGameInstance_HandlePrivilegeChanged_Statics::NewProp_Privilege_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCommonGameInstance_HandlePrivilegeChanged_Statics::NewProp_Privilege = { "Privilege", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonGameInstance_eventHandlePrivilegeChanged_Parms, Privilege), Z_Construct_UEnum_CommonUser_ECommonUserPrivilege, METADATA_PARAMS(nullptr, 0) }; // 3368067200
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCommonGameInstance_HandlePrivilegeChanged_Statics::NewProp_OldAvailability_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCommonGameInstance_HandlePrivilegeChanged_Statics::NewProp_OldAvailability = { "OldAvailability", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonGameInstance_eventHandlePrivilegeChanged_Parms, OldAvailability), Z_Construct_UEnum_CommonUser_ECommonUserAvailability, METADATA_PARAMS(nullptr, 0) }; // 376152662
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCommonGameInstance_HandlePrivilegeChanged_Statics::NewProp_NewAvailability_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCommonGameInstance_HandlePrivilegeChanged_Statics::NewProp_NewAvailability = { "NewAvailability", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonGameInstance_eventHandlePrivilegeChanged_Parms, NewAvailability), Z_Construct_UEnum_CommonUser_ECommonUserAvailability, METADATA_PARAMS(nullptr, 0) }; // 376152662
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonGameInstance_HandlePrivilegeChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonGameInstance_HandlePrivilegeChanged_Statics::NewProp_UserInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonGameInstance_HandlePrivilegeChanged_Statics::NewProp_Privilege_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonGameInstance_HandlePrivilegeChanged_Statics::NewProp_Privilege,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonGameInstance_HandlePrivilegeChanged_Statics::NewProp_OldAvailability_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonGameInstance_HandlePrivilegeChanged_Statics::NewProp_OldAvailability,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonGameInstance_HandlePrivilegeChanged_Statics::NewProp_NewAvailability_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonGameInstance_HandlePrivilegeChanged_Statics::NewProp_NewAvailability,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonGameInstance_HandlePrivilegeChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonGameInstance_HandlePrivilegeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonGameInstance, nullptr, "HandlePrivilegeChanged", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonGameInstance_HandlePrivilegeChanged_Statics::CommonGameInstance_eventHandlePrivilegeChanged_Parms), Z_Construct_UFunction_UCommonGameInstance_HandlePrivilegeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonGameInstance_HandlePrivilegeChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonGameInstance_HandlePrivilegeChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonGameInstance_HandlePrivilegeChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonGameInstance_HandlePrivilegeChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonGameInstance_HandlePrivilegeChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonGameInstance_HandleSystemMessage_Statics
	{
		struct CommonGameInstance_eventHandleSystemMessage_Parms
		{
			FGameplayTag MessageType;
			FText Title;
			FText Message;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_MessageType;
		static const UECodeGen_Private::FTextPropertyParams NewProp_Title;
		static const UECodeGen_Private::FTextPropertyParams NewProp_Message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonGameInstance_HandleSystemMessage_Statics::NewProp_MessageType = { "MessageType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonGameInstance_eventHandleSystemMessage_Parms, MessageType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCommonGameInstance_HandleSystemMessage_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonGameInstance_eventHandleSystemMessage_Parms, Title), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCommonGameInstance_HandleSystemMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonGameInstance_eventHandleSystemMessage_Parms, Message), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonGameInstance_HandleSystemMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonGameInstance_HandleSystemMessage_Statics::NewProp_MessageType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonGameInstance_HandleSystemMessage_Statics::NewProp_Title,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonGameInstance_HandleSystemMessage_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonGameInstance_HandleSystemMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonGameInstance_HandleSystemMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonGameInstance, nullptr, "HandleSystemMessage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonGameInstance_HandleSystemMessage_Statics::CommonGameInstance_eventHandleSystemMessage_Parms), Z_Construct_UFunction_UCommonGameInstance_HandleSystemMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonGameInstance_HandleSystemMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonGameInstance_HandleSystemMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonGameInstance_HandleSystemMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonGameInstance_HandleSystemMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonGameInstance_HandleSystemMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonGameInstance);
	UClass* Z_Construct_UClass_UCommonGameInstance_NoRegister()
	{
		return UCommonGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UCommonGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequestedSession_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RequestedSession;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCommonGameInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCommonGameInstance_HandlePrivilegeChanged, "HandlePrivilegeChanged" }, // 622755709
		{ &Z_Construct_UFunction_UCommonGameInstance_HandleSystemMessage, "HandleSystemMessage" }, // 3897185345
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonGameInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CommonGameInstance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CommonGameInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonGameInstance_Statics::NewProp_RequestedSession_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonGameInstance" },
		{ "ModuleRelativePath", "Public/CommonGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCommonGameInstance_Statics::NewProp_RequestedSession = { "RequestedSession", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonGameInstance, RequestedSession), Z_Construct_UClass_UCommonSession_SearchResult_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonGameInstance_Statics::NewProp_RequestedSession_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonGameInstance_Statics::NewProp_RequestedSession_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonGameInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonGameInstance_Statics::NewProp_RequestedSession,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonGameInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonGameInstance_Statics::ClassParams = {
		&UCommonGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCommonGameInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCommonGameInstance_Statics::PropPointers),
		0,
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCommonGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonGameInstance()
	{
		if (!Z_Registration_Info_UClass_UCommonGameInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonGameInstance.OuterSingleton, Z_Construct_UClass_UCommonGameInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonGameInstance.OuterSingleton;
	}
	template<> COMMONGAME_API UClass* StaticClass<UCommonGameInstance>()
	{
		return UCommonGameInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonGameInstance);
	UCommonGameInstance::~UCommonGameInstance() {}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_CommonGameInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_CommonGameInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCommonGameInstance, UCommonGameInstance::StaticClass, TEXT("UCommonGameInstance"), &Z_Registration_Info_UClass_UCommonGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonGameInstance), 374330807U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_CommonGameInstance_h_1281320930(TEXT("/Script/CommonGame"),
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_CommonGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_CommonGameInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
