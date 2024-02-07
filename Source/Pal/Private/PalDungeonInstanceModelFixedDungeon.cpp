#include "PalDungeonInstanceModelFixedDungeon.h"
#include "Net/UnrealNetwork.h"

FGameDateTime UPalDungeonInstanceModelFixedDungeon::GetRespawnBossTimeAt() const {
    return FGameDateTime{};
}

void UPalDungeonInstanceModelFixedDungeon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalDungeonInstanceModelFixedDungeon, RespawnBossTimeAt);
}

UPalDungeonInstanceModelFixedDungeon::UPalDungeonInstanceModelFixedDungeon() {
}

