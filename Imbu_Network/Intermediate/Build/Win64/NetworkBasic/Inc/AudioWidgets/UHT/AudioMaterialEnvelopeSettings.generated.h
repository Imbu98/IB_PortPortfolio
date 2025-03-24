// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioMaterialSlate/AudioMaterialEnvelopeSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUDIOWIDGETS_AudioMaterialEnvelopeSettings_generated_h
#error "AudioMaterialEnvelopeSettings.generated.h already included, missing '#pragma once' in AudioMaterialEnvelopeSettings.h"
#endif
#define AUDIOWIDGETS_AudioMaterialEnvelopeSettings_generated_h

#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialEnvelopeSettings_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAudioMaterialEnvelopeSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> AUDIOWIDGETS_API UScriptStruct* StaticStruct<struct FAudioMaterialEnvelopeSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialEnvelopeSettings_h


#define FOREACH_ENUM_EAUDIOMATERIALENVELOPETYPE(op) \
	op(EAudioMaterialEnvelopeType::AD) \
	op(EAudioMaterialEnvelopeType::ADSR) 

enum class EAudioMaterialEnvelopeType : uint8;
template<> struct TIsUEnumClass<EAudioMaterialEnvelopeType> { enum { Value = true }; };
template<> AUDIOWIDGETS_API UEnum* StaticEnum<EAudioMaterialEnvelopeType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
