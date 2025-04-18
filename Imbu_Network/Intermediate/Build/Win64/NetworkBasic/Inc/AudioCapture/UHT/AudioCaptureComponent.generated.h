// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioCaptureComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUDIOCAPTURE_AudioCaptureComponent_generated_h
#error "AudioCaptureComponent.generated.h already included, missing '#pragma once' in AudioCaptureComponent.h"
#endif
#define AUDIOCAPTURE_AudioCaptureComponent_generated_h

#define FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCaptureComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioCaptureComponent(); \
	friend struct Z_Construct_UClass_UAudioCaptureComponent_Statics; \
public: \
	DECLARE_CLASS(UAudioCaptureComponent, USynthComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AudioCapture"), NO_API) \
	DECLARE_SERIALIZER(UAudioCaptureComponent)


#define FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCaptureComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAudioCaptureComponent(UAudioCaptureComponent&&); \
	UAudioCaptureComponent(const UAudioCaptureComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioCaptureComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioCaptureComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioCaptureComponent) \
	NO_API virtual ~UAudioCaptureComponent();


#define FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCaptureComponent_h_10_PROLOG
#define FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCaptureComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCaptureComponent_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCaptureComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOCAPTURE_API UClass* StaticClass<class UAudioCaptureComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCaptureComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
