// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataProviders/AIDataProvider_QueryParams.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_AIDataProvider_QueryParams_generated_h
#error "AIDataProvider_QueryParams.generated.h already included, missing '#pragma once' in AIDataProvider_QueryParams.h"
#endif
#define AIMODULE_AIDataProvider_QueryParams_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_QueryParams_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAIDataProvider_QueryParams(); \
	friend struct Z_Construct_UClass_UAIDataProvider_QueryParams_Statics; \
public: \
	DECLARE_CLASS(UAIDataProvider_QueryParams, UAIDataProvider, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), AIMODULE_API) \
	DECLARE_SERIALIZER(UAIDataProvider_QueryParams)


#define FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_QueryParams_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UAIDataProvider_QueryParams(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAIDataProvider_QueryParams(UAIDataProvider_QueryParams&&); \
	UAIDataProvider_QueryParams(const UAIDataProvider_QueryParams&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UAIDataProvider_QueryParams); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIDataProvider_QueryParams); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIDataProvider_QueryParams) \
	AIMODULE_API virtual ~UAIDataProvider_QueryParams();


#define FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_QueryParams_h_18_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_QueryParams_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_QueryParams_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_QueryParams_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UAIDataProvider_QueryParams>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_QueryParams_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
