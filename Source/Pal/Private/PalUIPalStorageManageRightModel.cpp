#include "PalUIPalStorageManageRightModel.h"
#include "PalUIBaseCampWorkerListModel.h"
#include "PalUIOtomoListModel.h"

void UPalUIPalStorageManageRightModel::ToPrevPage() {
}

void UPalUIPalStorageManageRightModel::ToNextPage() {
}

bool UPalUIPalStorageManageRightModel::CanMoveToPrev() const {
    return false;
}

bool UPalUIPalStorageManageRightModel::CanMoveToNext() const {
    return false;
}

UPalUIPalStorageManageRightModel::UPalUIPalStorageManageRightModel() {
    this->CurrentPageType = EPalPalStorageManageRightType::BaseCamp;
    this->BaseCampWorkerListClass = UPalUIBaseCampWorkerListModel::StaticClass();
    this->BaseCampWorkerList = NULL;
    this->OtomoListClass = UPalUIOtomoListModel::StaticClass();
    this->OtomoList = NULL;
}

