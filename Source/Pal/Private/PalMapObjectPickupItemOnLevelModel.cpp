#include "PalMapObjectPickupItemOnLevelModel.h"
#include "Net/UnrealNetwork.h"

void UPalMapObjectPickupItemOnLevelModel::OnUpdateItemContainerContents(UPalItemContainer* Container) {
}

FName UPalMapObjectPickupItemOnLevelModel::GetVisualStaticItemId() const {
    return NAME_None;
}

void UPalMapObjectPickupItemOnLevelModel::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectPickupItemOnLevelModel, VisualStaticItemId);
}

UPalMapObjectPickupItemOnLevelModel::UPalMapObjectPickupItemOnLevelModel() {
}

