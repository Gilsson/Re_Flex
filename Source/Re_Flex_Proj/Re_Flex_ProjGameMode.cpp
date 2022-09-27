// Copyright Epic Games, Inc. All Rights Reserved.

#include "Re_Flex_ProjGameMode.h"
#include "Re_Flex_ProjHUD.h"
#include "Re_Flex_ProjCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARe_Flex_ProjGameMode::ARe_Flex_ProjGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ARe_Flex_ProjHUD::StaticClass();
}
