#include "PalMapObjectDefenseModelBase.h"

bool UPalMapObjectDefenseModelBase::TryGetLauncherControlMapObject(APalMapObject*& OutMapObject) const {
    return false;
}

FVector UPalMapObjectDefenseModelBase::GetLocation() const {
    return FVector{};
}

EPalMapObjectDefenseType UPalMapObjectDefenseModelBase::GetDefenseType() const {
    return EPalMapObjectDefenseType::Wait;
}

UPalMapObjectDefenseModelBase::UPalMapObjectDefenseModelBase() {
}

