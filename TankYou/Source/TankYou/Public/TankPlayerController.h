// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Tank.h"
#include "TankPlayerController.generated.h" //must be last include

/**
 * 
 */
UCLASS()
class TANKYOU_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()


private:
	ATank* GetControlledTank() const;

	void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

	//start moving the barrel to crosshair
	void AimTowardsCrosshair();

	//return true if hit landscape
	bool GetSightRayHitLocation(FVector& OutHitLocation) const;

	UPROPERTY(EditAnywhere)
		float CrossHairXLocation = 0.5;

	UPROPERTY(EditAnywhere)
		float CrossHairYLocation = 0.3333;
};
