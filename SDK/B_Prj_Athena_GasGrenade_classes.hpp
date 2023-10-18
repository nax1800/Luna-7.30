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

// 0x204 (0x98C - 0x788)
// BlueprintGeneratedClass B_Prj_Athena_GasGrenade.B_Prj_Athena_GasGrenade_C
class AB_Prj_Athena_GasGrenade_C : public AFortProjectileBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x788(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPostProcessComponent*                 PostProcessComponent;                              // 0x790(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      PostProcessParentShape;                            // 0x798(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SmokeVolumeMesh;                                   // 0x7A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              P_GasGrenade_InnerSmoke;                           // 0x7A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       AudioReleaseSmoke;                                 // 0x7B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                     OverlapCapsule;                                    // 0x7B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URotatingMovementComponent*            RotatingMovement;                                  // 0x7C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              SmokeTrail_Particle;                               // 0x7C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Mesh;                                              // 0x7D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       GrenadeFuse_AudioComponent;                        // 0x7D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Effect_Distance;                                   // 0x7E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        FadeSmokeTL_Float_2626207A4A43AC642A80FF89AC59D028; // 0x7E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                FadeSmokeTL__Direction_2626207A4A43AC642A80FF89AC59D028; // 0x7EC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_66EB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    FadeSmokeTL;                                       // 0x7F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Cue_CloseSound;                                    // 0x7F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DoT_TickRate;                                      // 0x800(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GasDuration;                                       // 0x804(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GasGrenadeLifespan;                                // 0x808(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GasDelayBeforeFadeIn;                              // 0x80C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GasFadeOutTime;                                    // 0x810(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GasFadeInTime;                                     // 0x814(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              SmokeVolumeMeshMID;                                // 0x818(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GasGrenadeRadius;                                  // 0x820(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_66EC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioComponent*                       Audio_ReleaseSmoke;                                // 0x828(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                        CurrentTargetArray;                                // 0x830(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AActor*>                        PreviousTargetArray;                               // 0x840(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FGameplayEffectQuery                  NewVar_0;                                          // 0x850(0x138)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	float                                        SyncedDelay;                                       // 0x988(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_Prj_Athena_GasGrenade_C");
		return Clss;
	}

	void UserConstructionScript(bool CallFunc_IsDedicatedServer_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
	void FadeSmokeTL__FinishedFunc();
	void FadeSmokeTL__UpdateFunc();
	void OnStop(struct FHitResult& Hit);
	void Stop_Rotation();
	void DamageTick();
	void FadeIn();
	void FadeOut();
	void SyncedTimer();
	void ExecuteUbergraph_B_Prj_Athena_GasGrenade(int32 EntryPoint, bool Temp_bool_Variable, float CallFunc_Multiply_FloatFloat_ReturnValue, float Temp_float_Variable, const struct FHitResult& K2Node_Event_Hit, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, bool Temp_bool_Variable1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, enum class EEvaluateCurveTableResult CallFunc_EvaluateCurveTableRow_OutResult, float CallFunc_EvaluateCurveTableRow_OutXY, bool K2Node_SwitchEnum_CmpSuccess, enum class EEvaluateCurveTableResult CallFunc_EvaluateCurveTableRow_OutResult1, float CallFunc_EvaluateCurveTableRow_OutXY1, bool K2Node_SwitchEnum1_CmpSuccess, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float K2Node_Select_Default, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue1, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue1, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue1, float CallFunc_Subtract_FloatFloat_ReturnValue1, float CallFunc_Subtract_FloatFloat_ReturnValue2, enum class EEvaluateCurveTableResult CallFunc_EvaluateCurveTableRow_OutResult2, float CallFunc_EvaluateCurveTableRow_OutXY2, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue2, bool K2Node_SwitchEnum2_CmpSuccess, float Temp_float_Variable1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue2, float K2Node_Select1_Default, float CallFunc_Divide_FloatFloat_ReturnValue1, float CallFunc_Subtract_FloatFloat_ReturnValue3);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
