// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCameras/Public/Core/CameraVariableCollection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraVariableCollection() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraVariableAsset_NoRegister();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraVariableCollection();
GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraVariableCollection_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameplayCameras();
// End Cross Module References

// Begin Class UCameraVariableCollection
void UCameraVariableCollection::StaticRegisterNativesUCameraVariableCollection()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCameraVariableCollection);
UClass* Z_Construct_UClass_UCameraVariableCollection_NoRegister()
{
	return UCameraVariableCollection::StaticClass();
}
struct Z_Construct_UClass_UCameraVariableCollection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * An asset that represents a collection of camera variables.\n */" },
		{ "IncludePath", "Core/CameraVariableCollection.h" },
		{ "ModuleRelativePath", "Public/Core/CameraVariableCollection.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "An asset that represents a collection of camera variables." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variables_MetaData[] = {
		{ "Comment", "/** The variables in this collection. */" },
		{ "ModuleRelativePath", "Public/Core/CameraVariableCollection.h" },
		{ "ToolTip", "The variables in this collection." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Variables_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Variables;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraVariableCollection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCameraVariableCollection_Statics::NewProp_Variables_Inner = { "Variables", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCameraVariableAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCameraVariableCollection_Statics::NewProp_Variables = { "Variables", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraVariableCollection, Variables), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variables_MetaData), NewProp_Variables_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCameraVariableCollection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraVariableCollection_Statics::NewProp_Variables_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraVariableCollection_Statics::NewProp_Variables,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraVariableCollection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCameraVariableCollection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraVariableCollection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCameraVariableCollection_Statics::ClassParams = {
	&UCameraVariableCollection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCameraVariableCollection_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCameraVariableCollection_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraVariableCollection_Statics::Class_MetaDataParams), Z_Construct_UClass_UCameraVariableCollection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCameraVariableCollection()
{
	if (!Z_Registration_Info_UClass_UCameraVariableCollection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCameraVariableCollection.OuterSingleton, Z_Construct_UClass_UCameraVariableCollection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCameraVariableCollection.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UCameraVariableCollection>()
{
	return UCameraVariableCollection::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraVariableCollection);
UCameraVariableCollection::~UCameraVariableCollection() {}
// End Class UCameraVariableCollection

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraVariableCollection_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCameraVariableCollection, UCameraVariableCollection::StaticClass, TEXT("UCameraVariableCollection"), &Z_Registration_Info_UClass_UCameraVariableCollection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCameraVariableCollection), 2964588104U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraVariableCollection_h_3990028315(TEXT("/Script/GameplayCameras"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraVariableCollection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraVariableCollection_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
