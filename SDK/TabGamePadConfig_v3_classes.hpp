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

// 0x110 (0x3B8 - 0x2A8)
// WidgetBlueprintGeneratedClass TabGamePadConfig_v3.TabGamePadConfig_v3_C
class UTabGamePadConfig_v3_C : public UFortGamepadInputOptions
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UGamepadInfoSelectorPanel_v3_C*        GamepadInfoSelectorPanel_v3;                       // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGamepadMappingInfo_v3_C*              GamepadMappingInfo_v3;                             // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  GamepadMappingInfoChanged;                         // 0x2C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class FString>                        InputPresets;                                      // 0x2D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class FText>                          InputPresetNames_NoCustom;                         // 0x2E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                        PresetMappingIndex;                                // 0x2F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        PlatformMappingIndex;                              // 0x2F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CustomInputTemplatePresetIndex;                    // 0x2F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_441F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGamepadKeyTextButton_C*               DisplayObject;                                     // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortInputActionGroup             CurrentInputActionGroup;                           // 0x308(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4420[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CustomResetToDefaultConfig;                        // 0x30C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  CustomKeySelection;                                // 0x310(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class FName                                  CustomActionSelection;                             // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CustomInputActionGroupSelectionIndex;              // 0x330(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CustomActionSelectionIndex;                        // 0x334(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  Key_None;                                          // 0x338(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UClass*                                RadioButtonClass;                                  // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                RadioButtonStyle;                                  // 0x358(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFortOptionsMenuInputData*>     InputDataForActionsPanel;                          // 0x360(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FName                                  CombatModeIdName;                                  // 0x370(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  BuildModeIdName;                                   // 0x378(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  TabGamePadConfigBack;                              // 0x380(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  TabGamePadConfigApply;                             // 0x390(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  TabGamePadActionsThatNeedBinds;                    // 0x3A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FName                                  EditModeIdName;                                    // 0x3B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TabGamePadConfig_v3_C");
		return Clss;
	}

	void GamepadInfoSelectorNavRight(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
	void AreWeOkayWithThisChange(class FName ActionName, const struct FKey& Key, bool* IsOkay, const class FString& FullScreenMap_Local, class FName GamepadToggleFullscreenMapName_Local, class FName ToggleFullscreenMapName_Local, bool IsOkay_Local, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue1, bool CallFunc_EqualEqual_KeyKey_ReturnValue2, bool CallFunc_EqualEqual_KeyKey_ReturnValue3, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue2, bool CallFunc_Contains_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void HandleGamepadInfoSelectorFocus();
	void NavigateToSelectedConfig(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, int32 CallFunc_GetSelectedButtonIndex_ReturnValue, class UCommonButton* CallFunc_GetButtonAtIndex_ReturnValue);
	void ChangeCustomClearVisibilityForInputType(enum class ECommonInputType InputType, bool K2Node_SwitchEnum_CmpSuccess);
	void ChangeCustomResetVisibilityForInputType(enum class ECommonInputType InputType, bool K2Node_SwitchEnum_CmpSuccess);
	void HandleGamepadInfoSelectorApply();
	void HandleGamepadInfoSelectorBack(TArray<class FText>& CallFunc_AreAllImportantActionsBound_OutUnboundScreenLabels, bool CallFunc_AreAllImportantActionsBound_ReturnValue);
	void ChangeCustomTabListVisibilityForInputType(enum class ECommonInputType Selection, bool K2Node_SwitchEnum_CmpSuccess);
	TArray<struct FConfirmationDialogAction> CreateCustomResetToDefaultList(const TArray<struct FConfirmationDialogAction>& ReturnValue_Local, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class FText CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FConfirmationDialogAction& K2Node_MakeStruct_ConfirmationDialogAction, int32 CallFunc_Array_Add_ReturnValue);
	void CloseCustomActionsPanel(bool FocusLastButton, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UCommonUISubsystem* CallFunc_GetContext_ReturnValue, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue);
	void SelectSameItemInActionsList(int32 IndexToSelect_Local, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, class UFortOptionsMenuInputData* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, const class FString& CallFunc_GetCustomGamepadInputPresetName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FKey& CallFunc_GetKeyForAction_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue);
	void SetupDisplayObject(class FName ActionName, const struct FKey& Key, class UGamepadKeyTextButton_C** DisplayObject, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue, const class FString& CallFunc_GetCustomGamepadInputPresetName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class FText CallFunc_GetScreenLabel_ReturnValue);
	bool IsCustomConfig(int32 PresetIndex, bool CallFunc_IsCustomGamepadConfig_ReturnValue);
	bool IsConsole(bool CallFunc_IsErebus_ReturnValue, bool CallFunc_IsXboxPlatform_ReturnValue, bool CallFunc_IsPS4Platform_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1);
	void HandleGamepadMappingInfoChange(class FName CombatModeId_Local, class FName EditModeId_Local, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue1, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_IsCustomConfig_ReturnValue);
	void GetCurrentPlatformIndex(int32* PlatformIndex, const class FString& CallFunc_GetControllerPlatform_ReturnValue, bool K2Node_SwitchString_CmpSuccess);
	void UpdateData(int32 Temp_int_Variable, int32 Temp_int_Variable1, int32 Temp_int_Variable2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, const class FString& CallFunc_GetCurrentInputPresetName_ReturnValue, int32 CallFunc_GetCurrentPlatformIndex_PlatformIndex, int32 Temp_int_Variable3, int32 Temp_int_Variable4, int32 Temp_int_Variable5, int32 K2Node_Select_Default, int32 CallFunc_Array_Find_ReturnValue);
	void PreConstructData(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable1, TArray<class FText>& K2Node_MakeArray_Array, class FText CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FFortRadioButtonItemStruct& K2Node_MakeStruct_FortRadioButtonItemStruct, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 Temp_int_Loop_Counter_Variable1, TArray<class FText>& K2Node_MakeArray_Array1, class FText CallFunc_Array_Get_Item1, int32 CallFunc_Array_Length_ReturnValue1, const struct FFortRadioButtonItemStruct& K2Node_MakeStruct_FortRadioButtonItemStruct1, bool CallFunc_Less_IntInt_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue1);
	void InitializeData(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, TArray<class FString>& CallFunc_GetAllPlayerInputPresetNamesForSubGame_InputPresetNames, TArray<class FText>& CallFunc_GetAllPlayerInputPresetNamesForSubGame_InputPresetFriendlyNames, const struct FFortRadioButtonItemStruct& K2Node_MakeStruct_FortRadioButtonItemStruct, int32 CallFunc_Array_Add_ReturnValue, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsCustomGamepadConfig_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue1, class FText Temp_text_Variable, class FText Temp_text_Variable1, bool Temp_bool_Variable, class FText Temp_text_Variable2, class FText Temp_text_Variable3, const class FString& CallFunc_GetPlatformName_ReturnValue, int32 Temp_int_Loop_Counter_Variable1, bool CallFunc_EqualEqual_StrStr_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, bool Temp_bool_Variable1, const class FString& CallFunc_GetPlatformName_ReturnValue1, class FText K2Node_Select_Default, bool CallFunc_EqualEqual_StrStr_ReturnValue1, TArray<class FText>& K2Node_MakeArray_Array, class FText K2Node_Select1_Default, class FText CallFunc_Array_Get_Item1, const struct FFortRadioButtonItemStruct& K2Node_MakeStruct_FortRadioButtonItemStruct1, int32 CallFunc_Array_Length_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue2, bool CallFunc_Less_IntInt_ReturnValue1);
	void DialogResult_017CD690454514A07B4DE5BE109AEC6E(enum class EFortDialogResult Result, class FName ResultName);
	void DialogResult_7D7E06D747FFEF9849D3CAA2D3D91717(enum class EFortDialogResult Result, class FName ResultName);
	void Gamepad_Config_Changed(class UCommonButton* AssociatedButton, int32 ButtonIndex);
	void GamepadPlatformConfigChanged(class UCommonButton* AssociatedButton, int32 ButtonIndex);
	void CenterOnTab();
	void UpdateOptionsTab();
	void CustomDoResetToDefault();
	void CustomKeySelected_Bind(const struct FKey& Key);
	void CustomActionSelected_Bind(int32 SelectedIndex, class FName ActionName);
	void CustomClosedUsingBack_Bind();
	void CustomClearButton_Bind();
	void PreConstruct(bool IsDesignTime);
	void ModesTabSelected_Bind(class FName TabId);
	void HandleUsingGamepadChanged(enum class ECommonInputType NewInputType);
	void Construct();
	void OnTabDeactivated_Bind();
	void OnTabActivated_Bind();
	void ExecuteUbergraph_TabGamePadConfig_v3(int32 EntryPoint, bool CallFunc_IsMobileGame_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable1, int32 Temp_int_Variable2, int32 Temp_int_Variable3, enum class ECommonGamepadType Temp_byte_Variable, class UCommonButton* K2Node_CustomEvent_AssociatedButton1, int32 K2Node_CustomEvent_ButtonIndex1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsConsole_ReturnValue, class UCommonButton* K2Node_CustomEvent_AssociatedButton, int32 K2Node_CustomEvent_ButtonIndex, bool CallFunc_BooleanOR_ReturnValue, int32 K2Node_Select_Default, enum class ECommonGamepadType Temp_byte_Variable1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, enum class ECommonGamepadType Temp_byte_Variable2, enum class ECommonGamepadType Temp_byte_Variable3, int32 Temp_int_Variable4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FKey& K2Node_CustomEvent_Key, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, int32 K2Node_CustomEvent_SelectedIndex, class FName K2Node_CustomEvent_ActionName, const class FString& Temp_string_Variable2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, const class FString& Temp_string_Variable3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue, bool K2Node_Event_IsDesignTime, const class FString& Temp_string_Variable4, int32 CallFunc_GetInputDataIndexForActionName_ReturnValue, TArray<struct FConfirmationDialogAction>& CallFunc_CreateCustomResetToDefaultList_ReturnValue, int32 Temp_int_Variable5, class FName CallFunc_MakeLiteralName_ReturnValue, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowConfirmationDialog_NUI_ReturnValue, const class FString& K2Node_Select1_Default, bool CallFunc_IsValid_ReturnValue, enum class ECommonGamepadType K2Node_Select2_Default, TArray<class UFortOptionsMenuInputData*>& CallFunc_GetActionItemsInGroup_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, class FName K2Node_CustomEvent_TabId, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue, enum class EFortDialogResult Temp_byte_Variable4, bool CallFunc_IsValid_ReturnValue1, class FName Temp_name_Variable, TArray<class UFortOptionsMenuInputData*>& CallFunc_GetActionItemsInGroup_ReturnValue1, enum class EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, enum class ECommonInputType K2Node_Event_NewInputType, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate9, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate10, class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue2, class UCommonUISubsystem* CallFunc_GetContext_ReturnValue3, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate11, class UCommonUISubsystem* CallFunc_GetContext_ReturnValue4, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate13, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue1, bool CallFunc_IsCustomConfig_ReturnValue, enum class EFortDialogResult Temp_byte_Variable5, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FName Temp_name_Variable1, bool CallFunc_IsVisible_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate14, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue6, int32 CallFunc_GetInputDataIndexForActionName_ReturnValue1, enum class EFortDialogResult K2Node_CustomEvent_Result1, class FName K2Node_CustomEvent_ResultName1, bool CallFunc_HandleApply_PassThrough, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate15, bool CallFunc_HandleApply_PassThrough1, bool CallFunc_EqualEqual_NameName_ReturnValue2, TArray<class UFortOptionsMenuInputData*>& CallFunc_GetActionItemsInGroup_ReturnValue2, class UCommonUISubsystem* CallFunc_GetContext_ReturnValue7, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue2, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue1, const class FString& CallFunc_Array_Get_Item, bool CallFunc_AreWeOkayWithThisChange_IsOkay, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue8, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate16);
	void TabGamePadActionsThatNeedBinds__DelegateSignature(TArray<class FText>& ScreenLabels);
	void TabGamePadConfigApply__DelegateSignature();
	void TabGamePadConfigBack__DelegateSignature();
	void GamepadMappingInfoChanged__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
