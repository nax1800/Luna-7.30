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

// 0xF8 (0x488 - 0x390)
// BlueprintGeneratedClass MusicManager.MusicManager_C
class AMusicManager_C : public AFortMusicManager
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x390(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                       Boss_Music_B;                                      // 0x398(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Boss_Weak_Point_Stinger;                           // 0x3A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Boss_DBNO_Music;                                   // 0x3A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Boss_Music_A;                                      // 0x3B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Gameplay_Music_Fader_Volume_9439D7624B6E99ADF50793B4628A7615; // 0x3B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Gameplay_Music_Fader__Direction_9439D7624B6E99ADF50793B4628A7615; // 0x3BC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E45[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Gameplay_Music_Fader;                              // 0x3C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            MusicFrontend;                                     // 0x3C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            MusicLobby;                                        // 0x3D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            StingerReturningToAmbientMusic;                    // 0x3D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Debug;                                             // 0x3E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E46[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  GameMode_Current;                                  // 0x3E4(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  GameMode_Lobby;                                    // 0x3EC(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  GameMode_Frontend;                                 // 0x3F4(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  GameMode_InGame;                                   // 0x3FC(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PlayStingerWhenReturningToAmbientMusic;            // 0x404(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         PlayingAmbientMusic;                               // 0x405(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         PlayingThreatMusic;                                // 0x406(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         PlayingNearbyEnemiesMusic;                         // 0x407(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         PlayingHuskLowMusic;                               // 0x408(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         PlayingHuskHighMusic;                              // 0x409(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         PlayingLargeEnemyMusic;                            // 0x40A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E47[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LastTimeMusicWasStartedOrContinued;                // 0x40C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentMusicIntensityLevel;                        // 0x410(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortDayPhase                     CurrentDayPhase;                                   // 0x414(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E48[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MusicLogicUpdateTickTime;                          // 0x418(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MinDurationBeforeMusicCanIncreaseIntensity;        // 0x41C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        IntensityIncreaseFadeTime;                         // 0x420(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMusicFadeStyles                  IntensityIncreaseFadeStyle;                        // 0x424(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E49[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinDurationBeforeMusicCanDecreaseInIntensity;      // 0x428(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        IntensityDecreaseFadeTime;                         // 0x42C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMusicFadeStyles                  IntensityDecreaseFadeStyle;                        // 0x430(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MusicShouldStop;                                   // 0x431(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         PlayingStingerMusic;                               // 0x432(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E4A[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        IntensityVeryHigh;                                 // 0x434(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        IntensityHigh;                                     // 0x438(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        IntensityMedium;                                   // 0x43C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        IntensityLow;                                      // 0x440(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E4B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortMusicAsset*                       DeathMusic;                                        // 0x448(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Countdown_Music_;                                  // 0x450(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E4C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioComponent*                       Coundown_Atlas_Music;                              // 0x458(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewVar_0;                                          // 0x460(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E4D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioComponent*                       Mission_Music;                                     // 0x468(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_Boss_Fight;                                     // 0x470(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E4E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioComponent*                       Weak_Point_Music;                                  // 0x478(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Current_Boss_Music;                                // 0x480(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MusicManager_C");
		return Clss;
	}

	void ResetMusicBools();
	void UserConstructionScript(class AFortPlayerControllerFrontEnd* K2Node_DynamicCast_AsFort_Player_Controller_Front_End, bool K2Node_DynamicCast_bSuccess, class AFortPlayerControllerFrontEnd* K2Node_DynamicCast_AsFort_Player_Controller_Front_End1, bool K2Node_DynamicCast_bSuccess1);
	void Gameplay_Music_Fader__FinishedFunc();
	void Gameplay_Music_Fader__UpdateFunc();
	void Stop_Boss_Music();
	void Play_Boss_Music(class USoundBase* Sound);
	void Start_Boss_DBNO_Music(class USoundBase* Sound);
	void Stop_Boss_DBNO_Music();
	void Player_Fighting_Boss_DBNO();
	void Start_Weak_Point_Music(class USoundBase* Sound);
	void Stop_Weakpoint_Music();
	void OnDayPhaseChanged(enum class EFortDayPhase CurrentDayPhase, enum class EFortDayPhase PreviousDayPhase, bool bAtCreation);
	void OnUpdateMusic();
	void PlayAmbientMusic();
	void ReceiveBeginPlay();
	void On_Music_Tick();
	void PlayStinger(class UFortMusicAsset* NewMusicAsset);
	void Music_Fade_In(float Time);
	void Music_Fade_Out(float Time);
	void On_Stinger_Completed(class UFortMusicVoice* Voice);
	void Gather_Combat_Graph_Tresholds();
	void OnMusicBankChanged(class UFortMusicManagerBank* NewBank);
	void OnPlayerDowned(struct FFortPlayerDeathReport& DeathReport);
	void Play_Countdown_Music(float Counter);
	void Play_Mission_Music(class USoundBase* Sound);
	void Stop_Mission_Music(class UAudioComponent* Mission_Music);
	void ExecuteUbergraph_MusicManager(int32 EntryPoint, bool CallFunc_NotEqual_IntInt_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue1, bool CallFunc_Greater_FloatFloat_ReturnValue, float Temp_float_Variable, class UFortMusicManagerBank* CallFunc_GetMusicBank_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue2, float CallFunc_Subtract_FloatFloat_ReturnValue1, bool CallFunc_Greater_FloatFloat_ReturnValue1, class UFortMusicManagerBank* CallFunc_GetMusicBank_ReturnValue1, float CallFunc_GetGameTimeInSeconds_ReturnValue3, float Temp_float_Variable1, float CallFunc_GetGameTimeInSeconds_ReturnValue4, float CallFunc_Subtract_FloatFloat_ReturnValue2, bool CallFunc_Greater_FloatFloat_ReturnValue2, float CallFunc_GetGameTimeInSeconds_ReturnValue5, float CallFunc_GetGameTimeInSeconds_ReturnValue6, bool Temp_bool_Variable, float CallFunc_GetGameTimeInSeconds_ReturnValue7, float CallFunc_Subtract_FloatFloat_ReturnValue3, bool CallFunc_Greater_FloatFloat_ReturnValue3, float CallFunc_Subtract_FloatFloat_ReturnValue4, bool CallFunc_Greater_FloatFloat_ReturnValue4, bool CallFunc_NotEqual_IntInt_ReturnValue1, float Temp_float_Variable2, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue1, bool CallFunc_EqualEqual_NameName_ReturnValue2, bool CallFunc_EqualEqual_NameName_ReturnValue3, float Temp_float_Variable3, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_EqualEqual_NameName_ReturnValue4, bool CallFunc_EqualEqual_NameName_ReturnValue5, float CallFunc_GetWorldDeltaSeconds_ReturnValue, bool Temp_bool_Variable1, float CallFunc_GetWorldDeltaSeconds_ReturnValue1, float CallFunc_GetWorldDeltaSeconds_ReturnValue2, class UFortMusicManagerBank* CallFunc_GetMusicBank_ReturnValue2, float Temp_float_Variable4, bool Temp_bool_IsClosed_Variable, float CallFunc_GetWorldDeltaSeconds_ReturnValue3, float Temp_float_Variable5, bool CallFunc_EqualEqual_NameName_ReturnValue6, bool CallFunc_EqualEqual_NameName_ReturnValue7, bool Temp_bool_Variable2, bool Temp_bool_IsClosed_Variable1, bool Temp_bool_Has_Been_Initd_Variable1, bool CallFunc_NotEqual_IntInt_ReturnValue2, bool Temp_bool_IsClosed_Variable2, bool Temp_bool_Has_Been_Initd_Variable2, class USoundBase* K2Node_CustomEvent_Sound3, class USoundBase* K2Node_CustomEvent_Sound2, float Temp_float_Variable6, float CallFunc_GetGameTimeInSeconds_ReturnValue8, class USoundBase* K2Node_CustomEvent_Sound1, float CallFunc_Subtract_FloatFloat_ReturnValue5, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue5, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class UFortMusicManagerBank* CallFunc_GetMusicBank_ReturnValue3, class UFortMusicAsset* CallFunc_GetAssetFromDayPhase_ReturnValue, class UFortMusicVoice* CallFunc_ChangePrimaryMusic_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable3, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue9, enum class EFortDayPhase K2Node_Event_CurrentDayPhase, enum class EFortDayPhase K2Node_Event_PreviousDayPhase, bool K2Node_Event_bAtCreation, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_IsClosed_Variable3, float Temp_float_Variable7, bool CallFunc_IsNearActiveEncounters_ReturnValue, bool Temp_bool_Variable3, bool CallFunc_Not_PreBool_ReturnValue1, float CallFunc_GetGameTimeInSeconds_ReturnValue10, float CallFunc_Subtract_FloatFloat_ReturnValue6, bool CallFunc_Greater_FloatFloat_ReturnValue6, bool CallFunc_NotEqual_IntInt_ReturnValue3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable4, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue2, bool CallFunc_IsValid_ReturnValue1, class AFortPlayerPawn* CallFunc_GetPlayerPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue, class UFortMusicManagerBank* CallFunc_GetMusicBank_ReturnValue4, class UFortMusicAsset* CallFunc_GetAssetFromDayPhase_ReturnValue1, class UFortMusicVoice* CallFunc_ChangePrimaryMusic_ReturnValue1, class UFortMusicAsset* K2Node_Event_NewMusicAsset, class UFortMusicVoice* CallFunc_PlayMusicVoice_ReturnValue, float K2Node_CustomEvent_Time1, float K2Node_CustomEvent_Time, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue1, class UFortMusicVoice* K2Node_CustomEvent_Voice, uint8 CallFunc_MakeLiteralByte_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue1, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue1, int32 CallFunc_MakeLiteralInt_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue2, class UFortMusicAsset* CallFunc_GetAssetFromCombatIntensity_ReturnValue, class UFortMusicAsset* CallFunc_GetAssetFromCombatIntensity_ReturnValue1, class UFortMusicVoice* CallFunc_ChangePrimaryMusic_ReturnValue2, class UFortMusicVoice* CallFunc_ChangePrimaryMusic_ReturnValue3, bool Temp_bool_Variable5, bool CallFunc_Not_PreBool_ReturnValue3, class UFortMusicManagerBank* CallFunc_GetMusicBank_ReturnValue5, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue1, bool CallFunc_Greater_FloatFloat_ReturnValue7, bool CallFunc_Greater_FloatFloat_ReturnValue8, bool CallFunc_Less_FloatFloat_ReturnValue2, bool CallFunc_Less_FloatFloat_ReturnValue3, bool CallFunc_Greater_FloatFloat_ReturnValue9, bool CallFunc_Greater_FloatFloat_ReturnValue10, class UFortMusicManagerBank* K2Node_Event_NewBank, uint8 CallFunc_MakeLiteralByte_ReturnValue2, int32 CallFunc_Conv_ByteToInt_ReturnValue2, class UFortMusicAsset* CallFunc_GetAssetFromCombatIntensity_ReturnValue2, int32 CallFunc_MakeLiteralInt_ReturnValue2, class UFortMusicVoice* CallFunc_ChangePrimaryMusic_ReturnValue4, bool CallFunc_Greater_IntInt_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue3, const struct FFortPlayerDeathReport& K2Node_Event_DeathReport, class UFortMusicVoice* CallFunc_ChangePrimaryMusic_ReturnValue5, uint8 CallFunc_MakeLiteralByte_ReturnValue3, float K2Node_CustomEvent_Counter, bool CallFunc_LessEqual_FloatFloat_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue3, int32 CallFunc_MakeLiteralInt_ReturnValue3, class UFortMusicAsset* CallFunc_GetAssetFromCombatIntensity_ReturnValue3, class UFortMusicVoice* CallFunc_ChangePrimaryMusic_ReturnValue6, bool CallFunc_Greater_IntInt_ReturnValue3, bool CallFunc_BooleanAND_ReturnValue4, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue1, float CallFunc_GetGameTimeInSeconds_ReturnValue11, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue7, bool CallFunc_Greater_FloatFloat_ReturnValue11, bool CallFunc_IsValid_ReturnValue3, class AFortPlayerPawn* CallFunc_GetPlayerPawn_ReturnValue1, class USoundBase* K2Node_CustomEvent_Sound, bool CallFunc_IsValid_ReturnValue4, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue2, bool CallFunc_IsDead_ReturnValue, class UAudioComponent* K2Node_CustomEvent_Mission_Music, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue2, float CallFunc_GetEventHeatPercent_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue12, float CallFunc_GetEventHeatPercent_ReturnValue1, float CallFunc_GetEventHeatPercent_ReturnValue2, bool CallFunc_Greater_FloatFloat_ReturnValue13, bool CallFunc_Greater_FloatFloat_ReturnValue14, float CallFunc_GetEventHeatPercent_ReturnValue3, bool CallFunc_BooleanOR_ReturnValue3, bool CallFunc_Greater_FloatFloat_ReturnValue15, bool CallFunc_BooleanOR_ReturnValue4, bool CallFunc_BooleanOR_ReturnValue5, float CallFunc_Conv_BoolToFloat_ReturnValue, float CallFunc_GetEventHeatPercent_ReturnValue4, bool CallFunc_Less_FloatFloat_ReturnValue4, bool CallFunc_Greater_FloatFloat_ReturnValue16, float CallFunc_GetEventHeatPercent_ReturnValue5, float K2Node_Select_Default, bool CallFunc_Greater_FloatFloat_ReturnValue17, float CallFunc_FInterpTo_ReturnValue, bool CallFunc_BooleanOR_ReturnValue6, float CallFunc_Conv_BoolToFloat_ReturnValue1, float CallFunc_GetEventHeatPercent_ReturnValue6, float CallFunc_GetEventHeatPercent_ReturnValue7, float CallFunc_GetEventHeatPercent_ReturnValue8, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_GetEventHeatPercent_ReturnValue9, bool CallFunc_Less_FloatFloat_ReturnValue5, bool Temp_bool_Variable6, bool CallFunc_Not_PreBool_ReturnValue4, float K2Node_Select1_Default, float CallFunc_FInterpTo_ReturnValue1, float CallFunc_GetEventHeatPercent_ReturnValue10, float CallFunc_GetEventHeatPercent_ReturnValue11, float CallFunc_GetEventHeatPercent_ReturnValue12, float CallFunc_Add_FloatFloat_ReturnValue2, float CallFunc_GetEventHeatPercent_ReturnValue13, float CallFunc_Add_FloatFloat_ReturnValue3, float CallFunc_Add_FloatFloat_ReturnValue4, bool CallFunc_Less_FloatFloat_ReturnValue6, bool CallFunc_Less_FloatFloat_ReturnValue7, float K2Node_Select2_Default, float K2Node_Select3_Default, float CallFunc_FInterpTo_ReturnValue2, float CallFunc_FInterpTo_ReturnValue3);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
