// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTree/TestBTDecorator_Blueprint.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AITESTSUITE_TestBTDecorator_Blueprint_generated_h
#error "TestBTDecorator_Blueprint.generated.h already included, missing '#pragma once' in TestBTDecorator_Blueprint.h"
#endif
#define AITESTSUITE_TestBTDecorator_Blueprint_generated_h

#define FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTDecorator_Blueprint_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUTestBTDecorator_Blueprint(); \
	friend struct Z_Construct_UClass_UTestBTDecorator_Blueprint_Statics; \
public: \
	DECLARE_CLASS(UTestBTDecorator_Blueprint, UBTDecorator_BlueprintBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AITestSuite"), NO_API) \
	DECLARE_SERIALIZER(UTestBTDecorator_Blueprint)


#define FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTDecorator_Blueprint_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTestBTDecorator_Blueprint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTestBTDecorator_Blueprint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTestBTDecorator_Blueprint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTestBTDecorator_Blueprint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTestBTDecorator_Blueprint(UTestBTDecorator_Blueprint&&); \
	UTestBTDecorator_Blueprint(const UTestBTDecorator_Blueprint&); \
public: \
	NO_API virtual ~UTestBTDecorator_Blueprint();


#define FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTDecorator_Blueprint_h_17_PROLOG
#define FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTDecorator_Blueprint_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTDecorator_Blueprint_h_20_INCLASS \
	FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTDecorator_Blueprint_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AITESTSUITE_API UClass* StaticClass<class UTestBTDecorator_Blueprint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTDecorator_Blueprint_h


#define FOREACH_ENUM_EBPCONDITIONTYPE(op) \
	op(EBPConditionType::NoCondition) \
	op(EBPConditionType::TrueCondition) \
	op(EBPConditionType::FalseCondition) 

enum class EBPConditionType;
template<> struct TIsUEnumClass<EBPConditionType> { enum { Value = true }; };
template<> AITESTSUITE_API UEnum* StaticEnum<EBPConditionType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
