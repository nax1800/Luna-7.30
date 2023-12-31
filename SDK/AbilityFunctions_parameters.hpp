#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x74 (0x74 - 0x0)
// Function AbilityFunctions.AbilityFunctions_C.ApplySlowFall
struct UAbilityFunctions_C_ApplySlowFall_Params
{
public:
	float                                        SlowFallDuration;                                  // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B8D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGameplayAbility*                  SelfGameplayAbilityReference;                      // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                GameplayEffect;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           EffectSpecHandle;                                  // 0x20(0x8)(Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x28(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B8E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEffectSpecHandle             CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue; // 0x38(0x10)()
	class AActor*                                CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectSpecHandle             CallFunc_AssignTagSetByCallerMagnitude_ReturnValue; // 0x50(0x10)()
	class AFortPawn*                             K2Node_DynamicCast_AsFort_Pawn;                    // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B8F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FActiveGameplayEffectHandle           CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue; // 0x6C(0x8)(NoDestructor, HasGetValueTypeHash)
};

// 0x44 (0x44 - 0x0)
// Function AbilityFunctions.AbilityFunctions_C.GetDistanceBetweenActors
struct UAbilityFunctions_C_GetDistanceBetweenActors_Params
{
public:
	class AActor*                                Actor1;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                Actor2;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Distance;                                          // 0x18(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x1C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue1;         // 0x28(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x34(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_VSize_ReturnValue;                        // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x39 (0x39 - 0x0)
// Function AbilityFunctions.AbilityFunctions_C.GetPawnFromPlayerStateZone
struct UAbilityFunctions_C_GetPawnFromPlayerStateZone_Params
{
public:
	class AActor*                                InActor;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       OutPawn;                                           // 0x10(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PawnReturned;                                      // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B90[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerStateZone*                  K2Node_DynamicCast_AsFort_Player_State_Zone;       // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B91[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerPawn*                       CallFunc_GetCurrentPawn_ReturnValue;               // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue1;                     // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xE8 (0xE8 - 0x0)
// Function AbilityFunctions.AbilityFunctions_C.EvaluatePerkTierBalanceValue
struct UAbilityFunctions_C_EvaluatePerkTierBalanceValue_Params
{
public:
	struct FScalableFloat                        T01_Balance_Value;                                 // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FScalableFloat                        T02_Balance_Value;                                 // 0x20(0x20)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         Owns_T02;                                          // 0x40(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Should_Override_T01;                               // 0x41(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B92[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x48(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        Balance_Value;                                     // 0x50(0x20)(Parm, OutParm)
	bool                                         Temp_bool_Variable;                                // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable1;                               // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable2;                               // 0x72(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B93[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetValueAtLevel_ReturnValue;              // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetValueAtLevel_ReturnValue1;             // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Select_Default;                             // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B94[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        K2Node_MakeStruct_ScalableFloat;                   // 0x88(0x20)()
	struct FScalableFloat                        K2Node_Select1_Default;                            // 0xA8(0x20)()
	struct FScalableFloat                        K2Node_Select2_Default;                            // 0xC8(0x20)()
};

// 0x1AC (0x1AC - 0x0)
// Function AbilityFunctions.AbilityFunctions_C.GetRangeFromGameplayEffectContainer
struct UAbilityFunctions_C_GetRangeFromGameplayEffectContainer_Params
{
public:
	struct FFortGameplayEffectContainer          GE_Container;                                      // 0x0(0x90)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                        Target_Selection_List_Index;                       // 0x90(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        At_Level;                                          // 0x94(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x98(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Range;                                             // 0xA0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B95[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortAbilityTargetSelection           CallFunc_Array_Get_Item;                           // 0xA8(0x100)()
	float                                        CallFunc_GetValueAtLevel_ReturnValue;              // 0x1A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function AbilityFunctions.AbilityFunctions_C.GetTotalGameplayEffectCount
struct UAbilityFunctions_C_GetTotalGameplayEffectCount_Params
{
public:
	TArray<class UClass*>                        EffectsToCount;                                    // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UAbilitySystemComponent*               AbilitySystemComponent;                            // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        FinalEffectCount;                                  // 0x20(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        TempTotalEffectCount;                              // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B96[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_Array_Get_Item;                           // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetGameplayEffectCount_ReturnValue;       // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B97[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue1;                  // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x44 (0x44 - 0x0)
// Function AbilityFunctions.AbilityFunctions_C.GetAngleBetweenTwoVectors
struct UAbilityFunctions_C_GetAngleBetweenTwoVectors_Params
{
public:
	struct FVector                               VectorA;                                           // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               VectorB;                                           // 0xC(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Angle__Degrees_;                                   // 0x20(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Normal_ReturnValue;                       // 0x24(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Normal_ReturnValue1;                      // 0x30(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Dot_VectorVector_ReturnValue;             // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_DegAcos_ReturnValue;                      // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19C (0x19C - 0x0)
// Function AbilityFunctions.AbilityFunctions_C.GetRangeFromGameplayEffectContainerSpec
struct UAbilityFunctions_C_GetRangeFromGameplayEffectContainerSpec_Params
{
public:
	struct FFortGameplayEffectContainerSpec      GE_Container_Spec;                                 // 0x0(0x80)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                        Target_Selection_List_Index;                       // 0x80(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        At_Level;                                          // 0x84(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x88(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Range;                                             // 0x90(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B98[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortAbilityTargetSelection           CallFunc_Array_Get_Item;                           // 0x98(0x100)()
	float                                        CallFunc_GetValueAtLevel_ReturnValue;              // 0x198(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA8 (0xA8 - 0x0)
// Function AbilityFunctions.AbilityFunctions_C.GetProjectedTeleportLocation
struct UAbilityFunctions_C_GetProjectedTeleportLocation_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MovementDistance;                                  // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B99[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               TargetLocation;                                    // 0x18(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetVelocity_ReturnValue;                  // 0x24(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x30(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_X;                            // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Y;                            // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Z;                            // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_VSize_ReturnValue;                        // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_FloatFloat_ReturnValue;        // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_FloatFloat_ReturnValue1;       // 0x4D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_FloatFloat_ReturnValue2;       // 0x4E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B9A[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_GetActorForwardVector_ReturnValue;        // 0x50(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x5D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B9B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_SelectVector_ReturnValue;                 // 0x60(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_X1;                           // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Y1;                           // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Z1;                           // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x78(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Normal_ReturnValue;                       // 0x84(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x90(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x9C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC3 (0xC3 - 0x0)
// Function AbilityFunctions.AbilityFunctions_C.ShouldSwordHitsHealRespondToEvent
struct UAbilityFunctions_C_ShouldSwordHitsHealRespondToEvent_Params
{
public:
	struct FGameplayEventData                    Payload;                                           // 0x0(0xA8)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               __WorldContext;                                    // 0xA8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0xB0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasAllTags_ReturnValue;                   // 0xB1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasAllTags_ReturnValue1;                  // 0xB2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B9C[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPawn*                             K2Node_DynamicCast_AsFort_Pawn;                    // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xC1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue1;                  // 0xC2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC3 (0xC3 - 0x0)
// Function AbilityFunctions.AbilityFunctions_C.ShouldHammerHitsHealRespondToEvent
struct UAbilityFunctions_C_ShouldHammerHitsHealRespondToEvent_Params
{
public:
	struct FGameplayEventData                    Payload;                                           // 0x0(0xA8)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               __WorldContext;                                    // 0xA8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0xB0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                         NewLocalVar_0;                                     // 0xB1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasAllTags_ReturnValue;                   // 0xB2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasAllTags_ReturnValue1;                  // 0xB3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B9D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPawn*                             K2Node_DynamicCast_AsFort_Pawn;                    // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xC1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue1;                  // 0xC2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function AbilityFunctions.AbilityFunctions_C.ConvertRangeToTiles
struct UAbilityFunctions_C_ConvertRangeToTiles_Params
{
public:
	float                                        InRange;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B9E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        OutTile;                                           // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x74 (0x74 - 0x0)
// Function AbilityFunctions.AbilityFunctions_C.SetArrayOfHitActors
struct UAbilityFunctions_C_SetArrayOfHitActors_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<class AActor*>                        ArrayToSet;                                        // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                               __WorldContext;                                    // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetDataCountFromTargetData_ReturnValue;   // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B9F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        CallFunc_GetActorsFromTargetData_ReturnValue;      // 0x48(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3BA0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_Array_Get_Item;                           // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3BA1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x84 (0x84 - 0x0)
// Function AbilityFunctions.AbilityFunctions_C.DoNOTUse-BuildArrayOfHitActors
struct UAbilityFunctions_C_DoNOTUse_BuildArrayOfHitActors_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               __WorldContext;                                    // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                        HitActors;                                         // 0x28(0x10)(Parm, OutParm, ZeroConstructor)
	TArray<class AActor*>                        LocalHitActors;                                    // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	int32                                        CallFunc_GetDataCountFromTargetData_ReturnValue;   // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BA2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        CallFunc_GetActorsFromTargetData_ReturnValue;      // 0x58(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3BA3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_Array_Get_Item;                           // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3BA4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
