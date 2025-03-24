// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Scene/InterchangeLevelFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERCHANGEIMPORT_InterchangeLevelFactory_generated_h
#error "InterchangeLevelFactory.generated.h already included, missing '#pragma once' in InterchangeLevelFactory.h"
#endif
#define INTERCHANGEIMPORT_InterchangeLevelFactory_generated_h

#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeLevelFactory_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeLevelFactory(); \
	friend struct Z_Construct_UClass_UInterchangeLevelFactory_Statics; \
public: \
	DECLARE_CLASS(UInterchangeLevelFactory, UInterchangeFactoryBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeImport"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeLevelFactory)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeLevelFactory_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangeLevelFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterchangeLevelFactory(UInterchangeLevelFactory&&); \
	UInterchangeLevelFactory(const UInterchangeLevelFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeLevelFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeLevelFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeLevelFactory) \
	NO_API virtual ~UInterchangeLevelFactory();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeLevelFactory_h_12_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeLevelFactory_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeLevelFactory_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeLevelFactory_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGEIMPORT_API UClass* StaticClass<class UInterchangeLevelFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeLevelFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
