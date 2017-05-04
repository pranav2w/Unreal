// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Boilerplate C++ definitions for a single module.
	This is automatically generated by UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "MenuDesign.h"
#include "MenuDesign.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1MenuDesign() {}
	void AMenuDesignGameModeBase::StaticRegisterNativesAMenuDesignGameModeBase()
	{
	}
	IMPLEMENT_CLASS(AMenuDesignGameModeBase, 2849864733);
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_AGameModeBase();

	MENUDESIGN_API class UClass* Z_Construct_UClass_AMenuDesignGameModeBase_NoRegister();
	MENUDESIGN_API class UClass* Z_Construct_UClass_AMenuDesignGameModeBase();
	MENUDESIGN_API class UPackage* Z_Construct_UPackage__Script_MenuDesign();
	UClass* Z_Construct_UClass_AMenuDesignGameModeBase_NoRegister()
	{
		return AMenuDesignGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_AMenuDesignGameModeBase()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_MenuDesign();
			OuterClass = AMenuDesignGameModeBase::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900288;


				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MenuDesignGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("MenuDesignGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMenuDesignGameModeBase(Z_Construct_UClass_AMenuDesignGameModeBase, &AMenuDesignGameModeBase::StaticClass, TEXT("AMenuDesignGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMenuDesignGameModeBase);
	UPackage* Z_Construct_UPackage__Script_MenuDesign()
	{
		static UPackage* ReturnPackage = NULL;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), NULL, FName(TEXT("/Script/MenuDesign")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x39C0329B;
			Guid.B = 0xBD4843C1;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif

PRAGMA_ENABLE_DEPRECATION_WARNINGS
