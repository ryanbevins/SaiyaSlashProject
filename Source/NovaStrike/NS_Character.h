// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NovaStrikeCharacter.h"
#include "NS_Enum.h"
#include "NS_Character.generated.h"

/**
 * 
 */
UCLASS()
class NOVASTRIKE_API ANS_Character : public ANovaStrikeCharacter
{
	GENERATED_BODY()

public:
	ANS_Character();

protected:
	virtual void BeginPlay() override;

	UPROPERTY(BlueprintReadOnly, BlueprintReadOnly, Category="Movement")
	bool bIsSprinting;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement")
	float SprintSpeed = 1100;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement")
	float WalkSpeed = 900;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Camera")
	float ArmLengthDistanceChangeOnSprint = 100;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Camera")
	float DefaultArmLength = 400;
	// Zoom Speed for arm length changes(1 = 1 second, 0.5 = 2 seconds, 2 = 0.5 seconds, etc).
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Camera")
	float CameraZoomSpeed = 1;

	UFUNCTION(BlueprintCallable, Category = "Movement")
	void Sprint();
	UFUNCTION(BlueprintCallable, Category = "Movement")
	void StopSprint();

	UFUNCTION(BlueprintImplementableEvent, Category = "Camera")
	void ZoomCamera(float DesiredArmLength);

	float CurrentDesiredArmLength = DefaultArmLength;

	virtual void SetCurrentPlayerState(ECombatState NewState);
	virtual void EnterCombatMode();
	virtual void EnterNeutralMode();
};
