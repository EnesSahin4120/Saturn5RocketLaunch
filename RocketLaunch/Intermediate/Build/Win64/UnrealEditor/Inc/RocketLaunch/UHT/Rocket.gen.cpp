// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RocketLaunch/Rocket.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRocket() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ROCKETLAUNCH_API UClass* Z_Construct_UClass_URocket();
ROCKETLAUNCH_API UClass* Z_Construct_UClass_URocket_NoRegister();
UPackage* Z_Construct_UPackage__Script_RocketLaunch();
// End Cross Module References

// Begin Class URocket
void URocket::StaticRegisterNativesURocket()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URocket);
UClass* Z_Construct_UClass_URocket_NoRegister()
{
	return URocket::StaticClass();
}
struct Z_Construct_UClass_URocket_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Rocket.h" },
		{ "ModuleRelativePath", "Rocket.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mass_MetaData[] = {
		{ "Category", "Rocket" },
		{ "ModuleRelativePath", "Rocket.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MassFlowRate_MetaData[] = {
		{ "Category", "Rocket" },
		{ "ModuleRelativePath", "Rocket.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectiveExhaustVelocity_MetaData[] = {
		{ "Category", "Rocket" },
		{ "ModuleRelativePath", "Rocket.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExitArea_MetaData[] = {
		{ "Category", "Rocket" },
		{ "ModuleRelativePath", "Rocket.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfEngines_MetaData[] = {
		{ "Category", "Rocket" },
		{ "ModuleRelativePath", "Rocket.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RocketDiameter_MetaData[] = {
		{ "Category", "Rocket" },
		{ "ModuleRelativePath", "Rocket.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DragCoefficient_MetaData[] = {
		{ "Category", "Rocket" },
		{ "ModuleRelativePath", "Rocket.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Mass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MassFlowRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EffectiveExhaustVelocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExitArea;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfEngines;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RocketDiameter;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DragCoefficient;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URocket>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URocket_Statics::NewProp_Mass = { "Mass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URocket, Mass), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mass_MetaData), NewProp_Mass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URocket_Statics::NewProp_MassFlowRate = { "MassFlowRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URocket, MassFlowRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MassFlowRate_MetaData), NewProp_MassFlowRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URocket_Statics::NewProp_EffectiveExhaustVelocity = { "EffectiveExhaustVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URocket, EffectiveExhaustVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectiveExhaustVelocity_MetaData), NewProp_EffectiveExhaustVelocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URocket_Statics::NewProp_ExitArea = { "ExitArea", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URocket, ExitArea), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExitArea_MetaData), NewProp_ExitArea_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URocket_Statics::NewProp_NumberOfEngines = { "NumberOfEngines", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URocket, NumberOfEngines), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfEngines_MetaData), NewProp_NumberOfEngines_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URocket_Statics::NewProp_RocketDiameter = { "RocketDiameter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URocket, RocketDiameter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RocketDiameter_MetaData), NewProp_RocketDiameter_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URocket_Statics::NewProp_DragCoefficient = { "DragCoefficient", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URocket, DragCoefficient), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DragCoefficient_MetaData), NewProp_DragCoefficient_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URocket_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URocket_Statics::NewProp_Mass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URocket_Statics::NewProp_MassFlowRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URocket_Statics::NewProp_EffectiveExhaustVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URocket_Statics::NewProp_ExitArea,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URocket_Statics::NewProp_NumberOfEngines,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URocket_Statics::NewProp_RocketDiameter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URocket_Statics::NewProp_DragCoefficient,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URocket_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URocket_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_RocketLaunch,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URocket_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URocket_Statics::ClassParams = {
	&URocket::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URocket_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URocket_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URocket_Statics::Class_MetaDataParams), Z_Construct_UClass_URocket_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URocket()
{
	if (!Z_Registration_Info_UClass_URocket.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URocket.OuterSingleton, Z_Construct_UClass_URocket_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URocket.OuterSingleton;
}
template<> ROCKETLAUNCH_API UClass* StaticClass<URocket>()
{
	return URocket::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URocket);
URocket::~URocket() {}
// End Class URocket

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_msi_nb_Desktop_new_RocketLaunch_Source_RocketLaunch_Rocket_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URocket, URocket::StaticClass, TEXT("URocket"), &Z_Registration_Info_UClass_URocket, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URocket), 123658401U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_msi_nb_Desktop_new_RocketLaunch_Source_RocketLaunch_Rocket_h_3843386914(TEXT("/Script/RocketLaunch"),
	Z_CompiledInDeferFile_FID_Users_msi_nb_Desktop_new_RocketLaunch_Source_RocketLaunch_Rocket_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_msi_nb_Desktop_new_RocketLaunch_Source_RocketLaunch_Rocket_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
