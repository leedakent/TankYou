// Fill out your copyright notice in the Description page of Project Settings.

#include "TankAIController.h"
#include "Engine.h"

void ATankAIController::BeginPlay()
{
	Super::BeginPlay();

	auto PlayerTank = GetPlayerTank();
	auto ControlledTank = GetControlledTank();
	if (!PlayerTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("AI can't find player tank"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("I'm %s and I think the player tank is %s"),*(ControlledTank->GetName()),*(PlayerTank->GetName()));
	}
}

ATank* ATankAIController::GetPlayerTank() const
{
	auto PlayerTank = GetWorld()->GetFirstPlayerController()->GetPawn();
	if (!PlayerTank) { return nullptr; };

	return Cast<ATank>(PlayerTank);
}

ATank* ATankAIController::GetControlledTank() const
{

	return Cast<ATank>(GetPawn());

}




