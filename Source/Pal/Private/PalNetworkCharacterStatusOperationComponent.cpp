#include "PalNetworkCharacterStatusOperationComponent.h"

void UPalNetworkCharacterStatusOperationComponent::RequestReviveCharacterFromDying_ToServer_Implementation(APalCharacter* Character) {
}

void UPalNetworkCharacterStatusOperationComponent::RequestReviveCharacterFromDying(APalCharacter* Character) {
}

void UPalNetworkCharacterStatusOperationComponent::RequestPlayerStatusUp_ToServer_Implementation(const int32 ToRank) {
}

void UPalNetworkCharacterStatusOperationComponent::RequestPlayerStatusClear_ToServer_Implementation() {
}

void UPalNetworkCharacterStatusOperationComponent::RequestPlayerRankClear() {
}

void UPalNetworkCharacterStatusOperationComponent::RequestPlayerRankAdd(const int32 ToRank) {
}

void UPalNetworkCharacterStatusOperationComponent::RequestOtomoStatusPointClearAll_ToServer_Implementation(const FPalInstanceID& IndividualId) {
}

void UPalNetworkCharacterStatusOperationComponent::RequestOtomoStatusPointClearAll(const UPalIndividualCharacterHandle* IndividualHandle) {
}

void UPalNetworkCharacterStatusOperationComponent::RequestOtomoStatusPointClear_ToServer_Implementation(const FPalInstanceID& IndividualId, const EPalCharacterStatusOperationName StatusName) {
}

void UPalNetworkCharacterStatusOperationComponent::RequestOtomoStatusPointClear(const UPalIndividualCharacterHandle* IndividualHandle, const EPalCharacterStatusOperationName StatusName) {
}

void UPalNetworkCharacterStatusOperationComponent::RequestOtomoStatusPointAdd_ToServer_Implementation(const FPalInstanceID& IndividualId, const EPalCharacterStatusOperationName StatusName, const int32 ToRank) {
}

void UPalNetworkCharacterStatusOperationComponent::RequestOtomoStatusPointAdd(const UPalIndividualCharacterHandle* IndividualHandle, const EPalCharacterStatusOperationName StatusName, const int32 ToRank) {
}

void UPalNetworkCharacterStatusOperationComponent::ReceiveOperationResult_ToClient_Implementation(const EPalCharacterStatusOperationResult Result) {
}

UPalNetworkCharacterStatusOperationComponent* UPalNetworkCharacterStatusOperationComponent::NetCharacterStatusOperation(const UObject* WorldContextObject) {
    return NULL;
}

UPalNetworkCharacterStatusOperationComponent::UPalNetworkCharacterStatusOperationComponent() {
}

