// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "V1GameMode.h"
#include "V1Character.h"
#include "UObject/ConstructorHelpers.h"

AV1GameMode::AV1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
