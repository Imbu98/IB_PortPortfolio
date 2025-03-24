// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Iris/ReplicationSystem/NetObjectFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef IRISCORE_NetObjectFactory_generated_h
#error "NetObjectFactory.generated.h already included, missing '#pragma once' in NetObjectFactory.h"
#endif
#define IRISCORE_NetObjectFactory_generated_h

#define FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_NetObjectFactory_h_77_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetObjectFactory(); \
	friend struct Z_Construct_UClass_UNetObjectFactory_Statics; \
public: \
	DECLARE_CLASS(UNetObjectFactory, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/IrisCore"), IRISCORE_API) \
	DECLARE_SERIALIZER(UNetObjectFactory)


#define FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_NetObjectFactory_h_77_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IRISCORE_API UNetObjectFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNetObjectFactory(UNetObjectFactory&&); \
	UNetObjectFactory(const UNetObjectFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IRISCORE_API, UNetObjectFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetObjectFactory); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNetObjectFactory) \
	IRISCORE_API virtual ~UNetObjectFactory();


#define FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_NetObjectFactory_h_74_PROLOG
#define FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_NetObjectFactory_h_77_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_NetObjectFactory_h_77_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_NetObjectFactory_h_77_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IRISCORE_API UClass* StaticClass<class UNetObjectFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_NetObjectFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
