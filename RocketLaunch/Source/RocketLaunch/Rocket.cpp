// Fill out your copyright notice in the Description page of Project Settings.


#include "Rocket.h"
#include "Math/UnrealMathUtility.h"

URocket::URocket()
{
}

void URocket::Step(UAtmosphere* Atmosphere, float DeltaTime)
{
    Atmosphere->CalculateAtmosphericParameters(Z);

    float CoreEngineForce = MassFlowRate * EffectiveExhaustVelocity + (Atmosphere->Pressure - Atmosphere->SeaLevelPressure) * ExitArea;
    float Thrust = NumberOfEngines * CoreEngineForce;
    float Velocity = FMath::Sqrt(Vz * Vz);

    float Area = PI * FMath::Pow(RocketDiameter * 0.5f, 2.0f);
    float Drag = 0.5f * DragCoefficient * Atmosphere->Density * Velocity * Velocity * Area;
    float EarthRadius = Atmosphere->EarthRadius;
    float G = Atmosphere->GravitationalAcceleration * EarthRadius * EarthRadius / FMath::Pow(EarthRadius + Z, 2.0f);

    float Force = (Thrust - Drag) - Mass * G;
    Vz += DeltaTime * (Force / Mass);
    Z += DeltaTime * Vz;
    Mass -= DeltaTime * (MassFlowRate * NumberOfEngines);
}

