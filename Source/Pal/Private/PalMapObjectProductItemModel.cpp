#include "PalMapObjectProductItemModel.h"
#include "Net/UnrealNetwork.h"

void UPalMapObjectProductItemModel::OnUpdateContainerContent(UPalItemContainer* Container) {
}

void UPalMapObjectProductItemModel::OnFinishWorkInServer(UPalWorkBase* Work) {
}

FName UPalMapObjectProductItemModel::GetProductItemId() const {
    return NAME_None;
}

UPalItemContainer* UPalMapObjectProductItemModel::GetItemContainer() const {
    return NULL;
}

float UPalMapObjectProductItemModel::CalcRequiredAmount(const float BaseRequiredAmount) const {
    return 0.0f;
}

void UPalMapObjectProductItemModel::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectProductItemModel, bIsWorkable);
    DOREPLIFETIME(UPalMapObjectProductItemModel, ProductItemId);
}

UPalMapObjectProductItemModel::UPalMapObjectProductItemModel() {
    this->bIsWorkable = false;
    this->WorkSpeedAdditionalRate = 1.00f;
}

