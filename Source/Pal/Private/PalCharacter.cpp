#include "PalCharacter.h"
#include "Net/UnrealNetwork.h"
#include "PalActionComponent.h"
#include "PalAnimNotifyParameterComponent.h"
#include "PalCharacterAroundInfoCollectorComponent.h"
#include "PalCharacterCameraComponent.h"
#include "PalCharacterParameterComponent.h"
#include "PalDamageReactionComponent.h"
#include "PalFootIKComponent.h"
#include "PalHeadUpDisplayComponent.h"
#include "PalLookAtComponent.h"
#include "PalNetworkMulticastGateComponent.h"
#include "PalPassiveSkillComponent.h"
#include "PalShooterSpringArmComponent.h"
#include "PalStaticCharacterParameterComponent.h"
#include "PalStatusComponent.h"
#include "PalVisualEffectComponent.h"

void APalCharacter::UpdateGroundRayCast() {
}

void APalCharacter::SetVisibleHandAttachMesh(bool Active) {
}

void APalCharacter::SetVisibleCharacterMesh(bool Active) {
}

void APalCharacter::SetDisableChangeIntervalByImportance(FName flagName, bool isDisable) {
}

void APalCharacter::SetActiveCollisionMovement(bool Active) {
}

void APalCharacter::SetActiveActorStayVisible_Implementation(bool Active) {
}

void APalCharacter::SetActiveActor_Implementation(bool Active) {
}

void APalCharacter::RPCDummy_Implementation() {
}

void APalCharacter::ReviveCharacter_ToServer_Implementation(FFixedPoint HP) {
}

void APalCharacter::ReviveCharacter(FFixedPoint HP) {
}

void APalCharacter::ResetTickInterval() {
}

void APalCharacter::RequestJump() {
}

void APalCharacter::Play2Montage(UAnimMontage* firstMontage, UAnimMontage* nextMontage) {
}

void APalCharacter::OnTeleport_ToClient_Implementation(const FVector& Location, const FQuat& Rotation) {
}

void APalCharacter::OnRep_RootCollisionProfileName() {
}

void APalCharacter::OnRep_IsPalActiveActor(bool PrevIsActiveActor) {
}

void APalCharacter::OnOverlapEndByAroundInfo(AActor* OtherActor) {
}

void APalCharacter::OnOverlapBeginByAroundInfo(AActor* OtherActor) {
}

void APalCharacter::OnChangeWetnessStatus(bool IsSwim) {
}

bool APalCharacter::IsInitialized() const {
    return false;
}

bool APalCharacter::IsCooping() const {
    return false;
}


bool APalCharacter::GetTalkMode() const {
    return false;
}

UPalCharacterMovementComponent* APalCharacter::GetPalCharacterMovementComponent() const {
    return NULL;
}

TSoftObjectPtr<UNiagaraSystem> APalCharacter::GetOverrideSleepFX() const {
    return NULL;
}


UPalCharacterOnCompleteInitializeParameterWrapper* APalCharacter::GetOnCompleteInitializeParameterDelegate(EPalCharacterCompleteDelegatePriority Priority) {
    return NULL;
}

UPalSkeletalMeshComponent* APalCharacter::GetMainMesh() const {
    return NULL;
}


UPalCharacterParameterComponent* APalCharacter::GetCharacterParameterComponent() const {
    return NULL;
}

bool APalCharacter::GetBattleMode() const {
    return false;
}

bool APalCharacter::GetActiveActorFlag() const {
    return false;
}

UPalActionComponent* APalCharacter::GetActionComponent() const {
    return NULL;
}

void APalCharacter::ChangeWantFood_ToAll_Implementation(bool IsWantFood, bool IsExistFood) {
}

void APalCharacter::ChangeTalkModeFlag_ToAll_Implementation(bool IsTalk) {
}

void APalCharacter::ChangeBattleModeFlag_ToAll_Implementation(bool IsBattle) {
}

void APalCharacter::ChangeBattleModeFlag(bool IsBattle) {
}

void APalCharacter::BroadcastOnCompleteInitializeParameter() {
}

void APalCharacter::BindFonctionToOnCompleteInitializeParameter(EPalCharacterCompleteDelegatePriority Priority, FPalOnCharacterCompleteInitializeParameter Callback) {
}

void APalCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APalCharacter, bIsPalActiveActor);
    DOREPLIFETIME(APalCharacter, RootCollisionProfileName);
}

APalCharacter::APalCharacter() {
    this->UpdateGroundInterval = 1.00f;
    this->ActionComponent = CreateDefaultSubobject<UPalActionComponent>(TEXT("ActionComponent"));
    this->CharacterParameterComponent = CreateDefaultSubobject<UPalCharacterParameterComponent>(TEXT("CharacterParameterComponent"));
    this->StaticCharacterParameterComponent = CreateDefaultSubobject<UPalStaticCharacterParameterComponent>(TEXT("StaticCharacterParameterComponent"));
    this->DamageReactionComponent = CreateDefaultSubobject<UPalDamageReactionComponent>(TEXT("DamageReactionComponent"));
    this->StatusComponent = CreateDefaultSubobject<UPalStatusComponent>(TEXT("StatusComponent"));
    this->CameraBoom = CreateDefaultSubobject<UPalShooterSpringArmComponent>(TEXT("CameraBoom"));
    this->FollowCamera = CreateDefaultSubobject<UPalCharacterCameraComponent>(TEXT("FollowCamera"));
    this->MulticastGateComponent = CreateDefaultSubobject<UPalNetworkMulticastGateComponent>(TEXT("NetworkMulticastGateComponent"));
    this->LookAtComponent = CreateDefaultSubobject<UPalLookAtComponent>(TEXT("LookAtComponent"));
    this->NavInvokerComponent = NULL;
    this->FootIKComponent = CreateDefaultSubobject<UPalFootIKComponent>(TEXT("FootIKComponent"));
    this->VisualEffectComponent = CreateDefaultSubobject<UPalVisualEffectComponent>(TEXT("VisualEffectComponent"));
    this->PassiveSkillComponent = CreateDefaultSubobject<UPalPassiveSkillComponent>(TEXT("PassiveSkillComponent"));
    this->HUDComponent = CreateDefaultSubobject<UPalHeadUpDisplayComponent>(TEXT("HUDComponent"));
    this->AnimNotifyComponent = CreateDefaultSubobject<UPalAnimNotifyParameterComponent>(TEXT("AnimNotifyComponent"));
    this->AroundInfoCollectorComponent = CreateDefaultSubobject<UPalCharacterAroundInfoCollectorComponent>(TEXT("AroundInfoCollectorComponent"));
    this->bIsBattleMode = false;
    this->bIsTalkMode = false;
    this->bIsPalActiveActor = true;
    this->bIsLocalInitialized = false;
    this->bIsDisable_ChangeTickInterval_ByImportance = false;
    this->ImportanceType = EPalCharacterImportanceType::Near;
}

