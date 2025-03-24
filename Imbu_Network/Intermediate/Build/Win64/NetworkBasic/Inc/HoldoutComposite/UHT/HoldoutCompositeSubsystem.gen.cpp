// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoldoutComposite/Public/HoldoutCompositeSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoldoutCompositeSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
HOLDOUTCOMPOSITE_API UClass* Z_Construct_UClass_UHoldoutCompositeSubsystem();
HOLDOUTCOMPOSITE_API UClass* Z_Construct_UClass_UHoldoutCompositeSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_HoldoutComposite();
// End Cross Module References

// Begin Class UHoldoutCompositeSubsystem Function RegisterPrimitive
struct Z_Construct_UFunction_UHoldoutCompositeSubsystem_RegisterPrimitive_Statics
{
	struct HoldoutCompositeSubsystem_eventRegisterPrimitive_Parms
	{
		TSoftObjectPtr<UPrimitiveComponent> InPrimitiveComponent;
		bool bInHoldoutState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Holdout Composite" },
		{ "Comment", "/* Register a single primitive for compositing. */" },
		{ "CPP_Default_bInHoldoutState", "true" },
		{ "ModuleRelativePath", "Public/HoldoutCompositeSubsystem.h" },
		{ "ToolTip", "Register a single primitive for compositing." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_InPrimitiveComponent;
	static void NewProp_bInHoldoutState_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInHoldoutState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UHoldoutCompositeSubsystem_RegisterPrimitive_Statics::NewProp_InPrimitiveComponent = { "InPrimitiveComponent", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoldoutCompositeSubsystem_eventRegisterPrimitive_Parms, InPrimitiveComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UHoldoutCompositeSubsystem_RegisterPrimitive_Statics::NewProp_bInHoldoutState_SetBit(void* Obj)
{
	((HoldoutCompositeSubsystem_eventRegisterPrimitive_Parms*)Obj)->bInHoldoutState = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoldoutCompositeSubsystem_RegisterPrimitive_Statics::NewProp_bInHoldoutState = { "bInHoldoutState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoldoutCompositeSubsystem_eventRegisterPrimitive_Parms), &Z_Construct_UFunction_UHoldoutCompositeSubsystem_RegisterPrimitive_Statics::NewProp_bInHoldoutState_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoldoutCompositeSubsystem_RegisterPrimitive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoldoutCompositeSubsystem_RegisterPrimitive_Statics::NewProp_InPrimitiveComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoldoutCompositeSubsystem_RegisterPrimitive_Statics::NewProp_bInHoldoutState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoldoutCompositeSubsystem_RegisterPrimitive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoldoutCompositeSubsystem_RegisterPrimitive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoldoutCompositeSubsystem, nullptr, "RegisterPrimitive", nullptr, nullptr, Z_Construct_UFunction_UHoldoutCompositeSubsystem_RegisterPrimitive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoldoutCompositeSubsystem_RegisterPrimitive_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHoldoutCompositeSubsystem_RegisterPrimitive_Statics::HoldoutCompositeSubsystem_eventRegisterPrimitive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoldoutCompositeSubsystem_RegisterPrimitive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoldoutCompositeSubsystem_RegisterPrimitive_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHoldoutCompositeSubsystem_RegisterPrimitive_Statics::HoldoutCompositeSubsystem_eventRegisterPrimitive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHoldoutCompositeSubsystem_RegisterPrimitive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoldoutCompositeSubsystem_RegisterPrimitive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHoldoutCompositeSubsystem::execRegisterPrimitive)
{
	P_GET_SOFTOBJECT(TSoftObjectPtr<UPrimitiveComponent>,Z_Param_InPrimitiveComponent);
	P_GET_UBOOL(Z_Param_bInHoldoutState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterPrimitive(Z_Param_InPrimitiveComponent,Z_Param_bInHoldoutState);
	P_NATIVE_END;
}
// End Class UHoldoutCompositeSubsystem Function RegisterPrimitive

// Begin Class UHoldoutCompositeSubsystem Function UnregisterPrimitive
struct Z_Construct_UFunction_UHoldoutCompositeSubsystem_UnregisterPrimitive_Statics
{
	struct HoldoutCompositeSubsystem_eventUnregisterPrimitive_Parms
	{
		TSoftObjectPtr<UPrimitiveComponent> InPrimitiveComponent;
		bool bInHoldoutState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Holdout Composite" },
		{ "Comment", "/* Unregister a single primitive from compositing. */" },
		{ "CPP_Default_bInHoldoutState", "false" },
		{ "ModuleRelativePath", "Public/HoldoutCompositeSubsystem.h" },
		{ "ToolTip", "Unregister a single primitive from compositing." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_InPrimitiveComponent;
	static void NewProp_bInHoldoutState_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInHoldoutState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UHoldoutCompositeSubsystem_UnregisterPrimitive_Statics::NewProp_InPrimitiveComponent = { "InPrimitiveComponent", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HoldoutCompositeSubsystem_eventUnregisterPrimitive_Parms, InPrimitiveComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UHoldoutCompositeSubsystem_UnregisterPrimitive_Statics::NewProp_bInHoldoutState_SetBit(void* Obj)
{
	((HoldoutCompositeSubsystem_eventUnregisterPrimitive_Parms*)Obj)->bInHoldoutState = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoldoutCompositeSubsystem_UnregisterPrimitive_Statics::NewProp_bInHoldoutState = { "bInHoldoutState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoldoutCompositeSubsystem_eventUnregisterPrimitive_Parms), &Z_Construct_UFunction_UHoldoutCompositeSubsystem_UnregisterPrimitive_Statics::NewProp_bInHoldoutState_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoldoutCompositeSubsystem_UnregisterPrimitive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoldoutCompositeSubsystem_UnregisterPrimitive_Statics::NewProp_InPrimitiveComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoldoutCompositeSubsystem_UnregisterPrimitive_Statics::NewProp_bInHoldoutState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoldoutCompositeSubsystem_UnregisterPrimitive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoldoutCompositeSubsystem_UnregisterPrimitive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoldoutCompositeSubsystem, nullptr, "UnregisterPrimitive", nullptr, nullptr, Z_Construct_UFunction_UHoldoutCompositeSubsystem_UnregisterPrimitive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoldoutCompositeSubsystem_UnregisterPrimitive_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHoldoutCompositeSubsystem_UnregisterPrimitive_Statics::HoldoutCompositeSubsystem_eventUnregisterPrimitive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoldoutCompositeSubsystem_UnregisterPrimitive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoldoutCompositeSubsystem_UnregisterPrimitive_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHoldoutCompositeSubsystem_UnregisterPrimitive_Statics::HoldoutCompositeSubsystem_eventUnregisterPrimitive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHoldoutCompositeSubsystem_UnregisterPrimitive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoldoutCompositeSubsystem_UnregisterPrimitive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHoldoutCompositeSubsystem::execUnregisterPrimitive)
{
	P_GET_SOFTOBJECT(TSoftObjectPtr<UPrimitiveComponent>,Z_Param_InPrimitiveComponent);
	P_GET_UBOOL(Z_Param_bInHoldoutState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnregisterPrimitive(Z_Param_InPrimitiveComponent,Z_Param_bInHoldoutState);
	P_NATIVE_END;
}
// End Class UHoldoutCompositeSubsystem Function UnregisterPrimitive

// Begin Class UHoldoutCompositeSubsystem
void UHoldoutCompositeSubsystem::StaticRegisterNativesUHoldoutCompositeSubsystem()
{
	UClass* Class = UHoldoutCompositeSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RegisterPrimitive", &UHoldoutCompositeSubsystem::execRegisterPrimitive },
		{ "UnregisterPrimitive", &UHoldoutCompositeSubsystem::execUnregisterPrimitive },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoldoutCompositeSubsystem);
UClass* Z_Construct_UClass_UHoldoutCompositeSubsystem_NoRegister()
{
	return UHoldoutCompositeSubsystem::StaticClass();
}
struct Z_Construct_UClass_UHoldoutCompositeSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Composite subsytem used as an interface to the (private) scene view extension.\n */" },
		{ "IncludePath", "HoldoutCompositeSubsystem.h" },
		{ "ModuleRelativePath", "Public/HoldoutCompositeSubsystem.h" },
		{ "ToolTip", "Composite subsytem used as an interface to the (private) scene view extension." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHoldoutCompositeSubsystem_RegisterPrimitive, "RegisterPrimitive" }, // 918331216
		{ &Z_Construct_UFunction_UHoldoutCompositeSubsystem_UnregisterPrimitive, "UnregisterPrimitive" }, // 4022956229
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoldoutCompositeSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHoldoutCompositeSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_HoldoutComposite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoldoutCompositeSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoldoutCompositeSubsystem_Statics::ClassParams = {
	&UHoldoutCompositeSubsystem::StaticClass,
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
	0x000000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoldoutCompositeSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoldoutCompositeSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoldoutCompositeSubsystem()
{
	if (!Z_Registration_Info_UClass_UHoldoutCompositeSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoldoutCompositeSubsystem.OuterSingleton, Z_Construct_UClass_UHoldoutCompositeSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoldoutCompositeSubsystem.OuterSingleton;
}
template<> HOLDOUTCOMPOSITE_API UClass* StaticClass<UHoldoutCompositeSubsystem>()
{
	return UHoldoutCompositeSubsystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoldoutCompositeSubsystem);
UHoldoutCompositeSubsystem::~UHoldoutCompositeSubsystem() {}
// End Class UHoldoutCompositeSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Compositing_HoldoutComposite_Source_HoldoutComposite_Public_HoldoutCompositeSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoldoutCompositeSubsystem, UHoldoutCompositeSubsystem::StaticClass, TEXT("UHoldoutCompositeSubsystem"), &Z_Registration_Info_UClass_UHoldoutCompositeSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoldoutCompositeSubsystem), 2820441819U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Compositing_HoldoutComposite_Source_HoldoutComposite_Public_HoldoutCompositeSubsystem_h_2848490033(TEXT("/Script/HoldoutComposite"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Compositing_HoldoutComposite_Source_HoldoutComposite_Public_HoldoutCompositeSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Compositing_HoldoutComposite_Source_HoldoutComposite_Public_HoldoutCompositeSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
