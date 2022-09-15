// Fill out your copyright notice in the Description page of Project Settings.


#include "NS_Character.h"
#include "GameFramework/SpringArmComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Camera/CameraComponent.h"
#include "Engine/Engine.h"
#include "Components/BoxComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

ANS_Character::ANS_Character()
{
	GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;
	CameraBoom->TargetArmLength = DefaultArmLength;
	HitBox = CreateDefaultSubobject<UBoxComponent>(TEXT("HitBox"));
	AttackBox = CreateDefaultSubobject<UBoxComponent>(TEXT("AttackBox"));
	HitBox->SetupAttachment(GetRootComponent());
	AttackBox->SetupAttachment(GetRootComponent());
	DefaultRotationRate = GetCharacterMovement()->RotationRate;
}

void ANS_Character::AttackBoxOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
}

void ANS_Character::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("Hello from NS_Character"));
	DefaultGravity = GetCharacterMovement()->GravityScale;
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

TArray<ANS_Character*> ANS_Character::SphereTraceForCharacters(float Distance, float Radius, bool DrawDebug)
{
	TArray<ANS_Character*> HitCharacters;

	FVector StartLocation = GetFollowCamera()->GetComponentLocation();
	FVector EndLocation = StartLocation + (GetFollowCamera()->GetForwardVector() * Distance);

	TArray<AActor*> ActorsToIgnore;
	TArray<FHitResult> Hits;

	UKismetSystemLibrary::SphereTraceMulti(this,
		StartLocation,
		EndLocation,
		Radius,
		UEngineTypes::ConvertToTraceType(ECC_Visibility),
		true,
		ActorsToIgnore,
		DrawDebug ? EDrawDebugTrace::Persistent : EDrawDebugTrace::None,
		Hits,
		true
		);

	for (FHitResult hit : Hits) {
		ANS_Character* HitActor = Cast<ANS_Character>(hit.GetActor());
		if (HitActor && HitActor != this) {
			HitCharacters.Add(HitActor);
		}
	}

	HitCharacters.Remove(this);

	return HitCharacters;
}

// TODO: Extract this as a function that will find nearest actor from any variable class.
ANS_Character* ANS_Character::GetNearestCharacter()
{
	TArray<AActor*> UnsortedArray;
	UGameplayStatics::GetAllActorsOfClass(this, ANS_Character::StaticClass(), UnsortedArray);

	AActor* NearestActor = NULL;

	UnsortedArray.Remove(this);

	// Sort by distance
	// TODO: Make this a part of a seperate helper class
	for (AActor* FoundActor : UnsortedArray) {
		if (!NearestActor) {
			NearestActor = FoundActor;
			continue;
		}
		if (FVector::Distance(this->GetActorLocation(), FoundActor->GetActorLocation()) < FVector::Distance(this->GetActorLocation(), NearestActor->GetActorLocation())) {
			NearestActor = FoundActor;
		}
	}

	return Cast<ANS_Character>(NearestActor);
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

void ANS_Character::EnableSteering(float SteeringAmount)
{
	GetCharacterMovement()->RotationRate = DefaultRotationRate * SteeringAmount;
}

void ANS_Character::EnterNovaMode()
{
	InNovaMode = true;
	
}

bool ANS_Character::TryBeginTargetting()
{
	OnTarget();
	return false;
}

// TODO: Implemented in child classesa, create some base functionality.
void ANS_Character::Target(AActor* ActorToTarget)
{
}

// TODO: Implemented in child classesa, create some base functionality.
void ANS_Character::EndTargetting()
{
}

void ANS_Character::ResetSteering()
{
	if (!IsAttacking)
		GetCharacterMovement()->RotationRate = DefaultRotationRate;
	else
		GetCharacterMovement()->RotationRate = FRotator(0, 0, 0);
}

void ANS_Character::SetInvincible(bool NewInvincible)
{
	Invincible = NewInvincible;
}

void ANS_Character::ContinueCombat()
{
	if (InComboWindow) {
		InComboWindow = false;
		AwaitingAttackAnimFinish = false;
		if ((Attacks.Num() - 1) != CurrentAttackIndex) {
			CurrentAttackIndex++;
		}
		else CurrentAttackIndex = 0;
		if (WaitingToAttack) {
			WaitingToAttack = false;
			Attack();
		}
		IsAttacking = false;
	}
}

void ANS_Character::ResetCombo()
{
	CurrentAttackIndex = 0;
	CanCancelAttack = false;
	IsAttacking = false;
	ResetSteering();
	//TODO: Make this work for sprinting as well
	GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;
	UE_LOG(LogTemp, Warning, TEXT("WalkSpeedFromEndCombat: %f"), WalkSpeed)
}

void ANS_Character::TakeDamage(float DamageAmount, UAnimMontage* Montage, FVector Launch)
{
	GetMesh()->GetAnimInstance()->Montage_Play(Montage, 1, EMontagePlayReturnType::Duration, 0, true);
	LaunchCharacter(Launch, false, false);
}

void ANS_Character::Attack()
{
	TArray<FAttack> AttacksToUse = GetCharacterMovement()->IsMovingOnGround() ? Attacks : AirAttacks;
	if (bIsSprinting && GetCharacterMovement()->IsMovingOnGround()) { 
		AttacksToUse = SprintAttacks;
		CurrentAttackIndex = 0;
	}
	if (!AwaitingAttackAnimFinish) {
		IsAttacking = true;
		GetCharacterMovement()->MaxWalkSpeed = 0;
		GetCharacterMovement()->RotationRate = FRotator(0,0,0);
		if(CurrentlyTargettedActor || CurrentEnemiesInCombatWith.Num() > 0) {
			AActor* ActorToTarget = CurrentlyTargettedActor ? CurrentlyTargettedActor : GetNearestCharacter();
			FRotator LookAtRot = (UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), ActorToTarget->GetActorLocation()));
			FRotator NewRotator = FRotator(0, LookAtRot.Yaw, 0);
			SetActorRotation(NewRotator);
		}
		GetMesh()->GetAnimInstance()->Montage_Play(AttacksToUse[CurrentAttackIndex].AttackMontage, 1, EMontagePlayReturnType::Duration, 0, true);
		AwaitingAttackAnimFinish = true;
		GetWorld()->GetTimerManager().SetTimer(AttackResetTimerHandle, this, &ANS_Character::ResetCombo, ComboResetTime);
	}
	else {
		if(CurrentAttackIndex != AttacksToUse.Num()-1 && InComboWindow)
			WaitingToAttack = true;
	}
}

void ANS_Character::EndCombat()
{
	GetMesh()->GetAnimInstance()->StopAllMontages(0.1f);
	AttackResetTimerHandle.Invalidate();
	WaitingToAttack = false;
	IsAttacking = false;
	AwaitingAttackAnimFinish = false;
	CurrentAttackIndex = 0;
	ResetSteering();
	//TODO: Make this work for sprinting as well
	GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;
	UE_LOG(LogTemp, Warning, TEXT("WalkSpeedFromEndCombat: %f"), WalkSpeed)
}

FAttack ANS_Character::GetCurrentAttack() 
{
	TArray<FAttack> AttacksToUse = GetCharacterMovement()->IsMovingOnGround() ? Attacks : AirAttacks;
	if (bIsSprinting && GetCharacterMovement()->IsMovingOnGround()) {
		AttacksToUse = SprintAttacks;
	}
	return AttacksToUse[CurrentAttackIndex];
}

