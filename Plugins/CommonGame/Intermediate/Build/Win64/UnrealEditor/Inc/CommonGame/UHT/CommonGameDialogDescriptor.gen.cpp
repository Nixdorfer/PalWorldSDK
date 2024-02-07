// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonGame/Public/CommonGameDialogDescriptor.h"
#include "CommonGame/Public/ConfirmationDialogAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonGameDialogDescriptor() {}
// Cross Module References
	COMMONGAME_API UClass* Z_Construct_UClass_UCommonGameDialogDescriptor();
	COMMONGAME_API UClass* Z_Construct_UClass_UCommonGameDialogDescriptor_NoRegister();
	COMMONGAME_API UScriptStruct* Z_Construct_UScriptStruct_FConfirmationDialogAction();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_CommonGame();
// End Cross Module References
	void UCommonGameDialogDescriptor::StaticRegisterNativesUCommonGameDialogDescriptor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonGameDialogDescriptor);
	UClass* Z_Construct_UClass_UCommonGameDialogDescriptor_NoRegister()
	{
		return UCommonGameDialogDescriptor::StaticClass();
	}
	struct Z_Construct_UClass_UCommonGameDialogDescriptor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Header_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Header;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Body_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Body;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ButtonActions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ButtonActions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ButtonActions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonGameDialogDescriptor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonGameDialogDescriptor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CommonGameDialogDescriptor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CommonGameDialogDescriptor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonGameDialogDescriptor_Statics::NewProp_Header_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonGameDialogDescriptor" },
		{ "ModuleRelativePath", "Public/CommonGameDialogDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UCommonGameDialogDescriptor_Statics::NewProp_Header = { "Header", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonGameDialogDescriptor, Header), METADATA_PARAMS(Z_Construct_UClass_UCommonGameDialogDescriptor_Statics::NewProp_Header_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonGameDialogDescriptor_Statics::NewProp_Header_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonGameDialogDescriptor_Statics::NewProp_Body_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonGameDialogDescriptor" },
		{ "ModuleRelativePath", "Public/CommonGameDialogDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UCommonGameDialogDescriptor_Statics::NewProp_Body = { "Body", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonGameDialogDescriptor, Body), METADATA_PARAMS(Z_Construct_UClass_UCommonGameDialogDescriptor_Statics::NewProp_Body_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonGameDialogDescriptor_Statics::NewProp_Body_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonGameDialogDescriptor_Statics::NewProp_ButtonActions_Inner = { "ButtonActions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FConfirmationDialogAction, METADATA_PARAMS(nullptr, 0) }; // 3648334222
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonGameDialogDescriptor_Statics::NewProp_ButtonActions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonGameDialogDescriptor" },
		{ "ModuleRelativePath", "Public/CommonGameDialogDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCommonGameDialogDescriptor_Statics::NewProp_ButtonActions = { "ButtonActions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonGameDialogDescriptor, ButtonActions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCommonGameDialogDescriptor_Statics::NewProp_ButtonActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonGameDialogDescriptor_Statics::NewProp_ButtonActions_MetaData)) }; // 3648334222
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonGameDialogDescriptor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonGameDialogDescriptor_Statics::NewProp_Header,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonGameDialogDescriptor_Statics::NewProp_Body,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonGameDialogDescriptor_Statics::NewProp_ButtonActions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonGameDialogDescriptor_Statics::NewProp_ButtonActions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonGameDialogDescriptor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonGameDialogDescriptor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonGameDialogDescriptor_Statics::ClassParams = {
		&UCommonGameDialogDescriptor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCommonGameDialogDescriptor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCommonGameDialogDescriptor_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCommonGameDialogDescriptor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonGameDialogDescriptor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonGameDialogDescriptor()
	{
		if (!Z_Registration_Info_UClass_UCommonGameDialogDescriptor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonGameDialogDescriptor.OuterSingleton, Z_Construct_UClass_UCommonGameDialogDescriptor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonGameDialogDescriptor.OuterSingleton;
	}
	template<> COMMONGAME_API UClass* StaticClass<UCommonGameDialogDescriptor>()
	{
		return UCommonGameDialogDescriptor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonGameDialogDescriptor);
	UCommonGameDialogDescriptor::~UCommonGameDialogDescriptor() {}
	struct Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_CommonGameDialogDescriptor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_CommonGameDialogDescriptor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCommonGameDialogDescriptor, UCommonGameDialogDescriptor::StaticClass, TEXT("UCommonGameDialogDescriptor"), &Z_Registration_Info_UClass_UCommonGameDialogDescriptor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonGameDialogDescriptor), 964220787U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_CommonGameDialogDescriptor_h_2958011076(TEXT("/Script/CommonGame"),
		Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_CommonGameDialogDescriptor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PalWorldSDK_Plugins_CommonGame_Source_CommonGame_Public_CommonGameDialogDescriptor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
