// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "BulletEncoreProjectGameMode.h"
#include "BulletEncoreProjectPawn.h"

ABulletEncoreProjectGameMode::ABulletEncoreProjectGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = ABulletEncoreProjectPawn::StaticClass();
}

