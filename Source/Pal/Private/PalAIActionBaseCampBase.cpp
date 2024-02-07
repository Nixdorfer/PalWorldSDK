#include "PalAIActionBaseCampBase.h"
#include "Templates/SubclassOf.h"

void UPalAIActionBaseCampBase::StartCombatAction(TSubclassOf<UPalAIActionCombatBase> CombatActionClass) {
}

void UPalAIActionBaseCampBase::OnUpdateFullStomach(const float Current, const float Last) {
}

void UPalAIActionBaseCampBase::OnTriggerInteract(AActor* OtherActor, EPalInteractiveObjectIndicatorType IndicatorType) {
}

void UPalAIActionBaseCampBase::OnClosedWorkerRadialMenu(UPalHUDDispatchParameterBase* Parameter) {
}


void UPalAIActionBaseCampBase::InterruptActionToRecoverHungry(const FPalMonsterControllerBaseCampHungryParameter Parameter) {
}

FGuid UPalAIActionBaseCampBase::GetBaseCampIdBelongTo() const {
    return FGuid{};
}

UPalBaseCampModel* UPalAIActionBaseCampBase::GetBaseCampBelongTo() const {
    return NULL;
}

void UPalAIActionBaseCampBase::FinishCombatAction() {
}

void UPalAIActionBaseCampBase::ChangeChildAction(UPalAIActionBaseCampChildBase* action) {
}

void UPalAIActionBaseCampBase::ChangeActionToWorker() {
}

void UPalAIActionBaseCampBase::ChangeActionToFighter() {
}

UPalAIActionBaseCampBase::UPalAIActionBaseCampBase() {
    this->WalkSpeedDefault = 0.00f;
}

