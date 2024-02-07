#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPalPassiveSkillEffectType.h"
#include "PalItemCreateParameter.h"
#include "PalPassiveSkillDatabaseRow.h"
#include "PalPassiveSkillEffect.h"
#include "PalPassiveSkillManager.generated.h"

class UDataTable;
class UPalDynamicItemDataBase;

UCLASS(Blueprintable)
class PAL_API UPalPassiveSkillManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PassiveSkillDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FPalPassiveSkillDatabaseRow> PalAssignableSkillMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FPalPassiveSkillDatabaseRow> RarePalAssignableSkillMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FPalPassiveSkillDatabaseRow> RangedWeaponAssignableSkillMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FPalPassiveSkillDatabaseRow> MeleeWeaponAssignableSkillMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FPalPassiveSkillDatabaseRow> ArmorAssignableSkillMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FPalPassiveSkillDatabaseRow> AccessoryAssignableSkillMap;
    
public:
    UPalPassiveSkillManager();
private:
    UFUNCTION(BlueprintCallable)
    void OnCreatedDynamicItemDataInServer(UPalDynamicItemDataBase* CreatedItemData, const FPalItemCreateParameter& CreateParameter);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<EPalPassiveSkillEffectType> GetSkillEffectTypes(FName SkillName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSkillData(const FName& SkillName, FPalPassiveSkillDatabaseRow& outSkillData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetPassiveSkillNamesRowName(const TArray<FName>& passiveList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FPalPassiveSkillEffect> GetPassiveSkillEffect(const FName& SkillName, bool bTargetToSelf);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetParameterWithSkillEffect(float originalValue, EPalPassiveSkillEffectType EffectType, const TArray<FPalPassiveSkillEffect>& skillEffectList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetNameTextId(FName SkillName);
    
};

