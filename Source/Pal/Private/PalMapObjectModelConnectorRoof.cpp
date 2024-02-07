#include "PalMapObjectModelConnectorRoof.h"
#include "Net/UnrealNetwork.h"

void UPalMapObjectModelConnectorRoof::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectModelConnectorRoof, FrontConnectInfo);
    DOREPLIFETIME(UPalMapObjectModelConnectorRoof, BackConnectInfo);
    DOREPLIFETIME(UPalMapObjectModelConnectorRoof, LeftConnectInfo);
    DOREPLIFETIME(UPalMapObjectModelConnectorRoof, RightConnectInfo);
}

UPalMapObjectModelConnectorRoof::UPalMapObjectModelConnectorRoof() {
}

