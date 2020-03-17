// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Nivel.generated.h"

UCLASS()
class ISOLATIONUE4_API ANivel : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANivel();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SetPosition(int x, int y);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SetDirection(int Direction);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void UpdateDoors();

	UPROPERTY(BlueprintReadWrite)
	int X;
	UPROPERTY(BlueprintReadWrite)
	int Y;

};
