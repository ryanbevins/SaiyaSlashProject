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
	// Enemy hit reaciton montage to use in air
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attack")
	UAnimMontage* EnemyHitReactionInAir;
	// CameraShake to use
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attack")
	TSubclassOf<UCameraShakeBase> CameraShake;
	// Forcefeedback to use during anim montage notify
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attack")
	UForceFeedbackEffect* ForceFeedbackNotify;
	// Launch force to use
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attack")
	FVector2D LaunchForce;
	// Knockback to apply to enemy
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attack")
	FVector2D Knockback;
	// Damage to apply to enemy(in range between 0 to 1, with 1 being 100% of the enemies health)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attack")
	float Damage;
	// Gravity to apply to hit enemy and player
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attack")
	float NewGravity;
	// Steering scale to apply to player after anim montage notify
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attack")
	float SteeringScale;
	// Position offset to apply to hitbox
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attack")
	FVector HitBoxPositionOffset;
	// Scaling to apply to hitbox
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attack")
	float HitBoxScale;
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
	// Health float value between 0 and 1
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat")
	float Health = 1;
	// Temperature float value between 0 and 1
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat")
	float Temperature = 0;
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
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Combat")
	TArray<FAttack> LaunchAttacks;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Combat")
	TArray<FAttack> AttacksToUse;
	UPROPERTY(BlueprintReadWrite, Category = "Combat")
	int CurrentAttackIndex;
	UPROPERTY(BlueprintReadWrite, Category = "Combat")
	bool WaitingToAttack;
	UPROPERTY(BlueprintReadWrite, Category = "Combat")
	TArray<ANS_Character*> ActorsInAttackRange;
	UPROPERTY(BlueprintReadWrite, Category = "Combat")
	bool InComboWindow;
	UPROPERTY(BlueprintReadWrite, Category = "Combat")
	bool Invincible;
	UPROPERTY(BlueprintReadWrite, Category = "Combat")
	bool InAir;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Combat")
	float ComboResetTime = 2.f;
	UPROPERTY(BlueprintReadWrite, Category = "Combat")
	bool Stunned;
	// Time stunned after attack
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat")
	float StunTime;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Camera")
	float DefaultCameraTurnRate = 50.f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Camera")
	float AimingCameraTurnRate = 25.f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Gun")
	float WalkSpeedGunMode = 270.f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Gun")
	float GunLinetraceLength = 9999.f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Gun")
	UAnimMontage* FireMontage;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Gun")
	float ExtractionSpeed = 0.25f;
	UPROPERTY(BlueprintReadWrite, Category = "Gun")
	AActor* AttachedActorGun;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Gun")
	bool CanAttackDuringAiming;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Gun")
	bool CanMoveWhenExtracting;
	// how fast does the player switch between the gun and sword (anim interpolation speed)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Gun")
	float AimChangeRate;


	UPROPERTY(BlueprintReadOnly, Category = "Combat")
	AActor* CurrentlyTargettedActor;

	float CurrentDesiredArmLength = DefaultArmLength;
	FVector ArmLocationDefaultOffset;

	FRotator DefaultRotationRate;

	UFUNCTION(BlueprintCallable, Category = "Movement")
	void Sprint();
	UFUNCTION(BlueprintCallable, Category = "Movement")
	void StopSprint();
	UFUNCTION(BlueprintCallable, Category = "General")
	TArray<ANS_Character*> SphereTraceForCharacters(float Distance, float Radius, bool DrawDebug);
	UFUNCTION(BlueprintCallable, Category = "General")
	ANS_Character* GetNearestCharacter();
	UFUNCTION(BlueprintCallable, Category = "Combat")
	void Attack(TArray<FAttack> SpecifiedAttack);
	UFUNCTION(BlueprintCallable, Category = "Combat")
	void EndCombat();
	UFUNCTION(BlueprintCallable, Category = "Combat")
	FAttack GetCurrentAttack();
	UFUNCTION(BlueprintCallable, Category = "Combat")
	void Die();
	UFUNCTION(BlueprintCallable, Category = "Combat")
	void Stun();
	UFUNCTION(BlueprintCallable, Category = "Combat")
	void EndStun();
	UFUNCTION(BlueprintCallable, Category = "Gun")
	void BeginGunCombat();
	UFUNCTION(BlueprintCallable, Category = "Gun")
	void EndGunCombat();
	UFUNCTION(BlueprintCallable, Category = "Gun")
	void Fire();
	UFUNCTION(BlueprintCallable, Category = "Gun")
	void Extract();
	UFUNCTION(BlueprintCallable, Category = "Gun")
	void StopExtract();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Camera")
	void ZoomCamera(float DesiredArmLength);
	UFUNCTION(BlueprintImplementableEvent, Category = "Combat")
	void OnEnterCombatMode();
	UFUNCTION(BlueprintImplementableEvent, Category = "Combat")
	void OnEnterNeutralMode();
	UFUNCTION(BlueprintImplementableEvent, Category = "Combat")
	void OnTarget();
	UFUNCTION(BlueprintImplementableEvent, Category = "Combat")
	void OnDeath();
	UFUNCTION(BlueprintImplementableEvent, Category = "Combat")
	void OnStun();
	UFUNCTION(BlueprintImplementableEvent, Category = "Combat")
	void OnStunEnd();
	UFUNCTION(BlueprintImplementableEvent, Category = "Gun")
	void OnBeginGunMode();
	UFUNCTION(BlueprintImplementableEvent, Category = "Gun")
	void OnEndGunMode();
	UFUNCTION(BlueprintImplementableEvent, Category = "Gun")
	void OnFire();
	UFUNCTION(BlueprintImplementableEvent, Category = "Gun")
	void OnExtract();
	UFUNCTION(BlueprintImplementableEvent, Category = "Gun")
	void OnStopExtract();
	UFUNCTION(BlueprintCallable, Category = "Combat")
	void ContinueCombat();
	UFUNCTION(BlueprintCallable, Category = "Combat")
	void ResetCombo();
	UFUNCTION(BlueprintCallable, Category = "Combat")
	void TakeDamage(float DamageAmount, UAnimMontage* Montage, FVector Launch);
	UFUNCTION(BlueprintCallable, Category = "Combat")
	void EnableSteering(float SteeringAmount);
	UFUNCTION(BlueprintCallable, Category = "Combat")
	void ResetSteering();
	UFUNCTION(BlueprintCallable, Category = "Combat")
	void SetInvincible(bool NewInvincible);

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
