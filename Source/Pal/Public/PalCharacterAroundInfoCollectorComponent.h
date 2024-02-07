#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/HitResult.h"
#include "Components/SphereComponent.h"
#include "PalCharacterAroundInfoCollectorComponent.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalCharacterAroundInfoCollectorComponent : public USphereComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOverlapDelegate, AActor*, OtherActor);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOverlapDelegate OnOverlapBeginDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOverlapDelegate OnOverlapEndDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGuid> MapObjectModelIds;
    
public:
    UPalCharacterAroundInfoCollectorComponent();
private:
    UFUNCTION(BlueprintCallable)
    void OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

