#include "PalIndividualCharacterParameter.h"
#include "Net/UnrealNetwork.h"

void UPalIndividualCharacterParameter::UseItemInSlot(const FPalItemSlotIdAndNum SlotIdAndNum) {
}

bool UPalIndividualCharacterParameter::TryFindEatItem(const FPalContainerId& ContainerId, int32& SlotIndex) {
    return false;
}

void UPalIndividualCharacterParameter::StoreIndividualActorInfoToSaveParameter() {
}

void UPalIndividualCharacterParameter::StartRemainderOfLifeTimer() {
}

void UPalIndividualCharacterParameter::StartRecuperatingInMedicalBed() {
}

void UPalIndividualCharacterParameter::SetStatusPoint(FName StatusName, int32 Point) {
}

void UPalIndividualCharacterParameter::SetShieldMaxHP(FFixedPoint64 NextSheildMaxHP) {
}

void UPalIndividualCharacterParameter::SetShieldHP(FFixedPoint64 NextSheildHP) {
}

void UPalIndividualCharacterParameter::SetPhysicalHealth(EPalStatusPhysicalHealthType PhysicalHealth) {
}

void UPalIndividualCharacterParameter::SetNoFallDamageHeightLastJumpedLocation() {
}

void UPalIndividualCharacterParameter::SetLastJumpedLocation(FVector Location) {
}

void UPalIndividualCharacterParameter::SetInvaderData(EPalInvaderType InvaderType, const FGuid InBaseCampId) {
}

void UPalIndividualCharacterParameter::SetDisableNaturalHealing(FName Key, bool Disable) {
}

void UPalIndividualCharacterParameter::SetDecreaseFullStomachRates(const FName Name, float Rate) {
}

void UPalIndividualCharacterParameter::ResetLastJumpedLocation() {
}

void UPalIndividualCharacterParameter::RemoveDecreaseFullStomachRates(const FName Name) {
}

void UPalIndividualCharacterParameter::PartyPalMealInventoryFood() {
}

void UPalIndividualCharacterParameter::OnRep_SaveParameter() {
}

void UPalIndividualCharacterParameter::OnRep_PhantomActorReplicateArray() {
}

void UPalIndividualCharacterParameter::OnRep_IndividualActor() {
}

void UPalIndividualCharacterParameter::NaturalUpdateSaveParameter(const EPalCharacterNaturalUpdateType Type) {
}

bool UPalIndividualCharacterParameter::IsSleeping() const {
    return false;
}

bool UPalIndividualCharacterParameter::IsRarePal() {
    return false;
}

bool UPalIndividualCharacterParameter::IsNoFallDamageLastJumpedLocation() const {
    return false;
}

bool UPalIndividualCharacterParameter::IsNocturnal() const {
    return false;
}

bool UPalIndividualCharacterParameter::IsLevelMax() const {
    return false;
}

bool UPalIndividualCharacterParameter::IsHPFullRecovered() {
    return false;
}

float UPalIndividualCharacterParameter::HungerParameterRate() const {
    return 0.0f;
}

bool UPalIndividualCharacterParameter::HasWorkSuitabilityRank(const EPalWorkSuitability InWorkSuitability, const int32 SuitabilityRank) const {
    return false;
}

bool UPalIndividualCharacterParameter::HasWorkSuitability(const EPalWorkSuitability InWorkSuitability) const {
    return false;
}

bool UPalIndividualCharacterParameter::HasMasteredWaza(EPalWazaID WazaID) {
    return false;
}

bool UPalIndividualCharacterParameter::HasGenusCategory(EPalGenusCategoryType Category) {
    return false;
}

int32 UPalIndividualCharacterParameter::GetWorkSuitabilityRankWithCharacterRank(const EPalWorkSuitability WorkSuitability) const {
    return 0;
}

TMap<EPalWorkSuitability, int32> UPalIndividualCharacterParameter::GetWorkSuitabilityRanksWithCharacterRank() const {
    return TMap<EPalWorkSuitability, int32>();
}

int32 UPalIndividualCharacterParameter::GetWorkSuitabilityRank(const EPalWorkSuitability InWorkSuitability) const {
    return 0;
}

int32 UPalIndividualCharacterParameter::GetWorkSpeedRank() const {
    return 0;
}

EPalBaseCampWorkerSickType UPalIndividualCharacterParameter::GetWorkerSick() const {
    return EPalBaseCampWorkerSickType::None;
}

int32 UPalIndividualCharacterParameter::GetUnusedStatusPoint() const {
    return 0;
}

EPalTribeID UPalIndividualCharacterParameter::GetTribeID() const {
    return EPalTribeID::None;
}

void UPalIndividualCharacterParameter::GetStatusPointList(TArray<FPalGotStatusPoint>& OutPointList) const {
}

int32 UPalIndividualCharacterParameter::GetStatusPoint(FName StatusName) const {
    return 0;
}

int32 UPalIndividualCharacterParameter::GetShotAttack_withBuff() const {
    return 0;
}

int32 UPalIndividualCharacterParameter::GetShotAttack() const {
    return 0;
}

FFixedPoint64 UPalIndividualCharacterParameter::GetShieldMaxHP() {
    return FFixedPoint64{};
}

FFixedPoint64 UPalIndividualCharacterParameter::GetShieldHP() {
    return FFixedPoint64{};
}

FPalIndividualCharacterSaveParameter UPalIndividualCharacterParameter::GetSaveParameter() const {
    return FPalIndividualCharacterSaveParameter{};
}

float UPalIndividualCharacterParameter::GetSanityValue() const {
    return 0.0f;
}

float UPalIndividualCharacterParameter::GetSanityRate() const {
    return 0.0f;
}

float UPalIndividualCharacterParameter::GetRatePassiveSkill(EPalPassiveSkillEffectType EffectType) const {
    return 0.0f;
}

float UPalIndividualCharacterParameter::GetRatePartnerSkill(EPalPassiveSkillEffectType EffectType) const {
    return 0.0f;
}

int32 UPalIndividualCharacterParameter::GetRank() const {
    return 0;
}

EPalStatusPhysicalHealthType UPalIndividualCharacterParameter::GetPhysicalHealth() const {
    return EPalStatusPhysicalHealthType::Healthful;
}

TArray<FName> UPalIndividualCharacterParameter::GetPassiveSkillList() {
    return TArray<FName>();
}

int32 UPalIndividualCharacterParameter::GetPalSoulRank() const {
    return 0;
}

void UPalIndividualCharacterParameter::GetNickname(FString& outName) const {
}

int32 UPalIndividualCharacterParameter::GetMeleeAttack_withBuff() const {
    return 0;
}

int32 UPalIndividualCharacterParameter::GetMeleeAttack() const {
    return 0;
}

float UPalIndividualCharacterParameter::GetMaxSanityValue() const {
    return 0.0f;
}

FFixedPoint64 UPalIndividualCharacterParameter::GetMaxHP_withBuff() const {
    return FFixedPoint64{};
}

int32 UPalIndividualCharacterParameter::GetMaxHP() const {
    return 0;
}

float UPalIndividualCharacterParameter::GetMaxFullStomach() const {
    return 0.0f;
}

TArray<EPalWazaID> UPalIndividualCharacterParameter::GetMasteredWaza() const {
    return TArray<EPalWazaID>();
}

int32 UPalIndividualCharacterParameter::GetLevel() const {
    return 0;
}

FVector UPalIndividualCharacterParameter::GetLastJumpedLocation() const {
    return FVector{};
}

EPalStatusHungerType UPalIndividualCharacterParameter::GetHungerType() const {
    return EPalStatusHungerType::Default;
}

int32 UPalIndividualCharacterParameter::GetHPRank() const {
    return 0;
}

FFixedPoint64 UPalIndividualCharacterParameter::GetHP() const {
    return FFixedPoint64{};
}

FGuid UPalIndividualCharacterParameter::GetGroupId() const {
    return FGuid{};
}

EPalGenderType UPalIndividualCharacterParameter::GetGenderType() const {
    return EPalGenderType::None;
}

float UPalIndividualCharacterParameter::GetFullStomachRate() const {
    return 0.0f;
}

float UPalIndividualCharacterParameter::GetFullStomachDecreasingRate() const {
    return 0.0f;
}

float UPalIndividualCharacterParameter::GetFullStomach() const {
    return 0.0f;
}

float UPalIndividualCharacterParameter::GetFoodStatusRate(EPalFoodStatusEffectType EffectType) const {
    return 0.0f;
}

int32 UPalIndividualCharacterParameter::GetExp() const {
    return 0;
}

TArray<EPalWazaID> UPalIndividualCharacterParameter::GetEquipWaza() const {
    return TArray<EPalWazaID>();
}

FPalContainerId UPalIndividualCharacterParameter::GetEquipItemContainerId() const {
    return FPalContainerId{};
}

FPalIndividualCharacterEquipItemContainerHandler UPalIndividualCharacterParameter::GetEquipItemContainerHandler() const {
    return FPalIndividualCharacterEquipItemContainerHandler{};
}

float UPalIndividualCharacterParameter::GetEffectFoodTimeRate() const {
    return 0.0f;
}

FName UPalIndividualCharacterParameter::GetEffectFoodName() const {
    return NAME_None;
}

int32 UPalIndividualCharacterParameter::GetDefense_withBuff() const {
    return 0;
}

int32 UPalIndividualCharacterParameter::GetDefense() const {
    return 0;
}

int32 UPalIndividualCharacterParameter::GetDefenceRank() const {
    return 0;
}

EPalWorkSuitability UPalIndividualCharacterParameter::GetCurrentWorkSuitability() const {
    return EPalWorkSuitability::None;
}

float UPalIndividualCharacterParameter::GetCraftSpeedSickRate() const {
    return 0.0f;
}

int32 UPalIndividualCharacterParameter::GetCraftSpeedByWorkSuitability(const EPalWorkSuitability WorkSuitability) const {
    return 0;
}

float UPalIndividualCharacterParameter::GetCraftSpeedBuffRate() const {
    return 0.0f;
}

int32 UPalIndividualCharacterParameter::GetCraftSpeed_withBuff_WorkSuitability(const EPalWorkSuitability Suitability) const {
    return 0;
}

int32 UPalIndividualCharacterParameter::GetCraftSpeed_withBuff() const {
    return 0;
}

int32 UPalIndividualCharacterParameter::GetCraftSpeed() const {
    return 0;
}

FName UPalIndividualCharacterParameter::GetCharacterID() const {
    return NAME_None;
}

TSoftClassPtr<APalCharacter> UPalIndividualCharacterParameter::GetCharacterClass() {
    return NULL;
}

EPalBaseCampWorkerEventType UPalIndividualCharacterParameter::GetBaseCampWorkerEventType() const {
    return EPalBaseCampWorkerEventType::None;
}

FGuid UPalIndividualCharacterParameter::GetBaseCampId() const {
    return FGuid{};
}

int32 UPalIndividualCharacterParameter::GetAttackRank() const {
    return 0;
}

float UPalIndividualCharacterParameter::GetAffectSanityValue() const {
    return 0.0f;
}

void UPalIndividualCharacterParameter::FullRecoveryHP() {
}

void UPalIndividualCharacterParameter::EndRecuperatingInMedicalBed() {
}

void UPalIndividualCharacterParameter::DecrementUnusedStatusPoint() {
}

void UPalIndividualCharacterParameter::DecreaseShieldHPByDamage(int32 Damage) {
}

void UPalIndividualCharacterParameter::ClearEquipWaza() {
}

void UPalIndividualCharacterParameter::AddPassiveSkill(FName AddSkill, FName OverrideSkill) {
}

void UPalIndividualCharacterParameter::AddHP(FFixedPoint64 PlusHP) {
}

void UPalIndividualCharacterParameter::AddEquipWaza(EPalWazaID WazaID) {
}

void UPalIndividualCharacterParameter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalIndividualCharacterParameter, IndividualActor);
    DOREPLIFETIME(UPalIndividualCharacterParameter, IndividualId);
    DOREPLIFETIME(UPalIndividualCharacterParameter, PhantomActorReplicateArray);
    DOREPLIFETIME(UPalIndividualCharacterParameter, SaveParameter);
    DOREPLIFETIME(UPalIndividualCharacterParameter, EquipItemContainer);
    DOREPLIFETIME(UPalIndividualCharacterParameter, BaseCampId);
    DOREPLIFETIME(UPalIndividualCharacterParameter, Debug_CurrentAIActionName);
}

UPalIndividualCharacterParameter::UPalIndividualCharacterParameter() {
    this->IndividualActor = NULL;
    this->EquipItemContainer = NULL;
}

