#include "PalContainerInitializeParameter.h"

FPalContainerInitializeParameter::FPalContainerInitializeParameter() {
    this->SlotNum = 0;
    this->bReferenceSlot = false;
    this->OperationRestrictType = EPalContainerOperationRestrictType::None;
}

