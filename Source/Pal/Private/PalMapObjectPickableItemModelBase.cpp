#include "PalMapObjectPickableItemModelBase.h"
#include "Net/UnrealNetwork.h"

void UPalMapObjectPickableItemModelBase::RequestPickup_ServerInternal(const int32 RequestPlayerId) {
}

void UPalMapObjectPickableItemModelBase::RequestPickup() {
}

void UPalMapObjectPickableItemModelBase::OnTimer_RemovePickupGuard() {
}

TArray<FPalItemAndNum> UPalMapObjectPickableItemModelBase::CreatePickupItemInfo() const {
    return TArray<FPalItemAndNum>();
}

void UPalMapObjectPickableItemModelBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectPickableItemModelBase, bAutoPickedUp);
}

UPalMapObjectPickableItemModelBase::UPalMapObjectPickableItemModelBase() {
    this->bAutoPickedUp = false;
}

