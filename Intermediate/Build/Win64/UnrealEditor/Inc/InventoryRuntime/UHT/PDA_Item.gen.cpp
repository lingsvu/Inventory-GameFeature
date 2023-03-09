// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryRuntime/Public/PDA_Item.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePDA_Item() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	INVENTORYRUNTIME_API UClass* Z_Construct_UClass_AItemEffectBase();
	INVENTORYRUNTIME_API UClass* Z_Construct_UClass_AItemEffectBase_NoRegister();
	INVENTORYRUNTIME_API UClass* Z_Construct_UClass_UPDA_ChildActorEquipment();
	INVENTORYRUNTIME_API UClass* Z_Construct_UClass_UPDA_ChildActorEquipment_NoRegister();
	INVENTORYRUNTIME_API UClass* Z_Construct_UClass_UPDA_Consumable();
	INVENTORYRUNTIME_API UClass* Z_Construct_UClass_UPDA_Consumable_NoRegister();
	INVENTORYRUNTIME_API UClass* Z_Construct_UClass_UPDA_Item();
	INVENTORYRUNTIME_API UClass* Z_Construct_UClass_UPDA_Item_NoRegister();
	INVENTORYRUNTIME_API UClass* Z_Construct_UClass_UPDA_SkeletalMeshEquipment();
	INVENTORYRUNTIME_API UClass* Z_Construct_UClass_UPDA_SkeletalMeshEquipment_NoRegister();
	INVENTORYRUNTIME_API UClass* Z_Construct_UClass_UPDA_StaticMeshEquipment();
	INVENTORYRUNTIME_API UClass* Z_Construct_UClass_UPDA_StaticMeshEquipment_NoRegister();
	INVENTORYRUNTIME_API UEnum* Z_Construct_UEnum_InventoryRuntime_ECharacterType();
	INVENTORYRUNTIME_API UEnum* Z_Construct_UEnum_InventoryRuntime_EEquipmentSlot();
	INVENTORYRUNTIME_API UEnum* Z_Construct_UEnum_InventoryRuntime_EItemType();
	INVENTORYRUNTIME_API UFunction* Z_Construct_UDelegateFunction_AItemEffectBase_OnEffectUsed__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_InventoryRuntime();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECharacterType;
	static UEnum* ECharacterType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECharacterType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECharacterType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InventoryRuntime_ECharacterType, Z_Construct_UPackage__Script_InventoryRuntime(), TEXT("ECharacterType"));
		}
		return Z_Registration_Info_UEnum_ECharacterType.OuterSingleton;
	}
	template<> INVENTORYRUNTIME_API UEnum* StaticEnum<ECharacterType>()
	{
		return ECharacterType_StaticEnum();
	}
	struct Z_Construct_UEnum_InventoryRuntime_ECharacterType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_InventoryRuntime_ECharacterType_Statics::Enumerators[] = {
		{ "ECharacterType::CT_Any", (int64)ECharacterType::CT_Any },
		{ "ECharacterType::CT_HumanMale", (int64)ECharacterType::CT_HumanMale },
		{ "ECharacterType::CT_HumanFeMale", (int64)ECharacterType::CT_HumanFeMale },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_InventoryRuntime_ECharacterType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CT_Any.DisplayName", "Any" },
		{ "CT_Any.Name", "ECharacterType::CT_Any" },
		{ "CT_HumanFeMale.DisplayName", "HumanFemale" },
		{ "CT_HumanFeMale.Name", "ECharacterType::CT_HumanFeMale" },
		{ "CT_HumanMale.DisplayName", "HumanMale" },
		{ "CT_HumanMale.Name", "ECharacterType::CT_HumanMale" },
		{ "ModuleRelativePath", "Public/PDA_Item.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InventoryRuntime_ECharacterType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_InventoryRuntime,
		nullptr,
		"ECharacterType",
		"ECharacterType",
		Z_Construct_UEnum_InventoryRuntime_ECharacterType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_InventoryRuntime_ECharacterType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_InventoryRuntime_ECharacterType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_InventoryRuntime_ECharacterType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_InventoryRuntime_ECharacterType()
	{
		if (!Z_Registration_Info_UEnum_ECharacterType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECharacterType.InnerSingleton, Z_Construct_UEnum_InventoryRuntime_ECharacterType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECharacterType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEquipmentSlot;
	static UEnum* EEquipmentSlot_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEquipmentSlot.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEquipmentSlot.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InventoryRuntime_EEquipmentSlot, Z_Construct_UPackage__Script_InventoryRuntime(), TEXT("EEquipmentSlot"));
		}
		return Z_Registration_Info_UEnum_EEquipmentSlot.OuterSingleton;
	}
	template<> INVENTORYRUNTIME_API UEnum* StaticEnum<EEquipmentSlot>()
	{
		return EEquipmentSlot_StaticEnum();
	}
	struct Z_Construct_UEnum_InventoryRuntime_EEquipmentSlot_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_InventoryRuntime_EEquipmentSlot_Statics::Enumerators[] = {
		{ "EEquipmentSlot::ES_Head", (int64)EEquipmentSlot::ES_Head },
		{ "EEquipmentSlot::ES_Torso", (int64)EEquipmentSlot::ES_Torso },
		{ "EEquipmentSlot::ES_Legs", (int64)EEquipmentSlot::ES_Legs },
		{ "EEquipmentSlot::ES_Feet", (int64)EEquipmentSlot::ES_Feet },
		{ "EEquipmentSlot::ES_Hands", (int64)EEquipmentSlot::ES_Hands },
		{ "EEquipmentSlot::ES_Weapon", (int64)EEquipmentSlot::ES_Weapon },
		{ "EEquipmentSlot::ES_Accessory", (int64)EEquipmentSlot::ES_Accessory },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_InventoryRuntime_EEquipmentSlot_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ES_Accessory.DisplayName", "Accessory" },
		{ "ES_Accessory.Name", "EEquipmentSlot::ES_Accessory" },
		{ "ES_Feet.DisplayName", "Feet" },
		{ "ES_Feet.Name", "EEquipmentSlot::ES_Feet" },
		{ "ES_Hands.DisplayName", "Hands" },
		{ "ES_Hands.Name", "EEquipmentSlot::ES_Hands" },
		{ "ES_Head.DisplayName", "Head" },
		{ "ES_Head.Name", "EEquipmentSlot::ES_Head" },
		{ "ES_Legs.DisplayName", "Legs" },
		{ "ES_Legs.Name", "EEquipmentSlot::ES_Legs" },
		{ "ES_Torso.DisplayName", "Torso" },
		{ "ES_Torso.Name", "EEquipmentSlot::ES_Torso" },
		{ "ES_Weapon.DisplayName", "Weapon" },
		{ "ES_Weapon.Name", "EEquipmentSlot::ES_Weapon" },
		{ "ModuleRelativePath", "Public/PDA_Item.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InventoryRuntime_EEquipmentSlot_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_InventoryRuntime,
		nullptr,
		"EEquipmentSlot",
		"EEquipmentSlot",
		Z_Construct_UEnum_InventoryRuntime_EEquipmentSlot_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_InventoryRuntime_EEquipmentSlot_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_InventoryRuntime_EEquipmentSlot_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_InventoryRuntime_EEquipmentSlot_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_InventoryRuntime_EEquipmentSlot()
	{
		if (!Z_Registration_Info_UEnum_EEquipmentSlot.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEquipmentSlot.InnerSingleton, Z_Construct_UEnum_InventoryRuntime_EEquipmentSlot_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEquipmentSlot.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EItemType;
	static UEnum* EItemType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EItemType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EItemType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InventoryRuntime_EItemType, Z_Construct_UPackage__Script_InventoryRuntime(), TEXT("EItemType"));
		}
		return Z_Registration_Info_UEnum_EItemType.OuterSingleton;
	}
	template<> INVENTORYRUNTIME_API UEnum* StaticEnum<EItemType>()
	{
		return EItemType_StaticEnum();
	}
	struct Z_Construct_UEnum_InventoryRuntime_EItemType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_InventoryRuntime_EItemType_Statics::Enumerators[] = {
		{ "EItemType::IT_None", (int64)EItemType::IT_None },
		{ "EItemType::IT_SkeletalMeshEquipment", (int64)EItemType::IT_SkeletalMeshEquipment },
		{ "EItemType::IT_StaticMeshEquipment", (int64)EItemType::IT_StaticMeshEquipment },
		{ "EItemType::IT_ChildActorEquipment", (int64)EItemType::IT_ChildActorEquipment },
		{ "EItemType::IT_Consumable", (int64)EItemType::IT_Consumable },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_InventoryRuntime_EItemType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IT_ChildActorEquipment.DisplayName", "ChildActorEquipment" },
		{ "IT_ChildActorEquipment.Name", "EItemType::IT_ChildActorEquipment" },
		{ "IT_Consumable.DisplayName", "Consumable" },
		{ "IT_Consumable.Name", "EItemType::IT_Consumable" },
		{ "IT_None.DisplayName", "None" },
		{ "IT_None.Name", "EItemType::IT_None" },
		{ "IT_SkeletalMeshEquipment.DisplayName", "SkeletalMeshEquipment" },
		{ "IT_SkeletalMeshEquipment.Name", "EItemType::IT_SkeletalMeshEquipment" },
		{ "IT_StaticMeshEquipment.DisplayName", "StaticMeshEquipment" },
		{ "IT_StaticMeshEquipment.Name", "EItemType::IT_StaticMeshEquipment" },
		{ "ModuleRelativePath", "Public/PDA_Item.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InventoryRuntime_EItemType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_InventoryRuntime,
		nullptr,
		"EItemType",
		"EItemType",
		Z_Construct_UEnum_InventoryRuntime_EItemType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_InventoryRuntime_EItemType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_InventoryRuntime_EItemType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_InventoryRuntime_EItemType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_InventoryRuntime_EItemType()
	{
		if (!Z_Registration_Info_UEnum_EItemType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EItemType.InnerSingleton, Z_Construct_UEnum_InventoryRuntime_EItemType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EItemType.InnerSingleton;
	}
	DEFINE_FUNCTION(UPDA_Item::execNativeOnUseItem)
	{
		P_GET_OBJECT(ACharacter,Z_Param_Character);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativeOnUseItem_Implementation(Z_Param_Character);
		P_NATIVE_END;
	}
	struct PDA_Item_eventNativeOnUseItem_Parms
	{
		ACharacter* Character;
	};
	static FName NAME_UPDA_Item_NativeOnUseItem = FName(TEXT("NativeOnUseItem"));
	void UPDA_Item::NativeOnUseItem(ACharacter* Character)
	{
		PDA_Item_eventNativeOnUseItem_Parms Parms;
		Parms.Character=Character;
		ProcessEvent(FindFunctionChecked(NAME_UPDA_Item_NativeOnUseItem),&Parms);
	}
	void UPDA_Item::StaticRegisterNativesUPDA_Item()
	{
		UClass* Class = UPDA_Item::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "NativeOnUseItem", &UPDA_Item::execNativeOnUseItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPDA_Item_NativeOnUseItem_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPDA_Item_NativeOnUseItem_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PDA_Item_eventNativeOnUseItem_Parms, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPDA_Item_NativeOnUseItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPDA_Item_NativeOnUseItem_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPDA_Item_NativeOnUseItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory Item" },
		{ "ModuleRelativePath", "Public/PDA_Item.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPDA_Item_NativeOnUseItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPDA_Item, nullptr, "NativeOnUseItem", nullptr, nullptr, sizeof(PDA_Item_eventNativeOnUseItem_Parms), Z_Construct_UFunction_UPDA_Item_NativeOnUseItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDA_Item_NativeOnUseItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPDA_Item_NativeOnUseItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPDA_Item_NativeOnUseItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPDA_Item_NativeOnUseItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPDA_Item_NativeOnUseItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPDA_Item);
	UClass* Z_Construct_UClass_UPDA_Item_NoRegister()
	{
		return UPDA_Item::StaticClass();
	}
	struct Z_Construct_UClass_UPDA_Item_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ItemName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CanStack_MetaData[];
#endif
		static void NewProp_CanStack_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CanStack;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ItemType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ItemType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Icon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemDescription_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ItemDescription;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CompatibleCharacterType_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CompatibleCharacterType_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompatibleCharacterType_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CompatibleCharacterType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPDA_Item_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_InventoryRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPDA_Item_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPDA_Item_NativeOnUseItem, "NativeOnUseItem" }, // 142250158
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPDA_Item_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PDA_Item.h" },
		{ "ModuleRelativePath", "Public/PDA_Item.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPDA_Item_Statics::NewProp_ItemName_MetaData[] = {
		{ "Category", "Inventory Item" },
		{ "ModuleRelativePath", "Public/PDA_Item.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UPDA_Item_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPDA_Item, ItemName), METADATA_PARAMS(Z_Construct_UClass_UPDA_Item_Statics::NewProp_ItemName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPDA_Item_Statics::NewProp_ItemName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPDA_Item_Statics::NewProp_CanStack_MetaData[] = {
		{ "Category", "Inventory Item" },
		{ "ModuleRelativePath", "Public/PDA_Item.h" },
	};
#endif
	void Z_Construct_UClass_UPDA_Item_Statics::NewProp_CanStack_SetBit(void* Obj)
	{
		((UPDA_Item*)Obj)->CanStack = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPDA_Item_Statics::NewProp_CanStack = { "CanStack", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPDA_Item), &Z_Construct_UClass_UPDA_Item_Statics::NewProp_CanStack_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPDA_Item_Statics::NewProp_CanStack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPDA_Item_Statics::NewProp_CanStack_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPDA_Item_Statics::NewProp_ItemType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPDA_Item_Statics::NewProp_ItemType_MetaData[] = {
		{ "Category", "Inventory Item" },
		{ "ModuleRelativePath", "Public/PDA_Item.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPDA_Item_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPDA_Item, ItemType), Z_Construct_UEnum_InventoryRuntime_EItemType, METADATA_PARAMS(Z_Construct_UClass_UPDA_Item_Statics::NewProp_ItemType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPDA_Item_Statics::NewProp_ItemType_MetaData)) }; // 2580224966
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPDA_Item_Statics::NewProp_Icon_MetaData[] = {
		{ "Category", "Inventory Item" },
		{ "ModuleRelativePath", "Public/PDA_Item.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UPDA_Item_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPDA_Item, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPDA_Item_Statics::NewProp_Icon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPDA_Item_Statics::NewProp_Icon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPDA_Item_Statics::NewProp_ItemDescription_MetaData[] = {
		{ "Category", "Inventory Item" },
		{ "ModuleRelativePath", "Public/PDA_Item.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPDA_Item_Statics::NewProp_ItemDescription = { "ItemDescription", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPDA_Item, ItemDescription), METADATA_PARAMS(Z_Construct_UClass_UPDA_Item_Statics::NewProp_ItemDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPDA_Item_Statics::NewProp_ItemDescription_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPDA_Item_Statics::NewProp_CompatibleCharacterType_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPDA_Item_Statics::NewProp_CompatibleCharacterType_Inner = { "CompatibleCharacterType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_InventoryRuntime_ECharacterType, METADATA_PARAMS(nullptr, 0) }; // 3982752335
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPDA_Item_Statics::NewProp_CompatibleCharacterType_MetaData[] = {
		{ "Category", "Inventory Item" },
		{ "ModuleRelativePath", "Public/PDA_Item.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPDA_Item_Statics::NewProp_CompatibleCharacterType = { "CompatibleCharacterType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPDA_Item, CompatibleCharacterType), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPDA_Item_Statics::NewProp_CompatibleCharacterType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPDA_Item_Statics::NewProp_CompatibleCharacterType_MetaData)) }; // 3982752335
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPDA_Item_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Inventory Item" },
		{ "ModuleRelativePath", "Public/PDA_Item.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UPDA_Item_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPDA_Item, Value), METADATA_PARAMS(Z_Construct_UClass_UPDA_Item_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPDA_Item_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPDA_Item_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPDA_Item_Statics::NewProp_ItemName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPDA_Item_Statics::NewProp_CanStack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPDA_Item_Statics::NewProp_ItemType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPDA_Item_Statics::NewProp_ItemType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPDA_Item_Statics::NewProp_Icon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPDA_Item_Statics::NewProp_ItemDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPDA_Item_Statics::NewProp_CompatibleCharacterType_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPDA_Item_Statics::NewProp_CompatibleCharacterType_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPDA_Item_Statics::NewProp_CompatibleCharacterType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPDA_Item_Statics::NewProp_Value,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPDA_Item_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPDA_Item>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPDA_Item_Statics::ClassParams = {
		&UPDA_Item::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPDA_Item_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPDA_Item_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPDA_Item_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPDA_Item_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPDA_Item()
	{
		if (!Z_Registration_Info_UClass_UPDA_Item.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPDA_Item.OuterSingleton, Z_Construct_UClass_UPDA_Item_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPDA_Item.OuterSingleton;
	}
	template<> INVENTORYRUNTIME_API UClass* StaticClass<UPDA_Item>()
	{
		return UPDA_Item::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPDA_Item);
	UPDA_Item::~UPDA_Item() {}
	void UPDA_SkeletalMeshEquipment::StaticRegisterNativesUPDA_SkeletalMeshEquipment()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPDA_SkeletalMeshEquipment);
	UClass* Z_Construct_UClass_UPDA_SkeletalMeshEquipment_NoRegister()
	{
		return UPDA_SkeletalMeshEquipment::StaticClass();
	}
	struct Z_Construct_UClass_UPDA_SkeletalMeshEquipment_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_EquipmentSlot_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EquipmentSlot_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentSlot_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EquipmentSlot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimInstanceClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_AnimInstanceClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPDA_SkeletalMeshEquipment_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPDA_Item,
		(UObject* (*)())Z_Construct_UPackage__Script_InventoryRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPDA_SkeletalMeshEquipment_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PDA_Item.h" },
		{ "ModuleRelativePath", "Public/PDA_Item.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPDA_SkeletalMeshEquipment_Statics::NewProp_EquipmentSlot_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPDA_SkeletalMeshEquipment_Statics::NewProp_EquipmentSlot_Inner = { "EquipmentSlot", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_InventoryRuntime_EEquipmentSlot, METADATA_PARAMS(nullptr, 0) }; // 3540768841
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPDA_SkeletalMeshEquipment_Statics::NewProp_EquipmentSlot_MetaData[] = {
		{ "Category", "Inventory Item" },
		{ "ModuleRelativePath", "Public/PDA_Item.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPDA_SkeletalMeshEquipment_Statics::NewProp_EquipmentSlot = { "EquipmentSlot", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPDA_SkeletalMeshEquipment, EquipmentSlot), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPDA_SkeletalMeshEquipment_Statics::NewProp_EquipmentSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPDA_SkeletalMeshEquipment_Statics::NewProp_EquipmentSlot_MetaData)) }; // 3540768841
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPDA_SkeletalMeshEquipment_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "Inventory Item" },
		{ "ModuleRelativePath", "Public/PDA_Item.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UPDA_SkeletalMeshEquipment_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPDA_SkeletalMeshEquipment, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPDA_SkeletalMeshEquipment_Statics::NewProp_SkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPDA_SkeletalMeshEquipment_Statics::NewProp_SkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPDA_SkeletalMeshEquipment_Statics::NewProp_SocketName_MetaData[] = {
		{ "Category", "Inventory Item" },
		{ "ModuleRelativePath", "Public/PDA_Item.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPDA_SkeletalMeshEquipment_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPDA_SkeletalMeshEquipment, SocketName), METADATA_PARAMS(Z_Construct_UClass_UPDA_SkeletalMeshEquipment_Statics::NewProp_SocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPDA_SkeletalMeshEquipment_Statics::NewProp_SocketName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPDA_SkeletalMeshEquipment_Statics::NewProp_AnimInstanceClass_MetaData[] = {
		{ "Category", "Inventory Item" },
		{ "ModuleRelativePath", "Public/PDA_Item.h" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UPDA_SkeletalMeshEquipment_Statics::NewProp_AnimInstanceClass = { "AnimInstanceClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPDA_SkeletalMeshEquipment, AnimInstanceClass), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPDA_SkeletalMeshEquipment_Statics::NewProp_AnimInstanceClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPDA_SkeletalMeshEquipment_Statics::NewProp_AnimInstanceClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPDA_SkeletalMeshEquipment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPDA_SkeletalMeshEquipment_Statics::NewProp_EquipmentSlot_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPDA_SkeletalMeshEquipment_Statics::NewProp_EquipmentSlot_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPDA_SkeletalMeshEquipment_Statics::NewProp_EquipmentSlot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPDA_SkeletalMeshEquipment_Statics::NewProp_SkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPDA_SkeletalMeshEquipment_Statics::NewProp_SocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPDA_SkeletalMeshEquipment_Statics::NewProp_AnimInstanceClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPDA_SkeletalMeshEquipment_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPDA_SkeletalMeshEquipment>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPDA_SkeletalMeshEquipment_Statics::ClassParams = {
		&UPDA_SkeletalMeshEquipment::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPDA_SkeletalMeshEquipment_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPDA_SkeletalMeshEquipment_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPDA_SkeletalMeshEquipment_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPDA_SkeletalMeshEquipment_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPDA_SkeletalMeshEquipment()
	{
		if (!Z_Registration_Info_UClass_UPDA_SkeletalMeshEquipment.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPDA_SkeletalMeshEquipment.OuterSingleton, Z_Construct_UClass_UPDA_SkeletalMeshEquipment_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPDA_SkeletalMeshEquipment.OuterSingleton;
	}
	template<> INVENTORYRUNTIME_API UClass* StaticClass<UPDA_SkeletalMeshEquipment>()
	{
		return UPDA_SkeletalMeshEquipment::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPDA_SkeletalMeshEquipment);
	UPDA_SkeletalMeshEquipment::~UPDA_SkeletalMeshEquipment() {}
	void UPDA_StaticMeshEquipment::StaticRegisterNativesUPDA_StaticMeshEquipment()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPDA_StaticMeshEquipment);
	UClass* Z_Construct_UClass_UPDA_StaticMeshEquipment_NoRegister()
	{
		return UPDA_StaticMeshEquipment::StaticClass();
	}
	struct Z_Construct_UClass_UPDA_StaticMeshEquipment_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_EquipmentSlot_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EquipmentSlot_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentSlot_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EquipmentSlot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPDA_StaticMeshEquipment_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPDA_Item,
		(UObject* (*)())Z_Construct_UPackage__Script_InventoryRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPDA_StaticMeshEquipment_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PDA_Item.h" },
		{ "ModuleRelativePath", "Public/PDA_Item.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPDA_StaticMeshEquipment_Statics::NewProp_EquipmentSlot_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPDA_StaticMeshEquipment_Statics::NewProp_EquipmentSlot_Inner = { "EquipmentSlot", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_InventoryRuntime_EEquipmentSlot, METADATA_PARAMS(nullptr, 0) }; // 3540768841
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPDA_StaticMeshEquipment_Statics::NewProp_EquipmentSlot_MetaData[] = {
		{ "Category", "Inventory Item" },
		{ "ModuleRelativePath", "Public/PDA_Item.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPDA_StaticMeshEquipment_Statics::NewProp_EquipmentSlot = { "EquipmentSlot", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPDA_StaticMeshEquipment, EquipmentSlot), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPDA_StaticMeshEquipment_Statics::NewProp_EquipmentSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPDA_StaticMeshEquipment_Statics::NewProp_EquipmentSlot_MetaData)) }; // 3540768841
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPDA_StaticMeshEquipment_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "Inventory Item" },
		{ "ModuleRelativePath", "Public/PDA_Item.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UPDA_StaticMeshEquipment_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPDA_StaticMeshEquipment, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPDA_StaticMeshEquipment_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPDA_StaticMeshEquipment_Statics::NewProp_StaticMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPDA_StaticMeshEquipment_Statics::NewProp_SocketName_MetaData[] = {
		{ "Category", "Inventory Item" },
		{ "ModuleRelativePath", "Public/PDA_Item.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPDA_StaticMeshEquipment_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPDA_StaticMeshEquipment, SocketName), METADATA_PARAMS(Z_Construct_UClass_UPDA_StaticMeshEquipment_Statics::NewProp_SocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPDA_StaticMeshEquipment_Statics::NewProp_SocketName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPDA_StaticMeshEquipment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPDA_StaticMeshEquipment_Statics::NewProp_EquipmentSlot_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPDA_StaticMeshEquipment_Statics::NewProp_EquipmentSlot_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPDA_StaticMeshEquipment_Statics::NewProp_EquipmentSlot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPDA_StaticMeshEquipment_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPDA_StaticMeshEquipment_Statics::NewProp_SocketName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPDA_StaticMeshEquipment_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPDA_StaticMeshEquipment>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPDA_StaticMeshEquipment_Statics::ClassParams = {
		&UPDA_StaticMeshEquipment::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPDA_StaticMeshEquipment_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPDA_StaticMeshEquipment_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPDA_StaticMeshEquipment_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPDA_StaticMeshEquipment_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPDA_StaticMeshEquipment()
	{
		if (!Z_Registration_Info_UClass_UPDA_StaticMeshEquipment.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPDA_StaticMeshEquipment.OuterSingleton, Z_Construct_UClass_UPDA_StaticMeshEquipment_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPDA_StaticMeshEquipment.OuterSingleton;
	}
	template<> INVENTORYRUNTIME_API UClass* StaticClass<UPDA_StaticMeshEquipment>()
	{
		return UPDA_StaticMeshEquipment::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPDA_StaticMeshEquipment);
	UPDA_StaticMeshEquipment::~UPDA_StaticMeshEquipment() {}
	void UPDA_ChildActorEquipment::StaticRegisterNativesUPDA_ChildActorEquipment()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPDA_ChildActorEquipment);
	UClass* Z_Construct_UClass_UPDA_ChildActorEquipment_NoRegister()
	{
		return UPDA_ChildActorEquipment::StaticClass();
	}
	struct Z_Construct_UClass_UPDA_ChildActorEquipment_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_EquipmentSlot_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EquipmentSlot_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentSlot_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EquipmentSlot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildActorClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_ChildActorClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPDA_ChildActorEquipment_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPDA_Item,
		(UObject* (*)())Z_Construct_UPackage__Script_InventoryRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPDA_ChildActorEquipment_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PDA_Item.h" },
		{ "ModuleRelativePath", "Public/PDA_Item.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPDA_ChildActorEquipment_Statics::NewProp_EquipmentSlot_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPDA_ChildActorEquipment_Statics::NewProp_EquipmentSlot_Inner = { "EquipmentSlot", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_InventoryRuntime_EEquipmentSlot, METADATA_PARAMS(nullptr, 0) }; // 3540768841
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPDA_ChildActorEquipment_Statics::NewProp_EquipmentSlot_MetaData[] = {
		{ "Category", "Inventory Item" },
		{ "ModuleRelativePath", "Public/PDA_Item.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPDA_ChildActorEquipment_Statics::NewProp_EquipmentSlot = { "EquipmentSlot", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPDA_ChildActorEquipment, EquipmentSlot), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPDA_ChildActorEquipment_Statics::NewProp_EquipmentSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPDA_ChildActorEquipment_Statics::NewProp_EquipmentSlot_MetaData)) }; // 3540768841
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPDA_ChildActorEquipment_Statics::NewProp_ChildActorClass_MetaData[] = {
		{ "Category", "Inventory Item" },
		{ "ModuleRelativePath", "Public/PDA_Item.h" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UPDA_ChildActorEquipment_Statics::NewProp_ChildActorClass = { "ChildActorClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPDA_ChildActorEquipment, ChildActorClass), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPDA_ChildActorEquipment_Statics::NewProp_ChildActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPDA_ChildActorEquipment_Statics::NewProp_ChildActorClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPDA_ChildActorEquipment_Statics::NewProp_SocketName_MetaData[] = {
		{ "Category", "Inventory Item" },
		{ "ModuleRelativePath", "Public/PDA_Item.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPDA_ChildActorEquipment_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPDA_ChildActorEquipment, SocketName), METADATA_PARAMS(Z_Construct_UClass_UPDA_ChildActorEquipment_Statics::NewProp_SocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPDA_ChildActorEquipment_Statics::NewProp_SocketName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPDA_ChildActorEquipment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPDA_ChildActorEquipment_Statics::NewProp_EquipmentSlot_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPDA_ChildActorEquipment_Statics::NewProp_EquipmentSlot_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPDA_ChildActorEquipment_Statics::NewProp_EquipmentSlot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPDA_ChildActorEquipment_Statics::NewProp_ChildActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPDA_ChildActorEquipment_Statics::NewProp_SocketName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPDA_ChildActorEquipment_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPDA_ChildActorEquipment>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPDA_ChildActorEquipment_Statics::ClassParams = {
		&UPDA_ChildActorEquipment::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPDA_ChildActorEquipment_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPDA_ChildActorEquipment_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPDA_ChildActorEquipment_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPDA_ChildActorEquipment_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPDA_ChildActorEquipment()
	{
		if (!Z_Registration_Info_UClass_UPDA_ChildActorEquipment.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPDA_ChildActorEquipment.OuterSingleton, Z_Construct_UClass_UPDA_ChildActorEquipment_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPDA_ChildActorEquipment.OuterSingleton;
	}
	template<> INVENTORYRUNTIME_API UClass* StaticClass<UPDA_ChildActorEquipment>()
	{
		return UPDA_ChildActorEquipment::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPDA_ChildActorEquipment);
	UPDA_ChildActorEquipment::~UPDA_ChildActorEquipment() {}
	struct Z_Construct_UDelegateFunction_AItemEffectBase_OnEffectUsed__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AItemEffectBase_OnEffectUsed__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PDA_Item.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AItemEffectBase_OnEffectUsed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItemEffectBase, nullptr, "OnEffectUsed__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AItemEffectBase_OnEffectUsed__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AItemEffectBase_OnEffectUsed__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AItemEffectBase_OnEffectUsed__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AItemEffectBase_OnEffectUsed__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(AItemEffectBase::execApplyEffect)
	{
		P_GET_OBJECT(ACharacter,Z_Param_Character);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyEffect_Implementation(Z_Param_Character);
		P_NATIVE_END;
	}
	struct ItemEffectBase_eventApplyEffect_Parms
	{
		ACharacter* Character;
	};
	static FName NAME_AItemEffectBase_ApplyEffect = FName(TEXT("ApplyEffect"));
	void AItemEffectBase::ApplyEffect(ACharacter* Character)
	{
		ItemEffectBase_eventApplyEffect_Parms Parms;
		Parms.Character=Character;
		ProcessEvent(FindFunctionChecked(NAME_AItemEffectBase_ApplyEffect),&Parms);
	}
	void AItemEffectBase::StaticRegisterNativesAItemEffectBase()
	{
		UClass* Class = AItemEffectBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyEffect", &AItemEffectBase::execApplyEffect },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AItemEffectBase_ApplyEffect_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AItemEffectBase_ApplyEffect_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ItemEffectBase_eventApplyEffect_Parms, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItemEffectBase_ApplyEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItemEffectBase_ApplyEffect_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItemEffectBase_ApplyEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory Item" },
		{ "ModuleRelativePath", "Public/PDA_Item.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AItemEffectBase_ApplyEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItemEffectBase, nullptr, "ApplyEffect", nullptr, nullptr, sizeof(ItemEffectBase_eventApplyEffect_Parms), Z_Construct_UFunction_AItemEffectBase_ApplyEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AItemEffectBase_ApplyEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AItemEffectBase_ApplyEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AItemEffectBase_ApplyEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AItemEffectBase_ApplyEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AItemEffectBase_ApplyEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AItemEffectBase);
	UClass* Z_Construct_UClass_AItemEffectBase_NoRegister()
	{
		return AItemEffectBase::StaticClass();
	}
	struct Z_Construct_UClass_AItemEffectBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnEffectUsedDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEffectUsedDelegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AItemEffectBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_InventoryRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AItemEffectBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AItemEffectBase_ApplyEffect, "ApplyEffect" }, // 2911786959
		{ &Z_Construct_UDelegateFunction_AItemEffectBase_OnEffectUsed__DelegateSignature, "OnEffectUsed__DelegateSignature" }, // 2611271379
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemEffectBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PDA_Item.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PDA_Item.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemEffectBase_Statics::NewProp_OnEffectUsedDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/PDA_Item.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AItemEffectBase_Statics::NewProp_OnEffectUsedDelegate = { "OnEffectUsedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AItemEffectBase, OnEffectUsedDelegate), Z_Construct_UDelegateFunction_AItemEffectBase_OnEffectUsed__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AItemEffectBase_Statics::NewProp_OnEffectUsedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItemEffectBase_Statics::NewProp_OnEffectUsedDelegate_MetaData)) }; // 2611271379
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AItemEffectBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemEffectBase_Statics::NewProp_OnEffectUsedDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AItemEffectBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AItemEffectBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AItemEffectBase_Statics::ClassParams = {
		&AItemEffectBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AItemEffectBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AItemEffectBase_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AItemEffectBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AItemEffectBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AItemEffectBase()
	{
		if (!Z_Registration_Info_UClass_AItemEffectBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AItemEffectBase.OuterSingleton, Z_Construct_UClass_AItemEffectBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AItemEffectBase.OuterSingleton;
	}
	template<> INVENTORYRUNTIME_API UClass* StaticClass<AItemEffectBase>()
	{
		return AItemEffectBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AItemEffectBase);
	AItemEffectBase::~AItemEffectBase() {}
	void UPDA_Consumable::StaticRegisterNativesUPDA_Consumable()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPDA_Consumable);
	UClass* Z_Construct_UClass_UPDA_Consumable_NoRegister()
	{
		return UPDA_Consumable::StaticClass();
	}
	struct Z_Construct_UClass_UPDA_Consumable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_EffectClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPDA_Consumable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPDA_Item,
		(UObject* (*)())Z_Construct_UPackage__Script_InventoryRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPDA_Consumable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PDA_Item.h" },
		{ "ModuleRelativePath", "Public/PDA_Item.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPDA_Consumable_Statics::NewProp_EffectClass_MetaData[] = {
		{ "Category", "Inventory Item" },
		{ "ModuleRelativePath", "Public/PDA_Item.h" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UPDA_Consumable_Statics::NewProp_EffectClass = { "EffectClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPDA_Consumable, EffectClass), Z_Construct_UClass_AItemEffectBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPDA_Consumable_Statics::NewProp_EffectClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPDA_Consumable_Statics::NewProp_EffectClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPDA_Consumable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPDA_Consumable_Statics::NewProp_EffectClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPDA_Consumable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPDA_Consumable>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPDA_Consumable_Statics::ClassParams = {
		&UPDA_Consumable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPDA_Consumable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPDA_Consumable_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPDA_Consumable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPDA_Consumable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPDA_Consumable()
	{
		if (!Z_Registration_Info_UClass_UPDA_Consumable.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPDA_Consumable.OuterSingleton, Z_Construct_UClass_UPDA_Consumable_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPDA_Consumable.OuterSingleton;
	}
	template<> INVENTORYRUNTIME_API UClass* StaticClass<UPDA_Consumable>()
	{
		return UPDA_Consumable::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPDA_Consumable);
	UPDA_Consumable::~UPDA_Consumable() {}
	struct Z_CompiledInDeferFile_FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_PDA_Item_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_PDA_Item_h_Statics::EnumInfo[] = {
		{ ECharacterType_StaticEnum, TEXT("ECharacterType"), &Z_Registration_Info_UEnum_ECharacterType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3982752335U) },
		{ EEquipmentSlot_StaticEnum, TEXT("EEquipmentSlot"), &Z_Registration_Info_UEnum_EEquipmentSlot, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3540768841U) },
		{ EItemType_StaticEnum, TEXT("EItemType"), &Z_Registration_Info_UEnum_EItemType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2580224966U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_PDA_Item_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPDA_Item, UPDA_Item::StaticClass, TEXT("UPDA_Item"), &Z_Registration_Info_UClass_UPDA_Item, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPDA_Item), 940393846U) },
		{ Z_Construct_UClass_UPDA_SkeletalMeshEquipment, UPDA_SkeletalMeshEquipment::StaticClass, TEXT("UPDA_SkeletalMeshEquipment"), &Z_Registration_Info_UClass_UPDA_SkeletalMeshEquipment, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPDA_SkeletalMeshEquipment), 2848433633U) },
		{ Z_Construct_UClass_UPDA_StaticMeshEquipment, UPDA_StaticMeshEquipment::StaticClass, TEXT("UPDA_StaticMeshEquipment"), &Z_Registration_Info_UClass_UPDA_StaticMeshEquipment, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPDA_StaticMeshEquipment), 1853671829U) },
		{ Z_Construct_UClass_UPDA_ChildActorEquipment, UPDA_ChildActorEquipment::StaticClass, TEXT("UPDA_ChildActorEquipment"), &Z_Registration_Info_UClass_UPDA_ChildActorEquipment, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPDA_ChildActorEquipment), 787721329U) },
		{ Z_Construct_UClass_AItemEffectBase, AItemEffectBase::StaticClass, TEXT("AItemEffectBase"), &Z_Registration_Info_UClass_AItemEffectBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AItemEffectBase), 4088937489U) },
		{ Z_Construct_UClass_UPDA_Consumable, UPDA_Consumable::StaticClass, TEXT("UPDA_Consumable"), &Z_Registration_Info_UClass_UPDA_Consumable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPDA_Consumable), 2384751735U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_PDA_Item_h_1552439981(TEXT("/Script/InventoryRuntime"),
		Z_CompiledInDeferFile_FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_PDA_Item_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_PDA_Item_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_PDA_Item_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_PDA_Item_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
