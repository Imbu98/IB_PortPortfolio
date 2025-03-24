// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Private/Tests/AutoRTFM/AutoRTFMTestObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoRTFMTestObject() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UAutoRTFMTestObject();
ENGINE_API UClass* Z_Construct_UClass_UAutoRTFMTestObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EComponentPhysicsStateChange();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UAutoRTFMTestObject Function OnComponentPhysicsStateChanged
struct Z_Construct_UFunction_UAutoRTFMTestObject_OnComponentPhysicsStateChanged_Statics
{
	struct AutoRTFMTestObject_eventOnComponentPhysicsStateChanged_Parms
	{
		UPrimitiveComponent* ChangedComponent;
		EComponentPhysicsStateChange StateChange;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/AutoRTFM/AutoRTFMTestObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChangedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChangedComponent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_StateChange_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_StateChange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAutoRTFMTestObject_OnComponentPhysicsStateChanged_Statics::NewProp_ChangedComponent = { "ChangedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoRTFMTestObject_eventOnComponentPhysicsStateChanged_Parms, ChangedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChangedComponent_MetaData), NewProp_ChangedComponent_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAutoRTFMTestObject_OnComponentPhysicsStateChanged_Statics::NewProp_StateChange_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAutoRTFMTestObject_OnComponentPhysicsStateChanged_Statics::NewProp_StateChange = { "StateChange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoRTFMTestObject_eventOnComponentPhysicsStateChanged_Parms, StateChange), Z_Construct_UEnum_Engine_EComponentPhysicsStateChange, METADATA_PARAMS(0, nullptr) }; // 1948275289
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutoRTFMTestObject_OnComponentPhysicsStateChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoRTFMTestObject_OnComponentPhysicsStateChanged_Statics::NewProp_ChangedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoRTFMTestObject_OnComponentPhysicsStateChanged_Statics::NewProp_StateChange_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoRTFMTestObject_OnComponentPhysicsStateChanged_Statics::NewProp_StateChange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoRTFMTestObject_OnComponentPhysicsStateChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoRTFMTestObject_OnComponentPhysicsStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutoRTFMTestObject, nullptr, "OnComponentPhysicsStateChanged", nullptr, nullptr, Z_Construct_UFunction_UAutoRTFMTestObject_OnComponentPhysicsStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoRTFMTestObject_OnComponentPhysicsStateChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAutoRTFMTestObject_OnComponentPhysicsStateChanged_Statics::AutoRTFMTestObject_eventOnComponentPhysicsStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoRTFMTestObject_OnComponentPhysicsStateChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutoRTFMTestObject_OnComponentPhysicsStateChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAutoRTFMTestObject_OnComponentPhysicsStateChanged_Statics::AutoRTFMTestObject_eventOnComponentPhysicsStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAutoRTFMTestObject_OnComponentPhysicsStateChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutoRTFMTestObject_OnComponentPhysicsStateChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAutoRTFMTestObject::execOnComponentPhysicsStateChanged)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_ChangedComponent);
	P_GET_ENUM(EComponentPhysicsStateChange,Z_Param_StateChange);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnComponentPhysicsStateChanged(Z_Param_ChangedComponent,EComponentPhysicsStateChange(Z_Param_StateChange));
	P_NATIVE_END;
}
// End Class UAutoRTFMTestObject Function OnComponentPhysicsStateChanged

// Begin Class UAutoRTFMTestObject
void UAutoRTFMTestObject::StaticRegisterNativesUAutoRTFMTestObject()
{
	UClass* Class = UAutoRTFMTestObject::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnComponentPhysicsStateChanged", &UAutoRTFMTestObject::execOnComponentPhysicsStateChanged },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAutoRTFMTestObject);
UClass* Z_Construct_UClass_UAutoRTFMTestObject_NoRegister()
{
	return UAutoRTFMTestObject::StaticClass();
}
struct Z_Construct_UClass_UAutoRTFMTestObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/AutoRTFM/AutoRTFMTestObject.h" },
		{ "ModuleRelativePath", "Private/Tests/AutoRTFM/AutoRTFMTestObject.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAutoRTFMTestObject_OnComponentPhysicsStateChanged, "OnComponentPhysicsStateChanged" }, // 1182841994
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutoRTFMTestObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAutoRTFMTestObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoRTFMTestObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAutoRTFMTestObject_Statics::ClassParams = {
	&UAutoRTFMTestObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoRTFMTestObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UAutoRTFMTestObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAutoRTFMTestObject()
{
	if (!Z_Registration_Info_UClass_UAutoRTFMTestObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAutoRTFMTestObject.OuterSingleton, Z_Construct_UClass_UAutoRTFMTestObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAutoRTFMTestObject.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UAutoRTFMTestObject>()
{
	return UAutoRTFMTestObject::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAutoRTFMTestObject);
UAutoRTFMTestObject::~UAutoRTFMTestObject() {}
// End Class UAutoRTFMTestObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Tests_AutoRTFM_AutoRTFMTestObject_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAutoRTFMTestObject, UAutoRTFMTestObject::StaticClass, TEXT("UAutoRTFMTestObject"), &Z_Registration_Info_UClass_UAutoRTFMTestObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAutoRTFMTestObject), 1698908248U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Tests_AutoRTFM_AutoRTFMTestObject_h_1674346216(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Tests_AutoRTFM_AutoRTFMTestObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Tests_AutoRTFM_AutoRTFMTestObject_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
