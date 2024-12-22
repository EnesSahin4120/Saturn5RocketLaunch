// Fill out your copyright notice in the Description page of Project Settings.


#include "RocketHUD.h"
#include "Math/UnrealMathUtility.h"

URocketHUD::URocketHUD()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void URocketHUD::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	SetHUDParameters();
}

void URocketHUD::SetHUDParameters()
{
	Speed = FMath::RoundToInt(RocketSimulator->Speed * 3.6f);
	Altitude = FMath::RoundToInt(RocketSimulator->Altitude * 0.001f);
	TimeHours = RocketSimulator->Time / 3600.0f;
	int RemainingSeconds = (int)(RocketSimulator->Time) % 3600;
	TimeMinutes = RemainingSeconds / 60;
	TimeSeconds = RemainingSeconds % 60;
}

