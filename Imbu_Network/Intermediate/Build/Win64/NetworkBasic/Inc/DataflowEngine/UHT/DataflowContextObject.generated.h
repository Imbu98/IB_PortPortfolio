// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dataflow/DataflowContextObject.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DATAFLOWENGINE_DataflowContextObject_generated_h
#error "DataflowContextObject.generated.h already included, missing '#pragma once' in DataflowContextObject.h"
#endif
#define DATAFLOWENGINE_DataflowContextObject_generated_h

#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowContextObject_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataflowContextObject(); \
	friend struct Z_Construct_UClass_UDataflowContextObject_Statics; \
public: \
	DECLARE_CLASS(UDataflowContextObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataflowEngine"), NO_API) \
	DECLARE_SERIALIZER(UDataflowContextObject)


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowContextObject_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataflowContextObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDataflowContextObject(UDataflowContextObject&&); \
	UDataflowContextObject(const UDataflowContextObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataflowContextObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataflowContextObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataflowContextObject) \
	NO_API virtual ~UDataflowContextObject();


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowContextObject_h_23_PROLOG
#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowContextObject_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowContextObject_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowContextObject_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATAFLOWENGINE_API UClass* StaticClass<class UDataflowContextObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowContextObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
