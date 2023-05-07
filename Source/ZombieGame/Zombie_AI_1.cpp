#include "Zombie.h"

// Sets default values
AZombie::AZombie()
{
    // Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    PawnSensingComp = CreateDefaultSubobject<UPawnSensingComponent>(TEXT("PawnSensingComp"));
    AIController = CreateDefaultSubobject<UAIController>(TEXT("AIController"));

    PawnSensingComp->OnSeePawn.AddDynamic(this, &AZombie::OnSeePlayer);
    PawnSensingComp->OnHearNoise.AddDynamic(this, &AZombie::OnHearNoise);
}

// Called when the game starts or when spawned
void AZombie::BeginPlay()
{
    Super::BeginPlay();

    if (AIController != nullptr)
    {
        AIController->Possess(this);
    }
}

// Called every frame
void AZombie::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void AZombie::OnSeePlayer(APawn* Pawn)
{
    // TODO: Implement zombie AI behavior when the player is seen
}

void AZombie::OnHearNoise(APawn* PawnInstigator, const FVector& Location, float Volume)
{
    // TODO: Implement zombie AI behavior when a noise is heard
}
