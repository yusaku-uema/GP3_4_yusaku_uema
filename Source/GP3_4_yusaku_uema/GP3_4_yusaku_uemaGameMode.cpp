// Copyright Epic Games, Inc. All Rights Reserved.

#include "GP3_4_yusaku_uemaGameMode.h"
#include "GP3_4_yusaku_uemaHUD.h"
#include "GP3_4_yusaku_uemaCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGP3_4_yusaku_uemaGameMode::AGP3_4_yusaku_uemaGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AGP3_4_yusaku_uemaHUD::StaticClass();
}
