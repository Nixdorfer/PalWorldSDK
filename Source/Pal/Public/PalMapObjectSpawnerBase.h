#pragma once
#include "CoreMinimal.h"
#include "PalLevelObjectActor.h"
#include "PalStageInstanceId.h"
#include "PalMapObjectSpawnerBase.generated.h"

class USphereComponent;

UCLASS(Abstract, Blueprintable)
class PAL_API APalMapObjectSpawnerBase : public APalLevelObjectActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProbabilityRespawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LotteryCoolTimeMinutes;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalStageInstanceId StageInstanceIdBelongTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* LocateSphere;
    
public:
    APalMapObjectSpawnerBase();
private:
    UFUNCTION(BlueprintCallable)
    void OnWorldMapObjectSpawnableInServer();
    
};

