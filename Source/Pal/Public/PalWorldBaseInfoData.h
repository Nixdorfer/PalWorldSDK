#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalWorldBaseInfoSaveData.h"
#include "PalWorldBaseInfoData.generated.h"

USTRUCT(BlueprintType)
struct FPalWorldBaseInfoData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalWorldBaseInfoSaveData BaseInfoSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime Timestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DirectoryPath;
    
    PAL_API FPalWorldBaseInfoData();
};

