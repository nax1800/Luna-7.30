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

// 0x48 (0x420 - 0x3D8)
// BlueprintGeneratedClass B_AthenaPlayerMarker_WithCustomization.B_AthenaPlayerMarker_WithCustomization_C
class AB_AthenaPlayerMarker_WithCustomization_C : public AB_AthenaMapMarkerBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                TopperClass;                                       // 0x3E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortMapMarkerTopperActor*             TopperInstance;                                    // 0x3E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            TopperTransform;                                   // 0x3F0(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_AthenaPlayerMarker_WithCustomization_C");
		return Clss;
	}

	void UserConstructionScript();
	void OnLoaded_8A042AD24DC8A8C0E9D8E0B4BF3B6C37(class UClass* Loaded);
	void OnSetupMarker(struct FPlayerMarkerData& MarkerData);
	void OnMarkerHidden();
	void UpdateTopper();
	void OnMarkerPlaced();
	void ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, const struct FPlayerMarkerData& K2Node_Event_MarkerData, bool CallFunc_IsValid_ReturnValue, class UClass* Temp_class_Variable, class UClass* K2Node_ClassDynamicCast_AsFort_Map_Marker_Topper_Actor, bool K2Node_ClassDynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue1, class UClass* CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsFort_Map_Marker_Topper_Actor1, bool K2Node_ClassDynamicCast_bSuccess1, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_IsValid_ReturnValue2, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue1, bool CallFunc_NotEqual_ClassClass_ReturnValue, class UClass* K2Node_CustomEvent_Loaded, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AFortMapMarkerTopperActor* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
