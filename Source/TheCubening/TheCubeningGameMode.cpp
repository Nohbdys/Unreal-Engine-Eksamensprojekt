// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "TheCubeningGameMode.h"
#include "TheCubeningHUD.h"
#include "TheCubeningCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATheCubeningGameMode::ATheCubeningGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATheCubeningHUD::StaticClass();
}
