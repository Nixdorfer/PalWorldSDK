#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/HitResult.h"
#include "Components/SphereComponent.h"
#include "EPalInteractiveObjectIndicatorType.h"
#include "PalInteractiveObjectActionBy.h"
#include "PalInteractiveObjectActionInfoSet.h"
#include "PalInteractiveObjectComponentInterface.h"
#include "PalInteractiveObjectSphereComponent.generated.h"

class AActor;
class IPalInteractiveObjectIndicatorInterface;
class UPalInteractiveObjectIndicatorInterface;
class UObject;
class UPalInteractDelegates;
class UPrimitiveComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalInteractiveObjectSphereComponent : public USphereComponent, public IPalInteractiveObjectComponentInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FOnCreateInteractsDelegates, UPalInteractDelegates*, InteractDelegates);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCreateInteractDelegatesMultiCast, UPalInteractDelegates*, InteractDelegates);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalInteractDelegates* InteractDelegates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnableTriggerInteract;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsImplementedTriggerInteract;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnableInteractingTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnableInteractingTickInClientOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentReference IndicatorOriginRef;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TScriptInterface<IPalInteractiveObjectIndicatorInterface> IndicatorInterface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreateInteractDelegatesMultiCast OnCreateInteractDelegatesDelegate;
    
public:
    UPalInteractiveObjectSphereComponent();
    UFUNCTION(BlueprintCallable)
    void SetIndicatorInterface(TScriptInterface<IPalInteractiveObjectIndicatorInterface> InIndicatorInterface);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable)
    FVector GetIndicatorLocation();
    
protected:
    UFUNCTION(BlueprintCallable)
    void EnableTriggerInteract();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalInteractDelegates* Delegates() const;
    
    UFUNCTION(BlueprintCallable)
    void CallOrRegisterOnCreateInteractDelegates(UPalInteractiveObjectSphereComponent::FOnCreateInteractsDelegates Delegate);
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    UObject* Self() const override PURE_VIRTUAL(Self, return NULL;);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    FText GetIndicatorText(const UObject* WorldContextObject, EPalInteractiveObjectIndicatorType IndicatorType) const override PURE_VIRTUAL(GetIndicatorText, return FText::GetEmpty(););
    
    UFUNCTION(BlueprintCallable)
    void GetIndicatorInfo(FPalInteractiveObjectActionInfoSet& ActionInfo, const FPalInteractiveObjectActionBy& SituationInfo) const override PURE_VIRTUAL(GetIndicatorInfo,);
    
};

