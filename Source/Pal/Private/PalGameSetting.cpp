#include "PalGameSetting.h"

bool UPalGameSetting::TryGetWorkSuitabilityDefineData(const EPalWorkSuitability WorkSuitability, FPalWorkSuitabilityDefineData& outDefineData) {
    return false;
}

bool UPalGameSetting::IsSoundMuteable(FName RowName) {
    return false;
}

float UPalGameSetting::GetWeakScale_Implementation(int32 weakCount) {
    return 0.0f;
}

int32 UPalGameSetting::GetSoundRadius_cm(FName RowName) {
    return 0;
}

UPalOptionSubsystem* UPalGameSetting::GetOptionSubsystem(const UObject* WorldContextObject) const {
    return NULL;
}

void UPalGameSetting::GetMiningRankDefineData(int32 MiningRank, FPalMiningRankDefineData& outDefineData) {
}

float UPalGameSetting::GetMiningDamageRate(int32 MiningRank) {
    return 0.0f;
}


void UPalGameSetting::GetDeforestRankDefineData(int32 DeforestRank, FPalDeforestRankDefineData& outDefineData) {
}

float UPalGameSetting::GetDeforestDamageRate(int32 DeforestRank) {
    return 0.0f;
}

float UPalGameSetting::GetCollectionDropNumRate(int32 CollectionRank) {
    return 0.0f;
}

float UPalGameSetting::GetCaptureRateByStatus_ForGameSettingBP(const AActor* TargetPal) {
    return 0.0f;
}

int32 UPalGameSetting::GetCaptureLevelBySphereType(EPalCaptureSphereLevelType SphereType) const {
    return 0;
}


UPalGameSetting::UPalGameSetting() {
    this->CharacterMaxLevel = 50;
    this->GuildCharacterMaxLevel = 50;
    this->OtomoLevelSyncAddMaxLevel = 3;
    this->PlayerSprintStaminaType = EPalPlayerSprintStaminaDecreaseType::OnlyBattleMode;
    this->CharacterMaxRank = 4;
    this->ConsumStamina_PalThrow = 50;
    this->ReturnOtomoPalCoolTime = 3.00f;
    this->OtomoSlotNum = 5;
    this->OtomoWazaCoolDownSpeedRate = 2.00f;
    this->PlayerHPRateFromRespawn = 1.00f;
    this->PlayerStomachRateFromRespawn = 1.00f;
    this->RarePal_AppearanceProbability = 1.00f;
    this->RarePal_LevelMultiply = 1.50f;
    this->BossOrRarePal_TalentMin = 50;
    this->CharacterRankUpRequiredNumDefault = 4;
    this->NaturalUpdateSaveParameterInterval = 1.00f;
    this->CharacterHUDDisplayRange = 1000.00f;
    this->CharacterFedEatingTime = 3.00f;
    this->CharacterStayingSecondsInSpa = 10.00f;
    this->PalBoxPageNum = 16;
    this->PalBoxSlotNumInPage = 30;
    this->PlayerBattleJudge_EnemyDistance = 5000.00f;
    this->LiftupCharacterThrownVelocityScalar = 100.00f;
    this->LiftupCharacterClearCollisionDelayTime = 1.00f;
    this->NickNameMaxLength = 24;
    this->IntervalForPalAttackFromBall = 0.50f;
    this->CanShootRiderByFullRide = true;
    this->HitWazaAttackForMapObject = true;
    this->KnockBack_MaxHpPercent = 25;
    this->KnockBack_Power = 2000.00f;
    this->StunTime = 3.00f;
    this->StepCooldownTime = 1.00f;
    this->Stun_GunDamageRate = 2.00f;
    this->IsEnableAutoReload = true;
    this->DeadShootImpulseRate = 5000.00f;
    this->DeadShootImpulseMax = 100000.00f;
    this->OtomoDamageRate_Defense = 1.00f;
    this->DamageValueMin_MapObject = 10;
    this->DamageRate_WealPoint = 2.00f;
    this->DamageRate_StrongPoint = 0.50f;
    this->DamageRate_SleepHit = 1.00f;
    this->FinalDamageRate_Waza = 1.00f;
    this->FinalDamageRate_Weapon = 1.00f;
    this->FinalDamageRate_Mine = 1.00f;
    this->FinalDamageRate_MapObject_Waza = 1.00f;
    this->FinalDamageRate_MapObject_Weapon = 1.00f;
    this->FinalDamageRate_MapObject_Mine = 1.00f;
    this->FoliageDefault_Defense = 1.00f;
    this->WazaAttackerLevelDamage_Power = 0.70f;
    this->DamageRandomRate_Min = 0.90f;
    this->DamageRandomRate_Max = 1.10f;
    this->LevelDamageCorrect = 0.90f;
    this->LevelStatusAccumulateCorrect = 0.90f;
    this->DamageElementMatchRate = 1.50f;
    this->MineAttack_DefensePower = 1.00f;
    this->StatusCalculate_LevelMultiply_HP = 1.00f;
    this->StatusCalculate_TribePlus_HP = 10;
    this->StatusCalculate_ConstPlus_HP = 100;
    this->StatusCalculate_LevelMultiply_Attack = 0.20f;
    this->StatusCalculate_ConstPlus_Attack = 30;
    this->StatusCalculate_LevelMultiply_Defense = 0.20f;
    this->StatusCalculate_ConstPlus_Defense = 50;
    this->StatusCalculate_TribeMultiply_CraftSpeed = 10.00f;
    this->StatusCalculate_GenkaiToppa_PerAdd = 0.10f;
    this->StatusCalculate_Talent_PerAdd = 0.00f;
    this->BreakedWeaponDamageRate = 0.20f;
    this->BreakedArmorDefenseRate = 0.20f;
    this->ArmorDurabilityDamageDivide = 16.00f;
    this->ClimbingStamina_Move = 10.00f;
    this->ClimbingStamina_Jump = 10.00f;
    this->RideWazaStaminaRate = 0.50f;
    this->bIsEnableJumpPreliminary = false;
    this->JumpInterval = 0.25f;
    this->FlyMaxHeight = 1000000.00f;
    this->FlyHover_SP = 0.10f;
    this->FlyHorizon_SP = 2.00f;
    this->FlyHorizon_Dash_SP = 10.00f;
    this->FlyVertical_SP = 5.00f;
    this->AimingSpeedRateInRide = 0.20f;
    this->SlidingEndSpeed = 300.00f;
    this->JumpSP = 30;
    this->StepSP = 30;
    this->MeleeAttackSP = 5;
    this->SprintSP = 20.00f;
    this->GliderSP = 10.00f;
    this->SwimmingFallWaitTimeSec = 0.25f;
    this->Swimming_SP_Idle = 0.50f;
    this->Swimming_SP_Swim = 2.00f;
    this->Swimming_SP_DashSwim = 10.00f;
    this->FluidFriction = 1.80f;
    this->OverWeightSpeedZero_AddPercent = 50.00f;
    this->WalkableFloorAngleForDefault = 89.00f;
    this->WalkableFloorAngleForRide = 45.00f;
    this->IsEnableSpeedCollision = false;
    this->CollisionDamageMinSpeed = 100.00f;
    this->SpeedCollisionDamagePower = 100.00f;
    this->CollisionDamageSpeedMultiplay = 0.01f;
    this->CollisionDamageWeightThreshold = 5.00f;
    this->AutoHPRegene_Percent_perSecond = 0.10f;
    this->AutoHPRegene_Percent_perSecond_Sleeping = 1.00f;
    this->PosionHPDecrease_Percent_perSecond = 1.00f;
    this->Starvation_DecreaseHP_Percent_perSecond = 1.00f;
    this->AutoSANRegene_Percent_perSecond_PalStorage = 1.00f;
    this->StomachDecreace_perSecond_Monster = 0.03f;
    this->StomachDecreace_perSecond_Player = 0.03f;
    this->StomachDecreace_AutoHealing = 2.00f;
    this->StomachDecreace_WorkingRate = 2.00f;
    this->HungerStart_StomachValue = 30;
    this->FullStomachPalStartEatFood = 50;
    this->FullStomachCost_ByWazaUse_Base = 1.00f;
    this->StomachDecreaceRate_GroundRide_Sprint = 2.00f;
    this->StomachDecreaceRate_WaterRide = 3.00f;
    this->StomachDecreaceRate_WaterRide_Sprint = 5.00f;
    this->StomachDecreaceRate_FlyRide = 3.00f;
    this->StomachDecreaceRate_FlyRide_Sprint = 5.00f;
    this->RemainderOfLife_Second = 600;
    this->HpDecreaseRate_Drowning = 0.03f;
    this->PlayerShield_RecoverStartTime = 5.00f;
    this->PlayerShield_RecoverPercentPerSecond = 20.00f;
    this->StaminaRecover_PercentPerSecond = 20.00f;
    this->ResuscitationTime = 10.00f;
    this->PlayerDeath_DropOtomoNum = 5;
    this->PlayerDeath_DropOtomoRange = 100.00f;
    this->PlayerDeath_DropOtomoDisappearHours = 48;
    this->PlayerDyingDamagePerTime = 1.00f;
    this->ElementStatus_ResistanceInitialValue = 100;
    this->ElementStatus_AutoDecreasePerSecond = 0.50f;
    this->ElementStatus_ResetResistanceSecond = 600;
    this->BuildExp = 20;
    this->CraftExp = 20;
    this->PickupItemOnLevelExp = 1;
    this->MapObjectDestroyProceedExp = 5;
    this->MapObjectDistributeExpRange = 1000.00f;
    this->OtomoExp_HigherPlayerLevel = 10;
    this->CaptureExpBonus_Tier1_TableReferenceNum = 5;
    this->CaptureExpBonus_Tier2_TableReferenceNum = 2;
    this->CaptureExpBonus_Tier3_TableReferenceNum = 3;
    this->WorldHUDDisplayRangeDefault = 1000.00f;
    this->WorldHUDDetailDisplayRange = 500.00f;
    this->FarmCropGrowupSpeedBySec = 1.00f;
    this->FarmCropIncreaseRateByWaterFillRate = 3.00f;
    this->DefaultMoney = 100000;
    this->SneakAttackBackJudgeAngle_Degree = 120.00f;
    this->SneakAttack_PalMeleeWaza_AttackRate = 2.00f;
    this->AutoAimCameraMoveRate = 1.00f;
    this->AutoAimCharacterMoveRate = 1.00f;
    this->AutoAimCameraAdsorptionSpeed = 30.00f;
    this->AutoAimLockOnScreenSpaceRate = 0.50f;
    this->ForceAutoAimTime = 0.25f;
    this->SellItemRate = 0.20f;
    this->PalPriceConstantValueA = 1000.00f;
    this->PalPriceConstantValueB = 2.00f;
    this->SellPalRate = 0.75f;
    this->SearchRangeOnThrowedCharacterLanded = 100.00f;
    this->WorkCompleteReactionRangeFromPlayer = 300.00f;
    this->WorkerCollectResourceStackMaxNum = 10;
    this->FacialTypeHardWork = EPalFacialEyeType::Trouble;
    this->Timeout_WorkerApproachToTarget = 10.00f;
    this->WaitTime_WorkRepairFailedFindPath = 60.00f;
    this->WorkerWaitingNotifyInterval = 10.00f;
    this->WarpCheckInterval = 5.00f;
    this->WarpCheckMoveDistanceThreshold = 100.00f;
    this->WarpThreshold = 5.00f;
    this->AutoDecreaseHateValue_PercentMaxHP_PerSecond = 1.00f;
    this->HateDecreaseDamageRate = 0.10f;
    this->Hate_ForceUp_HPRate_OtomoActive = 0.10f;
    this->Hate_ForceUp_HPRate_IncidentBattle = 0.10f;
    this->CombatEndDistance_BattleStartSelfPos_To_SelfPos = 300.00f;
    this->CombatEndDistance_BattleStartSelfPos_To_TargetPos = 100.00f;
    this->CombatEndDistance_BattleStartSelfPos_To_TargetPos_AddFirstTargetDistance = 50.00f;
    this->NavigationAreaDivideExtents = 1000.00f;
    this->autoSaveSpan = 300.00f;
    this->SaveDataName_WorldBaseInfo = TEXT("LevelMeta");
    this->SaveDataName_World = TEXT("Level");
    this->SaveDataName_PlayerDirectory = TEXT("Players");
    this->SaveDataName_LocalData = TEXT("LocalData");
    this->SaveDataName_WorldOption = TEXT("WorldOption");
    this->PalWorldTime_GameStartHour = 8;
    this->PalWorldMinutes_RealOneMinute = 20;
    this->NightStartHour = 21;
    this->NightEndHour = 5;
    this->PlayerMorningHour = 5;
    this->PlayerSleepStartHour = 19;
    this->NightSkipWaitSecond = 3;
    this->LocalPlayerAndOtomo_LightRangeScale = 2.00f;
    this->BuildSimulationVerticalAdjustRate = 3.00f;
    this->BuildSimulationVerticalMinLength = 80.00f;
    this->BuildSimulationFoundationFloatingAllowance = 10.00f;
    this->BuildSimulationRoofHeightOffset = 100.00f;
    this->BuildSimulationStairHeightOffset = 100.00f;
    this->BuildSimulationLeanAngleMax = 30.00f;
    this->BuildingProgressInterpolationSpeed = 1.00f;
    this->PlayerRecord_BuildingObjectMaxNum = 10;
    this->BuildingMaxZ = 80000.00f;
    this->BuildObj_HatchedPalCharacterLevel = 1;
    this->BuildObj_DamageScarecrowStartRecoveryTime = 3.00f;
    this->BaseCampAreaRange = 5000.00f;
    this->BaseCampPalFindWorkRange = 400.00f;
    this->PalArriveToWorkLocationRange = 5.00f;
    this->PalArriveToWorkLocationRangeZ = 100.00f;
    this->BaseCampNeighborMinimumDistance = 100.00f;
    this->PalRotateSpeedToWork = 10.00f;
    this->BaseCampFoliageWorkableRange = 200.00f;
    this->BaseCampHungerApproachToPlayer = 200.00f;
    this->BaseCampHungerUnreachableObjectTimeoutRealSeconds = 10.00f;
    this->HungerHUDDisplayRange = 1000.00f;
    this->WorkAmountBySecForPlayer = 100.00f;
    this->BaseCampWorkerEventTriggerInterval = 600.00f;
    this->BaseCampWorkerEventTriggerProbability = 5.00f;
    this->BaseCampWorkerSanityWarningThreshold = 30.00f;
    this->BaseCampWorkerFinishEatingFullStomach = 80.00f;
    this->BaseCampWorkerFinishEatingSanity = 0.00f;
    this->BaseCampWorkerFinishEatCount = 10;
    this->BaseCampWorkerRecoverHungryTurnToTargetTimeout = 3.00f;
    this->BaseCampWorkerStartSleepHpPercentage = 30.00f;
    this->BaseCampWorkerSleepInPlaceRecoverSanityRate = 0.00f;
    this->BaseCampWorkerDistancePickableItem = 100.00f;
    this->BaseCampBuildingItemContainerPriority.AddDefaulted(1);
    this->FoliageRespawnFailedExtraRangeOfBaseCamp = 100.00f;
    this->BaseCampPalCombatRange_AddCampRange = 5000.00f;
    this->BaseCampTimeFinishBattleModeAfterEmptyEnemy = 5.00f;
    this->BaseCampWorkerMoveModeChangeThreshold = EPalCharacterImportanceType::Farthest;
    this->BaseCampWorkerDirectorTickForAssignWorkByCount = 3;
    this->BaseCampWorkerLookToTargetWork = 10.00f;
    this->ReviveWorkAdditionalRange = 100.00f;
    this->WorkAroundRangeDefault = 1000.00f;
    this->WorkAmountByManMonth = 1.00f;
    this->WorkNotifyDelayTime = 0.10f;
    this->WorkFinishDelayCallAddWorkNotifyDelayTime = 0.10f;
    this->WorkIgnitionTorchWaitTime = 1.00f;
    this->WorkTransportingSpeedRate = 0.50f;
    this->WorkTransportingDelayTimeDropItem = 2.00f;
    this->BaseCampStopProvideEnergyInterval = 10.00f;
    this->BaseCampWorkCollectionRestoreStashSeconds = 120.00f;
    this->WorkSuitabilityMaxRank = 5;
    this->DropItemWaitInsertMaxNumPerTick = 100;
    this->GamePad_NotAimCameraRotateSpeed_DegreePerSecond = 120.00f;
    this->GamePad_AimCameraRotateSpeed_DegreePerSecond = 40.00f;
    this->Mouse_NotAimCameraRotateSpeed = 2.50f;
    this->Mouse_AimCameraRotateSpeed = 1.20f;
    this->YawCameraMaxSpeedRate = 2.00f;
    this->TimeForCameraMaxSpeed = 0.50f;
    this->AimInterpInterval = 0.00f;
    this->InvaderSelfDeleteAddTime = 1;
    this->InvadeProbability = 0.50f;
    this->InvadeOccurablePlayerLevel = 5;
    this->InvadeJudgmentInterval_Minutes = 10;
    this->InvadeCollTime_Max_Minutes = 120;
    this->InvadeCollTime_Min_Minutes = 30;
    this->InvadeReturnTime_Minutes = 10;
    this->InvadeStartPoint_BaseCampRadius_Min_cm = 10000;
    this->InvadeStartPoint_BaseCampRadius_Max_cm = 50000;
    this->VisitorNPCProbability = 0.50f;
    this->VisitorNPCReturnTime_Minutes = 20;
    this->RidingAimOpacity = 0.40f;
    this->hideUITimeWhenNotConflict = 4.00f;
    this->firstCapturedUIDisplayTime = 10.00f;
    this->capturedUIDisplayTime = 5.00f;
    this->firstActivatedOtomoInfoDisplayTime = 10.00f;
    this->playerLevelUpUIDIsplayTime = 5.00f;
    this->playerExpGaugeUIDisplayTime = 5.00f;
    this->otomoExpGaugeUIDisplayTime = 5.00f;
    this->npcGaugeDisplayDistance = 6000.00f;
    this->npcGaugeDisplayRange_CameraSight = 12000.00f;
    this->GuildMemberGaugeDisplayDIstance = 20000.00f;
    this->downPlayerLoupeDisplayDistance = 5000.00f;
    this->downPlayerGaugeDisplayRange_CameraSight = 2000.00f;
    this->lowHealthEffectParcent = 20;
    this->DamageTextDisplayLength = 15000.00f;
    this->damageTextOffsetInterpolationLength = 1000.00f;
    this->strongEnemyMarkLevel = 10;
    this->otomoInteractUIDisplayDistance = 500.00f;
    this->enemyMarkUIMinScale = 0.25f;
    this->enemyMarkScaleInterpolationLength = 10000.00f;
    this->delayGaugeStartTime = 1.50f;
    this->delayGaugeProgressPerSecond = 0.20f;
    this->inventoryWeaponRangeMaxBorder = 100000.00f;
    this->inventoryWeaponStabilityMinBorder = -1.00f;
    this->inventoryWeaponAccuracyMinBorder = -7.00f;
    this->worldmapUIMaskClearSize = 20.00f;
    this->worldmapUIFTMergeDistance = 3000.00f;
    this->worldmapUIMaxMarker = 30;
    this->NPCHPGaugeUpdateSpan = 0.25f;
    this->CaptureFailedUIDisplayTime = 5.00f;
    this->OpenGameOverUITime = 3.00f;
    this->BlockRespawnTime = 10.00f;
    this->InventoryWeightAlertRate = 0.80f;
    this->InventoryWeightGaugeDIsplayTime = 3.00f;
    this->OtomoLevelUpNoticeUIDisplayTime = 5.00f;
    this->OtomoMasteredWazaNoticeUIDisplayTime = 5.00f;
    this->ProgressGaugeInterpolationSpeed = 1.00f;
    this->TeleportFadeInTime = 1.00f;
    this->TeleportFadeOutTime = 1.00f;
    this->PlayerTeleportTimeoutTime = 30.00f;
    this->PassiveSkillAppendNumWeights.AddDefaulted(5);
    this->bIsEggLauncherExplosion = false;
    this->ThrowPalBattleRadius = 1000.00f;
    this->ThrowPalWorkRadius = 1000.00f;
    this->RopeHitPowe = 250.00f;
    this->RopePullPower = 100.00f;
    this->DefaultMaxInventoryWeight = 500.00f;
    this->RaycastLengthForDetectIndoor = 10000.00f;
    this->MapObjectConnectAnyPlaceRaycastLength = 10.00f;
    this->ShootingTargetRayCastDistance = 10000.00f;
    this->CaptureBallBoundCountMax = 2;
    this->IgnoreFirstCaptureFailedHPRate = 0.30f;
    this->CaptureRateAdd_ByLegHold = 0.30f;
    this->LongPressInterval = 1.20f;
    this->LongPressInterval_EnemyCampCage = 5.00f;
    this->LongPressInterval_GetHatchedPal = 4.00f;
    this->CrouchLockAttenuation = 0.30f;
    this->IsEnableCharacterWazaScale = true;
    this->IsOverrideDamageAdditiveAnimation = true;
    this->BlinkInterval = 10.00f;
    this->CrimeStateMaintainDurationBaseDefault = 5.00f;
    this->technologyPointPerLevel = 3;
    this->bossTechnologyPointPerTowerBoss = 5;
    this->bossTechnologyPointPerNormalBoss = 1;
    this->DefaultTechnologyPoint = 0;
    this->TechnologyPoint_UnlockFastTravel = 0;
    this->DecreaseSanity_DamagedMultiply = 0.01f;
    this->FullStomachPercent_RecoverySanity = 50;
    this->RecoverySanity_FullStomach = 1.00f;
    this->DecreaseSanity_Hunger = 0.20f;
    this->DecreaseSanity_Starvation = 0.50f;
    this->Spawner_IsCheckLoadedWorldPartition = false;
    this->SpawnerDisableDistanceCM_FromBaseCamp = 10000.00f;
    this->Spawner_DefaultSpawnRadius_S = 15000.00f;
    this->Spawner_DefaultSpawnRadius_M = 20000.00f;
    this->Spawner_DefaultSpawnRadius_L = 30000.00f;
    this->Spawner_DefaultSpawnRadius_NPC = 20000.00f;
    this->Spawner_DefaultDespawnDistance_S = 20000.00f;
    this->Spawner_DefaultDespawnDistance_M = 30000.00f;
    this->Spawner_DefaultDespawnDistance_L = 40000.00f;
    this->Spawner_DefaultDespawnDistance_NPC = 30000.00f;
    this->CharacterHeadMeshDataTable = NULL;
    this->CharacterBodyMeshDataTable = NULL;
    this->CharacterHairMeshDataTable = NULL;
    this->CharacterEquipmentArmorMeshDataTable = NULL;
    this->CharacterEyeMaterialDataTable = NULL;
    this->CharacterMakeColorLimit_SV = 1.00f;
    this->IsAutoEquipMasteredWaza = true;
    this->ActiveUNKO = false;
    this->MaxSpawnableDeathPenaltyChest = 10;
    this->MapObjectShakeTimeOnDamaged = 0.50f;
    this->MapObjectOutlineByReticleTargetting = 2;
    this->MapObjectOutlineByInteractable = 3;
    this->FoliageExtentsXY = 50.00f;
    this->FoliageChunkSeparateScale = 1;
    this->MapObjectHPDisplayDistance = 1000.00f;
    this->MapObjectHPDisplayTime = 3.00f;
    this->MapObjectGateLockTime = 5.00f;
    this->bDirectObtainFromTreasureBox = false;
    this->MapObjectEffectTriggerAccumulate_Burn = 100.00f;
    this->MapObjectEffect_Burn_DamageHpRate = 0.03f;
    this->MapObjectEffect_Burn_DamageAroundInterval = 1.00f;
    this->MapObjectEffect_Burn_DamageAroundDamageValue = 10.00f;
    this->MapObjectEffect_Burn_DamageAroundAccumulateValue = 5.00f;
    this->MapObjectEffect_Burn_DamageAroundAccumulateValue_ForCharacter = 100.00f;
    this->PasswordLockFailedMaxNum = 3;
    this->MapObjectItemChestCorruptionRateFromWorkSpeed = 1.00f;
    this->StatusPointPerLevel = 1;
    this->AddMaxHPPerStatusPoint = 50.00f;
    this->AddMaxSPPerStatusPoint = 5.00f;
    this->AddPowerPerStatusPoint = 10.00f;
    this->AddMaxInventoryWeightPerStatusPoint = 20.00f;
    this->AddCaptureLevelPerStatusPoint = 0.50f;
    this->AddWorkSpeedPerStatusPoint = 10.00f;
    this->AddMaxHPPerHPRank = 0.03f;
    this->AddAttackPerAttackRank = 0.03f;
    this->AddDefencePerDefenceRank = 0.03f;
    this->AddWorkSpeedPerWorkSpeedRank = 0.03f;
    this->DebugInfoFont = NULL;
    this->MaxGuildNameLength = 30;
    this->JoinGuildRequestInteractLongPushTime = 4.00f;
    this->TutorialMinDisplayTime = 10.00f;
    this->TutorialDisplayTime = 20.00f;
    this->DeadBodyDestroySecond = 600.00f;
    this->EnemyCampRespawnCoolTime = 120.00f;
    this->EnemyCampDespawnDelayTime = 60.00f;
    this->PalBoxReviveTime = 10.00f;
    this->AfterNPCTalkDelayTime_Interact = 1.00f;
    this->MinSprintThreshold = 2000.00f;
    this->MaxSprintThreshold = 3000.00f;
    this->MinHPGaugeDisplayTime = 3.00f;
    this->SoundSourceDataTable = NULL;
}

