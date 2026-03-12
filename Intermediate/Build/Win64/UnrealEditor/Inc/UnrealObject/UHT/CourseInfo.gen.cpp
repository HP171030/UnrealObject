// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealObject/CourseInfo.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCourseInfo() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UNREALOBJECT_API UClass* Z_Construct_UClass_UCourseInfo();
UNREALOBJECT_API UClass* Z_Construct_UClass_UCourseInfo_NoRegister();
UPackage* Z_Construct_UPackage__Script_UnrealObject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCourseInfo **************************************************************
void UCourseInfo::StaticRegisterNativesUCourseInfo()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCourseInfo;
UClass* UCourseInfo::GetPrivateStaticClass()
{
	using TClass = UCourseInfo;
	if (!Z_Registration_Info_UClass_UCourseInfo.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CourseInfo"),
			Z_Registration_Info_UClass_UCourseInfo.InnerSingleton,
			StaticRegisterNativesUCourseInfo,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UCourseInfo.InnerSingleton;
}
UClass* Z_Construct_UClass_UCourseInfo_NoRegister()
{
	return UCourseInfo::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCourseInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "CourseInfo.h" },
		{ "ModuleRelativePath", "CourseInfo.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCourseInfo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCourseInfo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCourseInfo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCourseInfo_Statics::ClassParams = {
	&UCourseInfo::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCourseInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_UCourseInfo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCourseInfo()
{
	if (!Z_Registration_Info_UClass_UCourseInfo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCourseInfo.OuterSingleton, Z_Construct_UClass_UCourseInfo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCourseInfo.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCourseInfo);
UCourseInfo::~UCourseInfo() {}
// ********** End Class UCourseInfo ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_lhp_Documents_Unreal_Projects_UnrealObject_Source_UnrealObject_CourseInfo_h__Script_UnrealObject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCourseInfo, UCourseInfo::StaticClass, TEXT("UCourseInfo"), &Z_Registration_Info_UClass_UCourseInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCourseInfo), 26904424U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_lhp_Documents_Unreal_Projects_UnrealObject_Source_UnrealObject_CourseInfo_h__Script_UnrealObject_2590510451(TEXT("/Script/UnrealObject"),
	Z_CompiledInDeferFile_FID_Users_lhp_Documents_Unreal_Projects_UnrealObject_Source_UnrealObject_CourseInfo_h__Script_UnrealObject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_lhp_Documents_Unreal_Projects_UnrealObject_Source_UnrealObject_CourseInfo_h__Script_UnrealObject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
