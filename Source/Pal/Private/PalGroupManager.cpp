#include "PalGroupManager.h"

bool UPalGroupManager::TryGetGuildName(const FGuid& GroupID, FString& OutGuildName) const {
    return false;
}

bool UPalGroupManager::TryGetGroupName(const FGuid& GroupID, FString& OutGroupName) const {
    return false;
}

bool UPalGroupManager::IsExistGroup(const FString& GroupName) const {
    return false;
}

FGuid UPalGroupManager::GetOrganizationGroupId(const UObject* WorldContextObject, const EPalOrganizationType OrganizationType) {
    return FGuid{};
}

void UPalGroupManager::Debug_RequestNewGroup(FPalGroupCreateParameter CreateParam, FPalGroupOperationWithGroupIdDynamicDelegate Callback) {
}

void UPalGroupManager::Debug_RequestExitGroup(const FPalInstanceID& IndividualId, FPalGroupOperationDynamicDelegate Callback) {
}

void UPalGroupManager::Debug_RequestEnterGroup(const FPalInstanceID& IndividualId, const FGuid& GroupID, FPalGroupOperationDynamicDelegate Callback) {
}

void UPalGroupManager::Debug_RequestDisposeGroup(const FGuid& GroupID, FPalGroupOperationDynamicDelegate Callback) {
}

UPalGroupBase* UPalGroupManager::Debug_GetFirstGroupByType(const EPalGroupType Type) const {
    return NULL;
}

UPalGroupManager::UPalGroupManager() {
}

