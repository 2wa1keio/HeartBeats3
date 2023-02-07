// Copyright Epic Games, Inc. All Rights Reserved.

#include "HeartBeats3GameMode.h"
#include "HeartBeats3Character.h"
#include "UObject/ConstructorHelpers.h"

AHeartBeats3GameMode::AHeartBeats3GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
