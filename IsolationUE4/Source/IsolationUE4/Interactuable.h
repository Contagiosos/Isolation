// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interactuable.generated.h"

UCLASS()
class ISOLATIONUE4_API AInteractuable : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AInteractuable();

	FTimerHandle Delay;

	UPROPERTY(EditDefaultsOnly, Category = "Mesh")
	class UStaticMeshComponent* MeshPrincipal;

	UPROPERTY(EditDefaultsOnly, Category = "Mesh")
	UStaticMeshComponent* Mesh1;

	UPROPERTY(EditDefaultsOnly, Category = "Mesh")
	UStaticMeshComponent* Mesh2;

	UPROPERTY(EditDefaultsOnly, Category = "Mesh")
	UStaticMeshComponent* Mesh3;

	UPROPERTY(EditDefaultsOnly, Category = "Mesh")
	UStaticMeshComponent* Mesh4;

	UPROPERTY(EditDefaultsOnly, Category = "Mesh")
	class UBoxComponent* BoxTrigger;

	UPROPERTY(EditDefaultsOnly, Category = "Mesh")
	class USphereComponent* LocalizacionWidget;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Es llamada cuando el personaje interactuo con el interactuable, se puede llamar por blueprints
	UFUNCTION(BlueprintCallable)
	void Interaccion();

	void DisplayWidgetDelayed();
	

	UFUNCTION()
	virtual void BoxTriggerBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);
	UFUNCTION()
	virtual void BoxTriggerEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

};
