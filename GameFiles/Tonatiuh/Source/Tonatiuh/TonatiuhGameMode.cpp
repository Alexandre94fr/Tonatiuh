// Copyright Epic Games, Inc. All Rights Reserved.

#include "TonatiuhGameMode.h"
#include "TonatiuhCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATonatiuhGameMode::ATonatiuhGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
