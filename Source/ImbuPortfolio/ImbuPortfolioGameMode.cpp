// Copyright Epic Games, Inc. All Rights Reserved.

#include "ImbuPortfolioGameMode.h"
#include "ImbuPortfolioCharacter.h"
#include "UObject/ConstructorHelpers.h"

AImbuPortfolioGameMode::AImbuPortfolioGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
