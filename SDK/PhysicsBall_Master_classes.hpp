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

// 0xB0 (0x8A0 - 0x7F0)
// BlueprintGeneratedClass PhysicsBall_Master.PhysicsBall_Master_C
class APhysicsBall_Master_C : public AFortPhysicsBall
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  Ball;                                              // 0x7F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortVehicleAudioVoice*                RollingAudio;                                      // 0x800(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortCollisionAudioComponent*          FortCollisionAudio;                                // 0x808(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UProjectileMovementComponent*          ProjectileMovement;                                // 0x810(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        VelocityHitMagMultiplier;                          // 0x818(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HitPitch;                                          // 0x81C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SpeedToRotationRateRatio;                          // 0x820(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               LastVelocity;                                      // 0x824(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DamageHitMagMultiplier;                            // 0x830(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HitMagMax;                                         // 0x834(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            BallHitSound;                                      // 0x838(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               OtherVelocity;                                     // 0x840(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               OtherLocation;                                     // 0x84C(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MinAngularPower;                                   // 0x858(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HitOtherBall;                                      // 0x85C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HitOtherPawn;                                      // 0x85D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ServerAuthoritative;                               // 0x85E(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         PlotTrajectory;                                    // 0x85F(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor)
	struct FVector                               Debug_LastPosition;                                // 0x860(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               InitialSpawnPosition;                              // 0x86C(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         EverCameToRest;                                    // 0x878(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_539E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        BounceCount;                                       // 0x87C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              GenericImpactFX;                                   // 0x880(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              WaterImpactFX;                                     // 0x888(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DustRadius;                                        // 0x890(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               DustSize;                                          // 0x894(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PhysicsBall_Master_C");
		return Clss;
	}

	void ImpactFX(class AActor* HitActor, const struct FVector& SpawnLocation, bool Overlap_, bool IsInWater, const struct FVector& SpawnLoc, bool Temp_bool_Variable, class ABP_Athena_Water_C* K2Node_DynamicCast_AsBP_Athena_Water, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Variable, int32 Temp_int_Variable1, TArray<class AActor*>& Temp_object_Variable, int32 K2Node_Select_Default, TArray<class AActor*>& Temp_object_Variable1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue1, const struct FHitResult& CallFunc_SphereTraceSingle_OutHit, bool CallFunc_SphereTraceSingle_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue1, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit1, bool CallFunc_BreakHitResult_bInitialOverlap1, float CallFunc_BreakHitResult_Time1, float CallFunc_BreakHitResult_Distance1, const struct FVector& CallFunc_BreakHitResult_Location1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint1, const struct FVector& CallFunc_BreakHitResult_Normal1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat1, class AActor* CallFunc_BreakHitResult_HitActor1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent1, class FName CallFunc_BreakHitResult_HitBoneName1, int32 CallFunc_BreakHitResult_HitItem1, int32 CallFunc_BreakHitResult_FaceIndex1, const struct FVector& CallFunc_BreakHitResult_TraceStart1, const struct FVector& CallFunc_BreakHitResult_TraceEnd1, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void MakeBallDormant();
	void SetBallVelocityAndStartTicking(const struct FVector& NewVelocity, bool LocalIsTicking, bool CallFunc_NotEqual_VectorVector_ReturnValue);
	void OnRep_PlotTrajectory(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, const class FString& CallFunc_Conv_VectorToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	float GetHitScale(const struct FVector& HitLocation, const struct FVector& HitVelocity, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue1, float CallFunc_Dot_VectorVector_ReturnValue, float CallFunc_FClamp_ReturnValue);
	void SetTickingEnabled(bool ShouldTick, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void ApplyImpulseToBall(const struct FVector& HitLocation, const struct FVector& HitVelocity, float HitMagnitude, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Square_ReturnValue, float CallFunc_SelectFloat_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_GetHitScale_ReturnValue, float CallFunc_FMin_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_ClampVectorSize_ReturnValue);
	void UpdateDirectionAndRotationRate(float DeltaSeconds);
	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ProjectileStop(struct FHitResult& ImpactResult);
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void OnReplicatedVelocityStartOrStop(bool bStart);
	void DrawDebugTrajectory();
	void BndEvt__SphereCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void OnPawnTouchedMe(class APawn* TouchingPawn);
	void ExecuteUbergraph_PhysicsBall_Master(int32 EntryPoint, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue1, float K2Node_Event_DeltaSeconds, const struct FHitResult& K2Node_CustomEvent_ImpactResult, class UPrimitiveComponent* K2Node_Event_MyComp, class AActor* K2Node_Event_Other, class UPrimitiveComponent* K2Node_Event_OtherComp, bool K2Node_Event_bSelfMoved, const struct FVector& K2Node_Event_HitLocation, const struct FVector& K2Node_Event_HitNormal, const struct FVector& K2Node_Event_NormalImpulse, const struct FHitResult& K2Node_Event_Hit, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, float CallFunc_VSize_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, bool CallFunc_OnCollision_OutResult, float CallFunc_OnCollision_OutMagnitude, bool K2Node_Event_bStart, float CallFunc_SelectFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_OnCollision_OutResult1, float CallFunc_OnCollision_OutMagnitude1, bool CallFunc_BooleanOR_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, bool CallFunc_NotEqual_VectorVector_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue2, const struct FVector& CallFunc_GetVelocity_ReturnValue1, bool CallFunc_NotEqual_VectorVector_ReturnValue1, bool CallFunc_IsDedicatedServer_ReturnValue3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue3, bool CallFunc_IsVelocityUnderSimulationThreshold_ReturnValue, bool CallFunc_IsInterpolationComplete_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsDedicatedServer_ReturnValue4, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, class APhysicsBall_Master_C* K2Node_DynamicCast_AsPhysics_Ball_Master, bool K2Node_DynamicCast_bSuccess1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue4, const struct FVector& CallFunc_GetVelocity_ReturnValue2, class APawn* K2Node_CustomEvent_TouchingPawn);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif