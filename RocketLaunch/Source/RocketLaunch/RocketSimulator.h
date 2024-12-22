// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Rocket.h"
#include "Atmosphere.h"
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RocketSimulator.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent), BlueprintType)
class ROCKETLAUNCH_API URocketSimulator : public UActorComponent
{
	GENERATED_BODY()

public:	
	URocketSimulator();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	bool IsLaunch;
	bool IsSimulate;

	float FixedDeltaTime;
	float AccumulatedTime;
	void Simulate(float DeltaTime);

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Simulation Parameters")
	float Time;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Simulation Parameters")
	float Speed;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Simulation Parameters")
	float Altitude;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Atmosphere")
	UAtmosphere* Atmosphere;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rocket")
	URocket* Rocket;

	UFUNCTION(BlueprintCallable)
	void Launch();

	UFUNCTION(BlueprintCallable)
	void SetSimulate();
};
