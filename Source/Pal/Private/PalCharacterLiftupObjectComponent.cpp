#include "PalCharacterLiftupObjectComponent.h"
#include "Net/UnrealNetwork.h"

void UPalCharacterLiftupObjectComponent::SetEnable(const bool bInEnable) {
}

void UPalCharacterLiftupObjectComponent::OnOverlapEndCageAreaWalls() {
}

void UPalCharacterLiftupObjectComponent::OnHitOwnerMainMesh(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit) {
}

bool UPalCharacterLiftupObjectComponent::IsLifting() const {
    return false;
}

FGuid UPalCharacterLiftupObjectComponent::GetLastLiftRequestedPlayerUId() const {
    return FGuid{};
}

void UPalCharacterLiftupObjectComponent::BroadcastSetBeingThrown_Implementation(const bool bInBeingThrown) {
}

void UPalCharacterLiftupObjectComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalCharacterLiftupObjectComponent, bEnableLiftup);
}

UPalCharacterLiftupObjectComponent::UPalCharacterLiftupObjectComponent() {
    this->bIsLifting = false;
    this->bEnableLiftup = false;
}

