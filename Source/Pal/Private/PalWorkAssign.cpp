#include "PalWorkAssign.h"
#include "Net/UnrealNetwork.h"

bool UPalWorkAssign::IsWorking() const {
    return false;
}

bool UPalWorkAssign::IsWorkable() const {
    return false;
}

bool UPalWorkAssign::IsFixed() const {
    return false;
}

bool UPalWorkAssign::IsAssignedIndividualId(const FPalInstanceID& IndividualId) const {
    return false;
}

bool UPalWorkAssign::IsAssigned() const {
    return false;
}

EPalWorkWorkerWorkingState UPalWorkAssign::GetWorkingState() const {
    return EPalWorkWorkerWorkingState::Wait;
}

FGuid UPalWorkAssign::GetWorkId() const {
    return FGuid{};
}

UPalWorkBase* UPalWorkAssign::GetWork() const {
    return NULL;
}

EPalWorkWorkerState UPalWorkAssign::GetState() const {
    return EPalWorkWorkerState::None;
}

int32 UPalWorkAssign::GetLocationIndex() const {
    return 0;
}

FPalWorkAssignHandleId UPalWorkAssign::GetId() const {
    return FPalWorkAssignHandleId{};
}

UPalIndividualCharacterParameter* UPalWorkAssign::GetAssignedIndividualParameter() const {
    return NULL;
}

FPalInstanceID UPalWorkAssign::GetAssignedIndividualId() const {
    return FPalInstanceID{};
}

UPalIndividualCharacterHandle* UPalWorkAssign::GetAssignedIndividualHandle() const {
    return NULL;
}

void UPalWorkAssign::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalWorkAssign, HandleId);
    DOREPLIFETIME(UPalWorkAssign, AssignedIndividualId);
    DOREPLIFETIME(UPalWorkAssign, State);
    DOREPLIFETIME(UPalWorkAssign, bFixed);
    DOREPLIFETIME(UPalWorkAssign, WorkingState);
}

UPalWorkAssign::UPalWorkAssign() {
    this->State = EPalWorkWorkerState::None;
    this->bFixed = false;
    this->WorkingState = EPalWorkWorkerWorkingState::Wait;
}

