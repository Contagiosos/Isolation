// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MainPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class ISOLATIONUE4_API AMainPlayerController : public APlayerController
{
	GENERATED_BODY()

public:


	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Spawning")
	TArray<TSubclassOf<class ANivel>> LevelsToSpawn;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Spawning")
	TArray<TSubclassOf<class ANivel>> IMPORTANTLevelsToSpawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widgets")
	TSubclassOf<class UUserWidget> HUDOverlayAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widgets")
	UUserWidget* HUDOverlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widgets")
	TSubclassOf<UUserWidget> WInteractWidget;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Widgets")
	UUserWidget* InteractWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widgets")
	TSubclassOf<UUserWidget> WMapWidget;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Widgets")
	UUserWidget* MapWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widgets")
	TSubclassOf<UUserWidget> WPauseMenu;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Widgets")
	UUserWidget* PauseMenu;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widgets")
	TSubclassOf<UUserWidget> WAhogamiento;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Widgets")
	UUserWidget* Ahogamiento;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widgets")
	TSubclassOf<UUserWidget> Wmensaje;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Widgets")
	UUserWidget* Mensaje;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widgets")
	TSubclassOf<UUserWidget> WInicioFinal;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Widgets")
	UUserWidget* InicioFinal;

	UFUNCTION(BlueprintCallable, Category = "HUD")
	void DisplayInteractWidget();
	UFUNCTION(BlueprintCallable, Category = "HUD")
	void RemoveInteractWidget();

	UPROPERTY(BlueprintReadWrite, Category = "Position")
	int PosicionActualIndex;

	void ShowMap();
	void HideMap();

	UPROPERTY(BlueprintReadWrite, Category = "HUD")
	FVector InteractLocation;

protected:
	virtual void BeginPlay() override;

	bool bDisplayInteractWidget;

	virtual void Tick(float DeltaTime) override;
	
};
