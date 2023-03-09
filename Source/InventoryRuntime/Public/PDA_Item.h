// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PDA_Item.generated.h"

UENUM(BlueprintType)
enum class ECharacterType : uint8
{
	CT_Any UMETA(DisplayName = "Any"),
	CT_HumanMale UMETA(DisplayName = "HumanMale"),
	CT_HumanFeMale UMETA(DisplayName = "HumanFemale"),
};


UENUM(BlueprintType)
enum class EEquipmentSlot : uint8 
{
	ES_Head UMETA(DisplayName = "Head"),
	ES_Torso UMETA(DisplayName = "Torso"),
	ES_Legs UMETA(DisplayName = "Legs"),
	ES_Feet UMETA(DisplayName = "Feet"),
	ES_Hands UMETA(DisplayName = "Hands"),
	ES_Weapon UMETA(DisplayName = "Weapon"),
	ES_Accessory UMETA(DisplayName = "Accessory"),
};

UENUM(BlueprintType)
enum class EItemType : uint8 
{
	IT_None UMETA(DisplayName = "None"),
	IT_SkeletalMeshEquipment UMETA(DisplayName = "SkeletalMeshEquipment"),
	IT_StaticMeshEquipment UMETA(DisplayName = "StaticMeshEquipment"),
	IT_ChildActorEquipment UMETA(DisplayName = "ChildActorEquipment"),
	IT_Consumable UMETA(DisplayName = "Consumable"),
};



/**
 * 
 */
UCLASS()
class UPDA_Item : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	virtual FPrimaryAssetId GetPrimaryAssetId() const override;

	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory Item")
	FText ItemName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory Item")
	bool CanStack = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory Item")
	EItemType ItemType = EItemType::IT_None;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory Item")
	TSoftObjectPtr<UTexture2D> Icon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory Item")
	FString ItemDescription;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Inventory Item")
	void NativeOnUseItem(ACharacter * Character);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory Item")
	TArray<ECharacterType> CompatibleCharacterType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory Item")
	int Value = 0;
	
};


UCLASS()
class UPDA_SkeletalMeshEquipment : public UPDA_Item
{
	GENERATED_BODY()
	UPDA_SkeletalMeshEquipment()
	{
		ItemType = EItemType::IT_SkeletalMeshEquipment;
	}
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory Item")
	TArray<EEquipmentSlot> EquipmentSlot;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory Item")
	TSoftObjectPtr<USkeletalMesh> SkeletalMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory Item")
	FName SocketName;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory Item")
	TSoftClassPtr<UAnimInstance> AnimInstanceClass;
	
	void NativeOnUseItem_Implementation(ACharacter * Character) override;

	void OnSkeletalMeshLoaded(USkeletalMeshComponent* SkeletalMeshComp, ACharacter* TheCharacter);


};


UCLASS()
class UPDA_StaticMeshEquipment : public UPDA_Item
{
	GENERATED_BODY()

	UPDA_StaticMeshEquipment()
	{
		ItemType = EItemType::IT_StaticMeshEquipment;
	}

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory Item")
	TArray<EEquipmentSlot> EquipmentSlot;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory Item")
	TSoftObjectPtr<UStaticMesh> StaticMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory Item")
	FName SocketName;	
	
	void NativeOnUseItem_Implementation(ACharacter * Character) override;

	void OnStaticMeshLoaded(UStaticMeshComponent* MeshComponent, ACharacter* TheCharacter);


};





UCLASS()
class UPDA_ChildActorEquipment : public UPDA_Item
{
	GENERATED_BODY()

	UPDA_ChildActorEquipment()
	{
		ItemType = EItemType::IT_StaticMeshEquipment;
	}

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory Item")
	TArray<EEquipmentSlot> EquipmentSlot;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory Item")
	TSoftClassPtr<AActor> ChildActorClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory Item")
	FName SocketName;	
	
	void NativeOnUseItem_Implementation(ACharacter * Character) override;

	void OnChildActorLoaded(ACharacter* TheCharacter);


};


UCLASS(Blueprintable,BlueprintType)
class AItemEffectBase: public AActor
{
	GENERATED_BODY()
	
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnEffectUsed);
	
public:
	UPROPERTY(BlueprintAssignable)
	FOnEffectUsed OnEffectUsedDelegate;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Inventory Item")
	void ApplyEffect(ACharacter* Character);		
	
};






UCLASS()
class UPDA_Consumable : public UPDA_Item
{
	GENERATED_BODY()

	UPDA_Consumable()
	{
		ItemType = EItemType::IT_StaticMeshEquipment;
	}

public:
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory Item")
	TSoftClassPtr<AItemEffectBase> EffectClass;

	
	void NativeOnUseItem_Implementation(ACharacter * Character) override;

	void OnEffectObjectLoaded(ACharacter* TheCharacter);

	
};

