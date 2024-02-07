#include "PalStatusComponent.h"
#include "Net/UnrealNetwork.h"

void UPalStatusComponent::SomeStatus_ToAll_Implementation(EPalStatusID StatusId, FStatusDynamicParameter Param) {
}

void UPalStatusComponent::RemoveStatus_ToServer_Implementation(EPalStatusID StatusId, int32 issuerID) {
}

void UPalStatusComponent::RemoveStatus(EPalStatusID StatusId) {
}

void UPalStatusComponent::OnRep_ExecutionStatusList() {
}

UPalStatusBase* UPalStatusComponent::GetExecutionStatusCache(EPalStatusID StatusId) {
    return NULL;
}

UPalStatusBase* UPalStatusComponent::GetExecutionStatus(EPalStatusID StatusId) {
    return NULL;
}

void UPalStatusComponent::BeginPlay() {
}

void UPalStatusComponent::AddStatusParameter(EPalStatusID StatusId, FStatusDynamicParameter Param) {
}

void UPalStatusComponent::AddStatus_ToServer_Implementation(EPalStatusID StatusId, FStatusDynamicParameter Param, int32 issuerID) {
}

void UPalStatusComponent::AddStatus(EPalStatusID StatusId) {
}

void UPalStatusComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalStatusComponent, ExecutionStatusList);
}

UPalStatusComponent::UPalStatusComponent() {
}

