#include "PalNetworkCharacterContainerComponent.h"

void UPalNetworkCharacterContainerComponent::RequestUnlockSlot_ToServer_Implementation(const FGuid& RequestID, const FPalCharacterSlotId& SlotID) {
}

void UPalNetworkCharacterContainerComponent::RequestSwap_ToServer_Rep_Implementation(const FPalCharacterSlotId& SlotIdA, const FPalCharacterSlotId& SlotIdB) {
}

void UPalNetworkCharacterContainerComponent::RequestSortContainer_ToServer_Implementation(const FPalContainerId& ContainerId, const EPalCharacterContainerSortType SortType) {
}

void UPalNetworkCharacterContainerComponent::RequestEmptySlot_ToServer_Rep_Implementation(const FPalCharacterSlotId& SlotID) {
}

void UPalNetworkCharacterContainerComponent::RequestAddToContainer_ToServer_Rep_Implementation(const FPalContainerId& ContainerId, const FPalInstanceID& IndividualId) {
}

void UPalNetworkCharacterContainerComponent::RecieveUnlockSlot_ToRequestClient_Implementation(const FGuid& RequestID, const EPalCharacterContainerOperationResult Result) {
}

void UPalNetworkCharacterContainerComponent::RecieveUnlockSlot_ToClient_Implementation(const FPalCharacterSlotId& SlotID) {
}

UPalNetworkCharacterContainerComponent::UPalNetworkCharacterContainerComponent() {
}

