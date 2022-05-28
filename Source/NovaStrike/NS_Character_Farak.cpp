// Fill out your copyright notice in the Description page of Project Settings.

#include "GameFramework/SpringArmComponent.h"
#include "NS_Enum.h"
#include "NS_Character_Farak.h"

void ANS_Character_Farak::BeginPlay()
{
	Super::BeginPlay();
}

void ANS_Character_Farak::SetCurrentPlayerState(ECombatState NewState)
{
	Super::SetCurrentPlayerState(NewState);
	CurrentCombatState = NewState;
	switch (NewState)
	{
	case ECombatState::Neutral:
		EnterNeutralMode();
		break;
	case ECombatState::InCombat:
		EnterCombatMode();
		break;
	}
}

void ANS_Character_Farak::EnterCombatMode()
{
	Super::EnterCombatMode();
	CameraBoom->TargetArmLength = CombatArmLength;
}

void ANS_Character_Farak::EnterNeutralMode()
{
	Super::EnterNeutralMode();
	CameraBoom->TargetArmLength = NeutralArmLength;
}
