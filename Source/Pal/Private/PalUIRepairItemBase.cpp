#include "PalUIRepairItemBase.h"

void UPalUIRepairItemBase::RequestRepair(const TArray<UPalItemSlot*>& TargetItemSlotArray) {
}


void UPalUIRepairItemBase::CollectRepairInfo(const TArray<UPalItemSlot*>& TargetItemSlotArray, TArray<FPalStaticItemIdAndNum>& OutRequiredMaterials, bool& OutCanRepair) {
}

void UPalUIRepairItemBase::CollectRepairableSlot(TArray<UPalItemSlot*>& OutRepairableSlots) {
}

UPalUIRepairItemBase::UPalUIRepairItemBase() {
    this->RepairItemModel = NULL;
}

