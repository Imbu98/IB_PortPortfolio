// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Kismet/BlueprintMapLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
class UObject;
#ifdef ENGINE_BlueprintMapLibrary_generated_h
#error "BlueprintMapLibrary.generated.h already included, missing '#pragma once' in BlueprintMapLibrary.h"
#endif
#define ENGINE_BlueprintMapLibrary_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintMapLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlueprintMapLibrary(); \
	friend struct Z_Construct_UClass_UBlueprintMapLibrary_Statics; \
public: \
	DECLARE_CLASS(UBlueprintMapLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UBlueprintMapLibrary)


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintMapLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UBlueprintMapLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBlueprintMapLibrary(UBlueprintMapLibrary&&); \
	UBlueprintMapLibrary(const UBlueprintMapLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UBlueprintMapLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintMapLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintMapLibrary) \
	ENGINE_API virtual ~UBlueprintMapLibrary();


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintMapLibrary_h_13_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintMapLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintMapLibrary_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintMapLibrary_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UBlueprintMapLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintMapLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
