// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "InventoryComponent.h"
#include "ItemWidget.h"
#include "Components/UniformGridPanel.h"
#include "InventoryWidget.generated.h"

/**
 * 
 */
UCLASS()
class UInventoryWidget : public UCommonActivatableWidget
{
	GENERATED_BODY()

	

protected:
	UPROPERTY()
	UInventoryComponent * InventoryComponent; 
	
	
public:	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
		class UUniformGridPanel* InventoryGrid;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int MaxGridSizeX = 5;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UItemWidget> ItemWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	UItemWidget* WeaponSlot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	UItemWidget* AccessorySlot;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	UItemWidget* TorsoSlot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	UItemWidget* HeadSlot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	UItemWidget* LegSlot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	UItemWidget* FeetSlot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	UItemWidget* HandSlot;
	
		
	void SetInventoryComponent(UInventoryComponent* NewInventoryComponent);

	virtual void NativeConstruct() override;

	UFUNCTION()
	void UpdateInventoryItemWidgets();

	UFUNCTION()
	void EquipClickedItem(UInventoryItem* Item);

	UFUNCTION()
	void UnEquipClickedItem(UInventoryItem* Item);

	UFUNCTION()
	void UpdateEquippedItems();

	UFUNCTION(BlueprintCallable)
	void UpdateInventory();

	void SortItemByValue();

	
};
