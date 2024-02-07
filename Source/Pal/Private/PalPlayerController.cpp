#include "PalPlayerController.h"
#include "Net/UnrealNetwork.h"
#include "PalAIActionComponent.h"
#include "PalCutsceneComponent.h"
#include "PalNetworkMulticastGateComponent.h"

bool APalPlayerController::TrySwitchOtomo() {
    return false;
}

void APalPlayerController::ThrowPalByOutSide(AActor* PreOtomoPal) {
}

void APalPlayerController::TeleportToSafePoint_ToServer_Implementation() {
}

void APalPlayerController::StartStepCoolDownCoolTimer() {
}

void APalPlayerController::StartFlyToServer_Implementation() {
}

void APalPlayerController::SetRiderRelativeRotation_ToServer_Implementation(FRotator Rotator) {
}



void APalPlayerController::SetDisableThrowPalFlag(FName flagName, bool isDisable) {
}

void APalPlayerController::SetDisableSwitchPalFlag(FName flagName, bool isDisable) {
}

void APalPlayerController::SetDisableInputFlag(FName flagName, bool isDisable) {
}

void APalPlayerController::SetCameraRotatorToPlayerCharacter_ToServer_Implementation(FRotator CameraRotator) {
}

void APalPlayerController::SendScreenLogToClient_Implementation(const FString& Message, FLinearColor Color, float Duration, const FName& Key) {
}

void APalPlayerController::SendLog_ToClient_Implementation(const EPalLogPriority Priority, const FText& Text, const FPalLogAdditionalData& AdditionalData) {
}

void APalPlayerController::RPCDummy_Implementation() {
}

void APalPlayerController::RequestLiftupThrow_ToServer_Implementation(AActor* Target) {
}

void APalPlayerController::RequestLiftup_ToServer_Implementation(APalCharacter* TargetCharacter) {
}

void APalPlayerController::RequestFastTravel_ToServer_Implementation(const FGuid& LocationId) {
}

void APalPlayerController::RemoveCameraRotateSpeedModifierRate(const FName& modifierName) {
}

void APalPlayerController::ReceiveLiftupRequestResult_ToClient_Implementation(EPalLiftupRequestResult Result) {
}

void APalPlayerController::PlaySkill(int32 SlotID) {
}

void APalPlayerController::PalDeprojectScreenPositionToWorld(FVector& StartLocation, FVector& RayDirection) {
}

void APalPlayerController::OnWeaponNotify(EWeaponNotifyType Type) {
}

void APalPlayerController::OnUpdateWeightInventory(float Weight) {
}



void APalPlayerController::OnStartAim() {
}


void APalPlayerController::OnReleasedSpawnPalButton() {
}


void APalPlayerController::OnOverWeightInventory(float Weight) {
}







void APalPlayerController::OnLongReleasedSpawnPalButton() {
}

void APalPlayerController::OnLongPressedCoopButton() {
}

void APalPlayerController::OnLanded(UPalCharacterMovementComponent* MovementComponent, const FHitResult& Hit) {
}

void APalPlayerController::OnJump(UPalCharacterMovementComponent* MovementComponent) {
}




void APalPlayerController::OnFixedWeightInventory(float Weight) {
}

void APalPlayerController::OnEndRolling() {
}


void APalPlayerController::OnEndAim() {
}

void APalPlayerController::OnDestroyPawn(AActor* DestroyedActor) {
}

void APalPlayerController::OnDamage(FPalDamageResult DamageResult) {
}

void APalPlayerController::OnChangeSwimming(bool IsInSwimming) {
}

void APalPlayerController::OnChangePadOption(const FPalOptionPadSettings& PrevSettings, const FPalOptionPadSettings& NewSettings) {
}


void APalPlayerController::OnChangeKeyboardOption(const FPalOptionKeyboardSettings& PrevSettings, const FPalOptionKeyboardSettings& NewSettings) {
}


void APalPlayerController::JumpCancelPalThrow(UPalCharacterMovementComponent* MovementComponent) {
}

bool APalPlayerController::IsSwimming() const {
    return false;
}

bool APalPlayerController::IsRidingFlyPal() const {
    return false;
}

bool APalPlayerController::IsRiding() const {
    return false;
}

bool APalPlayerController::IsCooping() const {
    return false;
}



AActor* APalPlayerController::GetRidingCharacter() const {
    return NULL;
}

FGuid APalPlayerController::GetPlayerUId() const {
    return FGuid{};
}

APalPlayerState* APalPlayerController::GetPalPlayerState() const {
    return NULL;
}

void APalPlayerController::GetOffToServer_Implementation() {
}

APawn* APalPlayerController::GetLowBodyPawn() const {
    return NULL;
}

APalCharacter* APalPlayerController::GetLowBodyPalCharacter() const {
    return NULL;
}

UPalLoadoutSelectorComponent* APalPlayerController::GetLoadoutSelectorComponent() const {
    return NULL;
}

FVector2D APalPlayerController::GetKeyboardMoveValue() const {
    return FVector2D{};
}

APalCharacter* APalPlayerController::GetDefaultPlayerCharacter() const {
    return NULL;
}

APalCharacter* APalPlayerController::GetControlPalCharacter() const {
    return NULL;
}

FVector2D APalPlayerController::GetControllerRightStickValue() const {
    return FVector2D{};
}

FVector2D APalPlayerController::GetControllerLeftStickValue() const {
    return FVector2D{};
}

void APalPlayerController::EndFlyToServer_Implementation() {
}

void APalPlayerController::EnableShootingByAction(const UPalActionComponent* Component) {
}


void APalPlayerController::Debug_TogglePartnerSkillNoDecrease_Implementation() {
}

void APalPlayerController::Debug_TeleportToNearestPlayer_Implementation() {
}

void APalPlayerController::Debug_TeleportToNearestCamp_Implementation() {
}

void APalPlayerController::Debug_TeleportToBotLocation_Implementation(int32 botIndex) {
}

void APalPlayerController::Debug_TeleportToBotCamp_Implementation(int32 botIndex) {
}

void APalPlayerController::Debug_Teleport2D_Implementation(const FVector& Location) {
}

void APalPlayerController::Debug_ShowInvaderDeubgLog_Implementation() {
}

void APalPlayerController::Debug_SetPalWorldTimeScale_Implementation(float Rate) {
}

void APalPlayerController::Debug_SetPalWorldTime_Implementation(int32 Hour) {
}

void APalPlayerController::Debug_SetFPSForServer_Implementation(float fps) {
}

void APalPlayerController::Debug_RerollCharacterMake_Implementation() {
}

void APalPlayerController::Debug_ReceiveCheatCommand_ToClient_Implementation(const FString& Message) {
}

void APalPlayerController::Debug_ParallelForUpdateActiveTiles_Implementation() {
}

void APalPlayerController::Debug_NotConsumeMaterialsInCraft_Implementation() {
}

void APalPlayerController::Debug_NotConsumeMaterialsInBuild_Implementation() {
}

void APalPlayerController::Debug_Muteki_ToServer_Implementation() {
}

void APalPlayerController::Debug_InvaderMarchRandom_Implementation() {
}

void APalPlayerController::Debug_InvaderMarch_Implementation() {
}

void APalPlayerController::Debug_InsightsTraceStop_ToServer_Implementation() {
}

void APalPlayerController::Debug_InsightsTraceStart_ToServer_Implementation() {
}

void APalPlayerController::Debug_IgnoreRestrictedByItemsForPartnerSkill_Implementation() {
}

void APalPlayerController::Debug_ForceSpawnRarePal_ToServer_Implementation() {
}

void APalPlayerController::Debug_EnableCollectPalCount_Implementation() {
}

void APalPlayerController::Debug_CheatCommand_ToServer_Implementation(const FString& Command) {
}

void APalPlayerController::Debug_AddPlayerExp_ToServer_Implementation(int32 addExp) {
}

void APalPlayerController::Debug_AddPartyExp_ToServer_Implementation(int32 addExp) {
}

void APalPlayerController::Debug_AddMoney_ToServer_Implementation(int64 addValue) {
}

void APalPlayerController::Debug_AddExpForALLPlayer_ToServer_Implementation(int32 addExp) {
}

bool APalPlayerController::CanCooping() const {
    return false;
}

void APalPlayerController::CallOnCoopReleaseDelegate_ToServer_Implementation() {
}

void APalPlayerController::AddCameraRotateSpeedModifierRate(const FName& modifierName, float Rate) {
}


void APalPlayerController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APalPlayerController, bAdmin);
    DOREPLIFETIME(APalPlayerController, Transmitter);
}

APalPlayerController::APalPlayerController() {
    this->bAdmin = false;
    this->AIActionComponent = CreateDefaultSubobject<UPalAIActionComponent>(TEXT("ActionsComp"));
    this->MulticastGateComponent = CreateDefaultSubobject<UPalNetworkMulticastGateComponent>(TEXT("NetworkMulticastGateComponent"));
    this->CutsceneComponent = CreateDefaultSubobject<UPalCutsceneComponent>(TEXT("PalCutsceneComponent"));
    this->Transmitter = NULL;
    this->WeaponPaletteLongPressTime = 1.00f;
    this->PawnChangeCameraInterpChangeTime = 0.10f;
    this->isOpenConstructionMenu = false;
    this->RecoilCurve = NULL;
    this->DamageCameraShake = NULL;
    this->DamageCamShakeRegulatorClass = NULL;
    this->DamageCamShakeRegulator = NULL;
    this->AutoAimTarget = NULL;
}

