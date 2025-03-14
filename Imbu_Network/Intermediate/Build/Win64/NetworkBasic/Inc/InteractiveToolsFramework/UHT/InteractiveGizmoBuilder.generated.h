// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InteractiveGizmoBuilder.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERACTIVETOOLSFRAMEWORK_InteractiveGizmoBuilder_generated_h
#error "InteractiveGizmoBuilder.generated.h already included, missing '#pragma once' in InteractiveGizmoBuilder.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_InteractiveGizmoBuilder_generated_h

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveGizmoBuilder_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInteractiveGizmoBuilder(); \
	friend struct Z_Construct_UClass_UInteractiveGizmoBuilder_Statics; \
public: \
	DECLARE_CLASS(UInteractiveGizmoBuilder, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), INTERACTIVETOOLSFRAMEWORK_API) \
	DECLARE_SERIALIZER(UInteractiveGizmoBuilder)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveGizmoBuilder_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERACTIVETOOLSFRAMEWORK_API UInteractiveGizmoBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInteractiveGizmoBuilder(UInteractiveGizmoBuilder&&); \
	UInteractiveGizmoBuilder(const UInteractiveGizmoBuilder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, UInteractiveGizmoBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractiveGizmoBuilder); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractiveGizmoBuilder) \
	INTERACTIVETOOLSFRAMEWORK_API virtual ~UInteractiveGizmoBuilder();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveGizmoBuilder_h_17_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveGizmoBuilder_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveGizmoBuilder_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveGizmoBuilder_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<class UInteractiveGizmoBuilder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveGizmoBuilder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
