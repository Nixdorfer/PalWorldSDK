#include "PalUIPalStorageModel.h"

void UPalUIPalStorageModel::ToPrevPage() {
}

void UPalUIPalStorageModel::ToPage(const int32 PageIndex, const bool bForce) {
}

void UPalUIPalStorageModel::ToNextPage() {
}

void UPalUIPalStorageModel::SelectHandleSlot(const int32 DisplayIndex, const EPalItemSlotPressType PressType) {
}

void UPalUIPalStorageModel::OnOperatedByOuter() {
}

int32 UPalUIPalStorageModel::GetWholePageCount() const {
    return 0;
}

FPalContainerId UPalUIPalStorageModel::GetTargetContainerId() const {
    return FPalContainerId{};
}

bool UPalUIPalStorageModel::CanMoveToPrev() const {
    return false;
}

bool UPalUIPalStorageModel::CanMoveToNext() const {
    return false;
}

UPalUIPalStorageModel::UPalUIPalStorageModel() {
    this->CurrentPageIndex = -1;
    this->DisplayModel = NULL;
}

