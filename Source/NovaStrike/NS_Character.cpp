// Fill out your copyright notice in the Description page of Project Settings.


#include "NS_Character.h"
#include "GameFramework/SpringArmComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "Camera/CameraComponent.h"
#include "Engine/Engine.h"
#include "GameFramework/CharacterMovementComponent.h"

ANS_Character::ANS_Character()
{
	GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;
	CameraBoom->TargetArmLength = DefaultArmLength;
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

bool ANS_Character::TryBeginTargetting()
{
	OnTarget();
	return false;
}

void ANS_Character::Target(AActor* ActorToTarget)
{
}

void ANS_Character::EndTargetting()
{
}
