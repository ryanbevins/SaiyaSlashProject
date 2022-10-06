// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "NS_Enum.h"
#include "NovaStrikeCharacter.generated.h"



UCLASS(config=Game)
class ANovaStrikeCharacter : public ACharacter
{
	GENERATED_BODY()
public:
	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;
	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;
	ANovaStrikeCharacter();

	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Input)
	float TurnRateGamepad;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Combat)
	ECombatState CurrentCombatState;

	UPROPERTY(BlueprintReadWrite, Category = "Combat")
	bool AwaitingAttackAnimFinish;

	UPROPERTY(BlueprintReadWrite, Category = "Combat")
	bool IsAttacking;

	UPROPERTY(BlueprintReadWrite, Category = "Combat")
	bool CanCancelAttack;
	
	UPROPERTY(BlueprintReadWrite, Category = "Combat")
	ECombatType CurrentCombatType;

	// TODO: Bad variable used in anim notify for movement during animation during attack, should be removed
	UPROPERTY(BlueprintReadWrite, Category = "Combat")
	bool Moved;

	UPROPERTY(BlueprintReadWrite, Category = "Movement")
	bool CanMove = true;


protected:

	/** Called for forwards/backward input */
	void MoveForward(float Value);

	/** Called for side to side input */
	void MoveRight(float Value);

	/** 
	 * Called via input to turn at a given rate. 
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void TurnAtRate(float Rate);

	/**
	 * Called via input to turn look up/down at a given rate. 
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void LookUpAtRate(float Rate);

	/** Handler for when a touch input begins. */
	void TouchStarted(ETouchIndex::Type FingerIndex, FVector Location);

	/** Handler for when a touch input stops. */
	void TouchStopped(ETouchIndex::Type FingerIndex, FVector Location);

	void StartJumpInput();

	void StartJump();

	void StartNova();
	void EndNova();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void OnStartJump();
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void OnStartNova();
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void OnEndNova();
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void OnNovaBlast();




protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	// End of APawn interface

public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }

};

