// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Object/ObjectElementSelectionInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ObjectElementSelectionInterface_generated_h
#error "ObjectElementSelectionInterface.generated.h already included, missing '#pragma once' in ObjectElementSelectionInterface.h"
#endif
#define ENGINE_ObjectElementSelectionInterface_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Elements_Object_ObjectElementSelectionInterface_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUObjectElementSelectionInterface(); \
	friend struct Z_Construct_UClass_UObjectElementSelectionInterface_Statics; \
public: \
	DECLARE_CLASS(UObjectElementSelectionInterface, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UObjectElementSelectionInterface) \
	virtual UObject* _getUObject() const override { return const_cast<UObjectElementSelectionInterface*>(this); }


#define FID_Engine_Source_Runtime_Engine_Public_Elements_Object_ObjectElementSelectionInterface_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UObjectElementSelectionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UObjectElementSelectionInterface(UObjectElementSelectionInterface&&); \
	UObjectElementSelectionInterface(const UObjectElementSelectionInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UObjectElementSelectionInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectElementSelectionInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObjectElementSelectionInterface) \
	ENGINE_API virtual ~UObjectElementSelectionInterface();


#define FID_Engine_Source_Runtime_Engine_Public_Elements_Object_ObjectElementSelectionInterface_h_8_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Elements_Object_ObjectElementSelectionInterface_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Elements_Object_ObjectElementSelectionInterface_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Elements_Object_ObjectElementSelectionInterface_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UObjectElementSelectionInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Elements_Object_ObjectElementSelectionInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
