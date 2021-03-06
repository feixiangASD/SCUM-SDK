#pragma once

// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_AnimBP_98k_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AnimBP_98k.AnimBP_98k_C
// 0x04D8 (0x08A8 - 0x03D0)
class UAnimBP_98k_C : public UWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_0F708E3748A18B419AA1E0882F8AEEE4;      // 0x03D8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_891236CB49838C106F263CAFF772BD33;      // 0x0420(0x0068)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_73EA1C70497B7D45194EB2900A8A9039;      // 0x0488(0x0068)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_16E9936349121663A4A2D3B82235A53E;      // 0x04F0(0x0068)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_BDFFBD16451874BA67144D9DCF11F2EC;      // 0x0558(0x0068)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_2BAD4FEA4B914AF61DC15A8DC18AEE30;// 0x05C0(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3050F5514C3F59F31232FA9D9DC6DEF0;// 0x06A0(0x0070)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_4A50A33E46C805E02C119C8EBD7AA8A6;// 0x0710(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_1E01117546A6779B535CFE92B5475CC8;// 0x07B8(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B60841D948F211EB1D0B6084BC1D8CF1;// 0x0808(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_05E163AE4AA696AEA356C3B0BC5084FA;// 0x0858(0x0050)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("AnimBlueprintGeneratedClass AnimBP_98k.AnimBP_98k_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_98k_AnimGraphNode_BlendListByEnum_2BAD4FEA4B914AF61DC15A8DC18AEE30();
	void ExecuteUbergraph_AnimBP_98k(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
