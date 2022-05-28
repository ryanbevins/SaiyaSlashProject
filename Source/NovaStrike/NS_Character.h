// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NovaStrikeCharacter.h"
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

	UPROPERTY(BlueprintReadOnly, Category="Movement")
	bool bIsSprinting;
	UPROPERTY(EditAnywhere, Category = "Movement")
	float SprintSpeed = 1100;
	UPROPERTY(EditAnywhere, Category = "Movement")
	float WalkSpeed = 900;

	UFUNCTION(BlueprintCallable, Category = "Movement")
	void Sprint();
	UFUNCTION(BlueprintCallable, Category = "Movement")
	void StopSprint();
};
