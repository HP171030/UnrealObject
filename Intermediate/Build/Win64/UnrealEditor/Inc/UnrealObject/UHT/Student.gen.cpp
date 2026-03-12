// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealObject/Student.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeStudent() {}

// ********** Begin Cross Module References ********************************************************
UNREALOBJECT_API UClass* Z_Construct_UClass_UPerson();
UNREALOBJECT_API UClass* Z_Construct_UClass_UStudent();
UNREALOBJECT_API UClass* Z_Construct_UClass_UStudent_NoRegister();
UPackage* Z_Construct_UPackage__Script_UnrealObject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UStudent *****************************************************************
void UStudent::StaticRegisterNativesUStudent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UStudent;
UClass* UStudent::GetPrivateStaticClass()
{
	using TClass = UStudent;
	if (!Z_Registration_Info_UClass_UStudent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Student"),
			Z_Registration_Info_UClass_UStudent.InnerSingleton,
			StaticRegisterNativesUStudent,
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
	return Z_Registration_Info_UClass_UStudent.InnerSingleton;
}
UClass* Z_Construct_UClass_UStudent_NoRegister()
{
	return UStudent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UStudent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Student.h" },
		{ "ModuleRelativePath", "Student.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStudent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UStudent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPerson,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStudent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStudent_Statics::ClassParams = {
	&UStudent::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStudent_Statics::Class_MetaDataParams), Z_Construct_UClass_UStudent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStudent()
{
	if (!Z_Registration_Info_UClass_UStudent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStudent.OuterSingleton, Z_Construct_UClass_UStudent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStudent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStudent);
UStudent::~UStudent() {}
// ********** End Class UStudent *******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_lhp_Documents_Unreal_Projects_UnrealObject_Source_UnrealObject_Student_h__Script_UnrealObject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStudent, UStudent::StaticClass, TEXT("UStudent"), &Z_Registration_Info_UClass_UStudent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStudent), 2630788737U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_lhp_Documents_Unreal_Projects_UnrealObject_Source_UnrealObject_Student_h__Script_UnrealObject_3005688827(TEXT("/Script/UnrealObject"),
	Z_CompiledInDeferFile_FID_Users_lhp_Documents_Unreal_Projects_UnrealObject_Source_UnrealObject_Student_h__Script_UnrealObject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_lhp_Documents_Unreal_Projects_UnrealObject_Source_UnrealObject_Student_h__Script_UnrealObject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
