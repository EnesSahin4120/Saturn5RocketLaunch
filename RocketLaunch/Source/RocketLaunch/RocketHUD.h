// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "RocketSimulator.h"
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RocketHUD.generated.h"


UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent), BlueprintType)
class ROCKETLAUNCH_API URocketHUD : public UActorComponent
{
	GENERATED_BODY()

public:	
	URocketHUD();

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Simulation Parameters")
	int Speed;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Simulation Parameters")
	int Altitude;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Simulation Parameters")
	int TimeSeconds;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Simulation Parameters")
	int TimeMinutes;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Simulation Parameters")
	int TimeHours;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rocket Simulator")
	URocketSimulator* RocketSimulator;

private:
	void SetHUDParameters();
};
