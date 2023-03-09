// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryWidget.h"

void UInventoryWidget::SetInventoryComponent(UInventoryComponent* NewInventoryComponent)
{
	InventoryComponent = NewInventoryComponent;
}

void UInventoryWidget::NativeConstruct()
{
	SetInventoryComponent(Cast<UInventoryComponent>(GetOwningPlayerPawn()->GetComponentByClass(UInventoryComponent::StaticClass())));
	if (!InventoryComponent)
	{
		GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, TEXT("Inventory Component not found.Please Add Inventory Component to Player Pawn either in Blueprint or C++"));
		return;
	}
	InventoryComponent->OnInventoryUpdatedDelegate.AddDynamic(this, &UInventoryWidget::UpdateInventory);
	UpdateInventory();
	AccessorySlot->OnItemWidgetClicked.AddDynamic(this, &UInventoryWidget::UnEquipClickedItem);
	WeaponSlot->OnItemWidgetClicked.AddDynamic(this, &UInventoryWidget::UnEquipClickedItem);
	TorsoSlot->OnItemWidgetClicked.AddDynamic(this, &UInventoryWidget::UnEquipClickedItem);
	HeadSlot->OnItemWidgetClicked.AddDynamic(this, &UInventoryWidget::UnEquipClickedItem);
	HandSlot->OnItemWidgetClicked.AddDynamic(this, &UInventoryWidget::UnEquipClickedItem);
	LegSlot->OnItemWidgetClicked.AddDynamic(this, &UInventoryWidget::UnEquipClickedItem);
	FeetSlot->OnItemWidgetClicked.AddDynamic(this, &UInventoryWidget::UnEquipClickedItem);	
	
	Super::NativeConstruct();
}

void UInventoryWidget::UpdateInventoryItemWidgets()
{
	InventoryGrid->ClearChildren();
	if (InventoryComponent->Inventory.Num()==0){return;}
	for (int i = 0; i < InventoryComponent->Inventory.Num(); i++)
	{
		UItemWidget* ItemWidget = CreateWidget<UItemWidget>(GetOwningPlayer(), ItemWidgetClass);
		ItemWidget->Item = InventoryComponent->Inventory[i];
		ItemWidget->RefreshVisual();
		int Y = (i/5);
		int X = (i%5);
		InventoryGrid->AddChildToUniformGrid(ItemWidget, Y, X);
		ItemWidget->OnItemWidgetClicked.AddDynamic(this, &UInventoryWidget::EquipClickedItem);
	}
}

void UInventoryWidget::EquipClickedItem(UInventoryItem* Item)
{
	if (Item)
	{
		UE_LOG(LogTemp, Warning, TEXT("Item Valid, Equipping"));
		InventoryComponent->UseItem(Item);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Item is null"));
	}
}

void UInventoryWidget::UnEquipClickedItem(UInventoryItem* Item)
{
	if (Item)
	{
		InventoryComponent->UnequipItem(Item);
	}
}

void UInventoryWidget::UpdateEquippedItems()
{
	AccessorySlot->Item = InventoryComponent->EquippedAccessory;
	AccessorySlot->RefreshVisual();
	WeaponSlot->Item = InventoryComponent->EquippedWeapon;
	WeaponSlot->RefreshVisual();
	HeadSlot->Item = InventoryComponent->EquippedHead;
	HeadSlot->RefreshVisual();
	TorsoSlot->Item = InventoryComponent->EquippedTorso;
	TorsoSlot->RefreshVisual();
	HandSlot->Item = InventoryComponent->EquippedHands;
	HandSlot->RefreshVisual();
	LegSlot->Item = InventoryComponent->EquippedLegs;
	LegSlot->RefreshVisual();
	FeetSlot->Item = InventoryComponent->EquippedFeet;
	FeetSlot->RefreshVisual();		
}

void UInventoryWidget::UpdateInventory()
{
	UpdateEquippedItems();
	UpdateInventoryItemWidgets();
}

void UInventoryWidget::SortItemByValue()
{
	TArray<UWidget*> ItemWidgets = InventoryGrid->GetAllChildren();
	for (int i = 0; i < ItemWidgets.Num(); i++)
	{
		UItemWidget* ItemWidget = Cast<UItemWidget>(ItemWidgets[i]);
		if (ItemWidget)
		{
			for (int j = 0; j < ItemWidgets.Num(); j++)
			{
				UItemWidget* OtherItemWidget = Cast<UItemWidget>(ItemWidgets[j]);
				if (OtherItemWidget)
				{
					if (ItemWidget->GetValue() > OtherItemWidget->GetValue())
					{
						ItemWidget->SwapItem(OtherItemWidget);
					}
				}
			}
		}
	}
}
