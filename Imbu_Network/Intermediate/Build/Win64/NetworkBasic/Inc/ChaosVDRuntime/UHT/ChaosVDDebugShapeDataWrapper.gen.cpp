// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/ChaosVisualDebugger/Public/DataWrappers/ChaosVDDebugShapeDataWrapper.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosVDDebugShapeDataWrapper() {}

// Begin Cross Module References
CHAOSVDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FChaosVDDebugDrawBoxDataWrapper();
CHAOSVDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FChaosVDDebugDrawImplicitObjectDataWrapper();
CHAOSVDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FChaosVDDebugDrawLineDataWrapper();
CHAOSVDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FChaosVDDebugDrawShapeBase();
CHAOSVDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FChaosVDDebugDrawSphereDataWrapper();
CHAOSVDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FChaosVDWrapperDataBase();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
UPackage* Z_Construct_UPackage__Script_ChaosVDRuntime();
// End Cross Module References

// Begin ScriptStruct FChaosVDDebugDrawShapeBase
static_assert(std::is_polymorphic<FChaosVDDebugDrawShapeBase>() == std::is_polymorphic<FChaosVDWrapperDataBase>(), "USTRUCT FChaosVDDebugDrawShapeBase cannot be polymorphic unless super FChaosVDWrapperDataBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosVDDebugDrawShapeBase;
class UScriptStruct* FChaosVDDebugDrawShapeBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDDebugDrawShapeBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosVDDebugDrawShapeBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDDebugDrawShapeBase, (UObject*)Z_Construct_UPackage__Script_ChaosVDRuntime(), TEXT("ChaosVDDebugDrawShapeBase"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDDebugDrawShapeBase.OuterSingleton;
}
template<> CHAOSVDRUNTIME_API UScriptStruct* StaticStruct<FChaosVDDebugDrawShapeBase>()
{
	return FChaosVDDebugDrawShapeBase::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChaosVDDebugDrawShapeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDDebugShapeDataWrapper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SolverID_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDDebugShapeDataWrapper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDDebugShapeDataWrapper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDDebugShapeDataWrapper.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SolverID;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Tag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosVDDebugDrawShapeBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosVDDebugDrawShapeBase_Statics::NewProp_SolverID = { "SolverID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDDebugDrawShapeBase, SolverID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SolverID_MetaData), NewProp_SolverID_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FChaosVDDebugDrawShapeBase_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDDebugDrawShapeBase, Tag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_MetaData), NewProp_Tag_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDDebugDrawShapeBase_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDDebugDrawShapeBase, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosVDDebugDrawShapeBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDDebugDrawShapeBase_Statics::NewProp_SolverID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDDebugDrawShapeBase_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDDebugDrawShapeBase_Statics::NewProp_Color,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDDebugDrawShapeBase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosVDDebugDrawShapeBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosVDRuntime,
	Z_Construct_UScriptStruct_FChaosVDWrapperDataBase,
	&NewStructOps,
	"ChaosVDDebugDrawShapeBase",
	Z_Construct_UScriptStruct_FChaosVDDebugDrawShapeBase_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDDebugDrawShapeBase_Statics::PropPointers),
	sizeof(FChaosVDDebugDrawShapeBase),
	alignof(FChaosVDDebugDrawShapeBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDDebugDrawShapeBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosVDDebugDrawShapeBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChaosVDDebugDrawShapeBase()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDDebugDrawShapeBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosVDDebugDrawShapeBase.InnerSingleton, Z_Construct_UScriptStruct_FChaosVDDebugDrawShapeBase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDDebugDrawShapeBase.InnerSingleton;
}
// End ScriptStruct FChaosVDDebugDrawShapeBase

// Begin ScriptStruct FChaosVDDebugDrawBoxDataWrapper
static_assert(std::is_polymorphic<FChaosVDDebugDrawBoxDataWrapper>() == std::is_polymorphic<FChaosVDDebugDrawShapeBase>(), "USTRUCT FChaosVDDebugDrawBoxDataWrapper cannot be polymorphic unless super FChaosVDDebugDrawShapeBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosVDDebugDrawBoxDataWrapper;
class UScriptStruct* FChaosVDDebugDrawBoxDataWrapper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDDebugDrawBoxDataWrapper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosVDDebugDrawBoxDataWrapper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDDebugDrawBoxDataWrapper, (UObject*)Z_Construct_UPackage__Script_ChaosVDRuntime(), TEXT("ChaosVDDebugDrawBoxDataWrapper"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDDebugDrawBoxDataWrapper.OuterSingleton;
}
template<> CHAOSVDRUNTIME_API UScriptStruct* StaticStruct<FChaosVDDebugDrawBoxDataWrapper>()
{
	return FChaosVDDebugDrawBoxDataWrapper::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChaosVDDebugDrawBoxDataWrapper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDDebugShapeDataWrapper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Box_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDDebugShapeDataWrapper.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Box;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosVDDebugDrawBoxDataWrapper>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDDebugDrawBoxDataWrapper_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDDebugDrawBoxDataWrapper, Box), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Box_MetaData), NewProp_Box_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosVDDebugDrawBoxDataWrapper_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDDebugDrawBoxDataWrapper_Statics::NewProp_Box,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDDebugDrawBoxDataWrapper_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosVDDebugDrawBoxDataWrapper_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosVDRuntime,
	Z_Construct_UScriptStruct_FChaosVDDebugDrawShapeBase,
	&NewStructOps,
	"ChaosVDDebugDrawBoxDataWrapper",
	Z_Construct_UScriptStruct_FChaosVDDebugDrawBoxDataWrapper_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDDebugDrawBoxDataWrapper_Statics::PropPointers),
	sizeof(FChaosVDDebugDrawBoxDataWrapper),
	alignof(FChaosVDDebugDrawBoxDataWrapper),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDDebugDrawBoxDataWrapper_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosVDDebugDrawBoxDataWrapper_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChaosVDDebugDrawBoxDataWrapper()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDDebugDrawBoxDataWrapper.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosVDDebugDrawBoxDataWrapper.InnerSingleton, Z_Construct_UScriptStruct_FChaosVDDebugDrawBoxDataWrapper_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDDebugDrawBoxDataWrapper.InnerSingleton;
}
// End ScriptStruct FChaosVDDebugDrawBoxDataWrapper

// Begin ScriptStruct FChaosVDDebugDrawSphereDataWrapper
static_assert(std::is_polymorphic<FChaosVDDebugDrawSphereDataWrapper>() == std::is_polymorphic<FChaosVDDebugDrawShapeBase>(), "USTRUCT FChaosVDDebugDrawSphereDataWrapper cannot be polymorphic unless super FChaosVDDebugDrawShapeBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosVDDebugDrawSphereDataWrapper;
class UScriptStruct* FChaosVDDebugDrawSphereDataWrapper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDDebugDrawSphereDataWrapper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosVDDebugDrawSphereDataWrapper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDDebugDrawSphereDataWrapper, (UObject*)Z_Construct_UPackage__Script_ChaosVDRuntime(), TEXT("ChaosVDDebugDrawSphereDataWrapper"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDDebugDrawSphereDataWrapper.OuterSingleton;
}
template<> CHAOSVDRUNTIME_API UScriptStruct* StaticStruct<FChaosVDDebugDrawSphereDataWrapper>()
{
	return FChaosVDDebugDrawSphereDataWrapper::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChaosVDDebugDrawSphereDataWrapper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDDebugShapeDataWrapper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDDebugShapeDataWrapper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDDebugShapeDataWrapper.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosVDDebugDrawSphereDataWrapper>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDDebugDrawSphereDataWrapper_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDDebugDrawSphereDataWrapper, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Origin_MetaData), NewProp_Origin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosVDDebugDrawSphereDataWrapper_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDDebugDrawSphereDataWrapper, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosVDDebugDrawSphereDataWrapper_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDDebugDrawSphereDataWrapper_Statics::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDDebugDrawSphereDataWrapper_Statics::NewProp_Radius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDDebugDrawSphereDataWrapper_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosVDDebugDrawSphereDataWrapper_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosVDRuntime,
	Z_Construct_UScriptStruct_FChaosVDDebugDrawShapeBase,
	&NewStructOps,
	"ChaosVDDebugDrawSphereDataWrapper",
	Z_Construct_UScriptStruct_FChaosVDDebugDrawSphereDataWrapper_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDDebugDrawSphereDataWrapper_Statics::PropPointers),
	sizeof(FChaosVDDebugDrawSphereDataWrapper),
	alignof(FChaosVDDebugDrawSphereDataWrapper),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDDebugDrawSphereDataWrapper_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosVDDebugDrawSphereDataWrapper_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChaosVDDebugDrawSphereDataWrapper()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDDebugDrawSphereDataWrapper.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosVDDebugDrawSphereDataWrapper.InnerSingleton, Z_Construct_UScriptStruct_FChaosVDDebugDrawSphereDataWrapper_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDDebugDrawSphereDataWrapper.InnerSingleton;
}
// End ScriptStruct FChaosVDDebugDrawSphereDataWrapper

// Begin ScriptStruct FChaosVDDebugDrawLineDataWrapper
static_assert(std::is_polymorphic<FChaosVDDebugDrawLineDataWrapper>() == std::is_polymorphic<FChaosVDDebugDrawShapeBase>(), "USTRUCT FChaosVDDebugDrawLineDataWrapper cannot be polymorphic unless super FChaosVDDebugDrawShapeBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosVDDebugDrawLineDataWrapper;
class UScriptStruct* FChaosVDDebugDrawLineDataWrapper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDDebugDrawLineDataWrapper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosVDDebugDrawLineDataWrapper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDDebugDrawLineDataWrapper, (UObject*)Z_Construct_UPackage__Script_ChaosVDRuntime(), TEXT("ChaosVDDebugDrawLineDataWrapper"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDDebugDrawLineDataWrapper.OuterSingleton;
}
template<> CHAOSVDRUNTIME_API UScriptStruct* StaticStruct<FChaosVDDebugDrawLineDataWrapper>()
{
	return FChaosVDDebugDrawLineDataWrapper::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChaosVDDebugDrawLineDataWrapper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDDebugShapeDataWrapper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDDebugShapeDataWrapper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDDebugShapeDataWrapper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsArrow_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDDebugShapeDataWrapper.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndLocation;
	static void NewProp_bIsArrow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsArrow;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosVDDebugDrawLineDataWrapper>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDDebugDrawLineDataWrapper_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDDebugDrawLineDataWrapper, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartLocation_MetaData), NewProp_StartLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDDebugDrawLineDataWrapper_Statics::NewProp_EndLocation = { "EndLocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDDebugDrawLineDataWrapper, EndLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndLocation_MetaData), NewProp_EndLocation_MetaData) };
void Z_Construct_UScriptStruct_FChaosVDDebugDrawLineDataWrapper_Statics::NewProp_bIsArrow_SetBit(void* Obj)
{
	((FChaosVDDebugDrawLineDataWrapper*)Obj)->bIsArrow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDDebugDrawLineDataWrapper_Statics::NewProp_bIsArrow = { "bIsArrow", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FChaosVDDebugDrawLineDataWrapper), &Z_Construct_UScriptStruct_FChaosVDDebugDrawLineDataWrapper_Statics::NewProp_bIsArrow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsArrow_MetaData), NewProp_bIsArrow_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosVDDebugDrawLineDataWrapper_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDDebugDrawLineDataWrapper_Statics::NewProp_StartLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDDebugDrawLineDataWrapper_Statics::NewProp_EndLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDDebugDrawLineDataWrapper_Statics::NewProp_bIsArrow,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDDebugDrawLineDataWrapper_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosVDDebugDrawLineDataWrapper_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosVDRuntime,
	Z_Construct_UScriptStruct_FChaosVDDebugDrawShapeBase,
	&NewStructOps,
	"ChaosVDDebugDrawLineDataWrapper",
	Z_Construct_UScriptStruct_FChaosVDDebugDrawLineDataWrapper_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDDebugDrawLineDataWrapper_Statics::PropPointers),
	sizeof(FChaosVDDebugDrawLineDataWrapper),
	alignof(FChaosVDDebugDrawLineDataWrapper),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDDebugDrawLineDataWrapper_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosVDDebugDrawLineDataWrapper_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChaosVDDebugDrawLineDataWrapper()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDDebugDrawLineDataWrapper.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosVDDebugDrawLineDataWrapper.InnerSingleton, Z_Construct_UScriptStruct_FChaosVDDebugDrawLineDataWrapper_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDDebugDrawLineDataWrapper.InnerSingleton;
}
// End ScriptStruct FChaosVDDebugDrawLineDataWrapper

// Begin ScriptStruct FChaosVDDebugDrawImplicitObjectDataWrapper
static_assert(std::is_polymorphic<FChaosVDDebugDrawImplicitObjectDataWrapper>() == std::is_polymorphic<FChaosVDDebugDrawShapeBase>(), "USTRUCT FChaosVDDebugDrawImplicitObjectDataWrapper cannot be polymorphic unless super FChaosVDDebugDrawShapeBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosVDDebugDrawImplicitObjectDataWrapper;
class UScriptStruct* FChaosVDDebugDrawImplicitObjectDataWrapper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDDebugDrawImplicitObjectDataWrapper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosVDDebugDrawImplicitObjectDataWrapper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDDebugDrawImplicitObjectDataWrapper, (UObject*)Z_Construct_UPackage__Script_ChaosVDRuntime(), TEXT("ChaosVDDebugDrawImplicitObjectDataWrapper"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDDebugDrawImplicitObjectDataWrapper.OuterSingleton;
}
template<> CHAOSVDRUNTIME_API UScriptStruct* StaticStruct<FChaosVDDebugDrawImplicitObjectDataWrapper>()
{
	return FChaosVDDebugDrawImplicitObjectDataWrapper::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChaosVDDebugDrawImplicitObjectDataWrapper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDDebugShapeDataWrapper.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosVDDebugDrawImplicitObjectDataWrapper>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosVDDebugDrawImplicitObjectDataWrapper_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosVDRuntime,
	Z_Construct_UScriptStruct_FChaosVDDebugDrawShapeBase,
	&NewStructOps,
	"ChaosVDDebugDrawImplicitObjectDataWrapper",
	nullptr,
	0,
	sizeof(FChaosVDDebugDrawImplicitObjectDataWrapper),
	alignof(FChaosVDDebugDrawImplicitObjectDataWrapper),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDDebugDrawImplicitObjectDataWrapper_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosVDDebugDrawImplicitObjectDataWrapper_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChaosVDDebugDrawImplicitObjectDataWrapper()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDDebugDrawImplicitObjectDataWrapper.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosVDDebugDrawImplicitObjectDataWrapper.InnerSingleton, Z_Construct_UScriptStruct_FChaosVDDebugDrawImplicitObjectDataWrapper_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDDebugDrawImplicitObjectDataWrapper.InnerSingleton;
}
// End ScriptStruct FChaosVDDebugDrawImplicitObjectDataWrapper

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDDebugShapeDataWrapper_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FChaosVDDebugDrawShapeBase::StaticStruct, Z_Construct_UScriptStruct_FChaosVDDebugDrawShapeBase_Statics::NewStructOps, TEXT("ChaosVDDebugDrawShapeBase"), &Z_Registration_Info_UScriptStruct_ChaosVDDebugDrawShapeBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosVDDebugDrawShapeBase), 994665283U) },
		{ FChaosVDDebugDrawBoxDataWrapper::StaticStruct, Z_Construct_UScriptStruct_FChaosVDDebugDrawBoxDataWrapper_Statics::NewStructOps, TEXT("ChaosVDDebugDrawBoxDataWrapper"), &Z_Registration_Info_UScriptStruct_ChaosVDDebugDrawBoxDataWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosVDDebugDrawBoxDataWrapper), 215232200U) },
		{ FChaosVDDebugDrawSphereDataWrapper::StaticStruct, Z_Construct_UScriptStruct_FChaosVDDebugDrawSphereDataWrapper_Statics::NewStructOps, TEXT("ChaosVDDebugDrawSphereDataWrapper"), &Z_Registration_Info_UScriptStruct_ChaosVDDebugDrawSphereDataWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosVDDebugDrawSphereDataWrapper), 1564344598U) },
		{ FChaosVDDebugDrawLineDataWrapper::StaticStruct, Z_Construct_UScriptStruct_FChaosVDDebugDrawLineDataWrapper_Statics::NewStructOps, TEXT("ChaosVDDebugDrawLineDataWrapper"), &Z_Registration_Info_UScriptStruct_ChaosVDDebugDrawLineDataWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosVDDebugDrawLineDataWrapper), 644773731U) },
		{ FChaosVDDebugDrawImplicitObjectDataWrapper::StaticStruct, Z_Construct_UScriptStruct_FChaosVDDebugDrawImplicitObjectDataWrapper_Statics::NewStructOps, TEXT("ChaosVDDebugDrawImplicitObjectDataWrapper"), &Z_Registration_Info_UScriptStruct_ChaosVDDebugDrawImplicitObjectDataWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosVDDebugDrawImplicitObjectDataWrapper), 2797273928U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDDebugShapeDataWrapper_h_2092866338(TEXT("/Script/ChaosVDRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDDebugShapeDataWrapper_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDDebugShapeDataWrapper_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
