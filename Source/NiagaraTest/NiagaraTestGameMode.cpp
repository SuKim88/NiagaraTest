// Copyright Epic Games, Inc. All Rights Reserved.

#include "NiagaraTestGameMode.h"
#include "NiagaraTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

ANiagaraTestGameMode::ANiagaraTestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
