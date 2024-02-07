#include "PalMapObjectCharacterContainerModule.h"
#include "Net/UnrealNetwork.h"

bool UPalMapObjectCharacterContainerModule::TryGetContainer(UPalIndividualCharacterContainer*& OutContainer) const {
    return false;
}

void UPalMapObjectCharacterContainerModule::OnRep_TargetContainer() {
}

bool UPalMapObjectCharacterContainerModule::IsCompleteSetup() const {
    return false;
}

FPalContainerId UPalMapObjectCharacterContainerModule::GetContainerId() const {
    return FPalContainerId{};
}

UPalIndividualCharacterContainer* UPalMapObjectCharacterContainerModule::GetContainer() const {
    return NULL;
}

void UPalMapObjectCharacterContainerModule::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectCharacterContainerModule, TargetContainer);
}

UPalMapObjectCharacterContainerModule::UPalMapObjectCharacterContainerModule() {
    this->TargetContainer = NULL;
}

