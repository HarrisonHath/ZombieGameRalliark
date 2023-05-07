#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Perception/PawnSensingComponent.h"
#include "AIController.h"
#include "Zombie.generated.h"

UCLASS()
class ZOMBIEGAME_API AZombie : public ACharacter
{
    GENERATED_BODY()

public:
    // Sets default values for this character's properties
    AZombie();

    // Called every frame
    virtual void Tick(float DeltaTime) override;

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

private:
    UPROPERTY(VisibleAnywhere)
        UPawnSensingComponent* PawnSensingComp;

    UPROPERTY(VisibleAnywhere)
        UAIController* AIController;

    UFUNCTION()
        void OnSeePlayer(APawn* Pawn);

    UFUNCTION()
        void OnHearNoise(APawn* PawnInstigator, const FVector& Location, float Volume);
};
