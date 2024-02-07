#pragma once
#include "CoreMinimal.h"
#include "PalGameModeBase.h"
#include "PalGameMode.generated.h"

class UPocketpairUserInfo;

UCLASS(Blueprintable, NonTransient)
class PAL_API APalGameMode : public APalGameModeBase {
    GENERATED_BODY()
public:
    APalGameMode();
    UFUNCTION(BlueprintCallable)
    void RestartGame();
    
    UFUNCTION(BlueprintCallable)
    void RespawnPlayer(int32 PlayerIndex);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnServerLobbyUpdate() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void OnEOSLoginDedicatedServerComplete(const UPocketpairUserInfo* UserInfo, bool bSuccess, const FString& ErrorStr);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCompleteCreateSession(bool IsSuccess, const FString& ErrorStr);
    
    UFUNCTION(BlueprintCallable)
    void CreateSession(const FString& Address);
    
};

