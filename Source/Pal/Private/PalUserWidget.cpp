#include "PalUserWidget.h"
#include "Templates/SubclassOf.h"

void UPalUserWidget::VisibilityOverride(ESlateVisibility changedVisibility) {
}

void UPalUserWidget::UnregisterActionBinding(FPalUIActionBindData& BindingData) {
}

void UPalUserWidget::RequestInventorySync(bool bOpen) const {
}

FPalUIActionBindData UPalUserWidget::RegisterActionBinding_NotConcume(const FName& ActionName, bool IsDisplayActionBar, TEnumAsByte<EInputEvent> InputType, FOnInputAction Callback) {
    return FPalUIActionBindData{};
}

FPalUIActionBindData UPalUserWidget::RegisterActionBinding(const FName& ActionName, bool IsDisplayActionBar, TEnumAsByte<EInputEvent> InputType, FOnInputAction Callback) {
    return FPalUIActionBindData{};
}

FGuid UPalUserWidget::Push(TSubclassOf<UPalUserWidgetOverlayUI> WidgetClass, UPalHUDDispatchParameterBase* Parameter) {
    return FGuid{};
}

void UPalUserWidget::PlayAkSound(UAkAudioEvent* AkEvent) {
}




bool UPalUserWidget::IsSameWidget(const FGuid& checkID) {
    return false;
}

UPalHUDDispatchParameterBase* UPalUserWidget::GetParam() const {
    return NULL;
}

UUserWidget* UPalUserWidget::FindParentWidget(TSubclassOf<UUserWidget> Class) {
    return NULL;
}

UPalUserWidget::UPalUserWidget() {
    this->bSyncPlayerInventory = false;
    this->Param = NULL;
}

