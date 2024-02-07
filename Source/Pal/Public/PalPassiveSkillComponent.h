#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EPalPassiveSkillEffectType.h"
#include "EPalStatusID.h"
#include "PalDamageInfo.h"
#include "PalPassiveSkillEffectInfos.h"
#include "PalSpecialAttackRateInfo.h"
#include "PalPassiveSkillComponent.generated.h"

class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalPassiveSkillComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnStartSkillEffect, EPalPassiveSkillEffectType, EffectType, float, Value);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEndSkillEffect, EPalPassiveSkillEffectType, EffectType);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnChangeSkillEffectValue, EPalPassiveSkillEffectType, EffectType, float, Value);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStartSkillEffect OnStartSkillEffectDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeSkillEffectValue OnChangeSkillEffectValueDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEndSkillEffect OnEndSkillEffectDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SkillInfos, meta=(AllowPrivateAccess=true))
    TArray<FPalPassiveSkillEffectInfos> SkillInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalPassiveSkillEffectInfos> SkillInfosMirror;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPalPassiveSkillEffectType, EPalStatusID> SkillStatusMap;
    
    UPalPassiveSkillComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetupSkillFromSelf(UObject* OwnerObject, const TArray<FName>& skillList);
    
    UFUNCTION(BlueprintCallable)
    void OverrideDamageInfoBySkill(FPalDamageInfo& inoutDamageInfo);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnStartSkillEffect(EPalPassiveSkillEffectType EffectType, float Value);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SkillInfos();
    
    UFUNCTION(BlueprintCallable)
    void OnEndSkillEffect(EPalPassiveSkillEffectType EffectType);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeSkillEffectValue(EPalPassiveSkillEffectType EffectType, float Value);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetParameterWithPassiveSkillEffect(float originalValue, EPalPassiveSkillEffectType EffectType);
    
    UFUNCTION(BlueprintCallable)
    void AddSpecialAttackRateInfo(TArray<FPalSpecialAttackRateInfo>& SpecialAttackRateInfos);
    
};

