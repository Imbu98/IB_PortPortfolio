// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioMaterialSlate/AudioMaterialKnob.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUDIOWIDGETS_AudioMaterialKnob_generated_h
#error "AudioMaterialKnob.generated.h already included, missing '#pragma once' in AudioMaterialKnob.h"
#endif
#define AUDIOWIDGETS_AudioMaterialKnob_generated_h

#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialKnob_h_12_DELEGATE \
AUDIOWIDGETS_API void FOnKnobValueChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnKnobValueChangedEvent, float Value);


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialKnob_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetStepSize); \
	DECLARE_FUNCTION(execSetStepSize); \
	DECLARE_FUNCTION(execGetMouseUsesStep); \
	DECLARE_FUNCTION(execSetMouseUsesStep); \
	DECLARE_FUNCTION(execGetIsLocked); \
	DECLARE_FUNCTION(execSetLocked); \
	DECLARE_FUNCTION(execGetFineTuneSpeed); \
	DECLARE_FUNCTION(execSetFineTuneSpeed); \
	DECLARE_FUNCTION(execGetTuneSpeed); \
	DECLARE_FUNCTION(execSetTuneSpeed); \
	DECLARE_FUNCTION(execSetValue); \
	DECLARE_FUNCTION(execGetValue);


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialKnob_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioMaterialKnob(); \
	friend struct Z_Construct_UClass_UAudioMaterialKnob_Statics; \
public: \
	DECLARE_CLASS(UAudioMaterialKnob, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioWidgets"), NO_API) \
	DECLARE_SERIALIZER(UAudioMaterialKnob)


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialKnob_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAudioMaterialKnob(UAudioMaterialKnob&&); \
	UAudioMaterialKnob(const UAudioMaterialKnob&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioMaterialKnob); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioMaterialKnob); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioMaterialKnob) \
	NO_API virtual ~UAudioMaterialKnob();


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialKnob_h_21_PROLOG
#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialKnob_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialKnob_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialKnob_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialKnob_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOWIDGETS_API UClass* StaticClass<class UAudioMaterialKnob>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialKnob_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
