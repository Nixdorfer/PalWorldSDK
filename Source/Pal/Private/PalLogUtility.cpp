#include "PalLogUtility.h"

void UPalLogUtility::SetTextureToAdditionalDataFromStaticItemIDs(const UObject* WorldContextObject, FPalLogAdditionalData& targetData, const TArray<FName>& StaticItemIds) {
}

void UPalLogUtility::SetTextureToAdditionalDataFromStaticItemID(const UObject* WorldContextObject, FPalLogAdditionalData& targetData, const FName& StaticItemId) {
}

void UPalLogUtility::SetTextureToAdditionalDataFromHandles(const UObject* WorldContextObject, FPalLogAdditionalData& targetData, const TArray<UPalIndividualCharacterHandle*>& targetHandles) {
}

void UPalLogUtility::SetTextureToAdditionalDataFromHandle(const UObject* WorldContextObject, FPalLogAdditionalData& targetData, const UPalIndividualCharacterHandle* targetHandle) {
}

void UPalLogUtility::SetTextureToAdditionalDataFromCharacterID(const UObject* WorldContextObject, FPalLogAdditionalData& targetData, const FName CharacterID) {
}

void UPalLogUtility::CreateLogText(const UObject* WorldContextObject, EPalLogType logType, FText& OutText) {
}

FText UPalLogUtility::CreateItemGetLogText(const UObject* WorldContextObject, const FPalStaticItemIdAndNum& ItemIDAndNum) {
    return FText::GetEmpty();
}

void UPalLogUtility::AddWorkerStartWorking_ProductResource_Mining(const UObject* WorldContextObject, const UPalIndividualCharacterHandle* workerHandle, const FName MapObjectId) {
}

void UPalLogUtility::AddWorkerStartWorking_ProductResource_Deforest(const UObject* WorldContextObject, const UPalIndividualCharacterHandle* workerHandle) {
}

void UPalLogUtility::AddWorkerStartWorking_CollectResource(const UObject* WorldContextObject, const UPalIndividualCharacterHandle* workerHandle, const FName StaticItemId) {
}

void UPalLogUtility::AddWorkerStartWorking(const UObject* WorldContextObject, const UPalIndividualCharacterHandle* workerHandle, const EPalWorkType WorkType) {
}

void UPalLogUtility::AddWorkerStartRepairing(const UObject* WorldContextObject, const UPalIndividualCharacterHandle* workerHandle, const FName& buildedMapObjectName) {
}

void UPalLogUtility::AddWorkerStartBuilding(const UObject* WorldContextObject, const UPalIndividualCharacterHandle* workerHandle, const FName& buildedMapObjectName) {
}

void UPalLogUtility::AddWorkerCompleteItemConvertLog(const UObject* WorldContextObject, const UPalIndividualCharacterHandle* workerHandle, const FPalItemId& ItemId, const int32 Num) {
}

void UPalLogUtility::AddWorkerCompleteBuildLog(const UObject* WorldContextObject, const UPalIndividualCharacterHandle* workerHandle, const FName& buildedMapObjectName) {
}

void UPalLogUtility::AddSkillLog(const UObject* WorldContextObject, EPalLogType logType, const FPalLogInfo_Skill& Info) {
}

void UPalLogUtility::AddItemGetLog(const UObject* WorldContextObject, const FPalStaticItemIdAndNum& ItemIDAndNum) {
}

void UPalLogUtility::AddDropPalLog(const UObject* WorldContextObject, const FPalLogInfo_DropPal& LogInfo) {
}

UPalLogUtility::UPalLogUtility() {
}

