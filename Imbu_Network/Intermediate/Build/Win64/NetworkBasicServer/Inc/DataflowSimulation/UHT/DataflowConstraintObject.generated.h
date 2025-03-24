// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dataflow/Interfaces/DataflowConstraintObject.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DATAFLOWSIMULATION_DataflowConstraintObject_generated_h
#error "DataflowConstraintObject.generated.h already included, missing '#pragma once' in DataflowConstraintObject.h"
#endif
#define DATAFLOWSIMULATION_DataflowConstraintObject_generated_h

#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowConstraintObject_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDataflowConstraintObjectProxy_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FDataflowSimulationProxy Super;


template<> DATAFLOWSIMULATION_API UScriptStruct* StaticStruct<struct FDataflowConstraintObjectProxy>();

#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowConstraintObject_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataflowConstraintObjectInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDataflowConstraintObjectInterface(UDataflowConstraintObjectInterface&&); \
	UDataflowConstraintObjectInterface(const UDataflowConstraintObjectInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataflowConstraintObjectInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataflowConstraintObjectInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataflowConstraintObjectInterface) \
	NO_API virtual ~UDataflowConstraintObjectInterface();


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowConstraintObject_h_29_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDataflowConstraintObjectInterface(); \
	friend struct Z_Construct_UClass_UDataflowConstraintObjectInterface_Statics; \
public: \
	DECLARE_CLASS(UDataflowConstraintObjectInterface, UDataflowSimulationInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DataflowSimulation"), NO_API) \
	DECLARE_SERIALIZER(UDataflowConstraintObjectInterface)


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowConstraintObject_h_29_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowConstraintObject_h_29_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowConstraintObject_h_29_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowConstraintObject_h_29_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDataflowConstraintObjectInterface() {} \
public: \
	typedef UDataflowConstraintObjectInterface UClassType; \
	typedef IDataflowConstraintObjectInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowConstraintObject_h_26_PROLOG
#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowConstraintObject_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowConstraintObject_h_29_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATAFLOWSIMULATION_API UClass* StaticClass<class UDataflowConstraintObjectInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowConstraintObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
