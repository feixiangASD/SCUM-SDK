#pragma once

// SCUM (0.1.17.8320) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_Hunter85_Reload_Event_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Hunter85_Reload_Event.BP_Hunter85_Reload_Event_C
// 0x0000 (0x0090 - 0x0090)
class UBP_Hunter85_Reload_Event_C : public UEventInsertCartridge
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_Hunter85_Reload_Event.BP_Hunter85_Reload_Event_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
