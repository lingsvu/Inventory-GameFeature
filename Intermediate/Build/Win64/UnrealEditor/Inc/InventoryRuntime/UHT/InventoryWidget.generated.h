// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InventoryWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInventoryItem;
#ifdef INVENTORYRUNTIME_InventoryWidget_generated_h
#error "InventoryWidget.generated.h already included, missing '#pragma once' in InventoryWidget.h"
#endif
#define INVENTORYRUNTIME_InventoryWidget_generated_h

#define FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryWidget_h_18_SPARSE_DATA
#define FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryWidget_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateInventory); \
	DECLARE_FUNCTION(execUpdateEquippedItems); \
	DECLARE_FUNCTION(execUnEquipClickedItem); \
	DECLARE_FUNCTION(execEquipClickedItem); \
	DECLARE_FUNCTION(execUpdateInventoryItemWidgets);


#define FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryWidget_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateInventory); \
	DECLARE_FUNCTION(execUpdateEquippedItems); \
	DECLARE_FUNCTION(execUnEquipClickedItem); \
	DECLARE_FUNCTION(execEquipClickedItem); \
	DECLARE_FUNCTION(execUpdateInventoryItemWidgets);


#define FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryWidget_h_18_ACCESSORS
#define FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryWidget_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventoryWidget(); \
	friend struct Z_Construct_UClass_UInventoryWidget_Statics; \
public: \
	DECLARE_CLASS(UInventoryWidget, UCommonActivatableWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InventoryRuntime"), NO_API) \
	DECLARE_SERIALIZER(UInventoryWidget)


#define FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryWidget_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUInventoryWidget(); \
	friend struct Z_Construct_UClass_UInventoryWidget_Statics; \
public: \
	DECLARE_CLASS(UInventoryWidget, UCommonActivatableWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InventoryRuntime"), NO_API) \
	DECLARE_SERIALIZER(UInventoryWidget)


#define FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryWidget_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventoryWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventoryWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventoryWidget(UInventoryWidget&&); \
	NO_API UInventoryWidget(const UInventoryWidget&); \
public: \
	NO_API virtual ~UInventoryWidget();


#define FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryWidget_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventoryWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventoryWidget(UInventoryWidget&&); \
	NO_API UInventoryWidget(const UInventoryWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventoryWidget) \
	NO_API virtual ~UInventoryWidget();


#define FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryWidget_h_15_PROLOG
#define FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryWidget_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryWidget_h_18_SPARSE_DATA \
	FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryWidget_h_18_RPC_WRAPPERS \
	FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryWidget_h_18_ACCESSORS \
	FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryWidget_h_18_INCLASS \
	FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryWidget_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryWidget_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryWidget_h_18_SPARSE_DATA \
	FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryWidget_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryWidget_h_18_ACCESSORS \
	FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryWidget_h_18_INCLASS_NO_PURE_DECLS \
	FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryWidget_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORYRUNTIME_API UClass* StaticClass<class UInventoryWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
