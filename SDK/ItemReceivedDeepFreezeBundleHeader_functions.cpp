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


// Function ItemReceivedDeepFreezeBundleHeader.ItemReceivedDeepFreezeBundleHeader_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemReceivedDeepFreezeBundleHeader_C::Construct()
{
	static auto Func = Class->GetFunction("ItemReceivedDeepFreezeBundleHeader_C", "Construct");

	Params::UItemReceivedDeepFreezeBundleHeader_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemReceivedDeepFreezeBundleHeader.ItemReceivedDeepFreezeBundleHeader_C.BndEvt__CandleLightButton_K2Node_ComponentBoundEvent_61_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemReceivedDeepFreezeBundleHeader_C::BndEvt__CandleLightButton_K2Node_ComponentBoundEvent_61_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("ItemReceivedDeepFreezeBundleHeader_C", "BndEvt__CandleLightButton_K2Node_ComponentBoundEvent_61_CommonButtonClicked__DelegateSignature");

	Params::UItemReceivedDeepFreezeBundleHeader_C_BndEvt__CandleLightButton_K2Node_ComponentBoundEvent_61_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemReceivedDeepFreezeBundleHeader.ItemReceivedDeepFreezeBundleHeader_C.ExecuteUbergraph_ItemReceivedDeepFreezeBundleHeader
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemReceivedDeepFreezeBundleHeader_C::ExecuteUbergraph_ItemReceivedDeepFreezeBundleHeader(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button)
{
	static auto Func = Class->GetFunction("ItemReceivedDeepFreezeBundleHeader_C", "ExecuteUbergraph_ItemReceivedDeepFreezeBundleHeader");

	Params::UItemReceivedDeepFreezeBundleHeader_C_ExecuteUbergraph_ItemReceivedDeepFreezeBundleHeader_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
