#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EPalFoodStatusEffectType.h"
#include "PalStatusEffectFoodDataRow.generated.h"

USTRUCT(BlueprintType)
struct FPalStatusEffectFoodDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 effectTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalFoodStatusEffectType EffectType1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EffectValue1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalFoodStatusEffectType EffectType2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EffectValue2;
    
    PAL_API FPalStatusEffectFoodDataRow();
};

