// Fill out your copyright notice in the Description page of Project Settings.


#include "MainPlayerController.h"
#include "Blueprint/UserWidget.h"


void AMainPlayerController::BeginPlay()
{
	Super::BeginPlay();

	if (HUDOverlayAsset) {

		HUDOverlay = CreateWidget<UUserWidget>(this, HUDOverlayAsset);
	}
	HUDOverlay->AddToViewport();
	HUDOverlay->SetVisibility(ESlateVisibility::Visible);

	if (WInteractWidget)
	{
		InteractWidget = CreateWidget<UUserWidget>(this, WInteractWidget);
		if (InteractWidget)
		{
			InteractWidget->AddToViewport();
			InteractWidget->SetVisibility(ESlateVisibility::Hidden);
		}
		FVector2D Aligment(0.f, 0.f);
		InteractWidget->SetAlignmentInViewport(Aligment);
	}
}

void AMainPlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (InteractWidget)
	{
		FVector2D PositionInViewport;
		ProjectWorldLocationToScreen(InteractLocation, PositionInViewport);
		PositionInViewport.Y -= 80.f;

		FVector2D SizeInViewport(150.f, 150.f);

		InteractWidget->SetPositionInViewport(PositionInViewport);
		InteractWidget->SetDesiredSizeInViewport(SizeInViewport);
	}
}

void AMainPlayerController::DisplayInteractWidget()
{
	if (InteractWidget)
	{
		bDisplayInteractWidget = true;
		InteractWidget->SetVisibility(ESlateVisibility::Visible);
	}
}

void AMainPlayerController::RemoveInteractWidget()
{
	if (InteractWidget)
	{
		bDisplayInteractWidget = false;
		InteractWidget->SetVisibility(ESlateVisibility::Hidden);
	}
}

