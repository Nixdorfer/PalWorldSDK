#include "PalGliderObject.h"
#include "PalSoundPlayerComponent.h"

UPalSkeletalMeshComponent* APalGliderObject::GetMainMesh_Implementation() const {
    return NULL;
}

USceneComponent* APalGliderObject::GetAkOwnerComponent() {
    return NULL;
}

APalGliderObject::APalGliderObject() {
    this->GliderMaxSpeed = 0.00f;
    this->GliderSP = 10.00f;
    this->GliderAirControl = 0.00f;
    this->GliderGravityScale = 0.00f;
    this->bUseLeftHand = false;
    this->bUseRightHand = false;
    this->GliderStartAnimation = NULL;
    this->GliderLoopAnimation = NULL;
    this->GliderStartPlayerAnimation = NULL;
    this->GliderLoopPlayerAnimation = NULL;
    this->SoundPlayerComponent = CreateDefaultSubobject<UPalSoundPlayerComponent>(TEXT("SoundPlayerComponent"));
}

