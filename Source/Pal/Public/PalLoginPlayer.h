#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "PalLoginPlayer.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FNotifyCharacterDelegate);

UCLASS(Blueprintable)
class UPalLoginPlayer : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNotifyCharacterDelegate OnNotifyObtainNewInServerDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNotifyCharacterDelegate OnNotifyRemovedFromPalBoxInServerDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid PlayerUId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector RegisteredRespawnLocation;
    
public:
    UPalLoginPlayer();
};

