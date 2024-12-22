// Fill out your copyright notice in the Description page of Project Settings.


#include "Atmosphere.h"
#include "Math/UnrealMathUtility.h"

UAtmosphere::UAtmosphere()
{
}

void UAtmosphere::CalculateAtmosphericParameters(float Altitude)
{
    float Slope;
    float T0;
    float P0;
    float H0;
    float GeoAltitude;
    float Grp;
    float Grp2;

    GeoAltitude = Altitude * EarthRadius / (Altitude + EarthRadius);

    if (GeoAltitude <= 11000.0f)
    {
        Slope = -0.0065f;
        T0 = 288.15f;
        P0 = 101325.0f;
        H0 = 0.0f;
    }
    else if (GeoAltitude < 20000.0f)
    {
        Slope = 0.0f;
        T0 = 216.65f;
        P0 = 22631.9f;
        H0 = 11000.0f;
    }
    else if (GeoAltitude < 32000.0f)
    {
        Slope = 0.001f;
        T0 = 216.65f;
        P0 = 5474.8f;
        H0 = 20000.0f;
    }
    else if (GeoAltitude < 47000.0f)
    {
        Slope = 0.0028f;
        T0 = 228.65f;
        P0 = 868.0f;
        H0 = 32000.0f;
    }
    else if (GeoAltitude < 51000.0f)
    {
        Slope = 0.0f;
        T0 = 270.65f;
        P0 = 110.9f;
        H0 = 47000.0f;
    }
    else if (GeoAltitude < 71000.0f)
    {
        Slope = -0.0028f;
        T0 = 270.65f;
        P0 = 66.9f;
        H0 = 51000.0f;
    }
    else if (GeoAltitude < 84000.0f)
    {
        Slope = -0.002f;
        T0 = 214.65f;
        P0 = 3.96f;
        H0 = 71000.0f;
    }
    else
    {
        Slope = 0.0f;
        T0 = 186.9f;
        P0 = 0.373f;
        H0 = 84000.0f;
    }

    if (Slope == 0.0)
    {
        Temperature = T0;
        Grp = -GravitationalAcceleration * (GeoAltitude - H0) / (GasConstant * Temperature);
        Pressure = P0 * FMath::Exp(Grp);
    }
    else
    {
        Temperature = T0 + Slope * (GeoAltitude - H0);
        Grp = T0 / Temperature;
        Grp2 = GravitationalAcceleration / (Slope * GasConstant);
        Pressure = P0 * FMath::Pow(Grp, Grp2);
    }

    Density = Pressure / (GasConstant * Temperature);
}