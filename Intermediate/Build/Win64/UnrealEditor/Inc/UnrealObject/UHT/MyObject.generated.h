// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyObject.h"

#ifdef UNREALOBJECT_MyObject_generated_h
#error "MyObject.generated.h already included, missing '#pragma once' in MyObject.h"
#endif
#define UNREALOBJECT_MyObject_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMyObject ****************************************************************
UNREALOBJECT_API UClass* Z_Construct_UClass_UMyObject_NoRegister();

#define FID_Users_lhp_Documents_Unreal_Projects_UnrealObject_Source_UnrealObject_MyObject_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyObject(); \
	friend struct Z_Construct_UClass_UMyObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALOBJECT_API UClass* Z_Construct_UClass_UMyObject_NoRegister(); \
public: \
	DECLARE_CLASS2(UMyObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealObject"), Z_Construct_UClass_UMyObject_NoRegister) \
	DECLARE_SERIALIZER(UMyObject)


#define FID_Users_lhp_Documents_Unreal_Projects_UnrealObject_Source_UnrealObject_MyObject_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMyObject(UMyObject&&) = delete; \
	UMyObject(const UMyObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyObject) \
	NO_API virtual ~UMyObject();


#define FID_Users_lhp_Documents_Unreal_Projects_UnrealObject_Source_UnrealObject_MyObject_h_12_PROLOG
#define FID_Users_lhp_Documents_Unreal_Projects_UnrealObject_Source_UnrealObject_MyObject_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_lhp_Documents_Unreal_Projects_UnrealObject_Source_UnrealObject_MyObject_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_lhp_Documents_Unreal_Projects_UnrealObject_Source_UnrealObject_MyObject_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMyObject;

// ********** End Class UMyObject ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_lhp_Documents_Unreal_Projects_UnrealObject_Source_UnrealObject_MyObject_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
