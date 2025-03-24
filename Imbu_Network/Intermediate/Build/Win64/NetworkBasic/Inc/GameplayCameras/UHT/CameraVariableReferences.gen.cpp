// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCameras/Public/Core/CameraVariableReferences.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraVariableReferences() {}

// Begin Cross Module References
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
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FBooleanCameraVariableReference();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FDoubleCameraVariableReference();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FFloatCameraVariableReference();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FInteger32CameraVariableReference();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FRotator3dCameraVariableReference();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FRotator3fCameraVariableReference();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FTransform3dCameraVariableReference();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FTransform3fCameraVariableReference();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FVector2dCameraVariableReference();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FVector2fCameraVariableReference();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FVector3dCameraVariableReference();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FVector3fCameraVariableReference();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FVector4dCameraVariableReference();
GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FVector4fCameraVariableReference();
UPackage* Z_Construct_UPackage__Script_GameplayCameras();
// End Cross Module References

// Begin ScriptStruct FBooleanCameraVariableReference
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BooleanCameraVariableReference;
class UScriptStruct* FBooleanCameraVariableReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BooleanCameraVariableReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BooleanCameraVariableReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBooleanCameraVariableReference, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("BooleanCameraVariableReference"));
	}
	return Z_Registration_Info_UScriptStruct_BooleanCameraVariableReference.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<FBooleanCameraVariableReference>()
{
	return FBooleanCameraVariableReference::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBooleanCameraVariableReference_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/CameraVariableReferences.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[] = {
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "Public/Core/CameraVariableReferences.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBooleanCameraVariableReference>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBooleanCameraVariableReference_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBooleanCameraVariableReference, Variable), Z_Construct_UClass_UBooleanCameraVariable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variable_MetaData), NewProp_Variable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBooleanCameraVariableReference_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBooleanCameraVariableReference_Statics::NewProp_Variable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBooleanCameraVariableReference_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBooleanCameraVariableReference_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	nullptr,
	&NewStructOps,
	"BooleanCameraVariableReference",
	Z_Construct_UScriptStruct_FBooleanCameraVariableReference_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBooleanCameraVariableReference_Statics::PropPointers),
	sizeof(FBooleanCameraVariableReference),
	alignof(FBooleanCameraVariableReference),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBooleanCameraVariableReference_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBooleanCameraVariableReference_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBooleanCameraVariableReference()
{
	if (!Z_Registration_Info_UScriptStruct_BooleanCameraVariableReference.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BooleanCameraVariableReference.InnerSingleton, Z_Construct_UScriptStruct_FBooleanCameraVariableReference_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BooleanCameraVariableReference.InnerSingleton;
}
// End ScriptStruct FBooleanCameraVariableReference

// Begin ScriptStruct FInteger32CameraVariableReference
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Integer32CameraVariableReference;
class UScriptStruct* FInteger32CameraVariableReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Integer32CameraVariableReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Integer32CameraVariableReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInteger32CameraVariableReference, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("Integer32CameraVariableReference"));
	}
	return Z_Registration_Info_UScriptStruct_Integer32CameraVariableReference.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<FInteger32CameraVariableReference>()
{
	return FInteger32CameraVariableReference::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInteger32CameraVariableReference_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/CameraVariableReferences.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[] = {
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "Public/Core/CameraVariableReferences.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInteger32CameraVariableReference>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInteger32CameraVariableReference_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInteger32CameraVariableReference, Variable), Z_Construct_UClass_UInteger32CameraVariable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variable_MetaData), NewProp_Variable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInteger32CameraVariableReference_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteger32CameraVariableReference_Statics::NewProp_Variable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteger32CameraVariableReference_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInteger32CameraVariableReference_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	nullptr,
	&NewStructOps,
	"Integer32CameraVariableReference",
	Z_Construct_UScriptStruct_FInteger32CameraVariableReference_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteger32CameraVariableReference_Statics::PropPointers),
	sizeof(FInteger32CameraVariableReference),
	alignof(FInteger32CameraVariableReference),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteger32CameraVariableReference_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInteger32CameraVariableReference_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInteger32CameraVariableReference()
{
	if (!Z_Registration_Info_UScriptStruct_Integer32CameraVariableReference.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Integer32CameraVariableReference.InnerSingleton, Z_Construct_UScriptStruct_FInteger32CameraVariableReference_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Integer32CameraVariableReference.InnerSingleton;
}
// End ScriptStruct FInteger32CameraVariableReference

// Begin ScriptStruct FFloatCameraVariableReference
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FloatCameraVariableReference;
class UScriptStruct* FFloatCameraVariableReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FloatCameraVariableReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FloatCameraVariableReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFloatCameraVariableReference, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("FloatCameraVariableReference"));
	}
	return Z_Registration_Info_UScriptStruct_FloatCameraVariableReference.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<FFloatCameraVariableReference>()
{
	return FFloatCameraVariableReference::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFloatCameraVariableReference_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/CameraVariableReferences.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[] = {
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "Public/Core/CameraVariableReferences.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFloatCameraVariableReference>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFloatCameraVariableReference_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFloatCameraVariableReference, Variable), Z_Construct_UClass_UFloatCameraVariable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variable_MetaData), NewProp_Variable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFloatCameraVariableReference_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatCameraVariableReference_Statics::NewProp_Variable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatCameraVariableReference_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFloatCameraVariableReference_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	nullptr,
	&NewStructOps,
	"FloatCameraVariableReference",
	Z_Construct_UScriptStruct_FFloatCameraVariableReference_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatCameraVariableReference_Statics::PropPointers),
	sizeof(FFloatCameraVariableReference),
	alignof(FFloatCameraVariableReference),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatCameraVariableReference_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFloatCameraVariableReference_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFloatCameraVariableReference()
{
	if (!Z_Registration_Info_UScriptStruct_FloatCameraVariableReference.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FloatCameraVariableReference.InnerSingleton, Z_Construct_UScriptStruct_FFloatCameraVariableReference_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FloatCameraVariableReference.InnerSingleton;
}
// End ScriptStruct FFloatCameraVariableReference

// Begin ScriptStruct FDoubleCameraVariableReference
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DoubleCameraVariableReference;
class UScriptStruct* FDoubleCameraVariableReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DoubleCameraVariableReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DoubleCameraVariableReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDoubleCameraVariableReference, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("DoubleCameraVariableReference"));
	}
	return Z_Registration_Info_UScriptStruct_DoubleCameraVariableReference.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<FDoubleCameraVariableReference>()
{
	return FDoubleCameraVariableReference::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDoubleCameraVariableReference_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/CameraVariableReferences.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[] = {
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "Public/Core/CameraVariableReferences.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDoubleCameraVariableReference>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDoubleCameraVariableReference_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDoubleCameraVariableReference, Variable), Z_Construct_UClass_UDoubleCameraVariable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variable_MetaData), NewProp_Variable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDoubleCameraVariableReference_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoubleCameraVariableReference_Statics::NewProp_Variable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoubleCameraVariableReference_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDoubleCameraVariableReference_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	nullptr,
	&NewStructOps,
	"DoubleCameraVariableReference",
	Z_Construct_UScriptStruct_FDoubleCameraVariableReference_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoubleCameraVariableReference_Statics::PropPointers),
	sizeof(FDoubleCameraVariableReference),
	alignof(FDoubleCameraVariableReference),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoubleCameraVariableReference_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDoubleCameraVariableReference_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDoubleCameraVariableReference()
{
	if (!Z_Registration_Info_UScriptStruct_DoubleCameraVariableReference.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DoubleCameraVariableReference.InnerSingleton, Z_Construct_UScriptStruct_FDoubleCameraVariableReference_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DoubleCameraVariableReference.InnerSingleton;
}
// End ScriptStruct FDoubleCameraVariableReference

// Begin ScriptStruct FVector2fCameraVariableReference
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Vector2fCameraVariableReference;
class UScriptStruct* FVector2fCameraVariableReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Vector2fCameraVariableReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Vector2fCameraVariableReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVector2fCameraVariableReference, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("Vector2fCameraVariableReference"));
	}
	return Z_Registration_Info_UScriptStruct_Vector2fCameraVariableReference.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<FVector2fCameraVariableReference>()
{
	return FVector2fCameraVariableReference::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVector2fCameraVariableReference_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/CameraVariableReferences.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[] = {
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "Public/Core/CameraVariableReferences.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVector2fCameraVariableReference>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVector2fCameraVariableReference_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVector2fCameraVariableReference, Variable), Z_Construct_UClass_UVector2fCameraVariable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variable_MetaData), NewProp_Variable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVector2fCameraVariableReference_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVector2fCameraVariableReference_Statics::NewProp_Variable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector2fCameraVariableReference_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVector2fCameraVariableReference_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	nullptr,
	&NewStructOps,
	"Vector2fCameraVariableReference",
	Z_Construct_UScriptStruct_FVector2fCameraVariableReference_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector2fCameraVariableReference_Statics::PropPointers),
	sizeof(FVector2fCameraVariableReference),
	alignof(FVector2fCameraVariableReference),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector2fCameraVariableReference_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVector2fCameraVariableReference_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVector2fCameraVariableReference()
{
	if (!Z_Registration_Info_UScriptStruct_Vector2fCameraVariableReference.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Vector2fCameraVariableReference.InnerSingleton, Z_Construct_UScriptStruct_FVector2fCameraVariableReference_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Vector2fCameraVariableReference.InnerSingleton;
}
// End ScriptStruct FVector2fCameraVariableReference

// Begin ScriptStruct FVector2dCameraVariableReference
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Vector2dCameraVariableReference;
class UScriptStruct* FVector2dCameraVariableReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Vector2dCameraVariableReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Vector2dCameraVariableReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVector2dCameraVariableReference, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("Vector2dCameraVariableReference"));
	}
	return Z_Registration_Info_UScriptStruct_Vector2dCameraVariableReference.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<FVector2dCameraVariableReference>()
{
	return FVector2dCameraVariableReference::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVector2dCameraVariableReference_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/CameraVariableReferences.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[] = {
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "Public/Core/CameraVariableReferences.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVector2dCameraVariableReference>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVector2dCameraVariableReference_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVector2dCameraVariableReference, Variable), Z_Construct_UClass_UVector2dCameraVariable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variable_MetaData), NewProp_Variable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVector2dCameraVariableReference_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVector2dCameraVariableReference_Statics::NewProp_Variable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector2dCameraVariableReference_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVector2dCameraVariableReference_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	nullptr,
	&NewStructOps,
	"Vector2dCameraVariableReference",
	Z_Construct_UScriptStruct_FVector2dCameraVariableReference_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector2dCameraVariableReference_Statics::PropPointers),
	sizeof(FVector2dCameraVariableReference),
	alignof(FVector2dCameraVariableReference),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector2dCameraVariableReference_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVector2dCameraVariableReference_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVector2dCameraVariableReference()
{
	if (!Z_Registration_Info_UScriptStruct_Vector2dCameraVariableReference.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Vector2dCameraVariableReference.InnerSingleton, Z_Construct_UScriptStruct_FVector2dCameraVariableReference_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Vector2dCameraVariableReference.InnerSingleton;
}
// End ScriptStruct FVector2dCameraVariableReference

// Begin ScriptStruct FVector3fCameraVariableReference
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Vector3fCameraVariableReference;
class UScriptStruct* FVector3fCameraVariableReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Vector3fCameraVariableReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Vector3fCameraVariableReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVector3fCameraVariableReference, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("Vector3fCameraVariableReference"));
	}
	return Z_Registration_Info_UScriptStruct_Vector3fCameraVariableReference.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<FVector3fCameraVariableReference>()
{
	return FVector3fCameraVariableReference::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVector3fCameraVariableReference_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/CameraVariableReferences.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[] = {
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "Public/Core/CameraVariableReferences.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVector3fCameraVariableReference>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVector3fCameraVariableReference_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVector3fCameraVariableReference, Variable), Z_Construct_UClass_UVector3fCameraVariable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variable_MetaData), NewProp_Variable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVector3fCameraVariableReference_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVector3fCameraVariableReference_Statics::NewProp_Variable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector3fCameraVariableReference_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVector3fCameraVariableReference_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	nullptr,
	&NewStructOps,
	"Vector3fCameraVariableReference",
	Z_Construct_UScriptStruct_FVector3fCameraVariableReference_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector3fCameraVariableReference_Statics::PropPointers),
	sizeof(FVector3fCameraVariableReference),
	alignof(FVector3fCameraVariableReference),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector3fCameraVariableReference_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVector3fCameraVariableReference_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVector3fCameraVariableReference()
{
	if (!Z_Registration_Info_UScriptStruct_Vector3fCameraVariableReference.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Vector3fCameraVariableReference.InnerSingleton, Z_Construct_UScriptStruct_FVector3fCameraVariableReference_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Vector3fCameraVariableReference.InnerSingleton;
}
// End ScriptStruct FVector3fCameraVariableReference

// Begin ScriptStruct FVector3dCameraVariableReference
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Vector3dCameraVariableReference;
class UScriptStruct* FVector3dCameraVariableReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Vector3dCameraVariableReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Vector3dCameraVariableReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVector3dCameraVariableReference, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("Vector3dCameraVariableReference"));
	}
	return Z_Registration_Info_UScriptStruct_Vector3dCameraVariableReference.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<FVector3dCameraVariableReference>()
{
	return FVector3dCameraVariableReference::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVector3dCameraVariableReference_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/CameraVariableReferences.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[] = {
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "Public/Core/CameraVariableReferences.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVector3dCameraVariableReference>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVector3dCameraVariableReference_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVector3dCameraVariableReference, Variable), Z_Construct_UClass_UVector3dCameraVariable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variable_MetaData), NewProp_Variable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVector3dCameraVariableReference_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVector3dCameraVariableReference_Statics::NewProp_Variable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector3dCameraVariableReference_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVector3dCameraVariableReference_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	nullptr,
	&NewStructOps,
	"Vector3dCameraVariableReference",
	Z_Construct_UScriptStruct_FVector3dCameraVariableReference_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector3dCameraVariableReference_Statics::PropPointers),
	sizeof(FVector3dCameraVariableReference),
	alignof(FVector3dCameraVariableReference),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector3dCameraVariableReference_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVector3dCameraVariableReference_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVector3dCameraVariableReference()
{
	if (!Z_Registration_Info_UScriptStruct_Vector3dCameraVariableReference.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Vector3dCameraVariableReference.InnerSingleton, Z_Construct_UScriptStruct_FVector3dCameraVariableReference_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Vector3dCameraVariableReference.InnerSingleton;
}
// End ScriptStruct FVector3dCameraVariableReference

// Begin ScriptStruct FVector4fCameraVariableReference
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Vector4fCameraVariableReference;
class UScriptStruct* FVector4fCameraVariableReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Vector4fCameraVariableReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Vector4fCameraVariableReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVector4fCameraVariableReference, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("Vector4fCameraVariableReference"));
	}
	return Z_Registration_Info_UScriptStruct_Vector4fCameraVariableReference.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<FVector4fCameraVariableReference>()
{
	return FVector4fCameraVariableReference::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVector4fCameraVariableReference_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/CameraVariableReferences.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[] = {
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "Public/Core/CameraVariableReferences.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVector4fCameraVariableReference>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVector4fCameraVariableReference_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVector4fCameraVariableReference, Variable), Z_Construct_UClass_UVector4fCameraVariable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variable_MetaData), NewProp_Variable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVector4fCameraVariableReference_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVector4fCameraVariableReference_Statics::NewProp_Variable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector4fCameraVariableReference_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVector4fCameraVariableReference_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	nullptr,
	&NewStructOps,
	"Vector4fCameraVariableReference",
	Z_Construct_UScriptStruct_FVector4fCameraVariableReference_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector4fCameraVariableReference_Statics::PropPointers),
	sizeof(FVector4fCameraVariableReference),
	alignof(FVector4fCameraVariableReference),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector4fCameraVariableReference_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVector4fCameraVariableReference_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVector4fCameraVariableReference()
{
	if (!Z_Registration_Info_UScriptStruct_Vector4fCameraVariableReference.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Vector4fCameraVariableReference.InnerSingleton, Z_Construct_UScriptStruct_FVector4fCameraVariableReference_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Vector4fCameraVariableReference.InnerSingleton;
}
// End ScriptStruct FVector4fCameraVariableReference

// Begin ScriptStruct FVector4dCameraVariableReference
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Vector4dCameraVariableReference;
class UScriptStruct* FVector4dCameraVariableReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Vector4dCameraVariableReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Vector4dCameraVariableReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVector4dCameraVariableReference, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("Vector4dCameraVariableReference"));
	}
	return Z_Registration_Info_UScriptStruct_Vector4dCameraVariableReference.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<FVector4dCameraVariableReference>()
{
	return FVector4dCameraVariableReference::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVector4dCameraVariableReference_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/CameraVariableReferences.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[] = {
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "Public/Core/CameraVariableReferences.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVector4dCameraVariableReference>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVector4dCameraVariableReference_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVector4dCameraVariableReference, Variable), Z_Construct_UClass_UVector4dCameraVariable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variable_MetaData), NewProp_Variable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVector4dCameraVariableReference_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVector4dCameraVariableReference_Statics::NewProp_Variable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector4dCameraVariableReference_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVector4dCameraVariableReference_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	nullptr,
	&NewStructOps,
	"Vector4dCameraVariableReference",
	Z_Construct_UScriptStruct_FVector4dCameraVariableReference_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector4dCameraVariableReference_Statics::PropPointers),
	sizeof(FVector4dCameraVariableReference),
	alignof(FVector4dCameraVariableReference),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector4dCameraVariableReference_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVector4dCameraVariableReference_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVector4dCameraVariableReference()
{
	if (!Z_Registration_Info_UScriptStruct_Vector4dCameraVariableReference.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Vector4dCameraVariableReference.InnerSingleton, Z_Construct_UScriptStruct_FVector4dCameraVariableReference_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Vector4dCameraVariableReference.InnerSingleton;
}
// End ScriptStruct FVector4dCameraVariableReference

// Begin ScriptStruct FRotator3fCameraVariableReference
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Rotator3fCameraVariableReference;
class UScriptStruct* FRotator3fCameraVariableReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Rotator3fCameraVariableReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Rotator3fCameraVariableReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRotator3fCameraVariableReference, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("Rotator3fCameraVariableReference"));
	}
	return Z_Registration_Info_UScriptStruct_Rotator3fCameraVariableReference.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<FRotator3fCameraVariableReference>()
{
	return FRotator3fCameraVariableReference::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRotator3fCameraVariableReference_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/CameraVariableReferences.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[] = {
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "Public/Core/CameraVariableReferences.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRotator3fCameraVariableReference>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRotator3fCameraVariableReference_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRotator3fCameraVariableReference, Variable), Z_Construct_UClass_URotator3fCameraVariable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variable_MetaData), NewProp_Variable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRotator3fCameraVariableReference_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRotator3fCameraVariableReference_Statics::NewProp_Variable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotator3fCameraVariableReference_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRotator3fCameraVariableReference_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	nullptr,
	&NewStructOps,
	"Rotator3fCameraVariableReference",
	Z_Construct_UScriptStruct_FRotator3fCameraVariableReference_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotator3fCameraVariableReference_Statics::PropPointers),
	sizeof(FRotator3fCameraVariableReference),
	alignof(FRotator3fCameraVariableReference),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotator3fCameraVariableReference_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRotator3fCameraVariableReference_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRotator3fCameraVariableReference()
{
	if (!Z_Registration_Info_UScriptStruct_Rotator3fCameraVariableReference.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Rotator3fCameraVariableReference.InnerSingleton, Z_Construct_UScriptStruct_FRotator3fCameraVariableReference_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Rotator3fCameraVariableReference.InnerSingleton;
}
// End ScriptStruct FRotator3fCameraVariableReference

// Begin ScriptStruct FRotator3dCameraVariableReference
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Rotator3dCameraVariableReference;
class UScriptStruct* FRotator3dCameraVariableReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Rotator3dCameraVariableReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Rotator3dCameraVariableReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRotator3dCameraVariableReference, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("Rotator3dCameraVariableReference"));
	}
	return Z_Registration_Info_UScriptStruct_Rotator3dCameraVariableReference.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<FRotator3dCameraVariableReference>()
{
	return FRotator3dCameraVariableReference::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRotator3dCameraVariableReference_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/CameraVariableReferences.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[] = {
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "Public/Core/CameraVariableReferences.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRotator3dCameraVariableReference>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRotator3dCameraVariableReference_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRotator3dCameraVariableReference, Variable), Z_Construct_UClass_URotator3dCameraVariable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variable_MetaData), NewProp_Variable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRotator3dCameraVariableReference_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRotator3dCameraVariableReference_Statics::NewProp_Variable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotator3dCameraVariableReference_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRotator3dCameraVariableReference_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	nullptr,
	&NewStructOps,
	"Rotator3dCameraVariableReference",
	Z_Construct_UScriptStruct_FRotator3dCameraVariableReference_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotator3dCameraVariableReference_Statics::PropPointers),
	sizeof(FRotator3dCameraVariableReference),
	alignof(FRotator3dCameraVariableReference),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotator3dCameraVariableReference_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRotator3dCameraVariableReference_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRotator3dCameraVariableReference()
{
	if (!Z_Registration_Info_UScriptStruct_Rotator3dCameraVariableReference.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Rotator3dCameraVariableReference.InnerSingleton, Z_Construct_UScriptStruct_FRotator3dCameraVariableReference_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Rotator3dCameraVariableReference.InnerSingleton;
}
// End ScriptStruct FRotator3dCameraVariableReference

// Begin ScriptStruct FTransform3fCameraVariableReference
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Transform3fCameraVariableReference;
class UScriptStruct* FTransform3fCameraVariableReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Transform3fCameraVariableReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Transform3fCameraVariableReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTransform3fCameraVariableReference, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("Transform3fCameraVariableReference"));
	}
	return Z_Registration_Info_UScriptStruct_Transform3fCameraVariableReference.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<FTransform3fCameraVariableReference>()
{
	return FTransform3fCameraVariableReference::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTransform3fCameraVariableReference_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/CameraVariableReferences.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[] = {
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "Public/Core/CameraVariableReferences.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTransform3fCameraVariableReference>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTransform3fCameraVariableReference_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTransform3fCameraVariableReference, Variable), Z_Construct_UClass_UTransform3fCameraVariable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variable_MetaData), NewProp_Variable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTransform3fCameraVariableReference_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransform3fCameraVariableReference_Statics::NewProp_Variable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransform3fCameraVariableReference_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTransform3fCameraVariableReference_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	nullptr,
	&NewStructOps,
	"Transform3fCameraVariableReference",
	Z_Construct_UScriptStruct_FTransform3fCameraVariableReference_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransform3fCameraVariableReference_Statics::PropPointers),
	sizeof(FTransform3fCameraVariableReference),
	alignof(FTransform3fCameraVariableReference),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransform3fCameraVariableReference_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTransform3fCameraVariableReference_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTransform3fCameraVariableReference()
{
	if (!Z_Registration_Info_UScriptStruct_Transform3fCameraVariableReference.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Transform3fCameraVariableReference.InnerSingleton, Z_Construct_UScriptStruct_FTransform3fCameraVariableReference_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Transform3fCameraVariableReference.InnerSingleton;
}
// End ScriptStruct FTransform3fCameraVariableReference

// Begin ScriptStruct FTransform3dCameraVariableReference
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Transform3dCameraVariableReference;
class UScriptStruct* FTransform3dCameraVariableReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Transform3dCameraVariableReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Transform3dCameraVariableReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTransform3dCameraVariableReference, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("Transform3dCameraVariableReference"));
	}
	return Z_Registration_Info_UScriptStruct_Transform3dCameraVariableReference.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<FTransform3dCameraVariableReference>()
{
	return FTransform3dCameraVariableReference::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTransform3dCameraVariableReference_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/CameraVariableReferences.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[] = {
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "Public/Core/CameraVariableReferences.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Variable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTransform3dCameraVariableReference>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTransform3dCameraVariableReference_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTransform3dCameraVariableReference, Variable), Z_Construct_UClass_UTransform3dCameraVariable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variable_MetaData), NewProp_Variable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTransform3dCameraVariableReference_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransform3dCameraVariableReference_Statics::NewProp_Variable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransform3dCameraVariableReference_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTransform3dCameraVariableReference_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	nullptr,
	&NewStructOps,
	"Transform3dCameraVariableReference",
	Z_Construct_UScriptStruct_FTransform3dCameraVariableReference_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransform3dCameraVariableReference_Statics::PropPointers),
	sizeof(FTransform3dCameraVariableReference),
	alignof(FTransform3dCameraVariableReference),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransform3dCameraVariableReference_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTransform3dCameraVariableReference_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTransform3dCameraVariableReference()
{
	if (!Z_Registration_Info_UScriptStruct_Transform3dCameraVariableReference.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Transform3dCameraVariableReference.InnerSingleton, Z_Construct_UScriptStruct_FTransform3dCameraVariableReference_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Transform3dCameraVariableReference.InnerSingleton;
}
// End ScriptStruct FTransform3dCameraVariableReference

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraVariableReferences_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBooleanCameraVariableReference::StaticStruct, Z_Construct_UScriptStruct_FBooleanCameraVariableReference_Statics::NewStructOps, TEXT("BooleanCameraVariableReference"), &Z_Registration_Info_UScriptStruct_BooleanCameraVariableReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBooleanCameraVariableReference), 3464423664U) },
		{ FInteger32CameraVariableReference::StaticStruct, Z_Construct_UScriptStruct_FInteger32CameraVariableReference_Statics::NewStructOps, TEXT("Integer32CameraVariableReference"), &Z_Registration_Info_UScriptStruct_Integer32CameraVariableReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInteger32CameraVariableReference), 2549009256U) },
		{ FFloatCameraVariableReference::StaticStruct, Z_Construct_UScriptStruct_FFloatCameraVariableReference_Statics::NewStructOps, TEXT("FloatCameraVariableReference"), &Z_Registration_Info_UScriptStruct_FloatCameraVariableReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFloatCameraVariableReference), 3256687682U) },
		{ FDoubleCameraVariableReference::StaticStruct, Z_Construct_UScriptStruct_FDoubleCameraVariableReference_Statics::NewStructOps, TEXT("DoubleCameraVariableReference"), &Z_Registration_Info_UScriptStruct_DoubleCameraVariableReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDoubleCameraVariableReference), 4030994673U) },
		{ FVector2fCameraVariableReference::StaticStruct, Z_Construct_UScriptStruct_FVector2fCameraVariableReference_Statics::NewStructOps, TEXT("Vector2fCameraVariableReference"), &Z_Registration_Info_UScriptStruct_Vector2fCameraVariableReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVector2fCameraVariableReference), 2179157822U) },
		{ FVector2dCameraVariableReference::StaticStruct, Z_Construct_UScriptStruct_FVector2dCameraVariableReference_Statics::NewStructOps, TEXT("Vector2dCameraVariableReference"), &Z_Registration_Info_UScriptStruct_Vector2dCameraVariableReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVector2dCameraVariableReference), 2917942399U) },
		{ FVector3fCameraVariableReference::StaticStruct, Z_Construct_UScriptStruct_FVector3fCameraVariableReference_Statics::NewStructOps, TEXT("Vector3fCameraVariableReference"), &Z_Registration_Info_UScriptStruct_Vector3fCameraVariableReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVector3fCameraVariableReference), 2084712862U) },
		{ FVector3dCameraVariableReference::StaticStruct, Z_Construct_UScriptStruct_FVector3dCameraVariableReference_Statics::NewStructOps, TEXT("Vector3dCameraVariableReference"), &Z_Registration_Info_UScriptStruct_Vector3dCameraVariableReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVector3dCameraVariableReference), 1316263577U) },
		{ FVector4fCameraVariableReference::StaticStruct, Z_Construct_UScriptStruct_FVector4fCameraVariableReference_Statics::NewStructOps, TEXT("Vector4fCameraVariableReference"), &Z_Registration_Info_UScriptStruct_Vector4fCameraVariableReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVector4fCameraVariableReference), 77740536U) },
		{ FVector4dCameraVariableReference::StaticStruct, Z_Construct_UScriptStruct_FVector4dCameraVariableReference_Statics::NewStructOps, TEXT("Vector4dCameraVariableReference"), &Z_Registration_Info_UScriptStruct_Vector4dCameraVariableReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVector4dCameraVariableReference), 1635110232U) },
		{ FRotator3fCameraVariableReference::StaticStruct, Z_Construct_UScriptStruct_FRotator3fCameraVariableReference_Statics::NewStructOps, TEXT("Rotator3fCameraVariableReference"), &Z_Registration_Info_UScriptStruct_Rotator3fCameraVariableReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRotator3fCameraVariableReference), 607659604U) },
		{ FRotator3dCameraVariableReference::StaticStruct, Z_Construct_UScriptStruct_FRotator3dCameraVariableReference_Statics::NewStructOps, TEXT("Rotator3dCameraVariableReference"), &Z_Registration_Info_UScriptStruct_Rotator3dCameraVariableReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRotator3dCameraVariableReference), 3038572953U) },
		{ FTransform3fCameraVariableReference::StaticStruct, Z_Construct_UScriptStruct_FTransform3fCameraVariableReference_Statics::NewStructOps, TEXT("Transform3fCameraVariableReference"), &Z_Registration_Info_UScriptStruct_Transform3fCameraVariableReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTransform3fCameraVariableReference), 2300100208U) },
		{ FTransform3dCameraVariableReference::StaticStruct, Z_Construct_UScriptStruct_FTransform3dCameraVariableReference_Statics::NewStructOps, TEXT("Transform3dCameraVariableReference"), &Z_Registration_Info_UScriptStruct_Transform3dCameraVariableReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTransform3dCameraVariableReference), 294238102U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraVariableReferences_h_893357700(TEXT("/Script/GameplayCameras"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraVariableReferences_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraVariableReferences_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
