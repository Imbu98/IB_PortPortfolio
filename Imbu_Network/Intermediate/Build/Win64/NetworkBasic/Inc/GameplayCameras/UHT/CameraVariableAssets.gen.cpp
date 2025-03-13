// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCameras/Public/Core/CameraVariableAssets.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraVariableAssets() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator3d();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator3f();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform3d();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform3f();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2f();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector3d();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector3f();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4d();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4f();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UBooleanCameraVariable();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UBooleanCameraVariable_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraVariableAsset();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraVariableAsset_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UDoubleCameraVariable();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UDoubleCameraVariable_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UFloatCameraVariable();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UFloatCameraVariable_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UInteger32CameraVariable();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UInteger32CameraVariable_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_URotator3dCameraVariable();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_URotator3dCameraVariable_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_URotator3fCameraVariable();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_URotator3fCameraVariable_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UTransform3dCameraVariable();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UTransform3dCameraVariable_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UTransform3fCameraVariable();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UTransform3fCameraVariable_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UVector2dCameraVariable();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UVector2dCameraVariable_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UVector2fCameraVariable();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UVector2fCameraVariable_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UVector3dCameraVariable();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UVector3dCameraVariable_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UVector3fCameraVariable();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UVector3fCameraVariable_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UVector4dCameraVariable();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UVector4dCameraVariable_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UVector4fCameraVariable();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UVector4fCameraVariable_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameplayCameras();
// End Cross Module References

// Begin Class UCameraVariableAsset
void UCameraVariableAsset::StaticRegisterNativesUCameraVariableAsset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCameraVariableAsset);
UClass* Z_Construct_UClass_UCameraVariableAsset_NoRegister()
{
	return UCameraVariableAsset::StaticClass();
}
struct Z_Construct_UClass_UCameraVariableAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The base asset class for all camera variables.\n */" },
		{ "IncludePath", "Core/CameraVariableAssets.h" },
		{ "ModuleRelativePath", "Public/Core/CameraVariableAssets.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "The base asset class for all camera variables." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Comment", "/** The name of the variable. */" },
		{ "ModuleRelativePath", "Public/Core/CameraVariableAssets.h" },
		{ "ToolTip", "The name of the variable." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoReset_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Whether this variable auto-resets to its default value every frame. */" },
		{ "ModuleRelativePath", "Public/Core/CameraVariableAssets.h" },
		{ "ToolTip", "Whether this variable auto-resets to its default value every frame." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsPrivate_MetaData[] = {
		{ "Comment", "/** Whether this variable is private and shouldn't be propagated with evaluation results. */" },
		{ "ModuleRelativePath", "Public/Core/CameraVariableAssets.h" },
		{ "ToolTip", "Whether this variable is private and shouldn't be propagated with evaluation results." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsInput_MetaData[] = {
		{ "Comment", "/** Whether this variable is an input variable that gets blended before node evaluators are run. */" },
		{ "ModuleRelativePath", "Public/Core/CameraVariableAssets.h" },
		{ "ToolTip", "Whether this variable is an input variable that gets blended before node evaluators are run." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/CameraVariableAssets.h" },
	};
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayName;
#endif // WITH_EDITORONLY_DATA
	static void NewProp_bAutoReset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoReset;
	static void NewProp_bIsPrivate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPrivate;
	static void NewProp_bIsInput_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Guid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraVariableAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCameraVariableAsset_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraVariableAsset, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
#endif // WITH_EDITORONLY_DATA
void Z_Construct_UClass_UCameraVariableAsset_Statics::NewProp_bAutoReset_SetBit(void* Obj)
{
	((UCameraVariableAsset*)Obj)->bAutoReset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCameraVariableAsset_Statics::NewProp_bAutoReset = { "bAutoReset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCameraVariableAsset), &Z_Construct_UClass_UCameraVariableAsset_Statics::NewProp_bAutoReset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoReset_MetaData), NewProp_bAutoReset_MetaData) };
void Z_Construct_UClass_UCameraVariableAsset_Statics::NewProp_bIsPrivate_SetBit(void* Obj)
{
	((UCameraVariableAsset*)Obj)->bIsPrivate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCameraVariableAsset_Statics::NewProp_bIsPrivate = { "bIsPrivate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCameraVariableAsset), &Z_Construct_UClass_UCameraVariableAsset_Statics::NewProp_bIsPrivate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsPrivate_MetaData), NewProp_bIsPrivate_MetaData) };
void Z_Construct_UClass_UCameraVariableAsset_Statics::NewProp_bIsInput_SetBit(void* Obj)
{
	((UCameraVariableAsset*)Obj)->bIsInput = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCameraVariableAsset_Statics::NewProp_bIsInput = { "bIsInput", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCameraVariableAsset), &Z_Construct_UClass_UCameraVariableAsset_Statics::NewProp_bIsInput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsInput_MetaData), NewProp_bIsInput_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCameraVariableAsset_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraVariableAsset, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Guid_MetaData), NewProp_Guid_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCameraVariableAsset_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraVariableAsset_Statics::NewProp_DisplayName,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraVariableAsset_Statics::NewProp_bAutoReset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraVariableAsset_Statics::NewProp_bIsPrivate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraVariableAsset_Statics::NewProp_bIsInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraVariableAsset_Statics::NewProp_Guid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraVariableAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCameraVariableAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraVariableAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCameraVariableAsset_Statics::ClassParams = {
	&UCameraVariableAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCameraVariableAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCameraVariableAsset_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraVariableAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UCameraVariableAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCameraVariableAsset()
{
	if (!Z_Registration_Info_UClass_UCameraVariableAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCameraVariableAsset.OuterSingleton, Z_Construct_UClass_UCameraVariableAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCameraVariableAsset.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UCameraVariableAsset>()
{
	return UCameraVariableAsset::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraVariableAsset);
UCameraVariableAsset::~UCameraVariableAsset() {}
// End Class UCameraVariableAsset

// Begin Class UBooleanCameraVariable
void UBooleanCameraVariable::StaticRegisterNativesUBooleanCameraVariable()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBooleanCameraVariable);
UClass* Z_Construct_UClass_UBooleanCameraVariable_NoRegister()
{
	return UBooleanCameraVariable::StaticClass();
}
struct Z_Construct_UClass_UBooleanCameraVariable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Boolean camera variable. */" },
		{ "IncludePath", "Core/CameraVariableAssets.h" },
		{ "ModuleRelativePath", "Public/Core/CameraVariableAssets.h" },
		{ "ToolTip", "Boolean camera variable." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDefaultValue_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** The default value of this variable. */" },
		{ "ModuleRelativePath", "Public/Core/CameraVariableAssets.h" },
		{ "ToolTip", "The default value of this variable." },
	};
#endif // WITH_METADATA
	static void NewProp_bDefaultValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDefaultValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBooleanCameraVariable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UBooleanCameraVariable_Statics::NewProp_bDefaultValue_SetBit(void* Obj)
{
	((UBooleanCameraVariable*)Obj)->bDefaultValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBooleanCameraVariable_Statics::NewProp_bDefaultValue = { "bDefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBooleanCameraVariable), &Z_Construct_UClass_UBooleanCameraVariable_Statics::NewProp_bDefaultValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDefaultValue_MetaData), NewProp_bDefaultValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBooleanCameraVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBooleanCameraVariable_Statics::NewProp_bDefaultValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBooleanCameraVariable_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBooleanCameraVariable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCameraVariableAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBooleanCameraVariable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBooleanCameraVariable_Statics::ClassParams = {
	&UBooleanCameraVariable::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBooleanCameraVariable_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBooleanCameraVariable_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBooleanCameraVariable_Statics::Class_MetaDataParams), Z_Construct_UClass_UBooleanCameraVariable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBooleanCameraVariable()
{
	if (!Z_Registration_Info_UClass_UBooleanCameraVariable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBooleanCameraVariable.OuterSingleton, Z_Construct_UClass_UBooleanCameraVariable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBooleanCameraVariable.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UBooleanCameraVariable>()
{
	return UBooleanCameraVariable::StaticClass();
}
UBooleanCameraVariable::UBooleanCameraVariable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBooleanCameraVariable);
UBooleanCameraVariable::~UBooleanCameraVariable() {}
// End Class UBooleanCameraVariable

// Begin Class UInteger32CameraVariable
void UInteger32CameraVariable::StaticRegisterNativesUInteger32CameraVariable()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteger32CameraVariable);
UClass* Z_Construct_UClass_UInteger32CameraVariable_NoRegister()
{
	return UInteger32CameraVariable::StaticClass();
}
struct Z_Construct_UClass_UInteger32CameraVariable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Integer camera variable. */" },
		{ "IncludePath", "Core/CameraVariableAssets.h" },
		{ "ModuleRelativePath", "Public/Core/CameraVariableAssets.h" },
		{ "ToolTip", "Integer camera variable." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** The default value of this variable. */" },
		{ "ModuleRelativePath", "Public/Core/CameraVariableAssets.h" },
		{ "ToolTip", "The default value of this variable." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteger32CameraVariable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInteger32CameraVariable_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteger32CameraVariable, DefaultValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValue_MetaData), NewProp_DefaultValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteger32CameraVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteger32CameraVariable_Statics::NewProp_DefaultValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteger32CameraVariable_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInteger32CameraVariable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCameraVariableAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteger32CameraVariable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteger32CameraVariable_Statics::ClassParams = {
	&UInteger32CameraVariable::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInteger32CameraVariable_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInteger32CameraVariable_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteger32CameraVariable_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteger32CameraVariable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInteger32CameraVariable()
{
	if (!Z_Registration_Info_UClass_UInteger32CameraVariable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteger32CameraVariable.OuterSingleton, Z_Construct_UClass_UInteger32CameraVariable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInteger32CameraVariable.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UInteger32CameraVariable>()
{
	return UInteger32CameraVariable::StaticClass();
}
UInteger32CameraVariable::UInteger32CameraVariable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInteger32CameraVariable);
UInteger32CameraVariable::~UInteger32CameraVariable() {}
// End Class UInteger32CameraVariable

// Begin Class UFloatCameraVariable
void UFloatCameraVariable::StaticRegisterNativesUFloatCameraVariable()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFloatCameraVariable);
UClass* Z_Construct_UClass_UFloatCameraVariable_NoRegister()
{
	return UFloatCameraVariable::StaticClass();
}
struct Z_Construct_UClass_UFloatCameraVariable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Float camera variable. */" },
		{ "IncludePath", "Core/CameraVariableAssets.h" },
		{ "ModuleRelativePath", "Public/Core/CameraVariableAssets.h" },
		{ "ToolTip", "Float camera variable." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** The default value of this variable. */" },
		{ "ModuleRelativePath", "Public/Core/CameraVariableAssets.h" },
		{ "ToolTip", "The default value of this variable." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFloatCameraVariable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFloatCameraVariable_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFloatCameraVariable, DefaultValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValue_MetaData), NewProp_DefaultValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFloatCameraVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloatCameraVariable_Statics::NewProp_DefaultValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFloatCameraVariable_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFloatCameraVariable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCameraVariableAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFloatCameraVariable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFloatCameraVariable_Statics::ClassParams = {
	&UFloatCameraVariable::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFloatCameraVariable_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFloatCameraVariable_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFloatCameraVariable_Statics::Class_MetaDataParams), Z_Construct_UClass_UFloatCameraVariable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFloatCameraVariable()
{
	if (!Z_Registration_Info_UClass_UFloatCameraVariable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFloatCameraVariable.OuterSingleton, Z_Construct_UClass_UFloatCameraVariable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFloatCameraVariable.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UFloatCameraVariable>()
{
	return UFloatCameraVariable::StaticClass();
}
UFloatCameraVariable::UFloatCameraVariable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFloatCameraVariable);
UFloatCameraVariable::~UFloatCameraVariable() {}
// End Class UFloatCameraVariable

// Begin Class UDoubleCameraVariable
void UDoubleCameraVariable::StaticRegisterNativesUDoubleCameraVariable()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDoubleCameraVariable);
UClass* Z_Construct_UClass_UDoubleCameraVariable_NoRegister()
{
	return UDoubleCameraVariable::StaticClass();
}
struct Z_Construct_UClass_UDoubleCameraVariable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Double camera variable. */" },
		{ "IncludePath", "Core/CameraVariableAssets.h" },
		{ "ModuleRelativePath", "Public/Core/CameraVariableAssets.h" },
		{ "ToolTip", "Double camera variable." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** The default value of this variable. */" },
		{ "ModuleRelativePath", "Public/Core/CameraVariableAssets.h" },
		{ "ToolTip", "The default value of this variable." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_DefaultValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDoubleCameraVariable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UDoubleCameraVariable_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDoubleCameraVariable, DefaultValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValue_MetaData), NewProp_DefaultValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDoubleCameraVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoubleCameraVariable_Statics::NewProp_DefaultValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDoubleCameraVariable_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDoubleCameraVariable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCameraVariableAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDoubleCameraVariable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDoubleCameraVariable_Statics::ClassParams = {
	&UDoubleCameraVariable::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDoubleCameraVariable_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDoubleCameraVariable_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDoubleCameraVariable_Statics::Class_MetaDataParams), Z_Construct_UClass_UDoubleCameraVariable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDoubleCameraVariable()
{
	if (!Z_Registration_Info_UClass_UDoubleCameraVariable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDoubleCameraVariable.OuterSingleton, Z_Construct_UClass_UDoubleCameraVariable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDoubleCameraVariable.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UDoubleCameraVariable>()
{
	return UDoubleCameraVariable::StaticClass();
}
UDoubleCameraVariable::UDoubleCameraVariable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDoubleCameraVariable);
UDoubleCameraVariable::~UDoubleCameraVariable() {}
// End Class UDoubleCameraVariable

// Begin Class UVector2fCameraVariable
void UVector2fCameraVariable::StaticRegisterNativesUVector2fCameraVariable()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVector2fCameraVariable);
UClass* Z_Construct_UClass_UVector2fCameraVariable_NoRegister()
{
	return UVector2fCameraVariable::StaticClass();
}
struct Z_Construct_UClass_UVector2fCameraVariable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Vector2f camera variable. */" },
		{ "IncludePath", "Core/CameraVariableAssets.h" },
		{ "ModuleRelativePath", "Public/Core/CameraVariableAssets.h" },
		{ "ToolTip", "Vector2f camera variable." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** The default value of this variable. */" },
		{ "ModuleRelativePath", "Public/Core/CameraVariableAssets.h" },
		{ "ToolTip", "The default value of this variable." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVector2fCameraVariable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVector2fCameraVariable_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVector2fCameraVariable, DefaultValue), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValue_MetaData), NewProp_DefaultValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVector2fCameraVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVector2fCameraVariable_Statics::NewProp_DefaultValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVector2fCameraVariable_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVector2fCameraVariable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCameraVariableAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVector2fCameraVariable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVector2fCameraVariable_Statics::ClassParams = {
	&UVector2fCameraVariable::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVector2fCameraVariable_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVector2fCameraVariable_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVector2fCameraVariable_Statics::Class_MetaDataParams), Z_Construct_UClass_UVector2fCameraVariable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVector2fCameraVariable()
{
	if (!Z_Registration_Info_UClass_UVector2fCameraVariable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVector2fCameraVariable.OuterSingleton, Z_Construct_UClass_UVector2fCameraVariable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVector2fCameraVariable.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UVector2fCameraVariable>()
{
	return UVector2fCameraVariable::StaticClass();
}
UVector2fCameraVariable::UVector2fCameraVariable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVector2fCameraVariable);
UVector2fCameraVariable::~UVector2fCameraVariable() {}
// End Class UVector2fCameraVariable

// Begin Class UVector2dCameraVariable
void UVector2dCameraVariable::StaticRegisterNativesUVector2dCameraVariable()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVector2dCameraVariable);
UClass* Z_Construct_UClass_UVector2dCameraVariable_NoRegister()
{
	return UVector2dCameraVariable::StaticClass();
}
struct Z_Construct_UClass_UVector2dCameraVariable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Vector2d camera variable. */" },
		{ "IncludePath", "Core/CameraVariableAssets.h" },
		{ "ModuleRelativePath", "Public/Core/CameraVariableAssets.h" },
		{ "ToolTip", "Vector2d camera variable." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** The default value of this variable. */" },
		{ "ModuleRelativePath", "Public/Core/CameraVariableAssets.h" },
		{ "ToolTip", "The default value of this variable." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVector2dCameraVariable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVector2dCameraVariable_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVector2dCameraVariable, DefaultValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValue_MetaData), NewProp_DefaultValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVector2dCameraVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVector2dCameraVariable_Statics::NewProp_DefaultValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVector2dCameraVariable_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVector2dCameraVariable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCameraVariableAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVector2dCameraVariable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVector2dCameraVariable_Statics::ClassParams = {
	&UVector2dCameraVariable::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVector2dCameraVariable_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVector2dCameraVariable_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVector2dCameraVariable_Statics::Class_MetaDataParams), Z_Construct_UClass_UVector2dCameraVariable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVector2dCameraVariable()
{
	if (!Z_Registration_Info_UClass_UVector2dCameraVariable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVector2dCameraVariable.OuterSingleton, Z_Construct_UClass_UVector2dCameraVariable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVector2dCameraVariable.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UVector2dCameraVariable>()
{
	return UVector2dCameraVariable::StaticClass();
}
UVector2dCameraVariable::UVector2dCameraVariable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVector2dCameraVariable);
UVector2dCameraVariable::~UVector2dCameraVariable() {}
// End Class UVector2dCameraVariable

// Begin Class UVector3fCameraVariable
void UVector3fCameraVariable::StaticRegisterNativesUVector3fCameraVariable()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVector3fCameraVariable);
UClass* Z_Construct_UClass_UVector3fCameraVariable_NoRegister()
{
	return UVector3fCameraVariable::StaticClass();
}
struct Z_Construct_UClass_UVector3fCameraVariable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Vector3f camera variable. */" },
		{ "IncludePath", "Core/CameraVariableAssets.h" },
		{ "ModuleRelativePath", "Public/Core/CameraVariableAssets.h" },
		{ "ToolTip", "Vector3f camera variable." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** The default value of this variable. */" },
		{ "ModuleRelativePath", "Public/Core/CameraVariableAssets.h" },
		{ "ToolTip", "The default value of this variable." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVector3fCameraVariable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVector3fCameraVariable_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVector3fCameraVariable, DefaultValue), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValue_MetaData), NewProp_DefaultValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVector3fCameraVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVector3fCameraVariable_Statics::NewProp_DefaultValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVector3fCameraVariable_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVector3fCameraVariable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCameraVariableAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVector3fCameraVariable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVector3fCameraVariable_Statics::ClassParams = {
	&UVector3fCameraVariable::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVector3fCameraVariable_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVector3fCameraVariable_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVector3fCameraVariable_Statics::Class_MetaDataParams), Z_Construct_UClass_UVector3fCameraVariable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVector3fCameraVariable()
{
	if (!Z_Registration_Info_UClass_UVector3fCameraVariable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVector3fCameraVariable.OuterSingleton, Z_Construct_UClass_UVector3fCameraVariable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVector3fCameraVariable.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UVector3fCameraVariable>()
{
	return UVector3fCameraVariable::StaticClass();
}
UVector3fCameraVariable::UVector3fCameraVariable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVector3fCameraVariable);
UVector3fCameraVariable::~UVector3fCameraVariable() {}
// End Class UVector3fCameraVariable

// Begin Class UVector3dCameraVariable
void UVector3dCameraVariable::StaticRegisterNativesUVector3dCameraVariable()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVector3dCameraVariable);
UClass* Z_Construct_UClass_UVector3dCameraVariable_NoRegister()
{
	return UVector3dCameraVariable::StaticClass();
}
struct Z_Construct_UClass_UVector3dCameraVariable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Vector3d camera variable. */" },
		{ "IncludePath", "Core/CameraVariableAssets.h" },
		{ "ModuleRelativePath", "Public/Core/CameraVariableAssets.h" },
		{ "ToolTip", "Vector3d camera variable." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** The default value of this variable. */" },
		{ "ModuleRelativePath", "Public/Core/CameraVariableAssets.h" },
		{ "ToolTip", "The default value of this variable." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVector3dCameraVariable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVector3dCameraVariable_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVector3dCameraVariable, DefaultValue), Z_Construct_UScriptStruct_FVector3d, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValue_MetaData), NewProp_DefaultValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVector3dCameraVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVector3dCameraVariable_Statics::NewProp_DefaultValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVector3dCameraVariable_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVector3dCameraVariable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCameraVariableAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVector3dCameraVariable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVector3dCameraVariable_Statics::ClassParams = {
	&UVector3dCameraVariable::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVector3dCameraVariable_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVector3dCameraVariable_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVector3dCameraVariable_Statics::Class_MetaDataParams), Z_Construct_UClass_UVector3dCameraVariable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVector3dCameraVariable()
{
	if (!Z_Registration_Info_UClass_UVector3dCameraVariable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVector3dCameraVariable.OuterSingleton, Z_Construct_UClass_UVector3dCameraVariable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVector3dCameraVariable.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UVector3dCameraVariable>()
{
	return UVector3dCameraVariable::StaticClass();
}
UVector3dCameraVariable::UVector3dCameraVariable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVector3dCameraVariable);
UVector3dCameraVariable::~UVector3dCameraVariable() {}
// End Class UVector3dCameraVariable

// Begin Class UVector4fCameraVariable
void UVector4fCameraVariable::StaticRegisterNativesUVector4fCameraVariable()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVector4fCameraVariable);
UClass* Z_Construct_UClass_UVector4fCameraVariable_NoRegister()
{
	return UVector4fCameraVariable::StaticClass();
}
struct Z_Construct_UClass_UVector4fCameraVariable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Vector4f camera variable. */" },
		{ "IncludePath", "Core/CameraVariableAssets.h" },
		{ "ModuleRelativePath", "Public/Core/CameraVariableAssets.h" },
		{ "ToolTip", "Vector4f camera variable." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** The default value of this variable. */" },
		{ "ModuleRelativePath", "Public/Core/CameraVariableAssets.h" },
		{ "ToolTip", "The default value of this variable." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVector4fCameraVariable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVector4fCameraVariable_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVector4fCameraVariable, DefaultValue), Z_Construct_UScriptStruct_FVector4f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValue_MetaData), NewProp_DefaultValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVector4fCameraVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVector4fCameraVariable_Statics::NewProp_DefaultValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVector4fCameraVariable_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVector4fCameraVariable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCameraVariableAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVector4fCameraVariable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVector4fCameraVariable_Statics::ClassParams = {
	&UVector4fCameraVariable::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVector4fCameraVariable_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVector4fCameraVariable_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVector4fCameraVariable_Statics::Class_MetaDataParams), Z_Construct_UClass_UVector4fCameraVariable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVector4fCameraVariable()
{
	if (!Z_Registration_Info_UClass_UVector4fCameraVariable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVector4fCameraVariable.OuterSingleton, Z_Construct_UClass_UVector4fCameraVariable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVector4fCameraVariable.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UVector4fCameraVariable>()
{
	return UVector4fCameraVariable::StaticClass();
}
UVector4fCameraVariable::UVector4fCameraVariable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVector4fCameraVariable);
UVector4fCameraVariable::~UVector4fCameraVariable() {}
// End Class UVector4fCameraVariable

// Begin Class UVector4dCameraVariable
void UVector4dCameraVariable::StaticRegisterNativesUVector4dCameraVariable()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVector4dCameraVariable);
UClass* Z_Construct_UClass_UVector4dCameraVariable_NoRegister()
{
	return UVector4dCameraVariable::StaticClass();
}
struct Z_Construct_UClass_UVector4dCameraVariable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Vector4d camera variable. */" },
		{ "IncludePath", "Core/CameraVariableAssets.h" },
		{ "ModuleRelativePath", "Public/Core/CameraVariableAssets.h" },
		{ "ToolTip", "Vector4d camera variable." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** The default value of this variable. */" },
		{ "ModuleRelativePath", "Public/Core/CameraVariableAssets.h" },
		{ "ToolTip", "The default value of this variable." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVector4dCameraVariable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVector4dCameraVariable_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVector4dCameraVariable, DefaultValue), Z_Construct_UScriptStruct_FVector4d, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValue_MetaData), NewProp_DefaultValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVector4dCameraVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVector4dCameraVariable_Statics::NewProp_DefaultValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVector4dCameraVariable_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVector4dCameraVariable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCameraVariableAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVector4dCameraVariable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVector4dCameraVariable_Statics::ClassParams = {
	&UVector4dCameraVariable::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVector4dCameraVariable_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVector4dCameraVariable_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVector4dCameraVariable_Statics::Class_MetaDataParams), Z_Construct_UClass_UVector4dCameraVariable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVector4dCameraVariable()
{
	if (!Z_Registration_Info_UClass_UVector4dCameraVariable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVector4dCameraVariable.OuterSingleton, Z_Construct_UClass_UVector4dCameraVariable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVector4dCameraVariable.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UVector4dCameraVariable>()
{
	return UVector4dCameraVariable::StaticClass();
}
UVector4dCameraVariable::UVector4dCameraVariable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVector4dCameraVariable);
UVector4dCameraVariable::~UVector4dCameraVariable() {}
// End Class UVector4dCameraVariable

// Begin Class URotator3fCameraVariable
void URotator3fCameraVariable::StaticRegisterNativesURotator3fCameraVariable()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URotator3fCameraVariable);
UClass* Z_Construct_UClass_URotator3fCameraVariable_NoRegister()
{
	return URotator3fCameraVariable::StaticClass();
}
struct Z_Construct_UClass_URotator3fCameraVariable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Rotator3f camera variable. */" },
		{ "IncludePath", "Core/CameraVariableAssets.h" },
		{ "ModuleRelativePath", "Public/Core/CameraVariableAssets.h" },
		{ "ToolTip", "Rotator3f camera variable." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** The default value of this variable. */" },
		{ "ModuleRelativePath", "Public/Core/CameraVariableAssets.h" },
		{ "ToolTip", "The default value of this variable." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URotator3fCameraVariable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URotator3fCameraVariable_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URotator3fCameraVariable, DefaultValue), Z_Construct_UScriptStruct_FRotator3f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValue_MetaData), NewProp_DefaultValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URotator3fCameraVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URotator3fCameraVariable_Statics::NewProp_DefaultValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URotator3fCameraVariable_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URotator3fCameraVariable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCameraVariableAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URotator3fCameraVariable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URotator3fCameraVariable_Statics::ClassParams = {
	&URotator3fCameraVariable::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URotator3fCameraVariable_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URotator3fCameraVariable_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URotator3fCameraVariable_Statics::Class_MetaDataParams), Z_Construct_UClass_URotator3fCameraVariable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URotator3fCameraVariable()
{
	if (!Z_Registration_Info_UClass_URotator3fCameraVariable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URotator3fCameraVariable.OuterSingleton, Z_Construct_UClass_URotator3fCameraVariable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URotator3fCameraVariable.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UClass* StaticClass<URotator3fCameraVariable>()
{
	return URotator3fCameraVariable::StaticClass();
}
URotator3fCameraVariable::URotator3fCameraVariable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URotator3fCameraVariable);
URotator3fCameraVariable::~URotator3fCameraVariable() {}
// End Class URotator3fCameraVariable

// Begin Class URotator3dCameraVariable
void URotator3dCameraVariable::StaticRegisterNativesURotator3dCameraVariable()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URotator3dCameraVariable);
UClass* Z_Construct_UClass_URotator3dCameraVariable_NoRegister()
{
	return URotator3dCameraVariable::StaticClass();
}
struct Z_Construct_UClass_URotator3dCameraVariable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Rotator3d camera variable. */" },
		{ "IncludePath", "Core/CameraVariableAssets.h" },
		{ "ModuleRelativePath", "Public/Core/CameraVariableAssets.h" },
		{ "ToolTip", "Rotator3d camera variable." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** The default value of this variable. */" },
		{ "ModuleRelativePath", "Public/Core/CameraVariableAssets.h" },
		{ "ToolTip", "The default value of this variable." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URotator3dCameraVariable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URotator3dCameraVariable_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URotator3dCameraVariable, DefaultValue), Z_Construct_UScriptStruct_FRotator3d, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValue_MetaData), NewProp_DefaultValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URotator3dCameraVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URotator3dCameraVariable_Statics::NewProp_DefaultValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URotator3dCameraVariable_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URotator3dCameraVariable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCameraVariableAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URotator3dCameraVariable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URotator3dCameraVariable_Statics::ClassParams = {
	&URotator3dCameraVariable::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URotator3dCameraVariable_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URotator3dCameraVariable_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URotator3dCameraVariable_Statics::Class_MetaDataParams), Z_Construct_UClass_URotator3dCameraVariable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URotator3dCameraVariable()
{
	if (!Z_Registration_Info_UClass_URotator3dCameraVariable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URotator3dCameraVariable.OuterSingleton, Z_Construct_UClass_URotator3dCameraVariable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URotator3dCameraVariable.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UClass* StaticClass<URotator3dCameraVariable>()
{
	return URotator3dCameraVariable::StaticClass();
}
URotator3dCameraVariable::URotator3dCameraVariable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URotator3dCameraVariable);
URotator3dCameraVariable::~URotator3dCameraVariable() {}
// End Class URotator3dCameraVariable

// Begin Class UTransform3fCameraVariable
void UTransform3fCameraVariable::StaticRegisterNativesUTransform3fCameraVariable()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTransform3fCameraVariable);
UClass* Z_Construct_UClass_UTransform3fCameraVariable_NoRegister()
{
	return UTransform3fCameraVariable::StaticClass();
}
struct Z_Construct_UClass_UTransform3fCameraVariable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Transform3f camera variable. */" },
		{ "IncludePath", "Core/CameraVariableAssets.h" },
		{ "ModuleRelativePath", "Public/Core/CameraVariableAssets.h" },
		{ "ToolTip", "Transform3f camera variable." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** The default value of this variable. */" },
		{ "ModuleRelativePath", "Public/Core/CameraVariableAssets.h" },
		{ "ToolTip", "The default value of this variable." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTransform3fCameraVariable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTransform3fCameraVariable_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransform3fCameraVariable, DefaultValue), Z_Construct_UScriptStruct_FTransform3f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValue_MetaData), NewProp_DefaultValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTransform3fCameraVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransform3fCameraVariable_Statics::NewProp_DefaultValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTransform3fCameraVariable_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTransform3fCameraVariable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCameraVariableAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTransform3fCameraVariable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTransform3fCameraVariable_Statics::ClassParams = {
	&UTransform3fCameraVariable::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTransform3fCameraVariable_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTransform3fCameraVariable_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTransform3fCameraVariable_Statics::Class_MetaDataParams), Z_Construct_UClass_UTransform3fCameraVariable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTransform3fCameraVariable()
{
	if (!Z_Registration_Info_UClass_UTransform3fCameraVariable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTransform3fCameraVariable.OuterSingleton, Z_Construct_UClass_UTransform3fCameraVariable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTransform3fCameraVariable.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UTransform3fCameraVariable>()
{
	return UTransform3fCameraVariable::StaticClass();
}
UTransform3fCameraVariable::UTransform3fCameraVariable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTransform3fCameraVariable);
UTransform3fCameraVariable::~UTransform3fCameraVariable() {}
// End Class UTransform3fCameraVariable

// Begin Class UTransform3dCameraVariable
void UTransform3dCameraVariable::StaticRegisterNativesUTransform3dCameraVariable()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTransform3dCameraVariable);
UClass* Z_Construct_UClass_UTransform3dCameraVariable_NoRegister()
{
	return UTransform3dCameraVariable::StaticClass();
}
struct Z_Construct_UClass_UTransform3dCameraVariable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Transform3d camera variable. */" },
		{ "IncludePath", "Core/CameraVariableAssets.h" },
		{ "ModuleRelativePath", "Public/Core/CameraVariableAssets.h" },
		{ "ToolTip", "Transform3d camera variable." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** The default value of this variable. */" },
		{ "ModuleRelativePath", "Public/Core/CameraVariableAssets.h" },
		{ "ToolTip", "The default value of this variable." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTransform3dCameraVariable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTransform3dCameraVariable_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransform3dCameraVariable, DefaultValue), Z_Construct_UScriptStruct_FTransform3d, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValue_MetaData), NewProp_DefaultValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTransform3dCameraVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransform3dCameraVariable_Statics::NewProp_DefaultValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTransform3dCameraVariable_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTransform3dCameraVariable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCameraVariableAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTransform3dCameraVariable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTransform3dCameraVariable_Statics::ClassParams = {
	&UTransform3dCameraVariable::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTransform3dCameraVariable_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTransform3dCameraVariable_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTransform3dCameraVariable_Statics::Class_MetaDataParams), Z_Construct_UClass_UTransform3dCameraVariable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTransform3dCameraVariable()
{
	if (!Z_Registration_Info_UClass_UTransform3dCameraVariable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTransform3dCameraVariable.OuterSingleton, Z_Construct_UClass_UTransform3dCameraVariable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTransform3dCameraVariable.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UTransform3dCameraVariable>()
{
	return UTransform3dCameraVariable::StaticClass();
}
UTransform3dCameraVariable::UTransform3dCameraVariable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTransform3dCameraVariable);
UTransform3dCameraVariable::~UTransform3dCameraVariable() {}
// End Class UTransform3dCameraVariable

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraVariableAssets_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCameraVariableAsset, UCameraVariableAsset::StaticClass, TEXT("UCameraVariableAsset"), &Z_Registration_Info_UClass_UCameraVariableAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCameraVariableAsset), 373415840U) },
		{ Z_Construct_UClass_UBooleanCameraVariable, UBooleanCameraVariable::StaticClass, TEXT("UBooleanCameraVariable"), &Z_Registration_Info_UClass_UBooleanCameraVariable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBooleanCameraVariable), 2279862868U) },
		{ Z_Construct_UClass_UInteger32CameraVariable, UInteger32CameraVariable::StaticClass, TEXT("UInteger32CameraVariable"), &Z_Registration_Info_UClass_UInteger32CameraVariable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteger32CameraVariable), 2026086786U) },
		{ Z_Construct_UClass_UFloatCameraVariable, UFloatCameraVariable::StaticClass, TEXT("UFloatCameraVariable"), &Z_Registration_Info_UClass_UFloatCameraVariable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFloatCameraVariable), 3971463750U) },
		{ Z_Construct_UClass_UDoubleCameraVariable, UDoubleCameraVariable::StaticClass, TEXT("UDoubleCameraVariable"), &Z_Registration_Info_UClass_UDoubleCameraVariable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDoubleCameraVariable), 4213136401U) },
		{ Z_Construct_UClass_UVector2fCameraVariable, UVector2fCameraVariable::StaticClass, TEXT("UVector2fCameraVariable"), &Z_Registration_Info_UClass_UVector2fCameraVariable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVector2fCameraVariable), 3103663755U) },
		{ Z_Construct_UClass_UVector2dCameraVariable, UVector2dCameraVariable::StaticClass, TEXT("UVector2dCameraVariable"), &Z_Registration_Info_UClass_UVector2dCameraVariable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVector2dCameraVariable), 3028338961U) },
		{ Z_Construct_UClass_UVector3fCameraVariable, UVector3fCameraVariable::StaticClass, TEXT("UVector3fCameraVariable"), &Z_Registration_Info_UClass_UVector3fCameraVariable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVector3fCameraVariable), 1953577579U) },
		{ Z_Construct_UClass_UVector3dCameraVariable, UVector3dCameraVariable::StaticClass, TEXT("UVector3dCameraVariable"), &Z_Registration_Info_UClass_UVector3dCameraVariable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVector3dCameraVariable), 922902005U) },
		{ Z_Construct_UClass_UVector4fCameraVariable, UVector4fCameraVariable::StaticClass, TEXT("UVector4fCameraVariable"), &Z_Registration_Info_UClass_UVector4fCameraVariable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVector4fCameraVariable), 886885874U) },
		{ Z_Construct_UClass_UVector4dCameraVariable, UVector4dCameraVariable::StaticClass, TEXT("UVector4dCameraVariable"), &Z_Registration_Info_UClass_UVector4dCameraVariable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVector4dCameraVariable), 3458256380U) },
		{ Z_Construct_UClass_URotator3fCameraVariable, URotator3fCameraVariable::StaticClass, TEXT("URotator3fCameraVariable"), &Z_Registration_Info_UClass_URotator3fCameraVariable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URotator3fCameraVariable), 1027866560U) },
		{ Z_Construct_UClass_URotator3dCameraVariable, URotator3dCameraVariable::StaticClass, TEXT("URotator3dCameraVariable"), &Z_Registration_Info_UClass_URotator3dCameraVariable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URotator3dCameraVariable), 1707780963U) },
		{ Z_Construct_UClass_UTransform3fCameraVariable, UTransform3fCameraVariable::StaticClass, TEXT("UTransform3fCameraVariable"), &Z_Registration_Info_UClass_UTransform3fCameraVariable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTransform3fCameraVariable), 1714056390U) },
		{ Z_Construct_UClass_UTransform3dCameraVariable, UTransform3dCameraVariable::StaticClass, TEXT("UTransform3dCameraVariable"), &Z_Registration_Info_UClass_UTransform3dCameraVariable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTransform3dCameraVariable), 2711634040U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraVariableAssets_h_3678202759(TEXT("/Script/GameplayCameras"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraVariableAssets_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraVariableAssets_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
