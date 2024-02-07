#pragma once
#include "CoreMinimal.h"
#include "EPalInteractiveObjectButtonType.h"
#include "EPalInteractiveObjectIndicatorType.h"
#include "PalInteractiveObjectActionInfoData.generated.h"

USTRUCT(BlueprintType)
struct FPalInteractiveObjectActionInfoData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalInteractiveObjectIndicatorType IndicatorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalInteractiveObjectButtonType buttonType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float longPushTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLockRiding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isInputComsume;
    
    PAL_API FPalInteractiveObjectActionInfoData();
};

