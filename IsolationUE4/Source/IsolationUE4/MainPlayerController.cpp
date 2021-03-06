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
			MapWidget->SetVisibility(ESlateVisibility::Hidden);
		}
	}
	if (WPauseMenu)
	{
		PauseMenu = CreateWidget<UUserWidget>(this, WPauseMenu);
		if (PauseMenu)
		{
			PauseMenu->AddToViewport();
			PauseMenu->SetVisibility(ESlateVisibility::Hidden);
		}
	}
	if (WAhogamiento)
	{
		Ahogamiento = CreateWidget<UUserWidget>(this, WAhogamiento);
		if (Ahogamiento)
		{
			Ahogamiento->AddToViewport();
			Ahogamiento->SetVisibility(ESlateVisibility::Hidden);
		}
	}
	if (Wmensaje)
	{
		Mensaje = CreateWidget<UUserWidget>(this, Wmensaje);
		if (Mensaje)
		{
			Mensaje->AddToViewport();
			Mensaje->SetVisibility(ESlateVisibility::Hidden);
		}
	}
	if (WInicioFinal)
	{
		InicioFinal = CreateWidget<UUserWidget>(this, WInicioFinal);
		if (InicioFinal)
		{
			InicioFinal->AddToViewport();
			InicioFinal->SetVisibility(ESlateVisibility::Hidden);
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

