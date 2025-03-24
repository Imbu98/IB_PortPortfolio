// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dataflow/DataflowSimulationInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DATAFLOWSIMULATION_DataflowSimulationInterface_generated_h
#error "DataflowSimulationInterface.generated.h already included, missing '#pragma once' in DataflowSimulationInterface.h"
#endif
#define DATAFLOWSIMULATION_DataflowSimulationInterface_generated_h

#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_DataflowSimulationInterface_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDataflowSimulationAsset_Statics; \
	static class UScriptStruct* StaticStruct();


template<> DATAFLOWSIMULATION_API UScriptStruct* StaticStruct<struct FDataflowSimulationAsset>();

#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_DataflowSimulationInterface_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataflowSimulationInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDataflowSimulationInterface(UDataflowSimulationInterface&&); \
	UDataflowSimulationInterface(const UDataflowSimulationInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataflowSimulationInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataflowSimulationInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataflowSimulationInterface) \
	NO_API virtual ~UDataflowSimulationInterface();


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_DataflowSimulationInterface_h_33_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDataflowSimulationInterface(); \
	friend struct Z_Construct_UClass_UDataflowSimulationInterface_Statics; \
public: \
	DECLARE_CLASS(UDataflowSimulationInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DataflowSimulation"), NO_API) \
	DECLARE_SERIALIZER(UDataflowSimulationInterface)


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_DataflowSimulationInterface_h_33_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_DataflowSimulationInterface_h_33_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_DataflowSimulationInterface_h_33_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_DataflowSimulationInterface_h_33_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDataflowSimulationInterface() {} \
public: \
	typedef UDataflowSimulationInterface UClassType; \
	typedef IDataflowSimulationInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_DataflowSimulationInterface_h_30_PROLOG
#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_DataflowSimulationInterface_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_DataflowSimulationInterface_h_33_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATAFLOWSIMULATION_API UClass* StaticClass<class UDataflowSimulationInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_DataflowSimulationInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
