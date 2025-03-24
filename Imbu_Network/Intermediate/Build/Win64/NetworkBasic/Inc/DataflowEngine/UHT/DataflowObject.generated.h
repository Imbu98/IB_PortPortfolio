// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dataflow/DataflowObject.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DATAFLOWENGINE_DataflowObject_generated_h
#error "DataflowObject.generated.h already included, missing '#pragma once' in DataflowObject.h"
#endif
#define DATAFLOWENGINE_DataflowObject_generated_h

#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowObject_h_72_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UDataflow, DATAFLOWENGINE_API)


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowObject_h_72_INCLASS \
private: \
	static void StaticRegisterNativesUDataflow(); \
	friend struct Z_Construct_UClass_UDataflow_Statics; \
public: \
	DECLARE_CLASS(UDataflow, UEdGraph, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataflowEngine"), DATAFLOWENGINE_API) \
	DECLARE_SERIALIZER(UDataflow) \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowObject_h_72_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowObject_h_72_STANDARD_CONSTRUCTORS \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataflow) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATAFLOWENGINE_API, UDataflow); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataflow); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDataflow(UDataflow&&); \
	UDataflow(const UDataflow&); \
public: \
	DATAFLOWENGINE_API virtual ~UDataflow();


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowObject_h_69_PROLOG
#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowObject_h_72_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowObject_h_72_INCLASS \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowObject_h_72_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATAFLOWENGINE_API UClass* StaticClass<class UDataflow>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowObject_h


#define FOREACH_ENUM_EDATAFLOWTYPE(op) \
	op(EDataflowType::Construction) \
	op(EDataflowType::Simulation) 

enum class EDataflowType : uint8;
template<> struct TIsUEnumClass<EDataflowType> { enum { Value = true }; };
template<> DATAFLOWENGINE_API UEnum* StaticEnum<EDataflowType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
