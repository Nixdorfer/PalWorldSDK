#include "PalPassiveAbilitySkillParameters.h"

FPalPassiveAbilitySkillParameters::FPalPassiveAbilitySkillParameters() {
    this->DelayTime = 0.00f;
    this->WorkType = EPalWorkType::None;
    this->AssignOthers = false;
    this->TargetElementType = EPalElementType::None;
}

