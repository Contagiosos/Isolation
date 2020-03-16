// Fill out your copyright notice in the Description page of Project Settings.


#include "Interactuable.h"

// Sets default values
AInteractuable::AInteractuable()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AInteractuable::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AInteractuable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

