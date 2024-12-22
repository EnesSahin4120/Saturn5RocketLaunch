// Fill out your copyright notice in .h"

#include "RocketSimulator.h"

URocketSimulator::URocketSimulator()
{
	PrimaryComponentTick.bCanEverTick = true;

	FixedDeltaTime = 0.015f;
	AccumulatedTime = 0.0f;
}

void URocketSimulator::BeginPlay()
{
	Super::BeginPlay();
}

void URocketSimulator::Simulate(float DeltaTime)
{
	Rocket->Step(Atmosphere, DeltaTime);

	float Z = Rocket->Z;
	GetOwner()->SetActorLocation(FVector(0.0f, 0.0f, Z * 100.0f));
	Speed = Rocket->Vz;
	Altitude = Z;
}

void URocketSimulator::Launch()
{
	IsLaunch = true;
}

void URocketSimulator::SetSimulate()
{
	IsSimulate = true;
}

void URocketSimulator::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (IsLaunch) 
	{
		AccumulatedTime += DeltaTime;
		while (AccumulatedTime >= FixedDeltaTime)
		{
			Time += FixedDeltaTime;
			if (IsSimulate) {
				Simulate(FixedDeltaTime);
			}
			AccumulatedTime -= FixedDeltaTime;
		}
	}
}

