// Fill out your copyright notice in the Description page of Project Settings.


#include "Interactuable.h"
#include <Components/StaticMeshComponent.h>
#include <Components/BoxComponent.h>
#include "IsolationUE4Character.h"
#include <Kismet/GameplayStatics.h>
#include "MainPlayerController.h"
#include <Components/SphereComponent.h>
#include <Engine/World.h>
#include <TimerManager.h>

// Sets default values
AInteractuable::AInteractuable()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshPrincipal=CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshPrincipal"));
	RootComponent = MeshPrincipal;

	BoxTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxTrigger"));
	BoxTrigger->SetupAttachment(GetRootComponent());

	LocalizacionWidget = CreateDefaultSubobject<USphereComponent>(TEXT("LocalizacionWidget"));
	LocalizacionWidget->SetupAttachment(GetRootComponent());
	LocalizacionWidget->SetCollisionResponseToAllChannels(ECR_Ignore);

	Mesh1=CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh1"));
	Mesh1->SetupAttachment(GetRootComponent());

	Mesh2=CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh2"));
	Mesh2->SetupAttachment(GetRootComponent());

	Mesh3=CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh3"));
	Mesh3->SetupAttachment(GetRootComponent());

	Mesh4=CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh4"));
	Mesh4->SetupAttachment(GetRootComponent());
}

// Called when the game starts or when spawned
void AInteractuable::BeginPlay()
{
	Super::BeginPlay();

	BoxTrigger->OnComponentBeginOverlap.AddDynamic(this, &AInteractuable::BoxTriggerBeginOverlap);
	BoxTrigger->OnComponentEndOverlap.AddDynamic(this, &AInteractuable::BoxTriggerEndOverlap);
}

// Called every frame
void AInteractuable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AInteractuable::Interaccion()
{
	SetActorLocation(FVector(-140.f, 220.f, 290.f));
}

void AInteractuable::DisplayWidgetDelayed()
{
	AMainPlayerController* PlayerController = Cast<AMainPlayerController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));
	if (PlayerController)
	{
		PlayerController->DisplayInteractWidget();
	}
}

void AInteractuable::BoxTriggerBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	if (OtherActor)
	{
		AIsolationUE4Character* Character = Cast<AIsolationUE4Character>(OtherActor);
		if (Character)
		{
			Character->InteractuableActual = this;

			AMainPlayerController* PlayerController = Cast<AMainPlayerController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));
			if (PlayerController)
			{
				PlayerController->InteractLocation = LocalizacionWidget->GetComponentLocation();
				GetWorld()->GetTimerManager().SetTimer(Delay, this, &AInteractuable::DisplayWidgetDelayed, 0.01f, false);
			}
		}
	}
}

void AInteractuable::BoxTriggerEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OtherActor)
	{
		AIsolationUE4Character* Character = Cast<AIsolationUE4Character>(OtherActor);
		if (Character)
		{
			Character->InteractuableActual = nullptr;

			AMainPlayerController* PlayerController = Cast<AMainPlayerController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));
			if (PlayerController)
			{
				PlayerController->RemoveInteractWidget();
			}
		}
	}
}

