#include "PalBossTower.h"
#include "Net/UnrealNetwork.h"

bool APalBossTower::WriteBossDefeatRecord_ServerInternal(APalPlayerCharacter* TargetPlayer) {
    return false;
}

void APalBossTower::ShowWaitInfo(const FVector TargetLocation, const FVector DisplayOffset, bool isWaiting) {
}

void APalBossTower::RequestBossBattleStart(APalPlayerCharacter* Player) {
}

void APalBossTower::RequestBossBattleEntry(APalPlayerCharacter* Player) {
}

void APalBossTower::RemoveInDoorPlayer(APalPlayerCharacter* Player) {
}

void APalBossTower::OnRep_InstanceModel() {
}

void APalBossTower::OnChangeEntryPlayer(TArray<APalPlayerCharacter*> EntryPlayers) {
}

void APalBossTower::OnChangeCombatTimeLimit(FDateTime NewCombatTimeLimit) {
}


void APalBossTower::OnChangeBossBattleState(EPalBossBattleState NewBossBattleState) {
}

bool APalBossTower::IsEntered(APalPlayerCharacter* Player) const {
    return false;
}

FTransform APalBossTower::GetTopWarpPoint_Implementation() const {
    return FTransform{};
}

TArray<APalPlayerCharacter*> APalBossTower::GetStartablePlayers() {
    return TArray<APalPlayerCharacter*>();
}

FTransform APalBossTower::GetFrontWarpPoint_Implementation() const {
    return FTransform{};
}

TArray<APalPlayerCharacter*> APalBossTower::GetForceWarpTargets() const {
    return TArray<APalPlayerCharacter*>();
}

FTransform APalBossTower::GetDeadItemDropPoint_Implementation() const {
    return FTransform{};
}

FName APalBossTower::GetBossBattleRowName() {
    return NAME_None;
}

void APalBossTower::CloseWaitInfo() {
}

void APalBossTower::AddInDoorPlayer(APalPlayerCharacter* Player) {
}

void APalBossTower::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APalBossTower, InstanceModel);
    DOREPLIFETIME(APalBossTower, CombatTimeLimit);
}

APalBossTower::APalBossTower() {
    this->BossType = EPalBossType::None;
    this->InstanceModel = NULL;
}

