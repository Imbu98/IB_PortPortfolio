// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCameras/Public/Core/CameraParameters.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraParameters() {}

// Begin Cross Module References
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
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UBooleanCameraVariable_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UDoubleCameraVariable_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UFloatCameraVariable_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UInteger32CameraVariable_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_URotator3dCameraVariable_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_URotator3fCameraVariable_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UTransform3dCameraVariable_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UTransform3fCameraVariable_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UVector2dCameraVariable_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UVector2fCameraVariable_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UVector3dCameraVariable_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UVector3fCameraVariable_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UVector4dCameraVariable_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UVector4fCameraVariable_NoRegister();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FBooleanCameraParameter();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FDoubleCameraParameter();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FFloatCameraParameter();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FInteger32CameraParameter();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FRotator3dCameraParameter();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FRotator3fCameraParameter();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FTransform3dCameraParameter();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FTransform3fCameraParameter();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FVector2dCameraParameter();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FVector2fCameraParameter();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FVector3dCameraParameter();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FVector3fCameraParameter();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FVector4dCameraParameter();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FVector4fCameraParameter();
UPackage* Z_Construct_UPackage__Script_GameplayCameras();
// End Cross Module References

// Begin ScriptStruct FBooleanCameraParameter
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BooleanCameraParameter;
class UScriptStruct* FBooleanCameraParameter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BooleanCameraParameter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BooleanCameraParameter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBooleanCameraParameter, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("BooleanCameraParameter"));
	}
	return Z_Registration_Info_UScriptStruct_BooleanCameraParameter.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<FBooleanCameraParameter>()
{
	return FBooleanCameraParameter::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBooleanCameraParameter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Boolean camera parameter. */" },
		{ "ModuleRelativePath", "Public/Core/CameraParameters.h" },
		{ "ToolTip", "Boolean camera parameter." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Core/CameraParameters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Core/CameraParameters.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Value_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBooleanCameraParameter>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FBooleanCameraParameter_Statics::NewProp_Value_SetBit(void* Obj)
{
	((FBooleanCameraParameter*)Obj)->Value = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBooleanCameraParameter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FBooleanCameraParameter), &Z_Construct_UScriptStruct_FBooleanCameraParameter_Statics::NewProp_Value_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBooleanCameraParameter_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBooleanCameraParameter, Variable), Z_Construct_UClass_UBooleanCameraVariable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variable_MetaData), NewProp_Variable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBooleanCameraParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBooleanCameraParameter_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBooleanCameraParameter_Statics::NewProp_Variable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBooleanCameraParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBooleanCameraParameter_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	nullptr,
	&NewStructOps,
	"BooleanCameraParameter",
	Z_Construct_UScriptStruct_FBooleanCameraParameter_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBooleanCameraParameter_Statics::PropPointers),
	sizeof(FBooleanCameraParameter),
	alignof(FBooleanCameraParameter),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBooleanCameraParameter_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBooleanCameraParameter_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBooleanCameraParameter()
{
	if (!Z_Registration_Info_UScriptStruct_BooleanCameraParameter.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BooleanCameraParameter.InnerSingleton, Z_Construct_UScriptStruct_FBooleanCameraParameter_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BooleanCameraParameter.InnerSingleton;
}
// End ScriptStruct FBooleanCameraParameter

// Begin ScriptStruct FInteger32CameraParameter
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Integer32CameraParameter;
class UScriptStruct* FInteger32CameraParameter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Integer32CameraParameter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Integer32CameraParameter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInteger32CameraParameter, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("Integer32CameraParameter"));
	}
	return Z_Registration_Info_UScriptStruct_Integer32CameraParameter.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<FInteger32CameraParameter>()
{
	return FInteger32CameraParameter::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInteger32CameraParameter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Integer camera parameter. */" },
		{ "ModuleRelativePath", "Public/Core/CameraParameters.h" },
		{ "ToolTip", "Integer camera parameter." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Core/CameraParameters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Core/CameraParameters.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInteger32CameraParameter>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInteger32CameraParameter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInteger32CameraParameter, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInteger32CameraParameter_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInteger32CameraParameter, Variable), Z_Construct_UClass_UInteger32CameraVariable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variable_MetaData), NewProp_Variable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInteger32CameraParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteger32CameraParameter_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteger32CameraParameter_Statics::NewProp_Variable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteger32CameraParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInteger32CameraParameter_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	nullptr,
	&NewStructOps,
	"Integer32CameraParameter",
	Z_Construct_UScriptStruct_FInteger32CameraParameter_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteger32CameraParameter_Statics::PropPointers),
	sizeof(FInteger32CameraParameter),
	alignof(FInteger32CameraParameter),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteger32CameraParameter_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInteger32CameraParameter_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInteger32CameraParameter()
{
	if (!Z_Registration_Info_UScriptStruct_Integer32CameraParameter.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Integer32CameraParameter.InnerSingleton, Z_Construct_UScriptStruct_FInteger32CameraParameter_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Integer32CameraParameter.InnerSingleton;
}
// End ScriptStruct FInteger32CameraParameter

// Begin ScriptStruct FFloatCameraParameter
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FloatCameraParameter;
class UScriptStruct* FFloatCameraParameter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FloatCameraParameter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FloatCameraParameter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFloatCameraParameter, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("FloatCameraParameter"));
	}
	return Z_Registration_Info_UScriptStruct_FloatCameraParameter.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<FFloatCameraParameter>()
{
	return FFloatCameraParameter::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFloatCameraParameter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Float camera parameter. */" },
		{ "ModuleRelativePath", "Public/Core/CameraParameters.h" },
		{ "ToolTip", "Float camera parameter." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Core/CameraParameters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Core/CameraParameters.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFloatCameraParameter>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFloatCameraParameter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFloatCameraParameter, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFloatCameraParameter_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFloatCameraParameter, Variable), Z_Construct_UClass_UFloatCameraVariable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variable_MetaData), NewProp_Variable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFloatCameraParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatCameraParameter_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatCameraParameter_Statics::NewProp_Variable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatCameraParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFloatCameraParameter_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	nullptr,
	&NewStructOps,
	"FloatCameraParameter",
	Z_Construct_UScriptStruct_FFloatCameraParameter_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatCameraParameter_Statics::PropPointers),
	sizeof(FFloatCameraParameter),
	alignof(FFloatCameraParameter),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatCameraParameter_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFloatCameraParameter_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFloatCameraParameter()
{
	if (!Z_Registration_Info_UScriptStruct_FloatCameraParameter.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FloatCameraParameter.InnerSingleton, Z_Construct_UScriptStruct_FFloatCameraParameter_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FloatCameraParameter.InnerSingleton;
}
// End ScriptStruct FFloatCameraParameter

// Begin ScriptStruct FDoubleCameraParameter
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DoubleCameraParameter;
class UScriptStruct* FDoubleCameraParameter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DoubleCameraParameter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DoubleCameraParameter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDoubleCameraParameter, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("DoubleCameraParameter"));
	}
	return Z_Registration_Info_UScriptStruct_DoubleCameraParameter.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<FDoubleCameraParameter>()
{
	return FDoubleCameraParameter::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDoubleCameraParameter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Double camera parameter. */" },
		{ "ModuleRelativePath", "Public/Core/CameraParameters.h" },
		{ "ToolTip", "Double camera parameter." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Core/CameraParameters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Core/CameraParameters.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Value;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDoubleCameraParameter>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FDoubleCameraParameter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDoubleCameraParameter, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDoubleCameraParameter_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDoubleCameraParameter, Variable), Z_Construct_UClass_UDoubleCameraVariable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variable_MetaData), NewProp_Variable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDoubleCameraParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoubleCameraParameter_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoubleCameraParameter_Statics::NewProp_Variable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoubleCameraParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDoubleCameraParameter_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	nullptr,
	&NewStructOps,
	"DoubleCameraParameter",
	Z_Construct_UScriptStruct_FDoubleCameraParameter_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoubleCameraParameter_Statics::PropPointers),
	sizeof(FDoubleCameraParameter),
	alignof(FDoubleCameraParameter),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoubleCameraParameter_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDoubleCameraParameter_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDoubleCameraParameter()
{
	if (!Z_Registration_Info_UScriptStruct_DoubleCameraParameter.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DoubleCameraParameter.InnerSingleton, Z_Construct_UScriptStruct_FDoubleCameraParameter_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DoubleCameraParameter.InnerSingleton;
}
// End ScriptStruct FDoubleCameraParameter

// Begin ScriptStruct FVector2fCameraParameter
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Vector2fCameraParameter;
class UScriptStruct* FVector2fCameraParameter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Vector2fCameraParameter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Vector2fCameraParameter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVector2fCameraParameter, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("Vector2fCameraParameter"));
	}
	return Z_Registration_Info_UScriptStruct_Vector2fCameraParameter.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<FVector2fCameraParameter>()
{
	return FVector2fCameraParameter::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVector2fCameraParameter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Vector2f camera parameter. */" },
		{ "ModuleRelativePath", "Public/Core/CameraParameters.h" },
		{ "ToolTip", "Vector2f camera parameter." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Core/CameraParameters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Core/CameraParameters.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVector2fCameraParameter>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVector2fCameraParameter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVector2fCameraParameter, Value), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVector2fCameraParameter_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVector2fCameraParameter, Variable), Z_Construct_UClass_UVector2fCameraVariable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variable_MetaData), NewProp_Variable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVector2fCameraParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVector2fCameraParameter_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVector2fCameraParameter_Statics::NewProp_Variable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector2fCameraParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVector2fCameraParameter_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	nullptr,
	&NewStructOps,
	"Vector2fCameraParameter",
	Z_Construct_UScriptStruct_FVector2fCameraParameter_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector2fCameraParameter_Statics::PropPointers),
	sizeof(FVector2fCameraParameter),
	alignof(FVector2fCameraParameter),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector2fCameraParameter_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVector2fCameraParameter_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVector2fCameraParameter()
{
	if (!Z_Registration_Info_UScriptStruct_Vector2fCameraParameter.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Vector2fCameraParameter.InnerSingleton, Z_Construct_UScriptStruct_FVector2fCameraParameter_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Vector2fCameraParameter.InnerSingleton;
}
// End ScriptStruct FVector2fCameraParameter

// Begin ScriptStruct FVector2dCameraParameter
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Vector2dCameraParameter;
class UScriptStruct* FVector2dCameraParameter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Vector2dCameraParameter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Vector2dCameraParameter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVector2dCameraParameter, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("Vector2dCameraParameter"));
	}
	return Z_Registration_Info_UScriptStruct_Vector2dCameraParameter.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<FVector2dCameraParameter>()
{
	return FVector2dCameraParameter::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVector2dCameraParameter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Vector2d camera parameter. */" },
		{ "ModuleRelativePath", "Public/Core/CameraParameters.h" },
		{ "ToolTip", "Vector2d camera parameter." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Core/CameraParameters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Core/CameraParameters.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVector2dCameraParameter>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVector2dCameraParameter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVector2dCameraParameter, Value), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVector2dCameraParameter_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVector2dCameraParameter, Variable), Z_Construct_UClass_UVector2dCameraVariable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variable_MetaData), NewProp_Variable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVector2dCameraParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVector2dCameraParameter_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVector2dCameraParameter_Statics::NewProp_Variable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector2dCameraParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVector2dCameraParameter_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	nullptr,
	&NewStructOps,
	"Vector2dCameraParameter",
	Z_Construct_UScriptStruct_FVector2dCameraParameter_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector2dCameraParameter_Statics::PropPointers),
	sizeof(FVector2dCameraParameter),
	alignof(FVector2dCameraParameter),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector2dCameraParameter_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVector2dCameraParameter_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVector2dCameraParameter()
{
	if (!Z_Registration_Info_UScriptStruct_Vector2dCameraParameter.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Vector2dCameraParameter.InnerSingleton, Z_Construct_UScriptStruct_FVector2dCameraParameter_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Vector2dCameraParameter.InnerSingleton;
}
// End ScriptStruct FVector2dCameraParameter

// Begin ScriptStruct FVector3fCameraParameter
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Vector3fCameraParameter;
class UScriptStruct* FVector3fCameraParameter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Vector3fCameraParameter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Vector3fCameraParameter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVector3fCameraParameter, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("Vector3fCameraParameter"));
	}
	return Z_Registration_Info_UScriptStruct_Vector3fCameraParameter.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<FVector3fCameraParameter>()
{
	return FVector3fCameraParameter::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVector3fCameraParameter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Vector3f camera parameter. */" },
		{ "ModuleRelativePath", "Public/Core/CameraParameters.h" },
		{ "ToolTip", "Vector3f camera parameter." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Core/CameraParameters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Core/CameraParameters.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVector3fCameraParameter>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVector3fCameraParameter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVector3fCameraParameter, Value), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVector3fCameraParameter_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVector3fCameraParameter, Variable), Z_Construct_UClass_UVector3fCameraVariable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variable_MetaData), NewProp_Variable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVector3fCameraParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVector3fCameraParameter_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVector3fCameraParameter_Statics::NewProp_Variable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector3fCameraParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVector3fCameraParameter_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	nullptr,
	&NewStructOps,
	"Vector3fCameraParameter",
	Z_Construct_UScriptStruct_FVector3fCameraParameter_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector3fCameraParameter_Statics::PropPointers),
	sizeof(FVector3fCameraParameter),
	alignof(FVector3fCameraParameter),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector3fCameraParameter_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVector3fCameraParameter_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVector3fCameraParameter()
{
	if (!Z_Registration_Info_UScriptStruct_Vector3fCameraParameter.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Vector3fCameraParameter.InnerSingleton, Z_Construct_UScriptStruct_FVector3fCameraParameter_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Vector3fCameraParameter.InnerSingleton;
}
// End ScriptStruct FVector3fCameraParameter

// Begin ScriptStruct FVector3dCameraParameter
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Vector3dCameraParameter;
class UScriptStruct* FVector3dCameraParameter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Vector3dCameraParameter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Vector3dCameraParameter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVector3dCameraParameter, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("Vector3dCameraParameter"));
	}
	return Z_Registration_Info_UScriptStruct_Vector3dCameraParameter.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<FVector3dCameraParameter>()
{
	return FVector3dCameraParameter::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVector3dCameraParameter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Vector3d camera parameter. */" },
		{ "ModuleRelativePath", "Public/Core/CameraParameters.h" },
		{ "ToolTip", "Vector3d camera parameter." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Core/CameraParameters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Core/CameraParameters.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVector3dCameraParameter>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVector3dCameraParameter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVector3dCameraParameter, Value), Z_Construct_UScriptStruct_FVector3d, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVector3dCameraParameter_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVector3dCameraParameter, Variable), Z_Construct_UClass_UVector3dCameraVariable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variable_MetaData), NewProp_Variable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVector3dCameraParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVector3dCameraParameter_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVector3dCameraParameter_Statics::NewProp_Variable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector3dCameraParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVector3dCameraParameter_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	nullptr,
	&NewStructOps,
	"Vector3dCameraParameter",
	Z_Construct_UScriptStruct_FVector3dCameraParameter_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector3dCameraParameter_Statics::PropPointers),
	sizeof(FVector3dCameraParameter),
	alignof(FVector3dCameraParameter),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector3dCameraParameter_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVector3dCameraParameter_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVector3dCameraParameter()
{
	if (!Z_Registration_Info_UScriptStruct_Vector3dCameraParameter.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Vector3dCameraParameter.InnerSingleton, Z_Construct_UScriptStruct_FVector3dCameraParameter_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Vector3dCameraParameter.InnerSingleton;
}
// End ScriptStruct FVector3dCameraParameter

// Begin ScriptStruct FVector4fCameraParameter
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Vector4fCameraParameter;
class UScriptStruct* FVector4fCameraParameter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Vector4fCameraParameter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Vector4fCameraParameter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVector4fCameraParameter, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("Vector4fCameraParameter"));
	}
	return Z_Registration_Info_UScriptStruct_Vector4fCameraParameter.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<FVector4fCameraParameter>()
{
	return FVector4fCameraParameter::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVector4fCameraParameter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Vector4f camera parameter. */" },
		{ "ModuleRelativePath", "Public/Core/CameraParameters.h" },
		{ "ToolTip", "Vector4f camera parameter." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Core/CameraParameters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Core/CameraParameters.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVector4fCameraParameter>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVector4fCameraParameter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVector4fCameraParameter, Value), Z_Construct_UScriptStruct_FVector4f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVector4fCameraParameter_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVector4fCameraParameter, Variable), Z_Construct_UClass_UVector4fCameraVariable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variable_MetaData), NewProp_Variable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVector4fCameraParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVector4fCameraParameter_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVector4fCameraParameter_Statics::NewProp_Variable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector4fCameraParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVector4fCameraParameter_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	nullptr,
	&NewStructOps,
	"Vector4fCameraParameter",
	Z_Construct_UScriptStruct_FVector4fCameraParameter_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector4fCameraParameter_Statics::PropPointers),
	sizeof(FVector4fCameraParameter),
	alignof(FVector4fCameraParameter),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector4fCameraParameter_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVector4fCameraParameter_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVector4fCameraParameter()
{
	if (!Z_Registration_Info_UScriptStruct_Vector4fCameraParameter.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Vector4fCameraParameter.InnerSingleton, Z_Construct_UScriptStruct_FVector4fCameraParameter_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Vector4fCameraParameter.InnerSingleton;
}
// End ScriptStruct FVector4fCameraParameter

// Begin ScriptStruct FVector4dCameraParameter
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Vector4dCameraParameter;
class UScriptStruct* FVector4dCameraParameter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Vector4dCameraParameter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Vector4dCameraParameter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVector4dCameraParameter, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("Vector4dCameraParameter"));
	}
	return Z_Registration_Info_UScriptStruct_Vector4dCameraParameter.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<FVector4dCameraParameter>()
{
	return FVector4dCameraParameter::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVector4dCameraParameter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Vector4d camera parameter. */" },
		{ "ModuleRelativePath", "Public/Core/CameraParameters.h" },
		{ "ToolTip", "Vector4d camera parameter." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Core/CameraParameters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Core/CameraParameters.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVector4dCameraParameter>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVector4dCameraParameter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVector4dCameraParameter, Value), Z_Construct_UScriptStruct_FVector4d, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVector4dCameraParameter_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVector4dCameraParameter, Variable), Z_Construct_UClass_UVector4dCameraVariable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variable_MetaData), NewProp_Variable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVector4dCameraParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVector4dCameraParameter_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVector4dCameraParameter_Statics::NewProp_Variable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector4dCameraParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVector4dCameraParameter_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	nullptr,
	&NewStructOps,
	"Vector4dCameraParameter",
	Z_Construct_UScriptStruct_FVector4dCameraParameter_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector4dCameraParameter_Statics::PropPointers),
	sizeof(FVector4dCameraParameter),
	alignof(FVector4dCameraParameter),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector4dCameraParameter_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVector4dCameraParameter_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVector4dCameraParameter()
{
	if (!Z_Registration_Info_UScriptStruct_Vector4dCameraParameter.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Vector4dCameraParameter.InnerSingleton, Z_Construct_UScriptStruct_FVector4dCameraParameter_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Vector4dCameraParameter.InnerSingleton;
}
// End ScriptStruct FVector4dCameraParameter

// Begin ScriptStruct FRotator3fCameraParameter
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Rotator3fCameraParameter;
class UScriptStruct* FRotator3fCameraParameter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Rotator3fCameraParameter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Rotator3fCameraParameter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRotator3fCameraParameter, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("Rotator3fCameraParameter"));
	}
	return Z_Registration_Info_UScriptStruct_Rotator3fCameraParameter.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<FRotator3fCameraParameter>()
{
	return FRotator3fCameraParameter::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRotator3fCameraParameter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Rotator3f camera parameter. */" },
		{ "ModuleRelativePath", "Public/Core/CameraParameters.h" },
		{ "ToolTip", "Rotator3f camera parameter." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Core/CameraParameters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Core/CameraParameters.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRotator3fCameraParameter>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRotator3fCameraParameter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRotator3fCameraParameter, Value), Z_Construct_UScriptStruct_FRotator3f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRotator3fCameraParameter_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRotator3fCameraParameter, Variable), Z_Construct_UClass_URotator3fCameraVariable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variable_MetaData), NewProp_Variable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRotator3fCameraParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRotator3fCameraParameter_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRotator3fCameraParameter_Statics::NewProp_Variable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotator3fCameraParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRotator3fCameraParameter_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	nullptr,
	&NewStructOps,
	"Rotator3fCameraParameter",
	Z_Construct_UScriptStruct_FRotator3fCameraParameter_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotator3fCameraParameter_Statics::PropPointers),
	sizeof(FRotator3fCameraParameter),
	alignof(FRotator3fCameraParameter),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotator3fCameraParameter_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRotator3fCameraParameter_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRotator3fCameraParameter()
{
	if (!Z_Registration_Info_UScriptStruct_Rotator3fCameraParameter.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Rotator3fCameraParameter.InnerSingleton, Z_Construct_UScriptStruct_FRotator3fCameraParameter_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Rotator3fCameraParameter.InnerSingleton;
}
// End ScriptStruct FRotator3fCameraParameter

// Begin ScriptStruct FRotator3dCameraParameter
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Rotator3dCameraParameter;
class UScriptStruct* FRotator3dCameraParameter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Rotator3dCameraParameter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Rotator3dCameraParameter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRotator3dCameraParameter, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("Rotator3dCameraParameter"));
	}
	return Z_Registration_Info_UScriptStruct_Rotator3dCameraParameter.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<FRotator3dCameraParameter>()
{
	return FRotator3dCameraParameter::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRotator3dCameraParameter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Rotator3d camera parameter. */" },
		{ "ModuleRelativePath", "Public/Core/CameraParameters.h" },
		{ "ToolTip", "Rotator3d camera parameter." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Core/CameraParameters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Core/CameraParameters.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRotator3dCameraParameter>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRotator3dCameraParameter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRotator3dCameraParameter, Value), Z_Construct_UScriptStruct_FRotator3d, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRotator3dCameraParameter_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRotator3dCameraParameter, Variable), Z_Construct_UClass_URotator3dCameraVariable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variable_MetaData), NewProp_Variable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRotator3dCameraParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRotator3dCameraParameter_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRotator3dCameraParameter_Statics::NewProp_Variable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotator3dCameraParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRotator3dCameraParameter_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	nullptr,
	&NewStructOps,
	"Rotator3dCameraParameter",
	Z_Construct_UScriptStruct_FRotator3dCameraParameter_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotator3dCameraParameter_Statics::PropPointers),
	sizeof(FRotator3dCameraParameter),
	alignof(FRotator3dCameraParameter),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotator3dCameraParameter_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRotator3dCameraParameter_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRotator3dCameraParameter()
{
	if (!Z_Registration_Info_UScriptStruct_Rotator3dCameraParameter.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Rotator3dCameraParameter.InnerSingleton, Z_Construct_UScriptStruct_FRotator3dCameraParameter_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Rotator3dCameraParameter.InnerSingleton;
}
// End ScriptStruct FRotator3dCameraParameter

// Begin ScriptStruct FTransform3fCameraParameter
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Transform3fCameraParameter;
class UScriptStruct* FTransform3fCameraParameter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Transform3fCameraParameter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Transform3fCameraParameter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTransform3fCameraParameter, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("Transform3fCameraParameter"));
	}
	return Z_Registration_Info_UScriptStruct_Transform3fCameraParameter.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<FTransform3fCameraParameter>()
{
	return FTransform3fCameraParameter::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTransform3fCameraParameter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Transform3f camera parameter. */" },
		{ "ModuleRelativePath", "Public/Core/CameraParameters.h" },
		{ "ToolTip", "Transform3f camera parameter." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Core/CameraParameters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Core/CameraParameters.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTransform3fCameraParameter>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTransform3fCameraParameter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTransform3fCameraParameter, Value), Z_Construct_UScriptStruct_FTransform3f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTransform3fCameraParameter_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTransform3fCameraParameter, Variable), Z_Construct_UClass_UTransform3fCameraVariable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variable_MetaData), NewProp_Variable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTransform3fCameraParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransform3fCameraParameter_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransform3fCameraParameter_Statics::NewProp_Variable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransform3fCameraParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTransform3fCameraParameter_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	nullptr,
	&NewStructOps,
	"Transform3fCameraParameter",
	Z_Construct_UScriptStruct_FTransform3fCameraParameter_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransform3fCameraParameter_Statics::PropPointers),
	sizeof(FTransform3fCameraParameter),
	alignof(FTransform3fCameraParameter),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransform3fCameraParameter_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTransform3fCameraParameter_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTransform3fCameraParameter()
{
	if (!Z_Registration_Info_UScriptStruct_Transform3fCameraParameter.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Transform3fCameraParameter.InnerSingleton, Z_Construct_UScriptStruct_FTransform3fCameraParameter_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Transform3fCameraParameter.InnerSingleton;
}
// End ScriptStruct FTransform3fCameraParameter

// Begin ScriptStruct FTransform3dCameraParameter
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Transform3dCameraParameter;
class UScriptStruct* FTransform3dCameraParameter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Transform3dCameraParameter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Transform3dCameraParameter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTransform3dCameraParameter, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("Transform3dCameraParameter"));
	}
	return Z_Registration_Info_UScriptStruct_Transform3dCameraParameter.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<FTransform3dCameraParameter>()
{
	return FTransform3dCameraParameter::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTransform3dCameraParameter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Transform3d camera parameter. */" },
		{ "ModuleRelativePath", "Public/Core/CameraParameters.h" },
		{ "ToolTip", "Transform3d camera parameter." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Core/CameraParameters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Public/Core/CameraParameters.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTransform3dCameraParameter>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTransform3dCameraParameter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTransform3dCameraParameter, Value), Z_Construct_UScriptStruct_FTransform3d, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTransform3dCameraParameter_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTransform3dCameraParameter, Variable), Z_Construct_UClass_UTransform3dCameraVariable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variable_MetaData), NewProp_Variable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTransform3dCameraParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransform3dCameraParameter_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransform3dCameraParameter_Statics::NewProp_Variable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransform3dCameraParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTransform3dCameraParameter_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	nullptr,
	&NewStructOps,
	"Transform3dCameraParameter",
	Z_Construct_UScriptStruct_FTransform3dCameraParameter_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransform3dCameraParameter_Statics::PropPointers),
	sizeof(FTransform3dCameraParameter),
	alignof(FTransform3dCameraParameter),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransform3dCameraParameter_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTransform3dCameraParameter_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTransform3dCameraParameter()
{
	if (!Z_Registration_Info_UScriptStruct_Transform3dCameraParameter.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Transform3dCameraParameter.InnerSingleton, Z_Construct_UScriptStruct_FTransform3dCameraParameter_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Transform3dCameraParameter.InnerSingleton;
}
// End ScriptStruct FTransform3dCameraParameter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraParameters_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBooleanCameraParameter::StaticStruct, Z_Construct_UScriptStruct_FBooleanCameraParameter_Statics::NewStructOps, TEXT("BooleanCameraParameter"), &Z_Registration_Info_UScriptStruct_BooleanCameraParameter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBooleanCameraParameter), 2798599862U) },
		{ FInteger32CameraParameter::StaticStruct, Z_Construct_UScriptStruct_FInteger32CameraParameter_Statics::NewStructOps, TEXT("Integer32CameraParameter"), &Z_Registration_Info_UScriptStruct_Integer32CameraParameter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInteger32CameraParameter), 3350893433U) },
		{ FFloatCameraParameter::StaticStruct, Z_Construct_UScriptStruct_FFloatCameraParameter_Statics::NewStructOps, TEXT("FloatCameraParameter"), &Z_Registration_Info_UScriptStruct_FloatCameraParameter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFloatCameraParameter), 834407157U) },
		{ FDoubleCameraParameter::StaticStruct, Z_Construct_UScriptStruct_FDoubleCameraParameter_Statics::NewStructOps, TEXT("DoubleCameraParameter"), &Z_Registration_Info_UScriptStruct_DoubleCameraParameter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDoubleCameraParameter), 60259665U) },
		{ FVector2fCameraParameter::StaticStruct, Z_Construct_UScriptStruct_FVector2fCameraParameter_Statics::NewStructOps, TEXT("Vector2fCameraParameter"), &Z_Registration_Info_UScriptStruct_Vector2fCameraParameter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVector2fCameraParameter), 2361009214U) },
		{ FVector2dCameraParameter::StaticStruct, Z_Construct_UScriptStruct_FVector2dCameraParameter_Statics::NewStructOps, TEXT("Vector2dCameraParameter"), &Z_Registration_Info_UScriptStruct_Vector2dCameraParameter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVector2dCameraParameter), 1195649529U) },
		{ FVector3fCameraParameter::StaticStruct, Z_Construct_UScriptStruct_FVector3fCameraParameter_Statics::NewStructOps, TEXT("Vector3fCameraParameter"), &Z_Registration_Info_UScriptStruct_Vector3fCameraParameter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVector3fCameraParameter), 2906443670U) },
		{ FVector3dCameraParameter::StaticStruct, Z_Construct_UScriptStruct_FVector3dCameraParameter_Statics::NewStructOps, TEXT("Vector3dCameraParameter"), &Z_Registration_Info_UScriptStruct_Vector3dCameraParameter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVector3dCameraParameter), 2998266714U) },
		{ FVector4fCameraParameter::StaticStruct, Z_Construct_UScriptStruct_FVector4fCameraParameter_Statics::NewStructOps, TEXT("Vector4fCameraParameter"), &Z_Registration_Info_UScriptStruct_Vector4fCameraParameter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVector4fCameraParameter), 2936717831U) },
		{ FVector4dCameraParameter::StaticStruct, Z_Construct_UScriptStruct_FVector4dCameraParameter_Statics::NewStructOps, TEXT("Vector4dCameraParameter"), &Z_Registration_Info_UScriptStruct_Vector4dCameraParameter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVector4dCameraParameter), 3755583652U) },
		{ FRotator3fCameraParameter::StaticStruct, Z_Construct_UScriptStruct_FRotator3fCameraParameter_Statics::NewStructOps, TEXT("Rotator3fCameraParameter"), &Z_Registration_Info_UScriptStruct_Rotator3fCameraParameter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRotator3fCameraParameter), 3231316489U) },
		{ FRotator3dCameraParameter::StaticStruct, Z_Construct_UScriptStruct_FRotator3dCameraParameter_Statics::NewStructOps, TEXT("Rotator3dCameraParameter"), &Z_Registration_Info_UScriptStruct_Rotator3dCameraParameter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRotator3dCameraParameter), 3457852835U) },
		{ FTransform3fCameraParameter::StaticStruct, Z_Construct_UScriptStruct_FTransform3fCameraParameter_Statics::NewStructOps, TEXT("Transform3fCameraParameter"), &Z_Registration_Info_UScriptStruct_Transform3fCameraParameter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTransform3fCameraParameter), 2717589259U) },
		{ FTransform3dCameraParameter::StaticStruct, Z_Construct_UScriptStruct_FTransform3dCameraParameter_Statics::NewStructOps, TEXT("Transform3dCameraParameter"), &Z_Registration_Info_UScriptStruct_Transform3dCameraParameter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTransform3dCameraParameter), 4165315591U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraParameters_h_447196668(TEXT("/Script/GameplayCameras"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraParameters_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraParameters_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
