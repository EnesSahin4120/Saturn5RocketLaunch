// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Atmosphere.h"
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Rocket.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent), BlueprintType)
class ROCKETLAUNCH_API URocket : public UActorComponent
{
	GENERATED_BODY()

public:	
	URocket();

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rocket")
    float Mass;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rocket")
    float MassFlowRate;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rocket")
    float EffectiveExhaustVelocity;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rocket")
    float ExitArea;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rocket")
    int32 NumberOfEngines;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rocket")
    float RocketDiameter;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rocket")
    float DragCoefficient;

    float Vz;
    float Z;

    void Step(UAtmosphere* Atmosphere, float DeltaTime);
};
