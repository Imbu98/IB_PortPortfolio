// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/ValueOrBBKey.h"
#include "Runtime/CoreUObject/Public/StructUtils/InstancedStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeValueOrBBKey() {}

// Begin Cross Module References
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FValueOrBBKey_Bool();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FValueOrBBKey_Class();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FValueOrBBKey_Enum();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FValueOrBBKey_Float();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FValueOrBBKey_Int32();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FValueOrBBKey_Name();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FValueOrBBKey_Object();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FValueOrBBKey_Rotator();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FValueOrBBKey_String();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FValueOrBBKey_Struct();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FValueOrBBKey_Vector();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FValueOrBlackboardKeyBase();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UEnum();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStruct();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin ScriptStruct FValueOrBlackboardKeyBase
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ValueOrBlackboardKeyBase;
class UScriptStruct* FValueOrBlackboardKeyBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ValueOrBlackboardKeyBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ValueOrBlackboardKeyBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FValueOrBlackboardKeyBase, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("ValueOrBlackboardKeyBase"));
	}
	return Z_Registration_Info_UScriptStruct_ValueOrBlackboardKeyBase.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FValueOrBlackboardKeyBase>()
{
	return FValueOrBlackboardKeyBase::StaticStruct();
}
struct Z_Construct_UScriptStruct_FValueOrBlackboardKeyBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// Base struct to simplify edition in the editor, shouldn't be used elsewhere\n" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/ValueOrBBKey.h" },
		{ "ToolTip", "Base struct to simplify edition in the editor, shouldn't be used elsewhere" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "Category", "Value" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/ValueOrBBKey.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FValueOrBlackboardKeyBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FValueOrBlackboardKeyBase_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FValueOrBlackboardKeyBase, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FValueOrBlackboardKeyBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FValueOrBlackboardKeyBase_Statics::NewProp_Key,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValueOrBlackboardKeyBase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FValueOrBlackboardKeyBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	nullptr,
	&NewStructOps,
	"ValueOrBlackboardKeyBase",
	Z_Construct_UScriptStruct_FValueOrBlackboardKeyBase_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValueOrBlackboardKeyBase_Statics::PropPointers),
	sizeof(FValueOrBlackboardKeyBase),
	alignof(FValueOrBlackboardKeyBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValueOrBlackboardKeyBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FValueOrBlackboardKeyBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FValueOrBlackboardKeyBase()
{
	if (!Z_Registration_Info_UScriptStruct_ValueOrBlackboardKeyBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ValueOrBlackboardKeyBase.InnerSingleton, Z_Construct_UScriptStruct_FValueOrBlackboardKeyBase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ValueOrBlackboardKeyBase.InnerSingleton;
}
// End ScriptStruct FValueOrBlackboardKeyBase

// Begin ScriptStruct FValueOrBBKey_Bool
static_assert(std::is_polymorphic<FValueOrBBKey_Bool>() == std::is_polymorphic<FValueOrBlackboardKeyBase>(), "USTRUCT FValueOrBBKey_Bool cannot be polymorphic unless super FValueOrBlackboardKeyBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ValueOrBBKey_Bool;
class UScriptStruct* FValueOrBBKey_Bool::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ValueOrBBKey_Bool.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ValueOrBBKey_Bool.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FValueOrBBKey_Bool, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("ValueOrBBKey_Bool"));
	}
	return Z_Registration_Info_UScriptStruct_ValueOrBBKey_Bool.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FValueOrBBKey_Bool>()
{
	return FValueOrBBKey_Bool::StaticStruct();
}
struct Z_Construct_UScriptStruct_FValueOrBBKey_Bool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/ValueOrBBKey.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Value" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/ValueOrBBKey.h" },
	};
#endif // WITH_METADATA
	static void NewProp_DefaultValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DefaultValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FValueOrBBKey_Bool>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FValueOrBBKey_Bool_Statics::NewProp_DefaultValue_SetBit(void* Obj)
{
	((FValueOrBBKey_Bool*)Obj)->DefaultValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FValueOrBBKey_Bool_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FValueOrBBKey_Bool), &Z_Construct_UScriptStruct_FValueOrBBKey_Bool_Statics::NewProp_DefaultValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValue_MetaData), NewProp_DefaultValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FValueOrBBKey_Bool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FValueOrBBKey_Bool_Statics::NewProp_DefaultValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValueOrBBKey_Bool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FValueOrBBKey_Bool_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	Z_Construct_UScriptStruct_FValueOrBlackboardKeyBase,
	&NewStructOps,
	"ValueOrBBKey_Bool",
	Z_Construct_UScriptStruct_FValueOrBBKey_Bool_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValueOrBBKey_Bool_Statics::PropPointers),
	sizeof(FValueOrBBKey_Bool),
	alignof(FValueOrBBKey_Bool),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValueOrBBKey_Bool_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FValueOrBBKey_Bool_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FValueOrBBKey_Bool()
{
	if (!Z_Registration_Info_UScriptStruct_ValueOrBBKey_Bool.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ValueOrBBKey_Bool.InnerSingleton, Z_Construct_UScriptStruct_FValueOrBBKey_Bool_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ValueOrBBKey_Bool.InnerSingleton;
}
// End ScriptStruct FValueOrBBKey_Bool

// Begin ScriptStruct FValueOrBBKey_Class
static_assert(std::is_polymorphic<FValueOrBBKey_Class>() == std::is_polymorphic<FValueOrBlackboardKeyBase>(), "USTRUCT FValueOrBBKey_Class cannot be polymorphic unless super FValueOrBlackboardKeyBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ValueOrBBKey_Class;
class UScriptStruct* FValueOrBBKey_Class::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ValueOrBBKey_Class.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ValueOrBBKey_Class.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FValueOrBBKey_Class, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("ValueOrBBKey_Class"));
	}
	return Z_Registration_Info_UScriptStruct_ValueOrBBKey_Class.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FValueOrBBKey_Class>()
{
	return FValueOrBBKey_Class::StaticStruct();
}
struct Z_Construct_UScriptStruct_FValueOrBBKey_Class_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/ValueOrBBKey.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Value" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/ValueOrBBKey.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseClass_MetaData[] = {
		{ "AllowAbstract", "1" },
		{ "Category", "Value" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/ValueOrBBKey.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultValue;
	static const UECodeGen_Private::FClassPropertyParams NewProp_BaseClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FValueOrBBKey_Class>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FValueOrBBKey_Class_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0124080000000001, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FValueOrBBKey_Class, DefaultValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValue_MetaData), NewProp_DefaultValue_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FValueOrBBKey_Class_Statics::NewProp_BaseClass = { "BaseClass", nullptr, (EPropertyFlags)0x0124080000010001, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FValueOrBBKey_Class, BaseClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseClass_MetaData), NewProp_BaseClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FValueOrBBKey_Class_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FValueOrBBKey_Class_Statics::NewProp_DefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FValueOrBBKey_Class_Statics::NewProp_BaseClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValueOrBBKey_Class_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FValueOrBBKey_Class_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	Z_Construct_UScriptStruct_FValueOrBlackboardKeyBase,
	&NewStructOps,
	"ValueOrBBKey_Class",
	Z_Construct_UScriptStruct_FValueOrBBKey_Class_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValueOrBBKey_Class_Statics::PropPointers),
	sizeof(FValueOrBBKey_Class),
	alignof(FValueOrBBKey_Class),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValueOrBBKey_Class_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FValueOrBBKey_Class_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FValueOrBBKey_Class()
{
	if (!Z_Registration_Info_UScriptStruct_ValueOrBBKey_Class.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ValueOrBBKey_Class.InnerSingleton, Z_Construct_UScriptStruct_FValueOrBBKey_Class_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ValueOrBBKey_Class.InnerSingleton;
}
// End ScriptStruct FValueOrBBKey_Class

// Begin ScriptStruct FValueOrBBKey_Enum
static_assert(std::is_polymorphic<FValueOrBBKey_Enum>() == std::is_polymorphic<FValueOrBlackboardKeyBase>(), "USTRUCT FValueOrBBKey_Enum cannot be polymorphic unless super FValueOrBlackboardKeyBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ValueOrBBKey_Enum;
class UScriptStruct* FValueOrBBKey_Enum::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ValueOrBBKey_Enum.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ValueOrBBKey_Enum.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FValueOrBBKey_Enum, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("ValueOrBBKey_Enum"));
	}
	return Z_Registration_Info_UScriptStruct_ValueOrBBKey_Enum.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FValueOrBBKey_Enum>()
{
	return FValueOrBBKey_Enum::StaticStruct();
}
struct Z_Construct_UScriptStruct_FValueOrBBKey_Enum_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/ValueOrBBKey.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Value" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/ValueOrBBKey.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnumType_MetaData[] = {
		{ "Category", "Value" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/ValueOrBBKey.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NativeEnumTypeName_MetaData[] = {
		{ "Category", "Value" },
		{ "Comment", "/** Name of enum type defined in C++ code, will take priority over asset from EnumType property */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/ValueOrBBKey.h" },
		{ "ToolTip", "Name of enum type defined in C++ code, will take priority over asset from EnumType property" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultValue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EnumType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_NativeEnumTypeName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FValueOrBBKey_Enum>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FValueOrBBKey_Enum_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FValueOrBBKey_Enum, DefaultValue), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValue_MetaData), NewProp_DefaultValue_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FValueOrBBKey_Enum_Statics::NewProp_EnumType = { "EnumType", nullptr, (EPropertyFlags)0x0124080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FValueOrBBKey_Enum, EnumType), Z_Construct_UClass_UEnum, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnumType_MetaData), NewProp_EnumType_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FValueOrBBKey_Enum_Statics::NewProp_NativeEnumTypeName = { "NativeEnumTypeName", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FValueOrBBKey_Enum, NativeEnumTypeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NativeEnumTypeName_MetaData), NewProp_NativeEnumTypeName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FValueOrBBKey_Enum_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FValueOrBBKey_Enum_Statics::NewProp_DefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FValueOrBBKey_Enum_Statics::NewProp_EnumType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FValueOrBBKey_Enum_Statics::NewProp_NativeEnumTypeName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValueOrBBKey_Enum_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FValueOrBBKey_Enum_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	Z_Construct_UScriptStruct_FValueOrBlackboardKeyBase,
	&NewStructOps,
	"ValueOrBBKey_Enum",
	Z_Construct_UScriptStruct_FValueOrBBKey_Enum_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValueOrBBKey_Enum_Statics::PropPointers),
	sizeof(FValueOrBBKey_Enum),
	alignof(FValueOrBBKey_Enum),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValueOrBBKey_Enum_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FValueOrBBKey_Enum_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FValueOrBBKey_Enum()
{
	if (!Z_Registration_Info_UScriptStruct_ValueOrBBKey_Enum.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ValueOrBBKey_Enum.InnerSingleton, Z_Construct_UScriptStruct_FValueOrBBKey_Enum_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ValueOrBBKey_Enum.InnerSingleton;
}
// End ScriptStruct FValueOrBBKey_Enum

// Begin ScriptStruct FValueOrBBKey_Float
static_assert(std::is_polymorphic<FValueOrBBKey_Float>() == std::is_polymorphic<FValueOrBlackboardKeyBase>(), "USTRUCT FValueOrBBKey_Float cannot be polymorphic unless super FValueOrBlackboardKeyBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ValueOrBBKey_Float;
class UScriptStruct* FValueOrBBKey_Float::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ValueOrBBKey_Float.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ValueOrBBKey_Float.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FValueOrBBKey_Float, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("ValueOrBBKey_Float"));
	}
	return Z_Registration_Info_UScriptStruct_ValueOrBBKey_Float.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FValueOrBBKey_Float>()
{
	return FValueOrBBKey_Float::StaticStruct();
}
struct Z_Construct_UScriptStruct_FValueOrBBKey_Float_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/ValueOrBBKey.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Value" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/ValueOrBBKey.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FValueOrBBKey_Float>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FValueOrBBKey_Float_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FValueOrBBKey_Float, DefaultValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValue_MetaData), NewProp_DefaultValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FValueOrBBKey_Float_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FValueOrBBKey_Float_Statics::NewProp_DefaultValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValueOrBBKey_Float_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FValueOrBBKey_Float_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	Z_Construct_UScriptStruct_FValueOrBlackboardKeyBase,
	&NewStructOps,
	"ValueOrBBKey_Float",
	Z_Construct_UScriptStruct_FValueOrBBKey_Float_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValueOrBBKey_Float_Statics::PropPointers),
	sizeof(FValueOrBBKey_Float),
	alignof(FValueOrBBKey_Float),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValueOrBBKey_Float_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FValueOrBBKey_Float_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FValueOrBBKey_Float()
{
	if (!Z_Registration_Info_UScriptStruct_ValueOrBBKey_Float.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ValueOrBBKey_Float.InnerSingleton, Z_Construct_UScriptStruct_FValueOrBBKey_Float_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ValueOrBBKey_Float.InnerSingleton;
}
// End ScriptStruct FValueOrBBKey_Float

// Begin ScriptStruct FValueOrBBKey_Int32
static_assert(std::is_polymorphic<FValueOrBBKey_Int32>() == std::is_polymorphic<FValueOrBlackboardKeyBase>(), "USTRUCT FValueOrBBKey_Int32 cannot be polymorphic unless super FValueOrBlackboardKeyBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ValueOrBBKey_Int32;
class UScriptStruct* FValueOrBBKey_Int32::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ValueOrBBKey_Int32.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ValueOrBBKey_Int32.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FValueOrBBKey_Int32, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("ValueOrBBKey_Int32"));
	}
	return Z_Registration_Info_UScriptStruct_ValueOrBBKey_Int32.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FValueOrBBKey_Int32>()
{
	return FValueOrBBKey_Int32::StaticStruct();
}
struct Z_Construct_UScriptStruct_FValueOrBBKey_Int32_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/ValueOrBBKey.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Value" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/ValueOrBBKey.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FValueOrBBKey_Int32>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FValueOrBBKey_Int32_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FValueOrBBKey_Int32, DefaultValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValue_MetaData), NewProp_DefaultValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FValueOrBBKey_Int32_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FValueOrBBKey_Int32_Statics::NewProp_DefaultValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValueOrBBKey_Int32_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FValueOrBBKey_Int32_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	Z_Construct_UScriptStruct_FValueOrBlackboardKeyBase,
	&NewStructOps,
	"ValueOrBBKey_Int32",
	Z_Construct_UScriptStruct_FValueOrBBKey_Int32_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValueOrBBKey_Int32_Statics::PropPointers),
	sizeof(FValueOrBBKey_Int32),
	alignof(FValueOrBBKey_Int32),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValueOrBBKey_Int32_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FValueOrBBKey_Int32_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FValueOrBBKey_Int32()
{
	if (!Z_Registration_Info_UScriptStruct_ValueOrBBKey_Int32.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ValueOrBBKey_Int32.InnerSingleton, Z_Construct_UScriptStruct_FValueOrBBKey_Int32_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ValueOrBBKey_Int32.InnerSingleton;
}
// End ScriptStruct FValueOrBBKey_Int32

// Begin ScriptStruct FValueOrBBKey_Name
static_assert(std::is_polymorphic<FValueOrBBKey_Name>() == std::is_polymorphic<FValueOrBlackboardKeyBase>(), "USTRUCT FValueOrBBKey_Name cannot be polymorphic unless super FValueOrBlackboardKeyBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ValueOrBBKey_Name;
class UScriptStruct* FValueOrBBKey_Name::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ValueOrBBKey_Name.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ValueOrBBKey_Name.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FValueOrBBKey_Name, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("ValueOrBBKey_Name"));
	}
	return Z_Registration_Info_UScriptStruct_ValueOrBBKey_Name.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FValueOrBBKey_Name>()
{
	return FValueOrBBKey_Name::StaticStruct();
}
struct Z_Construct_UScriptStruct_FValueOrBBKey_Name_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/ValueOrBBKey.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Value" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/ValueOrBBKey.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_DefaultValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FValueOrBBKey_Name>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FValueOrBBKey_Name_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FValueOrBBKey_Name, DefaultValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValue_MetaData), NewProp_DefaultValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FValueOrBBKey_Name_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FValueOrBBKey_Name_Statics::NewProp_DefaultValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValueOrBBKey_Name_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FValueOrBBKey_Name_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	Z_Construct_UScriptStruct_FValueOrBlackboardKeyBase,
	&NewStructOps,
	"ValueOrBBKey_Name",
	Z_Construct_UScriptStruct_FValueOrBBKey_Name_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValueOrBBKey_Name_Statics::PropPointers),
	sizeof(FValueOrBBKey_Name),
	alignof(FValueOrBBKey_Name),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValueOrBBKey_Name_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FValueOrBBKey_Name_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FValueOrBBKey_Name()
{
	if (!Z_Registration_Info_UScriptStruct_ValueOrBBKey_Name.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ValueOrBBKey_Name.InnerSingleton, Z_Construct_UScriptStruct_FValueOrBBKey_Name_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ValueOrBBKey_Name.InnerSingleton;
}
// End ScriptStruct FValueOrBBKey_Name

// Begin ScriptStruct FValueOrBBKey_String
static_assert(std::is_polymorphic<FValueOrBBKey_String>() == std::is_polymorphic<FValueOrBlackboardKeyBase>(), "USTRUCT FValueOrBBKey_String cannot be polymorphic unless super FValueOrBlackboardKeyBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ValueOrBBKey_String;
class UScriptStruct* FValueOrBBKey_String::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ValueOrBBKey_String.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ValueOrBBKey_String.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FValueOrBBKey_String, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("ValueOrBBKey_String"));
	}
	return Z_Registration_Info_UScriptStruct_ValueOrBBKey_String.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FValueOrBBKey_String>()
{
	return FValueOrBBKey_String::StaticStruct();
}
struct Z_Construct_UScriptStruct_FValueOrBBKey_String_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/ValueOrBBKey.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Value" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/ValueOrBBKey.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FValueOrBBKey_String>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FValueOrBBKey_String_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FValueOrBBKey_String, DefaultValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValue_MetaData), NewProp_DefaultValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FValueOrBBKey_String_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FValueOrBBKey_String_Statics::NewProp_DefaultValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValueOrBBKey_String_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FValueOrBBKey_String_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	Z_Construct_UScriptStruct_FValueOrBlackboardKeyBase,
	&NewStructOps,
	"ValueOrBBKey_String",
	Z_Construct_UScriptStruct_FValueOrBBKey_String_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValueOrBBKey_String_Statics::PropPointers),
	sizeof(FValueOrBBKey_String),
	alignof(FValueOrBBKey_String),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValueOrBBKey_String_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FValueOrBBKey_String_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FValueOrBBKey_String()
{
	if (!Z_Registration_Info_UScriptStruct_ValueOrBBKey_String.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ValueOrBBKey_String.InnerSingleton, Z_Construct_UScriptStruct_FValueOrBBKey_String_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ValueOrBBKey_String.InnerSingleton;
}
// End ScriptStruct FValueOrBBKey_String

// Begin ScriptStruct FValueOrBBKey_Object
static_assert(std::is_polymorphic<FValueOrBBKey_Object>() == std::is_polymorphic<FValueOrBlackboardKeyBase>(), "USTRUCT FValueOrBBKey_Object cannot be polymorphic unless super FValueOrBlackboardKeyBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ValueOrBBKey_Object;
class UScriptStruct* FValueOrBBKey_Object::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ValueOrBBKey_Object.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ValueOrBBKey_Object.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FValueOrBBKey_Object, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("ValueOrBBKey_Object"));
	}
	return Z_Registration_Info_UScriptStruct_ValueOrBBKey_Object.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FValueOrBBKey_Object>()
{
	return FValueOrBBKey_Object::StaticStruct();
}
struct Z_Construct_UScriptStruct_FValueOrBBKey_Object_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/ValueOrBBKey.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Value" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/ValueOrBBKey.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseClass_MetaData[] = {
		{ "AllowAbstract", "1" },
		{ "Category", "Value" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/ValueOrBBKey.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultValue;
	static const UECodeGen_Private::FClassPropertyParams NewProp_BaseClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FValueOrBBKey_Object>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FValueOrBBKey_Object_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0124080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FValueOrBBKey_Object, DefaultValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValue_MetaData), NewProp_DefaultValue_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FValueOrBBKey_Object_Statics::NewProp_BaseClass = { "BaseClass", nullptr, (EPropertyFlags)0x0124080000010001, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FValueOrBBKey_Object, BaseClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseClass_MetaData), NewProp_BaseClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FValueOrBBKey_Object_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FValueOrBBKey_Object_Statics::NewProp_DefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FValueOrBBKey_Object_Statics::NewProp_BaseClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValueOrBBKey_Object_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FValueOrBBKey_Object_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	Z_Construct_UScriptStruct_FValueOrBlackboardKeyBase,
	&NewStructOps,
	"ValueOrBBKey_Object",
	Z_Construct_UScriptStruct_FValueOrBBKey_Object_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValueOrBBKey_Object_Statics::PropPointers),
	sizeof(FValueOrBBKey_Object),
	alignof(FValueOrBBKey_Object),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValueOrBBKey_Object_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FValueOrBBKey_Object_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FValueOrBBKey_Object()
{
	if (!Z_Registration_Info_UScriptStruct_ValueOrBBKey_Object.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ValueOrBBKey_Object.InnerSingleton, Z_Construct_UScriptStruct_FValueOrBBKey_Object_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ValueOrBBKey_Object.InnerSingleton;
}
// End ScriptStruct FValueOrBBKey_Object

// Begin ScriptStruct FValueOrBBKey_Rotator
static_assert(std::is_polymorphic<FValueOrBBKey_Rotator>() == std::is_polymorphic<FValueOrBlackboardKeyBase>(), "USTRUCT FValueOrBBKey_Rotator cannot be polymorphic unless super FValueOrBlackboardKeyBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ValueOrBBKey_Rotator;
class UScriptStruct* FValueOrBBKey_Rotator::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ValueOrBBKey_Rotator.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ValueOrBBKey_Rotator.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FValueOrBBKey_Rotator, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("ValueOrBBKey_Rotator"));
	}
	return Z_Registration_Info_UScriptStruct_ValueOrBBKey_Rotator.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FValueOrBBKey_Rotator>()
{
	return FValueOrBBKey_Rotator::StaticStruct();
}
struct Z_Construct_UScriptStruct_FValueOrBBKey_Rotator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/ValueOrBBKey.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Value" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/ValueOrBBKey.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FValueOrBBKey_Rotator>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FValueOrBBKey_Rotator_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FValueOrBBKey_Rotator, DefaultValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValue_MetaData), NewProp_DefaultValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FValueOrBBKey_Rotator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FValueOrBBKey_Rotator_Statics::NewProp_DefaultValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValueOrBBKey_Rotator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FValueOrBBKey_Rotator_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	Z_Construct_UScriptStruct_FValueOrBlackboardKeyBase,
	&NewStructOps,
	"ValueOrBBKey_Rotator",
	Z_Construct_UScriptStruct_FValueOrBBKey_Rotator_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValueOrBBKey_Rotator_Statics::PropPointers),
	sizeof(FValueOrBBKey_Rotator),
	alignof(FValueOrBBKey_Rotator),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValueOrBBKey_Rotator_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FValueOrBBKey_Rotator_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FValueOrBBKey_Rotator()
{
	if (!Z_Registration_Info_UScriptStruct_ValueOrBBKey_Rotator.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ValueOrBBKey_Rotator.InnerSingleton, Z_Construct_UScriptStruct_FValueOrBBKey_Rotator_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ValueOrBBKey_Rotator.InnerSingleton;
}
// End ScriptStruct FValueOrBBKey_Rotator

// Begin ScriptStruct FValueOrBBKey_Vector
static_assert(std::is_polymorphic<FValueOrBBKey_Vector>() == std::is_polymorphic<FValueOrBlackboardKeyBase>(), "USTRUCT FValueOrBBKey_Vector cannot be polymorphic unless super FValueOrBlackboardKeyBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ValueOrBBKey_Vector;
class UScriptStruct* FValueOrBBKey_Vector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ValueOrBBKey_Vector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ValueOrBBKey_Vector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FValueOrBBKey_Vector, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("ValueOrBBKey_Vector"));
	}
	return Z_Registration_Info_UScriptStruct_ValueOrBBKey_Vector.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FValueOrBBKey_Vector>()
{
	return FValueOrBBKey_Vector::StaticStruct();
}
struct Z_Construct_UScriptStruct_FValueOrBBKey_Vector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/ValueOrBBKey.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Value" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/ValueOrBBKey.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FValueOrBBKey_Vector>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FValueOrBBKey_Vector_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FValueOrBBKey_Vector, DefaultValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValue_MetaData), NewProp_DefaultValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FValueOrBBKey_Vector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FValueOrBBKey_Vector_Statics::NewProp_DefaultValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValueOrBBKey_Vector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FValueOrBBKey_Vector_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	Z_Construct_UScriptStruct_FValueOrBlackboardKeyBase,
	&NewStructOps,
	"ValueOrBBKey_Vector",
	Z_Construct_UScriptStruct_FValueOrBBKey_Vector_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValueOrBBKey_Vector_Statics::PropPointers),
	sizeof(FValueOrBBKey_Vector),
	alignof(FValueOrBBKey_Vector),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValueOrBBKey_Vector_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FValueOrBBKey_Vector_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FValueOrBBKey_Vector()
{
	if (!Z_Registration_Info_UScriptStruct_ValueOrBBKey_Vector.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ValueOrBBKey_Vector.InnerSingleton, Z_Construct_UScriptStruct_FValueOrBBKey_Vector_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ValueOrBBKey_Vector.InnerSingleton;
}
// End ScriptStruct FValueOrBBKey_Vector

// Begin ScriptStruct FValueOrBBKey_Struct
static_assert(std::is_polymorphic<FValueOrBBKey_Struct>() == std::is_polymorphic<FValueOrBlackboardKeyBase>(), "USTRUCT FValueOrBBKey_Struct cannot be polymorphic unless super FValueOrBlackboardKeyBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ValueOrBBKey_Struct;
class UScriptStruct* FValueOrBBKey_Struct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ValueOrBBKey_Struct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ValueOrBBKey_Struct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FValueOrBBKey_Struct, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("ValueOrBBKey_Struct"));
	}
	return Z_Registration_Info_UScriptStruct_ValueOrBBKey_Struct.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FValueOrBBKey_Struct>()
{
	return FValueOrBBKey_Struct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FValueOrBBKey_Struct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/ValueOrBBKey.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Value" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/ValueOrBBKey.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanEditDefaultValueType_MetaData[] = {
		{ "Category", "Value" },
		{ "Comment", "/** Exist to give a way for the details to know if the DefaultValue type can be edited. */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/ValueOrBBKey.h" },
		{ "ToolTip", "Exist to give a way for the details to know if the DefaultValue type can be edited." },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultValue;
#if WITH_EDITORONLY_DATA
	static void NewProp_bCanEditDefaultValueType_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanEditDefaultValueType;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FValueOrBBKey_Struct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FValueOrBBKey_Struct_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FValueOrBBKey_Struct, DefaultValue), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValue_MetaData), NewProp_DefaultValue_MetaData) }; // 111383296
#if WITH_EDITORONLY_DATA
void Z_Construct_UScriptStruct_FValueOrBBKey_Struct_Statics::NewProp_bCanEditDefaultValueType_SetBit(void* Obj)
{
	((FValueOrBBKey_Struct*)Obj)->bCanEditDefaultValueType = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FValueOrBBKey_Struct_Statics::NewProp_bCanEditDefaultValueType = { "bCanEditDefaultValueType", nullptr, (EPropertyFlags)0x0020080800010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FValueOrBBKey_Struct), &Z_Construct_UScriptStruct_FValueOrBBKey_Struct_Statics::NewProp_bCanEditDefaultValueType_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanEditDefaultValueType_MetaData), NewProp_bCanEditDefaultValueType_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FValueOrBBKey_Struct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FValueOrBBKey_Struct_Statics::NewProp_DefaultValue,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FValueOrBBKey_Struct_Statics::NewProp_bCanEditDefaultValueType,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValueOrBBKey_Struct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FValueOrBBKey_Struct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	Z_Construct_UScriptStruct_FValueOrBlackboardKeyBase,
	&NewStructOps,
	"ValueOrBBKey_Struct",
	Z_Construct_UScriptStruct_FValueOrBBKey_Struct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValueOrBBKey_Struct_Statics::PropPointers),
	sizeof(FValueOrBBKey_Struct),
	alignof(FValueOrBBKey_Struct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValueOrBBKey_Struct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FValueOrBBKey_Struct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FValueOrBBKey_Struct()
{
	if (!Z_Registration_Info_UScriptStruct_ValueOrBBKey_Struct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ValueOrBBKey_Struct.InnerSingleton, Z_Construct_UScriptStruct_FValueOrBBKey_Struct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ValueOrBBKey_Struct.InnerSingleton;
}
// End ScriptStruct FValueOrBBKey_Struct

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_ValueOrBBKey_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FValueOrBlackboardKeyBase::StaticStruct, Z_Construct_UScriptStruct_FValueOrBlackboardKeyBase_Statics::NewStructOps, TEXT("ValueOrBlackboardKeyBase"), &Z_Registration_Info_UScriptStruct_ValueOrBlackboardKeyBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FValueOrBlackboardKeyBase), 3741303055U) },
		{ FValueOrBBKey_Bool::StaticStruct, Z_Construct_UScriptStruct_FValueOrBBKey_Bool_Statics::NewStructOps, TEXT("ValueOrBBKey_Bool"), &Z_Registration_Info_UScriptStruct_ValueOrBBKey_Bool, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FValueOrBBKey_Bool), 1056548058U) },
		{ FValueOrBBKey_Class::StaticStruct, Z_Construct_UScriptStruct_FValueOrBBKey_Class_Statics::NewStructOps, TEXT("ValueOrBBKey_Class"), &Z_Registration_Info_UScriptStruct_ValueOrBBKey_Class, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FValueOrBBKey_Class), 2395019718U) },
		{ FValueOrBBKey_Enum::StaticStruct, Z_Construct_UScriptStruct_FValueOrBBKey_Enum_Statics::NewStructOps, TEXT("ValueOrBBKey_Enum"), &Z_Registration_Info_UScriptStruct_ValueOrBBKey_Enum, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FValueOrBBKey_Enum), 2149350752U) },
		{ FValueOrBBKey_Float::StaticStruct, Z_Construct_UScriptStruct_FValueOrBBKey_Float_Statics::NewStructOps, TEXT("ValueOrBBKey_Float"), &Z_Registration_Info_UScriptStruct_ValueOrBBKey_Float, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FValueOrBBKey_Float), 4044354920U) },
		{ FValueOrBBKey_Int32::StaticStruct, Z_Construct_UScriptStruct_FValueOrBBKey_Int32_Statics::NewStructOps, TEXT("ValueOrBBKey_Int32"), &Z_Registration_Info_UScriptStruct_ValueOrBBKey_Int32, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FValueOrBBKey_Int32), 3826788361U) },
		{ FValueOrBBKey_Name::StaticStruct, Z_Construct_UScriptStruct_FValueOrBBKey_Name_Statics::NewStructOps, TEXT("ValueOrBBKey_Name"), &Z_Registration_Info_UScriptStruct_ValueOrBBKey_Name, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FValueOrBBKey_Name), 1582672531U) },
		{ FValueOrBBKey_String::StaticStruct, Z_Construct_UScriptStruct_FValueOrBBKey_String_Statics::NewStructOps, TEXT("ValueOrBBKey_String"), &Z_Registration_Info_UScriptStruct_ValueOrBBKey_String, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FValueOrBBKey_String), 3908181354U) },
		{ FValueOrBBKey_Object::StaticStruct, Z_Construct_UScriptStruct_FValueOrBBKey_Object_Statics::NewStructOps, TEXT("ValueOrBBKey_Object"), &Z_Registration_Info_UScriptStruct_ValueOrBBKey_Object, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FValueOrBBKey_Object), 2783390860U) },
		{ FValueOrBBKey_Rotator::StaticStruct, Z_Construct_UScriptStruct_FValueOrBBKey_Rotator_Statics::NewStructOps, TEXT("ValueOrBBKey_Rotator"), &Z_Registration_Info_UScriptStruct_ValueOrBBKey_Rotator, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FValueOrBBKey_Rotator), 2458019603U) },
		{ FValueOrBBKey_Vector::StaticStruct, Z_Construct_UScriptStruct_FValueOrBBKey_Vector_Statics::NewStructOps, TEXT("ValueOrBBKey_Vector"), &Z_Registration_Info_UScriptStruct_ValueOrBBKey_Vector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FValueOrBBKey_Vector), 233808226U) },
		{ FValueOrBBKey_Struct::StaticStruct, Z_Construct_UScriptStruct_FValueOrBBKey_Struct_Statics::NewStructOps, TEXT("ValueOrBBKey_Struct"), &Z_Registration_Info_UScriptStruct_ValueOrBBKey_Struct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FValueOrBBKey_Struct), 2503478642U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_ValueOrBBKey_h_1865517276(TEXT("/Script/AIModule"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_ValueOrBBKey_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_ValueOrBBKey_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
