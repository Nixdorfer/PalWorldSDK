#include "PalActiveSkill.h"
#include "Net/UnrealNetwork.h"

void UPalActiveSkill::OnRep_UpdateCoolTime() {
}

void UPalActiveSkill::OnRep_ChangeCTState() {
}

bool UPalActiveSkill::IsCoolTimeFinish() const {
    return false;
}

void UPalActiveSkill::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalActiveSkill, IsCooling);
    DOREPLIFETIME(UPalActiveSkill, ReuseCoolTimer);
}

UPalActiveSkill::UPalActiveSkill() {
    this->IsCooling = false;
    this->ReuseCoolTimer = 0.00f;
    this->WazaType = EPalWazaID::None;
    this->IsStopTimer = false;
    this->DatabaseCoolTime = 0.00f;
    this->bIsTransient = false;
}

