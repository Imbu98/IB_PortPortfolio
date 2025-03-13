// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DeletedObjectPlaceholder.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_DeletedObjectPlaceholder_generated_h
#error "DeletedObjectPlaceholder.generated.h already included, missing '#pragma once' in DeletedObjectPlaceholder.h"
#endif
#define ENGINE_DeletedObjectPlaceholder_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_DeletedObjectPlaceholder_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDeletedObjectPlaceholder(); \
	friend struct Z_Construct_UClass_UDeletedObjectPlaceholder_Statics; \
public: \
	DECLARE_CLASS(UDeletedObjectPlaceholder, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UDeletedObjectPlaceholder)


#define FID_Engine_Source_Runtime_Engine_Public_DeletedObjectPlaceholder_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UDeletedObjectPlaceholder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDeletedObjectPlaceholder(UDeletedObjectPlaceholder&&); \
	UDeletedObjectPlaceholder(const UDeletedObjectPlaceholder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UDeletedObjectPlaceholder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDeletedObjectPlaceholder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDeletedObjectPlaceholder) \
	ENGINE_API virtual ~UDeletedObjectPlaceholder();


#define FID_Engine_Source_Runtime_Engine_Public_DeletedObjectPlaceholder_h_17_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_DeletedObjectPlaceholder_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_DeletedObjectPlaceholder_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_DeletedObjectPlaceholder_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UDeletedObjectPlaceholder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_DeletedObjectPlaceholder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
