#include "PalLocationPoint.h"

bool UPalLocationPoint::IsEnableFastTravel() const {
    return false;
}

void UPalLocationPoint::InvokeFastTravel() {
}

float UPalLocationPoint::GetRotationZ() const {
    return 0.0f;
}

FQuat UPalLocationPoint::GetRotation() const {
    return FQuat{};
}

void UPalLocationPoint::GetLocationAndRotationZ(FVector& OutLocation, float& OutRotationZ) const {
}

FVector UPalLocationPoint::GetLocation() const {
    return FVector{};
}

UPalLocationPoint::UPalLocationPoint() {
}

