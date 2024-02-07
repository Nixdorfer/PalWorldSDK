#include "PalNPCSpawnerBase.h"

void APalNPCSpawnerBase::Tick_Spawning(float DeltaTime) {
}

void APalNPCSpawnerBase::Tick_Spawned(float DeltaTime) {
}

void APalNPCSpawnerBase::Tick_Despawning(float DeltaTime) {
}


void APalNPCSpawnerBase::SetSpawnedFlag(bool NewIsSpawned) {
}

void APalNPCSpawnerBase::SetSpawnDisableFlag(const FName& Name, bool isDisable) {
}

void APalNPCSpawnerBase::SetDisableBossSpawner_ToSaveData(FName KeyName) {
}

void APalNPCSpawnerBase::SetCheckRadius(float SpawnRadius, float DespawnRadius) {
}


void APalNPCSpawnerBase::RequestCreateGroup(TArray<FName> CharacterIDList) {
}

void APalNPCSpawnerBase::Request_TickSpawningForGameThread(float DeltaTime) {
}

void APalNPCSpawnerBase::Request_TickSpawnedForGameThread(float DeltaTime) {
}

void APalNPCSpawnerBase::Request_TickDespawningForGameThread(float DeltaTime) {
}

void APalNPCSpawnerBase::RemoveGroupWhenDestoryActor(AActor* DestoryActor) {
}

void APalNPCSpawnerBase::RemoveGroupCharacter(UPalIndividualCharacterHandle* RemoveIndividualHandle) {
}

bool APalNPCSpawnerBase::RandomSpawnLocationByRadiusLineTraceWithWorldLocation(FVector& OutLocation, float Radius, float RayStartUpOffset, float RayEndDownOffset, const FVector& WorldPos, int32 SumSpawnNum, int32 SelfIndexInAll) {
    return false;
}

bool APalNPCSpawnerBase::RandomSpawnLocationByRadiusLineTrace(FVector& OutLocation, float Radius, float RayStartUpOffset, float RayEndDownOffset, int32 SumSpawnNum, int32 SelfIndexInAll) {
    return false;
}

void APalNPCSpawnerBase::ProcessBossDefeatInfo_ServerInternal(AActor* BossActor, FName SpawnerName) {
}

void APalNPCSpawnerBase::PathWalkNameSort(TArray<UObject*> WalkPoint, TArray<UObject*>& OutSortedWalkPoint) {
}



bool APalNPCSpawnerBase::IsSpawned() const {
    return false;
}

bool APalNPCSpawnerBase::IsSpawnDisable() const {
    return false;
}

bool APalNPCSpawnerBase::IsNearBaseCamp() {
    return false;
}

float APalNPCSpawnerBase::GetSpawnRadiusCM() const {
    return 0.0f;
}


int32 APalNPCSpawnerBase::GetSpawnNumRandom_OneTribe(FPalSpawnerOneTribeInfo Info) {
    return 0;
}

int32 APalNPCSpawnerBase::GetSpawnLevelRandom_OneTribe(FPalSpawnerOneTribeInfo Info) {
    return 0;
}

float APalNPCSpawnerBase::GetSpawnerRadiusByType() {
    return 0.0f;
}

FString APalNPCSpawnerBase::GetSpawnDisableDebugInfo() const {
    return TEXT("");
}

int32 APalNPCSpawnerBase::GetMaxMonsterLevel_Implementation() const {
    return 0;
}

bool APalNPCSpawnerBase::GetIsServer() {
    return false;
}

bool APalNPCSpawnerBase::GetDisableBossSpawnerFlag_FromSaveData(FName KeyName) {
    return false;
}




EPalCheckSpawnResultType APalNPCSpawnerBase::CheckSpawnDistance(bool NewIsSpawned) {
    return EPalCheckSpawnResultType::Ignore;
}






void APalNPCSpawnerBase::AddGroupCharacterByGroupId(UPalIndividualCharacterHandle* AddIndividualHandle, const FGuid& GroupID, const FString& DebugName) {
}

void APalNPCSpawnerBase::AddGroupCharacter(UPalIndividualCharacterHandle* AddIndividualHandle) {
}

APalNPCSpawnerBase::APalNPCSpawnerBase() {
    this->bIsRunOnAnyThread = true;
    this->Ignore_DebugSettingDisable = false;
    this->Ignore_DistanceLocationReset = false;
    this->Ignore_FarCheck = false;
    this->bDoSpawnedTick = true;
    this->SpawnRadiusType = EPalSpawnRadiusType::S;
    this->IsSquadBehaviour = true;
    this->LocationResetDistance_SpawnerToCharacterTooFar = 500000.00f;
    this->LocationResetHeight_SpawnerToCharacterTooLow = 50000.00f;
    this->NavInvokerComponent = NULL;
    this->Squad = NULL;
    this->ImportanceType = EPalSpwnerImportanceType::Undefined;
}

