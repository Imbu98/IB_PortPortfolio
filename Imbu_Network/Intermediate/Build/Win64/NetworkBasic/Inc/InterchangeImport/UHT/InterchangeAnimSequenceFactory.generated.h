// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/InterchangeAnimSequenceFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERCHANGEIMPORT_InterchangeAnimSequenceFactory_generated_h
#error "InterchangeAnimSequenceFactory.generated.h already included, missing '#pragma once' in InterchangeAnimSequenceFactory.h"
#endif
#define INTERCHANGEIMPORT_InterchangeAnimSequenceFactory_generated_h

#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Animation_InterchangeAnimSequenceFactory_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeAnimSequenceFactory(); \
	friend struct Z_Construct_UClass_UInterchangeAnimSequenceFactory_Statics; \
public: \
	DECLARE_CLASS(UInterchangeAnimSequenceFactory, UInterchangeFactoryBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeImport"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeAnimSequenceFactory)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Animation_InterchangeAnimSequenceFactory_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangeAnimSequenceFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterchangeAnimSequenceFactory(UInterchangeAnimSequenceFactory&&); \
	UInterchangeAnimSequenceFactory(const UInterchangeAnimSequenceFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeAnimSequenceFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeAnimSequenceFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeAnimSequenceFactory) \
	NO_API virtual ~UInterchangeAnimSequenceFactory();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Animation_InterchangeAnimSequenceFactory_h_17_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Animation_InterchangeAnimSequenceFactory_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Animation_InterchangeAnimSequenceFactory_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Animation_InterchangeAnimSequenceFactory_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGEIMPORT_API UClass* StaticClass<class UInterchangeAnimSequenceFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Animation_InterchangeAnimSequenceFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
