#include "PalPlayerMenuUIManager.h"

void UPalPlayerMenuUIManager::ToggleInventoryWindow() {
}

void UPalPlayerMenuUIManager::Test_SetPlayerContainerID(const FPalContainerId& ContainerId) {
}

FPalContainerId UPalPlayerMenuUIManager::Test_GetPlayerContainerID() const {
    return FPalContainerId{};
}

void UPalPlayerMenuUIManager::SelectItem(FPalItemSlotId SelectSlot) {
}

UPalPlayerMenuUIManager::UPalPlayerMenuUIManager() {
    this->PlayerMenuUI = NULL;
}

