// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoldoutComposite/Public/HoldoutCompositeComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoldoutCompositeComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
HOLDOUTCOMPOSITE_API UClass* Z_Construct_UClass_UHoldoutCompositeComponent();
HOLDOUTCOMPOSITE_API UClass* Z_Construct_UClass_UHoldoutCompositeComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_HoldoutComposite();
// End Cross Module References

// Begin Class UHoldoutCompositeComponent Function IsEnabled
struct Z_Construct_UFunction_UHoldoutCompositeComponent_IsEnabled_Statics
{
	struct HoldoutCompositeComponent_eventIsEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Comment", "/* Get the enabled state of the component. */" },
		{ "ModuleRelativePath", "Public/HoldoutCompositeComponent.h" },
		{ "ToolTip", "Get the enabled state of the component." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UHoldoutCompositeComponent_IsEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HoldoutCompositeComponent_eventIsEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoldoutCompositeComponent_IsEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoldoutCompositeComponent_eventIsEnabled_Parms), &Z_Construct_UFunction_UHoldoutCompositeComponent_IsEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoldoutCompositeComponent_IsEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoldoutCompositeComponent_IsEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoldoutCompositeComponent_IsEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoldoutCompositeComponent_IsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoldoutCompositeComponent, nullptr, "IsEnabled", nullptr, nullptr, Z_Construct_UFunction_UHoldoutCompositeComponent_IsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoldoutCompositeComponent_IsEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHoldoutCompositeComponent_IsEnabled_Statics::HoldoutCompositeComponent_eventIsEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoldoutCompositeComponent_IsEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoldoutCompositeComponent_IsEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHoldoutCompositeComponent_IsEnabled_Statics::HoldoutCompositeComponent_eventIsEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHoldoutCompositeComponent_IsEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoldoutCompositeComponent_IsEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHoldoutCompositeComponent::execIsEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsEnabled();
	P_NATIVE_END;
}
// End Class UHoldoutCompositeComponent Function IsEnabled

// Begin Class UHoldoutCompositeComponent Function SetEnabled
struct Z_Construct_UFunction_UHoldoutCompositeComponent_SetEnabled_Statics
{
	struct HoldoutCompositeComponent_eventSetEnabled_Parms
	{
		bool bInEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Comment", "/* Set the enabled state of the component. */" },
		{ "ModuleRelativePath", "Public/HoldoutCompositeComponent.h" },
		{ "ToolTip", "Set the enabled state of the component." },
	};
#endif // WITH_METADATA
	static void NewProp_bInEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UHoldoutCompositeComponent_SetEnabled_Statics::NewProp_bInEnabled_SetBit(void* Obj)
{
	((HoldoutCompositeComponent_eventSetEnabled_Parms*)Obj)->bInEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoldoutCompositeComponent_SetEnabled_Statics::NewProp_bInEnabled = { "bInEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HoldoutCompositeComponent_eventSetEnabled_Parms), &Z_Construct_UFunction_UHoldoutCompositeComponent_SetEnabled_Statics::NewProp_bInEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoldoutCompositeComponent_SetEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoldoutCompositeComponent_SetEnabled_Statics::NewProp_bInEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoldoutCompositeComponent_SetEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoldoutCompositeComponent_SetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoldoutCompositeComponent, nullptr, "SetEnabled", nullptr, nullptr, Z_Construct_UFunction_UHoldoutCompositeComponent_SetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoldoutCompositeComponent_SetEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHoldoutCompositeComponent_SetEnabled_Statics::HoldoutCompositeComponent_eventSetEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHoldoutCompositeComponent_SetEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHoldoutCompositeComponent_SetEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHoldoutCompositeComponent_SetEnabled_Statics::HoldoutCompositeComponent_eventSetEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHoldoutCompositeComponent_SetEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHoldoutCompositeComponent_SetEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHoldoutCompositeComponent::execSetEnabled)
{
	P_GET_UBOOL(Z_Param_bInEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEnabled(Z_Param_bInEnabled);
	P_NATIVE_END;
}
// End Class UHoldoutCompositeComponent Function SetEnabled

// Begin Class UHoldoutCompositeComponent
void UHoldoutCompositeComponent::StaticRegisterNativesUHoldoutCompositeComponent()
{
	UClass* Class = UHoldoutCompositeComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "IsEnabled", &UHoldoutCompositeComponent::execIsEnabled },
		{ "SetEnabled", &UHoldoutCompositeComponent::execSetEnabled },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoldoutCompositeComponent);
UClass* Z_Construct_UClass_UHoldoutCompositeComponent_NoRegister()
{
	return UHoldoutCompositeComponent::StaticClass();
}
struct Z_Construct_UClass_UHoldoutCompositeComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering" },
		{ "HideCategories", "Activation Transform Lighting Rendering Tags Cooking Physics LOD AssetUserData Navigation Trigger PhysicsVolume" },
		{ "IncludePath", "HoldoutCompositeComponent.h" },
		{ "ModuleRelativePath", "Public/HoldoutCompositeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BlueprintGetter", "IsEnabled" },
		{ "BlueprintSetter", "SetEnabled" },
		{ "Category", "HoldoutComposite" },
		{ "Comment", "/* Whether or not the component activates the composite. */" },
		{ "ModuleRelativePath", "Public/HoldoutCompositeComponent.h" },
		{ "ToolTip", "Whether or not the component activates the composite." },
	};
#endif // WITH_METADATA
	static void NewProp_bIsEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHoldoutCompositeComponent_IsEnabled, "IsEnabled" }, // 2364875914
		{ &Z_Construct_UFunction_UHoldoutCompositeComponent_SetEnabled, "SetEnabled" }, // 3204474390
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoldoutCompositeComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UHoldoutCompositeComponent_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
{
	((UHoldoutCompositeComponent*)Obj)->bIsEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoldoutCompositeComponent_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHoldoutCompositeComponent), &Z_Construct_UClass_UHoldoutCompositeComponent_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsEnabled_MetaData), NewProp_bIsEnabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoldoutCompositeComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoldoutCompositeComponent_Statics::NewProp_bIsEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoldoutCompositeComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHoldoutCompositeComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_HoldoutComposite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHoldoutCompositeComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoldoutCompositeComponent_Statics::ClassParams = {
	&UHoldoutCompositeComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UHoldoutCompositeComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UHoldoutCompositeComponent_Statics::PropPointers),
	0,
	0x00A810A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHoldoutCompositeComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UHoldoutCompositeComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHoldoutCompositeComponent()
{
	if (!Z_Registration_Info_UClass_UHoldoutCompositeComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoldoutCompositeComponent.OuterSingleton, Z_Construct_UClass_UHoldoutCompositeComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHoldoutCompositeComponent.OuterSingleton;
}
template<> HOLDOUTCOMPOSITE_API UClass* StaticClass<UHoldoutCompositeComponent>()
{
	return UHoldoutCompositeComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHoldoutCompositeComponent);
UHoldoutCompositeComponent::~UHoldoutCompositeComponent() {}
// End Class UHoldoutCompositeComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Compositing_HoldoutComposite_Source_HoldoutComposite_Public_HoldoutCompositeComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHoldoutCompositeComponent, UHoldoutCompositeComponent::StaticClass, TEXT("UHoldoutCompositeComponent"), &Z_Registration_Info_UClass_UHoldoutCompositeComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoldoutCompositeComponent), 3221081904U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Compositing_HoldoutComposite_Source_HoldoutComposite_Public_HoldoutCompositeComponent_h_2166704658(TEXT("/Script/HoldoutComposite"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Compositing_HoldoutComposite_Source_HoldoutComposite_Public_HoldoutCompositeComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Compositing_HoldoutComposite_Source_HoldoutComposite_Public_HoldoutCompositeComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
