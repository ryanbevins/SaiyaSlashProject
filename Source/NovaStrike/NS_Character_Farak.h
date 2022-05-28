// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NS_Enum.h"
#include "NS_Character.h"
#include "NS_Character_Farak.generated.h"

/**
 * 
 */
UCLASS()
class NOVASTRIKE_API ANS_Character_Farak : public ANS_Character
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;
	virtual void SetCurrentPlayerState(ECombatState NewState) override;
	virtual void EnterCombatMode() override;
	virtual void EnterNeutralMode() override;

	// TODO: Change these to be additions rather than direct sets
	UPROPERTY(EditAnywhere, Category = "Camera")
	float CombatArmLength = 550;
	UPROPERTY(EditAnywhere, Category = "Camera")
	float NeutralArmLength = 400;
};