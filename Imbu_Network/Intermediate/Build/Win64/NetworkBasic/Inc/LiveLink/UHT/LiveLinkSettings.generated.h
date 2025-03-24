// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveLinkSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LIVELINK_LiveLinkSettings_generated_h
#error "LiveLinkSettings.generated.h already included, missing '#pragma once' in LiveLinkSettings.h"
#endif
#define LIVELINK_LiveLinkSettings_generated_h

#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkSettings_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics; \
	static class UScriptStruct* StaticStruct();


template<> LIVELINK_API UScriptStruct* StaticStruct<struct FLiveLinkRoleProjectSetting>();

#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkSettings_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkUserSettings(); \
	friend struct Z_Construct_UClass_ULiveLinkUserSettings_Statics; \
public: \
	DECLARE_CLASS(ULiveLinkUserSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LiveLink"), NO_API) \
	DECLARE_SERIALIZER(ULiveLinkUserSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkSettings_h_52_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULiveLinkUserSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULiveLinkUserSettings(ULiveLinkUserSettings&&); \
	ULiveLinkUserSettings(const ULiveLinkUserSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkUserSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkUserSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkUserSettings) \
	NO_API virtual ~ULiveLinkUserSettings();


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkSettings_h_49_PROLOG
#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkSettings_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkSettings_h_52_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkSettings_h_52_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIVELINK_API UClass* StaticClass<class ULiveLinkUserSettings>();

#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkSettings_h_69_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkSettings(); \
	friend struct Z_Construct_UClass_ULiveLinkSettings_Statics; \
public: \
	DECLARE_CLASS(ULiveLinkSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/LiveLink"), NO_API) \
	DECLARE_SERIALIZER(ULiveLinkSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkSettings_h_69_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULiveLinkSettings(ULiveLinkSettings&&); \
	ULiveLinkSettings(const ULiveLinkSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULiveLinkSettings) \
	NO_API virtual ~ULiveLinkSettings();


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkSettings_h_66_PROLOG
#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkSettings_h_69_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkSettings_h_69_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkSettings_h_69_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIVELINK_API UClass* StaticClass<class ULiveLinkSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
