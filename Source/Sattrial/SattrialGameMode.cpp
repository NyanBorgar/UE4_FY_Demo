// Copyright Epic Games, Inc. All Rights Reserved.

#include "SattrialGameMode.h"
#include "SattrialCharacter.h"

ASattrialGameMode::ASattrialGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = ASattrialCharacter::StaticClass();
}
