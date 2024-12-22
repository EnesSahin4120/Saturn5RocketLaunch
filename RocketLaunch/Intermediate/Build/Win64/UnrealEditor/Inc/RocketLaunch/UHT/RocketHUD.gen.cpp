// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RocketLaunch/RocketHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRocketHUD() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ROCKETLAUNCH_API UClass* Z_Construct_UClass_URocketHUD();
ROCKETLAUNCH_API UClass* Z_Construct_UClass_URocketHUD_NoRegister();
ROCKETLAUNCH_API UClass* Z_Construct_UClass_URocketSimulator_NoRegister();
UPackage* Z_Construct_UPackage__Script_RocketLaunch();
// End Cross Module References

// Begin Class URocketHUD
void URocketHUD::StaticRegisterNativesURocketHUD()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URocketHUD);
UClass* Z_Construct_UClass_URocketHUD_NoRegister()
{
	return URocketHUD::StaticClass();
}
struct Z_Construct_UClass_URocketHUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "RocketHUD.h" },
		{ "ModuleRelativePath", "RocketHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "Category", "Simulation Parameters" },
		{ "ModuleRelativePath", "RocketHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Altitude_MetaData[] = {
		{ "Category", "Simulation Parameters" },
		{ "ModuleRelativePath", "RocketHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeSeconds_MetaData[] = {
		{ "Category", "Simulation Parameters" },
		{ "ModuleRelativePath", "RocketHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeMinutes_MetaData[] = {
		{ "Category", "Simulation Parameters" },
		{ "ModuleRelativePath", "RocketHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeHours_MetaData[] = {
		{ "Category", "Simulation Parameters" },
		{ "ModuleRelativePath", "RocketHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RocketSimulator_MetaData[] = {
		{ "Category", "Rocket Simulator" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RocketHUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Speed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Altitude;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TimeSeconds;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TimeMinutes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TimeHours;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RocketSimulator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URocketHUD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URocketHUD_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URocketHUD, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URocketHUD_Statics::NewProp_Altitude = { "Altitude", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URocketHUD, Altitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Altitude_MetaData), NewProp_Altitude_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URocketHUD_Statics::NewProp_TimeSeconds = { "TimeSeconds", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URocketHUD, TimeSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeSeconds_MetaData), NewProp_TimeSeconds_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URocketHUD_Statics::NewProp_TimeMinutes = { "TimeMinutes", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URocketHUD, TimeMinutes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeMinutes_MetaData), NewProp_TimeMinutes_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URocketHUD_Statics::NewProp_TimeHours = { "TimeHours", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URocketHUD, TimeHours), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeHours_MetaData), NewProp_TimeHours_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URocketHUD_Statics::NewProp_RocketSimulator = { "RocketSimulator", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URocketHUD, RocketSimulator), Z_Construct_UClass_URocketSimulator_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RocketSimulator_MetaData), NewProp_RocketSimulator_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URocketHUD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URocketHUD_Statics::NewProp_Speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URocketHUD_Statics::NewProp_Altitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URocketHUD_Statics::NewProp_TimeSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URocketHUD_Statics::NewProp_TimeMinutes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URocketHUD_Statics::NewProp_TimeHours,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URocketHUD_Statics::NewProp_RocketSimulator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URocketHUD_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URocketHUD_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_RocketLaunch,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URocketHUD_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URocketHUD_Statics::ClassParams = {
	&URocketHUD::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URocketHUD_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URocketHUD_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URocketHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_URocketHUD_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URocketHUD()
{
	if (!Z_Registration_Info_UClass_URocketHUD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URocketHUD.OuterSingleton, Z_Construct_UClass_URocketHUD_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URocketHUD.OuterSingleton;
}
template<> ROCKETLAUNCH_API UClass* StaticClass<URocketHUD>()
{
	return URocketHUD::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URocketHUD);
URocketHUD::~URocketHUD() {}
// End Class URocketHUD

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_msi_nb_Desktop_new_RocketLaunch_Source_RocketLaunch_RocketHUD_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URocketHUD, URocketHUD::StaticClass, TEXT("URocketHUD"), &Z_Registration_Info_UClass_URocketHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URocketHUD), 908243822U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_msi_nb_Desktop_new_RocketLaunch_Source_RocketLaunch_RocketHUD_h_522733085(TEXT("/Script/RocketLaunch"),
	Z_CompiledInDeferFile_FID_Users_msi_nb_Desktop_new_RocketLaunch_Source_RocketLaunch_RocketHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_msi_nb_Desktop_new_RocketLaunch_Source_RocketLaunch_RocketHUD_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
