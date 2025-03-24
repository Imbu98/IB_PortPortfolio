// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/InputScaleBias.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_InputScaleBias_generated_h
#error "InputScaleBias.generated.h already included, missing '#pragma once' in InputScaleBias.h"
#endif
#define ENGINE_InputScaleBias_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_InputScaleBias_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInputScaleBias_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FInputScaleBias>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_InputScaleBias_h_40_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInputRange_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FInputRange>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_InputScaleBias_h_75_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FInputScaleBiasClamp>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_InputScaleBias_h_142_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInputClampConstants_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FInputClampConstants>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_InputScaleBias_h_172_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInputClampState_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FInputClampState>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_InputScaleBias_h_189_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FInputScaleBiasClampConstants>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_InputScaleBias_h_251_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInputScaleBiasClampState_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FInputScaleBiasClampState>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_InputScaleBias_h_287_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FInputAlphaBoolBlend>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_InputScaleBias_h


#define FOREACH_ENUM_EANIMALPHAINPUTTYPE(op) \
	op(EAnimAlphaInputType::Float) \
	op(EAnimAlphaInputType::Bool) \
	op(EAnimAlphaInputType::Curve) 

enum class EAnimAlphaInputType : uint8;
template<> struct TIsUEnumClass<EAnimAlphaInputType> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EAnimAlphaInputType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
