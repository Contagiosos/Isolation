// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "IsolationUE4Character.h"
#include "UObject/ConstructorHelpers.h"
#include "Camera/CameraComponent.h"
#include "Components/DecalComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/SpringArmComponent.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Materials/Material.h"
#include "Engine/World.h"
#include "Interactuable.h"

AIsolationUE4Character::AIsolationUE4Character()
{
	// Set size for player capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// Don't rotate character to camera direction
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Rotate character to moving direction
	GetCharacterMovement()->RotationRate = FRotator(0.f, 640.f, 0.f);
	GetCharacterMovement()->bConstrainToPlane = true;
	GetCharacterMovement()->bSnapToPlaneAtStart = true;

	// Create a camera boom...
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->bAbsoluteRotation = true; // Don't want arm to rotate when character does
	CameraBoom->TargetArmLength = 800.f;
	CameraBoom->RelativeRotation = FRotator(-60.f, 0.f, 0.f);
	CameraBoom->bDoCollisionTest = false; // Don't want to pull camera in when it collides with level

	// Create a camera...
	TopDownCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("TopDownCamera"));
	TopDownCameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	TopDownCameraComponent->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// Activate ticking in order to update the cursor every frame.
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;
}

void AIsolationUE4Character::Tick(float DeltaSeconds)
{
    Super::Tick(DeltaSeconds);

}
void AIsolationUE4Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	check(PlayerInputComponent);//si no funciona, para el código

	PlayerInputComponent->BindAxis("MoveForward", this, &AIsolationUE4Character::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AIsolationUE4Character::MoveRight);

	PlayerInputComponent->BindAction("Interact",IE_Pressed , this, &AIsolationUE4Character::Interact);
}

void AIsolationUE4Character::Interact()
{
	if (InteractuableActual)
	{
		InteractuableActual->Interaccion();
	}
}

void AIsolationUE4Character::MoveForward(float value)
{
	//const FRotator Rotation = Controller->GetControlRotation();
	const FRotator Rotation = CameraBoom->GetComponentRotation();
	const FRotator YawRotation(0.f, Rotation.Yaw, 0.0f);
	const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);

	AddMovementInput(Direction, value);	
}


void AIsolationUE4Character::MoveRight(float value)
{
	//const FRotator Rotation = Controller->GetControlRotation();
	const FRotator Rotation = CameraBoom->GetComponentRotation();
	const FRotator YawRotation(0.f, Rotation.Yaw, 0.0f);
	const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

	AddMovementInput(Direction, value);
}