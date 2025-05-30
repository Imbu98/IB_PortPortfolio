// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Haptics/HapticFeedbackEffect_Curve.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_HapticFeedbackEffect_Curve_generated_h
#error "HapticFeedbackEffect_Curve.generated.h already included, missing '#pragma once' in HapticFeedbackEffect_Curve.h"
#endif
#define ENGINE_HapticFeedbackEffect_Curve_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Haptics_HapticFeedbackEffect_Curve_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHapticFeedbackDetails_Curve_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FHapticFeedbackDetails_Curve>();

#define FID_Engine_Source_Runtime_Engine_Classes_Haptics_HapticFeedbackEffect_Curve_h_34_INCLASS \
private: \
	static void StaticRegisterNativesUHapticFeedbackEffect_Curve(); \
	friend struct Z_Construct_UClass_UHapticFeedbackEffect_Curve_Statics; \
public: \
	DECLARE_CLASS(UHapticFeedbackEffect_Curve, UHapticFeedbackEffect_Base, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UHapticFeedbackEffect_Curve)


#define FID_Engine_Source_Runtime_Engine_Classes_Haptics_HapticFeedbackEffect_Curve_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UHapticFeedbackEffect_Curve(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHapticFeedbackEffect_Curve) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UHapticFeedbackEffect_Curve); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHapticFeedbackEffect_Curve); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHapticFeedbackEffect_Curve(UHapticFeedbackEffect_Curve&&); \
	UHapticFeedbackEffect_Curve(const UHapticFeedbackEffect_Curve&); \
public: \
	ENGINE_API virtual ~UHapticFeedbackEffect_Curve();


#define FID_Engine_Source_Runtime_Engine_Classes_Haptics_HapticFeedbackEffect_Curve_h_31_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Haptics_HapticFeedbackEffect_Curve_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Haptics_HapticFeedbackEffect_Curve_h_34_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Haptics_HapticFeedbackEffect_Curve_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UHapticFeedbackEffect_Curve>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Haptics_HapticFeedbackEffect_Curve_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
