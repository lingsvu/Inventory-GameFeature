// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryComponent.h"
#include "GameFramework/Character.h"
#include "Net/UnrealNetwork.h"


UInventoryComponent* UInventoryItem::GetInventoryItem() const
{
	return ComponentOwnerPrivate;
}

// Sets default values for this component's properties
UInventoryComponent::UInventoryComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	SetIsReplicatedByDefault(true);
	// ...
}


// Called when the game starts
void UInventoryComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UInventoryComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

UInventoryItem* UInventoryComponent::GetEquipmentInslot(const EEquipmentSlot Slot)
{
	switch (Slot)
	{
		case EEquipmentSlot::ES_Head:
			return EquippedHead;
		case EEquipmentSlot::ES_Torso:
			return EquippedTorso;
		case EEquipmentSlot::ES_Legs:
			return EquippedLegs;
		case EEquipmentSlot::ES_Feet:
			return EquippedFeet;
		case EEquipmentSlot::ES_Hands:
			return EquippedHands;
		case EEquipmentSlot::ES_Weapon:
			return EquippedWeapon;
		case EEquipmentSlot::ES_Accessory:
			return EquippedAccessory;			
	}
	return nullptr;
}

void UInventoryComponent::SetEquipmentInslot(const EEquipmentSlot& Slot, UInventoryItem* Item)
{
	switch (Slot)
	{
	case EEquipmentSlot::ES_Head:
		EquippedHead = Item;
		return;
	case EEquipmentSlot::ES_Torso:
		EquippedTorso = Item;
		return;
	case EEquipmentSlot::ES_Legs:
		EquippedLegs = Item;
		return;
	case EEquipmentSlot::ES_Feet:
		EquippedFeet = Item;
		return;
	case EEquipmentSlot::ES_Hands:
		EquippedHands = Item;
		return;
	case EEquipmentSlot::ES_Weapon:
		EquippedWeapon = Item;
		return;
	case EEquipmentSlot::ES_Accessory:
		EquippedAccessory = Item;
	default: return;
	}	
}

void UInventoryComponent::RemoveItem(UInventoryItem* Item)
{
	if (Item->ItemData->CanStack)
	{
		Item->Quantity--;
		if (Item->Quantity <= 0)
		{
			Inventory.Remove(Item);
		}
	}
	else
	{		
		Inventory.Remove(Item);
	}
	UIBroadcastInventoryUpdate();
}

void UInventoryComponent::ServerRemoveItem_Implementation(UInventoryItem* Item)
{
	Inventory.Remove(Item);
}


void UInventoryComponent::UseItem(UInventoryItem* Item)
{
	if (!Item)
	{
		return;
	}
	if (!Item->ItemData)
	{
		return;
	}
	if (Item->ItemData->CompatibleCharacterType.Find(CharacterType) == INDEX_NONE)
	{
		ErrorMessage.Broadcast("This item is not compatible with your character type");
		return;
	}
	switch (Item->ItemData->ItemType)
	{
	case EItemType::IT_SkeletalMeshEquipment:
		if (UPDA_SkeletalMeshEquipment* EquipmentData = Cast<UPDA_SkeletalMeshEquipment>(Item->ItemData))
		{
			for (auto Slot : EquipmentData->EquipmentSlot)
			{
				SetEquipmentInslot(Slot, Item);
				ACharacter* Character = Cast<ACharacter>(GetOwner());
				Item->ItemData->NativeOnUseItem(Character);
				RemoveOtherMeshes();
				UIBroadcastInventoryUpdate();
				ServerEquipItemToSlot(Slot, Item);
			}
		}
	case EItemType::IT_StaticMeshEquipment:
		if (UPDA_StaticMeshEquipment* EquipmentData = Cast<UPDA_StaticMeshEquipment>(Item->ItemData))
		{
			for (auto Slot : EquipmentData->EquipmentSlot)
			{
				SetEquipmentInslot(Slot, Item);
				ACharacter* Character = Cast<ACharacter>(GetOwner());
				Item->ItemData->NativeOnUseItem(Character);
				RemoveOtherMeshes();
				UIBroadcastInventoryUpdate();
				ServerEquipItemToSlot(Slot, Item);
			}
		}
	case EItemType::IT_ChildActorEquipment:
		if (UPDA_ChildActorEquipment* EquipmentData = Cast<UPDA_ChildActorEquipment>(Item->ItemData))
		{
			for (auto Slot : EquipmentData->EquipmentSlot)
			{
				SetEquipmentInslot(Slot, Item);
				ACharacter* Character = Cast<ACharacter>(GetOwner());
				Item->ItemData->NativeOnUseItem(Character);
				RemoveOtherMeshes();
				UIBroadcastInventoryUpdate();
				ServerEquipItemToSlot(Slot, Item);
			}
		}
	case EItemType::IT_Consumable:
		{
			if (Item)
				{
					if (UPDA_Consumable* ConsumableData = Cast<UPDA_Consumable>(Item->ItemData))
					{
						ACharacter* Character = Cast<ACharacter>(GetOwner());
						ServerUseConsumable(Item);
						RemoveItem(Item);
						UIBroadcastInventoryUpdate();
					}
				}
			else GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Item is null")));
		}
	}
}

void UInventoryComponent::RemoveOtherMeshes()
{
	TArray<USceneComponent*> AttachedComponents;
	ACharacter * Character = Cast<ACharacter>(GetOwner());
	Character->GetMesh()->GetChildrenComponents(true, AttachedComponents);
	for (auto Component : AttachedComponents)
	{
		if (Component->ComponentHasTag("Equipment"))
		{
			AttachedComponents.Remove(Component);
		}
	}
	if (AttachedComponents.Num() == 0)
	{
		return;
	}
for (auto Component : AttachedComponents)
	{
		if (Component && !Component->ComponentHasTag("Hair"))
		{
			if (Component->IsA(USkeletalMeshComponent::StaticClass()))
			{
				if (USkeletalMeshComponent* SkeletalMeshComponent =Cast<USkeletalMeshComponent>(Component))
				{
					if (!IsSkeletalMeshComponentBelongToEquipment(SkeletalMeshComponent))
					{
						Component->DestroyComponent();
					}
				}
			}
			else if (Component->IsA(UStaticMeshComponent::StaticClass()))
			{
				if (UStaticMeshComponent* StaticMeshComponent = Cast<UStaticMeshComponent>(Component))
				{
					if (!IsStaticMeshComponentBelongToEquipment(StaticMeshComponent))
					{
						Component->DestroyComponent();
					}
				}
			}
			else if (Component->IsA(UChildActorComponent::StaticClass()))
			{
				if (UChildActorComponent* ChildActorComponent = Cast<UChildActorComponent>(Component))
				{
					if (!IsChildActorComponentBelongToEquipment(ChildActorComponent))
					{
						Component->DestroyComponent();
					}
				}
			}
		}		
	}
	
}

bool UInventoryComponent::FindItemInInventory(UPDA_Item* Item, TArray<FItemProperty> ItemProperty,
	UInventoryItem*& FoundItem)
{
	for (auto Item : Inventory)
	{
		if (Item->ItemData->GetClass() == Item->GetClass() && Item->Attributes == ItemProperty)
		{
			FoundItem = Item;
			return true;
		}
	}
	return false;
}

bool UInventoryComponent::IsSkeletalMeshComponentBelongToEquipment(USkeletalMeshComponent* SkeletalMeshComponent) const
{
	if (!SkeletalMeshComponent->GetSkeletalMeshAsset())
	{
		return true;
	}
	if (EquippedHead)
	{
		if (EquippedHead->ItemData->ItemType == EItemType::IT_SkeletalMeshEquipment)
		{
			if (UPDA_SkeletalMeshEquipment* ClothingData = Cast<UPDA_SkeletalMeshEquipment>(EquippedHead->ItemData))
			{
				if (SkeletalMeshComponent->GetSkeletalMeshAsset() == ClothingData->SkeletalMesh)
				{
					return true;
				}
			}
		}
	}
	if (EquippedTorso)
	{
		if (EquippedTorso->ItemData->ItemType == EItemType::IT_SkeletalMeshEquipment)
		{
			if (UPDA_SkeletalMeshEquipment* ClothingData = Cast<UPDA_SkeletalMeshEquipment>(EquippedTorso->ItemData))
			{
				if (SkeletalMeshComponent->GetSkeletalMeshAsset() == ClothingData->SkeletalMesh)
				{
					return true;
				}
			}
		}
	}
	if (EquippedLegs)
	{
		if (EquippedLegs->ItemData->ItemType == EItemType::IT_SkeletalMeshEquipment)
		{
			if (UPDA_SkeletalMeshEquipment* ClothingData = Cast<UPDA_SkeletalMeshEquipment>(EquippedLegs->ItemData))
			{
				if (SkeletalMeshComponent->GetSkeletalMeshAsset() == ClothingData->SkeletalMesh)
				{
					return true;
				}
			}
		}
	}
	if (EquippedFeet)
	{
		if (EquippedFeet->ItemData->ItemType == EItemType::IT_SkeletalMeshEquipment)
		{
			if (UPDA_SkeletalMeshEquipment* ClothingData = Cast<UPDA_SkeletalMeshEquipment>(EquippedFeet->ItemData))
			{
				if (SkeletalMeshComponent->GetSkeletalMeshAsset() == ClothingData->SkeletalMesh)
				{
					return true;
				}
			}
		}
	}
	if (EquippedHands)
	{
		if (EquippedHands->ItemData->ItemType == EItemType::IT_SkeletalMeshEquipment)
		{
			if (UPDA_SkeletalMeshEquipment* ClothingData = Cast<UPDA_SkeletalMeshEquipment>(EquippedHands->ItemData))
			{
				if (SkeletalMeshComponent->GetSkeletalMeshAsset() == ClothingData->SkeletalMesh)
				{
					return true;
				}
			}
		}
	}
	if (EquippedWeapon)
	{
		if (EquippedWeapon->ItemData->ItemType == EItemType::IT_SkeletalMeshEquipment)
		{
			if (UPDA_SkeletalMeshEquipment* ClothingData = Cast<UPDA_SkeletalMeshEquipment>(EquippedWeapon->ItemData))
			{
				if (SkeletalMeshComponent->GetSkeletalMeshAsset() == ClothingData->SkeletalMesh)
				{
					return true;
				}
			}
		}
	}
	if (EquippedAccessory)
	{
		if (EquippedAccessory->ItemData->ItemType == EItemType::IT_SkeletalMeshEquipment)
		{
			if (UPDA_SkeletalMeshEquipment* ClothingData = Cast<UPDA_SkeletalMeshEquipment>(EquippedAccessory->ItemData))
			{
				if (SkeletalMeshComponent->GetSkeletalMeshAsset() == ClothingData->SkeletalMesh)
				{
					return true;
				}
			}
		}
	}
	
	return false;
}

bool UInventoryComponent::IsStaticMeshComponentBelongToEquipment(UStaticMeshComponent* StaticMeshComponent) const
{
	if (!StaticMeshComponent->GetStaticMesh())
	{
		return true;
	}
	if (EquippedHead)
	{
		if (EquippedHead->ItemData->ItemType == EItemType::IT_StaticMeshEquipment)
		{
			if (StaticMeshComponent->GetStaticMesh() == Cast<UPDA_StaticMeshEquipment>(EquippedHead->ItemData)->StaticMesh)
			{
				return true;
			}
		}
	}
	if (EquippedTorso)
	{
		if (EquippedTorso->ItemData->ItemType == EItemType::IT_StaticMeshEquipment)
		{
			if (StaticMeshComponent->GetStaticMesh() == Cast<UPDA_StaticMeshEquipment>(EquippedTorso->ItemData)->StaticMesh)
			{
				return true;
			}
		}
	}
	if (EquippedLegs)
	{
		if (EquippedLegs->ItemData->ItemType == EItemType::IT_StaticMeshEquipment)
		{
			if (StaticMeshComponent->GetStaticMesh() == Cast<UPDA_StaticMeshEquipment>(EquippedLegs->ItemData)->StaticMesh)
			{
				return true;
			}
		}
	}
	if (EquippedFeet)
	{
		if (EquippedFeet->ItemData->ItemType == EItemType::IT_StaticMeshEquipment)
		{
			if (StaticMeshComponent->GetStaticMesh() == Cast<UPDA_StaticMeshEquipment>(EquippedFeet->ItemData)->StaticMesh)
			{
				return true;
			}
		}
	}
	if (EquippedHands)
	{
		if (EquippedHands->ItemData->ItemType == EItemType::IT_StaticMeshEquipment)
		{
			if (StaticMeshComponent->GetStaticMesh() == Cast<UPDA_StaticMeshEquipment>(EquippedHands->ItemData)->StaticMesh)
			{
				return true;
			}
		}
	}
	if (EquippedWeapon)
	{
		if (EquippedWeapon->ItemData->ItemType == EItemType::IT_StaticMeshEquipment)
		{
			if (StaticMeshComponent->GetStaticMesh() == Cast<UPDA_StaticMeshEquipment>(EquippedWeapon->ItemData)->StaticMesh)
			{
				return true;
			}
		}
	}
	if (EquippedAccessory)
	{
		if (EquippedAccessory->ItemData->ItemType == EItemType::IT_StaticMeshEquipment)
		{
			if (StaticMeshComponent->GetStaticMesh() == Cast<UPDA_StaticMeshEquipment>(EquippedAccessory->ItemData)->StaticMesh)
			{
				return true;
			}
		}
	}
	
	return false;
}

bool UInventoryComponent::IsChildActorComponentBelongToEquipment(UChildActorComponent* ChildActorComponent) const
{
	if (EquippedWeapon)
	{
		if (EquippedWeapon->ItemData->ItemType == EItemType::IT_ChildActorEquipment)
		{
			if (ChildActorComponent->GetChildActorClass() == Cast<UPDA_ChildActorEquipment>(EquippedWeapon->ItemData)->ChildActorClass.Get())
			{
				return true;
			}
		}
	}
	if (EquippedAccessory)
	{
		if (EquippedAccessory->ItemData->ItemType == EItemType::IT_ChildActorEquipment)
		{
			if (ChildActorComponent->GetChildActorClass() == Cast<UPDA_ChildActorEquipment>(EquippedAccessory->ItemData)->ChildActorClass.Get())
			{
				return true;
			}
		}
	}
	if (EquippedHead)
	{
		if (EquippedHead->ItemData->ItemType == EItemType::IT_ChildActorEquipment)
		{
			if (ChildActorComponent->GetChildActorClass() == Cast<UPDA_ChildActorEquipment>(EquippedHead->ItemData)->ChildActorClass.Get())
			{
				return true;
			}
		}
	}
	if (EquippedTorso)
	{
		if (EquippedTorso->ItemData->ItemType == EItemType::IT_ChildActorEquipment)
		{
			if (ChildActorComponent->GetChildActorClass() == Cast<UPDA_ChildActorEquipment>(EquippedTorso->ItemData)->ChildActorClass.Get())
			{
				return true;
			}
		}
	}
	if (EquippedLegs)
	{
		if (EquippedLegs->ItemData->ItemType == EItemType::IT_ChildActorEquipment)
		{
			if (ChildActorComponent->GetChildActorClass() == Cast<UPDA_ChildActorEquipment>(EquippedLegs->ItemData)->ChildActorClass.Get())
			{
				return true;
			}
		}
	}
	if (EquippedFeet)
	{
		if (EquippedFeet->ItemData->ItemType == EItemType::IT_ChildActorEquipment)
		{
			if (ChildActorComponent->GetChildActorClass() == Cast<UPDA_ChildActorEquipment>(EquippedFeet->ItemData)->ChildActorClass.Get())
			{
				return true;
			}
		}
	}
	if (EquippedHands)
	{
		if (EquippedHands->ItemData->ItemType == EItemType::IT_ChildActorEquipment)
		{
			if (ChildActorComponent->GetChildActorClass() == Cast<UPDA_ChildActorEquipment>(EquippedHands->ItemData)->ChildActorClass.Get())
			{
				return true;
			}
		}
	}
	return false;
}
UInventoryItem* UInventoryComponent::AddNewItemToInventory(UPDA_Item* ItemData, TArray<FItemProperty> Properties)
{
	AActor* Owner = GetOwner();
	if (Owner == nullptr)
	{
		return nullptr;
	};
	if (ItemData->CanStack)
	{
		UInventoryItem* FoundItem = nullptr;
		if (FindItemInInventory(ItemData, Properties, FoundItem))
		{
			FoundItem->Quantity++;
			return FoundItem;
		}
	}
	else
	{		
		UInventoryItem* NewItem = NewObject<UInventoryItem>(Owner);
		if (Properties.Num() > 0)
		{
			NewItem->Attributes = Properties;
		}
		NewItem->ItemData = ItemData;	
		NewItem->SetInventoryComponent(this);
		Inventory.Add(NewItem);
		return NewItem;
	}
	return nullptr;
}

TArray<FSerializedInventoryItem> UInventoryComponent::GetSerializedInventory(int& EquippedWeaponIndex,
	int& EquippedAccessoryIndex, int& EquippedHeadIndex, int& EquippedTorsoIndex, int& EquippedLegsIndex,
	int& EquippedFeetIndex, int& EquippedHandsIndex)
{
	TArray<FSerializedInventoryItem> SerializedInventory;
	for (int i = 0; i < Inventory.Num(); i++)
	{
		UInventoryItem* Item = Inventory[i];
		if (Item->ItemData)
		{
			FSerializedInventoryItem SerializedItem;
			SerializedItem.ItemData = Item->ItemData;
			SerializedItem.Quantity = Item->Quantity;
			SerializedInventory.Add(SerializedItem);			
		}
		if (EquippedWeapon == Item)
		{
			EquippedWeaponIndex = i;
		}
		if (EquippedAccessory == Item)
		{
			EquippedAccessoryIndex = i;
		}
		if (EquippedHead == Item)
		{
			EquippedHeadIndex = i;
		}
		if (EquippedTorso == Item)
		{
			EquippedTorsoIndex = i;
		}
		if (EquippedLegs == Item)
		{
			EquippedLegsIndex = i;
		}
		if (EquippedFeet == Item)
		{
			EquippedFeetIndex = i;
		}
		if (EquippedHands == Item)
		{
			EquippedHandsIndex = i;
		}		
	}
	return SerializedInventory;
}

void UInventoryComponent::LoadSaveGameData(TArray<FSerializedInventoryItem> SerializedInventory,
	int EquippedWeaponIndex, int EquippedAccessoryIndex, int EquippedHeadIndex, int EquippedTorsoIndex,
	int EquippedLegsIndex, int EquippedFeetIndex, int EquippedHandsIndex)
{
	for (FSerializedInventoryItem SerializedItem : SerializedInventory)
	{
		UInventoryItem* NewItem = NewObject<UInventoryItem>(GetOwner());
		NewItem->ItemData = SerializedItem.ItemData;
		NewItem->Quantity = SerializedItem.Quantity;
		NewItem->SetInventoryComponent(this);
		Inventory.Add(NewItem);
	}
	if (EquippedWeaponIndex != -1)
	{
		EquippedWeapon = Inventory[EquippedWeaponIndex];
	}
	if (EquippedAccessoryIndex != -1)
	{
		EquippedAccessory = Inventory[EquippedAccessoryIndex];
	}
	if (EquippedHeadIndex != -1)
	{
		EquippedHead = Inventory[EquippedHeadIndex];
	}
	if (EquippedTorsoIndex != -1)
	{
		EquippedTorso = Inventory[EquippedTorsoIndex];
	}
	if (EquippedLegsIndex != -1)
	{
		EquippedLegs = Inventory[EquippedLegsIndex];
	}
	if (EquippedFeetIndex != -1)
	{
		EquippedFeet = Inventory[EquippedFeetIndex];
	}
	if (EquippedHandsIndex != -1)
	{
		EquippedHands = Inventory[EquippedHandsIndex];
	}
	
}


void UInventoryComponent::UnequipItem(const UInventoryItem* ItemToUnEquip)
{
	if (ItemToUnEquip)
	{
		TArray<EEquipmentSlot> SlotsToUnequip;
		if (Cast<UPDA_SkeletalMeshEquipment>(ItemToUnEquip->ItemData))
		{
			SlotsToUnequip = Cast<UPDA_SkeletalMeshEquipment>(ItemToUnEquip->ItemData)->EquipmentSlot;
		}
		else if (Cast<UPDA_StaticMeshEquipment>(ItemToUnEquip->ItemData))
		{
			SlotsToUnequip = Cast<UPDA_StaticMeshEquipment>(ItemToUnEquip->ItemData)->EquipmentSlot;
		}
		for (EEquipmentSlot Slot : SlotsToUnequip)
		{
			SetEquipmentInslot(Slot, nullptr);			
			ServerEquipItemToSlot(Slot, nullptr);
		}
		UIBroadcastInventoryUpdate();
		RemoveOtherMeshes();
	}
}

void UInventoryComponent::ServerUseConsumable_Implementation(UInventoryItem* Item)
{
	if (Item)
	{
		ACharacter* Character = Cast<ACharacter>(GetOwner());
		Item->ItemData->NativeOnUseItem(Character);		
		ServerRemoveItem(Item);
	}
}

bool UInventoryComponent::ReplicateSubobjects(UActorChannel* Channel, FOutBunch* Bunch, FReplicationFlags* RepFlags)
{
	bool bWroteSomething = Super::ReplicateSubobjects(Channel, Bunch, RepFlags);
	bWroteSomething |= Channel->ReplicateSubobjectList(Inventory, *Bunch, *RepFlags);
	return bWroteSomething;	
}

void UInventoryComponent::OnRep_EquippedWeapon()
{
	if(EquippedWeapon)
	{
		ACharacter * Character = Cast<ACharacter>(GetOwner());
		EquippedWeapon->ItemData->NativeOnUseItem(Character);
	}
	RemoveOtherMeshes();	
}

void UInventoryComponent::OnRep_EquippedAccessory()
{
	if(EquippedAccessory)
	{
		ACharacter * Character = Cast<ACharacter>(GetOwner());
		EquippedAccessory->ItemData->NativeOnUseItem(Character);
	}
	RemoveOtherMeshes();	
}

void UInventoryComponent::OnRep_EquippedHead()
{
	if(EquippedHead)
	{
		ACharacter * Character = Cast<ACharacter>(GetOwner());
		EquippedHead->ItemData->NativeOnUseItem(Character);
	}
	RemoveOtherMeshes();	
}

void UInventoryComponent::Onrep_EquippedTorso()
{
	if(EquippedTorso)
	{
		ACharacter * Character = Cast<ACharacter>(GetOwner());
		EquippedTorso->ItemData->NativeOnUseItem(Character);
	}
	RemoveOtherMeshes();	
}

void UInventoryComponent::OnRep_EquippedLegs()
{
	if(EquippedLegs)
	{
		ACharacter * Character = Cast<ACharacter>(GetOwner());
		EquippedLegs->ItemData->NativeOnUseItem(Character);
	}
	RemoveOtherMeshes();	
}

void UInventoryComponent::OnRep_EquippedFeet()
{
	if(EquippedFeet)
	{
		ACharacter * Character = Cast<ACharacter>(GetOwner());
		EquippedFeet->ItemData->NativeOnUseItem(Character);
	}
	RemoveOtherMeshes();	
}

void UInventoryComponent::OnRep_EquippedHands()
{
	if(EquippedHands)
	{
		ACharacter * Character = Cast<ACharacter>(GetOwner());
		EquippedHands->ItemData->NativeOnUseItem(Character);
	}
	RemoveOtherMeshes();	
}

void UInventoryComponent::OnRep_Inventory()
{
	UIBroadcastInventoryUpdate();
}

void UInventoryComponent::UIBroadcastInventoryUpdate_Implementation()
{
	OnInventoryUpdatedDelegate.Broadcast();
}

void UInventoryComponent::ServerEquipItemToSlot_Implementation(const EEquipmentSlot& Slot, const UInventoryItem* Item)
{
	//dereference the item
	UInventoryItem* ItemToEquip = const_cast<UInventoryItem*>(Item);
	//check if the item is valid
	SetEquipmentInslot(Slot, ItemToEquip);
}

bool UInventoryComponent::ServerEquipItemToSlot_Validate(const EEquipmentSlot& Slot, const UInventoryItem* Item)
{
	if (!Item)
	{
		return true;
	}
	UInventoryItem* ItemToFind = const_cast<UInventoryItem*>(Item);
	return (Inventory.Find(ItemToFind) != INDEX_NONE);
}



void UInventoryComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	DOREPLIFETIME_CONDITION(UInventoryComponent, Inventory, COND_OwnerOnly);
	DOREPLIFETIME_CONDITION(UInventoryComponent, EquippedHead, COND_SkipOwner);
	DOREPLIFETIME_CONDITION(UInventoryComponent, EquippedTorso, COND_SkipOwner);
	DOREPLIFETIME_CONDITION(UInventoryComponent, EquippedLegs, COND_SkipOwner);
	DOREPLIFETIME_CONDITION(UInventoryComponent, EquippedFeet, COND_SkipOwner);
	DOREPLIFETIME_CONDITION(UInventoryComponent, EquippedHands, COND_SkipOwner);
	DOREPLIFETIME_CONDITION(UInventoryComponent, EquippedWeapon, COND_SkipOwner);
	DOREPLIFETIME_CONDITION(UInventoryComponent, EquippedAccessory, COND_SkipOwner);	
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}