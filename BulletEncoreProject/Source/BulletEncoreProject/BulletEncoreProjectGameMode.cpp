// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "BulletEncoreProjectGameMode.h"
#include "PlayerPawn.h"

ABulletEncoreProjectGameMode::ABulletEncoreProjectGameMode()
{
	// Sets the default pawn class to our player pawn class
	DefaultPawnClass = APlayerPawn::StaticClass();
}

