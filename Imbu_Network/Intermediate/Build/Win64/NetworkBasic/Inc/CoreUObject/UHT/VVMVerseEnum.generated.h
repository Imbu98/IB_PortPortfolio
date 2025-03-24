// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VerseVM/VVMVerseEnum.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COREUOBJECT_VVMVerseEnum_generated_h
#error "VVMVerseEnum.generated.h already included, missing '#pragma once' in VVMVerseEnum.h"
#endif
#define COREUOBJECT_VVMVerseEnum_generated_h

#define FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseEnum_h_29_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UVerseEnum, NO_API)


#define FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseEnum_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVerseEnum(); \
	friend struct Z_Construct_UClass_UVerseEnum_Statics; \
public: \
	DECLARE_CLASS(UVerseEnum, UEnum, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoreUObject"), NO_API) \
	DECLARE_SERIALIZER(UVerseEnum) \
	FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseEnum_h_29_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseEnum_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVerseEnum(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UVerseEnum(UVerseEnum&&); \
	UVerseEnum(const UVerseEnum&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVerseEnum); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVerseEnum); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVerseEnum) \
	NO_API virtual ~UVerseEnum();


#define FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseEnum_h_26_PROLOG
#define FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseEnum_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseEnum_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseEnum_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COREUOBJECT_API UClass* StaticClass<class UVerseEnum>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseEnum_h


#define FOREACH_ENUM_EVERSEENUMFLAGS(op) \
	op(EVerseEnumFlags::None) \
	op(EVerseEnumFlags::NativeBound) 

enum class EVerseEnumFlags : uint32;
template<> struct TIsUEnumClass<EVerseEnumFlags> { enum { Value = true }; };
template<> COREUOBJECT_API UEnum* StaticEnum<EVerseEnumFlags>();

#define FOREACH_ENUM_EVERSEFALSE(op) \
	op(EVerseFalse::Value) 

enum class EVerseFalse : uint8;
template<> struct TIsUEnumClass<EVerseFalse> { enum { Value = true }; };
template<> COREUOBJECT_API UEnum* StaticEnum<EVerseFalse>();

#define FOREACH_ENUM_EVERSETRUE(op) \
	op(EVerseTrue::Value) 

enum class EVerseTrue : uint8;
template<> struct TIsUEnumClass<EVerseTrue> { enum { Value = true }; };
template<> COREUOBJECT_API UEnum* StaticEnum<EVerseTrue>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
