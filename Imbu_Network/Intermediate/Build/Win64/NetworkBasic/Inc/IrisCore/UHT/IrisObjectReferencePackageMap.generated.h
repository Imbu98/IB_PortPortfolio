// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Iris/Serialization/IrisObjectReferencePackageMap.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef IRISCORE_IrisObjectReferencePackageMap_generated_h
#error "IrisObjectReferencePackageMap.generated.h already included, missing '#pragma once' in IrisObjectReferencePackageMap.h"
#endif
#define IRISCORE_IrisObjectReferencePackageMap_generated_h

#define FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_IrisObjectReferencePackageMap_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIrisObjectReferencePackageMap(); \
	friend struct Z_Construct_UClass_UIrisObjectReferencePackageMap_Statics; \
public: \
	DECLARE_CLASS(UIrisObjectReferencePackageMap, UPackageMap, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/IrisCore"), IRISCORE_API) \
	DECLARE_SERIALIZER(UIrisObjectReferencePackageMap)


#define FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_IrisObjectReferencePackageMap_h_41_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IRISCORE_API UIrisObjectReferencePackageMap(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UIrisObjectReferencePackageMap(UIrisObjectReferencePackageMap&&); \
	UIrisObjectReferencePackageMap(const UIrisObjectReferencePackageMap&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IRISCORE_API, UIrisObjectReferencePackageMap); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIrisObjectReferencePackageMap); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIrisObjectReferencePackageMap) \
	IRISCORE_API virtual ~UIrisObjectReferencePackageMap();


#define FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_IrisObjectReferencePackageMap_h_37_PROLOG
#define FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_IrisObjectReferencePackageMap_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_IrisObjectReferencePackageMap_h_41_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_IrisObjectReferencePackageMap_h_41_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IRISCORE_API UClass* StaticClass<class UIrisObjectReferencePackageMap>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_IrisObjectReferencePackageMap_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
