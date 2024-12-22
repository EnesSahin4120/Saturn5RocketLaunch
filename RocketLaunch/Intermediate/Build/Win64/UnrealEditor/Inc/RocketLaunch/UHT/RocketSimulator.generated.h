// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RocketSimulator.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ROCKETLAUNCH_RocketSimulator_generated_h
#error "RocketSimulator.generated.h already included, missing '#pragma once' in RocketSimulator.h"
#endif
#define ROCKETLAUNCH_RocketSimulator_generated_h

#define FID_Users_msi_nb_Desktop_new_RocketLaunch_Source_RocketLaunch_RocketSimulator_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetSimulate); \
	DECLARE_FUNCTION(execLaunch);


#define FID_Users_msi_nb_Desktop_new_RocketLaunch_Source_RocketLaunch_RocketSimulator_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURocketSimulator(); \
	friend struct Z_Construct_UClass_URocketSimulator_Statics; \
public: \
	DECLARE_CLASS(URocketSimulator, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RocketLaunch"), NO_API) \
	DECLARE_SERIALIZER(URocketSimulator)


#define FID_Users_msi_nb_Desktop_new_RocketLaunch_Source_RocketLaunch_RocketSimulator_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URocketSimulator(URocketSimulator&&); \
	URocketSimulator(const URocketSimulator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URocketSimulator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URocketSimulator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URocketSimulator) \
	NO_API virtual ~URocketSimulator();


#define FID_Users_msi_nb_Desktop_new_RocketLaunch_Source_RocketLaunch_RocketSimulator_h_11_PROLOG
#define FID_Users_msi_nb_Desktop_new_RocketLaunch_Source_RocketLaunch_RocketSimulator_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_msi_nb_Desktop_new_RocketLaunch_Source_RocketLaunch_RocketSimulator_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_msi_nb_Desktop_new_RocketLaunch_Source_RocketLaunch_RocketSimulator_h_14_INCLASS_NO_PURE_DECLS \
	FID_Users_msi_nb_Desktop_new_RocketLaunch_Source_RocketLaunch_RocketSimulator_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ROCKETLAUNCH_API UClass* StaticClass<class URocketSimulator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_msi_nb_Desktop_new_RocketLaunch_Source_RocketLaunch_RocketSimulator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
