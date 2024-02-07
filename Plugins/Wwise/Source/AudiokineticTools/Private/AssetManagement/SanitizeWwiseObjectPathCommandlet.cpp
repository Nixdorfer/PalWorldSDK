/*******************************************************************************
The content of this file includes portions of the proprietary AUDIOKINETIC Wwise
Technology released in source code form as part of the game integration package.
The content of this file may not be used without valid licenses to the
AUDIOKINETIC Wwise Technology.
Note that the use of the game engine is subject to the Unreal(R) Engine End User
License Agreement at https://www.unrealengine.com/en-US/eula/unreal
 
License Usage
 
Licensees holding valid licenses to the AUDIOKINETIC Wwise Technology may use
this file in accordance with the end user license agreement provided with the
software or, alternatively, in accordance with the terms contained
in a written agreement between you and Audiokinetic Inc.
Copyright (c) 2022 Audiokinetic Inc.
*******************************************************************************/

#include "AssetManagement/SanitizeWwiseObjectPathCommandlet.h"

#if WITH_EDITOR
#include "AssetRegistry/AssetRegistryModule.h"
#include "AssetTools/Public/AssetToolsModule.h"
#include "AkMediaAsset.h"
#include "AkAudioType.h"
#include "AkAssetBase.h"
#include "AkUnrealHelper.h"
#include "UnrealEd/Public/ObjectTools.h"

#define LOCTEXT_NAMESPACE "AkAudio"
#endif

USanitizeWwiseObjectPathCommandlet::USanitizeWwiseObjectPathCommandlet()
{
	IsClient = false;
	IsEditor = true;
	IsServer = false;
	LogToConsole = true;
}

int32 USanitizeWwiseObjectPathCommandlet::Main(const FString& Params)
{
	int32 ReturnCode = 0;
#if WITH_EDITOR
	FSlateApplication::Create();

	FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");
	FAssetToolsModule& AssetToolsModule = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools");

	AssetRegistryModule.Get().ScanPathsSynchronous({ AkUnrealHelper::GetBaseAssetPackagePath() });
	TArray<FAssetRenameData> assetsToRename;

	TArray<FAssetData> allAssets;
	AssetRegistryModule.Get().GetAssetsByClass(UAkMediaAsset::StaticClass()->GetFName(), allAssets, true);
	AssetRegistryModule.Get().GetAssetsByClass(UAkAssetPlatformData::StaticClass()->GetFName(), allAssets, true);
	AssetRegistryModule.Get().GetAssetsByClass(UAkAudioType::StaticClass()->GetFName(), allAssets, true);

	for (auto& assetData : allAssets)
	{
		auto oldPackagePath = assetData.ObjectPath.ToString();
		auto sanitizedPackagePath = ObjectTools::SanitizeObjectPath(oldPackagePath);

		if (oldPackagePath != sanitizedPackagePath)
		{
			assetData.GetAsset();
			assetsToRename.Emplace(FSoftObjectPath(oldPackagePath), FSoftObjectPath(sanitizedPackagePath));
		}
	}

	if (assetsToRename.Num() > 0)
	{
		if (!AssetToolsModule.Get().RenameAssets(assetsToRename))
		{
			ReturnCode = 1;
		}
	}
#endif

	return ReturnCode;
}

#undef LOCTEXT_NAMESPACE
