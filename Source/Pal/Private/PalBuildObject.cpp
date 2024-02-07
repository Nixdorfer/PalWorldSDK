#include "PalBuildObject.h"
#include "Net/UnrealNetwork.h"
#include "PalBuildObjectVisualControlComponent.h"

void APalBuildObject::PlayBuildCompleteFX_ToALL_Implementation() {
}

void APalBuildObject::OnUpdateHp(UPalMapObjectModel* DamagedModel) {
}

void APalBuildObject::OnUpdateBuildWorkAmount(UPalWorkProgress* WorkProgress) {
}

void APalBuildObject::OnTriggerInteractBuilding(AActor* OtherActor, EPalInteractiveObjectIndicatorType IndicatorType) {
}

void APalBuildObject::OnTickRepairCompleteAnimation() {
}

void APalBuildObject::OnTickBuildCompleteAnimation() {
}

void APalBuildObject::OnStartTriggerInteractBuilding(AActor* OtherActor, EPalInteractiveObjectIndicatorType IndicatorType) {
}

void APalBuildObject::OnRep_CurrentState() {
}

void APalBuildObject::OnRep_BuildProgressVisualRate() {
}


void APalBuildObject::OnFinishBuildWork_ServerInternal(UPalBuildProcess* BuildProcess) {
}

void APalBuildObject::OnEndTriggerInteractBuilding(AActor* OtherActor, EPalInteractiveObjectIndicatorType IndicatorType) {
}

void APalBuildObject::OnDamage(UPalMapObjectModel* DamagedModel, const FPalDamageInfo& DamageInfo) {
}

void APalBuildObject::OnBeginInteractBuilding(AActor* OtherActor, TScriptInterface<IPalInteractiveObjectComponentInterface> InteractiveObject) {
}


bool APalBuildObject::IsAvailable() const {
    return false;
}


void APalBuildObject::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APalBuildObject, BuildObjectId);
    DOREPLIFETIME(APalBuildObject, CurrentState);
    DOREPLIFETIME(APalBuildObject, BuildProgressVisualRate);
}

APalBuildObject::APalBuildObject() {
    this->InstallStrategy = EPalBuildObjectInstallStrategy::Normal;
    this->InstallCapacitySlopeAngle = -1.00f;
    this->InstallCapacitySinkRateByHeight = -1.00f;
    this->VisualCtrl = CreateDefaultSubobject<UPalBuildObjectVisualControlComponent>(TEXT("VisualController"));
    this->OverlapCheckCollision = NULL;
    this->OverlapChecker = NULL;
    this->CurrentState = EPalBuildObjectState::Init;
    this->WorldHUDDisplayRange = 0.00f;
    this->buildProgressHUDDisplayRange = 0.00f;
    this->BuildCompleteSEOverride = NULL;
    this->BuildProgressVisualRate = 0.00f;
    this->bDismantleTargetInLocal = false;
}

