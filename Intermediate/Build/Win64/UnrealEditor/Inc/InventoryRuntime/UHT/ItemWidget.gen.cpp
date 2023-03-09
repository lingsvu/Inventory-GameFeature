// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryRuntime/Public/ItemWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemWidget() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonButtonBase();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonButtonBase_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonTextBlock_NoRegister();
	INVENTORYRUNTIME_API UClass* Z_Construct_UClass_UInventoryItem_NoRegister();
	INVENTORYRUNTIME_API UClass* Z_Construct_UClass_UItemWidget();
	INVENTORYRUNTIME_API UClass* Z_Construct_UClass_UItemWidget_NoRegister();
	INVENTORYRUNTIME_API UFunction* Z_Construct_UDelegateFunction_InventoryRuntime_OnItemWidgetClicked__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_InventoryRuntime();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_InventoryRuntime_OnItemWidgetClicked__DelegateSignature_Statics
	{
		struct _Script_InventoryRuntime_eventOnItemWidgetClicked_Parms
		{
			UInventoryItem* Item;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_InventoryRuntime_OnItemWidgetClicked__DelegateSignature_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_InventoryRuntime_eventOnItemWidgetClicked_Parms, Item), Z_Construct_UClass_UInventoryItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_InventoryRuntime_OnItemWidgetClicked__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InventoryRuntime_OnItemWidgetClicked__DelegateSignature_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_InventoryRuntime_OnItemWidgetClicked__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/ItemWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_InventoryRuntime_OnItemWidgetClicked__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_InventoryRuntime, nullptr, "OnItemWidgetClicked__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_InventoryRuntime_OnItemWidgetClicked__DelegateSignature_Statics::_Script_InventoryRuntime_eventOnItemWidgetClicked_Parms), Z_Construct_UDelegateFunction_InventoryRuntime_OnItemWidgetClicked__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventoryRuntime_OnItemWidgetClicked__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_InventoryRuntime_OnItemWidgetClicked__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InventoryRuntime_OnItemWidgetClicked__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_InventoryRuntime_OnItemWidgetClicked__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InventoryRuntime_OnItemWidgetClicked__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UItemWidget::execOnItemButtonClicked)
	{
		P_GET_OBJECT(UCommonButtonBase,Z_Param_Button);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnItemButtonClicked(Z_Param_Button);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UItemWidget::execRefreshVisual)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshVisual_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UItemWidget_RefreshVisual = FName(TEXT("RefreshVisual"));
	void UItemWidget::RefreshVisual()
	{
		ProcessEvent(FindFunctionChecked(NAME_UItemWidget_RefreshVisual),NULL);
	}
	void UItemWidget::StaticRegisterNativesUItemWidget()
	{
		UClass* Class = UItemWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnItemButtonClicked", &UItemWidget::execOnItemButtonClicked },
			{ "RefreshVisual", &UItemWidget::execRefreshVisual },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UItemWidget_OnItemButtonClicked_Statics
	{
		struct ItemWidget_eventOnItemButtonClicked_Parms
		{
			UCommonButtonBase* Button;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Button_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Button;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemWidget_OnItemButtonClicked_Statics::NewProp_Button_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemWidget_OnItemButtonClicked_Statics::NewProp_Button = { "Button", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ItemWidget_eventOnItemButtonClicked_Parms, Button), Z_Construct_UClass_UCommonButtonBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UItemWidget_OnItemButtonClicked_Statics::NewProp_Button_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemWidget_OnItemButtonClicked_Statics::NewProp_Button_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemWidget_OnItemButtonClicked_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemWidget_OnItemButtonClicked_Statics::NewProp_Button,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemWidget_OnItemButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ItemWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemWidget_OnItemButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemWidget, nullptr, "OnItemButtonClicked", nullptr, nullptr, sizeof(Z_Construct_UFunction_UItemWidget_OnItemButtonClicked_Statics::ItemWidget_eventOnItemButtonClicked_Parms), Z_Construct_UFunction_UItemWidget_OnItemButtonClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemWidget_OnItemButtonClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UItemWidget_OnItemButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemWidget_OnItemButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UItemWidget_OnItemButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemWidget_OnItemButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItemWidget_RefreshVisual_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemWidget_RefreshVisual_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ItemWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemWidget_RefreshVisual_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemWidget, nullptr, "RefreshVisual", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UItemWidget_RefreshVisual_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemWidget_RefreshVisual_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UItemWidget_RefreshVisual()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemWidget_RefreshVisual_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItemWidget);
	UClass* Z_Construct_UClass_UItemWidget_NoRegister()
	{
		return UItemWidget::StaticClass();
	}
	struct Z_Construct_UClass_UItemWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnItemWidgetClicked_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemWidgetClicked;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UItemWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonButtonBase,
		(UObject* (*)())Z_Construct_UPackage__Script_InventoryRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UItemWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UItemWidget_OnItemButtonClicked, "OnItemButtonClicked" }, // 2658862016
		{ &Z_Construct_UFunction_UItemWidget_RefreshVisual, "RefreshVisual" }, // 3269624343
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ItemWidget.h" },
		{ "ModuleRelativePath", "Public/ItemWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemWidget_Statics::NewProp_OnItemWidgetClicked_MetaData[] = {
		{ "ModuleRelativePath", "Public/ItemWidget.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UItemWidget_Statics::NewProp_OnItemWidgetClicked = { "OnItemWidgetClicked", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UItemWidget, OnItemWidgetClicked), Z_Construct_UDelegateFunction_InventoryRuntime_OnItemWidgetClicked__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UItemWidget_Statics::NewProp_OnItemWidgetClicked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItemWidget_Statics::NewProp_OnItemWidgetClicked_MetaData)) }; // 2111897506
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemWidget_Statics::NewProp_ItemName_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ItemWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ItemWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemWidget_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UItemWidget, ItemName), Z_Construct_UClass_UCommonTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UItemWidget_Statics::NewProp_ItemName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItemWidget_Statics::NewProp_ItemName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemWidget_Statics::NewProp_Item_MetaData[] = {
		{ "Category", "ItemWidget" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/ItemWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemWidget_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UItemWidget, Item), Z_Construct_UClass_UInventoryItem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UItemWidget_Statics::NewProp_Item_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItemWidget_Statics::NewProp_Item_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemWidget_Statics::NewProp_OnItemWidgetClicked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemWidget_Statics::NewProp_ItemName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemWidget_Statics::NewProp_Item,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UItemWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemWidget_Statics::ClassParams = {
		&UItemWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UItemWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UItemWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UItemWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UItemWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UItemWidget()
	{
		if (!Z_Registration_Info_UClass_UItemWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemWidget.OuterSingleton, Z_Construct_UClass_UItemWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UItemWidget.OuterSingleton;
	}
	template<> INVENTORYRUNTIME_API UClass* StaticClass<UItemWidget>()
	{
		return UItemWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UItemWidget);
	UItemWidget::~UItemWidget() {}
	struct Z_CompiledInDeferFile_FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_ItemWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_ItemWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UItemWidget, UItemWidget::StaticClass, TEXT("UItemWidget"), &Z_Registration_Info_UClass_UItemWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemWidget), 3515148718U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_ItemWidget_h_1516484929(TEXT("/Script/InventoryRuntime"),
		Z_CompiledInDeferFile_FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_ItemWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_ItemWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
