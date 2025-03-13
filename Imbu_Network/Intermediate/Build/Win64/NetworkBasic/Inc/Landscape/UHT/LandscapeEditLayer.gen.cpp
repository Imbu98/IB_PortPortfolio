// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Landscape/Classes/LandscapeEditLayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeEditLayer() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
LANDSCAPE_API UClass* Z_Construct_UClass_ALandscape_NoRegister();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeEditLayer();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeEditLayer_NoRegister();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeEditLayerBase();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeEditLayerBase_NoRegister();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeEditLayerPersistent();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeEditLayerPersistent_NoRegister();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeEditLayerProcedural();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeEditLayerProcedural_NoRegister();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeEditLayerRenderer_NoRegister();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeEditLayerSplines();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeEditLayerSplines_NoRegister();
UPackage* Z_Construct_UPackage__Script_Landscape();
// End Cross Module References

// Begin Class ULandscapeEditLayerBase
void ULandscapeEditLayerBase::StaticRegisterNativesULandscapeEditLayerBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULandscapeEditLayerBase);
UClass* Z_Construct_UClass_ULandscapeEditLayerBase_NoRegister()
{
	return ULandscapeEditLayerBase::StaticClass();
}
struct Z_Construct_UClass_ULandscapeEditLayerBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** \n* Base class for all landscape edit layers. By implementing the various virtual functions, we are able to customize the behavior of the edit layer\n*  wrt the landscape tools in a generic way (e.g. does it support sculpting tools? painting tools? can it be collapsed?, etc.)\n*/" },
		{ "IncludePath", "LandscapeEditLayer.h" },
		{ "ModuleRelativePath", "Classes/LandscapeEditLayer.h" },
		{ "ToolTip", "Base class for all landscape edit layers. By implementing the various virtual functions, we are able to customize the behavior of the edit layer\n wrt the landscape tools in a generic way (e.g. does it support sculpting tools? painting tools? can it be collapsed?, etc.)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningLandscape_MetaData[] = {
		{ "Comment", "// TODO: This might be removed once more things are moved from FLandscapeLayer to ULandscapeLayer\n" },
		{ "ModuleRelativePath", "Classes/LandscapeEditLayer.h" },
		{ "ToolTip", "TODO: This might be removed once more things are moved from FLandscapeLayer to ULandscapeLayer" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_OwningLandscape;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULandscapeEditLayerBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_ULandscapeEditLayerBase_Statics::NewProp_OwningLandscape = { "OwningLandscape", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeEditLayerBase, OwningLandscape), Z_Construct_UClass_ALandscape_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningLandscape_MetaData), NewProp_OwningLandscape_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULandscapeEditLayerBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditLayerBase_Statics::NewProp_OwningLandscape,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditLayerBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULandscapeEditLayerBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditLayerBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULandscapeEditLayerBase_Statics::ClassParams = {
	&ULandscapeEditLayerBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULandscapeEditLayerBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditLayerBase_Statics::PropPointers),
	0,
	0x000800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditLayerBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ULandscapeEditLayerBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULandscapeEditLayerBase()
{
	if (!Z_Registration_Info_UClass_ULandscapeEditLayerBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULandscapeEditLayerBase.OuterSingleton, Z_Construct_UClass_ULandscapeEditLayerBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULandscapeEditLayerBase.OuterSingleton;
}
template<> LANDSCAPE_API UClass* StaticClass<ULandscapeEditLayerBase>()
{
	return ULandscapeEditLayerBase::StaticClass();
}
ULandscapeEditLayerBase::ULandscapeEditLayerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeEditLayerBase);
ULandscapeEditLayerBase::~ULandscapeEditLayerBase() {}
// End Class ULandscapeEditLayerBase

// Begin Class ULandscapeEditLayerPersistent
void ULandscapeEditLayerPersistent::StaticRegisterNativesULandscapeEditLayerPersistent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULandscapeEditLayerPersistent);
UClass* Z_Construct_UClass_ULandscapeEditLayerPersistent_NoRegister()
{
	return ULandscapeEditLayerPersistent::StaticClass();
}
struct Z_Construct_UClass_ULandscapeEditLayerPersistent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** \n* Base class for persistent layers, i.e. layers that have a set of backing textures (heightmaps, weightmaps) and can therefore be rendered in a similar fashion\n*/" },
		{ "IncludePath", "LandscapeEditLayer.h" },
		{ "ModuleRelativePath", "Classes/LandscapeEditLayer.h" },
		{ "ToolTip", "Base class for persistent layers, i.e. layers that have a set of backing textures (heightmaps, weightmaps) and can therefore be rendered in a similar fashion" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULandscapeEditLayerPersistent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULandscapeEditLayerPersistent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULandscapeEditLayerBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditLayerPersistent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ULandscapeEditLayerPersistent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_ULandscapeEditLayerRenderer_NoRegister, (int32)VTABLE_OFFSET(ULandscapeEditLayerPersistent, ILandscapeEditLayerRenderer), false },  // 1765112389
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULandscapeEditLayerPersistent_Statics::ClassParams = {
	&ULandscapeEditLayerPersistent::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x000800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditLayerPersistent_Statics::Class_MetaDataParams), Z_Construct_UClass_ULandscapeEditLayerPersistent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULandscapeEditLayerPersistent()
{
	if (!Z_Registration_Info_UClass_ULandscapeEditLayerPersistent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULandscapeEditLayerPersistent.OuterSingleton, Z_Construct_UClass_ULandscapeEditLayerPersistent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULandscapeEditLayerPersistent.OuterSingleton;
}
template<> LANDSCAPE_API UClass* StaticClass<ULandscapeEditLayerPersistent>()
{
	return ULandscapeEditLayerPersistent::StaticClass();
}
ULandscapeEditLayerPersistent::ULandscapeEditLayerPersistent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeEditLayerPersistent);
ULandscapeEditLayerPersistent::~ULandscapeEditLayerPersistent() {}
// End Class ULandscapeEditLayerPersistent

// Begin Class ULandscapeEditLayer
void ULandscapeEditLayer::StaticRegisterNativesULandscapeEditLayer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULandscapeEditLayer);
UClass* Z_Construct_UClass_ULandscapeEditLayer_NoRegister()
{
	return ULandscapeEditLayer::StaticClass();
}
struct Z_Construct_UClass_ULandscapeEditLayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** \n* This is the standard type of edit layer. It can be manually authored (sculpted, painted, etc.) in the landscape editor \n*/" },
		{ "IncludePath", "LandscapeEditLayer.h" },
		{ "ModuleRelativePath", "Classes/LandscapeEditLayer.h" },
		{ "ToolTip", "This is the standard type of edit layer. It can be manually authored (sculpted, painted, etc.) in the landscape editor" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULandscapeEditLayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULandscapeEditLayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULandscapeEditLayerPersistent,
	(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditLayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULandscapeEditLayer_Statics::ClassParams = {
	&ULandscapeEditLayer::StaticClass,
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
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditLayer_Statics::Class_MetaDataParams), Z_Construct_UClass_ULandscapeEditLayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULandscapeEditLayer()
{
	if (!Z_Registration_Info_UClass_ULandscapeEditLayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULandscapeEditLayer.OuterSingleton, Z_Construct_UClass_ULandscapeEditLayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULandscapeEditLayer.OuterSingleton;
}
template<> LANDSCAPE_API UClass* StaticClass<ULandscapeEditLayer>()
{
	return ULandscapeEditLayer::StaticClass();
}
ULandscapeEditLayer::ULandscapeEditLayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeEditLayer);
ULandscapeEditLayer::~ULandscapeEditLayer() {}
// End Class ULandscapeEditLayer

// Begin Class ULandscapeEditLayerProcedural
void ULandscapeEditLayerProcedural::StaticRegisterNativesULandscapeEditLayerProcedural()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULandscapeEditLayerProcedural);
UClass* Z_Construct_UClass_ULandscapeEditLayerProcedural_NoRegister()
{
	return ULandscapeEditLayerProcedural::StaticClass();
}
struct Z_Construct_UClass_ULandscapeEditLayerProcedural_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** \n* Base class for procedural layers. Procedural layers cannot be edited through standard editing tools\n*/" },
		{ "IncludePath", "LandscapeEditLayer.h" },
		{ "ModuleRelativePath", "Classes/LandscapeEditLayer.h" },
		{ "ToolTip", "Base class for procedural layers. Procedural layers cannot be edited through standard editing tools" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULandscapeEditLayerProcedural>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULandscapeEditLayerProcedural_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULandscapeEditLayerBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditLayerProcedural_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULandscapeEditLayerProcedural_Statics::ClassParams = {
	&ULandscapeEditLayerProcedural::StaticClass,
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
	0x000800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditLayerProcedural_Statics::Class_MetaDataParams), Z_Construct_UClass_ULandscapeEditLayerProcedural_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULandscapeEditLayerProcedural()
{
	if (!Z_Registration_Info_UClass_ULandscapeEditLayerProcedural.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULandscapeEditLayerProcedural.OuterSingleton, Z_Construct_UClass_ULandscapeEditLayerProcedural_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULandscapeEditLayerProcedural.OuterSingleton;
}
template<> LANDSCAPE_API UClass* StaticClass<ULandscapeEditLayerProcedural>()
{
	return ULandscapeEditLayerProcedural::StaticClass();
}
ULandscapeEditLayerProcedural::ULandscapeEditLayerProcedural(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeEditLayerProcedural);
ULandscapeEditLayerProcedural::~ULandscapeEditLayerProcedural() {}
// End Class ULandscapeEditLayerProcedural

// Begin Class ULandscapeEditLayerSplines
void ULandscapeEditLayerSplines::StaticRegisterNativesULandscapeEditLayerSplines()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULandscapeEditLayerSplines);
UClass* Z_Construct_UClass_ULandscapeEditLayerSplines_NoRegister()
{
	return ULandscapeEditLayerSplines::StaticClass();
}
struct Z_Construct_UClass_ULandscapeEditLayerSplines_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** \n* Procedural edit layer that lets the user manipulate its content using landscape splines (Splines tool in the Manage panel) \n*/" },
		{ "IncludePath", "LandscapeEditLayer.h" },
		{ "ModuleRelativePath", "Classes/LandscapeEditLayer.h" },
		{ "ToolTip", "Procedural edit layer that lets the user manipulate its content using landscape splines (Splines tool in the Manage panel)" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULandscapeEditLayerSplines>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULandscapeEditLayerSplines_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULandscapeEditLayerPersistent,
	(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditLayerSplines_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULandscapeEditLayerSplines_Statics::ClassParams = {
	&ULandscapeEditLayerSplines::StaticClass,
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
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditLayerSplines_Statics::Class_MetaDataParams), Z_Construct_UClass_ULandscapeEditLayerSplines_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULandscapeEditLayerSplines()
{
	if (!Z_Registration_Info_UClass_ULandscapeEditLayerSplines.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULandscapeEditLayerSplines.OuterSingleton, Z_Construct_UClass_ULandscapeEditLayerSplines_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULandscapeEditLayerSplines.OuterSingleton;
}
template<> LANDSCAPE_API UClass* StaticClass<ULandscapeEditLayerSplines>()
{
	return ULandscapeEditLayerSplines::StaticClass();
}
ULandscapeEditLayerSplines::ULandscapeEditLayerSplines(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeEditLayerSplines);
ULandscapeEditLayerSplines::~ULandscapeEditLayerSplines() {}
// End Class ULandscapeEditLayerSplines

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeEditLayer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULandscapeEditLayerBase, ULandscapeEditLayerBase::StaticClass, TEXT("ULandscapeEditLayerBase"), &Z_Registration_Info_UClass_ULandscapeEditLayerBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULandscapeEditLayerBase), 587872274U) },
		{ Z_Construct_UClass_ULandscapeEditLayerPersistent, ULandscapeEditLayerPersistent::StaticClass, TEXT("ULandscapeEditLayerPersistent"), &Z_Registration_Info_UClass_ULandscapeEditLayerPersistent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULandscapeEditLayerPersistent), 567410285U) },
		{ Z_Construct_UClass_ULandscapeEditLayer, ULandscapeEditLayer::StaticClass, TEXT("ULandscapeEditLayer"), &Z_Registration_Info_UClass_ULandscapeEditLayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULandscapeEditLayer), 1481120847U) },
		{ Z_Construct_UClass_ULandscapeEditLayerProcedural, ULandscapeEditLayerProcedural::StaticClass, TEXT("ULandscapeEditLayerProcedural"), &Z_Registration_Info_UClass_ULandscapeEditLayerProcedural, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULandscapeEditLayerProcedural), 7535426U) },
		{ Z_Construct_UClass_ULandscapeEditLayerSplines, ULandscapeEditLayerSplines::StaticClass, TEXT("ULandscapeEditLayerSplines"), &Z_Registration_Info_UClass_ULandscapeEditLayerSplines, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULandscapeEditLayerSplines), 1616474646U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeEditLayer_h_1956943695(TEXT("/Script/Landscape"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeEditLayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeEditLayer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
