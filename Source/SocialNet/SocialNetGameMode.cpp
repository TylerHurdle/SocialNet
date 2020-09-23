// Copyright Epic Games, Inc. All Rights Reserved.

#include "SocialNetGameMode.h"
#include "SocialNetCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASocialNetGameMode::ASocialNetGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
