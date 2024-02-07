#include "PalVisualEffectBase.h"

void UPalVisualEffectBase::TickVisualEffect_Implementation(float DeltaTime) {
}

void UPalVisualEffectBase::TerminatingTickVisualEffect_Implementation(float DeltaTime) {
}

void UPalVisualEffectBase::OnEndVisualEffect_Implementation() {
}

void UPalVisualEffectBase::OnDeleteInstance_Implementation() {
}

void UPalVisualEffectBase::OnBreakVisualEffect_Implementation(bool bByConflict) {
}

void UPalVisualEffectBase::OnBeginVisualEffect_Implementation() {
}

bool UPalVisualEffectBase::IsEndVisualEffect_Implementation() {
    return false;
}

AActor* UPalVisualEffectBase::GetOwner() const {
    return NULL;
}

TArray<UMaterialInstanceDynamic*> UPalVisualEffectBase::GetMainMeshMaterials() const {
    return TArray<UMaterialInstanceDynamic*>();
}

USkeletalMeshComponent* UPalVisualEffectBase::GetMainMesh() const {
    return NULL;
}

float UPalVisualEffectBase::GetFloatParameter(FName Name, float DefaultValue) {
    return 0.0f;
}

TArray<EPalVisualEffectID> UPalVisualEffectBase::GetConflictIDList() const {
    return TArray<EPalVisualEffectID>();
}

APalCharacter* UPalVisualEffectBase::GetCharacter() const {
    return NULL;
}

void UPalVisualEffectBase::GetAllMesh(TArray<USceneComponent*>& OutComponent) const {
}

bool UPalVisualEffectBase::CanDeleteInstance_Implementation() {
    return false;
}

UPalVisualEffectBase::UPalVisualEffectBase() {
    this->bIsEndVisualEffect = false;
    this->bCanDeleteInstance = true;
    this->VisualEffectID = EPalVisualEffectID::None;
}

