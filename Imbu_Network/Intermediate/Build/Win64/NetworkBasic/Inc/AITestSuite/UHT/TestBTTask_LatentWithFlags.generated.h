// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTree/TestBTTask_LatentWithFlags.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AITESTSUITE_TestBTTask_LatentWithFlags_generated_h
#error "TestBTTask_LatentWithFlags.generated.h already included, missing '#pragma once' in TestBTTask_LatentWithFlags.h"
#endif
#define AITESTSUITE_TestBTTask_LatentWithFlags_generated_h

#define FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_LatentWithFlags_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTestBTTask_LatentWithFlags(); \
	friend struct Z_Construct_UClass_UTestBTTask_LatentWithFlags_Statics; \
public: \
	DECLARE_CLASS(UTestBTTask_LatentWithFlags, UBTTaskNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AITestSuite"), NO_API) \
	DECLARE_SERIALIZER(UTestBTTask_LatentWithFlags)


#define FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_LatentWithFlags_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTestBTTask_LatentWithFlags(UTestBTTask_LatentWithFlags&&); \
	UTestBTTask_LatentWithFlags(const UTestBTTask_LatentWithFlags&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTestBTTask_LatentWithFlags); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTestBTTask_LatentWithFlags); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTestBTTask_LatentWithFlags) \
	NO_API virtual ~UTestBTTask_LatentWithFlags();


#define FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_LatentWithFlags_h_24_PROLOG
#define FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_LatentWithFlags_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_LatentWithFlags_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_LatentWithFlags_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AITESTSUITE_API UClass* StaticClass<class UTestBTTask_LatentWithFlags>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTTask_LatentWithFlags_h


#define FOREACH_ENUM_EBTTESTCHANGEFLAGBEHAVIOR(op) \
	op(EBTTestChangeFlagBehavior::Set) \
	op(EBTTestChangeFlagBehavior::Toggle) 

enum class EBTTestChangeFlagBehavior : uint8;
template<> struct TIsUEnumClass<EBTTestChangeFlagBehavior> { enum { Value = true }; };
template<> AITESTSUITE_API UEnum* StaticEnum<EBTTestChangeFlagBehavior>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
