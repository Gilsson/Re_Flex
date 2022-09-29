// Copyright Epic Games, Inc. All Rights Reserved.

#include "Re_Flex_ProjGameMode.h"
#include "Re_Flex_ProjHUD.h"
#include "Re_Flex_ProjCharacter.h"
#include "AIController.h"
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

void ARe_Flex_ProjGameMode::StartPlay()
{
	Super::StartPlay();
	SpawnBot();
}

void ARe_Flex_ProjGameMode::SpawnBot()
{
	if(!GetWorld()) return;
	
		for(int32 i = 0; i < GameData.Player - 1; i++)
		{
			FActorSpawnParameters SpawnInfo;
			SpawnInfo.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
			const auto ReAIController = GetWorld()->SpawnActor<AAIController>(AIControllerClass, SpawnInfo);
			RestartPlayer(ReAIController);
		}
	
}
