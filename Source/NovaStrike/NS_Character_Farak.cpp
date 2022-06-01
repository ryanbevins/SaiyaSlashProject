// Fill out your copyright notice in the Description page of Project Settings.

#include "GameFramework/SpringArmComponent.h"
#include "NS_Enum.h"
#include "NS_Character_Farak.h"

void ANS_Character_Farak::BeginPlay()
{
	Super::BeginPlay();
}

void ANS_Character_Farak::SetCurrentCombatState(ECombatState NewState)
{
	Super::SetCurrentCombatState(NewState);
}

void ANS_Character_Farak::EnterCombatMode()
{
	Super::EnterCombatMode();
	CurrentDesiredArmLength = CurrentDesiredArmLength + CombatArmLengthChange;
	ZoomCamera(CurrentDesiredArmLength);
}

void ANS_Character_Farak::EnterNeutralMode()
{
	Super::EnterNeutralMode();
	CurrentDesiredArmLength = CurrentDesiredArmLength - CombatArmLengthChange;
	ZoomCamera(CurrentDesiredArmLength);
}
