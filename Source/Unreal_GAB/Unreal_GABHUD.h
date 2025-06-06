// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Unreal_GABHUD.generated.h"

UCLASS()
class AUnreal_GABHUD : public AHUD
{
	GENERATED_BODY()

public:
	AUnreal_GABHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

