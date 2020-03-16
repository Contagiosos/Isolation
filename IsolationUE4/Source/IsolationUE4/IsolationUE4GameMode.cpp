// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "IsolationUE4GameMode.h"
#include "IsolationUE4PlayerController.h"
#include "IsolationUE4Character.h"
#include "UObject/ConstructorHelpers.h"

AIsolationUE4GameMode::AIsolationUE4GameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AIsolationUE4PlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}