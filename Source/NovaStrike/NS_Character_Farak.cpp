// Fill out your copyright notice in the Description page of Project Settings.

#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "NS_Enum.h"
#include "NS_Character_Farak.h"

void ANS_Character_Farak::BeginPlay()
{
	Super::BeginPlay();
	ArmLocationDefaultOffset = CameraBoom->GetRelativeLocation();
}

void ANS_Character_Farak::Tick(float DeltaTime)
{
	if (CurrentlyTargettedActor) {
		Target(CurrentlyTargettedActor);
	}
}

void ANS_Character_Farak::SetCurrentCombatState(ECombatState NewState)
{
	Super::SetCurrentCombatState(NewState);
}

void ANS_Character_Farak::EnterCombatMode()
{
	Super::EnterCombatMode();
	CurrentDesiredArmLength = CurrentDesiredArmLength + CombatArmLengthChange;
	ZoomCamera(CurrentDesiredArmLength);
}

void ANS_Character_Farak::EnterNeutralMode()
{
	Super::EnterNeutralMode();
	CurrentDesiredArmLength = CurrentDesiredArmLength - CombatArmLengthChange;
	ZoomCamera(CurrentDesiredArmLength);
}

bool ANS_Character_Farak::TryBeginTargetting()
{
	// TODO: Make variables
	TArray<ANS_Character*> CharactersHit = SphereTraceForCharacters(9001, 240, false);
	OnTarget();
	if (!DummyTargetActor) {
		DummyTargetActor = GetWorld()->SpawnActor<AActor>(ActorToSpawn, FVector(), FRotator());
	}
	
	if (CharactersHit.Num() > 0) {
		if (CharactersHit[0] == CurrentlyTargettedActor) {
			EndTargetting();
			return false;
		}
		CurrentlyTargettedActor = CharactersHit[0];
		GetController()->SetControlRotation(UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), CurrentlyTargettedActor->GetActorLocation()));
		return true;
	}

	else {
		if (CurrentlyTargettedActor) {
			EndTargetting();
			return false;
		}
		CurrentlyTargettedActor = GetNearestCharacter();
		if (CurrentlyTargettedActor) return true;
	}
	EndTargetting();
	return false;
}

void ANS_Character_Farak::Target(AActor* ActorToTarget)
{
	float DistanceToEnemy = UKismetMathLibrary::MapRangeClamped(GetDistanceTo(ActorToTarget), 0, 2000, 0.5, 0);

	FVector PlayerLocationMinusActorLocation = GetActorLocation() - CurrentlyTargettedActor->GetActorLocation();
	
	float Product1 = PlayerLocationMinusActorLocation.Length() * DistanceToEnemy;
	FVector NormalizedPlayerLocationMinusActorLocation = PlayerLocationMinusActorLocation;
	NormalizedPlayerLocationMinusActorLocation.Normalize();

	FVector CompleteProduct = Product1 * NormalizedPlayerLocationMinusActorLocation;
	
	FVector NewLocation = GetActorLocation() - CompleteProduct;
	DummyTargetActor->SetActorLocation(NewLocation);

	if (GetCameraBoom()->GetAttachParent() != DummyTargetActor->GetRootComponent()) {
		FRotator LookAtRotationXZ = UKismetMathLibrary::FindLookAtRotation(GetFollowCamera()->GetComponentLocation(), NewLocation);
		float LookAtRotationY = CameraPitchOnTarget;
		GetController()->SetControlRotation(FRotator(LookAtRotationY, LookAtRotationXZ.Yaw, LookAtRotationXZ.Roll));
		GetCameraBoom()->SetRelativeLocation(FVector(0, 0, 0));
		GetCameraBoom()->AttachToComponent(DummyTargetActor->GetRootComponent(), FAttachmentTransformRules(EAttachmentRule::KeepRelative, EAttachmentRule::KeepRelative, EAttachmentRule::KeepRelative, false));
	}
}

void ANS_Character_Farak::EndTargetting()
{
	GetCameraBoom()->AttachToComponent(GetRootComponent(), FAttachmentTransformRules(EAttachmentRule::KeepRelative, EAttachmentRule::KeepRelative, EAttachmentRule::KeepRelative, false));
	CurrentlyTargettedActor = nullptr;
	DummyTargetActor->Destroy();
	DummyTargetActor = nullptr;
	GetCameraBoom()->SetRelativeLocation(ArmLocationDefaultOffset);
}
