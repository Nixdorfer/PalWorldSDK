#include "PalPlayerRecordDataUtility.h"

void UPalPlayerRecordDataUtility::SetRecordData_TribeIdFlag_ForServer(const UObject* WorldContextObject, FPalPlayerRecordDataRepInfoArray_BoolVal& RecordData, const EPalTribeID Key) {
}

void UPalPlayerRecordDataUtility::SetRecordData_TribeIdCount_ForServer(const UObject* WorldContextObject, FPalPlayerRecordDataRepInfoArray_IntVal& RecordData, const EPalTribeID Key, const int32 Value) {
}

void UPalPlayerRecordDataUtility::SetRecordData_Int_ForServer(const UObject* WorldContextObject, FPalPlayerRecordDataRepInfoArray_IntVal& RecordData, const FName Key, const int32 Value) {
}

void UPalPlayerRecordDataUtility::SetRecordData_BossDefeat_ForServer(const UObject* WorldContextObject, FPalPlayerRecordDataRepInfoArray_BoolVal& RecordData, const EPalBossType Key) {
}

void UPalPlayerRecordDataUtility::SetRecordData_Bool_ForServer(const UObject* WorldContextObject, FPalPlayerRecordDataRepInfoArray_BoolVal& RecordData, const FName Key, const bool bValue) {
}

bool UPalPlayerRecordDataUtility::GetRecordData_TribeIdFlag(const FPalPlayerRecordDataRepInfoArray_BoolVal& RecordData, const EPalTribeID Key) {
    return false;
}

int32 UPalPlayerRecordDataUtility::GetRecordData_TribeIdCount(const FPalPlayerRecordDataRepInfoArray_IntVal& RecordData, const EPalTribeID Key) {
    return 0;
}

int32 UPalPlayerRecordDataUtility::GetRecordData_Int(const FPalPlayerRecordDataRepInfoArray_IntVal& RecordData, const FName Key) {
    return 0;
}

int32 UPalPlayerRecordDataUtility::GetRecordData_BossDefeat(const FPalPlayerRecordDataRepInfoArray_BoolVal& RecordData, const EPalBossType Key) {
    return 0;
}

int32 UPalPlayerRecordDataUtility::GetRecordData_BoolCount(const FPalPlayerRecordDataRepInfoArray_BoolVal& RecordData) {
    return 0;
}

bool UPalPlayerRecordDataUtility::GetRecordData_Bool(const FPalPlayerRecordDataRepInfoArray_BoolVal& RecordData, const FName Key) {
    return false;
}

UPalPlayerRecordDataUtility::UPalPlayerRecordDataUtility() {
}

