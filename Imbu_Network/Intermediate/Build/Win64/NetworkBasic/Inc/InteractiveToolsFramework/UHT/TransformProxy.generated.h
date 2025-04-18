// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseGizmos/TransformProxy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERACTIVETOOLSFRAMEWORK_TransformProxy_generated_h
#error "TransformProxy.generated.h already included, missing '#pragma once' in TransformProxy.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_TransformProxy_generated_h

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_TransformProxy_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTransformProxy(); \
	friend struct Z_Construct_UClass_UTransformProxy_Statics; \
public: \
	DECLARE_CLASS(UTransformProxy, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), INTERACTIVETOOLSFRAMEWORK_API) \
	DECLARE_SERIALIZER(UTransformProxy)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_TransformProxy_h_41_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERACTIVETOOLSFRAMEWORK_API UTransformProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTransformProxy(UTransformProxy&&); \
	UTransformProxy(const UTransformProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERACTIVETOOLSFRAMEWORK_API, UTransformProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTransformProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTransformProxy) \
	INTERACTIVETOOLSFRAMEWORK_API virtual ~UTransformProxy();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_TransformProxy_h_38_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_TransformProxy_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_TransformProxy_h_41_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_TransformProxy_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<class UTransformProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_TransformProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
