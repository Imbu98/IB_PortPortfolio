// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StructUtils/PropertyBag.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COREUOBJECT_PropertyBag_generated_h
#error "PropertyBag.generated.h already included, missing '#pragma once' in PropertyBag.h"
#endif
#define COREUOBJECT_PropertyBag_generated_h

#define FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_PropertyBag_h_52_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPropertyBagContainerTypes_Statics; \
	static class UScriptStruct* StaticStruct();


template<> COREUOBJECT_API UScriptStruct* StaticStruct<struct FPropertyBagContainerTypes>();

#define FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_PropertyBag_h_173_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPropertyBagPropertyDescMetaData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> COREUOBJECT_API UScriptStruct* StaticStruct<struct FPropertyBagPropertyDescMetaData>();

#define FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_PropertyBag_h_221_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPropertyBagPropertyDesc_Statics; \
	static class UScriptStruct* StaticStruct();


template<> COREUOBJECT_API UScriptStruct* StaticStruct<struct FPropertyBagPropertyDesc>();

#define FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_PropertyBag_h_348_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInstancedPropertyBag_Statics; \
	static class UScriptStruct* StaticStruct();


template<> COREUOBJECT_API UScriptStruct* StaticStruct<struct FInstancedPropertyBag>();

#define FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_PropertyBag_h_1003_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPropertyBagMissingStruct_Statics; \
	static class UScriptStruct* StaticStruct();


template<> COREUOBJECT_API UScriptStruct* StaticStruct<struct FPropertyBagMissingStruct>();

#define FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_PropertyBag_h_1009_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPropertyBagMissingObject(); \
	friend struct Z_Construct_UClass_UPropertyBagMissingObject_Statics; \
public: \
	DECLARE_CLASS(UPropertyBagMissingObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoreUObject"), NO_API) \
	DECLARE_SERIALIZER(UPropertyBagMissingObject)


#define FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_PropertyBag_h_1009_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPropertyBagMissingObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPropertyBagMissingObject(UPropertyBagMissingObject&&); \
	UPropertyBagMissingObject(const UPropertyBagMissingObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPropertyBagMissingObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPropertyBagMissingObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPropertyBagMissingObject) \
	NO_API virtual ~UPropertyBagMissingObject();


#define FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_PropertyBag_h_1006_PROLOG
#define FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_PropertyBag_h_1009_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_PropertyBag_h_1009_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_PropertyBag_h_1009_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COREUOBJECT_API UClass* StaticClass<class UPropertyBagMissingObject>();

#define FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_PropertyBag_h_1024_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPropertyBag(); \
	friend struct Z_Construct_UClass_UPropertyBag_Statics; \
public: \
	DECLARE_CLASS(UPropertyBag, UScriptStruct, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/CoreUObject"), NO_API) \
	DECLARE_SERIALIZER(UPropertyBag)


#define FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_PropertyBag_h_1024_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPropertyBag(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPropertyBag(UPropertyBag&&); \
	UPropertyBag(const UPropertyBag&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPropertyBag); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPropertyBag); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPropertyBag) \
	NO_API virtual ~UPropertyBag();


#define FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_PropertyBag_h_1020_PROLOG
#define FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_PropertyBag_h_1024_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_PropertyBag_h_1024_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_PropertyBag_h_1024_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COREUOBJECT_API UClass* StaticClass<class UPropertyBag>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_PropertyBag_h


#define FOREACH_ENUM_EPROPERTYBAGPROPERTYTYPE(op) \
	op(EPropertyBagPropertyType::None) \
	op(EPropertyBagPropertyType::Bool) \
	op(EPropertyBagPropertyType::Byte) \
	op(EPropertyBagPropertyType::Int32) \
	op(EPropertyBagPropertyType::Int64) \
	op(EPropertyBagPropertyType::Float) \
	op(EPropertyBagPropertyType::Double) \
	op(EPropertyBagPropertyType::Name) \
	op(EPropertyBagPropertyType::String) \
	op(EPropertyBagPropertyType::Text) \
	op(EPropertyBagPropertyType::Enum) \
	op(EPropertyBagPropertyType::Struct) \
	op(EPropertyBagPropertyType::Object) \
	op(EPropertyBagPropertyType::SoftObject) \
	op(EPropertyBagPropertyType::Class) \
	op(EPropertyBagPropertyType::SoftClass) \
	op(EPropertyBagPropertyType::UInt32) \
	op(EPropertyBagPropertyType::UInt64) \
	op(EPropertyBagPropertyType::Count) 

enum class EPropertyBagPropertyType : uint8;
template<> struct TIsUEnumClass<EPropertyBagPropertyType> { enum { Value = true }; };
template<> COREUOBJECT_API UEnum* StaticEnum<EPropertyBagPropertyType>();

#define FOREACH_ENUM_EPROPERTYBAGCONTAINERTYPE(op) \
	op(EPropertyBagContainerType::None) \
	op(EPropertyBagContainerType::Array) \
	op(EPropertyBagContainerType::Set) \
	op(EPropertyBagContainerType::Count) 

enum class EPropertyBagContainerType : uint8;
template<> struct TIsUEnumClass<EPropertyBagContainerType> { enum { Value = true }; };
template<> COREUOBJECT_API UEnum* StaticEnum<EPropertyBagContainerType>();

#define FOREACH_ENUM_EPROPERTYBAGRESULT(op) \
	op(EPropertyBagResult::Success) \
	op(EPropertyBagResult::TypeMismatch) \
	op(EPropertyBagResult::OutOfBounds) \
	op(EPropertyBagResult::PropertyNotFound) \
	op(EPropertyBagResult::DuplicatedValue) 

enum class EPropertyBagResult : uint8;
template<> struct TIsUEnumClass<EPropertyBagResult> { enum { Value = true }; };
template<> COREUOBJECT_API UEnum* StaticEnum<EPropertyBagResult>();

#define FOREACH_ENUM_EPROPERTYBAGMISSINGENUM(op) \
	op(EPropertyBagMissingEnum::Missing) 

enum class EPropertyBagMissingEnum : uint8;
template<> struct TIsUEnumClass<EPropertyBagMissingEnum> { enum { Value = true }; };
template<> COREUOBJECT_API UEnum* StaticEnum<EPropertyBagMissingEnum>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
