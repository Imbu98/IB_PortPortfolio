// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioMaterialSlate/AudioMaterialMeter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMeterChannelInfo;
#ifdef AUDIOWIDGETS_AudioMaterialMeter_generated_h
#error "AudioMaterialMeter.generated.h already included, missing '#pragma once' in AudioMaterialMeter.h"
#endif
#define AUDIOWIDGETS_AudioMaterialMeter_generated_h

#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialMeter_h_61_DELEGATE \
static TArray<FMeterChannelInfo> FGetMeterChannelInfo_DelegateWrapper(const FScriptDelegate& GetMeterChannelInfo);


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialMeter_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetMeterChannelInfo); \
	DECLARE_FUNCTION(execGetMeterChannelInfo);


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialMeter_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioMaterialMeter(); \
	friend struct Z_Construct_UClass_UAudioMaterialMeter_Statics; \
public: \
	DECLARE_CLASS(UAudioMaterialMeter, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioWidgets"), NO_API) \
	DECLARE_SERIALIZER(UAudioMaterialMeter)


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialMeter_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAudioMaterialMeter(UAudioMaterialMeter&&); \
	UAudioMaterialMeter(const UAudioMaterialMeter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioMaterialMeter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioMaterialMeter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAudioMaterialMeter) \
	NO_API virtual ~UAudioMaterialMeter();


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialMeter_h_20_PROLOG
#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialMeter_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialMeter_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialMeter_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialMeter_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOWIDGETS_API UClass* StaticClass<class UAudioMaterialMeter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialMeter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
