// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "Prototype2GameMode.h"
#include "Prototype2Character.h"
#include "UObject/ConstructorHelpers.h"

APrototype2GameMode::APrototype2GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
