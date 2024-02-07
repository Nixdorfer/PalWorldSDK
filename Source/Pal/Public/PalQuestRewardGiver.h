#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalQuestRewardGiver.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalQuestRewardGiver : public UObject {
    GENERATED_BODY()
public:
    UPalQuestRewardGiver();
    UFUNCTION(BlueprintCallable)
    void TakeReward();
    
};

