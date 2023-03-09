// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryRuntime_init() {}
	INVENTORYRUNTIME_API UFunction* Z_Construct_UDelegateFunction_AItemEffectBase_OnEffectUsed__DelegateSignature();
	INVENTORYRUNTIME_API UFunction* Z_Construct_UDelegateFunction_InventoryRuntime_OnItemWidgetClicked__DelegateSignature();
	INVENTORYRUNTIME_API UFunction* Z_Construct_UDelegateFunction_UInventoryComponent_ErrorMessage__DelegateSignature();
	INVENTORYRUNTIME_API UFunction* Z_Construct_UDelegateFunction_UInventoryComponent_OnInventoryUpdated__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_InventoryRuntime;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_InventoryRuntime()
	{
		if (!Z_Registration_Info_UPackage__Script_InventoryRuntime.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_AItemEffectBase_OnEffectUsed__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_InventoryRuntime_OnItemWidgetClicked__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UInventoryComponent_ErrorMessage__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UInventoryComponent_OnInventoryUpdated__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/InventoryRuntime",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x308E79C2,
				0x96A5A65E,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_InventoryRuntime.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_InventoryRuntime.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_InventoryRuntime(Z_Construct_UPackage__Script_InventoryRuntime, TEXT("/Script/InventoryRuntime"), Z_Registration_Info_UPackage__Script_InventoryRuntime, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x308E79C2, 0x96A5A65E));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
