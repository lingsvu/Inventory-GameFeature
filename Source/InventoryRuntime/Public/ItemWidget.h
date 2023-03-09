// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CommonButtonBase.h"
#include "InventoryComponent.h"
#include "ItemWidget.generated.h"

/**
 * 
 */

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemWidgetClicked, UInventoryItem*, Item);

UCLASS()
class UItemWidget : public UCommonButtonBase
{

	GENERATED_BODY()	
	
public:
	UPROPERTY(BlueprintAssignable)
	FOnItemWidgetClicked OnItemWidgetClicked;	
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	class UCommonTextBlock* ItemName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite,meta= (ExposeOnSpawn=true))
	UInventoryItem* Item = nullptr;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void RefreshVisual();

	UFUNCTION()
	void OnItemButtonClicked(UCommonButtonBase* Button);
	
	virtual void NativeConstruct() override;

	virtual void NativeDestruct() override;

	int GetValue() const;

	void SwapItem(UItemWidget* OtherItemWidget);
	
};
