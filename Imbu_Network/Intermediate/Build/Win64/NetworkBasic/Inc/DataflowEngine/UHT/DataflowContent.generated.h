// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dataflow/DataflowContent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DATAFLOWENGINE_DataflowContent_generated_h
#error "DataflowContent.generated.h already included, missing '#pragma once' in DataflowContent.h"
#endif
#define DATAFLOWENGINE_DataflowContent_generated_h

#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowContent_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATAFLOWENGINE_API UDataflowContentOwner(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDataflowContentOwner(UDataflowContentOwner&&); \
	UDataflowContentOwner(const UDataflowContentOwner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATAFLOWENGINE_API, UDataflowContentOwner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataflowContentOwner); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataflowContentOwner) \
	DATAFLOWENGINE_API virtual ~UDataflowContentOwner();


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowContent_h_31_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDataflowContentOwner(); \
	friend struct Z_Construct_UClass_UDataflowContentOwner_Statics; \
public: \
	DECLARE_CLASS(UDataflowContentOwner, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DataflowEngine"), DATAFLOWENGINE_API) \
	DECLARE_SERIALIZER(UDataflowContentOwner)


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowContent_h_31_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowContent_h_31_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowContent_h_31_ENHANCED_CONSTRUCTORS \
public: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowContent_h_31_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDataflowContentOwner() {} \
public: \
	typedef UDataflowContentOwner UClassType; \
	typedef IDataflowContentOwner ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowContent_h_28_PROLOG
#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowContent_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowContent_h_31_INCLASS_IINTERFACE_NO_PURE_DECLS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATAFLOWENGINE_API UClass* StaticClass<class UDataflowContentOwner>();

#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowContent_h_76_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UDataflowBaseContent, NO_API)


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowContent_h_76_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataflowBaseContent(); \
	friend struct Z_Construct_UClass_UDataflowBaseContent_Statics; \
public: \
	DECLARE_CLASS(UDataflowBaseContent, UDataflowContextObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataflowEngine"), NO_API) \
	DECLARE_SERIALIZER(UDataflowBaseContent) \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowContent_h_76_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowContent_h_76_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDataflowBaseContent(UDataflowBaseContent&&); \
	UDataflowBaseContent(const UDataflowBaseContent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataflowBaseContent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataflowBaseContent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDataflowBaseContent)


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowContent_h_73_PROLOG
#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowContent_h_76_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowContent_h_76_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowContent_h_76_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATAFLOWENGINE_API UClass* StaticClass<class UDataflowBaseContent>();

#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowContent_h_209_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataflowSkeletalContent(); \
	friend struct Z_Construct_UClass_UDataflowSkeletalContent_Statics; \
public: \
	DECLARE_CLASS(UDataflowSkeletalContent, UDataflowBaseContent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataflowEngine"), NO_API) \
	DECLARE_SERIALIZER(UDataflowSkeletalContent)


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowContent_h_209_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDataflowSkeletalContent(UDataflowSkeletalContent&&); \
	UDataflowSkeletalContent(const UDataflowSkeletalContent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataflowSkeletalContent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataflowSkeletalContent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDataflowSkeletalContent)


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowContent_h_206_PROLOG
#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowContent_h_209_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowContent_h_209_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowContent_h_209_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATAFLOWENGINE_API UClass* StaticClass<class UDataflowSkeletalContent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowContent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
