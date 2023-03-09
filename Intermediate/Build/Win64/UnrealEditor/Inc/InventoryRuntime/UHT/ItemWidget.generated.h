// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ItemWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCommonButtonBase;
class UInventoryItem;
#ifdef INVENTORYRUNTIME_ItemWidget_generated_h
#error "ItemWidget.generated.h already included, missing '#pragma once' in ItemWidget.h"
#endif
#define INVENTORYRUNTIME_ItemWidget_generated_h

#define FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_ItemWidget_h_14_DELEGATE \
struct _Script_InventoryRuntime_eventOnItemWidgetClicked_Parms \
{ \
	UInventoryItem* Item; \
}; \
static inline void FOnItemWidgetClicked_DelegateWrapper(const FMulticastScriptDelegate& OnItemWidgetClicked, UInventoryItem* Item) \
{ \
	_Script_InventoryRuntime_eventOnItemWidgetClicked_Parms Parms; \
	Parms.Item=Item; \
	OnItemWidgetClicked.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_ItemWidget_h_20_SPARSE_DATA
#define FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_ItemWidget_h_20_RPC_WRAPPERS \
	virtual void RefreshVisual_Implementation(); \
 \
	DECLARE_FUNCTION(execOnItemButtonClicked); \
	DECLARE_FUNCTION(execRefreshVisual);


#define FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_ItemWidget_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void RefreshVisual_Implementation(); \
 \
	DECLARE_FUNCTION(execOnItemButtonClicked); \
	DECLARE_FUNCTION(execRefreshVisual);


#define FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_ItemWidget_h_20_ACCESSORS
#define FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_ItemWidget_h_20_CALLBACK_WRAPPERS
#define FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_ItemWidget_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUItemWidget(); \
	friend struct Z_Construct_UClass_UItemWidget_Statics; \
public: \
	DECLARE_CLASS(UItemWidget, UCommonButtonBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InventoryRuntime"), NO_API) \
	DECLARE_SERIALIZER(UItemWidget)


#define FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_ItemWidget_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUItemWidget(); \
	friend struct Z_Construct_UClass_UItemWidget_Statics; \
public: \
	DECLARE_CLASS(UItemWidget, UCommonButtonBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InventoryRuntime"), NO_API) \
	DECLARE_SERIALIZER(UItemWidget)


#define FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_ItemWidget_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UItemWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UItemWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItemWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UItemWidget(UItemWidget&&); \
	NO_API UItemWidget(const UItemWidget&); \
public: \
	NO_API virtual ~UItemWidget();


#define FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_ItemWidget_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UItemWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UItemWidget(UItemWidget&&); \
	NO_API UItemWidget(const UItemWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItemWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UItemWidget) \
	NO_API virtual ~UItemWidget();


#define FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_ItemWidget_h_16_PROLOG
#define FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_ItemWidget_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_ItemWidget_h_20_SPARSE_DATA \
	FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_ItemWidget_h_20_RPC_WRAPPERS \
	FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_ItemWidget_h_20_ACCESSORS \
	FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_ItemWidget_h_20_CALLBACK_WRAPPERS \
	FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_ItemWidget_h_20_INCLASS \
	FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_ItemWidget_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_ItemWidget_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_ItemWidget_h_20_SPARSE_DATA \
	FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_ItemWidget_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_ItemWidget_h_20_ACCESSORS \
	FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_ItemWidget_h_20_CALLBACK_WRAPPERS \
	FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_ItemWidget_h_20_INCLASS_NO_PURE_DECLS \
	FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_ItemWidget_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORYRUNTIME_API UClass* StaticClass<class UItemWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_ItemWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
