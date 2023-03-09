// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryRuntime/Public/InventoryComponent.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	INVENTORYRUNTIME_API UClass* Z_Construct_UClass_UInventoryComponent();
	INVENTORYRUNTIME_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();
	INVENTORYRUNTIME_API UClass* Z_Construct_UClass_UInventoryItem();
	INVENTORYRUNTIME_API UClass* Z_Construct_UClass_UInventoryItem_NoRegister();
	INVENTORYRUNTIME_API UClass* Z_Construct_UClass_UPDA_Item_NoRegister();
	INVENTORYRUNTIME_API UClass* Z_Construct_UClass_UReplicatedObject();
	INVENTORYRUNTIME_API UClass* Z_Construct_UClass_UReplicatedObject_NoRegister();
	INVENTORYRUNTIME_API UEnum* Z_Construct_UEnum_InventoryRuntime_ECharacterType();
	INVENTORYRUNTIME_API UEnum* Z_Construct_UEnum_InventoryRuntime_EEquipmentSlot();
	INVENTORYRUNTIME_API UFunction* Z_Construct_UDelegateFunction_UInventoryComponent_ErrorMessage__DelegateSignature();
	INVENTORYRUNTIME_API UFunction* Z_Construct_UDelegateFunction_UInventoryComponent_OnInventoryUpdated__DelegateSignature();
	INVENTORYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FItemProperty();
	INVENTORYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSerializedInventoryItem();
	UPackage* Z_Construct_UPackage__Script_InventoryRuntime();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ItemProperty;
class UScriptStruct* FItemProperty::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ItemProperty.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ItemProperty.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemProperty, Z_Construct_UPackage__Script_InventoryRuntime(), TEXT("ItemProperty"));
	}
	return Z_Registration_Info_UScriptStruct_ItemProperty.OuterSingleton;
}
template<> INVENTORYRUNTIME_API UScriptStruct* StaticStruct<FItemProperty>()
{
	return FItemProperty::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FItemProperty_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemProperty_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FItemProperty_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemProperty>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemProperty_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InventoryRuntime,
		nullptr,
		&NewStructOps,
		"ItemProperty",
		sizeof(FItemProperty),
		alignof(FItemProperty),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FItemProperty_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemProperty_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FItemProperty()
	{
		if (!Z_Registration_Info_UScriptStruct_ItemProperty.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ItemProperty.InnerSingleton, Z_Construct_UScriptStruct_FItemProperty_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ItemProperty.InnerSingleton;
	}
	DEFINE_FUNCTION(UReplicatedObject::execDestroy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Destroy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReplicatedObject::execGetOwningActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetOwningActor();
		P_NATIVE_END;
	}
	void UReplicatedObject::StaticRegisterNativesUReplicatedObject()
	{
		UClass* Class = UReplicatedObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Destroy", &UReplicatedObject::execDestroy },
			{ "GetOwningActor", &UReplicatedObject::execGetOwningActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UReplicatedObject_Destroy_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReplicatedObject_Destroy_Statics::Function_MetaDataParams[] = {
		{ "Category", "My Object" },
		{ "Comment", "/*\n\x09* Optional\n\x09* Since this is a replicated object, typically only the Server should create and destroy these\n\x09* Provide a custom destroy function to ensure these conditions are met.\n\x09*/" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "ToolTip", "* Optional\n* Since this is a replicated object, typically only the Server should create and destroy these\n* Provide a custom destroy function to ensure these conditions are met." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplicatedObject_Destroy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReplicatedObject, nullptr, "Destroy", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReplicatedObject_Destroy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReplicatedObject_Destroy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReplicatedObject_Destroy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplicatedObject_Destroy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReplicatedObject_GetOwningActor_Statics
	{
		struct ReplicatedObject_eventGetOwningActor_Parms
		{
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReplicatedObject_GetOwningActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ReplicatedObject_eventGetOwningActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplicatedObject_GetOwningActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplicatedObject_GetOwningActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReplicatedObject_GetOwningActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "My Object" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplicatedObject_GetOwningActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReplicatedObject, nullptr, "GetOwningActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UReplicatedObject_GetOwningActor_Statics::ReplicatedObject_eventGetOwningActor_Parms), Z_Construct_UFunction_UReplicatedObject_GetOwningActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReplicatedObject_GetOwningActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReplicatedObject_GetOwningActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReplicatedObject_GetOwningActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReplicatedObject_GetOwningActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplicatedObject_GetOwningActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReplicatedObject);
	UClass* Z_Construct_UClass_UReplicatedObject_NoRegister()
	{
		return UReplicatedObject::StaticClass();
	}
	struct Z_Construct_UClass_UReplicatedObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReplicatedObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InventoryRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UReplicatedObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UReplicatedObject_Destroy, "Destroy" }, // 1980042410
		{ &Z_Construct_UFunction_UReplicatedObject_GetOwningActor, "GetOwningActor" }, // 135327901
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplicatedObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "//UObject class that support replication\n" },
		{ "IncludePath", "InventoryComponent.h" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "ToolTip", "UObject class that support replication" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReplicatedObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReplicatedObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReplicatedObject_Statics::ClassParams = {
		&UReplicatedObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UReplicatedObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReplicatedObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReplicatedObject()
	{
		if (!Z_Registration_Info_UClass_UReplicatedObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReplicatedObject.OuterSingleton, Z_Construct_UClass_UReplicatedObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReplicatedObject.OuterSingleton;
	}
	template<> INVENTORYRUNTIME_API UClass* StaticClass<UReplicatedObject>()
	{
		return UReplicatedObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReplicatedObject);
	UReplicatedObject::~UReplicatedObject() {}
	DEFINE_FUNCTION(UInventoryItem::execGetInventoryItem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UInventoryComponent**)Z_Param__Result=P_THIS->GetInventoryItem();
		P_NATIVE_END;
	}
	void UInventoryItem::StaticRegisterNativesUInventoryItem()
	{
		UClass* Class = UInventoryItem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetInventoryItem", &UInventoryItem::execGetInventoryItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInventoryItem_GetInventoryItem_Statics
	{
		struct InventoryItem_eventGetInventoryItem_Parms
		{
			UInventoryComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryItem_GetInventoryItem_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryItem_GetInventoryItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InventoryItem_eventGetInventoryItem_Parms, ReturnValue), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInventoryItem_GetInventoryItem_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryItem_GetInventoryItem_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryItem_GetInventoryItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryItem_GetInventoryItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryItem_GetInventoryItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryItem_GetInventoryItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryItem, nullptr, "GetInventoryItem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInventoryItem_GetInventoryItem_Statics::InventoryItem_eventGetInventoryItem_Parms), Z_Construct_UFunction_UInventoryItem_GetInventoryItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryItem_GetInventoryItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryItem_GetInventoryItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryItem_GetInventoryItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryItem_GetInventoryItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryItem_GetInventoryItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryItem);
	UClass* Z_Construct_UClass_UInventoryItem_NoRegister()
	{
		return UInventoryItem::StaticClass();
	}
	struct Z_Construct_UClass_UInventoryItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attributes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attributes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Attributes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentOwnerPrivate_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ComponentOwnerPrivate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInventoryItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UReplicatedObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InventoryRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInventoryItem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventoryItem_GetInventoryItem, "GetInventoryItem" }, // 1358226665
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryItem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "InventoryComponent.h" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryItem_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "InventoryItem" },
		{ "Comment", "//Delegate to call to Update the inventory UI\n" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "ToolTip", "Delegate to call to Update the inventory UI" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInventoryItem_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInventoryItem, Id), METADATA_PARAMS(Z_Construct_UClass_UInventoryItem_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryItem_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryItem_Statics::NewProp_ItemData_MetaData[] = {
		{ "Category", "InventoryItem" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryItem_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInventoryItem, ItemData), Z_Construct_UClass_UPDA_Item_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryItem_Statics::NewProp_ItemData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryItem_Statics::NewProp_ItemData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryItem_Statics::NewProp_Quantity_MetaData[] = {
		{ "Category", "InventoryItem" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInventoryItem_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInventoryItem, Quantity), METADATA_PARAMS(Z_Construct_UClass_UInventoryItem_Statics::NewProp_Quantity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryItem_Statics::NewProp_Quantity_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInventoryItem_Statics::NewProp_Attributes_Inner = { "Attributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FItemProperty, METADATA_PARAMS(nullptr, 0) }; // 3465316120
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryItem_Statics::NewProp_Attributes_MetaData[] = {
		{ "Category", "InventoryItem" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInventoryItem_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInventoryItem, Attributes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInventoryItem_Statics::NewProp_Attributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryItem_Statics::NewProp_Attributes_MetaData)) }; // 3465316120
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryItem_Statics::NewProp_ComponentOwnerPrivate_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryItem_Statics::NewProp_ComponentOwnerPrivate = { "ComponentOwnerPrivate", nullptr, (EPropertyFlags)0x0040000000080028, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInventoryItem, ComponentOwnerPrivate), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryItem_Statics::NewProp_ComponentOwnerPrivate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryItem_Statics::NewProp_ComponentOwnerPrivate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryItem_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryItem_Statics::NewProp_ItemData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryItem_Statics::NewProp_Quantity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryItem_Statics::NewProp_Attributes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryItem_Statics::NewProp_Attributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryItem_Statics::NewProp_ComponentOwnerPrivate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInventoryItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryItem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryItem_Statics::ClassParams = {
		&UInventoryItem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInventoryItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryItem_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInventoryItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInventoryItem()
	{
		if (!Z_Registration_Info_UClass_UInventoryItem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryItem.OuterSingleton, Z_Construct_UClass_UInventoryItem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInventoryItem.OuterSingleton;
	}
	template<> INVENTORYRUNTIME_API UClass* StaticClass<UInventoryItem>()
	{
		return UInventoryItem::StaticClass();
	}

	void UInventoryItem::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Id(TEXT("Id"));
		static const FName Name_ItemData(TEXT("ItemData"));
		static const FName Name_Quantity(TEXT("Quantity"));
		static const FName Name_Attributes(TEXT("Attributes"));
		static const FName Name_ComponentOwnerPrivate(TEXT("ComponentOwnerPrivate"));

		const bool bIsValid = true
			&& Name_Id == ClassReps[(int32)ENetFields_Private::Id].Property->GetFName()
			&& Name_ItemData == ClassReps[(int32)ENetFields_Private::ItemData].Property->GetFName()
			&& Name_Quantity == ClassReps[(int32)ENetFields_Private::Quantity].Property->GetFName()
			&& Name_Attributes == ClassReps[(int32)ENetFields_Private::Attributes].Property->GetFName()
			&& Name_ComponentOwnerPrivate == ClassReps[(int32)ENetFields_Private::ComponentOwnerPrivate].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UInventoryItem"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryItem);
	UInventoryItem::~UInventoryItem() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SerializedInventoryItem;
class UScriptStruct* FSerializedInventoryItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SerializedInventoryItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SerializedInventoryItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSerializedInventoryItem, Z_Construct_UPackage__Script_InventoryRuntime(), TEXT("SerializedInventoryItem"));
	}
	return Z_Registration_Info_UScriptStruct_SerializedInventoryItem.OuterSingleton;
}
template<> INVENTORYRUNTIME_API UScriptStruct* StaticStruct<FSerializedInventoryItem>()
{
	return FSerializedInventoryItem::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSerializedInventoryItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSerializedInventoryItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSerializedInventoryItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSerializedInventoryItem>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSerializedInventoryItem_Statics::NewProp_ItemData_MetaData[] = {
		{ "Category", "SerializedInventoryItem" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSerializedInventoryItem_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSerializedInventoryItem, ItemData), Z_Construct_UClass_UPDA_Item_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSerializedInventoryItem_Statics::NewProp_ItemData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSerializedInventoryItem_Statics::NewProp_ItemData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSerializedInventoryItem_Statics::NewProp_Quantity_MetaData[] = {
		{ "Category", "SerializedInventoryItem" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSerializedInventoryItem_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSerializedInventoryItem, Quantity), METADATA_PARAMS(Z_Construct_UScriptStruct_FSerializedInventoryItem_Statics::NewProp_Quantity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSerializedInventoryItem_Statics::NewProp_Quantity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSerializedInventoryItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSerializedInventoryItem_Statics::NewProp_ItemData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSerializedInventoryItem_Statics::NewProp_Quantity,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSerializedInventoryItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InventoryRuntime,
		nullptr,
		&NewStructOps,
		"SerializedInventoryItem",
		sizeof(FSerializedInventoryItem),
		alignof(FSerializedInventoryItem),
		Z_Construct_UScriptStruct_FSerializedInventoryItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSerializedInventoryItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSerializedInventoryItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSerializedInventoryItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSerializedInventoryItem()
	{
		if (!Z_Registration_Info_UScriptStruct_SerializedInventoryItem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SerializedInventoryItem.InnerSingleton, Z_Construct_UScriptStruct_FSerializedInventoryItem_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SerializedInventoryItem.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_UInventoryComponent_OnInventoryUpdated__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UInventoryComponent_OnInventoryUpdated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UInventoryComponent_OnInventoryUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "OnInventoryUpdated__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UInventoryComponent_OnInventoryUpdated__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UInventoryComponent_OnInventoryUpdated__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UInventoryComponent_OnInventoryUpdated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UInventoryComponent_OnInventoryUpdated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UInventoryComponent_ErrorMessage__DelegateSignature_Statics
	{
		struct InventoryComponent_eventErrorMessage_Parms
		{
			FString Message;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UInventoryComponent_ErrorMessage__DelegateSignature_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InventoryComponent_eventErrorMessage_Parms, Message), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UInventoryComponent_ErrorMessage__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UInventoryComponent_ErrorMessage__DelegateSignature_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UInventoryComponent_ErrorMessage__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UInventoryComponent_ErrorMessage__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "ErrorMessage__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UInventoryComponent_ErrorMessage__DelegateSignature_Statics::InventoryComponent_eventErrorMessage_Parms), Z_Construct_UDelegateFunction_UInventoryComponent_ErrorMessage__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UInventoryComponent_ErrorMessage__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UInventoryComponent_ErrorMessage__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UInventoryComponent_ErrorMessage__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UInventoryComponent_ErrorMessage__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UInventoryComponent_ErrorMessage__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UInventoryComponent::execServerUseConsumable)
	{
		P_GET_OBJECT(UInventoryItem,Z_Param_Item);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerUseConsumable_Implementation(Z_Param_Item);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execUIBroadcastInventoryUpdate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UIBroadcastInventoryUpdate_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execOnRep_Inventory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Inventory();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execOnRep_EquippedHands)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_EquippedHands();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execOnRep_EquippedFeet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_EquippedFeet();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execOnRep_EquippedLegs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_EquippedLegs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execOnrep_EquippedTorso)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Onrep_EquippedTorso();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execOnRep_EquippedHead)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_EquippedHead();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execOnRep_EquippedAccessory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_EquippedAccessory();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execOnRep_EquippedWeapon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_EquippedWeapon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execUnequipItem)
	{
		P_GET_OBJECT(UInventoryItem,Z_Param_ItemToUnEquip);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnequipItem(Z_Param_ItemToUnEquip);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execLoadSaveGameData)
	{
		P_GET_TARRAY(FSerializedInventoryItem,Z_Param_SerializedInventory);
		P_GET_PROPERTY(FIntProperty,Z_Param_EquippedWeaponIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_EquippedAccessoryIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_EquippedHeadIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_EquippedTorsoIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_EquippedLegsIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_EquippedFeetIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_EquippedHandsIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadSaveGameData(Z_Param_SerializedInventory,Z_Param_EquippedWeaponIndex,Z_Param_EquippedAccessoryIndex,Z_Param_EquippedHeadIndex,Z_Param_EquippedTorsoIndex,Z_Param_EquippedLegsIndex,Z_Param_EquippedFeetIndex,Z_Param_EquippedHandsIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execGetSerializedInventory)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_EquippedWeaponIndex);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_EquippedAccessoryIndex);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_EquippedHeadIndex);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_EquippedTorsoIndex);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_EquippedLegsIndex);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_EquippedFeetIndex);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_EquippedHandsIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FSerializedInventoryItem>*)Z_Param__Result=P_THIS->GetSerializedInventory(Z_Param_Out_EquippedWeaponIndex,Z_Param_Out_EquippedAccessoryIndex,Z_Param_Out_EquippedHeadIndex,Z_Param_Out_EquippedTorsoIndex,Z_Param_Out_EquippedLegsIndex,Z_Param_Out_EquippedFeetIndex,Z_Param_Out_EquippedHandsIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execAddNewItemToInventory)
	{
		P_GET_OBJECT(UPDA_Item,Z_Param_ItemData);
		P_GET_TARRAY(FItemProperty,Z_Param_Properties);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UInventoryItem**)Z_Param__Result=P_THIS->AddNewItemToInventory(Z_Param_ItemData,Z_Param_Properties);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execRemoveOtherMeshes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveOtherMeshes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execServerEquipItemToSlot)
	{
		P_GET_ENUM(EEquipmentSlot,Z_Param_Slot);
		P_GET_OBJECT(UInventoryItem,Z_Param_Item);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerEquipItemToSlot_Validate(EEquipmentSlot(Z_Param_Slot),Z_Param_Item))
		{
			RPC_ValidateFailed(TEXT("ServerEquipItemToSlot_Validate"));
			return;
		}
		P_THIS->ServerEquipItemToSlot_Implementation(EEquipmentSlot(Z_Param_Slot),Z_Param_Item);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execUseItem)
	{
		P_GET_OBJECT(UInventoryItem,Z_Param_Item);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UseItem(Z_Param_Item);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execServerRemoveItem)
	{
		P_GET_OBJECT(UInventoryItem,Z_Param_Item);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerRemoveItem_Implementation(Z_Param_Item);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execSetEquipmentInslot)
	{
		P_GET_ENUM_REF(EEquipmentSlot,Z_Param_Out_Slot);
		P_GET_OBJECT(UInventoryItem,Z_Param_Item);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEquipmentInslot((EEquipmentSlot&)(Z_Param_Out_Slot),Z_Param_Item);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execGetEquipmentInslot)
	{
		P_GET_ENUM(EEquipmentSlot,Z_Param_Slot);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UInventoryItem**)Z_Param__Result=P_THIS->GetEquipmentInslot(EEquipmentSlot(Z_Param_Slot));
		P_NATIVE_END;
	}
	struct InventoryComponent_eventServerEquipItemToSlot_Parms
	{
		EEquipmentSlot Slot;
		const UInventoryItem* Item;
	};
	struct InventoryComponent_eventServerRemoveItem_Parms
	{
		UInventoryItem* Item;
	};
	struct InventoryComponent_eventServerUseConsumable_Parms
	{
		UInventoryItem* Item;
	};
	static FName NAME_UInventoryComponent_ServerEquipItemToSlot = FName(TEXT("ServerEquipItemToSlot"));
	void UInventoryComponent::ServerEquipItemToSlot(EEquipmentSlot const& Slot, const UInventoryItem* Item)
	{
		InventoryComponent_eventServerEquipItemToSlot_Parms Parms;
		Parms.Slot=Slot;
		Parms.Item=Item;
		ProcessEvent(FindFunctionChecked(NAME_UInventoryComponent_ServerEquipItemToSlot),&Parms);
	}
	static FName NAME_UInventoryComponent_ServerRemoveItem = FName(TEXT("ServerRemoveItem"));
	void UInventoryComponent::ServerRemoveItem(UInventoryItem* Item)
	{
		InventoryComponent_eventServerRemoveItem_Parms Parms;
		Parms.Item=Item;
		ProcessEvent(FindFunctionChecked(NAME_UInventoryComponent_ServerRemoveItem),&Parms);
	}
	static FName NAME_UInventoryComponent_ServerUseConsumable = FName(TEXT("ServerUseConsumable"));
	void UInventoryComponent::ServerUseConsumable(UInventoryItem* Item)
	{
		InventoryComponent_eventServerUseConsumable_Parms Parms;
		Parms.Item=Item;
		ProcessEvent(FindFunctionChecked(NAME_UInventoryComponent_ServerUseConsumable),&Parms);
	}
	static FName NAME_UInventoryComponent_UIBroadcastInventoryUpdate = FName(TEXT("UIBroadcastInventoryUpdate"));
	void UInventoryComponent::UIBroadcastInventoryUpdate()
	{
		ProcessEvent(FindFunctionChecked(NAME_UInventoryComponent_UIBroadcastInventoryUpdate),NULL);
	}
	void UInventoryComponent::StaticRegisterNativesUInventoryComponent()
	{
		UClass* Class = UInventoryComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddNewItemToInventory", &UInventoryComponent::execAddNewItemToInventory },
			{ "GetEquipmentInslot", &UInventoryComponent::execGetEquipmentInslot },
			{ "GetSerializedInventory", &UInventoryComponent::execGetSerializedInventory },
			{ "LoadSaveGameData", &UInventoryComponent::execLoadSaveGameData },
			{ "OnRep_EquippedAccessory", &UInventoryComponent::execOnRep_EquippedAccessory },
			{ "OnRep_EquippedFeet", &UInventoryComponent::execOnRep_EquippedFeet },
			{ "OnRep_EquippedHands", &UInventoryComponent::execOnRep_EquippedHands },
			{ "OnRep_EquippedHead", &UInventoryComponent::execOnRep_EquippedHead },
			{ "OnRep_EquippedLegs", &UInventoryComponent::execOnRep_EquippedLegs },
			{ "Onrep_EquippedTorso", &UInventoryComponent::execOnrep_EquippedTorso },
			{ "OnRep_EquippedWeapon", &UInventoryComponent::execOnRep_EquippedWeapon },
			{ "OnRep_Inventory", &UInventoryComponent::execOnRep_Inventory },
			{ "RemoveOtherMeshes", &UInventoryComponent::execRemoveOtherMeshes },
			{ "ServerEquipItemToSlot", &UInventoryComponent::execServerEquipItemToSlot },
			{ "ServerRemoveItem", &UInventoryComponent::execServerRemoveItem },
			{ "ServerUseConsumable", &UInventoryComponent::execServerUseConsumable },
			{ "SetEquipmentInslot", &UInventoryComponent::execSetEquipmentInslot },
			{ "UIBroadcastInventoryUpdate", &UInventoryComponent::execUIBroadcastInventoryUpdate },
			{ "UnequipItem", &UInventoryComponent::execUnequipItem },
			{ "UseItem", &UInventoryComponent::execUseItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInventoryComponent_AddNewItemToInventory_Statics
	{
		struct InventoryComponent_eventAddNewItemToInventory_Parms
		{
			UPDA_Item* ItemData;
			TArray<FItemProperty> Properties;
			UInventoryItem* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Properties_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Properties;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_AddNewItemToInventory_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InventoryComponent_eventAddNewItemToInventory_Parms, ItemData), Z_Construct_UClass_UPDA_Item_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryComponent_AddNewItemToInventory_Statics::NewProp_Properties_Inner = { "Properties", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FItemProperty, METADATA_PARAMS(nullptr, 0) }; // 3465316120
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventoryComponent_AddNewItemToInventory_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InventoryComponent_eventAddNewItemToInventory_Parms, Properties), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3465316120
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_AddNewItemToInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InventoryComponent_eventAddNewItemToInventory_Parms, ReturnValue), Z_Construct_UClass_UInventoryItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_AddNewItemToInventory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_AddNewItemToInventory_Statics::NewProp_ItemData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_AddNewItemToInventory_Statics::NewProp_Properties_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_AddNewItemToInventory_Statics::NewProp_Properties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_AddNewItemToInventory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_AddNewItemToInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "A Inventory" },
		{ "Comment", "//Add New Item to Inventory, to be call On Server/Authority\n" },
		{ "Keywords", "Add Item" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "ToolTip", "Add New Item to Inventory, to be call On Server/Authority" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_AddNewItemToInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "AddNewItemToInventory", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInventoryComponent_AddNewItemToInventory_Statics::InventoryComponent_eventAddNewItemToInventory_Parms), Z_Construct_UFunction_UInventoryComponent_AddNewItemToInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_AddNewItemToInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_AddNewItemToInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_AddNewItemToInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryComponent_AddNewItemToInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_AddNewItemToInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_GetEquipmentInslot_Statics
	{
		struct InventoryComponent_eventGetEquipmentInslot_Parms
		{
			EEquipmentSlot Slot;
			UInventoryItem* ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Slot_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slot_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Slot;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInventoryComponent_GetEquipmentInslot_Statics::NewProp_Slot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_GetEquipmentInslot_Statics::NewProp_Slot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInventoryComponent_GetEquipmentInslot_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InventoryComponent_eventGetEquipmentInslot_Parms, Slot), Z_Construct_UEnum_InventoryRuntime_EEquipmentSlot, METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_GetEquipmentInslot_Statics::NewProp_Slot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetEquipmentInslot_Statics::NewProp_Slot_MetaData)) }; // 3540768841
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_GetEquipmentInslot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InventoryComponent_eventGetEquipmentInslot_Parms, ReturnValue), Z_Construct_UClass_UInventoryItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_GetEquipmentInslot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetEquipmentInslot_Statics::NewProp_Slot_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetEquipmentInslot_Statics::NewProp_Slot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetEquipmentInslot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_GetEquipmentInslot_Statics::Function_MetaDataParams[] = {
		{ "Category", "A Inventory" },
		{ "Comment", "//HelperFunction to Get Equipped Items in Equipment slot\n" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "ToolTip", "HelperFunction to Get Equipped Items in Equipment slot" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_GetEquipmentInslot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "GetEquipmentInslot", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInventoryComponent_GetEquipmentInslot_Statics::InventoryComponent_eventGetEquipmentInslot_Parms), Z_Construct_UFunction_UInventoryComponent_GetEquipmentInslot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetEquipmentInslot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_GetEquipmentInslot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetEquipmentInslot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryComponent_GetEquipmentInslot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_GetEquipmentInslot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_GetSerializedInventory_Statics
	{
		struct InventoryComponent_eventGetSerializedInventory_Parms
		{
			int32 EquippedWeaponIndex;
			int32 EquippedAccessoryIndex;
			int32 EquippedHeadIndex;
			int32 EquippedTorsoIndex;
			int32 EquippedLegsIndex;
			int32 EquippedFeetIndex;
			int32 EquippedHandsIndex;
			TArray<FSerializedInventoryItem> ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_EquippedWeaponIndex;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_EquippedAccessoryIndex;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_EquippedHeadIndex;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_EquippedTorsoIndex;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_EquippedLegsIndex;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_EquippedFeetIndex;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_EquippedHandsIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UInventoryComponent_GetSerializedInventory_Statics::NewProp_EquippedWeaponIndex = { "EquippedWeaponIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InventoryComponent_eventGetSerializedInventory_Parms, EquippedWeaponIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UInventoryComponent_GetSerializedInventory_Statics::NewProp_EquippedAccessoryIndex = { "EquippedAccessoryIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InventoryComponent_eventGetSerializedInventory_Parms, EquippedAccessoryIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UInventoryComponent_GetSerializedInventory_Statics::NewProp_EquippedHeadIndex = { "EquippedHeadIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InventoryComponent_eventGetSerializedInventory_Parms, EquippedHeadIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UInventoryComponent_GetSerializedInventory_Statics::NewProp_EquippedTorsoIndex = { "EquippedTorsoIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InventoryComponent_eventGetSerializedInventory_Parms, EquippedTorsoIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UInventoryComponent_GetSerializedInventory_Statics::NewProp_EquippedLegsIndex = { "EquippedLegsIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InventoryComponent_eventGetSerializedInventory_Parms, EquippedLegsIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UInventoryComponent_GetSerializedInventory_Statics::NewProp_EquippedFeetIndex = { "EquippedFeetIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InventoryComponent_eventGetSerializedInventory_Parms, EquippedFeetIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UInventoryComponent_GetSerializedInventory_Statics::NewProp_EquippedHandsIndex = { "EquippedHandsIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InventoryComponent_eventGetSerializedInventory_Parms, EquippedHandsIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryComponent_GetSerializedInventory_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSerializedInventoryItem, METADATA_PARAMS(nullptr, 0) }; // 246090397
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventoryComponent_GetSerializedInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InventoryComponent_eventGetSerializedInventory_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 246090397
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_GetSerializedInventory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetSerializedInventory_Statics::NewProp_EquippedWeaponIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetSerializedInventory_Statics::NewProp_EquippedAccessoryIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetSerializedInventory_Statics::NewProp_EquippedHeadIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetSerializedInventory_Statics::NewProp_EquippedTorsoIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetSerializedInventory_Statics::NewProp_EquippedLegsIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetSerializedInventory_Statics::NewProp_EquippedFeetIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetSerializedInventory_Statics::NewProp_EquippedHandsIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetSerializedInventory_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetSerializedInventory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_GetSerializedInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "A Inventory" },
		{ "Comment", "//Serialize the Inventory to be saved, to be called elsewhere\n" },
		{ "Keywords", "Save" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "ToolTip", "Serialize the Inventory to be saved, to be called elsewhere" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_GetSerializedInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "GetSerializedInventory", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInventoryComponent_GetSerializedInventory_Statics::InventoryComponent_eventGetSerializedInventory_Parms), Z_Construct_UFunction_UInventoryComponent_GetSerializedInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetSerializedInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_GetSerializedInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetSerializedInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryComponent_GetSerializedInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_GetSerializedInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_LoadSaveGameData_Statics
	{
		struct InventoryComponent_eventLoadSaveGameData_Parms
		{
			TArray<FSerializedInventoryItem> SerializedInventory;
			int32 EquippedWeaponIndex;
			int32 EquippedAccessoryIndex;
			int32 EquippedHeadIndex;
			int32 EquippedTorsoIndex;
			int32 EquippedLegsIndex;
			int32 EquippedFeetIndex;
			int32 EquippedHandsIndex;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SerializedInventory_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SerializedInventory;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_EquippedWeaponIndex;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_EquippedAccessoryIndex;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_EquippedHeadIndex;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_EquippedTorsoIndex;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_EquippedLegsIndex;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_EquippedFeetIndex;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_EquippedHandsIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryComponent_LoadSaveGameData_Statics::NewProp_SerializedInventory_Inner = { "SerializedInventory", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSerializedInventoryItem, METADATA_PARAMS(nullptr, 0) }; // 246090397
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventoryComponent_LoadSaveGameData_Statics::NewProp_SerializedInventory = { "SerializedInventory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InventoryComponent_eventLoadSaveGameData_Parms, SerializedInventory), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 246090397
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UInventoryComponent_LoadSaveGameData_Statics::NewProp_EquippedWeaponIndex = { "EquippedWeaponIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InventoryComponent_eventLoadSaveGameData_Parms, EquippedWeaponIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UInventoryComponent_LoadSaveGameData_Statics::NewProp_EquippedAccessoryIndex = { "EquippedAccessoryIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InventoryComponent_eventLoadSaveGameData_Parms, EquippedAccessoryIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UInventoryComponent_LoadSaveGameData_Statics::NewProp_EquippedHeadIndex = { "EquippedHeadIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InventoryComponent_eventLoadSaveGameData_Parms, EquippedHeadIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UInventoryComponent_LoadSaveGameData_Statics::NewProp_EquippedTorsoIndex = { "EquippedTorsoIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InventoryComponent_eventLoadSaveGameData_Parms, EquippedTorsoIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UInventoryComponent_LoadSaveGameData_Statics::NewProp_EquippedLegsIndex = { "EquippedLegsIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InventoryComponent_eventLoadSaveGameData_Parms, EquippedLegsIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UInventoryComponent_LoadSaveGameData_Statics::NewProp_EquippedFeetIndex = { "EquippedFeetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InventoryComponent_eventLoadSaveGameData_Parms, EquippedFeetIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UInventoryComponent_LoadSaveGameData_Statics::NewProp_EquippedHandsIndex = { "EquippedHandsIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InventoryComponent_eventLoadSaveGameData_Parms, EquippedHandsIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_LoadSaveGameData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_LoadSaveGameData_Statics::NewProp_SerializedInventory_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_LoadSaveGameData_Statics::NewProp_SerializedInventory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_LoadSaveGameData_Statics::NewProp_EquippedWeaponIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_LoadSaveGameData_Statics::NewProp_EquippedAccessoryIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_LoadSaveGameData_Statics::NewProp_EquippedHeadIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_LoadSaveGameData_Statics::NewProp_EquippedTorsoIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_LoadSaveGameData_Statics::NewProp_EquippedLegsIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_LoadSaveGameData_Statics::NewProp_EquippedFeetIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_LoadSaveGameData_Statics::NewProp_EquippedHandsIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_LoadSaveGameData_Statics::Function_MetaDataParams[] = {
		{ "Category", "A Inventory" },
		{ "Keywords", "Save" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_LoadSaveGameData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "LoadSaveGameData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInventoryComponent_LoadSaveGameData_Statics::InventoryComponent_eventLoadSaveGameData_Parms), Z_Construct_UFunction_UInventoryComponent_LoadSaveGameData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_LoadSaveGameData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_LoadSaveGameData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_LoadSaveGameData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryComponent_LoadSaveGameData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_LoadSaveGameData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_OnRep_EquippedAccessory_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_OnRep_EquippedAccessory_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Replicate condition Skip Owner. On Replicate, will create and attach the mesh to the proxy character\n" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "ToolTip", "Replicate condition Skip Owner. On Replicate, will create and attach the mesh to the proxy character" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_OnRep_EquippedAccessory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "OnRep_EquippedAccessory", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_OnRep_EquippedAccessory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_OnRep_EquippedAccessory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryComponent_OnRep_EquippedAccessory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_OnRep_EquippedAccessory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_OnRep_EquippedFeet_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_OnRep_EquippedFeet_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Replicate condition Skip Owner. On Replicate, will create and attach the mesh to the proxy character\n" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "ToolTip", "Replicate condition Skip Owner. On Replicate, will create and attach the mesh to the proxy character" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_OnRep_EquippedFeet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "OnRep_EquippedFeet", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_OnRep_EquippedFeet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_OnRep_EquippedFeet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryComponent_OnRep_EquippedFeet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_OnRep_EquippedFeet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_OnRep_EquippedHands_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_OnRep_EquippedHands_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Replicate condition Skip Owner. On Replicate, will create and attach the mesh to the proxy character\n" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "ToolTip", "Replicate condition Skip Owner. On Replicate, will create and attach the mesh to the proxy character" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_OnRep_EquippedHands_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "OnRep_EquippedHands", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_OnRep_EquippedHands_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_OnRep_EquippedHands_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryComponent_OnRep_EquippedHands()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_OnRep_EquippedHands_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_OnRep_EquippedHead_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_OnRep_EquippedHead_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Replicate condition Skip Owner. On Replicate, will create and attach the mesh to the proxy character\n" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "ToolTip", "Replicate condition Skip Owner. On Replicate, will create and attach the mesh to the proxy character" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_OnRep_EquippedHead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "OnRep_EquippedHead", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_OnRep_EquippedHead_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_OnRep_EquippedHead_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryComponent_OnRep_EquippedHead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_OnRep_EquippedHead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_OnRep_EquippedLegs_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_OnRep_EquippedLegs_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Replicate condition Skip Owner. On Replicate, will create and attach the mesh to the proxy character\n" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "ToolTip", "Replicate condition Skip Owner. On Replicate, will create and attach the mesh to the proxy character" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_OnRep_EquippedLegs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "OnRep_EquippedLegs", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_OnRep_EquippedLegs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_OnRep_EquippedLegs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryComponent_OnRep_EquippedLegs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_OnRep_EquippedLegs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_Onrep_EquippedTorso_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_Onrep_EquippedTorso_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Replicate condition Skip Owner. On Replicate, will create and attach the mesh to the proxy character\n" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "ToolTip", "Replicate condition Skip Owner. On Replicate, will create and attach the mesh to the proxy character" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_Onrep_EquippedTorso_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "Onrep_EquippedTorso", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_Onrep_EquippedTorso_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_Onrep_EquippedTorso_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryComponent_Onrep_EquippedTorso()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_Onrep_EquippedTorso_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_OnRep_EquippedWeapon_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_OnRep_EquippedWeapon_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Replicate condition Skip Owner. On Replicate, will create and attach the mesh to the proxy character\n" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "ToolTip", "Replicate condition Skip Owner. On Replicate, will create and attach the mesh to the proxy character" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_OnRep_EquippedWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "OnRep_EquippedWeapon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_OnRep_EquippedWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_OnRep_EquippedWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryComponent_OnRep_EquippedWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_OnRep_EquippedWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_OnRep_Inventory_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_OnRep_Inventory_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Replicate condition Skip Owner. On Replicate, will create and attach the mesh to the proxy character\n" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "ToolTip", "Replicate condition Skip Owner. On Replicate, will create and attach the mesh to the proxy character" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_OnRep_Inventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "OnRep_Inventory", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_OnRep_Inventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_OnRep_Inventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryComponent_OnRep_Inventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_OnRep_Inventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_RemoveOtherMeshes_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_RemoveOtherMeshes_Statics::Function_MetaDataParams[] = {
		{ "Category", "A Inventory" },
		{ "Comment", "//Remove All attached static mesh and SkeletalMesh that does not belong to equipped items\n" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "ToolTip", "Remove All attached static mesh and SkeletalMesh that does not belong to equipped items" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_RemoveOtherMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "RemoveOtherMeshes", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_RemoveOtherMeshes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_RemoveOtherMeshes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryComponent_RemoveOtherMeshes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_RemoveOtherMeshes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_ServerEquipItemToSlot_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_Slot_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slot_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Slot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInventoryComponent_ServerEquipItemToSlot_Statics::NewProp_Slot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_ServerEquipItemToSlot_Statics::NewProp_Slot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInventoryComponent_ServerEquipItemToSlot_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InventoryComponent_eventServerEquipItemToSlot_Parms, Slot), Z_Construct_UEnum_InventoryRuntime_EEquipmentSlot, METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_ServerEquipItemToSlot_Statics::NewProp_Slot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_ServerEquipItemToSlot_Statics::NewProp_Slot_MetaData)) }; // 3540768841
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_ServerEquipItemToSlot_Statics::NewProp_Item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_ServerEquipItemToSlot_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InventoryComponent_eventServerEquipItemToSlot_Parms, Item), Z_Construct_UClass_UInventoryItem_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_ServerEquipItemToSlot_Statics::NewProp_Item_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_ServerEquipItemToSlot_Statics::NewProp_Item_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_ServerEquipItemToSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_ServerEquipItemToSlot_Statics::NewProp_Slot_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_ServerEquipItemToSlot_Statics::NewProp_Slot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_ServerEquipItemToSlot_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_ServerEquipItemToSlot_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Call SetEquipmentInslot on the Server. Validate if the Item is in the Inventory\n" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "ToolTip", "Call SetEquipmentInslot on the Server. Validate if the Item is in the Inventory" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_ServerEquipItemToSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "ServerEquipItemToSlot", nullptr, nullptr, sizeof(InventoryComponent_eventServerEquipItemToSlot_Parms), Z_Construct_UFunction_UInventoryComponent_ServerEquipItemToSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_ServerEquipItemToSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_ServerEquipItemToSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_ServerEquipItemToSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryComponent_ServerEquipItemToSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_ServerEquipItemToSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_ServerRemoveItem_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_ServerRemoveItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InventoryComponent_eventServerRemoveItem_Parms, Item), Z_Construct_UClass_UInventoryItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_ServerRemoveItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_ServerRemoveItem_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_ServerRemoveItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "A Inventory" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_ServerRemoveItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "ServerRemoveItem", nullptr, nullptr, sizeof(InventoryComponent_eventServerRemoveItem_Parms), Z_Construct_UFunction_UInventoryComponent_ServerRemoveItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_ServerRemoveItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_ServerRemoveItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_ServerRemoveItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryComponent_ServerRemoveItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_ServerRemoveItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_ServerUseConsumable_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_ServerUseConsumable_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InventoryComponent_eventServerUseConsumable_Parms, Item), Z_Construct_UClass_UInventoryItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_ServerUseConsumable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_ServerUseConsumable_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_ServerUseConsumable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_ServerUseConsumable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "ServerUseConsumable", nullptr, nullptr, sizeof(InventoryComponent_eventServerUseConsumable_Parms), Z_Construct_UFunction_UInventoryComponent_ServerUseConsumable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_ServerUseConsumable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_ServerUseConsumable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_ServerUseConsumable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryComponent_ServerUseConsumable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_ServerUseConsumable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_SetEquipmentInslot_Statics
	{
		struct InventoryComponent_eventSetEquipmentInslot_Parms
		{
			EEquipmentSlot Slot;
			UInventoryItem* Item;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Slot_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slot_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Slot;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInventoryComponent_SetEquipmentInslot_Statics::NewProp_Slot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_SetEquipmentInslot_Statics::NewProp_Slot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInventoryComponent_SetEquipmentInslot_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InventoryComponent_eventSetEquipmentInslot_Parms, Slot), Z_Construct_UEnum_InventoryRuntime_EEquipmentSlot, METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_SetEquipmentInslot_Statics::NewProp_Slot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_SetEquipmentInslot_Statics::NewProp_Slot_MetaData)) }; // 3540768841
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_SetEquipmentInslot_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InventoryComponent_eventSetEquipmentInslot_Parms, Item), Z_Construct_UClass_UInventoryItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_SetEquipmentInslot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_SetEquipmentInslot_Statics::NewProp_Slot_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_SetEquipmentInslot_Statics::NewProp_Slot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_SetEquipmentInslot_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_SetEquipmentInslot_Statics::Function_MetaDataParams[] = {
		{ "Category", "A Inventory" },
		{ "Comment", "//Use to Set the Equipment in a slot. Not RPC\n" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "ToolTip", "Use to Set the Equipment in a slot. Not RPC" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_SetEquipmentInslot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "SetEquipmentInslot", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInventoryComponent_SetEquipmentInslot_Statics::InventoryComponent_eventSetEquipmentInslot_Parms), Z_Construct_UFunction_UInventoryComponent_SetEquipmentInslot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_SetEquipmentInslot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_SetEquipmentInslot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_SetEquipmentInslot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryComponent_SetEquipmentInslot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_SetEquipmentInslot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_UIBroadcastInventoryUpdate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_UIBroadcastInventoryUpdate_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Broad cast the OnInventoryUpdatedDelegate to force the UI to update\n" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "ToolTip", "Broad cast the OnInventoryUpdatedDelegate to force the UI to update" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_UIBroadcastInventoryUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "UIBroadcastInventoryUpdate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_UIBroadcastInventoryUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_UIBroadcastInventoryUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryComponent_UIBroadcastInventoryUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_UIBroadcastInventoryUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_UnequipItem_Statics
	{
		struct InventoryComponent_eventUnequipItem_Parms
		{
			const UInventoryItem* ItemToUnEquip;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemToUnEquip_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemToUnEquip;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_UnequipItem_Statics::NewProp_ItemToUnEquip_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_UnequipItem_Statics::NewProp_ItemToUnEquip = { "ItemToUnEquip", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InventoryComponent_eventUnequipItem_Parms, ItemToUnEquip), Z_Construct_UClass_UInventoryItem_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_UnequipItem_Statics::NewProp_ItemToUnEquip_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_UnequipItem_Statics::NewProp_ItemToUnEquip_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_UnequipItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_UnequipItem_Statics::NewProp_ItemToUnEquip,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_UnequipItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "A Inventory" },
		{ "Comment", "//Unequipping the Item, call on Client. If it's a static mesh or skeletal mesh Item, It will unequip the item and remove the mesh from the character\n" },
		{ "Keywords", "Unequip Item" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "ToolTip", "Unequipping the Item, call on Client. If it's a static mesh or skeletal mesh Item, It will unequip the item and remove the mesh from the character" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_UnequipItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "UnequipItem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInventoryComponent_UnequipItem_Statics::InventoryComponent_eventUnequipItem_Parms), Z_Construct_UFunction_UInventoryComponent_UnequipItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_UnequipItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_UnequipItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_UnequipItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryComponent_UnequipItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_UnequipItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_UseItem_Statics
	{
		struct InventoryComponent_eventUseItem_Parms
		{
			UInventoryItem* Item;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_UseItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InventoryComponent_eventUseItem_Parms, Item), Z_Construct_UClass_UInventoryItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_UseItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_UseItem_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_UseItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "A Inventory" },
		{ "Comment", "//On Using the Item, depend on it type will Equip or Use. To be called from Owning Client\n" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "ToolTip", "On Using the Item, depend on it type will Equip or Use. To be called from Owning Client" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_UseItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "UseItem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInventoryComponent_UseItem_Statics::InventoryComponent_eventUseItem_Parms), Z_Construct_UFunction_UInventoryComponent_UseItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_UseItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_UseItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_UseItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryComponent_UseItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_UseItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryComponent);
	UClass* Z_Construct_UClass_UInventoryComponent_NoRegister()
	{
		return UInventoryComponent::StaticClass();
	}
	struct Z_Construct_UClass_UInventoryComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnInventoryUpdatedDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInventoryUpdatedDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ErrorMessage;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CharacterType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CharacterType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Inventory_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Inventory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquippedWeapon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EquippedWeapon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquippedAccessory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EquippedAccessory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquippedHead_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EquippedHead;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquippedTorso_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EquippedTorso;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquippedLegs_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EquippedLegs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquippedFeet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EquippedFeet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquippedHands_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EquippedHands;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInventoryComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_InventoryRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInventoryComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventoryComponent_AddNewItemToInventory, "AddNewItemToInventory" }, // 523644255
		{ &Z_Construct_UDelegateFunction_UInventoryComponent_ErrorMessage__DelegateSignature, "ErrorMessage__DelegateSignature" }, // 2546160791
		{ &Z_Construct_UFunction_UInventoryComponent_GetEquipmentInslot, "GetEquipmentInslot" }, // 1681262766
		{ &Z_Construct_UFunction_UInventoryComponent_GetSerializedInventory, "GetSerializedInventory" }, // 2406976400
		{ &Z_Construct_UFunction_UInventoryComponent_LoadSaveGameData, "LoadSaveGameData" }, // 2266576950
		{ &Z_Construct_UDelegateFunction_UInventoryComponent_OnInventoryUpdated__DelegateSignature, "OnInventoryUpdated__DelegateSignature" }, // 2995699533
		{ &Z_Construct_UFunction_UInventoryComponent_OnRep_EquippedAccessory, "OnRep_EquippedAccessory" }, // 3804492729
		{ &Z_Construct_UFunction_UInventoryComponent_OnRep_EquippedFeet, "OnRep_EquippedFeet" }, // 3933410369
		{ &Z_Construct_UFunction_UInventoryComponent_OnRep_EquippedHands, "OnRep_EquippedHands" }, // 3660472420
		{ &Z_Construct_UFunction_UInventoryComponent_OnRep_EquippedHead, "OnRep_EquippedHead" }, // 1805729656
		{ &Z_Construct_UFunction_UInventoryComponent_OnRep_EquippedLegs, "OnRep_EquippedLegs" }, // 2429523043
		{ &Z_Construct_UFunction_UInventoryComponent_Onrep_EquippedTorso, "Onrep_EquippedTorso" }, // 1830938712
		{ &Z_Construct_UFunction_UInventoryComponent_OnRep_EquippedWeapon, "OnRep_EquippedWeapon" }, // 3550381624
		{ &Z_Construct_UFunction_UInventoryComponent_OnRep_Inventory, "OnRep_Inventory" }, // 1313742485
		{ &Z_Construct_UFunction_UInventoryComponent_RemoveOtherMeshes, "RemoveOtherMeshes" }, // 2613896764
		{ &Z_Construct_UFunction_UInventoryComponent_ServerEquipItemToSlot, "ServerEquipItemToSlot" }, // 3719418045
		{ &Z_Construct_UFunction_UInventoryComponent_ServerRemoveItem, "ServerRemoveItem" }, // 3381508717
		{ &Z_Construct_UFunction_UInventoryComponent_ServerUseConsumable, "ServerUseConsumable" }, // 3814025440
		{ &Z_Construct_UFunction_UInventoryComponent_SetEquipmentInslot, "SetEquipmentInslot" }, // 955216181
		{ &Z_Construct_UFunction_UInventoryComponent_UIBroadcastInventoryUpdate, "UIBroadcastInventoryUpdate" }, // 2505635293
		{ &Z_Construct_UFunction_UInventoryComponent_UnequipItem, "UnequipItem" }, // 2160839267
		{ &Z_Construct_UFunction_UInventoryComponent_UseItem, "UseItem" }, // 391441560
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "InventoryComponent.h" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_Statics::NewProp_OnInventoryUpdatedDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_OnInventoryUpdatedDelegate = { "OnInventoryUpdatedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInventoryComponent, OnInventoryUpdatedDelegate), Z_Construct_UDelegateFunction_UInventoryComponent_OnInventoryUpdated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_OnInventoryUpdatedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_OnInventoryUpdatedDelegate_MetaData)) }; // 2995699533
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInventoryComponent, ErrorMessage), Z_Construct_UDelegateFunction_UInventoryComponent_ErrorMessage__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_ErrorMessage_MetaData)) }; // 2546160791
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_CharacterType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_Statics::NewProp_CharacterType_MetaData[] = {
		{ "Category", "A Inventory" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_CharacterType = { "CharacterType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInventoryComponent, CharacterType), Z_Construct_UEnum_InventoryRuntime_ECharacterType, METADATA_PARAMS(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_CharacterType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_CharacterType_MetaData)) }; // 3982752335
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_Inventory_Inner = { "Inventory", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UInventoryItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_Statics::NewProp_Inventory_MetaData[] = {
		{ "Category", "A Inventory" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_Inventory = { "Inventory", "OnRep_Inventory", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInventoryComponent, Inventory), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_Inventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_Inventory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_Statics::NewProp_EquippedWeapon_MetaData[] = {
		{ "Category", "A Inventory" },
		{ "Comment", "//Replicate condition Skip Owner. On Replicate, will create and attach the mesh to the proxy character\n" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "ToolTip", "Replicate condition Skip Owner. On Replicate, will create and attach the mesh to the proxy character" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_EquippedWeapon = { "EquippedWeapon", "OnRep_EquippedWeapon", (EPropertyFlags)0x0010000100020025, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInventoryComponent, EquippedWeapon), Z_Construct_UClass_UInventoryItem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_EquippedWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_EquippedWeapon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_Statics::NewProp_EquippedAccessory_MetaData[] = {
		{ "Category", "A Inventory" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_EquippedAccessory = { "EquippedAccessory", "OnRep_EquippedAccessory", (EPropertyFlags)0x0010000100020025, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInventoryComponent, EquippedAccessory), Z_Construct_UClass_UInventoryItem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_EquippedAccessory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_EquippedAccessory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_Statics::NewProp_EquippedHead_MetaData[] = {
		{ "Category", "A Inventory" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_EquippedHead = { "EquippedHead", "OnRep_EquippedHead", (EPropertyFlags)0x0010000100020025, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInventoryComponent, EquippedHead), Z_Construct_UClass_UInventoryItem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_EquippedHead_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_EquippedHead_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_Statics::NewProp_EquippedTorso_MetaData[] = {
		{ "Category", "A Inventory" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_EquippedTorso = { "EquippedTorso", "Onrep_EquippedTorso", (EPropertyFlags)0x0010000100020025, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInventoryComponent, EquippedTorso), Z_Construct_UClass_UInventoryItem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_EquippedTorso_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_EquippedTorso_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_Statics::NewProp_EquippedLegs_MetaData[] = {
		{ "Category", "A Inventory" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_EquippedLegs = { "EquippedLegs", "OnRep_EquippedLegs", (EPropertyFlags)0x0010000100020025, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInventoryComponent, EquippedLegs), Z_Construct_UClass_UInventoryItem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_EquippedLegs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_EquippedLegs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_Statics::NewProp_EquippedFeet_MetaData[] = {
		{ "Category", "A Inventory" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_EquippedFeet = { "EquippedFeet", "OnRep_EquippedFeet", (EPropertyFlags)0x0010000100020025, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInventoryComponent, EquippedFeet), Z_Construct_UClass_UInventoryItem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_EquippedFeet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_EquippedFeet_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_Statics::NewProp_EquippedHands_MetaData[] = {
		{ "Category", "A Inventory" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_EquippedHands = { "EquippedHands", "OnRep_EquippedHands", (EPropertyFlags)0x0010000100020025, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInventoryComponent, EquippedHands), Z_Construct_UClass_UInventoryItem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_EquippedHands_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_EquippedHands_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_OnInventoryUpdatedDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_ErrorMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_CharacterType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_CharacterType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_Inventory_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_Inventory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_EquippedWeapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_EquippedAccessory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_EquippedHead,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_EquippedTorso,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_EquippedLegs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_EquippedFeet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_EquippedHands,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInventoryComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryComponent_Statics::ClassParams = {
		&UInventoryComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInventoryComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UInventoryComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInventoryComponent()
	{
		if (!Z_Registration_Info_UClass_UInventoryComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryComponent.OuterSingleton, Z_Construct_UClass_UInventoryComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInventoryComponent.OuterSingleton;
	}
	template<> INVENTORYRUNTIME_API UClass* StaticClass<UInventoryComponent>()
	{
		return UInventoryComponent::StaticClass();
	}

	void UInventoryComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Inventory(TEXT("Inventory"));
		static const FName Name_EquippedWeapon(TEXT("EquippedWeapon"));
		static const FName Name_EquippedAccessory(TEXT("EquippedAccessory"));
		static const FName Name_EquippedHead(TEXT("EquippedHead"));
		static const FName Name_EquippedTorso(TEXT("EquippedTorso"));
		static const FName Name_EquippedLegs(TEXT("EquippedLegs"));
		static const FName Name_EquippedFeet(TEXT("EquippedFeet"));
		static const FName Name_EquippedHands(TEXT("EquippedHands"));

		const bool bIsValid = true
			&& Name_Inventory == ClassReps[(int32)ENetFields_Private::Inventory].Property->GetFName()
			&& Name_EquippedWeapon == ClassReps[(int32)ENetFields_Private::EquippedWeapon].Property->GetFName()
			&& Name_EquippedAccessory == ClassReps[(int32)ENetFields_Private::EquippedAccessory].Property->GetFName()
			&& Name_EquippedHead == ClassReps[(int32)ENetFields_Private::EquippedHead].Property->GetFName()
			&& Name_EquippedTorso == ClassReps[(int32)ENetFields_Private::EquippedTorso].Property->GetFName()
			&& Name_EquippedLegs == ClassReps[(int32)ENetFields_Private::EquippedLegs].Property->GetFName()
			&& Name_EquippedFeet == ClassReps[(int32)ENetFields_Private::EquippedFeet].Property->GetFName()
			&& Name_EquippedHands == ClassReps[(int32)ENetFields_Private::EquippedHands].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UInventoryComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryComponent);
	UInventoryComponent::~UInventoryComponent() {}
	struct Z_CompiledInDeferFile_FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryComponent_h_Statics::ScriptStructInfo[] = {
		{ FItemProperty::StaticStruct, Z_Construct_UScriptStruct_FItemProperty_Statics::NewStructOps, TEXT("ItemProperty"), &Z_Registration_Info_UScriptStruct_ItemProperty, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemProperty), 3465316120U) },
		{ FSerializedInventoryItem::StaticStruct, Z_Construct_UScriptStruct_FSerializedInventoryItem_Statics::NewStructOps, TEXT("SerializedInventoryItem"), &Z_Registration_Info_UScriptStruct_SerializedInventoryItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSerializedInventoryItem), 246090397U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UReplicatedObject, UReplicatedObject::StaticClass, TEXT("UReplicatedObject"), &Z_Registration_Info_UClass_UReplicatedObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReplicatedObject), 1249553268U) },
		{ Z_Construct_UClass_UInventoryItem, UInventoryItem::StaticClass, TEXT("UInventoryItem"), &Z_Registration_Info_UClass_UInventoryItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryItem), 1827030129U) },
		{ Z_Construct_UClass_UInventoryComponent, UInventoryComponent::StaticClass, TEXT("UInventoryComponent"), &Z_Registration_Info_UClass_UInventoryComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryComponent), 2299915459U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryComponent_h_227507074(TEXT("/Script/InventoryRuntime"),
		Z_CompiledInDeferFile_FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ToZero_Plugins_GameFeatures_Inventory_Source_InventoryRuntime_Public_InventoryComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
