// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InventoryComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UInventoryComponent;
class UInventoryItem;
class UPDA_Item;
enum class EEquipmentSlot : uint8;
struct FItemProperty;
struct FSerializedInventoryItem;
#ifdef INVENTORYRUNTIME_InventoryComponent_generated_h
#error "InventoryComponent.generated.h already included, missing '#pragma once' in InventoryComponent.h"
#endif
#define INVENTORYRUNTIME_InventoryComponent_generated_h

#define FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryComponent_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemProperty_Statics; \
	INVENTORYRUNTIME_API static class UScriptStruct* StaticStruct();


template<> INVENTORYRUNTIME_API UScriptStruct* StaticStruct<struct FItemProperty>();

#define FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryComponent_h_33_SPARSE_DATA
#define FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryComponent_h_33_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDestroy); \
	DECLARE_FUNCTION(execGetOwningActor);


#define FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryComponent_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDestroy); \
	DECLARE_FUNCTION(execGetOwningActor);


#define FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryComponent_h_33_ACCESSORS
#define FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryComponent_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUReplicatedObject(); \
	friend struct Z_Construct_UClass_UReplicatedObject_Statics; \
public: \
	DECLARE_CLASS(UReplicatedObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InventoryRuntime"), NO_API) \
	DECLARE_SERIALIZER(UReplicatedObject)


#define FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryComponent_h_33_INCLASS \
private: \
	static void StaticRegisterNativesUReplicatedObject(); \
	friend struct Z_Construct_UClass_UReplicatedObject_Statics; \
public: \
	DECLARE_CLASS(UReplicatedObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InventoryRuntime"), NO_API) \
	DECLARE_SERIALIZER(UReplicatedObject)


#define FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryComponent_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReplicatedObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReplicatedObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReplicatedObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReplicatedObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UReplicatedObject(UReplicatedObject&&); \
	NO_API UReplicatedObject(const UReplicatedObject&); \
public: \
	NO_API virtual ~UReplicatedObject();


#define FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryComponent_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReplicatedObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UReplicatedObject(UReplicatedObject&&); \
	NO_API UReplicatedObject(const UReplicatedObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReplicatedObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReplicatedObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReplicatedObject) \
	NO_API virtual ~UReplicatedObject();


#define FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryComponent_h_30_PROLOG
#define FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryComponent_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryComponent_h_33_SPARSE_DATA \
	FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryComponent_h_33_RPC_WRAPPERS \
	FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryComponent_h_33_ACCESSORS \
	FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryComponent_h_33_INCLASS \
	FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryComponent_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryComponent_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryComponent_h_33_SPARSE_DATA \
	FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryComponent_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryComponent_h_33_ACCESSORS \
	FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryComponent_h_33_INCLASS_NO_PURE_DECLS \
	FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryComponent_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORYRUNTIME_API UClass* StaticClass<class UReplicatedObject>();

#define FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryComponent_h_119_SPARSE_DATA
#define FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryComponent_h_119_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetInventoryItem);


#define FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryComponent_h_119_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetInventoryItem);


#define FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryComponent_h_119_ACCESSORS
#define FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryComponent_h_119_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventoryItem(); \
	friend struct Z_Construct_UClass_UInventoryItem_Statics; \
public: \
	DECLARE_CLASS(UInventoryItem, UReplicatedObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InventoryRuntime"), NO_API) \
	DECLARE_SERIALIZER(UInventoryItem) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Id=NETFIELD_REP_START, \
		ItemData, \
		Quantity, \
		Attributes, \
		ComponentOwnerPrivate, \
		NETFIELD_REP_END=ComponentOwnerPrivate	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UInventoryItem) \
public:


#define FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryComponent_h_119_INCLASS \
private: \
	static void StaticRegisterNativesUInventoryItem(); \
	friend struct Z_Construct_UClass_UInventoryItem_Statics; \
public: \
	DECLARE_CLASS(UInventoryItem, UReplicatedObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InventoryRuntime"), NO_API) \
	DECLARE_SERIALIZER(UInventoryItem) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Id=NETFIELD_REP_START, \
		ItemData, \
		Quantity, \
		Attributes, \
		ComponentOwnerPrivate, \
		NETFIELD_REP_END=ComponentOwnerPrivate	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UInventoryItem) \
public:


#define FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryComponent_h_119_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventoryItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventoryItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventoryItem(UInventoryItem&&); \
	NO_API UInventoryItem(const UInventoryItem&); \
public: \
	NO_API virtual ~UInventoryItem();


#define FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryComponent_h_119_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventoryItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventoryItem(UInventoryItem&&); \
	NO_API UInventoryItem(const UInventoryItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryItem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventoryItem) \
	NO_API virtual ~UInventoryItem();


#define FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryComponent_h_116_PROLOG
#define FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryComponent_h_119_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryComponent_h_119_SPARSE_DATA \
	FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryComponent_h_119_RPC_WRAPPERS \
	FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryComponent_h_119_ACCESSORS \
	FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryComponent_h_119_INCLASS \
	FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryComponent_h_119_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryComponent_h_119_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryComponent_h_119_SPARSE_DATA \
	FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryComponent_h_119_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryComponent_h_119_ACCESSORS \
	FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryComponent_h_119_INCLASS_NO_PURE_DECLS \
	FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryComponent_h_119_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORYRUNTIME_API UClass* StaticClass<class UInventoryItem>();

#define FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryComponent_h_172_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSerializedInventoryItem_Statics; \
	INVENTORYRUNTIME_API static class UScriptStruct* StaticStruct();


template<> INVENTORYRUNTIME_API UScriptStruct* StaticStruct<struct FSerializedInventoryItem>();

#define FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryComponent_h_188_DELEGATE \
static inline void FOnInventoryUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnInventoryUpdated) \
{ \
	OnInventoryUpdated.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryComponent_h_189_DELEGATE \
struct InventoryComponent_eventErrorMessage_Parms \
{ \
	FString Message; \
}; \
static inline void FErrorMessage_DelegateWrapper(const FMulticastScriptDelegate& ErrorMessage, const FString& Message) \
{ \
	InventoryComponent_eventErrorMessage_Parms Parms; \
	Parms.Message=Message; \
	ErrorMessage.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryComponent_h_186_SPARSE_DATA
#define FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryComponent_h_186_RPC_WRAPPERS \
	virtual void ServerUseConsumable_Implementation(UInventoryItem* Item); \
	virtual void UIBroadcastInventoryUpdate_Implementation(); \
	virtual bool ServerEquipItemToSlot_Validate(EEquipmentSlot const& , const UInventoryItem* ); \
	virtual void ServerEquipItemToSlot_Implementation(EEquipmentSlot const& Slot, const UInventoryItem* Item); \
	virtual void ServerRemoveItem_Implementation(UInventoryItem* Item); \
 \
	DECLARE_FUNCTION(execServerUseConsumable); \
	DECLARE_FUNCTION(execUIBroadcastInventoryUpdate); \
	DECLARE_FUNCTION(execOnRep_Inventory); \
	DECLARE_FUNCTION(execOnRep_EquippedHands); \
	DECLARE_FUNCTION(execOnRep_EquippedFeet); \
	DECLARE_FUNCTION(execOnRep_EquippedLegs); \
	DECLARE_FUNCTION(execOnrep_EquippedTorso); \
	DECLARE_FUNCTION(execOnRep_EquippedHead); \
	DECLARE_FUNCTION(execOnRep_EquippedAccessory); \
	DECLARE_FUNCTION(execOnRep_EquippedWeapon); \
	DECLARE_FUNCTION(execUnequipItem); \
	DECLARE_FUNCTION(execLoadSaveGameData); \
	DECLARE_FUNCTION(execGetSerializedInventory); \
	DECLARE_FUNCTION(execAddNewItemToInventory); \
	DECLARE_FUNCTION(execRemoveOtherMeshes); \
	DECLARE_FUNCTION(execServerEquipItemToSlot); \
	DECLARE_FUNCTION(execUseItem); \
	DECLARE_FUNCTION(execServerRemoveItem); \
	DECLARE_FUNCTION(execSetEquipmentInslot); \
	DECLARE_FUNCTION(execGetEquipmentInslot);


#define FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryComponent_h_186_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerUseConsumable_Implementation(UInventoryItem* Item); \
	virtual void UIBroadcastInventoryUpdate_Implementation(); \
	virtual bool ServerEquipItemToSlot_Validate(EEquipmentSlot const& , const UInventoryItem* ); \
	virtual void ServerEquipItemToSlot_Implementation(EEquipmentSlot const& Slot, const UInventoryItem* Item); \
	virtual void ServerRemoveItem_Implementation(UInventoryItem* Item); \
 \
	DECLARE_FUNCTION(execServerUseConsumable); \
	DECLARE_FUNCTION(execUIBroadcastInventoryUpdate); \
	DECLARE_FUNCTION(execOnRep_Inventory); \
	DECLARE_FUNCTION(execOnRep_EquippedHands); \
	DECLARE_FUNCTION(execOnRep_EquippedFeet); \
	DECLARE_FUNCTION(execOnRep_EquippedLegs); \
	DECLARE_FUNCTION(execOnrep_EquippedTorso); \
	DECLARE_FUNCTION(execOnRep_EquippedHead); \
	DECLARE_FUNCTION(execOnRep_EquippedAccessory); \
	DECLARE_FUNCTION(execOnRep_EquippedWeapon); \
	DECLARE_FUNCTION(execUnequipItem); \
	DECLARE_FUNCTION(execLoadSaveGameData); \
	DECLARE_FUNCTION(execGetSerializedInventory); \
	DECLARE_FUNCTION(execAddNewItemToInventory); \
	DECLARE_FUNCTION(execRemoveOtherMeshes); \
	DECLARE_FUNCTION(execServerEquipItemToSlot); \
	DECLARE_FUNCTION(execUseItem); \
	DECLARE_FUNCTION(execServerRemoveItem); \
	DECLARE_FUNCTION(execSetEquipmentInslot); \
	DECLARE_FUNCTION(execGetEquipmentInslot);


#define FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryComponent_h_186_ACCESSORS
#define FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryComponent_h_186_CALLBACK_WRAPPERS
#define FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryComponent_h_186_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventoryComponent(); \
	friend struct Z_Construct_UClass_UInventoryComponent_Statics; \
public: \
	DECLARE_CLASS(UInventoryComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InventoryRuntime"), NO_API) \
	DECLARE_SERIALIZER(UInventoryComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Inventory=NETFIELD_REP_START, \
		EquippedWeapon, \
		EquippedAccessory, \
		EquippedHead, \
		EquippedTorso, \
		EquippedLegs, \
		EquippedFeet, \
		EquippedHands, \
		NETFIELD_REP_END=EquippedHands	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryComponent_h_186_INCLASS \
private: \
	static void StaticRegisterNativesUInventoryComponent(); \
	friend struct Z_Construct_UClass_UInventoryComponent_Statics; \
public: \
	DECLARE_CLASS(UInventoryComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InventoryRuntime"), NO_API) \
	DECLARE_SERIALIZER(UInventoryComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Inventory=NETFIELD_REP_START, \
		EquippedWeapon, \
		EquippedAccessory, \
		EquippedHead, \
		EquippedTorso, \
		EquippedLegs, \
		EquippedFeet, \
		EquippedHands, \
		NETFIELD_REP_END=EquippedHands	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryComponent_h_186_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventoryComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventoryComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventoryComponent(UInventoryComponent&&); \
	NO_API UInventoryComponent(const UInventoryComponent&); \
public: \
	NO_API virtual ~UInventoryComponent();


#define FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryComponent_h_186_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventoryComponent(UInventoryComponent&&); \
	NO_API UInventoryComponent(const UInventoryComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInventoryComponent) \
	NO_API virtual ~UInventoryComponent();


#define FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryComponent_h_183_PROLOG
#define FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryComponent_h_186_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryComponent_h_186_SPARSE_DATA \
	FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryComponent_h_186_RPC_WRAPPERS \
	FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryComponent_h_186_ACCESSORS \
	FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryComponent_h_186_CALLBACK_WRAPPERS \
	FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryComponent_h_186_INCLASS \
	FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryComponent_h_186_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryComponent_h_186_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryComponent_h_186_SPARSE_DATA \
	FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryComponent_h_186_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryComponent_h_186_ACCESSORS \
	FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryComponent_h_186_CALLBACK_WRAPPERS \
	FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryComponent_h_186_INCLASS_NO_PURE_DECLS \
	FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryComponent_h_186_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORYRUNTIME_API UClass* StaticClass<class UInventoryComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
