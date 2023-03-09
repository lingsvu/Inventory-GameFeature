// Fill out your copyright notice in the Description page of Project Settings.


#include "PDA_Item.h"
#include "Engine/AssetManager.h"
#include "GameFramework/Character.h"

FPrimaryAssetId UPDA_Item::GetPrimaryAssetId() const
{
	return Super::GetPrimaryAssetId();
}

void UPDA_Item::NativeOnUseItem_Implementation(ACharacter* Character)
{
}



void UPDA_SkeletalMeshEquipment::NativeOnUseItem_Implementation(ACharacter* Character)
{
	// Create a skeletal mesh component for Character
	//FText to FName conversion ItemName
	Super::NativeOnUseItem_Implementation(Character);
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "Trying To Equip"+ItemName.ToString());
	TArray<USceneComponent*> Children;	
	Character->GetMesh()->GetChildrenComponents(true, Children);
	for (const USceneComponent* Child : Children)
	{
		if (Cast<USkeletalMeshComponent>(Child) && Cast<USkeletalMeshComponent>(Child)->GetSkeletalMeshAsset() == SkeletalMesh)
		{
			 return;
		}
	}
	USkeletalMeshComponent* Mesh = NewObject<USkeletalMeshComponent>(Character);
	Mesh->RegisterComponent();
	Mesh->ComponentTags.Add("Equipment");
	FStreamableManager& AssetLoader = UAssetManager::GetStreamableManager();
	TArray<FSoftObjectPath> AssetsToLoad;
	AssetsToLoad.Add(SkeletalMesh.ToSoftObjectPath());
	AssetsToLoad.Add(AnimInstanceClass.ToSoftObjectPath());
	AssetLoader.RequestAsyncLoad(AssetsToLoad, FStreamableDelegate::CreateUObject(this, &UPDA_SkeletalMeshEquipment::OnSkeletalMeshLoaded, Mesh, Character));
	
}
// On Skeletal Mesh Loaded
void UPDA_SkeletalMeshEquipment::OnSkeletalMeshLoaded(USkeletalMeshComponent* SkeletalMeshComp, ACharacter* TheCharacter)
{
	SkeletalMeshComp->SetSkeletalMeshAsset(SkeletalMesh.Get());	
	SkeletalMeshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	SkeletalMeshComp->AttachToComponent(TheCharacter->GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, SocketName);
	
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "Attaching"+ItemName.ToString());
	if (AnimInstanceClass)
	{		
		SkeletalMeshComp->SetAnimInstanceClass(AnimInstanceClass.Get());	
		SkeletalMeshComp->SetAnimationMode(EAnimationMode::AnimationBlueprint);
	}	
}


void UPDA_StaticMeshEquipment::NativeOnUseItem_Implementation(ACharacter* Character)
{
	Super::NativeOnUseItem_Implementation(Character);
	TArray<USceneComponent*> Children;	
	Character->GetMesh()->GetChildrenComponents(true, Children);
	for (const USceneComponent* Child : Children)
	{
		if (Cast<UStaticMeshComponent>(Child) && Cast<UStaticMeshComponent>(Child)->GetStaticMesh() == StaticMesh)
		{
			 return;
		}
	}
	UStaticMeshComponent* Mesh = NewObject<UStaticMeshComponent>(Character);
	Mesh->RegisterComponent();
	Mesh->ComponentTags.Add("Equipment");
	FStreamableManager& AssetLoader = UAssetManager::GetStreamableManager();
	AssetLoader.RequestAsyncLoad(StaticMesh.ToSoftObjectPath(), FStreamableDelegate::CreateUObject(this, &UPDA_StaticMeshEquipment::OnStaticMeshLoaded, Mesh, Character));
}

void UPDA_StaticMeshEquipment::OnStaticMeshLoaded(UStaticMeshComponent* MeshComponent, ACharacter* TheCharacter)
{
	MeshComponent->SetStaticMesh(StaticMesh.Get());
	MeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	MeshComponent->AttachToComponent(TheCharacter->GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, SocketName);
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "Attaching"+ItemName.ToString());
}

void UPDA_ChildActorEquipment::NativeOnUseItem_Implementation(ACharacter* Character)
{
	Super::NativeOnUseItem_Implementation(Character);
	TArray<USceneComponent*> Children;
	Character->GetMesh()->GetChildrenComponents(true, Children);
	for (const USceneComponent* Child : Children)
	{
		if (Cast<UChildActorComponent>(Child) && Cast<UChildActorComponent>(Child)->GetClass() == ChildActorClass)
		{
			return;
		}
	}	
	FStreamableManager& AssetLoader = UAssetManager::GetStreamableManager();
	AssetLoader.RequestAsyncLoad(ChildActorClass.ToSoftObjectPath(), FStreamableDelegate::CreateUObject(this, &UPDA_ChildActorEquipment::OnChildActorLoaded, Character));
}


void UPDA_ChildActorEquipment::OnChildActorLoaded(ACharacter* TheCharacter)
{
	UChildActorComponent* ChildActor = NewObject<UChildActorComponent>(TheCharacter);
	ChildActor->ComponentTags.Add("Equipment");
	ChildActor->SetChildActorClass(ChildActorClass.Get());
	ChildActor->RegisterComponent();
	ChildActor->AttachToComponent(TheCharacter->GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, SocketName);
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "Attaching"+ItemName.ToString());
}



void UPDA_Consumable::NativeOnUseItem_Implementation(ACharacter* Character)
{
	Super::NativeOnUseItem_Implementation(Character);
	FStreamableManager& AssetLoader = UAssetManager::GetStreamableManager();
	AssetLoader.RequestAsyncLoad(EffectClass.ToSoftObjectPath(), FStreamableDelegate::CreateUObject(this, &UPDA_Consumable::OnEffectObjectLoaded, Character));
}

void UPDA_Consumable::OnEffectObjectLoaded(ACharacter* TheCharacter)
{
	AItemEffectBase* Effect = NewObject<AItemEffectBase>(TheCharacter, EffectClass.Get());	
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "Creating Effect for"+ItemName.ToString());
	//spawn actor from class
	Effect->SetInstigator(TheCharacter);
	Effect->SetActorLocation(TheCharacter->GetActorLocation());
	Effect->SetActorRotation(TheCharacter->GetActorRotation());
	Effect->SetActorScale3D(FVector(1.0f));
	Effect->FinishSpawning(FTransform(TheCharacter->GetActorRotation(), TheCharacter->GetActorLocation()));
	Effect->ApplyEffect(TheCharacter);
}

void AItemEffectBase::ApplyEffect_Implementation(ACharacter* Character)
{
	OnEffectUsedDelegate.Broadcast();
}