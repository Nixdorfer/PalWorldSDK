#include "PalAction_FeedItemToCharacter.h"

void UPalAction_FeedItemToCharacter::TimeoutStartTargetCharacterApproachAction() {
}


void UPalAction_FeedItemToCharacter::OnNotifiedMontage_OnReachFeeding() {
}

void UPalAction_FeedItemToCharacter::OnFinishPlayMontageFeeding() {
}

void UPalAction_FeedItemToCharacter::OnCancelByInputGuard() {
}

UPalAction_FeedItemToCharacter::UPalAction_FeedItemToCharacter() {
    this->TurnSpeed = 10.00f;
    this->TargetCharacterAction = NULL;
}

