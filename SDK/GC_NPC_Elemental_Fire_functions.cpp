#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function GC_NPC_Elemental_Fire.GC_NPC_Elemental_Fire_C.Death FX Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Remove                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AEnemyPawn_Parent_C*         Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGC_NPC_Elemental_Fire_C::Death_FX_Setup(bool Remove, class AEnemyPawn_Parent_C* Pawn)
{
	static auto Func = Class->GetFunction("GC_NPC_Elemental_Fire_C", "Death FX Setup");

	Params::AGC_NPC_Elemental_Fire_C_Death_FX_Setup_Params Parms;
	Parms.Remove = Remove;
	Parms.Pawn = Pawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GC_NPC_Elemental_Fire.GC_NPC_Elemental_Fire_C.OnRemove
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AEnemyPawn_Parent_C*         K2Node_DynamicCast_AsEnemy_Pawn_Parent                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_RemoveItem_ReturnValue1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AGC_NPC_Elemental_Fire_C::OnRemove(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, class AEnemyPawn_Parent_C* K2Node_DynamicCast_AsEnemy_Pawn_Parent, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue1, bool CallFunc_IsDedicatedServer_ReturnValue)
{
	static auto Func = Class->GetFunction("GC_NPC_Elemental_Fire_C", "OnRemove");

	Params::AGC_NPC_Elemental_Fire_C_OnRemove_Params Parms;
	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.K2Node_DynamicCast_AsEnemy_Pawn_Parent = K2Node_DynamicCast_AsEnemy_Pawn_Parent;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue1 = CallFunc_Array_RemoveItem_ReturnValue1;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GC_NPC_Elemental_Fire.GC_NPC_Elemental_Fire_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGC_NPC_Elemental_Fire_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("GC_NPC_Elemental_Fire_C", "UserConstructionScript");

	Params::AGC_NPC_Elemental_Fire_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GC_NPC_Elemental_Fire.GC_NPC_Elemental_Fire_C.K2_HandleGameplayCue
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGameplayCueEvent       EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void AGC_NPC_Elemental_Fire_C::K2_HandleGameplayCue(class AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("GC_NPC_Elemental_Fire_C", "K2_HandleGameplayCue");

	Params::AGC_NPC_Elemental_Fire_C_K2_HandleGameplayCue_Params Parms;
	Parms.MyTarget = MyTarget;
	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GC_NPC_Elemental_Fire.GC_NPC_Elemental_Fire_C.Rerun
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGC_NPC_Elemental_Fire_C::Rerun()
{
	static auto Func = Class->GetFunction("GC_NPC_Elemental_Fire_C", "Rerun");

	Params::AGC_NPC_Elemental_Fire_C_Rerun_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GC_NPC_Elemental_Fire.GC_NPC_Elemental_Fire_C.ExecuteUbergraph_GC_NPC_Elemental_Fire
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_MyTarget                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGameplayCueEvent       K2Node_Event_EventType                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_Event_Parameters                                          (ConstParm, ContainsInstancedReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AEnemyPawn_Parent_C*         K2Node_DynamicCast_AsEnemy_Pawn_Parent                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMeshComponent*              K2Node_DynamicCast_AsMesh_Component                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetComponentBounds_Origin                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetComponentBounds_BoxExtent                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetComponentBounds_SphereRadius                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Divide_VectorFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FParticleSysParam           K2Node_MakeStruct_ParticleSysParam                               (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FParticleSysParam>   K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FParticleSysParam           K2Node_MakeStruct_ParticleSysParam1                              (IsPlainOldData, NoDestructor)
// TArray<struct FParticleSysParam>   K2Node_MakeArray_Array1                                          (ZeroConstructor, ReferenceParm)
// struct FParticleSysParam           K2Node_MakeStruct_ParticleSysParam2                              (IsPlainOldData, NoDestructor)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FParticleSysParam           K2Node_MakeStruct_ParticleSysParam3                              (IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FParticleSysParam>   K2Node_MakeArray_Array2                                          (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGC_NPC_Elemental_Fire_C::ExecuteUbergraph_GC_NPC_Elemental_Fire(int32 EntryPoint, class AActor* K2Node_Event_MyTarget, enum class EGameplayCueEvent K2Node_Event_EventType, const struct FGameplayCueParameters& K2Node_Event_Parameters, bool K2Node_SwitchEnum_CmpSuccess, class AEnemyPawn_Parent_C* K2Node_DynamicCast_AsEnemy_Pawn_Parent, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue1, bool CallFunc_K2_AttachToComponent_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue2, class UObject* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UMeshComponent* K2Node_DynamicCast_AsMesh_Component, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue1, const struct FVector& CallFunc_GetComponentBounds_Origin, const struct FVector& CallFunc_GetComponentBounds_BoxExtent, float CallFunc_GetComponentBounds_SphereRadius, const struct FVector& CallFunc_Divide_VectorFloat_ReturnValue, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, TArray<struct FParticleSysParam>& K2Node_MakeArray_Array, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam1, TArray<struct FParticleSysParam>& K2Node_MakeArray_Array1, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam2, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam3, bool CallFunc_K2_AttachToComponent_ReturnValue2, TArray<struct FParticleSysParam>& K2Node_MakeArray_Array2, bool CallFunc_IsDedicatedServer_ReturnValue)
{
	static auto Func = Class->GetFunction("GC_NPC_Elemental_Fire_C", "ExecuteUbergraph_GC_NPC_Elemental_Fire");

	Params::AGC_NPC_Elemental_Fire_C_ExecuteUbergraph_GC_NPC_Elemental_Fire_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MyTarget = K2Node_Event_MyTarget;
	Parms.K2Node_Event_EventType = K2Node_Event_EventType;
	Parms.K2Node_Event_Parameters = K2Node_Event_Parameters;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsEnemy_Pawn_Parent = K2Node_DynamicCast_AsEnemy_Pawn_Parent;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue1 = CallFunc_Array_AddUnique_ReturnValue1;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue2 = CallFunc_Array_AddUnique_ReturnValue2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsMesh_Component = K2Node_DynamicCast_AsMesh_Component;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue1 = CallFunc_K2_AttachToComponent_ReturnValue1;
	Parms.CallFunc_GetComponentBounds_Origin = CallFunc_GetComponentBounds_Origin;
	Parms.CallFunc_GetComponentBounds_BoxExtent = CallFunc_GetComponentBounds_BoxExtent;
	Parms.CallFunc_GetComponentBounds_SphereRadius = CallFunc_GetComponentBounds_SphereRadius;
	Parms.CallFunc_Divide_VectorFloat_ReturnValue = CallFunc_Divide_VectorFloat_ReturnValue;
	Parms.K2Node_MakeStruct_ParticleSysParam = K2Node_MakeStruct_ParticleSysParam;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.K2Node_MakeStruct_ParticleSysParam1 = K2Node_MakeStruct_ParticleSysParam1;
	Parms.K2Node_MakeArray_Array1 = K2Node_MakeArray_Array1;
	Parms.K2Node_MakeStruct_ParticleSysParam2 = K2Node_MakeStruct_ParticleSysParam2;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_MakeStruct_ParticleSysParam3 = K2Node_MakeStruct_ParticleSysParam3;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue2 = CallFunc_K2_AttachToComponent_ReturnValue2;
	Parms.K2Node_MakeArray_Array2 = K2Node_MakeArray_Array2;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
