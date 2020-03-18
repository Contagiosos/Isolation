// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "IsolationUE4Character.generated.h"

UCLASS(Blueprintable)
class AIsolationUE4Character : public ACharacter
{
	GENERATED_BODY()

public:
	AIsolationUE4Character();

	// Called every frame.
	virtual void Tick(float DeltaSeconds) override;

	/** Returns TopDownCameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetTopDownCameraComponent() const { return TopDownCameraComponent; }
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void Interact();
	bool bPuedeInteractuar;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Interactuable")
	class AInteractuable* InteractuableActual;

	TSubclassOf<AInteractuable>* SubClaseInteractuableActual;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "bool")
	bool bOnAnimation;

	void ShowMap();
	void HideMap();

private:
	/** Top down camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* TopDownCameraComponent;

	/** Camera boom positioning the camera above the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	/** A decal that projects to the cursor location. */

	/** Called for forward/backward input */
	void MoveForward(float value);
	/** Called for side to side input */
	void MoveRight(float value);
	
};

