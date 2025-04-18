// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/InteractiveToolsFramework/Public/BaseGizmos/GizmoElementCircle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGizmoElementCircle() {}

// Begin Cross Module References
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementCircle();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementCircle_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementCircleBase();
UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References

// Begin Class UGizmoElementCircle
void UGizmoElementCircle::StaticRegisterNativesUGizmoElementCircle()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGizmoElementCircle);
UClass* Z_Construct_UClass_UGizmoElementCircle_NoRegister()
{
	return UGizmoElementCircle::StaticClass();
}
struct Z_Construct_UClass_UGizmoElementCircle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Simple object intended to be used as part of 3D Gizmos.\n * Draws a filled or line circle based on parameters.\n * \n * The circle element does not yet support partial circles.\n */" },
		{ "IncludePath", "BaseGizmos/GizmoElementCircle.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementCircle.h" },
		{ "ToolTip", "Simple object intended to be used as part of 3D Gizmos.\nDraws a filled or line circle based on parameters.\n\nThe circle element does not yet support partial circles." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawMesh_MetaData[] = {
		{ "Comment", "// Whether to render solid circle.\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementCircle.h" },
		{ "ToolTip", "Whether to render solid circle." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawLine_MetaData[] = {
		{ "Comment", "// Whether to render line circle.\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementCircle.h" },
		{ "ToolTip", "Whether to render line circle." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHitMesh_MetaData[] = {
		{ "Comment", "// Whether to perform hit test on mesh.\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementCircle.h" },
		{ "ToolTip", "Whether to perform hit test on mesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHitLine_MetaData[] = {
		{ "Comment", "// Whether to perform hit test on line.\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementCircle.h" },
		{ "ToolTip", "Whether to perform hit test on line." },
	};
#endif // WITH_METADATA
	static void NewProp_bDrawMesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawMesh;
	static void NewProp_bDrawLine_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawLine;
	static void NewProp_bHitMesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHitMesh;
	static void NewProp_bHitLine_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHitLine;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoElementCircle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UGizmoElementCircle_Statics::NewProp_bDrawMesh_SetBit(void* Obj)
{
	((UGizmoElementCircle*)Obj)->bDrawMesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGizmoElementCircle_Statics::NewProp_bDrawMesh = { "bDrawMesh", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGizmoElementCircle), &Z_Construct_UClass_UGizmoElementCircle_Statics::NewProp_bDrawMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawMesh_MetaData), NewProp_bDrawMesh_MetaData) };
void Z_Construct_UClass_UGizmoElementCircle_Statics::NewProp_bDrawLine_SetBit(void* Obj)
{
	((UGizmoElementCircle*)Obj)->bDrawLine = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGizmoElementCircle_Statics::NewProp_bDrawLine = { "bDrawLine", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGizmoElementCircle), &Z_Construct_UClass_UGizmoElementCircle_Statics::NewProp_bDrawLine_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawLine_MetaData), NewProp_bDrawLine_MetaData) };
void Z_Construct_UClass_UGizmoElementCircle_Statics::NewProp_bHitMesh_SetBit(void* Obj)
{
	((UGizmoElementCircle*)Obj)->bHitMesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGizmoElementCircle_Statics::NewProp_bHitMesh = { "bHitMesh", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGizmoElementCircle), &Z_Construct_UClass_UGizmoElementCircle_Statics::NewProp_bHitMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHitMesh_MetaData), NewProp_bHitMesh_MetaData) };
void Z_Construct_UClass_UGizmoElementCircle_Statics::NewProp_bHitLine_SetBit(void* Obj)
{
	((UGizmoElementCircle*)Obj)->bHitLine = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGizmoElementCircle_Statics::NewProp_bHitLine = { "bHitLine", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGizmoElementCircle), &Z_Construct_UClass_UGizmoElementCircle_Statics::NewProp_bHitLine_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHitLine_MetaData), NewProp_bHitLine_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGizmoElementCircle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementCircle_Statics::NewProp_bDrawMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementCircle_Statics::NewProp_bDrawLine,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementCircle_Statics::NewProp_bHitMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementCircle_Statics::NewProp_bHitLine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementCircle_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGizmoElementCircle_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGizmoElementCircleBase,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementCircle_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGizmoElementCircle_Statics::ClassParams = {
	&UGizmoElementCircle::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGizmoElementCircle_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementCircle_Statics::PropPointers),
	0,
	0x000800A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementCircle_Statics::Class_MetaDataParams), Z_Construct_UClass_UGizmoElementCircle_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGizmoElementCircle()
{
	if (!Z_Registration_Info_UClass_UGizmoElementCircle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGizmoElementCircle.OuterSingleton, Z_Construct_UClass_UGizmoElementCircle_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGizmoElementCircle.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoElementCircle>()
{
	return UGizmoElementCircle::StaticClass();
}
UGizmoElementCircle::UGizmoElementCircle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoElementCircle);
UGizmoElementCircle::~UGizmoElementCircle() {}
// End Class UGizmoElementCircle

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementCircle_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGizmoElementCircle, UGizmoElementCircle::StaticClass, TEXT("UGizmoElementCircle"), &Z_Registration_Info_UClass_UGizmoElementCircle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGizmoElementCircle), 3771730119U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementCircle_h_2476303282(TEXT("/Script/InteractiveToolsFramework"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementCircle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementCircle_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
