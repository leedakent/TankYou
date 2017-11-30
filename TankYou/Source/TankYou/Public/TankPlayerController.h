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

public: 
	ATank* GetControlledTank() const;
};
