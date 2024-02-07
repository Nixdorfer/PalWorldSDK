#pragma once
#include "CoreMinimal.h"
#include "PalBuildObjectInstallStrategyBase.h"
#include "PalBuildObjectInstallStrategyGroundWall.generated.h"

class AActor;
class APalBuildObject;

UCLASS(Blueprintable)
class UPalBuildObjectInstallStrategyGroundWall : public UPalBuildObjectInstallStrategyBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* HitActorCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APalBuildObject* HitBuildObjectCache;
    
public:
    UPalBuildObjectInstallStrategyGroundWall();
};

