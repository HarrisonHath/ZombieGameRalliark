// Copyright Epic Games, Inc. All Rights Reserved.

#include "ZombieGameGameMode.h"
#include "ZombieGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AZombieGameGameMode::AZombieGameGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
