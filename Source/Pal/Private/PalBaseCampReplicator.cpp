#include "PalBaseCampReplicator.h"
#include "Net/UnrealNetwork.h"

void UPalBaseCampReplicator::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalBaseCampReplicator, RepInfoArray);
}

UPalBaseCampReplicator::UPalBaseCampReplicator() {
}

