// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "GP3_4_yusaku_uemaHUD.generated.h"

UCLASS()
class AGP3_4_yusaku_uemaHUD : public AHUD
{
	GENERATED_BODY()

public:
	AGP3_4_yusaku_uemaHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

