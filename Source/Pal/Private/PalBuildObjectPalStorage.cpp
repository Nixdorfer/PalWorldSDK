#include "PalBuildObjectPalStorage.h"


void APalBuildObjectPalStorage::OnSpawnCharacter(FPalInstanceID IndividualId, int32 PhantomId) {
}




USceneComponent* APalBuildObjectPalStorage::GetChestObject() {
    return NULL;
}

UBoxComponent* APalBuildObjectPalStorage::GetChestMovableRange() {
    return NULL;
}


UStaticMeshComponent* APalBuildObjectPalStorage::GetAccessPointObject() {
    return NULL;
}

UBoxComponent* APalBuildObjectPalStorage::GetAccessPointMovableRange() {
    return NULL;
}

APalBuildObjectPalStorage::APalBuildObjectPalStorage() {
    this->BaseCampAreaRange = 5000.00f;
    this->ChestSlotNum = 100;
}

