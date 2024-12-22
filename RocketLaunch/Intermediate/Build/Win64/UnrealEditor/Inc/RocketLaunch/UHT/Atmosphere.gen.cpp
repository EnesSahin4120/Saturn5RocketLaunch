// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RocketLaunch/Atmosphere.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtmosphere() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ROCKETLAUNCH_API UClass* Z_Construct_UClass_UAtmosphere();
ROCKETLAUNCH_API UClass* Z_Construct_UClass_UAtmosphere_NoRegister();
UPackage* Z_Construct_UPackage__Script_RocketLaunch();
// End Cross Module References

// Begin Class UAtmosphere
void UAtmosphere::StaticRegisterNativesUAtmosphere()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtmosphere);
UClass* Z_Construct_UClass_UAtmosphere_NoRegister()
{
	return UAtmosphere::StaticClass();
}
struct Z_Construct_UClass_UAtmosphere_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Atmosphere.h" },
		{ "ModuleRelativePath", "Atmosphere.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GasConstant_MetaData[] = {
		{ "Category", "Atmosphere" },
		{ "ModuleRelativePath", "Atmosphere.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GravitationalAcceleration_MetaData[] = {
		{ "Category", "Atmosphere" },
		{ "ModuleRelativePath", "Atmosphere.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EarthRadius_MetaData[] = {
		{ "Category", "Atmosphere" },
		{ "ModuleRelativePath", "Atmosphere.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeaLevelPressure_MetaData[] = {
		{ "Category", "Atmosphere" },
		{ "ModuleRelativePath", "Atmosphere.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GasConstant;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GravitationalAcceleration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EarthRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SeaLevelPressure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtmosphere>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAtmosphere_Statics::NewProp_GasConstant = { "GasConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAtmosphere, GasConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GasConstant_MetaData), NewProp_GasConstant_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAtmosphere_Statics::NewProp_GravitationalAcceleration = { "GravitationalAcceleration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAtmosphere, GravitationalAcceleration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GravitationalAcceleration_MetaData), NewProp_GravitationalAcceleration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAtmosphere_Statics::NewProp_EarthRadius = { "EarthRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAtmosphere, EarthRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EarthRadius_MetaData), NewProp_EarthRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAtmosphere_Statics::NewProp_SeaLevelPressure = { "SeaLevelPressure", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAtmosphere, SeaLevelPressure), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeaLevelPressure_MetaData), NewProp_SeaLevelPressure_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtmosphere_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtmosphere_Statics::NewProp_GasConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtmosphere_Statics::NewProp_GravitationalAcceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtmosphere_Statics::NewProp_EarthRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtmosphere_Statics::NewProp_SeaLevelPressure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAtmosphere_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAtmosphere_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_RocketLaunch,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAtmosphere_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtmosphere_Statics::ClassParams = {
	&UAtmosphere::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAtmosphere_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAtmosphere_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAtmosphere_Statics::Class_MetaDataParams), Z_Construct_UClass_UAtmosphere_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAtmosphere()
{
	if (!Z_Registration_Info_UClass_UAtmosphere.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtmosphere.OuterSingleton, Z_Construct_UClass_UAtmosphere_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAtmosphere.OuterSingleton;
}
template<> ROCKETLAUNCH_API UClass* StaticClass<UAtmosphere>()
{
	return UAtmosphere::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAtmosphere);
UAtmosphere::~UAtmosphere() {}
// End Class UAtmosphere

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_msi_nb_Desktop_new_RocketLaunch_Source_RocketLaunch_Atmosphere_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAtmosphere, UAtmosphere::StaticClass, TEXT("UAtmosphere"), &Z_Registration_Info_UClass_UAtmosphere, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtmosphere), 3515084215U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_msi_nb_Desktop_new_RocketLaunch_Source_RocketLaunch_Atmosphere_h_1437818645(TEXT("/Script/RocketLaunch"),
	Z_CompiledInDeferFile_FID_Users_msi_nb_Desktop_new_RocketLaunch_Source_RocketLaunch_Atmosphere_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_msi_nb_Desktop_new_RocketLaunch_Source_RocketLaunch_Atmosphere_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
