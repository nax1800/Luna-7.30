#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB0 (0x3E0 - 0x330)
// BlueprintGeneratedClass WeaponSmithBoard.WeaponSmithBoard_C
class AWeaponSmithBoard_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                SkeletalSlot_Hammers;                              // 0x338(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                WeaponSlot_Swords;                                 // 0x340(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                WeaponSlot_RocketLauncher;                         // 0x348(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                WeaponSlot_Pistol;                                 // 0x350(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                WeaponSlot_Shotgun;                                // 0x358(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                WeaponSlot_Assault;                                // 0x360(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                WeaponSlot_Sniper;                                 // 0x368(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_Prison_Fence01wire;                             // 0x370(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x378(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class UFortSchematicItem*>            FavSchematics;                                     // 0x380(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class USkeletalMeshComponent*>        StaticMeshArray;                                   // 0x390(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UFortSchematicItem*                    RocketLauncher;                                    // 0x3A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortSchematicItem*                    SniperRifle;                                       // 0x3A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortSchematicItem*                    AssaultRifle;                                      // 0x3B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortSchematicItem*                    Shotgun;                                           // 0x3B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortSchematicItem*                    Pistol;                                            // 0x3C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortSchematicItem*                    SMG;                                               // 0x3C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Counter;                                           // 0x3D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_554C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortQuestItemDefinition*              QuestToShow;                                       // 0x3D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WeaponSmithBoard_C");
		return Clss;
	}

	void GetCustomMeleeSchematics();
	void GetCustomRangedSchematics();
	void PopulateSceneWithCustomStoredMeleeSchematics(TArray<class UFortAccountItem*>& CustomizedMeleeWeaponSchematics, const struct FTransform& Hammer_Transform, const struct FTransform& Sword_Transform, const TArray<class UFortAccountItem*>& MeleeWeaponAccountItems, const TArray<class UFortSchematicItem*>& SchematicWpnArray, const TArray<class FText>& WpnTypes, int32 Temp_int_Array_Index_Variable, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable1, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult1, int32 CallFunc_Add_IntInt_ReturnValue1, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, TArray<class UFortAccountItem*>& CallFunc_GetAccountItemsByFilterType_OutItemList, int32 Temp_int_Array_Index_Variable1, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UFortAccountItem* CallFunc_Array_Get_Item, class UFortSchematicItem* K2Node_DynamicCast_AsFort_Schematic_Item, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, class FText CallFunc_GetSecondaryCategory_ItemCategoryText, const struct FSlateBrush& CallFunc_GetSecondaryCategory_ItemCategoryBrush, bool CallFunc_GetSecondaryCategory_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class FText CallFunc_GetTertiaryCategory_ItemCategoryText, const struct FSlateBrush& CallFunc_GetTertiaryCategory_ItemCategoryBrush, bool CallFunc_GetTertiaryCategory_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, TArray<class FText>& K2Node_MakeArray_Array, TArray<class UFortSchematicItem*>& K2Node_MakeArray_Array1, class UFortSchematicItem* CallFunc_Array_Get_Item1, class UFortSchematicItem* CallFunc_Array_Get_Item2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class UFortWeaponItemDefinition* CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue, class UFortWeaponItemDefinition* CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue1, class USkeletalMesh* CallFunc_GetWeaponMeshOverride_ReturnValue, class USkeletalMesh* CallFunc_GetWeaponMeshOverride_ReturnValue1, const struct FBoxSphereBounds& CallFunc_GetBounds_ReturnValue, const struct FBoxSphereBounds& CallFunc_GetBounds_ReturnValue1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue1, const struct FHitResult& CallFunc_K2_AddLocalOffset_SweepHitResult, const struct FHitResult& CallFunc_K2_AddLocalOffset_SweepHitResult1, class FText CallFunc_Array_Get_Item3, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_EqualEqual_TextText_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue1, bool CallFunc_EqualEqual_TextText_ReturnValue1);
	void PopulateSceneFromCustomStoredRangedSchematics(TArray<class UFortAccountItem*>& CustomizedRangedWeaponSchematics, const struct FTransform& RocketLauncher_Transform, const struct FTransform& Shotgun_Transform, const struct FTransform& Pistol_Transform, const struct FTransform& Sniper_Transform, const struct FTransform& Assault_Transform, const TArray<class UFortAccountItem*>& RangedWeaponAccountItems, const TArray<class UFortSchematicItem*>& SchematicWpnArray, const TArray<class FText>& WpnTypes, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, int32 Temp_int_Array_Index_Variable, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult, int32 Temp_int_Loop_Counter_Variable, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult1, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable1, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult2, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult3, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult4, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult5, int32 Temp_int_Loop_Counter_Variable1, class UFortAccountItem* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UFortSchematicItem* K2Node_DynamicCast_AsFort_Schematic_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, class FText CallFunc_GetSecondaryCategory_ItemCategoryText, const struct FSlateBrush& CallFunc_GetSecondaryCategory_ItemCategoryBrush, bool CallFunc_GetSecondaryCategory_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, TArray<class FText>& K2Node_MakeArray_Array, TArray<class UFortSchematicItem*>& K2Node_MakeArray_Array1, class UFortSchematicItem* CallFunc_Array_Get_Item1, bool CallFunc_IsValid_ReturnValue, class UFortSchematicItem* CallFunc_Array_Get_Item2, bool CallFunc_IsValid_ReturnValue1, class UFortWeaponItemDefinition* CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue, class USkeletalMesh* CallFunc_GetWeaponMeshOverride_ReturnValue, class UFortWeaponItemDefinition* CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue1, const struct FBoxSphereBounds& CallFunc_GetBounds_ReturnValue, class USkeletalMesh* CallFunc_GetWeaponMeshOverride_ReturnValue1, const struct FBoxSphereBounds& CallFunc_GetBounds_ReturnValue1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FHitResult& CallFunc_K2_AddLocalOffset_SweepHitResult, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue1, const struct FHitResult& CallFunc_K2_AddLocalOffset_SweepHitResult1, class UFortSchematicItem* CallFunc_Array_Get_Item3, bool CallFunc_IsValid_ReturnValue2, class UFortSchematicItem* CallFunc_Array_Get_Item4, bool CallFunc_IsValid_ReturnValue3, class UFortWeaponItemDefinition* CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue2, class USkeletalMesh* CallFunc_GetWeaponMeshOverride_ReturnValue2, class UFortWeaponItemDefinition* CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue3, const struct FBoxSphereBounds& CallFunc_GetBounds_ReturnValue2, class USkeletalMesh* CallFunc_GetWeaponMeshOverride_ReturnValue3, const struct FBoxSphereBounds& CallFunc_GetBounds_ReturnValue3, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue2, const struct FHitResult& CallFunc_K2_AddLocalOffset_SweepHitResult2, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue3, const class FString& CallFunc_GetObjectName_ReturnValue, const struct FHitResult& CallFunc_K2_AddLocalOffset_SweepHitResult3, bool CallFunc_Contains_ReturnValue, class UFortSchematicItem* CallFunc_Array_Get_Item5, bool CallFunc_IsValid_ReturnValue4, class UFortWeaponItemDefinition* CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue4, class USkeletalMesh* CallFunc_GetWeaponMeshOverride_ReturnValue4, class FText CallFunc_Array_Get_Item6, const struct FBoxSphereBounds& CallFunc_GetBounds_ReturnValue4, bool CallFunc_EqualEqual_TextText_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue4, const struct FHitResult& CallFunc_K2_AddLocalOffset_SweepHitResult4, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue1);
	void RandomizeMeleeSchematics(TArray<class UFortAccountItem*>* MeleeSchematicsForBoard, const struct FTransform& Hammer_Transform, const struct FTransform& Sword_Transform, const TArray<class UFortAccountItem*>& MeleeWeaponAccountItems, const TArray<class UFortSchematicItem*>& SchematicWpnArray, const TArray<class FText>& WpnTypes, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable1, bool CallFunc_EqualEqual_IntInt_ReturnValue, TArray<class FText>& K2Node_MakeArray_Array, TArray<class UFortSchematicItem*>& K2Node_MakeArray_Array1, class UFortAccountItem* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UFortSchematicItem* K2Node_DynamicCast_AsFort_Schematic_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, class FText CallFunc_GetSecondaryCategory_ItemCategoryText, const struct FSlateBrush& CallFunc_GetSecondaryCategory_ItemCategoryBrush, bool CallFunc_GetSecondaryCategory_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class FText CallFunc_GetTertiaryCategory_ItemCategoryText, const struct FSlateBrush& CallFunc_GetTertiaryCategory_ItemCategoryBrush, bool CallFunc_GetTertiaryCategory_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, TArray<class UFortAccountItem*>& CallFunc_GetAccountItemsByFilterType_OutItemList, int32 Temp_int_Loop_Counter_Variable1, class FText CallFunc_Array_Get_Item1, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_EqualEqual_TextText_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue1, bool CallFunc_EqualEqual_TextText_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue1);
	void RandomizeRangedSchematics(TArray<class UFortSchematicItem*>* RangedSchematicsForBoard, const struct FTransform& RocketLauncher_Transform, const struct FTransform& Shotgun_Transform, const struct FTransform& Pistol_Transform, const struct FTransform& Sniper_Transform, const struct FTransform& Assault_Transform, const TArray<class UFortAccountItem*>& RangedWeaponAccountItems, const TArray<class UFortSchematicItem*>& SchematicWpnArray, const TArray<class FText>& WpnTypes, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable1, bool CallFunc_Not_PreBool_ReturnValue, TArray<class FText>& K2Node_MakeArray_Array, TArray<class UFortSchematicItem*>& K2Node_MakeArray_Array1, class UFortAccountItem* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UFortSchematicItem* K2Node_DynamicCast_AsFort_Schematic_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, class FText CallFunc_GetSecondaryCategory_ItemCategoryText, const struct FSlateBrush& CallFunc_GetSecondaryCategory_ItemCategoryBrush, bool CallFunc_GetSecondaryCategory_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, TArray<class UFortAccountItem*>& CallFunc_GetAccountItemsByFilterType_OutItemList, int32 Temp_int_Loop_Counter_Variable1, class FText CallFunc_Array_Get_Item1, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_EqualEqual_TextText_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue1);
	void UpdateVisibility(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue, bool CallFunc_HasCompletedQuest_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void PopulateSceneWithBestMeleeWeaponSchematics(const struct FTransform& Hammer_Transform, const struct FTransform& Sword_Transform, const TArray<class UFortAccountItem*>& MeleeWeaponAccountItems, const TArray<class UFortSchematicItem*>& SchematicWpnArray, const TArray<class FText>& WpnTypes, int32 Temp_int_Array_Index_Variable, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable1, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult1, int32 CallFunc_Add_IntInt_ReturnValue1, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, TArray<class UFortAccountItem*>& CallFunc_GetAccountItemsByFilterType_OutItemList, int32 Temp_int_Array_Index_Variable1, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UFortAccountItem* CallFunc_Array_Get_Item, class UFortSchematicItem* K2Node_DynamicCast_AsFort_Schematic_Item, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, class FText CallFunc_GetSecondaryCategory_ItemCategoryText, const struct FSlateBrush& CallFunc_GetSecondaryCategory_ItemCategoryBrush, bool CallFunc_GetSecondaryCategory_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class FText CallFunc_GetTertiaryCategory_ItemCategoryText, const struct FSlateBrush& CallFunc_GetTertiaryCategory_ItemCategoryBrush, bool CallFunc_GetTertiaryCategory_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, TArray<class FText>& K2Node_MakeArray_Array, TArray<class UFortSchematicItem*>& K2Node_MakeArray_Array1, class UFortSchematicItem* CallFunc_Array_Get_Item1, class UFortSchematicItem* CallFunc_Array_Get_Item2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class UFortWeaponItemDefinition* CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue, class UFortWeaponItemDefinition* CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue1, class USkeletalMesh* CallFunc_GetWeaponMeshOverride_ReturnValue, class USkeletalMesh* CallFunc_GetWeaponMeshOverride_ReturnValue1, const struct FBoxSphereBounds& CallFunc_GetBounds_ReturnValue, const struct FBoxSphereBounds& CallFunc_GetBounds_ReturnValue1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue1, const struct FHitResult& CallFunc_K2_AddLocalOffset_SweepHitResult, const struct FHitResult& CallFunc_K2_AddLocalOffset_SweepHitResult1, class FText CallFunc_Array_Get_Item3, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_EqualEqual_TextText_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue1, bool CallFunc_EqualEqual_TextText_ReturnValue1);
	void PopulateSceneWithBestRangedWeaponSchematics(const struct FTransform& RocketLauncher_Transform, const struct FTransform& Shotgun_Transform, const struct FTransform& Pistol_Transform, const struct FTransform& Sniper_Transform, const struct FTransform& Assault_Transform, const TArray<class UFortAccountItem*>& RangedWeaponAccountItems, const TArray<class UFortSchematicItem*>& SchematicWpnArray, const TArray<class FText>& WpnTypes, int32 Temp_int_Array_Index_Variable, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult, int32 Temp_int_Loop_Counter_Variable, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult1, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable1, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult2, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult3, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult4, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult5, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, int32 Temp_int_Loop_Counter_Variable1, TArray<class UFortAccountItem*>& CallFunc_GetAccountItemsByFilterType_OutItemList, int32 CallFunc_Add_IntInt_ReturnValue1, TArray<class FText>& K2Node_MakeArray_Array, class UFortAccountItem* CallFunc_Array_Get_Item, class UFortSchematicItem* K2Node_DynamicCast_AsFort_Schematic_Item, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, class FText CallFunc_GetSecondaryCategory_ItemCategoryText, const struct FSlateBrush& CallFunc_GetSecondaryCategory_ItemCategoryBrush, bool CallFunc_GetSecondaryCategory_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class UFortSchematicItem*>& K2Node_MakeArray_Array1, bool CallFunc_BooleanAND_ReturnValue, class UFortSchematicItem* CallFunc_Array_Get_Item1, bool CallFunc_IsValid_ReturnValue, class UFortSchematicItem* CallFunc_Array_Get_Item2, bool CallFunc_IsValid_ReturnValue1, class UFortWeaponItemDefinition* CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue, class USkeletalMesh* CallFunc_GetWeaponMeshOverride_ReturnValue, class UFortWeaponItemDefinition* CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue1, const struct FBoxSphereBounds& CallFunc_GetBounds_ReturnValue, class USkeletalMesh* CallFunc_GetWeaponMeshOverride_ReturnValue1, const struct FBoxSphereBounds& CallFunc_GetBounds_ReturnValue1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FHitResult& CallFunc_K2_AddLocalOffset_SweepHitResult, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue1, const struct FHitResult& CallFunc_K2_AddLocalOffset_SweepHitResult1, class UFortSchematicItem* CallFunc_Array_Get_Item3, bool CallFunc_IsValid_ReturnValue2, class UFortSchematicItem* CallFunc_Array_Get_Item4, bool CallFunc_IsValid_ReturnValue3, class UFortWeaponItemDefinition* CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue2, class USkeletalMesh* CallFunc_GetWeaponMeshOverride_ReturnValue2, class UFortWeaponItemDefinition* CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue3, const struct FBoxSphereBounds& CallFunc_GetBounds_ReturnValue2, class USkeletalMesh* CallFunc_GetWeaponMeshOverride_ReturnValue3, const struct FBoxSphereBounds& CallFunc_GetBounds_ReturnValue3, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue2, const struct FHitResult& CallFunc_K2_AddLocalOffset_SweepHitResult2, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue3, const class FString& CallFunc_GetObjectName_ReturnValue, const struct FHitResult& CallFunc_K2_AddLocalOffset_SweepHitResult3, bool CallFunc_Contains_ReturnValue, class UFortSchematicItem* CallFunc_Array_Get_Item5, bool CallFunc_IsValid_ReturnValue4, class UFortWeaponItemDefinition* CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue4, class USkeletalMesh* CallFunc_GetWeaponMeshOverride_ReturnValue4, class FText CallFunc_Array_Get_Item6, const struct FBoxSphereBounds& CallFunc_GetBounds_ReturnValue4, bool CallFunc_EqualEqual_TextText_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue4, const struct FHitResult& CallFunc_K2_AddLocalOffset_SweepHitResult4, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue1);
	void Populate_Skeletal_Mesh_Slots(class UFortWeaponItemDefinition* CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue, class UFortWeaponItemDefinition* CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue1, class USkeletalMesh* CallFunc_GetWeaponMeshOverride_ReturnValue, class USkeletalMesh* CallFunc_GetWeaponMeshOverride_ReturnValue1, class UFortWeaponItemDefinition* CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue2, class UFortWeaponItemDefinition* CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue3, class USkeletalMesh* CallFunc_GetWeaponMeshOverride_ReturnValue2, class USkeletalMesh* CallFunc_GetWeaponMeshOverride_ReturnValue3, class UFortWeaponItemDefinition* CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue4, class USkeletalMesh* CallFunc_GetWeaponMeshOverride_ReturnValue4);
	void Populate_Ranged(int32 FavSchematicCount, int32 Temp_int_Variable, bool Temp_bool_Variable, int32 Temp_int_Variable1, bool Temp_bool_Variable1, int32 Temp_int_Variable2, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, int32 Temp_int_Variable3, TArray<class UFortAccountItem*>& CallFunc_GetAccountItemsByType_Items, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, class UFortAccountItem* CallFunc_Array_Get_Item, UInterfaceProperty_ K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess, UInterfaceProperty_ K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface1, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool CallFunc_HasMatchingGameplayTag_ReturnValue1, UInterfaceProperty_ K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface2, bool K2Node_DynamicCast_bSuccess2, bool CallFunc_HasMatchingGameplayTag_ReturnValue2, UInterfaceProperty_ K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface3, bool K2Node_DynamicCast_bSuccess3, bool CallFunc_HasMatchingGameplayTag_ReturnValue3, UInterfaceProperty_ K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface4, bool K2Node_DynamicCast_bSuccess4, class UFortSchematicItem* K2Node_DynamicCast_AsFort_Schematic_Item, bool K2Node_DynamicCast_bSuccess5, bool CallFunc_HasMatchingGameplayTag_ReturnValue4, class UFortSchematicItem* K2Node_DynamicCast_AsFort_Schematic_Item1, bool K2Node_DynamicCast_bSuccess6, class UFortSchematicItem* K2Node_DynamicCast_AsFort_Schematic_Item2, bool K2Node_DynamicCast_bSuccess7, class UFortSchematicItem* K2Node_DynamicCast_AsFort_Schematic_Item3, bool K2Node_DynamicCast_bSuccess8, class UFortSchematicItem* K2Node_DynamicCast_AsFort_Schematic_Item4, bool K2Node_DynamicCast_bSuccess9, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_Variable2, int32 Temp_int_Variable4, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue3, int32 CallFunc_Add_IntInt_ReturnValue4, int32 CallFunc_Add_IntInt_ReturnValue5, bool Temp_bool_Variable3, bool Temp_bool_Variable4);
	void Generate_StaticMesh_Array(TArray<class USkeletalMeshComponent*>& K2Node_MakeArray_Array);
	void Populate_Schematic_Favs(int32 FavSchematicCount, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, TArray<class UFortAccountItem*>& CallFunc_GetAccountItemsByType_Items, int32 CallFunc_Add_IntInt_ReturnValue1, class UFortAccountItem* CallFunc_Array_Get_Item, class UFortSchematicItem* K2Node_DynamicCast_AsFort_Schematic_Item, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsFavorite_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 Temp_int_Variable, bool CallFunc_Greater_IntInt_ReturnValue);
	void UserConstructionScript(int32 FavSchematicCount, const TArray<class UFortSchematicItem*>& FavSchematics, bool NewLocalVar_0);
	void OnLoaded_2931F78441AF4AD6B643BEB635F904F1(class UObject* Loaded);
	void ReceiveBeginPlay();
	void LoadAsync(TSoftObjectPtr<class UStaticMesh> StaticMeshAsset, class UStaticMeshComponent* MeshComponent);
	void PopulateWeaponBoard(enum class EWeaponSmithBoardOrganizationEnum Organization);
	void CameraChanged(enum class EFrontEndCamera NewCamera, enum class EFrontEndCamera OldCamera);
	void ExecuteUbergraph_WeaponSmithBoard(int32 EntryPoint, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, TSoftObjectPtr<class UStaticMesh> K2Node_CustomEvent_StaticMeshAsset, class UStaticMeshComponent* K2Node_CustomEvent_MeshComponent, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, enum class EWeaponSmithBoardOrganizationEnum K2Node_CustomEvent_Organization, bool K2Node_SwitchEnum_CmpSuccess, class UObject* Temp_object_Variable, enum class EFrontEndCamera K2Node_CustomEvent_NewCamera, enum class EFrontEndCamera K2Node_CustomEvent_OldCamera, class UStaticMesh* K2Node_DynamicCast_AsStatic_Mesh, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_HasCompletedQuest_ReturnValue, class UObject* K2Node_CustomEvent_Loaded, TArray<class UFortSchematicItem*>& CallFunc_RandomizeRangedSchematics_RangedSchematicsForBoard, TArray<class UFortAccountItem*>& CallFunc_RandomizeMeleeSchematics_MeleeSchematicsForBoard);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif