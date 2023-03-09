// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemWidget.h"
#include "CommonTextBlock.h"


void UItemWidget::RefreshVisual_Implementation()
{
	if (Item)
	{	
		ItemName->SetText(Item->ItemData->ItemName);		
	}
	else
	{
		ItemName->SetText(FText::FromString(TEXT("")));
	}
}


void UItemWidget::OnItemButtonClicked(UCommonButtonBase* Button)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Item Button Clicked"));
	OnItemWidgetClicked.Broadcast(Item);
}

void UItemWidget::NativeConstruct()
{
	RefreshVisual();
	OnButtonBaseClicked.AddDynamic(this, &UItemWidget::OnItemButtonClicked);
	Super::NativeConstruct();
}

void UItemWidget::NativeDestruct()
{
	Item = nullptr;
	OnButtonBaseClicked.RemoveDynamic(this, &UItemWidget::OnItemButtonClicked);
	OnItemWidgetClicked.Clear();
	Super::NativeDestruct();
}

int UItemWidget::GetValue() const
{
	if (Item)
	{
		return Item->ItemData->Value;
	}
	return -1;
}

void UItemWidget::SwapItem(UItemWidget* OtherItemWidget)
{
	if (!OtherItemWidget){return;}
	UInventoryItem* TempItem = Item;
	Item = OtherItemWidget->Item;
	OtherItemWidget->Item = TempItem;
	RefreshVisual();
	OtherItemWidget->RefreshVisual();
}

