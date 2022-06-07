// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NS_Character.h"
#include "Components/BoxComponent.h"
#include "NS_Character_Enemy.generated.h"

/**
 * 
 */
UCLASS()
class NOVASTRIKE_API ANS_Character_Enemy : public ANS_Character
{
	GENERATED_BODY()

protected:
	ANS_Character_Enemy();

	virtual void BeginPlay() override;
	virtual void EnterCombatMode() override;
	virtual void EnterNeutralMode() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Combat, meta = (AllowPrivateAccess = "true"))
	UBoxComponent* EnemyAggressionBox;

	ANS_Character* Player;

	// Should immediately become aggressive towards player and not await overlap with EnemyAggressionBox?
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool autoAggression;
	
};
