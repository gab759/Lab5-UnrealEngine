// Copyright Epic Games, Inc. All Rights Reserved.

#include "Unreal_GABGameMode.h"
#include "Unreal_GABHUD.h"
#include "Unreal_GABCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnreal_GABGameMode::AUnreal_GABGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AUnreal_GABHUD::StaticClass();
}
