#pragma once
#include "CoreMinimal.h"
#include "PalBuildObjectInstallStrategyBase.h"
#include "PalBuildObjectInstallStrategyFoundation.generated.h"

class AActor;
class APalBuildObject;

UCLASS(Blueprintable)
class PAL_API UPalBuildObjectInstallStrategyFoundation : public UPalBuildObjectInstallStrategyBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* HitActorCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APalBuildObject* HitBuildObjectCache;
    
public:
    UPalBuildObjectInstallStrategyFoundation();
};

