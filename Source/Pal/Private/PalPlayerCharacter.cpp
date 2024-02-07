#include "PalPlayerCharacter.h"
#include "Net/UnrealNetwork.h"
#include "PalBuilderComponent.h"
#include "PalInsideBaseCampCheckComponent.h"
#include "PalInteractComponent.h"
#include "PalLoadoutSelectorComponent.h"
#include "PalObjectReplicatorComponent.h"
#include "PalShooterComponent.h"

void APalPlayerCharacter::StopIdleAnimation() {
}

void APalPlayerCharacter::SetSpectatorMode_Implementation(bool bSpectator) {
}

void APalPlayerCharacter::SetNearCommonEnemy(bool IsExistNearEnemy) {
}

void APalPlayerCharacter::PlayIdleAnimation(UAnimMontage* Montage) {
}

void APalPlayerCharacter::PlayEatAnimation() {
}

void APalPlayerCharacter::OnUpdateEssentialItemContainer(UPalItemContainer* Container) {
}

void APalPlayerCharacter::OnTriggerInteract(AActor* OtherActor, EPalInteractiveObjectIndicatorType IndicatorType) {
}


void APalPlayerCharacter::OnSPOverhead() {
}

void APalPlayerCharacter::OnRep_SpectatorMode(bool before) {
}

void APalPlayerCharacter::OnRep_CharacterMakeInfo() {
}

void APalPlayerCharacter::OnReloadStart() {
}

void APalPlayerCharacter::OnMontageEnded(UAnimMontage* Montage, bool bInterrupted) {
}

void APalPlayerCharacter::OnJumpDisable() {
}

void APalPlayerCharacter::OnEnterBaseCamp_StartBaseCampCombat(UPalBaseCampModel* CampModel) {
}

void APalPlayerCharacter::OnEndIdle() {
}


void APalPlayerCharacter::OnDownBattleEnemyRank_Implementation(EPalPlayerBattleFinishType FinishType) {
}

void APalPlayerCharacter::OnDamagePlayer_Server(FPalDamageResult DamageResult) {
}

void APalPlayerCharacter::OnChangeShooterState(bool IsAim, bool IsShoot) {
}



void APalPlayerCharacter::OnChangeNearEnemy_ToAll_Implementation(bool IsExist) {
}

void APalPlayerCharacter::OnChangeMovementMode(UPalCharacterMovementComponent* Component, TEnumAsByte<EMovementMode> prevMode, TEnumAsByte<EMovementMode> newMode, EPalCharacterMovementCustomMode PrevCustomMode, EPalCharacterMovementCustomMode NewCustomMode) {
}

void APalPlayerCharacter::OnChangeBattleEnemyRank_Implementation(EPalBattleBGMType Rank, bool IsAdd) {
}

void APalPlayerCharacter::OnBeginAction(const UPalActionBase* action) {
}

bool APalPlayerCharacter::IsIdle() const {
    return false;
}

bool APalPlayerCharacter::IsGuildMaster() const {
    return false;
}

bool APalPlayerCharacter::IsGliding() const {
    return false;
}

bool APalPlayerCharacter::IsAdjustedLocation() const {
    return false;
}

APalPlayerController* APalPlayerCharacter::GetPalPlayerController() const {
    return NULL;
}

void APalPlayerCharacter::GetLastInsideRegionNameID(FName& OutNameID) const {
}

FPalPlayerDataCharacterMakeInfo APalPlayerCharacter::GetCharacterMakeInfo() const {
    return FPalPlayerDataCharacterMakeInfo{};
}

FRotator APalPlayerCharacter::GetCameraRotator() const {
    return FRotator{};
}


void APalPlayerCharacter::ChangeToMale() {
}

void APalPlayerCharacter::ChangeToFemale() {
}

void APalPlayerCharacter::CallReviveDelegate_Implementation() {
}

void APalPlayerCharacter::CallRespawnDelegate_Implementation() {
}

void APalPlayerCharacter::CallMoveToRespawnLocationDelegate_Implementation(FVector Location) {
}

void APalPlayerCharacter::AdjustLocationByLoad(APalCharacter* InCharacter) {
}

void APalPlayerCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APalPlayerCharacter, PlayerCameraYaw);
    DOREPLIFETIME(APalPlayerCharacter, PlayerCameraPitch);
    DOREPLIFETIME(APalPlayerCharacter, IsAdjustedLocationByLoad);
    DOREPLIFETIME(APalPlayerCharacter, bSpectatorMode);
    DOREPLIFETIME(APalPlayerCharacter, CharacterMakeInfo);
}

APalPlayerCharacter::APalPlayerCharacter() {
    this->ShooterComponent = CreateDefaultSubobject<UPalShooterComponent>(TEXT("ShooterComponent"));
    this->InteractComponent = CreateDefaultSubobject<UPalInteractComponent>(TEXT("InteractComponent"));
    this->BuilderComponent = CreateDefaultSubobject<UPalBuilderComponent>(TEXT("BuilderComponent"));
    this->LoadoutSelectorComponent = CreateDefaultSubobject<UPalLoadoutSelectorComponent>(TEXT("LoadoutSelectorComponent"));
    this->InsideBaseCampCheckComponent = CreateDefaultSubobject<UPalInsideBaseCampCheckComponent>(TEXT("InsideBaseCampCheckComponent"));
    this->HighPriorityObjectReplicatorComponent = CreateDefaultSubobject<UPalObjectReplicatorComponent>(TEXT("HighPriorityObjectReplicatorComponent"));
    this->PlayerCameraYaw = 0.00f;
    this->PlayerCameraPitch = 0.00f;
    this->IsAdjustedLocationByLoad = false;
    this->IdleAnimMontage = NULL;
    this->PlayerBattleSituation = NULL;
    this->IsNearCommonEnemyFlag = false;
    this->bIsSetRespawnTelemetry = false;
    this->GenderChangerClass = NULL;
    this->GenderChanger = NULL;
    this->bSpectatorMode = false;
}

