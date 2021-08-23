// Copyright Epic Games, Inc. All Rights Reserved.

#include "NinjaGodGameMode.h"
#include "NinjaGodCharacter.h"
#include "UObject/ConstructorHelpers.h"

ANinjaGodGameMode::ANinjaGodGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
