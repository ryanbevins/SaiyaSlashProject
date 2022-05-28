// Fill out your copyright notice in the Description page of Project Settings.


#include "NS_Character.h"
#include "GameFramework/CharacterMovementComponent.h"

ANS_Character::ANS_Character()
{
	GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;
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
}

void ANS_Character::StopSprint()
{
	bIsSprinting = false;
	GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;
}
