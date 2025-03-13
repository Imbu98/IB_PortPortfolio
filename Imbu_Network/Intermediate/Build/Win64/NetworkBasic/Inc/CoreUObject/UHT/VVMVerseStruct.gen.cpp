// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/CoreUObject/Public/VerseVM/VVMVerseStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVVMVerseStruct() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UFunction();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UScriptStruct();
COREUOBJECT_API UClass* Z_Construct_UClass_UStructCookedMetaData_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UVerseClass_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UVerseStruct();
COREUOBJECT_API UClass* Z_Construct_UClass_UVerseStruct_NoRegister();
COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EVerseEffectSet();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
UPackage* Z_Construct_UPackage__Script_CoreUObject();
// End Cross Module References

// Begin Class UVerseStruct
void UVerseStruct::StaticRegisterNativesUVerseStruct()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVerseStruct);
UClass* Z_Construct_UClass_UVerseStruct_NoRegister()
{
	return UVerseStruct::StaticClass();
}
struct Z_Construct_UClass_UVerseStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VerseVM/VVMVerseStruct.h" },
		{ "ModuleRelativePath", "Public/VerseVM/VVMVerseStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerseClassFlags_MetaData[] = {
		{ "Comment", "/** EVerseClassFlags */" },
		{ "ModuleRelativePath", "Public/VerseVM/VVMVerseStruct.h" },
		{ "ToolTip", "EVerseClassFlags" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitFunction_MetaData[] = {
		{ "Comment", "/** Function used for initialization */" },
		{ "ModuleRelativePath", "Public/VerseVM/VVMVerseStruct.h" },
		{ "ToolTip", "Function used for initialization" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModuleClass_MetaData[] = {
		{ "Comment", "/** Parent module class */" },
		{ "ModuleRelativePath", "Public/VerseVM/VVMVerseStruct.h" },
		{ "ToolTip", "Parent module class" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[] = {
		{ "Comment", "/** GUID to be able to match old version of this struct to new one */" },
		{ "ModuleRelativePath", "Public/VerseVM/VVMVerseStruct.h" },
		{ "ToolTip", "GUID to be able to match old version of this struct to new one" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FactoryFunction_MetaData[] = {
		{ "ModuleRelativePath", "Public/VerseVM/VVMVerseStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideFactoryFunction_MetaData[] = {
		{ "ModuleRelativePath", "Public/VerseVM/VVMVerseStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstructorEffects_MetaData[] = {
		{ "ModuleRelativePath", "Public/VerseVM/VVMVerseStruct.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedCookedMetaDataPtr_MetaData[] = {
		{ "ModuleRelativePath", "Public/VerseVM/VVMVerseStruct.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_VerseClassFlags;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InitFunction;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ModuleClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Guid;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FactoryFunction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverrideFactoryFunction;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ConstructorEffects_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ConstructorEffects;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedCookedMetaDataPtr;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVerseStruct>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UVerseStruct_Statics::NewProp_VerseClassFlags = { "VerseClassFlags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVerseStruct, VerseClassFlags), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerseClassFlags_MetaData), NewProp_VerseClassFlags_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVerseStruct_Statics::NewProp_InitFunction = { "InitFunction", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVerseStruct, InitFunction), Z_Construct_UClass_UFunction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitFunction_MetaData), NewProp_InitFunction_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UVerseStruct_Statics::NewProp_ModuleClass = { "ModuleClass", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVerseStruct, ModuleClass), Z_Construct_UClass_UVerseClass_NoRegister, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModuleClass_MetaData), NewProp_ModuleClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVerseStruct_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVerseStruct, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Guid_MetaData), NewProp_Guid_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVerseStruct_Statics::NewProp_FactoryFunction = { "FactoryFunction", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVerseStruct, FactoryFunction), Z_Construct_UClass_UFunction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FactoryFunction_MetaData), NewProp_FactoryFunction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVerseStruct_Statics::NewProp_OverrideFactoryFunction = { "OverrideFactoryFunction", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVerseStruct, OverrideFactoryFunction), Z_Construct_UClass_UFunction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideFactoryFunction_MetaData), NewProp_OverrideFactoryFunction_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVerseStruct_Statics::NewProp_ConstructorEffects_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVerseStruct_Statics::NewProp_ConstructorEffects = { "ConstructorEffects", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVerseStruct, ConstructorEffects), Z_Construct_UEnum_CoreUObject_EVerseEffectSet, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstructorEffects_MetaData), NewProp_ConstructorEffects_MetaData) }; // 3123768990
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVerseStruct_Statics::NewProp_CachedCookedMetaDataPtr = { "CachedCookedMetaDataPtr", nullptr, (EPropertyFlags)0x0144000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVerseStruct, CachedCookedMetaDataPtr), Z_Construct_UClass_UStructCookedMetaData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedCookedMetaDataPtr_MetaData), NewProp_CachedCookedMetaDataPtr_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVerseStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVerseStruct_Statics::NewProp_VerseClassFlags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVerseStruct_Statics::NewProp_InitFunction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVerseStruct_Statics::NewProp_ModuleClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVerseStruct_Statics::NewProp_Guid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVerseStruct_Statics::NewProp_FactoryFunction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVerseStruct_Statics::NewProp_OverrideFactoryFunction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVerseStruct_Statics::NewProp_ConstructorEffects_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVerseStruct_Statics::NewProp_ConstructorEffects,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVerseStruct_Statics::NewProp_CachedCookedMetaDataPtr,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVerseStruct_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVerseStruct_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UScriptStruct,
	(UObject* (*)())Z_Construct_UPackage__Script_CoreUObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVerseStruct_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVerseStruct_Statics::ClassParams = {
	&UVerseStruct::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVerseStruct_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVerseStruct_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVerseStruct_Statics::Class_MetaDataParams), Z_Construct_UClass_UVerseStruct_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVerseStruct()
{
	if (!Z_Registration_Info_UClass_UVerseStruct.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVerseStruct.OuterSingleton, Z_Construct_UClass_UVerseStruct_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVerseStruct.OuterSingleton;
}
template<> COREUOBJECT_API UClass* StaticClass<UVerseStruct>()
{
	return UVerseStruct::StaticClass();
}
UVerseStruct::UVerseStruct(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVerseStruct);
UVerseStruct::~UVerseStruct() {}
// End Class UVerseStruct

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseStruct_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVerseStruct, UVerseStruct::StaticClass, TEXT("UVerseStruct"), &Z_Registration_Info_UClass_UVerseStruct, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVerseStruct), 2912124926U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseStruct_h_2209330677(TEXT("/Script/CoreUObject"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseStruct_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseStruct_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
