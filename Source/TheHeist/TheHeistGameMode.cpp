// Copyright Epic Games, Inc. All Rights Reserved.

#include "TheHeistGameMode.h"
#include "TheHeistCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATheHeistGameMode::ATheHeistGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
