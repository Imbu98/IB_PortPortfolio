// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/CoreUObject/Public/VerseVM/VVMVerseClass.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVVMVerseClass() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UClassCookedMetaData_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UFunction();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UVerseClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UVerseClass_NoRegister();
COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EVerseEffectSet();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVerseClassVarAccessor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVerseClassVarAccessors();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVersePersistentVar();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVerseSessionVar();
UPackage* Z_Construct_UPackage__Script_CoreUObject();
// End Cross Module References

// Begin ScriptStruct FVersePersistentVar
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VersePersistentVar;
class UScriptStruct* FVersePersistentVar::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VersePersistentVar.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VersePersistentVar.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVersePersistentVar, (UObject*)Z_Construct_UPackage__Script_CoreUObject(), TEXT("VersePersistentVar"));
	}
	return Z_Registration_Info_UScriptStruct_VersePersistentVar.OuterSingleton;
}
template<> COREUOBJECT_API UScriptStruct* StaticStruct<FVersePersistentVar>()
{
	return FVersePersistentVar::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVersePersistentVar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VerseVM/VVMVerseClass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[] = {
		{ "ModuleRelativePath", "Public/VerseVM/VVMVerseClass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Property_MetaData[] = {
		{ "ModuleRelativePath", "Public/VerseVM/VVMVerseClass.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
	static const UECodeGen_Private::FFieldPathPropertyParams NewProp_Property;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVersePersistentVar>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVersePersistentVar_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVersePersistentVar, Path), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Path_MetaData), NewProp_Path_MetaData) };
const UECodeGen_Private::FFieldPathPropertyParams Z_Construct_UScriptStruct_FVersePersistentVar_Statics::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::FieldPath, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVersePersistentVar, Property), &FMapProperty::StaticClass, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Property_MetaData), NewProp_Property_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVersePersistentVar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersePersistentVar_Statics::NewProp_Path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersePersistentVar_Statics::NewProp_Property,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVersePersistentVar_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVersePersistentVar_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CoreUObject,
	nullptr,
	&NewStructOps,
	"VersePersistentVar",
	Z_Construct_UScriptStruct_FVersePersistentVar_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVersePersistentVar_Statics::PropPointers),
	sizeof(FVersePersistentVar),
	alignof(FVersePersistentVar),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVersePersistentVar_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVersePersistentVar_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVersePersistentVar()
{
	if (!Z_Registration_Info_UScriptStruct_VersePersistentVar.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VersePersistentVar.InnerSingleton, Z_Construct_UScriptStruct_FVersePersistentVar_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VersePersistentVar.InnerSingleton;
}
// End ScriptStruct FVersePersistentVar

// Begin ScriptStruct FVerseSessionVar
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VerseSessionVar;
class UScriptStruct* FVerseSessionVar::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VerseSessionVar.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VerseSessionVar.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVerseSessionVar, (UObject*)Z_Construct_UPackage__Script_CoreUObject(), TEXT("VerseSessionVar"));
	}
	return Z_Registration_Info_UScriptStruct_VerseSessionVar.OuterSingleton;
}
template<> COREUOBJECT_API UScriptStruct* StaticStruct<FVerseSessionVar>()
{
	return FVerseSessionVar::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVerseSessionVar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VerseVM/VVMVerseClass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Property_MetaData[] = {
		{ "ModuleRelativePath", "Public/VerseVM/VVMVerseClass.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFieldPathPropertyParams NewProp_Property;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVerseSessionVar>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFieldPathPropertyParams Z_Construct_UScriptStruct_FVerseSessionVar_Statics::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::FieldPath, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVerseSessionVar, Property), &FMapProperty::StaticClass, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Property_MetaData), NewProp_Property_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVerseSessionVar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVerseSessionVar_Statics::NewProp_Property,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVerseSessionVar_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVerseSessionVar_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CoreUObject,
	nullptr,
	&NewStructOps,
	"VerseSessionVar",
	Z_Construct_UScriptStruct_FVerseSessionVar_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVerseSessionVar_Statics::PropPointers),
	sizeof(FVerseSessionVar),
	alignof(FVerseSessionVar),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVerseSessionVar_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVerseSessionVar_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVerseSessionVar()
{
	if (!Z_Registration_Info_UScriptStruct_VerseSessionVar.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VerseSessionVar.InnerSingleton, Z_Construct_UScriptStruct_FVerseSessionVar_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VerseSessionVar.InnerSingleton;
}
// End ScriptStruct FVerseSessionVar

// Begin ScriptStruct FVerseClassVarAccessor
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VerseClassVarAccessor;
class UScriptStruct* FVerseClassVarAccessor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VerseClassVarAccessor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VerseClassVarAccessor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVerseClassVarAccessor, (UObject*)Z_Construct_UPackage__Script_CoreUObject(), TEXT("VerseClassVarAccessor"));
	}
	return Z_Registration_Info_UScriptStruct_VerseClassVarAccessor.OuterSingleton;
}
template<> COREUOBJECT_API UScriptStruct* StaticStruct<FVerseClassVarAccessor>()
{
	return FVerseClassVarAccessor::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVerseClassVarAccessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VerseVM/VVMVerseClass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Func_MetaData[] = {
		{ "ModuleRelativePath", "Public/VerseVM/VVMVerseClass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsInstanceMember_MetaData[] = {
		{ "ModuleRelativePath", "Public/VerseVM/VVMVerseClass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsFallible_MetaData[] = {
		{ "ModuleRelativePath", "Public/VerseVM/VVMVerseClass.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Func;
	static void NewProp_bIsInstanceMember_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInstanceMember;
	static void NewProp_bIsFallible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFallible;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVerseClassVarAccessor>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVerseClassVarAccessor_Statics::NewProp_Func = { "Func", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVerseClassVarAccessor, Func), Z_Construct_UClass_UFunction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Func_MetaData), NewProp_Func_MetaData) };
void Z_Construct_UScriptStruct_FVerseClassVarAccessor_Statics::NewProp_bIsInstanceMember_SetBit(void* Obj)
{
	((FVerseClassVarAccessor*)Obj)->bIsInstanceMember = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVerseClassVarAccessor_Statics::NewProp_bIsInstanceMember = { "bIsInstanceMember", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVerseClassVarAccessor), &Z_Construct_UScriptStruct_FVerseClassVarAccessor_Statics::NewProp_bIsInstanceMember_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsInstanceMember_MetaData), NewProp_bIsInstanceMember_MetaData) };
void Z_Construct_UScriptStruct_FVerseClassVarAccessor_Statics::NewProp_bIsFallible_SetBit(void* Obj)
{
	((FVerseClassVarAccessor*)Obj)->bIsFallible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVerseClassVarAccessor_Statics::NewProp_bIsFallible = { "bIsFallible", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVerseClassVarAccessor), &Z_Construct_UScriptStruct_FVerseClassVarAccessor_Statics::NewProp_bIsFallible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsFallible_MetaData), NewProp_bIsFallible_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVerseClassVarAccessor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVerseClassVarAccessor_Statics::NewProp_Func,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVerseClassVarAccessor_Statics::NewProp_bIsInstanceMember,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVerseClassVarAccessor_Statics::NewProp_bIsFallible,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVerseClassVarAccessor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVerseClassVarAccessor_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CoreUObject,
	nullptr,
	&NewStructOps,
	"VerseClassVarAccessor",
	Z_Construct_UScriptStruct_FVerseClassVarAccessor_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVerseClassVarAccessor_Statics::PropPointers),
	sizeof(FVerseClassVarAccessor),
	alignof(FVerseClassVarAccessor),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVerseClassVarAccessor_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVerseClassVarAccessor_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVerseClassVarAccessor()
{
	if (!Z_Registration_Info_UScriptStruct_VerseClassVarAccessor.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VerseClassVarAccessor.InnerSingleton, Z_Construct_UScriptStruct_FVerseClassVarAccessor_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VerseClassVarAccessor.InnerSingleton;
}
// End ScriptStruct FVerseClassVarAccessor

// Begin ScriptStruct FVerseClassVarAccessors
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VerseClassVarAccessors;
class UScriptStruct* FVerseClassVarAccessors::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VerseClassVarAccessors.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VerseClassVarAccessors.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVerseClassVarAccessors, (UObject*)Z_Construct_UPackage__Script_CoreUObject(), TEXT("VerseClassVarAccessors"));
	}
	return Z_Registration_Info_UScriptStruct_VerseClassVarAccessors.OuterSingleton;
}
template<> COREUOBJECT_API UScriptStruct* StaticStruct<FVerseClassVarAccessors>()
{
	return FVerseClassVarAccessors::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVerseClassVarAccessors_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VerseVM/VVMVerseClass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Getters_MetaData[] = {
		{ "ModuleRelativePath", "Public/VerseVM/VVMVerseClass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Setters_MetaData[] = {
		{ "ModuleRelativePath", "Public/VerseVM/VVMVerseClass.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Getters_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Getters_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Getters;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Setters_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Setters_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Setters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVerseClassVarAccessors>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVerseClassVarAccessors_Statics::NewProp_Getters_ValueProp = { "Getters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FVerseClassVarAccessor, METADATA_PARAMS(0, nullptr) }; // 2886984102
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVerseClassVarAccessors_Statics::NewProp_Getters_Key_KeyProp = { "Getters_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FVerseClassVarAccessors_Statics::NewProp_Getters = { "Getters", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVerseClassVarAccessors, Getters), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Getters_MetaData), NewProp_Getters_MetaData) }; // 2886984102
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVerseClassVarAccessors_Statics::NewProp_Setters_ValueProp = { "Setters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FVerseClassVarAccessor, METADATA_PARAMS(0, nullptr) }; // 2886984102
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVerseClassVarAccessors_Statics::NewProp_Setters_Key_KeyProp = { "Setters_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FVerseClassVarAccessors_Statics::NewProp_Setters = { "Setters", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVerseClassVarAccessors, Setters), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Setters_MetaData), NewProp_Setters_MetaData) }; // 2886984102
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVerseClassVarAccessors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVerseClassVarAccessors_Statics::NewProp_Getters_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVerseClassVarAccessors_Statics::NewProp_Getters_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVerseClassVarAccessors_Statics::NewProp_Getters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVerseClassVarAccessors_Statics::NewProp_Setters_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVerseClassVarAccessors_Statics::NewProp_Setters_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVerseClassVarAccessors_Statics::NewProp_Setters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVerseClassVarAccessors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVerseClassVarAccessors_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CoreUObject,
	nullptr,
	&NewStructOps,
	"VerseClassVarAccessors",
	Z_Construct_UScriptStruct_FVerseClassVarAccessors_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVerseClassVarAccessors_Statics::PropPointers),
	sizeof(FVerseClassVarAccessors),
	alignof(FVerseClassVarAccessors),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVerseClassVarAccessors_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVerseClassVarAccessors_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVerseClassVarAccessors()
{
	if (!Z_Registration_Info_UScriptStruct_VerseClassVarAccessors.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VerseClassVarAccessors.InnerSingleton, Z_Construct_UScriptStruct_FVerseClassVarAccessors_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VerseClassVarAccessors.InnerSingleton;
}
// End ScriptStruct FVerseClassVarAccessors

// Begin Class UVerseClass
void UVerseClass::StaticRegisterNativesUVerseClass()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVerseClass);
UClass* Z_Construct_UClass_UVerseClass_NoRegister()
{
	return UVerseClass::StaticClass();
}
struct Z_Construct_UClass_UVerseClass_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VerseVM/VVMVerseClass.h" },
		{ "ModuleRelativePath", "Public/VerseVM/VVMVerseClass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SolClassFlags_MetaData[] = {
		{ "ModuleRelativePath", "Public/VerseVM/VVMVerseClass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskClasses_MetaData[] = {
		{ "Comment", "// All coroutine task classes belonging to this class (one for each coroutine in this class)\n" },
		{ "ModuleRelativePath", "Public/VerseVM/VVMVerseClass.h" },
		{ "ToolTip", "All coroutine task classes belonging to this class (one for each coroutine in this class)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitInstanceFunction_MetaData[] = {
		{ "Comment", "/** Initialization function */" },
		{ "ModuleRelativePath", "Public/VerseVM/VVMVerseClass.h" },
		{ "ToolTip", "Initialization function" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PersistentVars_MetaData[] = {
		{ "ModuleRelativePath", "Public/VerseVM/VVMVerseClass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionVars_MetaData[] = {
		{ "ModuleRelativePath", "Public/VerseVM/VVMVerseClass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VarAccessors_MetaData[] = {
		{ "ModuleRelativePath", "Public/VerseVM/VVMVerseClass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstructorEffects_MetaData[] = {
		{ "ModuleRelativePath", "Public/VerseVM/VVMVerseClass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MangledPackageVersePath_MetaData[] = {
		{ "ModuleRelativePath", "Public/VerseVM/VVMVerseClass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PackageRelativeVersePath_MetaData[] = {
		{ "Comment", "// Storing as FName since it's shared between classes\n" },
		{ "ModuleRelativePath", "Public/VerseVM/VVMVerseClass.h" },
		{ "ToolTip", "Storing as FName since it's shared between classes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayNameToUENameFunctionMap_MetaData[] = {
		{ "Comment", "//~ This map is technically wrong since the FName is caseless...\n" },
		{ "ModuleRelativePath", "Public/VerseVM/VVMVerseClass.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedCookedMetaDataPtr_MetaData[] = {
		{ "ModuleRelativePath", "Public/VerseVM/VVMVerseClass.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_SolClassFlags;
	static const UECodeGen_Private::FClassPropertyParams NewProp_TaskClasses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TaskClasses;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InitInstanceFunction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PersistentVars_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PersistentVars;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SessionVars_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SessionVars;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VarAccessors_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_VarAccessors_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_VarAccessors;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ConstructorEffects_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ConstructorEffects;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MangledPackageVersePath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PackageRelativeVersePath;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DisplayNameToUENameFunctionMap_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DisplayNameToUENameFunctionMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_DisplayNameToUENameFunctionMap;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedCookedMetaDataPtr;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVerseClass>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UVerseClass_Statics::NewProp_SolClassFlags = { "SolClassFlags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVerseClass, SolClassFlags), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SolClassFlags_MetaData), NewProp_SolClassFlags_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UVerseClass_Statics::NewProp_TaskClasses_Inner = { "TaskClasses", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UVerseClass_NoRegister, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVerseClass_Statics::NewProp_TaskClasses = { "TaskClasses", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVerseClass, TaskClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskClasses_MetaData), NewProp_TaskClasses_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVerseClass_Statics::NewProp_InitInstanceFunction = { "InitInstanceFunction", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVerseClass, InitInstanceFunction), Z_Construct_UClass_UFunction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitInstanceFunction_MetaData), NewProp_InitInstanceFunction_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVerseClass_Statics::NewProp_PersistentVars_Inner = { "PersistentVars", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVersePersistentVar, METADATA_PARAMS(0, nullptr) }; // 2406102649
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVerseClass_Statics::NewProp_PersistentVars = { "PersistentVars", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVerseClass, PersistentVars), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PersistentVars_MetaData), NewProp_PersistentVars_MetaData) }; // 2406102649
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVerseClass_Statics::NewProp_SessionVars_Inner = { "SessionVars", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVerseSessionVar, METADATA_PARAMS(0, nullptr) }; // 862238390
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVerseClass_Statics::NewProp_SessionVars = { "SessionVars", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVerseClass, SessionVars), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionVars_MetaData), NewProp_SessionVars_MetaData) }; // 862238390
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVerseClass_Statics::NewProp_VarAccessors_ValueProp = { "VarAccessors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FVerseClassVarAccessors, METADATA_PARAMS(0, nullptr) }; // 3303824436
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVerseClass_Statics::NewProp_VarAccessors_Key_KeyProp = { "VarAccessors_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVerseClass_Statics::NewProp_VarAccessors = { "VarAccessors", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVerseClass, VarAccessors), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VarAccessors_MetaData), NewProp_VarAccessors_MetaData) }; // 3303824436
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVerseClass_Statics::NewProp_ConstructorEffects_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVerseClass_Statics::NewProp_ConstructorEffects = { "ConstructorEffects", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVerseClass, ConstructorEffects), Z_Construct_UEnum_CoreUObject_EVerseEffectSet, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstructorEffects_MetaData), NewProp_ConstructorEffects_MetaData) }; // 3123768990
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVerseClass_Statics::NewProp_MangledPackageVersePath = { "MangledPackageVersePath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVerseClass, MangledPackageVersePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MangledPackageVersePath_MetaData), NewProp_MangledPackageVersePath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVerseClass_Statics::NewProp_PackageRelativeVersePath = { "PackageRelativeVersePath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVerseClass, PackageRelativeVersePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PackageRelativeVersePath_MetaData), NewProp_PackageRelativeVersePath_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVerseClass_Statics::NewProp_DisplayNameToUENameFunctionMap_ValueProp = { "DisplayNameToUENameFunctionMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVerseClass_Statics::NewProp_DisplayNameToUENameFunctionMap_Key_KeyProp = { "DisplayNameToUENameFunctionMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVerseClass_Statics::NewProp_DisplayNameToUENameFunctionMap = { "DisplayNameToUENameFunctionMap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVerseClass, DisplayNameToUENameFunctionMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayNameToUENameFunctionMap_MetaData), NewProp_DisplayNameToUENameFunctionMap_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVerseClass_Statics::NewProp_CachedCookedMetaDataPtr = { "CachedCookedMetaDataPtr", nullptr, (EPropertyFlags)0x0144000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVerseClass, CachedCookedMetaDataPtr), Z_Construct_UClass_UClassCookedMetaData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedCookedMetaDataPtr_MetaData), NewProp_CachedCookedMetaDataPtr_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVerseClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVerseClass_Statics::NewProp_SolClassFlags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVerseClass_Statics::NewProp_TaskClasses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVerseClass_Statics::NewProp_TaskClasses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVerseClass_Statics::NewProp_InitInstanceFunction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVerseClass_Statics::NewProp_PersistentVars_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVerseClass_Statics::NewProp_PersistentVars,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVerseClass_Statics::NewProp_SessionVars_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVerseClass_Statics::NewProp_SessionVars,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVerseClass_Statics::NewProp_VarAccessors_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVerseClass_Statics::NewProp_VarAccessors_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVerseClass_Statics::NewProp_VarAccessors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVerseClass_Statics::NewProp_ConstructorEffects_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVerseClass_Statics::NewProp_ConstructorEffects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVerseClass_Statics::NewProp_MangledPackageVersePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVerseClass_Statics::NewProp_PackageRelativeVersePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVerseClass_Statics::NewProp_DisplayNameToUENameFunctionMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVerseClass_Statics::NewProp_DisplayNameToUENameFunctionMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVerseClass_Statics::NewProp_DisplayNameToUENameFunctionMap,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVerseClass_Statics::NewProp_CachedCookedMetaDataPtr,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVerseClass_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVerseClass_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UClass,
	(UObject* (*)())Z_Construct_UPackage__Script_CoreUObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVerseClass_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVerseClass_Statics::ClassParams = {
	&UVerseClass::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVerseClass_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVerseClass_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVerseClass_Statics::Class_MetaDataParams), Z_Construct_UClass_UVerseClass_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVerseClass()
{
	if (!Z_Registration_Info_UClass_UVerseClass.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVerseClass.OuterSingleton, Z_Construct_UClass_UVerseClass_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVerseClass.OuterSingleton;
}
template<> COREUOBJECT_API UClass* StaticClass<UVerseClass>()
{
	return UVerseClass::StaticClass();
}
UVerseClass::UVerseClass(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVerseClass);
UVerseClass::~UVerseClass() {}
// End Class UVerseClass

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseClass_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FVersePersistentVar::StaticStruct, Z_Construct_UScriptStruct_FVersePersistentVar_Statics::NewStructOps, TEXT("VersePersistentVar"), &Z_Registration_Info_UScriptStruct_VersePersistentVar, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVersePersistentVar), 2406102649U) },
		{ FVerseSessionVar::StaticStruct, Z_Construct_UScriptStruct_FVerseSessionVar_Statics::NewStructOps, TEXT("VerseSessionVar"), &Z_Registration_Info_UScriptStruct_VerseSessionVar, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVerseSessionVar), 862238390U) },
		{ FVerseClassVarAccessor::StaticStruct, Z_Construct_UScriptStruct_FVerseClassVarAccessor_Statics::NewStructOps, TEXT("VerseClassVarAccessor"), &Z_Registration_Info_UScriptStruct_VerseClassVarAccessor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVerseClassVarAccessor), 2886984102U) },
		{ FVerseClassVarAccessors::StaticStruct, Z_Construct_UScriptStruct_FVerseClassVarAccessors_Statics::NewStructOps, TEXT("VerseClassVarAccessors"), &Z_Registration_Info_UScriptStruct_VerseClassVarAccessors, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVerseClassVarAccessors), 3303824436U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVerseClass, UVerseClass::StaticClass, TEXT("UVerseClass"), &Z_Registration_Info_UClass_UVerseClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVerseClass), 1641252540U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseClass_h_2427966731(TEXT("/Script/CoreUObject"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseClass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseClass_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseClass_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseClass_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
