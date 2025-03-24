// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Usd/InterchangeUsdTranslator.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERCHANGEIMPORT_InterchangeUsdTranslator_generated_h
#error "InterchangeUsdTranslator.generated.h already included, missing '#pragma once' in InterchangeUsdTranslator.h"
#endif
#define INTERCHANGEIMPORT_InterchangeUsdTranslator_generated_h

#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Usd_InterchangeUsdTranslator_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeUsdTranslatorSettings(); \
	friend struct Z_Construct_UClass_UInterchangeUsdTranslatorSettings_Statics; \
public: \
	DECLARE_CLASS(UInterchangeUsdTranslatorSettings, UInterchangeTranslatorSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeImport"), INTERCHANGEIMPORT_API) \
	DECLARE_SERIALIZER(UInterchangeUsdTranslatorSettings)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Usd_InterchangeUsdTranslator_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterchangeUsdTranslatorSettings(UInterchangeUsdTranslatorSettings&&); \
	UInterchangeUsdTranslatorSettings(const UInterchangeUsdTranslatorSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEIMPORT_API, UInterchangeUsdTranslatorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeUsdTranslatorSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeUsdTranslatorSettings) \
	INTERCHANGEIMPORT_API virtual ~UInterchangeUsdTranslatorSettings();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Usd_InterchangeUsdTranslator_h_23_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Usd_InterchangeUsdTranslator_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Usd_InterchangeUsdTranslator_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Usd_InterchangeUsdTranslator_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGEIMPORT_API UClass* StaticClass<class UInterchangeUsdTranslatorSettings>();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Usd_InterchangeUsdTranslator_h_80_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeUSDTranslator(); \
	friend struct Z_Construct_UClass_UInterchangeUSDTranslator_Statics; \
public: \
	DECLARE_CLASS(UInterchangeUSDTranslator, UInterchangeTranslatorBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeImport"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeUSDTranslator) \
	virtual UObject* _getUObject() const override { return const_cast<UInterchangeUSDTranslator*>(this); }


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Usd_InterchangeUsdTranslator_h_80_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterchangeUSDTranslator(UInterchangeUSDTranslator&&); \
	UInterchangeUSDTranslator(const UInterchangeUSDTranslator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeUSDTranslator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeUSDTranslator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeUSDTranslator) \
	NO_API virtual ~UInterchangeUSDTranslator();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Usd_InterchangeUsdTranslator_h_72_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Usd_InterchangeUsdTranslator_h_80_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Usd_InterchangeUsdTranslator_h_80_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Usd_InterchangeUsdTranslator_h_80_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGEIMPORT_API UClass* StaticClass<class UInterchangeUSDTranslator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Usd_InterchangeUsdTranslator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
