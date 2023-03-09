// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryRuntime/Public/InventoryWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryWidget() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidget();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	INVENTORYRUNTIME_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();
	INVENTORYRUNTIME_API UClass* Z_Construct_UClass_UInventoryItem_NoRegister();
	INVENTORYRUNTIME_API UClass* Z_Construct_UClass_UInventoryWidget();
	INVENTORYRUNTIME_API UClass* Z_Construct_UClass_UInventoryWidget_NoRegister();
	INVENTORYRUNTIME_API UClass* Z_Construct_UClass_UItemWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUniformGridPanel_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InventoryRuntime();
// End Cross Module References
	DEFINE_FUNCTION(UInventoryWidget::execUpdateInventory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateInventory();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryWidget::execUpdateEquippedItems)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateEquippedItems();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryWidget::execUnEquipClickedItem)
	{
		P_GET_OBJECT(UInventoryItem,Z_Param_Item);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnEquipClickedItem(Z_Param_Item);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryWidget::execEquipClickedItem)
	{
		P_GET_OBJECT(UInventoryItem,Z_Param_Item);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EquipClickedItem(Z_Param_Item);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryWidget::execUpdateInventoryItemWidgets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateInventoryItemWidgets();
		P_NATIVE_END;
	}
	void UInventoryWidget::StaticRegisterNativesUInventoryWidget()
	{
		UClass* Class = UInventoryWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EquipClickedItem", &UInventoryWidget::execEquipClickedItem },
			{ "UnEquipClickedItem", &UInventoryWidget::execUnEquipClickedItem },
			{ "UpdateEquippedItems", &UInventoryWidget::execUpdateEquippedItems },
			{ "UpdateInventory", &UInventoryWidget::execUpdateInventory },
			{ "UpdateInventoryItemWidgets", &UInventoryWidget::execUpdateInventoryItemWidgets },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInventoryWidget_EquipClickedItem_Statics
	{
		struct InventoryWidget_eventEquipClickedItem_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryWidget_EquipClickedItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InventoryWidget_eventEquipClickedItem_Parms, Item), Z_Construct_UClass_UInventoryItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryWidget_EquipClickedItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryWidget_EquipClickedItem_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryWidget_EquipClickedItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InventoryWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryWidget_EquipClickedItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryWidget, nullptr, "EquipClickedItem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInventoryWidget_EquipClickedItem_Statics::InventoryWidget_eventEquipClickedItem_Parms), Z_Construct_UFunction_UInventoryWidget_EquipClickedItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryWidget_EquipClickedItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryWidget_EquipClickedItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryWidget_EquipClickedItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryWidget_EquipClickedItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryWidget_EquipClickedItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryWidget_UnEquipClickedItem_Statics
	{
		struct InventoryWidget_eventUnEquipClickedItem_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryWidget_UnEquipClickedItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InventoryWidget_eventUnEquipClickedItem_Parms, Item), Z_Construct_UClass_UInventoryItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryWidget_UnEquipClickedItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryWidget_UnEquipClickedItem_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryWidget_UnEquipClickedItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InventoryWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryWidget_UnEquipClickedItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryWidget, nullptr, "UnEquipClickedItem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInventoryWidget_UnEquipClickedItem_Statics::InventoryWidget_eventUnEquipClickedItem_Parms), Z_Construct_UFunction_UInventoryWidget_UnEquipClickedItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryWidget_UnEquipClickedItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryWidget_UnEquipClickedItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryWidget_UnEquipClickedItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryWidget_UnEquipClickedItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryWidget_UnEquipClickedItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryWidget_UpdateEquippedItems_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryWidget_UpdateEquippedItems_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InventoryWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryWidget_UpdateEquippedItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryWidget, nullptr, "UpdateEquippedItems", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryWidget_UpdateEquippedItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryWidget_UpdateEquippedItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryWidget_UpdateEquippedItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryWidget_UpdateEquippedItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryWidget_UpdateInventory_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryWidget_UpdateInventory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InventoryWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryWidget_UpdateInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryWidget, nullptr, "UpdateInventory", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryWidget_UpdateInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryWidget_UpdateInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryWidget_UpdateInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryWidget_UpdateInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryWidget_UpdateInventoryItemWidgets_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryWidget_UpdateInventoryItemWidgets_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InventoryWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryWidget_UpdateInventoryItemWidgets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryWidget, nullptr, "UpdateInventoryItemWidgets", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryWidget_UpdateInventoryItemWidgets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryWidget_UpdateInventoryItemWidgets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryWidget_UpdateInventoryItemWidgets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryWidget_UpdateInventoryItemWidgets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryWidget);
	UClass* Z_Construct_UClass_UInventoryWidget_NoRegister()
	{
		return UInventoryWidget::StaticClass();
	}
	struct Z_Construct_UClass_UInventoryWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventoryComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventoryGrid_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryGrid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxGridSizeX_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxGridSizeX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ItemWidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponSlot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponSlot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccessorySlot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AccessorySlot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TorsoSlot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TorsoSlot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeadSlot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HeadSlot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LegSlot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LegSlot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FeetSlot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FeetSlot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandSlot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HandSlot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInventoryWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonActivatableWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_InventoryRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInventoryWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventoryWidget_EquipClickedItem, "EquipClickedItem" }, // 4078800050
		{ &Z_Construct_UFunction_UInventoryWidget_UnEquipClickedItem, "UnEquipClickedItem" }, // 501893160
		{ &Z_Construct_UFunction_UInventoryWidget_UpdateEquippedItems, "UpdateEquippedItems" }, // 3318686489
		{ &Z_Construct_UFunction_UInventoryWidget_UpdateInventory, "UpdateInventory" }, // 851849451
		{ &Z_Construct_UFunction_UInventoryWidget_UpdateInventoryItemWidgets, "UpdateInventoryItemWidgets" }, // 50835326
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "InventoryWidget.h" },
		{ "ModuleRelativePath", "Public/InventoryWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryWidget_Statics::NewProp_InventoryComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InventoryWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryWidget_Statics::NewProp_InventoryComponent = { "InventoryComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInventoryWidget, InventoryComponent), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryWidget_Statics::NewProp_InventoryComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryWidget_Statics::NewProp_InventoryComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryWidget_Statics::NewProp_InventoryGrid_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "InventoryWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InventoryWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryWidget_Statics::NewProp_InventoryGrid = { "InventoryGrid", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInventoryWidget, InventoryGrid), Z_Construct_UClass_UUniformGridPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryWidget_Statics::NewProp_InventoryGrid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryWidget_Statics::NewProp_InventoryGrid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryWidget_Statics::NewProp_MaxGridSizeX_MetaData[] = {
		{ "Category", "InventoryWidget" },
		{ "ModuleRelativePath", "Public/InventoryWidget.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UInventoryWidget_Statics::NewProp_MaxGridSizeX = { "MaxGridSizeX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInventoryWidget, MaxGridSizeX), METADATA_PARAMS(Z_Construct_UClass_UInventoryWidget_Statics::NewProp_MaxGridSizeX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryWidget_Statics::NewProp_MaxGridSizeX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryWidget_Statics::NewProp_ItemWidgetClass_MetaData[] = {
		{ "Category", "InventoryWidget" },
		{ "ModuleRelativePath", "Public/InventoryWidget.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInventoryWidget_Statics::NewProp_ItemWidgetClass = { "ItemWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInventoryWidget, ItemWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UItemWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryWidget_Statics::NewProp_ItemWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryWidget_Statics::NewProp_ItemWidgetClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryWidget_Statics::NewProp_WeaponSlot_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "InventoryWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InventoryWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryWidget_Statics::NewProp_WeaponSlot = { "WeaponSlot", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInventoryWidget, WeaponSlot), Z_Construct_UClass_UItemWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryWidget_Statics::NewProp_WeaponSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryWidget_Statics::NewProp_WeaponSlot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryWidget_Statics::NewProp_AccessorySlot_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "InventoryWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InventoryWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryWidget_Statics::NewProp_AccessorySlot = { "AccessorySlot", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInventoryWidget, AccessorySlot), Z_Construct_UClass_UItemWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryWidget_Statics::NewProp_AccessorySlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryWidget_Statics::NewProp_AccessorySlot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryWidget_Statics::NewProp_TorsoSlot_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "InventoryWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InventoryWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryWidget_Statics::NewProp_TorsoSlot = { "TorsoSlot", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInventoryWidget, TorsoSlot), Z_Construct_UClass_UItemWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryWidget_Statics::NewProp_TorsoSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryWidget_Statics::NewProp_TorsoSlot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryWidget_Statics::NewProp_HeadSlot_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "InventoryWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InventoryWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryWidget_Statics::NewProp_HeadSlot = { "HeadSlot", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInventoryWidget, HeadSlot), Z_Construct_UClass_UItemWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryWidget_Statics::NewProp_HeadSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryWidget_Statics::NewProp_HeadSlot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryWidget_Statics::NewProp_LegSlot_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "InventoryWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InventoryWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryWidget_Statics::NewProp_LegSlot = { "LegSlot", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInventoryWidget, LegSlot), Z_Construct_UClass_UItemWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryWidget_Statics::NewProp_LegSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryWidget_Statics::NewProp_LegSlot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryWidget_Statics::NewProp_FeetSlot_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "InventoryWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InventoryWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryWidget_Statics::NewProp_FeetSlot = { "FeetSlot", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInventoryWidget, FeetSlot), Z_Construct_UClass_UItemWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryWidget_Statics::NewProp_FeetSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryWidget_Statics::NewProp_FeetSlot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryWidget_Statics::NewProp_HandSlot_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "InventoryWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InventoryWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryWidget_Statics::NewProp_HandSlot = { "HandSlot", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInventoryWidget, HandSlot), Z_Construct_UClass_UItemWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryWidget_Statics::NewProp_HandSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryWidget_Statics::NewProp_HandSlot_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryWidget_Statics::NewProp_InventoryComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryWidget_Statics::NewProp_InventoryGrid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryWidget_Statics::NewProp_MaxGridSizeX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryWidget_Statics::NewProp_ItemWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryWidget_Statics::NewProp_WeaponSlot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryWidget_Statics::NewProp_AccessorySlot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryWidget_Statics::NewProp_TorsoSlot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryWidget_Statics::NewProp_HeadSlot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryWidget_Statics::NewProp_LegSlot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryWidget_Statics::NewProp_FeetSlot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryWidget_Statics::NewProp_HandSlot,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInventoryWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryWidget_Statics::ClassParams = {
		&UInventoryWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInventoryWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInventoryWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInventoryWidget()
	{
		if (!Z_Registration_Info_UClass_UInventoryWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryWidget.OuterSingleton, Z_Construct_UClass_UInventoryWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInventoryWidget.OuterSingleton;
	}
	template<> INVENTORYRUNTIME_API UClass* StaticClass<UInventoryWidget>()
	{
		return UInventoryWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryWidget);
	UInventoryWidget::~UInventoryWidget() {}
	struct Z_CompiledInDeferFile_FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryWidget, UInventoryWidget::StaticClass, TEXT("UInventoryWidget"), &Z_Registration_Info_UClass_UInventoryWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryWidget), 687471636U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryWidget_h_3895128162(TEXT("/Script/InventoryRuntime"),
		Z_CompiledInDeferFile_FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
