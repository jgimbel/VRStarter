// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/FirstPersonCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirstPersonCharacter() {}
// Cross Module References
	VRSTARTER_API UClass* Z_Construct_UClass_AFirstPersonCharacter_NoRegister();
	VRSTARTER_API UClass* Z_Construct_UClass_AFirstPersonCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_VRStarter();
// End Cross Module References
	void AFirstPersonCharacter::StaticRegisterNativesAFirstPersonCharacter()
	{
	}
	UClass* Z_Construct_UClass_AFirstPersonCharacter_NoRegister()
	{
		return AFirstPersonCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_AFirstPersonCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ACharacter,
				(UObject* (*)())Z_Construct_UPackage__Script_VRStarter,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "FirstPersonCharacter.h" },
				{ "ModuleRelativePath", "Public/FirstPersonCharacter.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AFirstPersonCharacter>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AFirstPersonCharacter::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFirstPersonCharacter, 285239104);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFirstPersonCharacter(Z_Construct_UClass_AFirstPersonCharacter, &AFirstPersonCharacter::StaticClass, TEXT("/Script/VRStarter"), TEXT("AFirstPersonCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFirstPersonCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
