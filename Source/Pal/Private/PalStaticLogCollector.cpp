#include "PalStaticLogCollector.h"


void UPalStaticLogCollector::OnReadyPlayerInventoryData(UPalPlayerDataStorage* PlayerDataStorage) {
}

void UPalStaticLogCollector::OnOverWeightInventory(float nowWeight) {
}

void UPalStaticLogCollector::OnFixedWeightInventory(float nowWeight) {
}

void UPalStaticLogCollector::OnEndedWorldAutoSave(bool IsSuccess) {
}

UPalStaticLogCollector::UPalStaticLogCollector() {
    this->targetLogManager = NULL;
}

