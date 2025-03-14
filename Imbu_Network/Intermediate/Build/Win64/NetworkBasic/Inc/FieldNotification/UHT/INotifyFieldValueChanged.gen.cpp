// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/FieldNotification/Public/INotifyFieldValueChanged.h"
#include "Runtime/FieldNotification/Public/FieldNotificationId.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeINotifyFieldValueChanged() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
FIELDNOTIFICATION_API UClass* Z_Construct_UClass_UNotifyFieldValueChanged();
FIELDNOTIFICATION_API UClass* Z_Construct_UClass_UNotifyFieldValueChanged_NoRegister();
FIELDNOTIFICATION_API UFunction* Z_Construct_UDelegateFunction_FieldNotification_FieldValueChangedDynamicDelegate__DelegateSignature();
FIELDNOTIFICATION_API UScriptStruct* Z_Construct_UScriptStruct_FFieldNotificationId();
UPackage* Z_Construct_UPackage__Script_FieldNotification();
// End Cross Module References

// Begin Delegate FFieldValueChangedDynamicDelegate
struct Z_Construct_UDelegateFunction_FieldNotification_FieldValueChangedDynamicDelegate__DelegateSignature_Statics
{
	struct _Script_FieldNotification_eventFieldValueChangedDynamicDelegate_Parms
	{
		UObject* Object;
		FFieldNotificationId Field;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/INotifyFieldValueChanged.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Field;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_FieldNotification_FieldValueChangedDynamicDelegate__DelegateSignature_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_FieldNotification_eventFieldValueChangedDynamicDelegate_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_FieldNotification_FieldValueChangedDynamicDelegate__DelegateSignature_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_FieldNotification_eventFieldValueChangedDynamicDelegate_Parms, Field), Z_Construct_UScriptStruct_FFieldNotificationId, METADATA_PARAMS(0, nullptr) }; // 2941726941
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FieldNotification_FieldValueChangedDynamicDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FieldNotification_FieldValueChangedDynamicDelegate__DelegateSignature_Statics::NewProp_Object,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FieldNotification_FieldValueChangedDynamicDelegate__DelegateSignature_Statics::NewProp_Field,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FieldNotification_FieldValueChangedDynamicDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FieldNotification_FieldValueChangedDynamicDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FieldNotification, nullptr, "FieldValueChangedDynamicDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_FieldNotification_FieldValueChangedDynamicDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FieldNotification_FieldValueChangedDynamicDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_FieldNotification_FieldValueChangedDynamicDelegate__DelegateSignature_Statics::_Script_FieldNotification_eventFieldValueChangedDynamicDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FieldNotification_FieldValueChangedDynamicDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_FieldNotification_FieldValueChangedDynamicDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_FieldNotification_FieldValueChangedDynamicDelegate__DelegateSignature_Statics::_Script_FieldNotification_eventFieldValueChangedDynamicDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_FieldNotification_FieldValueChangedDynamicDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_FieldNotification_FieldValueChangedDynamicDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FFieldValueChangedDynamicDelegate_DelegateWrapper(const FScriptDelegate& FieldValueChangedDynamicDelegate, UObject* Object, FFieldNotificationId Field)
{
	struct _Script_FieldNotification_eventFieldValueChangedDynamicDelegate_Parms
	{
		UObject* Object;
		FFieldNotificationId Field;
	};
	_Script_FieldNotification_eventFieldValueChangedDynamicDelegate_Parms Parms;
	Parms.Object=Object;
	Parms.Field=Field;
	FieldValueChangedDynamicDelegate.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FFieldValueChangedDynamicDelegate

// Begin Interface UNotifyFieldValueChanged
void UNotifyFieldValueChanged::StaticRegisterNativesUNotifyFieldValueChanged()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNotifyFieldValueChanged);
UClass* Z_Construct_UClass_UNotifyFieldValueChanged_NoRegister()
{
	return UNotifyFieldValueChanged::StaticClass();
}
struct Z_Construct_UClass_UNotifyFieldValueChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/INotifyFieldValueChanged.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<INotifyFieldValueChanged>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNotifyFieldValueChanged_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_FieldNotification,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNotifyFieldValueChanged_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNotifyFieldValueChanged_Statics::ClassParams = {
	&UNotifyFieldValueChanged::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNotifyFieldValueChanged_Statics::Class_MetaDataParams), Z_Construct_UClass_UNotifyFieldValueChanged_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNotifyFieldValueChanged()
{
	if (!Z_Registration_Info_UClass_UNotifyFieldValueChanged.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNotifyFieldValueChanged.OuterSingleton, Z_Construct_UClass_UNotifyFieldValueChanged_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNotifyFieldValueChanged.OuterSingleton;
}
template<> FIELDNOTIFICATION_API UClass* StaticClass<UNotifyFieldValueChanged>()
{
	return UNotifyFieldValueChanged::StaticClass();
}
UNotifyFieldValueChanged::UNotifyFieldValueChanged(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNotifyFieldValueChanged);
UNotifyFieldValueChanged::~UNotifyFieldValueChanged() {}
// End Interface UNotifyFieldValueChanged

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_FieldNotification_Public_INotifyFieldValueChanged_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNotifyFieldValueChanged, UNotifyFieldValueChanged::StaticClass, TEXT("UNotifyFieldValueChanged"), &Z_Registration_Info_UClass_UNotifyFieldValueChanged, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNotifyFieldValueChanged), 1691237991U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_FieldNotification_Public_INotifyFieldValueChanged_h_3572624017(TEXT("/Script/FieldNotification"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_FieldNotification_Public_INotifyFieldValueChanged_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_FieldNotification_Public_INotifyFieldValueChanged_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
