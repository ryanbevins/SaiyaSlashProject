// Fill out your copyright notice in the Description page of Project Settings.


#include "NS_Character.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

ANS_Character::ANS_Character()
{
	GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;
	CameraBoom->TargetArmLength = DefaultArmLength;
}

void ANS_Character::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("Hello from NS_Character"));
}

void ANS_Character::Sprint()
{
	bIsSprinting = true;
	GetCharacterMovement()->MaxWalkSpeed = SprintSpeed;
	CurrentDesiredArmLength = CurrentDesiredArmLength + ArmLengthDistanceChangeOnSprint;
	ZoomCamera(CurrentDesiredArmLength);
}

void ANS_Character::StopSprint()
{
	bIsSprinting = false;
	GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;
	CurrentDesiredArmLength = CurrentDesiredArmLength - ArmLengthDistanceChangeOnSprint;
	ZoomCamera(CurrentDesiredArmLength);
}

void ANS_Character::SetCurrentCombatState(ECombatState NewState)
{
	if (CurrentCombatState != NewState) {
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
}

void ANS_Character::EnterCombatMode()
{
	OnEnterCombatMode();
}

void ANS_Character::EnterNeutralMode()
{
	OnEnterNeutralMode();
}
