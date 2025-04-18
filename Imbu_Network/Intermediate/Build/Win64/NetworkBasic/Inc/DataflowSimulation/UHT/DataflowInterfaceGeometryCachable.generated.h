// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dataflow/Interfaces/DataflowInterfaceGeometryCachable.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DATAFLOWSIMULATION_DataflowInterfaceGeometryCachable_generated_h
#error "DataflowInterfaceGeometryCachable.generated.h already included, missing '#pragma once' in DataflowInterfaceGeometryCachable.h"
#endif
#define DATAFLOWSIMULATION_DataflowInterfaceGeometryCachable_generated_h

#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowInterfaceGeometryCachable_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATAFLOWSIMULATION_API UDataflowGeometryCachable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDataflowGeometryCachable(UDataflowGeometryCachable&&); \
	UDataflowGeometryCachable(const UDataflowGeometryCachable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATAFLOWSIMULATION_API, UDataflowGeometryCachable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataflowGeometryCachable); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataflowGeometryCachable) \
	DATAFLOWSIMULATION_API virtual ~UDataflowGeometryCachable();


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowInterfaceGeometryCachable_h_18_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDataflowGeometryCachable(); \
	friend struct Z_Construct_UClass_UDataflowGeometryCachable_Statics; \
public: \
	DECLARE_CLASS(UDataflowGeometryCachable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DataflowSimulation"), DATAFLOWSIMULATION_API) \
	DECLARE_SERIALIZER(UDataflowGeometryCachable)


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowInterfaceGeometryCachable_h_18_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowInterfaceGeometryCachable_h_18_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowInterfaceGeometryCachable_h_18_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowInterfaceGeometryCachable_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDataflowGeometryCachable() {} \
public: \
	typedef UDataflowGeometryCachable UClassType; \
	typedef IDataflowGeometryCachable ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowInterfaceGeometryCachable_h_15_PROLOG
#define FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowInterfaceGeometryCachable_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowInterfaceGeometryCachable_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATAFLOWSIMULATION_API UClass* StaticClass<class UDataflowGeometryCachable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_Dataflow_Simulation_Public_Dataflow_Interfaces_DataflowInterfaceGeometryCachable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
