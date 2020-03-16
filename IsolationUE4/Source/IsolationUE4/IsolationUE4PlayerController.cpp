// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "IsolationUE4PlayerController.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "Runtime/Engine/Classes/Components/DecalComponent.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "IsolationUE4Character.h"
#include "Engine/World.h"

AIsolationUE4PlayerController::AIsolationUE4PlayerController()
{
	bShowMouseCursor = true;
	DefaultMouseCursor = EMouseCursor::Crosshairs;
}

void AIsolationUE4PlayerController::PlayerTick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);

	// keep updating the destination every tick while desired
}

void AIsolationUE4PlayerController::SetupInputComponent()
{
	// set up gameplay key bindings
	Super::SetupInputComponent();

	InputComponent->BindAction("ResetVR", IE_Pressed, this, &AIsolationUE4PlayerController::OnResetVR);
}

void AIsolationUE4PlayerController::OnResetVR()
{
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
}

