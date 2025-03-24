// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dataflow/Interfaces/DataflowPhysicsSolver.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DATAFLOWSIMULATION_DataflowPhysicsSolver_generated_h
#error "DataflowPhysicsSolver.generated.h already included, missing '#pragma once' in DataflowPhysicsSolver.h"
#endif
#define DATAFLOWSIMULATION_DataflowPhysicsSolver_generated_h

#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowPhysicsSolver_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDataflowPhysicsSolverProxy_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FDataflowSimulationProxy Super;


template<> DATAFLOWSIMULATION_API UScriptStruct* StaticStruct<struct FDataflowPhysicsSolverProxy>();

#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowPhysicsSolver_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataflowPhysicsSolverInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDataflowPhysicsSolverInterface(UDataflowPhysicsSolverInterface&&); \
	UDataflowPhysicsSolverInterface(const UDataflowPhysicsSolverInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataflowPhysicsSolverInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataflowPhysicsSolverInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataflowPhysicsSolverInterface) \
	NO_API virtual ~UDataflowPhysicsSolverInterface();


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowPhysicsSolver_h_35_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDataflowPhysicsSolverInterface(); \
	friend struct Z_Construct_UClass_UDataflowPhysicsSolverInterface_Statics; \
public: \
	DECLARE_CLASS(UDataflowPhysicsSolverInterface, UDataflowSimulationInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DataflowSimulation"), NO_API) \
	DECLARE_SERIALIZER(UDataflowPhysicsSolverInterface)


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowPhysicsSolver_h_35_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowPhysicsSolver_h_35_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowPhysicsSolver_h_35_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowPhysicsSolver_h_35_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDataflowPhysicsSolverInterface() {} \
public: \
	typedef UDataflowPhysicsSolverInterface UClassType; \
	typedef IDataflowPhysicsSolverInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowPhysicsSolver_h_32_PROLOG
#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowPhysicsSolver_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowPhysicsSolver_h_35_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATAFLOWSIMULATION_API UClass* StaticClass<class UDataflowPhysicsSolverInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowPhysicsSolver_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
