// Fill out your copyright notice in the Description page of Project Settings.


#include "NS_Character_Enemy.h"
#include "NS_Character_Farak.h"
#include "Kismet/GameplayStatics.h"

ANS_Character_Enemy::ANS_Character_Enemy()
{
	EnemyAggressionBox = CreateDefaultSubobject<UBoxComponent>("EnemyAggressionBox");
	EnemyAggressionBox->SetupAttachment(RootComponent);
}

void ANS_Character_Enemy::BeginPlay()
{
	Player = Cast<ANS_Character>(UGameplayStatics::GetActorOfClass(this, ANS_Character_Farak::StaticClass()));
	if (Player) {
		UE_LOG(LogTemp, Warning, TEXT("Hello from NS_Character_Enemy"));
	}
}

void ANS_Character_Enemy::EnterCombatMode()
{
	Super::EnterCombatMode();
	if (Player->CurrentEnemiesInCombatWith.Num() == 0) {
		Player->SetCurrentCombatState(ECombatState::InCombat);
	}
	Player->CurrentEnemiesInCombatWith.Add(this);
}

void ANS_Character_Enemy::EnterNeutralMode()
{
	Super::EnterNeutralMode();
	Player->CurrentEnemiesInCombatWith.Remove(this);
	if (Player->CurrentEnemiesInCombatWith.Num() == 0) {
		Player->SetCurrentCombatState(ECombatState::Neutral);
	}
}

void ANS_Character_Enemy::ToggleAggression(bool bIsAggressive)
{
}