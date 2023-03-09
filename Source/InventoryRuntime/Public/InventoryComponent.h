// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PDA_Item.h"
#include "Components/ActorComponent.h"
#include "Engine/ActorChannel.h"
#include "Net/UnrealNetwork.h"
#include "GameplayTagContainer.h"
#include "InventoryComponent.generated.h"

USTRUCT(BlueprintType)
struct FItemProperty
{
	GENERATED_BODY()
	FGameplayTag AttributeTag;
	float Value;

	bool operator==(const FItemProperty& Other) const
	{
		return (AttributeTag == Other.AttributeTag&& Value == Other.Value);
	}
};



class UInventoryComponent;
//UObject class that support replication
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UReplicatedObject : public UObject
{
	GENERATED_BODY()

	
public:


	
	// Allows the Object to get a valid UWorld from it's outer.
	virtual UWorld* GetWorld() const override
	{
		if (const UObject* MyOuter = GetOuter())
		{
			return MyOuter->GetWorld();
		}
		return nullptr;
	}
	
	UFUNCTION(BlueprintPure, Category = "My Object")
	AActor* GetOwningActor() const
	{
		return GetTypedOuter<AActor>();
	}
	
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override
	{
		// Add any Blueprint properties
		// This is not required if you do not want the class to be "Blueprintable"
		if (const UBlueprintGeneratedClass* BPClass = Cast<UBlueprintGeneratedClass>(GetClass()))
		{
			BPClass->GetLifetimeBlueprintReplicationList(OutLifetimeProps);
		}
	}
	
	virtual bool IsSupportedForNetworking() const override
	{
		return true;
	}
	
	virtual int32 GetFunctionCallspace(UFunction* Function, FFrame* Stack) override
	{
		check(GetOuter() != nullptr);
		return GetOuter()->GetFunctionCallspace(Function, Stack);
	}
	
	// Call "Remote" (aka, RPC) functions through the actors NetDriver
	virtual bool CallRemoteFunction(UFunction* Function, void* Parms, struct FOutParmRec* OutParms, FFrame* Stack) override
	{
		check(!HasAnyFlags(RF_ClassDefaultObject));
		AActor* Owner = GetOwningActor();
		UNetDriver* NetDriver = Owner->GetNetDriver();
		if (NetDriver)
		{
			NetDriver->ProcessRemoteFunction(Owner, Function, Parms, OutParms, Stack, this);
			return true;
		}
		return false;
	}
	
	/*
	* Optional
	* Since this is a replicated object, typically only the Server should create and destroy these
	* Provide a custom destroy function to ensure these conditions are met.
	*/
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "My Object")
	void Destroy()
	{
		if (!IsPendingKill())
		{
			checkf(GetOwningActor()->HasAuthority() == true, TEXT("Destroy:: Object does not have authority to destroy itself!"));
			
			OnDestroyed();
			MarkPendingKill();
		}
	}
	
protected:
	virtual void OnDestroyed()
	{
		// Notify Owner etc.
	}
};


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UInventoryItem : public UReplicatedObject
{
	GENERATED_BODY()
	
public:

	//Delegate to call to Update the inventory UI

	
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	FString Id;
	
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	UPDA_Item* ItemData;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int32 Quantity = 1;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<FItemProperty> Attributes;
	
	bool operator==(const UInventoryItem& Other) const
	{
		for (auto& Attribute : Attributes)
		{
			if (!Other.Attributes.Contains(Attribute))
			{
				return false;
			}
		}
		return true;
	}
private:
	friend class UInventoryComponent;
	UPROPERTY(Replicated)
	UInventoryComponent* ComponentOwnerPrivate;
	
public:	
	UFUNCTION(BlueprintPure)
	UInventoryComponent* GetInventoryItem() const;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override
	{
		DOREPLIFETIME(UInventoryItem, Id);
		DOREPLIFETIME(UInventoryItem, ItemData);
		Super::GetLifetimeReplicatedProps(OutLifetimeProps);		
		DOREPLIFETIME_CONDITION(UInventoryItem, ComponentOwnerPrivate, COND_InitialOnly);
	}
	
	void SetInventoryComponent(UInventoryComponent* NewOwner){ComponentOwnerPrivate = NewOwner;};

};

USTRUCT(BlueprintType)
struct FSerializedInventoryItem
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UPDA_Item* ItemData;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Quantity;
};



UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UInventoryComponent : public UActorComponent
{
	GENERATED_BODY()
	
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnInventoryUpdated);
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FErrorMessage, FString, Message);

public:	
	// Sets default values for this component's properties
	UInventoryComponent();

	UPROPERTY(BlueprintAssignable)
	FOnInventoryUpdated OnInventoryUpdatedDelegate;

	UPROPERTY(BlueprintAssignable)
	FErrorMessage ErrorMessage;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "A Inventory")
	ECharacterType CharacterType = ECharacterType::CT_Any;

	UPROPERTY(ReplicatedUsing= OnRep_Inventory, EditAnywhere, BlueprintReadWrite, Category = "A Inventory")
	TArray<UInventoryItem*> Inventory;
	

	//Replicate condition Skip Owner. On Replicate, will create and attach the mesh to the proxy character
	UPROPERTY(ReplicatedUsing= OnRep_EquippedWeapon, VisibleAnywhere, BlueprintReadWrite, Category = "A Inventory")
	UInventoryItem* EquippedWeapon;

	UPROPERTY(ReplicatedUsing= OnRep_EquippedAccessory,VisibleAnywhere, BlueprintReadWrite, Category = "A Inventory")
	UInventoryItem* EquippedAccessory;
	
	UPROPERTY(ReplicatedUsing= OnRep_EquippedHead,VisibleAnywhere, BlueprintReadWrite, Category = "A Inventory")
	UInventoryItem* EquippedHead;

	UPROPERTY(ReplicatedUsing= Onrep_EquippedTorso,VisibleAnywhere, BlueprintReadWrite, Category = "A Inventory")
	UInventoryItem* EquippedTorso;

	UPROPERTY(ReplicatedUsing= OnRep_EquippedLegs,VisibleAnywhere, BlueprintReadWrite, Category = "A Inventory")
	UInventoryItem* EquippedLegs;

	UPROPERTY(ReplicatedUsing= OnRep_EquippedFeet,VisibleAnywhere, BlueprintReadWrite, Category = "A Inventory")
	UInventoryItem* EquippedFeet;

	UPROPERTY(ReplicatedUsing= OnRep_EquippedHands,VisibleAnywhere, BlueprintReadWrite, Category = "A Inventory")
	UInventoryItem* EquippedHands;

		
	
	
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	
	//HelperFunction to Get Equipped Items in Equipment slot
	UFUNCTION(BlueprintCallable, Category = "A Inventory")
	UInventoryItem* GetEquipmentInslot(const EEquipmentSlot Slot);

	//Use to Set the Equipment in a slot. Not RPC
	UFUNCTION(BlueprintCallable, Category = "A Inventory")
	void SetEquipmentInslot(const EEquipmentSlot& Slot, UInventoryItem* Item);

	
	void RemoveItem(UInventoryItem* Item);

	UFUNCTION(Server, Reliable, BlueprintCallable, Category = "A Inventory")
	void ServerRemoveItem(UInventoryItem* Item);
	
	//On Using the Item, depend on it type will Equip or Use. To be called from Owning Client
	UFUNCTION(BlueprintCallable, Category = "A Inventory")
	void UseItem(UInventoryItem* Item);

	//Call SetEquipmentInslot on the Server. Validate if the Item is in the Inventory
	UFUNCTION(Server, Reliable, WithValidation)
	void ServerEquipItemToSlot(const EEquipmentSlot& Slot, const UInventoryItem* Item);

	//Remove All attached static mesh and SkeletalMesh that does not belong to equipped items
	UFUNCTION(Category = "A Inventory")
	void RemoveOtherMeshes();

	bool FindItemInInventory(UPDA_Item* Item, TArray<FItemProperty> ItemProperty, UInventoryItem*& FoundItem);

	//HelperFunction to check if the Mesh belong to an Equipped Item
	bool IsSkeletalMeshComponentBelongToEquipment(USkeletalMeshComponent* SkeletalMeshComponent) const;
	
	//HelperFunction to check if the Mesh belong to an Equipped Item
	bool IsStaticMeshComponentBelongToEquipment(UStaticMeshComponent* StaticMeshComponent) const;

	bool IsChildActorComponentBelongToEquipment(UChildActorComponent* StaticMeshComponent) const;


	//Add New Item to Inventory, to be call On Server/Authority
	UFUNCTION(BlueprintCallable, Category = "A Inventory", meta=( Keywords = "Add Item" ))
	UInventoryItem* AddNewItemToInventory(UPDA_Item* ItemData, TArray<FItemProperty> Properties);

	//Serialize the Inventory to be saved, to be called elsewhere
	UFUNCTION(BlueprintCallable, Category = "A Inventory", meta=( Keywords = "Save" ))
	TArray<FSerializedInventoryItem> GetSerializedInventory(int& EquippedWeaponIndex, int& EquippedAccessoryIndex, int& EquippedHeadIndex, int& EquippedTorsoIndex, int& EquippedLegsIndex, int& EquippedFeetIndex, int& EquippedHandsIndex);

	UFUNCTION(BlueprintCallable, Category = "A Inventory", meta=( Keywords = "Save" ))
	void LoadSaveGameData(TArray<FSerializedInventoryItem> SerializedInventory, int EquippedWeaponIndex, int EquippedAccessoryIndex, int EquippedHeadIndex, int EquippedTorsoIndex, int EquippedLegsIndex, int EquippedFeetIndex, int EquippedHandsIndex);
	
	//Unequipping the Item, call on Client. If it's a static mesh or skeletal mesh Item, It will unequip the item and remove the mesh from the character
	UFUNCTION(BlueprintCallable, Category = "A Inventory", meta=(Keywords = "Unequip Item"))
	void UnequipItem(const UInventoryItem* ItemToUnEquip);

	
	//Replicate condition Skip Owner. On Replicate, will create and attach the mesh to the proxy character
	UFUNCTION()
	void OnRep_EquippedWeapon();
	//Replicate condition Skip Owner. On Replicate, will create and attach the mesh to the proxy character
	UFUNCTION()
	void OnRep_EquippedAccessory();
	//Replicate condition Skip Owner. On Replicate, will create and attach the mesh to the proxy character
	UFUNCTION()
	void OnRep_EquippedHead();
	//Replicate condition Skip Owner. On Replicate, will create and attach the mesh to the proxy character
	UFUNCTION()
	void Onrep_EquippedTorso();
	//Replicate condition Skip Owner. On Replicate, will create and attach the mesh to the proxy character
	UFUNCTION()
	void OnRep_EquippedLegs();
	//Replicate condition Skip Owner. On Replicate, will create and attach the mesh to the proxy character
	UFUNCTION()
	void OnRep_EquippedFeet();
	//Replicate condition Skip Owner. On Replicate, will create and attach the mesh to the proxy character
	UFUNCTION()
	void OnRep_EquippedHands();
	//Replicate condition Skip Owner. On Replicate, will create and attach the mesh to the proxy character
	UFUNCTION()
	void OnRep_Inventory();
	//Broad cast the OnInventoryUpdatedDelegate to force the UI to update
	UFUNCTION(Client, Reliable)
	void UIBroadcastInventoryUpdate();
	
	UFUNCTION(Server, Reliable)
	void ServerUseConsumable(UInventoryItem* Item);
	
// Replication Variable setup Unreal
	
	virtual bool ReplicateSubobjects(UActorChannel* Channel, FOutBunch* Bunch, FReplicationFlags* RepFlags) override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	
};


