#include "PalMapObjectModelConnectorFoundation.h"
#include "Net/UnrealNetwork.h"

void UPalMapObjectModelConnectorFoundation::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectModelConnectorFoundation, FrontConnectInfo);
    DOREPLIFETIME(UPalMapObjectModelConnectorFoundation, BackConnectInfo);
    DOREPLIFETIME(UPalMapObjectModelConnectorFoundation, LeftConnectInfo);
    DOREPLIFETIME(UPalMapObjectModelConnectorFoundation, RightConnectInfo);
}

UPalMapObjectModelConnectorFoundation::UPalMapObjectModelConnectorFoundation() {
}

