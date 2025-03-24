// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dataflow/Interfaces/DataflowPhysicsObject.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DATAFLOWSIMULATION_DataflowPhysicsObject_generated_h
#error "DataflowPhysicsObject.generated.h already included, missing '#pragma once' in DataflowPhysicsObject.h"
#endif
#define DATAFLOWSIMULATION_DataflowPhysicsObject_generated_h

#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowPhysicsObject_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDataflowPhysicsObjectProxy_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FDataflowSimulationProxy Super;


template<> DATAFLOWSIMULATION_API UScriptStruct* StaticStruct<struct FDataflowPhysicsObjectProxy>();

#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowPhysicsObject_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataflowPhysicsObjectInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDataflowPhysicsObjectInterface(UDataflowPhysicsObjectInterface&&); \
	UDataflowPhysicsObjectInterface(const UDataflowPhysicsObjectInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataflowPhysicsObjectInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataflowPhysicsObjectInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataflowPhysicsObjectInterface) \
	NO_API virtual ~UDataflowPhysicsObjectInterface();


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowPhysicsObject_h_29_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDataflowPhysicsObjectInterface(); \
	friend struct Z_Construct_UClass_UDataflowPhysicsObjectInterface_Statics; \
public: \
	DECLARE_CLASS(UDataflowPhysicsObjectInterface, UDataflowSimulationInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DataflowSimulation"), NO_API) \
	DECLARE_SERIALIZER(UDataflowPhysicsObjectInterface)


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowPhysicsObject_h_29_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowPhysicsObject_h_29_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowPhysicsObject_h_29_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowPhysicsObject_h_29_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDataflowPhysicsObjectInterface() {} \
public: \
	typedef UDataflowPhysicsObjectInterface UClassType; \
	typedef IDataflowPhysicsObjectInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowPhysicsObject_h_26_PROLOG
#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowPhysicsObject_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowPhysicsObject_h_29_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATAFLOWSIMULATION_API UClass* StaticClass<class UDataflowPhysicsObjectInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowPhysicsObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
