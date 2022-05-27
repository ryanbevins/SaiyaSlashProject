// Copyright Epic Games, Inc. All Rights Reserved.

#include "NovaStrikeGameMode.h"
#include "NovaStrikeCharacter.h"
#include "UObject/ConstructorHelpers.h"

ANovaStrikeGameMode::ANovaStrikeGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
