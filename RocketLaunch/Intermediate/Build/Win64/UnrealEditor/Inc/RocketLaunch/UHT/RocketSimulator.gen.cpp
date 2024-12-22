// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RocketLaunch/RocketSimulator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRocketSimulator() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ROCKETLAUNCH_API UClass* Z_Construct_UClass_UAtmosphere_NoRegister();
ROCKETLAUNCH_API UClass* Z_Construct_UClass_URocket_NoRegister();
ROCKETLAUNCH_API UClass* Z_Construct_UClass_URocketSimulator();
ROCKETLAUNCH_API UClass* Z_Construct_UClass_URocketSimulator_NoRegister();
UPackage* Z_Construct_UPackage__Script_RocketLaunch();
// End Cross Module References

// Begin Class URocketSimulator Function Launch
struct Z_Construct_UFunction_URocketSimulator_Launch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RocketSimulator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URocketSimulator_Launch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URocketSimulator, nullptr, "Launch", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URocketSimulator_Launch_Statics::Function_MetaDataParams), Z_Construct_UFunction_URocketSimulator_Launch_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_URocketSimulator_Launch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URocketSimulator_Launch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URocketSimulator::execLaunch)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Launch();
	P_NATIVE_END;
}
// End Class URocketSimulator Function Launch

// Begin Class URocketSimulator Function SetSimulate
struct Z_Construct_UFunction_URocketSimulator_SetSimulate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RocketSimulator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URocketSimulator_SetSimulate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URocketSimulator, nullptr, "SetSimulate", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URocketSimulator_SetSimulate_Statics::Function_MetaDataParams), Z_Construct_UFunction_URocketSimulator_SetSimulate_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_URocketSimulator_SetSimulate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URocketSimulator_SetSimulate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URocketSimulator::execSetSimulate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSimulate();
	P_NATIVE_END;
}
// End Class URocketSimulator Function SetSimulate

// Begin Class URocketSimulator
void URocketSimulator::StaticRegisterNativesURocketSimulator()
{
	UClass* Class = URocketSimulator::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Launch", &URocketSimulator::execLaunch },
		{ "SetSimulate", &URocketSimulator::execSetSimulate },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URocketSimulator);
UClass* Z_Construct_UClass_URocketSimulator_NoRegister()
{
	return URocketSimulator::StaticClass();
}
struct Z_Construct_UClass_URocketSimulator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "RocketSimulator.h" },
		{ "ModuleRelativePath", "RocketSimulator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
		{ "Category", "Simulation Parameters" },
		{ "ModuleRelativePath", "RocketSimulator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "Category", "Simulation Parameters" },
		{ "ModuleRelativePath", "RocketSimulator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Altitude_MetaData[] = {
		{ "Category", "Simulation Parameters" },
		{ "ModuleRelativePath", "RocketSimulator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Atmosphere_MetaData[] = {
		{ "Category", "Atmosphere" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RocketSimulator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rocket_MetaData[] = {
		{ "Category", "Rocket" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RocketSimulator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Altitude;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Atmosphere;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Rocket;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URocketSimulator_Launch, "Launch" }, // 2835528804
		{ &Z_Construct_UFunction_URocketSimulator_SetSimulate, "SetSimulate" }, // 437107361
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URocketSimulator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URocketSimulator_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URocketSimulator, Time), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Time_MetaData), NewProp_Time_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URocketSimulator_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URocketSimulator, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URocketSimulator_Statics::NewProp_Altitude = { "Altitude", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URocketSimulator, Altitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Altitude_MetaData), NewProp_Altitude_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URocketSimulator_Statics::NewProp_Atmosphere = { "Atmosphere", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URocketSimulator, Atmosphere), Z_Construct_UClass_UAtmosphere_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Atmosphere_MetaData), NewProp_Atmosphere_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URocketSimulator_Statics::NewProp_Rocket = { "Rocket", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URocketSimulator, Rocket), Z_Construct_UClass_URocket_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rocket_MetaData), NewProp_Rocket_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URocketSimulator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URocketSimulator_Statics::NewProp_Time,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URocketSimulator_Statics::NewProp_Speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URocketSimulator_Statics::NewProp_Altitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URocketSimulator_Statics::NewProp_Atmosphere,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URocketSimulator_Statics::NewProp_Rocket,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URocketSimulator_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URocketSimulator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_RocketLaunch,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URocketSimulator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URocketSimulator_Statics::ClassParams = {
	&URocketSimulator::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_URocketSimulator_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_URocketSimulator_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URocketSimulator_Statics::Class_MetaDataParams), Z_Construct_UClass_URocketSimulator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URocketSimulator()
{
	if (!Z_Registration_Info_UClass_URocketSimulator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URocketSimulator.OuterSingleton, Z_Construct_UClass_URocketSimulator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URocketSimulator.OuterSingleton;
}
template<> ROCKETLAUNCH_API UClass* StaticClass<URocketSimulator>()
{
	return URocketSimulator::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URocketSimulator);
URocketSimulator::~URocketSimulator() {}
// End Class URocketSimulator

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_msi_nb_Desktop_new_RocketLaunch_Source_RocketLaunch_RocketSimulator_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URocketSimulator, URocketSimulator::StaticClass, TEXT("URocketSimulator"), &Z_Registration_Info_UClass_URocketSimulator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URocketSimulator), 3613094441U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_msi_nb_Desktop_new_RocketLaunch_Source_RocketLaunch_RocketSimulator_h_2835926062(TEXT("/Script/RocketLaunch"),
	Z_CompiledInDeferFile_FID_Users_msi_nb_Desktop_new_RocketLaunch_Source_RocketLaunch_RocketSimulator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_msi_nb_Desktop_new_RocketLaunch_Source_RocketLaunch_RocketSimulator_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
