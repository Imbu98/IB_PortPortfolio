// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoldoutCompositeSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOLDOUTCOMPOSITE_HoldoutCompositeSettings_generated_h
#error "HoldoutCompositeSettings.generated.h already included, missing '#pragma once' in HoldoutCompositeSettings.h"
#endif
#define HOLDOUTCOMPOSITE_HoldoutCompositeSettings_generated_h

#define FID_Engine_Plugins_Experimental_Compositing_HoldoutComposite_Source_HoldoutComposite_Public_HoldoutCompositeSettings_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHoldoutCompositeSettings(); \
	friend struct Z_Construct_UClass_UHoldoutCompositeSettings_Statics; \
public: \
	DECLARE_CLASS(UHoldoutCompositeSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/HoldoutComposite"), HOLDOUTCOMPOSITE_API) \
	DECLARE_SERIALIZER(UHoldoutCompositeSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("HoldoutComposite");} \



#define FID_Engine_Plugins_Experimental_Compositing_HoldoutComposite_Source_HoldoutComposite_Public_HoldoutCompositeSettings_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHoldoutCompositeSettings(UHoldoutCompositeSettings&&); \
	UHoldoutCompositeSettings(const UHoldoutCompositeSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HOLDOUTCOMPOSITE_API, UHoldoutCompositeSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoldoutCompositeSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHoldoutCompositeSettings) \
	HOLDOUTCOMPOSITE_API virtual ~UHoldoutCompositeSettings();


#define FID_Engine_Plugins_Experimental_Compositing_HoldoutComposite_Source_HoldoutComposite_Public_HoldoutCompositeSettings_h_15_PROLOG
#define FID_Engine_Plugins_Experimental_Compositing_HoldoutComposite_Source_HoldoutComposite_Public_HoldoutCompositeSettings_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Compositing_HoldoutComposite_Source_HoldoutComposite_Public_HoldoutCompositeSettings_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Compositing_HoldoutComposite_Source_HoldoutComposite_Public_HoldoutCompositeSettings_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOLDOUTCOMPOSITE_API UClass* StaticClass<class UHoldoutCompositeSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Compositing_HoldoutComposite_Source_HoldoutComposite_Public_HoldoutCompositeSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
