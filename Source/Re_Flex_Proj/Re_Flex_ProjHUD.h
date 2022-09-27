// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Re_Flex_ProjHUD.generated.h"

UCLASS()
class ARe_Flex_ProjHUD : public AHUD
{
	GENERATED_BODY()

public:
	ARe_Flex_ProjHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

