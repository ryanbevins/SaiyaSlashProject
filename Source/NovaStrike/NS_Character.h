// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NovaStrikeCharacter.h"
#include "NS_Enum.h"
#include "NS_Character.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct FAttack
{
	GENERATED_BODY()

	// Attack montage to use
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attack")
	UAnimMontage* AttackMontage;
	// Enemy hit reaciton montage to use
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attack")
	UAnimMontage* EnemyHitReaction;
	// CameraShake to use
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attack")
	TSubclassOf<UCameraShakeBase> CameraShake;
	// Launch force to use
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attack")
	FVector2D LaunchForce;
	// Knockback to apply to enemy
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attack")
	FVector2D Knockback;
	// Gravity to apply to hit enemy and player
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attack")
	float NewGravity;
};



UCLASS()
class NOVASTRIKE_API ANS_Character : public ANovaStrikeCharacter
{
	GENERATED_BODY()

public:
	ANS_Character();
	UFUNCTION(BlueprintCallable, Category = "Combat")
	virtual void SetCurrentCombatState(ECombatState NewState);

	UPROPERTY(BlueprintReadOnly, Category = "Combat")
	TArray<ANS_Character*> CurrentEnemiesInCombatWith;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Combat, meta = (AllowPrivateAccess = "true"))
	class UBoxComponent* HitBox;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Combat, meta = (AllowPrivateAccess = "true"))
	class UBoxComponent* AttackBox;

	UFUNCTION()
	void AttackBoxOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

protected:
	virtual void BeginPlay() override;

	UPROPERTY(BlueprintReadOnly, Category="Movement")
	bool bIsSprinting;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement")
	float SprintSpeed = 1100;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement")
	float WalkSpeed = 900;
	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	float DefaultGravity;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Camera")
	float ArmLengthDistanceChangeOnSprint = 100;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Camera")
	float DefaultArmLength = 400;
	// Zoom Speed for arm length changes(1 = 1 second, 0.5 = 2 seconds, 2 = 0.5 seconds, etc).
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Camera")
	float CameraZoomSpeed = 1;
	// Zoom Speed for arm length changes(1 = 1 second, 0.5 = 2 seconds, 2 = 0.5 seconds, etc).
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Combat")
	TArray<FAttack> Attacks;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Combat")
	TArray<FAttack> AirAttacks;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Combat")
	TArray<FAttack> SprintAttacks;
	UPROPERTY(BlueprintReadWrite, Category = "Combat")
	int CurrentAttackIndex;
	UPROPERTY(BlueprintReadWrite, Category = "Combat")
	bool WaitingToAttack;
	UPROPERTY(BlueprintReadWrite, Category = "Combat")
	TArray<ANS_Character*> ActorsInAttackRange;
	UPROPERTY(EditAnywhere, Category = "Combat")
	float ComboResetTime = 2.f;

	UPROPERTY(BlueprintReadOnly, Category = "Combat")
	AActor* CurrentlyTargettedActor;

	float CurrentDesiredArmLength = DefaultArmLength;
	FVector ArmLocationDefaultOffset;

	UFUNCTION(BlueprintCallable, Category = "Movement")
	void Sprint();
	UFUNCTION(BlueprintCallable, Category = "Movement")
	void StopSprint();
	UFUNCTION(BlueprintCallable, Category = "General")
	TArray<ANS_Character*> SphereTraceForCharacters(float Distance, float Radius, bool DrawDebug);
	UFUNCTION(BlueprintCallable, Category = "General")
	ANS_Character* GetNearestCharacter();
	UFUNCTION(BlueprintCallable, Category = "Combat")
	void Attack();
	UFUNCTION(BlueprintCallable, Category = "Combat")
	void EndCombat();

	UFUNCTION(BlueprintImplementableEvent, Category = "Camera")
	void ZoomCamera(float DesiredArmLength);
	UFUNCTION(BlueprintImplementableEvent, Category = "Combat")
	void OnEnterCombatMode();
	UFUNCTION(BlueprintImplementableEvent, Category = "Combat")
	void OnEnterNeutralMode();
	UFUNCTION(BlueprintImplementableEvent, Category = "Combat")
	void OnTarget();
	UFUNCTION(BlueprintCallable, Category = "Combat")
	void ContinueCombat();
	UFUNCTION(BlueprintCallable, Category = "Combat")
	void ResetCombo();
	UFUNCTION(BlueprintCallable, Category = "Combat")
	void TakeDamage(float DamageAmount, UAnimMontage* Montage, FVector Launch);

	// TODO: Take in class reference for targetting based on specific class after converting "GetNearestCharacter()" to be used for any variable class.
	// Try targetting based on camera direction, returns true if is now targetting.
	UFUNCTION(BlueprintCallable, Category = "Camera")
	virtual bool TryBeginTargetting();


	virtual void EnterCombatMode();
	virtual void EnterNeutralMode();
	virtual void Target(AActor* ActorToTarget);
	virtual void EndTargetting();

	FTimerHandle AttackResetTimerHandle;
};
