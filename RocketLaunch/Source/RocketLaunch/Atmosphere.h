// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Atmosphere.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent), BlueprintType)
class ROCKETLAUNCH_API UAtmosphere : public UActorComponent
{
	GENERATED_BODY()

public:	
	UAtmosphere();

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Atmosphere")
    float GasConstant;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Atmosphere")
    float GravitationalAcceleration;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Atmosphere")
    float EarthRadius;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Atmosphere")
    float SeaLevelPressure;

    float Pressure;
    float Density;
    float Temperature;

    void CalculateAtmosphericParameters(float Altitude);
};
