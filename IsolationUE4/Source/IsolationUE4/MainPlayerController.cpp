// Fill out your copyright notice in the Description page of Project Settings.


#include "MainPlayerController.h"
#include "Blueprint/UserWidget.h"


void AMainPlayerController::BeginPlay()
{
	Super::BeginPlay();

	PosicionActualIndex = 4;

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
		FVector2D Aligment(0.5f, 0.5f);
		InteractWidget->SetAlignmentInViewport(Aligment);
	}
	if (WMapWidget)
	{
		MapWidget = CreateWidget<UUserWidget>(this, WMapWidget);
		if (MapWidget)
		{
			MapWidget->AddToViewport();
			MapWidget->SetVisibility(ESlateVisibility::Visible);
		}
	}
}

void AMainPlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (InteractWidget)
	{
		FVector2D PositionInViewport;
		ProjectWorldLocationToScreen(InteractLocation, PositionInViewport);
	//	PositionInViewport.Y -= 80.f;

		FVector2D SizeInViewport(100.f, 100.f);

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

void AMainPlayerController::ShowMap()
{
	if (MapWidget)
	{
		MapWidget->SetVisibility(ESlateVisibility::Visible);
	}
}

void AMainPlayerController::HideMap()
{
	if (MapWidget)
	{
		MapWidget->SetVisibility(ESlateVisibility::Hidden);
	}
}

