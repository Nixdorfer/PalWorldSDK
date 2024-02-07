#pragma once
#include "CoreMinimal.h"
#include "EPalTribeID.h"
#include "PalBinaryMemory.h"
#include "PalInstanceID.h"
#include "PalCharacterSlotSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPalCharacterSlotSaveData : public FPalBinaryMemory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalInstanceID IndividualId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalTribeID PermissionTribeID;
    
    PAL_API FPalCharacterSlotSaveData();
};

