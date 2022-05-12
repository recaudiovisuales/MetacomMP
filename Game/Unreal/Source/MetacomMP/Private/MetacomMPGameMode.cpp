// Copyright Epic Games, Inc. All Rights Reserved.

#include "MetacomMPGameMode.h"
#include "MetacomMPCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMetacomMPGameMode::AMetacomMPGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
