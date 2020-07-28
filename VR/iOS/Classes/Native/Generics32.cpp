#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.UInt64,Valve.VR.SteamVR_Input_Sources>
struct Dictionary_2_t76297EDE8B7B0D45FA16B2257028CB70D225DF2B;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.UInt64[]
struct UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9;
// UnityEngine.Events.UnityAction`1<Valve.VR.VREvent_t>
struct UnityAction_1_tB43C1CF1D8DCDDE3590ED959587DB9809C1294BF;
// UnityEngine.Events.UnityAction`2<System.Int32,System.Boolean>
struct UnityAction_2_tC6757BFFAD492D812C4E332DCDD97778B17CACAF;
// UnityEngine.Events.UnityAction`2<System.Object,System.Boolean>
struct UnityAction_2_tAC99DEACCF9A9F69F176A7F1DBEE5E1A24D9816D;
// UnityEngine.Events.UnityAction`2<System.Object,System.Object>
struct UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2;
// UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>
struct UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89;
// UnityEngine.Events.UnityAction`3<UnityEngine.Color,System.Single,System.Boolean>
struct UnityAction_3_tBB281EE324EEF9D6CD3F2B8B7C3695D8EB743EEB;
// Valve.VR.SteamVR_Action
struct SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734;
// Valve.VR.SteamVR_ActionSet
struct SteamVR_ActionSet_t9D647E559B2D35F695CC7613111572186FBCA9F6;
// Valve.VR.SteamVR_ActionSet_Data
struct SteamVR_ActionSet_Data_tDA03CB718A3B3F5805D6D9C399D57E56AF9DA529;
// Valve.VR.SteamVR_Action_Source_Map
struct SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17;
// Valve.VR.SteamVR_Action_Source_Map`1<System.Object>
struct SteamVR_Action_Source_Map_1_tF6CD4E2DA9FBD867B5F22D6A040FC06A0BFE5CCA;
// Valve.VR.SteamVR_Action`2<System.Object,System.Object>
struct SteamVR_Action_2_t67EA892F0F7F8FCEB40A807AEF2569E6E8BA4B41;
// Valve.VR.SteamVR_Events/Action
struct Action_tD381670DCBAE1D2EE90871FC4B0DE139675A28C5;
// Valve.VR.SteamVR_Events/Action`1<System.Boolean>
struct Action_1_t7BE8C5DE3785A61B441BCA376E3ED153DACA36F8;
// Valve.VR.SteamVR_Events/Action`1<System.Object>
struct Action_1_t29E2C53255506736CB01BBA55C3C5746F5770755;
// Valve.VR.SteamVR_Events/Action`1<System.Single>
struct Action_1_t53C9CFF8020552CED0696CBB0081D23CDBC6A920;
// Valve.VR.SteamVR_Events/Action`1<Valve.VR.VREvent_t>
struct Action_1_t7957910A6AB0A5DE3BAB860D219485F133F00242;
// Valve.VR.SteamVR_Events/Action`2<System.Int32,System.Boolean>
struct Action_2_tA0C6E11F5C5B3C71429320D46B51A09F509B81D6;
// Valve.VR.SteamVR_Events/Action`2<System.Object,System.Boolean>
struct Action_2_tC709BD29B3F3F01E49C1E9FAE364DB63476C086A;
// Valve.VR.SteamVR_Events/Action`2<System.Object,System.Object>
struct Action_2_t4EB83A128D36A66F70839A9D3BC6A86785F3E92E;
// Valve.VR.SteamVR_Events/Action`3<System.Object,System.Object,System.Object>
struct Action_3_t927B7E19334E790BC03E72B8B01289B581E7F6ED;
// Valve.VR.SteamVR_Events/Action`3<UnityEngine.Color,System.Single,System.Boolean>
struct Action_3_t7D8734BBE6B7EB1F779A2546951827ACF04C9152;
// Valve.VR.SteamVR_Events/Event`1<System.Boolean>
struct Event_1_t4AADC7D395DE3D54A428A47B268C47F57231474E;
// Valve.VR.SteamVR_Events/Event`1<System.Object>
struct Event_1_t79FDA89FF66AB755896EC5231AA906E80D977A8A;
// Valve.VR.SteamVR_Events/Event`1<System.Single>
struct Event_1_t8E75A5B6D579BE45B766939AA5B3B15636CCA77F;
// Valve.VR.SteamVR_Events/Event`1<Valve.VR.VREvent_t>
struct Event_1_t5DB0CDA7FD2616DA8770700B1A982E1A0F052262;
// Valve.VR.SteamVR_Events/Event`2<System.Int32,System.Boolean>
struct Event_2_t5D411D24E2836A52F7D2998B747522450DB2D3F5;
// Valve.VR.SteamVR_Events/Event`2<System.Object,System.Boolean>
struct Event_2_t9B8C6B23D8417540E5908C6FE592803B5C52D62E;
// Valve.VR.SteamVR_Events/Event`2<System.Object,System.Object>
struct Event_2_t04FA8831B303A3F77AF8B7E1B8C05E9562E771AF;
// Valve.VR.SteamVR_Events/Event`3<System.Object,System.Object,System.Object>
struct Event_3_t35D9D60B1134BEB59186505A31E7F27F1AD4A8E6;
// Valve.VR.SteamVR_Events/Event`3<UnityEngine.Color,System.Single,System.Boolean>
struct Event_3_t5541668D2F9E46098EA2A527B35E4D3BD6D8450B;
// Valve.VR.SteamVR_Input_Sources[]
struct SteamVR_Input_SourcesU5BU5D_t735048547A8599BA461FE16B1BC029194E1F184A;
// Valve.VR.SteamVR_RingBuffer`1<System.Object>
struct SteamVR_RingBuffer_1_t353935239BF163A78AC80BF35E82548FDC5DA1EA;

IL2CPP_EXTERN_C RuntimeClass* SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SteamVR_Input_Source_tAFDB40851F8E134E08DD2DD0BC1C1770705E81D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SteamVR_Input_tCE4A1EC6C51592CB9DCD7B860984CB2C4DD937BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const uint32_t SteamVR_Action_2_Initialize_mA9DAC628BDF16216663413242D2D4971AE18F9EA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SteamVR_Action_2_TryNeedsInitData_m9FAA11924CC72B84B7C278D9AE4974C81CD5B12C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SteamVR_Action_2__ctor_m6089D5B461038EC08D387C989032991C9A32C153_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SteamVR_Action_Source_Map_1__ctor_m2A7CDEF37045DF1A11A62CE29A48F11C11274029_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_Calls_0)); }
	inline InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
};


// Valve.VR.SteamVR_Action
struct  SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734  : public RuntimeObject
{
public:
	// System.String Valve.VR.SteamVR_Action::actionPath
	String_t* ___actionPath_0;
	// System.Boolean Valve.VR.SteamVR_Action::needsReinit
	bool ___needsReinit_1;
	// System.String Valve.VR.SteamVR_Action::cachedShortName
	String_t* ___cachedShortName_3;

public:
	inline static int32_t get_offset_of_actionPath_0() { return static_cast<int32_t>(offsetof(SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734, ___actionPath_0)); }
	inline String_t* get_actionPath_0() const { return ___actionPath_0; }
	inline String_t** get_address_of_actionPath_0() { return &___actionPath_0; }
	inline void set_actionPath_0(String_t* value)
	{
		___actionPath_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___actionPath_0), (void*)value);
	}

	inline static int32_t get_offset_of_needsReinit_1() { return static_cast<int32_t>(offsetof(SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734, ___needsReinit_1)); }
	inline bool get_needsReinit_1() const { return ___needsReinit_1; }
	inline bool* get_address_of_needsReinit_1() { return &___needsReinit_1; }
	inline void set_needsReinit_1(bool value)
	{
		___needsReinit_1 = value;
	}

	inline static int32_t get_offset_of_cachedShortName_3() { return static_cast<int32_t>(offsetof(SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734, ___cachedShortName_3)); }
	inline String_t* get_cachedShortName_3() const { return ___cachedShortName_3; }
	inline String_t** get_address_of_cachedShortName_3() { return &___cachedShortName_3; }
	inline void set_cachedShortName_3(String_t* value)
	{
		___cachedShortName_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cachedShortName_3), (void*)value);
	}
};

struct SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734_StaticFields
{
public:
	// System.Boolean Valve.VR.SteamVR_Action::startUpdatingSourceOnAccess
	bool ___startUpdatingSourceOnAccess_2;

public:
	inline static int32_t get_offset_of_startUpdatingSourceOnAccess_2() { return static_cast<int32_t>(offsetof(SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734_StaticFields, ___startUpdatingSourceOnAccess_2)); }
	inline bool get_startUpdatingSourceOnAccess_2() const { return ___startUpdatingSourceOnAccess_2; }
	inline bool* get_address_of_startUpdatingSourceOnAccess_2() { return &___startUpdatingSourceOnAccess_2; }
	inline void set_startUpdatingSourceOnAccess_2(bool value)
	{
		___startUpdatingSourceOnAccess_2 = value;
	}
};


// Valve.VR.SteamVR_ActionSet
struct  SteamVR_ActionSet_t9D647E559B2D35F695CC7613111572186FBCA9F6  : public RuntimeObject
{
public:
	// System.String Valve.VR.SteamVR_ActionSet::actionSetPath
	String_t* ___actionSetPath_0;
	// Valve.VR.SteamVR_ActionSet_Data Valve.VR.SteamVR_ActionSet::setData
	SteamVR_ActionSet_Data_tDA03CB718A3B3F5805D6D9C399D57E56AF9DA529 * ___setData_1;
	// System.Boolean Valve.VR.SteamVR_ActionSet::initialized
	bool ___initialized_2;

public:
	inline static int32_t get_offset_of_actionSetPath_0() { return static_cast<int32_t>(offsetof(SteamVR_ActionSet_t9D647E559B2D35F695CC7613111572186FBCA9F6, ___actionSetPath_0)); }
	inline String_t* get_actionSetPath_0() const { return ___actionSetPath_0; }
	inline String_t** get_address_of_actionSetPath_0() { return &___actionSetPath_0; }
	inline void set_actionSetPath_0(String_t* value)
	{
		___actionSetPath_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___actionSetPath_0), (void*)value);
	}

	inline static int32_t get_offset_of_setData_1() { return static_cast<int32_t>(offsetof(SteamVR_ActionSet_t9D647E559B2D35F695CC7613111572186FBCA9F6, ___setData_1)); }
	inline SteamVR_ActionSet_Data_tDA03CB718A3B3F5805D6D9C399D57E56AF9DA529 * get_setData_1() const { return ___setData_1; }
	inline SteamVR_ActionSet_Data_tDA03CB718A3B3F5805D6D9C399D57E56AF9DA529 ** get_address_of_setData_1() { return &___setData_1; }
	inline void set_setData_1(SteamVR_ActionSet_Data_tDA03CB718A3B3F5805D6D9C399D57E56AF9DA529 * value)
	{
		___setData_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___setData_1), (void*)value);
	}

	inline static int32_t get_offset_of_initialized_2() { return static_cast<int32_t>(offsetof(SteamVR_ActionSet_t9D647E559B2D35F695CC7613111572186FBCA9F6, ___initialized_2)); }
	inline bool get_initialized_2() const { return ___initialized_2; }
	inline bool* get_address_of_initialized_2() { return &___initialized_2; }
	inline void set_initialized_2(bool value)
	{
		___initialized_2 = value;
	}
};


// Valve.VR.SteamVR_Events_Action
struct  Action_tD381670DCBAE1D2EE90871FC4B0DE139675A28C5  : public RuntimeObject
{
public:

public:
};


// Valve.VR.SteamVR_Input_Source
struct  SteamVR_Input_Source_tAFDB40851F8E134E08DD2DD0BC1C1770705E81D0  : public RuntimeObject
{
public:

public:
};

struct SteamVR_Input_Source_tAFDB40851F8E134E08DD2DD0BC1C1770705E81D0_StaticFields
{
public:
	// System.Int32 Valve.VR.SteamVR_Input_Source::numSources
	int32_t ___numSources_0;
	// System.UInt64[] Valve.VR.SteamVR_Input_Source::inputSourceHandlesBySource
	UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4* ___inputSourceHandlesBySource_1;
	// System.Collections.Generic.Dictionary`2<System.UInt64,Valve.VR.SteamVR_Input_Sources> Valve.VR.SteamVR_Input_Source::inputSourceSourcesByHandle
	Dictionary_2_t76297EDE8B7B0D45FA16B2257028CB70D225DF2B * ___inputSourceSourcesByHandle_2;
	// System.Type Valve.VR.SteamVR_Input_Source::enumType
	Type_t * ___enumType_3;
	// System.Type Valve.VR.SteamVR_Input_Source::descriptionType
	Type_t * ___descriptionType_4;
	// Valve.VR.SteamVR_Input_Sources[] Valve.VR.SteamVR_Input_Source::allSources
	SteamVR_Input_SourcesU5BU5D_t735048547A8599BA461FE16B1BC029194E1F184A* ___allSources_5;

public:
	inline static int32_t get_offset_of_numSources_0() { return static_cast<int32_t>(offsetof(SteamVR_Input_Source_tAFDB40851F8E134E08DD2DD0BC1C1770705E81D0_StaticFields, ___numSources_0)); }
	inline int32_t get_numSources_0() const { return ___numSources_0; }
	inline int32_t* get_address_of_numSources_0() { return &___numSources_0; }
	inline void set_numSources_0(int32_t value)
	{
		___numSources_0 = value;
	}

	inline static int32_t get_offset_of_inputSourceHandlesBySource_1() { return static_cast<int32_t>(offsetof(SteamVR_Input_Source_tAFDB40851F8E134E08DD2DD0BC1C1770705E81D0_StaticFields, ___inputSourceHandlesBySource_1)); }
	inline UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4* get_inputSourceHandlesBySource_1() const { return ___inputSourceHandlesBySource_1; }
	inline UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4** get_address_of_inputSourceHandlesBySource_1() { return &___inputSourceHandlesBySource_1; }
	inline void set_inputSourceHandlesBySource_1(UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4* value)
	{
		___inputSourceHandlesBySource_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputSourceHandlesBySource_1), (void*)value);
	}

	inline static int32_t get_offset_of_inputSourceSourcesByHandle_2() { return static_cast<int32_t>(offsetof(SteamVR_Input_Source_tAFDB40851F8E134E08DD2DD0BC1C1770705E81D0_StaticFields, ___inputSourceSourcesByHandle_2)); }
	inline Dictionary_2_t76297EDE8B7B0D45FA16B2257028CB70D225DF2B * get_inputSourceSourcesByHandle_2() const { return ___inputSourceSourcesByHandle_2; }
	inline Dictionary_2_t76297EDE8B7B0D45FA16B2257028CB70D225DF2B ** get_address_of_inputSourceSourcesByHandle_2() { return &___inputSourceSourcesByHandle_2; }
	inline void set_inputSourceSourcesByHandle_2(Dictionary_2_t76297EDE8B7B0D45FA16B2257028CB70D225DF2B * value)
	{
		___inputSourceSourcesByHandle_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputSourceSourcesByHandle_2), (void*)value);
	}

	inline static int32_t get_offset_of_enumType_3() { return static_cast<int32_t>(offsetof(SteamVR_Input_Source_tAFDB40851F8E134E08DD2DD0BC1C1770705E81D0_StaticFields, ___enumType_3)); }
	inline Type_t * get_enumType_3() const { return ___enumType_3; }
	inline Type_t ** get_address_of_enumType_3() { return &___enumType_3; }
	inline void set_enumType_3(Type_t * value)
	{
		___enumType_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumType_3), (void*)value);
	}

	inline static int32_t get_offset_of_descriptionType_4() { return static_cast<int32_t>(offsetof(SteamVR_Input_Source_tAFDB40851F8E134E08DD2DD0BC1C1770705E81D0_StaticFields, ___descriptionType_4)); }
	inline Type_t * get_descriptionType_4() const { return ___descriptionType_4; }
	inline Type_t ** get_address_of_descriptionType_4() { return &___descriptionType_4; }
	inline void set_descriptionType_4(Type_t * value)
	{
		___descriptionType_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___descriptionType_4), (void*)value);
	}

	inline static int32_t get_offset_of_allSources_5() { return static_cast<int32_t>(offsetof(SteamVR_Input_Source_tAFDB40851F8E134E08DD2DD0BC1C1770705E81D0_StaticFields, ___allSources_5)); }
	inline SteamVR_Input_SourcesU5BU5D_t735048547A8599BA461FE16B1BC029194E1F184A* get_allSources_5() const { return ___allSources_5; }
	inline SteamVR_Input_SourcesU5BU5D_t735048547A8599BA461FE16B1BC029194E1F184A** get_address_of_allSources_5() { return &___allSources_5; }
	inline void set_allSources_5(SteamVR_Input_SourcesU5BU5D_t735048547A8599BA461FE16B1BC029194E1F184A* value)
	{
		___allSources_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allSources_5), (void*)value);
	}
};


// Valve.VR.SteamVR_RingBuffer`1<System.Object>
struct  SteamVR_RingBuffer_1_t353935239BF163A78AC80BF35E82548FDC5DA1EA  : public RuntimeObject
{
public:
	// T[] Valve.VR.SteamVR_RingBuffer`1::buffer
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___buffer_0;
	// System.Int32 Valve.VR.SteamVR_RingBuffer`1::currentIndex
	int32_t ___currentIndex_1;
	// T Valve.VR.SteamVR_RingBuffer`1::lastElement
	RuntimeObject * ___lastElement_2;
	// System.Boolean Valve.VR.SteamVR_RingBuffer`1::cleared
	bool ___cleared_3;

public:
	inline static int32_t get_offset_of_buffer_0() { return static_cast<int32_t>(offsetof(SteamVR_RingBuffer_1_t353935239BF163A78AC80BF35E82548FDC5DA1EA, ___buffer_0)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_buffer_0() const { return ___buffer_0; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_buffer_0() { return &___buffer_0; }
	inline void set_buffer_0(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___buffer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buffer_0), (void*)value);
	}

	inline static int32_t get_offset_of_currentIndex_1() { return static_cast<int32_t>(offsetof(SteamVR_RingBuffer_1_t353935239BF163A78AC80BF35E82548FDC5DA1EA, ___currentIndex_1)); }
	inline int32_t get_currentIndex_1() const { return ___currentIndex_1; }
	inline int32_t* get_address_of_currentIndex_1() { return &___currentIndex_1; }
	inline void set_currentIndex_1(int32_t value)
	{
		___currentIndex_1 = value;
	}

	inline static int32_t get_offset_of_lastElement_2() { return static_cast<int32_t>(offsetof(SteamVR_RingBuffer_1_t353935239BF163A78AC80BF35E82548FDC5DA1EA, ___lastElement_2)); }
	inline RuntimeObject * get_lastElement_2() const { return ___lastElement_2; }
	inline RuntimeObject ** get_address_of_lastElement_2() { return &___lastElement_2; }
	inline void set_lastElement_2(RuntimeObject * value)
	{
		___lastElement_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastElement_2), (void*)value);
	}

	inline static int32_t get_offset_of_cleared_3() { return static_cast<int32_t>(offsetof(SteamVR_RingBuffer_1_t353935239BF163A78AC80BF35E82548FDC5DA1EA, ___cleared_3)); }
	inline bool get_cleared_3() const { return ___cleared_3; }
	inline bool* get_address_of_cleared_3() { return &___cleared_3; }
	inline void set_cleared_3(bool value)
	{
		___cleared_3 = value;
	}
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct  UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct  UnityEvent_1_tE1EF042798523847EEBB2A12FA37C4003C1B1299  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_tE1EF042798523847EEBB2A12FA37C4003C1B1299, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<System.Object>
struct  UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<System.Single>
struct  UnityEvent_1_t655F4ECDA62E804A34CC8737AC30B836ABD3D2DA  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t655F4ECDA62E804A34CC8737AC30B836ABD3D2DA, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<Valve.VR.VREvent_t>
struct  UnityEvent_1_t7E9560B75945B332DA5807C6061708BBAF5F7307  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t7E9560B75945B332DA5807C6061708BBAF5F7307, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`2<System.Int32,System.Boolean>
struct  UnityEvent_2_t6FFBDA794A6AA7AF9FE8BA1C95AE94A43530E0A9  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_2_t6FFBDA794A6AA7AF9FE8BA1C95AE94A43530E0A9, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`2<System.Object,System.Boolean>
struct  UnityEvent_2_tCC3D1AE1DF0DE9353C32AB2135945A02F0B1C6CB  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_2_tCC3D1AE1DF0DE9353C32AB2135945A02F0B1C6CB, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
struct  UnityEvent_2_t1324E90D5AF00DA0F61802033E51716D0D9CBED1  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_2_t1324E90D5AF00DA0F61802033E51716D0D9CBED1, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>
struct  UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`3::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`3<UnityEngine.Color,System.Single,System.Boolean>
struct  UnityEvent_3_t8D685C60F62C7BAE22464C760302E39E1FC2932D  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`3::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_3_t8D685C60F62C7BAE22464C760302E39E1FC2932D, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// Valve.VR.SteamVR_Action`2<System.Object,System.Object>
struct  SteamVR_Action_2_t67EA892F0F7F8FCEB40A807AEF2569E6E8BA4B41  : public SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734
{
public:
	// SourceMap Valve.VR.SteamVR_Action`2::sourceMap
	RuntimeObject * ___sourceMap_4;
	// System.Boolean Valve.VR.SteamVR_Action`2::initialized
	bool ___initialized_5;

public:
	inline static int32_t get_offset_of_sourceMap_4() { return static_cast<int32_t>(offsetof(SteamVR_Action_2_t67EA892F0F7F8FCEB40A807AEF2569E6E8BA4B41, ___sourceMap_4)); }
	inline RuntimeObject * get_sourceMap_4() const { return ___sourceMap_4; }
	inline RuntimeObject ** get_address_of_sourceMap_4() { return &___sourceMap_4; }
	inline void set_sourceMap_4(RuntimeObject * value)
	{
		___sourceMap_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceMap_4), (void*)value);
	}

	inline static int32_t get_offset_of_initialized_5() { return static_cast<int32_t>(offsetof(SteamVR_Action_2_t67EA892F0F7F8FCEB40A807AEF2569E6E8BA4B41, ___initialized_5)); }
	inline bool get_initialized_5() const { return ___initialized_5; }
	inline bool* get_address_of_initialized_5() { return &___initialized_5; }
	inline void set_initialized_5(bool value)
	{
		___initialized_5 = value;
	}
};


// Valve.VR.SteamVR_Events_Action`1<System.Boolean>
struct  Action_1_t7BE8C5DE3785A61B441BCA376E3ED153DACA36F8  : public Action_tD381670DCBAE1D2EE90871FC4B0DE139675A28C5
{
public:
	// Valve.VR.SteamVR_Events_Event`1<T> Valve.VR.SteamVR_Events_Action`1::_event
	Event_1_t4AADC7D395DE3D54A428A47B268C47F57231474E * ____event_0;
	// UnityEngine.Events.UnityAction`1<T> Valve.VR.SteamVR_Events_Action`1::action
	UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * ___action_1;

public:
	inline static int32_t get_offset_of__event_0() { return static_cast<int32_t>(offsetof(Action_1_t7BE8C5DE3785A61B441BCA376E3ED153DACA36F8, ____event_0)); }
	inline Event_1_t4AADC7D395DE3D54A428A47B268C47F57231474E * get__event_0() const { return ____event_0; }
	inline Event_1_t4AADC7D395DE3D54A428A47B268C47F57231474E ** get_address_of__event_0() { return &____event_0; }
	inline void set__event_0(Event_1_t4AADC7D395DE3D54A428A47B268C47F57231474E * value)
	{
		____event_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____event_0), (void*)value);
	}

	inline static int32_t get_offset_of_action_1() { return static_cast<int32_t>(offsetof(Action_1_t7BE8C5DE3785A61B441BCA376E3ED153DACA36F8, ___action_1)); }
	inline UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * get_action_1() const { return ___action_1; }
	inline UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC ** get_address_of_action_1() { return &___action_1; }
	inline void set_action_1(UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * value)
	{
		___action_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___action_1), (void*)value);
	}
};


// Valve.VR.SteamVR_Events_Action`1<System.Object>
struct  Action_1_t29E2C53255506736CB01BBA55C3C5746F5770755  : public Action_tD381670DCBAE1D2EE90871FC4B0DE139675A28C5
{
public:
	// Valve.VR.SteamVR_Events_Event`1<T> Valve.VR.SteamVR_Events_Action`1::_event
	Event_1_t79FDA89FF66AB755896EC5231AA906E80D977A8A * ____event_0;
	// UnityEngine.Events.UnityAction`1<T> Valve.VR.SteamVR_Events_Action`1::action
	UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___action_1;

public:
	inline static int32_t get_offset_of__event_0() { return static_cast<int32_t>(offsetof(Action_1_t29E2C53255506736CB01BBA55C3C5746F5770755, ____event_0)); }
	inline Event_1_t79FDA89FF66AB755896EC5231AA906E80D977A8A * get__event_0() const { return ____event_0; }
	inline Event_1_t79FDA89FF66AB755896EC5231AA906E80D977A8A ** get_address_of__event_0() { return &____event_0; }
	inline void set__event_0(Event_1_t79FDA89FF66AB755896EC5231AA906E80D977A8A * value)
	{
		____event_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____event_0), (void*)value);
	}

	inline static int32_t get_offset_of_action_1() { return static_cast<int32_t>(offsetof(Action_1_t29E2C53255506736CB01BBA55C3C5746F5770755, ___action_1)); }
	inline UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * get_action_1() const { return ___action_1; }
	inline UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 ** get_address_of_action_1() { return &___action_1; }
	inline void set_action_1(UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * value)
	{
		___action_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___action_1), (void*)value);
	}
};


// Valve.VR.SteamVR_Events_Action`1<System.Single>
struct  Action_1_t53C9CFF8020552CED0696CBB0081D23CDBC6A920  : public Action_tD381670DCBAE1D2EE90871FC4B0DE139675A28C5
{
public:
	// Valve.VR.SteamVR_Events_Event`1<T> Valve.VR.SteamVR_Events_Action`1::_event
	Event_1_t8E75A5B6D579BE45B766939AA5B3B15636CCA77F * ____event_0;
	// UnityEngine.Events.UnityAction`1<T> Valve.VR.SteamVR_Events_Action`1::action
	UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * ___action_1;

public:
	inline static int32_t get_offset_of__event_0() { return static_cast<int32_t>(offsetof(Action_1_t53C9CFF8020552CED0696CBB0081D23CDBC6A920, ____event_0)); }
	inline Event_1_t8E75A5B6D579BE45B766939AA5B3B15636CCA77F * get__event_0() const { return ____event_0; }
	inline Event_1_t8E75A5B6D579BE45B766939AA5B3B15636CCA77F ** get_address_of__event_0() { return &____event_0; }
	inline void set__event_0(Event_1_t8E75A5B6D579BE45B766939AA5B3B15636CCA77F * value)
	{
		____event_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____event_0), (void*)value);
	}

	inline static int32_t get_offset_of_action_1() { return static_cast<int32_t>(offsetof(Action_1_t53C9CFF8020552CED0696CBB0081D23CDBC6A920, ___action_1)); }
	inline UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * get_action_1() const { return ___action_1; }
	inline UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 ** get_address_of_action_1() { return &___action_1; }
	inline void set_action_1(UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * value)
	{
		___action_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___action_1), (void*)value);
	}
};


// Valve.VR.SteamVR_Events_Action`1<Valve.VR.VREvent_t>
struct  Action_1_t7957910A6AB0A5DE3BAB860D219485F133F00242  : public Action_tD381670DCBAE1D2EE90871FC4B0DE139675A28C5
{
public:
	// Valve.VR.SteamVR_Events_Event`1<T> Valve.VR.SteamVR_Events_Action`1::_event
	Event_1_t5DB0CDA7FD2616DA8770700B1A982E1A0F052262 * ____event_0;
	// UnityEngine.Events.UnityAction`1<T> Valve.VR.SteamVR_Events_Action`1::action
	UnityAction_1_tB43C1CF1D8DCDDE3590ED959587DB9809C1294BF * ___action_1;

public:
	inline static int32_t get_offset_of__event_0() { return static_cast<int32_t>(offsetof(Action_1_t7957910A6AB0A5DE3BAB860D219485F133F00242, ____event_0)); }
	inline Event_1_t5DB0CDA7FD2616DA8770700B1A982E1A0F052262 * get__event_0() const { return ____event_0; }
	inline Event_1_t5DB0CDA7FD2616DA8770700B1A982E1A0F052262 ** get_address_of__event_0() { return &____event_0; }
	inline void set__event_0(Event_1_t5DB0CDA7FD2616DA8770700B1A982E1A0F052262 * value)
	{
		____event_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____event_0), (void*)value);
	}

	inline static int32_t get_offset_of_action_1() { return static_cast<int32_t>(offsetof(Action_1_t7957910A6AB0A5DE3BAB860D219485F133F00242, ___action_1)); }
	inline UnityAction_1_tB43C1CF1D8DCDDE3590ED959587DB9809C1294BF * get_action_1() const { return ___action_1; }
	inline UnityAction_1_tB43C1CF1D8DCDDE3590ED959587DB9809C1294BF ** get_address_of_action_1() { return &___action_1; }
	inline void set_action_1(UnityAction_1_tB43C1CF1D8DCDDE3590ED959587DB9809C1294BF * value)
	{
		___action_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___action_1), (void*)value);
	}
};


// Valve.VR.SteamVR_Events_Action`2<System.Int32,System.Boolean>
struct  Action_2_tA0C6E11F5C5B3C71429320D46B51A09F509B81D6  : public Action_tD381670DCBAE1D2EE90871FC4B0DE139675A28C5
{
public:
	// Valve.VR.SteamVR_Events_Event`2<T0,T1> Valve.VR.SteamVR_Events_Action`2::_event
	Event_2_t5D411D24E2836A52F7D2998B747522450DB2D3F5 * ____event_0;
	// UnityEngine.Events.UnityAction`2<T0,T1> Valve.VR.SteamVR_Events_Action`2::action
	UnityAction_2_tC6757BFFAD492D812C4E332DCDD97778B17CACAF * ___action_1;

public:
	inline static int32_t get_offset_of__event_0() { return static_cast<int32_t>(offsetof(Action_2_tA0C6E11F5C5B3C71429320D46B51A09F509B81D6, ____event_0)); }
	inline Event_2_t5D411D24E2836A52F7D2998B747522450DB2D3F5 * get__event_0() const { return ____event_0; }
	inline Event_2_t5D411D24E2836A52F7D2998B747522450DB2D3F5 ** get_address_of__event_0() { return &____event_0; }
	inline void set__event_0(Event_2_t5D411D24E2836A52F7D2998B747522450DB2D3F5 * value)
	{
		____event_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____event_0), (void*)value);
	}

	inline static int32_t get_offset_of_action_1() { return static_cast<int32_t>(offsetof(Action_2_tA0C6E11F5C5B3C71429320D46B51A09F509B81D6, ___action_1)); }
	inline UnityAction_2_tC6757BFFAD492D812C4E332DCDD97778B17CACAF * get_action_1() const { return ___action_1; }
	inline UnityAction_2_tC6757BFFAD492D812C4E332DCDD97778B17CACAF ** get_address_of_action_1() { return &___action_1; }
	inline void set_action_1(UnityAction_2_tC6757BFFAD492D812C4E332DCDD97778B17CACAF * value)
	{
		___action_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___action_1), (void*)value);
	}
};


// Valve.VR.SteamVR_Events_Action`2<System.Object,System.Boolean>
struct  Action_2_tC709BD29B3F3F01E49C1E9FAE364DB63476C086A  : public Action_tD381670DCBAE1D2EE90871FC4B0DE139675A28C5
{
public:
	// Valve.VR.SteamVR_Events_Event`2<T0,T1> Valve.VR.SteamVR_Events_Action`2::_event
	Event_2_t9B8C6B23D8417540E5908C6FE592803B5C52D62E * ____event_0;
	// UnityEngine.Events.UnityAction`2<T0,T1> Valve.VR.SteamVR_Events_Action`2::action
	UnityAction_2_tAC99DEACCF9A9F69F176A7F1DBEE5E1A24D9816D * ___action_1;

public:
	inline static int32_t get_offset_of__event_0() { return static_cast<int32_t>(offsetof(Action_2_tC709BD29B3F3F01E49C1E9FAE364DB63476C086A, ____event_0)); }
	inline Event_2_t9B8C6B23D8417540E5908C6FE592803B5C52D62E * get__event_0() const { return ____event_0; }
	inline Event_2_t9B8C6B23D8417540E5908C6FE592803B5C52D62E ** get_address_of__event_0() { return &____event_0; }
	inline void set__event_0(Event_2_t9B8C6B23D8417540E5908C6FE592803B5C52D62E * value)
	{
		____event_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____event_0), (void*)value);
	}

	inline static int32_t get_offset_of_action_1() { return static_cast<int32_t>(offsetof(Action_2_tC709BD29B3F3F01E49C1E9FAE364DB63476C086A, ___action_1)); }
	inline UnityAction_2_tAC99DEACCF9A9F69F176A7F1DBEE5E1A24D9816D * get_action_1() const { return ___action_1; }
	inline UnityAction_2_tAC99DEACCF9A9F69F176A7F1DBEE5E1A24D9816D ** get_address_of_action_1() { return &___action_1; }
	inline void set_action_1(UnityAction_2_tAC99DEACCF9A9F69F176A7F1DBEE5E1A24D9816D * value)
	{
		___action_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___action_1), (void*)value);
	}
};


// Valve.VR.SteamVR_Events_Action`2<System.Object,System.Object>
struct  Action_2_t4EB83A128D36A66F70839A9D3BC6A86785F3E92E  : public Action_tD381670DCBAE1D2EE90871FC4B0DE139675A28C5
{
public:
	// Valve.VR.SteamVR_Events_Event`2<T0,T1> Valve.VR.SteamVR_Events_Action`2::_event
	Event_2_t04FA8831B303A3F77AF8B7E1B8C05E9562E771AF * ____event_0;
	// UnityEngine.Events.UnityAction`2<T0,T1> Valve.VR.SteamVR_Events_Action`2::action
	UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * ___action_1;

public:
	inline static int32_t get_offset_of__event_0() { return static_cast<int32_t>(offsetof(Action_2_t4EB83A128D36A66F70839A9D3BC6A86785F3E92E, ____event_0)); }
	inline Event_2_t04FA8831B303A3F77AF8B7E1B8C05E9562E771AF * get__event_0() const { return ____event_0; }
	inline Event_2_t04FA8831B303A3F77AF8B7E1B8C05E9562E771AF ** get_address_of__event_0() { return &____event_0; }
	inline void set__event_0(Event_2_t04FA8831B303A3F77AF8B7E1B8C05E9562E771AF * value)
	{
		____event_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____event_0), (void*)value);
	}

	inline static int32_t get_offset_of_action_1() { return static_cast<int32_t>(offsetof(Action_2_t4EB83A128D36A66F70839A9D3BC6A86785F3E92E, ___action_1)); }
	inline UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * get_action_1() const { return ___action_1; }
	inline UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 ** get_address_of_action_1() { return &___action_1; }
	inline void set_action_1(UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * value)
	{
		___action_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___action_1), (void*)value);
	}
};


// Valve.VR.SteamVR_Events_Action`3<System.Object,System.Object,System.Object>
struct  Action_3_t927B7E19334E790BC03E72B8B01289B581E7F6ED  : public Action_tD381670DCBAE1D2EE90871FC4B0DE139675A28C5
{
public:
	// Valve.VR.SteamVR_Events_Event`3<T0,T1,T2> Valve.VR.SteamVR_Events_Action`3::_event
	Event_3_t35D9D60B1134BEB59186505A31E7F27F1AD4A8E6 * ____event_0;
	// UnityEngine.Events.UnityAction`3<T0,T1,T2> Valve.VR.SteamVR_Events_Action`3::action
	UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * ___action_1;

public:
	inline static int32_t get_offset_of__event_0() { return static_cast<int32_t>(offsetof(Action_3_t927B7E19334E790BC03E72B8B01289B581E7F6ED, ____event_0)); }
	inline Event_3_t35D9D60B1134BEB59186505A31E7F27F1AD4A8E6 * get__event_0() const { return ____event_0; }
	inline Event_3_t35D9D60B1134BEB59186505A31E7F27F1AD4A8E6 ** get_address_of__event_0() { return &____event_0; }
	inline void set__event_0(Event_3_t35D9D60B1134BEB59186505A31E7F27F1AD4A8E6 * value)
	{
		____event_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____event_0), (void*)value);
	}

	inline static int32_t get_offset_of_action_1() { return static_cast<int32_t>(offsetof(Action_3_t927B7E19334E790BC03E72B8B01289B581E7F6ED, ___action_1)); }
	inline UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * get_action_1() const { return ___action_1; }
	inline UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 ** get_address_of_action_1() { return &___action_1; }
	inline void set_action_1(UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * value)
	{
		___action_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___action_1), (void*)value);
	}
};


// Valve.VR.SteamVR_Events_Action`3<UnityEngine.Color,System.Single,System.Boolean>
struct  Action_3_t7D8734BBE6B7EB1F779A2546951827ACF04C9152  : public Action_tD381670DCBAE1D2EE90871FC4B0DE139675A28C5
{
public:
	// Valve.VR.SteamVR_Events_Event`3<T0,T1,T2> Valve.VR.SteamVR_Events_Action`3::_event
	Event_3_t5541668D2F9E46098EA2A527B35E4D3BD6D8450B * ____event_0;
	// UnityEngine.Events.UnityAction`3<T0,T1,T2> Valve.VR.SteamVR_Events_Action`3::action
	UnityAction_3_tBB281EE324EEF9D6CD3F2B8B7C3695D8EB743EEB * ___action_1;

public:
	inline static int32_t get_offset_of__event_0() { return static_cast<int32_t>(offsetof(Action_3_t7D8734BBE6B7EB1F779A2546951827ACF04C9152, ____event_0)); }
	inline Event_3_t5541668D2F9E46098EA2A527B35E4D3BD6D8450B * get__event_0() const { return ____event_0; }
	inline Event_3_t5541668D2F9E46098EA2A527B35E4D3BD6D8450B ** get_address_of__event_0() { return &____event_0; }
	inline void set__event_0(Event_3_t5541668D2F9E46098EA2A527B35E4D3BD6D8450B * value)
	{
		____event_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____event_0), (void*)value);
	}

	inline static int32_t get_offset_of_action_1() { return static_cast<int32_t>(offsetof(Action_3_t7D8734BBE6B7EB1F779A2546951827ACF04C9152, ___action_1)); }
	inline UnityAction_3_tBB281EE324EEF9D6CD3F2B8B7C3695D8EB743EEB * get_action_1() const { return ___action_1; }
	inline UnityAction_3_tBB281EE324EEF9D6CD3F2B8B7C3695D8EB743EEB ** get_address_of_action_1() { return &___action_1; }
	inline void set_action_1(UnityAction_3_tBB281EE324EEF9D6CD3F2B8B7C3695D8EB743EEB * value)
	{
		___action_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___action_1), (void*)value);
	}
};


// Valve.VR.VREvent_ApplicationLaunch_t
struct  VREvent_ApplicationLaunch_t_t19D5E8E56A4A34EBA9497F8560DDBC045BC22389 
{
public:
	// System.UInt32 Valve.VR.VREvent_ApplicationLaunch_t::pid
	uint32_t ___pid_0;
	// System.UInt32 Valve.VR.VREvent_ApplicationLaunch_t::unArgsHandle
	uint32_t ___unArgsHandle_1;

public:
	inline static int32_t get_offset_of_pid_0() { return static_cast<int32_t>(offsetof(VREvent_ApplicationLaunch_t_t19D5E8E56A4A34EBA9497F8560DDBC045BC22389, ___pid_0)); }
	inline uint32_t get_pid_0() const { return ___pid_0; }
	inline uint32_t* get_address_of_pid_0() { return &___pid_0; }
	inline void set_pid_0(uint32_t value)
	{
		___pid_0 = value;
	}

	inline static int32_t get_offset_of_unArgsHandle_1() { return static_cast<int32_t>(offsetof(VREvent_ApplicationLaunch_t_t19D5E8E56A4A34EBA9497F8560DDBC045BC22389, ___unArgsHandle_1)); }
	inline uint32_t get_unArgsHandle_1() const { return ___unArgsHandle_1; }
	inline uint32_t* get_address_of_unArgsHandle_1() { return &___unArgsHandle_1; }
	inline void set_unArgsHandle_1(uint32_t value)
	{
		___unArgsHandle_1 = value;
	}
};


// Valve.VR.VREvent_Chaperone_t
struct  VREvent_Chaperone_t_tCFAB4B0381A4EF5741D86EF3A75514337B44EA85 
{
public:
	// System.UInt64 Valve.VR.VREvent_Chaperone_t::m_nPreviousUniverse
	uint64_t ___m_nPreviousUniverse_0;
	// System.UInt64 Valve.VR.VREvent_Chaperone_t::m_nCurrentUniverse
	uint64_t ___m_nCurrentUniverse_1;

public:
	inline static int32_t get_offset_of_m_nPreviousUniverse_0() { return static_cast<int32_t>(offsetof(VREvent_Chaperone_t_tCFAB4B0381A4EF5741D86EF3A75514337B44EA85, ___m_nPreviousUniverse_0)); }
	inline uint64_t get_m_nPreviousUniverse_0() const { return ___m_nPreviousUniverse_0; }
	inline uint64_t* get_address_of_m_nPreviousUniverse_0() { return &___m_nPreviousUniverse_0; }
	inline void set_m_nPreviousUniverse_0(uint64_t value)
	{
		___m_nPreviousUniverse_0 = value;
	}

	inline static int32_t get_offset_of_m_nCurrentUniverse_1() { return static_cast<int32_t>(offsetof(VREvent_Chaperone_t_tCFAB4B0381A4EF5741D86EF3A75514337B44EA85, ___m_nCurrentUniverse_1)); }
	inline uint64_t get_m_nCurrentUniverse_1() const { return ___m_nCurrentUniverse_1; }
	inline uint64_t* get_address_of_m_nCurrentUniverse_1() { return &___m_nCurrentUniverse_1; }
	inline void set_m_nCurrentUniverse_1(uint64_t value)
	{
		___m_nCurrentUniverse_1 = value;
	}
};


// Valve.VR.VREvent_Controller_t
struct  VREvent_Controller_t_t5976E21986D7CBB3313289F60169F60680DF5D05 
{
public:
	// System.UInt32 Valve.VR.VREvent_Controller_t::button
	uint32_t ___button_0;

public:
	inline static int32_t get_offset_of_button_0() { return static_cast<int32_t>(offsetof(VREvent_Controller_t_t5976E21986D7CBB3313289F60169F60680DF5D05, ___button_0)); }
	inline uint32_t get_button_0() const { return ___button_0; }
	inline uint32_t* get_address_of_button_0() { return &___button_0; }
	inline void set_button_0(uint32_t value)
	{
		___button_0 = value;
	}
};


// Valve.VR.VREvent_EditingCameraSurface_t
struct  VREvent_EditingCameraSurface_t_t001B622D6CDFD7226DB4337AEE63DB317E6420FC 
{
public:
	// System.UInt64 Valve.VR.VREvent_EditingCameraSurface_t::overlayHandle
	uint64_t ___overlayHandle_0;
	// System.UInt32 Valve.VR.VREvent_EditingCameraSurface_t::nVisualMode
	uint32_t ___nVisualMode_1;

public:
	inline static int32_t get_offset_of_overlayHandle_0() { return static_cast<int32_t>(offsetof(VREvent_EditingCameraSurface_t_t001B622D6CDFD7226DB4337AEE63DB317E6420FC, ___overlayHandle_0)); }
	inline uint64_t get_overlayHandle_0() const { return ___overlayHandle_0; }
	inline uint64_t* get_address_of_overlayHandle_0() { return &___overlayHandle_0; }
	inline void set_overlayHandle_0(uint64_t value)
	{
		___overlayHandle_0 = value;
	}

	inline static int32_t get_offset_of_nVisualMode_1() { return static_cast<int32_t>(offsetof(VREvent_EditingCameraSurface_t_t001B622D6CDFD7226DB4337AEE63DB317E6420FC, ___nVisualMode_1)); }
	inline uint32_t get_nVisualMode_1() const { return ___nVisualMode_1; }
	inline uint32_t* get_address_of_nVisualMode_1() { return &___nVisualMode_1; }
	inline void set_nVisualMode_1(uint32_t value)
	{
		___nVisualMode_1 = value;
	}
};


// Valve.VR.VREvent_HapticVibration_t
struct  VREvent_HapticVibration_t_tC31D4D068A151263ADCB11D4C8349D5774AC246F 
{
public:
	// System.UInt64 Valve.VR.VREvent_HapticVibration_t::containerHandle
	uint64_t ___containerHandle_0;
	// System.UInt64 Valve.VR.VREvent_HapticVibration_t::componentHandle
	uint64_t ___componentHandle_1;
	// System.Single Valve.VR.VREvent_HapticVibration_t::fDurationSeconds
	float ___fDurationSeconds_2;
	// System.Single Valve.VR.VREvent_HapticVibration_t::fFrequency
	float ___fFrequency_3;
	// System.Single Valve.VR.VREvent_HapticVibration_t::fAmplitude
	float ___fAmplitude_4;

public:
	inline static int32_t get_offset_of_containerHandle_0() { return static_cast<int32_t>(offsetof(VREvent_HapticVibration_t_tC31D4D068A151263ADCB11D4C8349D5774AC246F, ___containerHandle_0)); }
	inline uint64_t get_containerHandle_0() const { return ___containerHandle_0; }
	inline uint64_t* get_address_of_containerHandle_0() { return &___containerHandle_0; }
	inline void set_containerHandle_0(uint64_t value)
	{
		___containerHandle_0 = value;
	}

	inline static int32_t get_offset_of_componentHandle_1() { return static_cast<int32_t>(offsetof(VREvent_HapticVibration_t_tC31D4D068A151263ADCB11D4C8349D5774AC246F, ___componentHandle_1)); }
	inline uint64_t get_componentHandle_1() const { return ___componentHandle_1; }
	inline uint64_t* get_address_of_componentHandle_1() { return &___componentHandle_1; }
	inline void set_componentHandle_1(uint64_t value)
	{
		___componentHandle_1 = value;
	}

	inline static int32_t get_offset_of_fDurationSeconds_2() { return static_cast<int32_t>(offsetof(VREvent_HapticVibration_t_tC31D4D068A151263ADCB11D4C8349D5774AC246F, ___fDurationSeconds_2)); }
	inline float get_fDurationSeconds_2() const { return ___fDurationSeconds_2; }
	inline float* get_address_of_fDurationSeconds_2() { return &___fDurationSeconds_2; }
	inline void set_fDurationSeconds_2(float value)
	{
		___fDurationSeconds_2 = value;
	}

	inline static int32_t get_offset_of_fFrequency_3() { return static_cast<int32_t>(offsetof(VREvent_HapticVibration_t_tC31D4D068A151263ADCB11D4C8349D5774AC246F, ___fFrequency_3)); }
	inline float get_fFrequency_3() const { return ___fFrequency_3; }
	inline float* get_address_of_fFrequency_3() { return &___fFrequency_3; }
	inline void set_fFrequency_3(float value)
	{
		___fFrequency_3 = value;
	}

	inline static int32_t get_offset_of_fAmplitude_4() { return static_cast<int32_t>(offsetof(VREvent_HapticVibration_t_tC31D4D068A151263ADCB11D4C8349D5774AC246F, ___fAmplitude_4)); }
	inline float get_fAmplitude_4() const { return ___fAmplitude_4; }
	inline float* get_address_of_fAmplitude_4() { return &___fAmplitude_4; }
	inline void set_fAmplitude_4(float value)
	{
		___fAmplitude_4 = value;
	}
};


// Valve.VR.VREvent_InputActionManifestLoad_t
struct  VREvent_InputActionManifestLoad_t_t80FAEB7CDAA5F4A1992C9701923F26D79C3E3A76 
{
public:
	// System.UInt64 Valve.VR.VREvent_InputActionManifestLoad_t::pathAppKey
	uint64_t ___pathAppKey_0;
	// System.UInt64 Valve.VR.VREvent_InputActionManifestLoad_t::pathMessage
	uint64_t ___pathMessage_1;
	// System.UInt64 Valve.VR.VREvent_InputActionManifestLoad_t::pathMessageParam
	uint64_t ___pathMessageParam_2;
	// System.UInt64 Valve.VR.VREvent_InputActionManifestLoad_t::pathManifestPath
	uint64_t ___pathManifestPath_3;

public:
	inline static int32_t get_offset_of_pathAppKey_0() { return static_cast<int32_t>(offsetof(VREvent_InputActionManifestLoad_t_t80FAEB7CDAA5F4A1992C9701923F26D79C3E3A76, ___pathAppKey_0)); }
	inline uint64_t get_pathAppKey_0() const { return ___pathAppKey_0; }
	inline uint64_t* get_address_of_pathAppKey_0() { return &___pathAppKey_0; }
	inline void set_pathAppKey_0(uint64_t value)
	{
		___pathAppKey_0 = value;
	}

	inline static int32_t get_offset_of_pathMessage_1() { return static_cast<int32_t>(offsetof(VREvent_InputActionManifestLoad_t_t80FAEB7CDAA5F4A1992C9701923F26D79C3E3A76, ___pathMessage_1)); }
	inline uint64_t get_pathMessage_1() const { return ___pathMessage_1; }
	inline uint64_t* get_address_of_pathMessage_1() { return &___pathMessage_1; }
	inline void set_pathMessage_1(uint64_t value)
	{
		___pathMessage_1 = value;
	}

	inline static int32_t get_offset_of_pathMessageParam_2() { return static_cast<int32_t>(offsetof(VREvent_InputActionManifestLoad_t_t80FAEB7CDAA5F4A1992C9701923F26D79C3E3A76, ___pathMessageParam_2)); }
	inline uint64_t get_pathMessageParam_2() const { return ___pathMessageParam_2; }
	inline uint64_t* get_address_of_pathMessageParam_2() { return &___pathMessageParam_2; }
	inline void set_pathMessageParam_2(uint64_t value)
	{
		___pathMessageParam_2 = value;
	}

	inline static int32_t get_offset_of_pathManifestPath_3() { return static_cast<int32_t>(offsetof(VREvent_InputActionManifestLoad_t_t80FAEB7CDAA5F4A1992C9701923F26D79C3E3A76, ___pathManifestPath_3)); }
	inline uint64_t get_pathManifestPath_3() const { return ___pathManifestPath_3; }
	inline uint64_t* get_address_of_pathManifestPath_3() { return &___pathManifestPath_3; }
	inline void set_pathManifestPath_3(uint64_t value)
	{
		___pathManifestPath_3 = value;
	}
};


// Valve.VR.VREvent_InputBindingLoad_t
struct  VREvent_InputBindingLoad_t_tC758CE9776D2810CD958CB23032BE745D51E1EED 
{
public:
	// System.UInt64 Valve.VR.VREvent_InputBindingLoad_t::ulAppContainer
	uint64_t ___ulAppContainer_0;
	// System.UInt64 Valve.VR.VREvent_InputBindingLoad_t::pathMessage
	uint64_t ___pathMessage_1;
	// System.UInt64 Valve.VR.VREvent_InputBindingLoad_t::pathUrl
	uint64_t ___pathUrl_2;
	// System.UInt64 Valve.VR.VREvent_InputBindingLoad_t::pathControllerType
	uint64_t ___pathControllerType_3;

public:
	inline static int32_t get_offset_of_ulAppContainer_0() { return static_cast<int32_t>(offsetof(VREvent_InputBindingLoad_t_tC758CE9776D2810CD958CB23032BE745D51E1EED, ___ulAppContainer_0)); }
	inline uint64_t get_ulAppContainer_0() const { return ___ulAppContainer_0; }
	inline uint64_t* get_address_of_ulAppContainer_0() { return &___ulAppContainer_0; }
	inline void set_ulAppContainer_0(uint64_t value)
	{
		___ulAppContainer_0 = value;
	}

	inline static int32_t get_offset_of_pathMessage_1() { return static_cast<int32_t>(offsetof(VREvent_InputBindingLoad_t_tC758CE9776D2810CD958CB23032BE745D51E1EED, ___pathMessage_1)); }
	inline uint64_t get_pathMessage_1() const { return ___pathMessage_1; }
	inline uint64_t* get_address_of_pathMessage_1() { return &___pathMessage_1; }
	inline void set_pathMessage_1(uint64_t value)
	{
		___pathMessage_1 = value;
	}

	inline static int32_t get_offset_of_pathUrl_2() { return static_cast<int32_t>(offsetof(VREvent_InputBindingLoad_t_tC758CE9776D2810CD958CB23032BE745D51E1EED, ___pathUrl_2)); }
	inline uint64_t get_pathUrl_2() const { return ___pathUrl_2; }
	inline uint64_t* get_address_of_pathUrl_2() { return &___pathUrl_2; }
	inline void set_pathUrl_2(uint64_t value)
	{
		___pathUrl_2 = value;
	}

	inline static int32_t get_offset_of_pathControllerType_3() { return static_cast<int32_t>(offsetof(VREvent_InputBindingLoad_t_tC758CE9776D2810CD958CB23032BE745D51E1EED, ___pathControllerType_3)); }
	inline uint64_t get_pathControllerType_3() const { return ___pathControllerType_3; }
	inline uint64_t* get_address_of_pathControllerType_3() { return &___pathControllerType_3; }
	inline void set_pathControllerType_3(uint64_t value)
	{
		___pathControllerType_3 = value;
	}
};


// Valve.VR.VREvent_Ipd_t
struct  VREvent_Ipd_t_tA834CF90F72C0F1C4905DCCCA0D7AF0A3043B400 
{
public:
	// System.Single Valve.VR.VREvent_Ipd_t::ipdMeters
	float ___ipdMeters_0;

public:
	inline static int32_t get_offset_of_ipdMeters_0() { return static_cast<int32_t>(offsetof(VREvent_Ipd_t_tA834CF90F72C0F1C4905DCCCA0D7AF0A3043B400, ___ipdMeters_0)); }
	inline float get_ipdMeters_0() const { return ___ipdMeters_0; }
	inline float* get_address_of_ipdMeters_0() { return &___ipdMeters_0; }
	inline void set_ipdMeters_0(float value)
	{
		___ipdMeters_0 = value;
	}
};


// Valve.VR.VREvent_Keyboard_t
struct  VREvent_Keyboard_t_t0FAA9B97A441A22EC65002BC6FDEB4AF7A045297 
{
public:
	// System.Byte Valve.VR.VREvent_Keyboard_t::cNewInput0
	uint8_t ___cNewInput0_0;
	// System.Byte Valve.VR.VREvent_Keyboard_t::cNewInput1
	uint8_t ___cNewInput1_1;
	// System.Byte Valve.VR.VREvent_Keyboard_t::cNewInput2
	uint8_t ___cNewInput2_2;
	// System.Byte Valve.VR.VREvent_Keyboard_t::cNewInput3
	uint8_t ___cNewInput3_3;
	// System.Byte Valve.VR.VREvent_Keyboard_t::cNewInput4
	uint8_t ___cNewInput4_4;
	// System.Byte Valve.VR.VREvent_Keyboard_t::cNewInput5
	uint8_t ___cNewInput5_5;
	// System.Byte Valve.VR.VREvent_Keyboard_t::cNewInput6
	uint8_t ___cNewInput6_6;
	// System.Byte Valve.VR.VREvent_Keyboard_t::cNewInput7
	uint8_t ___cNewInput7_7;
	// System.UInt64 Valve.VR.VREvent_Keyboard_t::uUserValue
	uint64_t ___uUserValue_8;

public:
	inline static int32_t get_offset_of_cNewInput0_0() { return static_cast<int32_t>(offsetof(VREvent_Keyboard_t_t0FAA9B97A441A22EC65002BC6FDEB4AF7A045297, ___cNewInput0_0)); }
	inline uint8_t get_cNewInput0_0() const { return ___cNewInput0_0; }
	inline uint8_t* get_address_of_cNewInput0_0() { return &___cNewInput0_0; }
	inline void set_cNewInput0_0(uint8_t value)
	{
		___cNewInput0_0 = value;
	}

	inline static int32_t get_offset_of_cNewInput1_1() { return static_cast<int32_t>(offsetof(VREvent_Keyboard_t_t0FAA9B97A441A22EC65002BC6FDEB4AF7A045297, ___cNewInput1_1)); }
	inline uint8_t get_cNewInput1_1() const { return ___cNewInput1_1; }
	inline uint8_t* get_address_of_cNewInput1_1() { return &___cNewInput1_1; }
	inline void set_cNewInput1_1(uint8_t value)
	{
		___cNewInput1_1 = value;
	}

	inline static int32_t get_offset_of_cNewInput2_2() { return static_cast<int32_t>(offsetof(VREvent_Keyboard_t_t0FAA9B97A441A22EC65002BC6FDEB4AF7A045297, ___cNewInput2_2)); }
	inline uint8_t get_cNewInput2_2() const { return ___cNewInput2_2; }
	inline uint8_t* get_address_of_cNewInput2_2() { return &___cNewInput2_2; }
	inline void set_cNewInput2_2(uint8_t value)
	{
		___cNewInput2_2 = value;
	}

	inline static int32_t get_offset_of_cNewInput3_3() { return static_cast<int32_t>(offsetof(VREvent_Keyboard_t_t0FAA9B97A441A22EC65002BC6FDEB4AF7A045297, ___cNewInput3_3)); }
	inline uint8_t get_cNewInput3_3() const { return ___cNewInput3_3; }
	inline uint8_t* get_address_of_cNewInput3_3() { return &___cNewInput3_3; }
	inline void set_cNewInput3_3(uint8_t value)
	{
		___cNewInput3_3 = value;
	}

	inline static int32_t get_offset_of_cNewInput4_4() { return static_cast<int32_t>(offsetof(VREvent_Keyboard_t_t0FAA9B97A441A22EC65002BC6FDEB4AF7A045297, ___cNewInput4_4)); }
	inline uint8_t get_cNewInput4_4() const { return ___cNewInput4_4; }
	inline uint8_t* get_address_of_cNewInput4_4() { return &___cNewInput4_4; }
	inline void set_cNewInput4_4(uint8_t value)
	{
		___cNewInput4_4 = value;
	}

	inline static int32_t get_offset_of_cNewInput5_5() { return static_cast<int32_t>(offsetof(VREvent_Keyboard_t_t0FAA9B97A441A22EC65002BC6FDEB4AF7A045297, ___cNewInput5_5)); }
	inline uint8_t get_cNewInput5_5() const { return ___cNewInput5_5; }
	inline uint8_t* get_address_of_cNewInput5_5() { return &___cNewInput5_5; }
	inline void set_cNewInput5_5(uint8_t value)
	{
		___cNewInput5_5 = value;
	}

	inline static int32_t get_offset_of_cNewInput6_6() { return static_cast<int32_t>(offsetof(VREvent_Keyboard_t_t0FAA9B97A441A22EC65002BC6FDEB4AF7A045297, ___cNewInput6_6)); }
	inline uint8_t get_cNewInput6_6() const { return ___cNewInput6_6; }
	inline uint8_t* get_address_of_cNewInput6_6() { return &___cNewInput6_6; }
	inline void set_cNewInput6_6(uint8_t value)
	{
		___cNewInput6_6 = value;
	}

	inline static int32_t get_offset_of_cNewInput7_7() { return static_cast<int32_t>(offsetof(VREvent_Keyboard_t_t0FAA9B97A441A22EC65002BC6FDEB4AF7A045297, ___cNewInput7_7)); }
	inline uint8_t get_cNewInput7_7() const { return ___cNewInput7_7; }
	inline uint8_t* get_address_of_cNewInput7_7() { return &___cNewInput7_7; }
	inline void set_cNewInput7_7(uint8_t value)
	{
		___cNewInput7_7 = value;
	}

	inline static int32_t get_offset_of_uUserValue_8() { return static_cast<int32_t>(offsetof(VREvent_Keyboard_t_t0FAA9B97A441A22EC65002BC6FDEB4AF7A045297, ___uUserValue_8)); }
	inline uint64_t get_uUserValue_8() const { return ___uUserValue_8; }
	inline uint64_t* get_address_of_uUserValue_8() { return &___uUserValue_8; }
	inline void set_uUserValue_8(uint64_t value)
	{
		___uUserValue_8 = value;
	}
};


// Valve.VR.VREvent_MessageOverlay_t
struct  VREvent_MessageOverlay_t_t527A27CE8C9CDC089759AEF6257E7F5803D72BA1 
{
public:
	// System.UInt32 Valve.VR.VREvent_MessageOverlay_t::unVRMessageOverlayResponse
	uint32_t ___unVRMessageOverlayResponse_0;

public:
	inline static int32_t get_offset_of_unVRMessageOverlayResponse_0() { return static_cast<int32_t>(offsetof(VREvent_MessageOverlay_t_t527A27CE8C9CDC089759AEF6257E7F5803D72BA1, ___unVRMessageOverlayResponse_0)); }
	inline uint32_t get_unVRMessageOverlayResponse_0() const { return ___unVRMessageOverlayResponse_0; }
	inline uint32_t* get_address_of_unVRMessageOverlayResponse_0() { return &___unVRMessageOverlayResponse_0; }
	inline void set_unVRMessageOverlayResponse_0(uint32_t value)
	{
		___unVRMessageOverlayResponse_0 = value;
	}
};


// Valve.VR.VREvent_Mouse_t
struct  VREvent_Mouse_t_t6A0AB81EE408C60C23B2347B2D54DF92EB389B1B 
{
public:
	// System.Single Valve.VR.VREvent_Mouse_t::x
	float ___x_0;
	// System.Single Valve.VR.VREvent_Mouse_t::y
	float ___y_1;
	// System.UInt32 Valve.VR.VREvent_Mouse_t::button
	uint32_t ___button_2;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(VREvent_Mouse_t_t6A0AB81EE408C60C23B2347B2D54DF92EB389B1B, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(VREvent_Mouse_t_t6A0AB81EE408C60C23B2347B2D54DF92EB389B1B, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_button_2() { return static_cast<int32_t>(offsetof(VREvent_Mouse_t_t6A0AB81EE408C60C23B2347B2D54DF92EB389B1B, ___button_2)); }
	inline uint32_t get_button_2() const { return ___button_2; }
	inline uint32_t* get_address_of_button_2() { return &___button_2; }
	inline void set_button_2(uint32_t value)
	{
		___button_2 = value;
	}
};


// Valve.VR.VREvent_Notification_t
struct  VREvent_Notification_t_t3307E55FBD25A98BF78C740FE9494406A45F94BB 
{
public:
	// System.UInt64 Valve.VR.VREvent_Notification_t::ulUserValue
	uint64_t ___ulUserValue_0;
	// System.UInt32 Valve.VR.VREvent_Notification_t::notificationId
	uint32_t ___notificationId_1;

public:
	inline static int32_t get_offset_of_ulUserValue_0() { return static_cast<int32_t>(offsetof(VREvent_Notification_t_t3307E55FBD25A98BF78C740FE9494406A45F94BB, ___ulUserValue_0)); }
	inline uint64_t get_ulUserValue_0() const { return ___ulUserValue_0; }
	inline uint64_t* get_address_of_ulUserValue_0() { return &___ulUserValue_0; }
	inline void set_ulUserValue_0(uint64_t value)
	{
		___ulUserValue_0 = value;
	}

	inline static int32_t get_offset_of_notificationId_1() { return static_cast<int32_t>(offsetof(VREvent_Notification_t_t3307E55FBD25A98BF78C740FE9494406A45F94BB, ___notificationId_1)); }
	inline uint32_t get_notificationId_1() const { return ___notificationId_1; }
	inline uint32_t* get_address_of_notificationId_1() { return &___notificationId_1; }
	inline void set_notificationId_1(uint32_t value)
	{
		___notificationId_1 = value;
	}
};


// Valve.VR.VREvent_Overlay_t
struct  VREvent_Overlay_t_t6D2D8442E708459C57882EA5E5D6EE0912FAD76C 
{
public:
	// System.UInt64 Valve.VR.VREvent_Overlay_t::overlayHandle
	uint64_t ___overlayHandle_0;
	// System.UInt64 Valve.VR.VREvent_Overlay_t::devicePath
	uint64_t ___devicePath_1;

public:
	inline static int32_t get_offset_of_overlayHandle_0() { return static_cast<int32_t>(offsetof(VREvent_Overlay_t_t6D2D8442E708459C57882EA5E5D6EE0912FAD76C, ___overlayHandle_0)); }
	inline uint64_t get_overlayHandle_0() const { return ___overlayHandle_0; }
	inline uint64_t* get_address_of_overlayHandle_0() { return &___overlayHandle_0; }
	inline void set_overlayHandle_0(uint64_t value)
	{
		___overlayHandle_0 = value;
	}

	inline static int32_t get_offset_of_devicePath_1() { return static_cast<int32_t>(offsetof(VREvent_Overlay_t_t6D2D8442E708459C57882EA5E5D6EE0912FAD76C, ___devicePath_1)); }
	inline uint64_t get_devicePath_1() const { return ___devicePath_1; }
	inline uint64_t* get_address_of_devicePath_1() { return &___devicePath_1; }
	inline void set_devicePath_1(uint64_t value)
	{
		___devicePath_1 = value;
	}
};


// Valve.VR.VREvent_PerformanceTest_t
struct  VREvent_PerformanceTest_t_t7907E419EE035B684299AF08075DE02A6D9AA7AA 
{
public:
	// System.UInt32 Valve.VR.VREvent_PerformanceTest_t::m_nFidelityLevel
	uint32_t ___m_nFidelityLevel_0;

public:
	inline static int32_t get_offset_of_m_nFidelityLevel_0() { return static_cast<int32_t>(offsetof(VREvent_PerformanceTest_t_t7907E419EE035B684299AF08075DE02A6D9AA7AA, ___m_nFidelityLevel_0)); }
	inline uint32_t get_m_nFidelityLevel_0() const { return ___m_nFidelityLevel_0; }
	inline uint32_t* get_address_of_m_nFidelityLevel_0() { return &___m_nFidelityLevel_0; }
	inline void set_m_nFidelityLevel_0(uint32_t value)
	{
		___m_nFidelityLevel_0 = value;
	}
};


// Valve.VR.VREvent_Process_t
struct  VREvent_Process_t_t83E4C3D9CAE8D898B914245BF7E34E2FD47EBE1E 
{
public:
	// System.UInt32 Valve.VR.VREvent_Process_t::pid
	uint32_t ___pid_0;
	// System.UInt32 Valve.VR.VREvent_Process_t::oldPid
	uint32_t ___oldPid_1;
	// System.Boolean Valve.VR.VREvent_Process_t::bForced
	bool ___bForced_2;
	// System.Boolean Valve.VR.VREvent_Process_t::bConnectionLost
	bool ___bConnectionLost_3;

public:
	inline static int32_t get_offset_of_pid_0() { return static_cast<int32_t>(offsetof(VREvent_Process_t_t83E4C3D9CAE8D898B914245BF7E34E2FD47EBE1E, ___pid_0)); }
	inline uint32_t get_pid_0() const { return ___pid_0; }
	inline uint32_t* get_address_of_pid_0() { return &___pid_0; }
	inline void set_pid_0(uint32_t value)
	{
		___pid_0 = value;
	}

	inline static int32_t get_offset_of_oldPid_1() { return static_cast<int32_t>(offsetof(VREvent_Process_t_t83E4C3D9CAE8D898B914245BF7E34E2FD47EBE1E, ___oldPid_1)); }
	inline uint32_t get_oldPid_1() const { return ___oldPid_1; }
	inline uint32_t* get_address_of_oldPid_1() { return &___oldPid_1; }
	inline void set_oldPid_1(uint32_t value)
	{
		___oldPid_1 = value;
	}

	inline static int32_t get_offset_of_bForced_2() { return static_cast<int32_t>(offsetof(VREvent_Process_t_t83E4C3D9CAE8D898B914245BF7E34E2FD47EBE1E, ___bForced_2)); }
	inline bool get_bForced_2() const { return ___bForced_2; }
	inline bool* get_address_of_bForced_2() { return &___bForced_2; }
	inline void set_bForced_2(bool value)
	{
		___bForced_2 = value;
	}

	inline static int32_t get_offset_of_bConnectionLost_3() { return static_cast<int32_t>(offsetof(VREvent_Process_t_t83E4C3D9CAE8D898B914245BF7E34E2FD47EBE1E, ___bConnectionLost_3)); }
	inline bool get_bConnectionLost_3() const { return ___bConnectionLost_3; }
	inline bool* get_address_of_bConnectionLost_3() { return &___bConnectionLost_3; }
	inline void set_bConnectionLost_3(bool value)
	{
		___bConnectionLost_3 = value;
	}
};


// Valve.VR.VREvent_ProgressUpdate_t
struct  VREvent_ProgressUpdate_t_tE2EE0FDAEB40796B73B8477434588652690495AE 
{
public:
	// System.UInt64 Valve.VR.VREvent_ProgressUpdate_t::ulApplicationPropertyContainer
	uint64_t ___ulApplicationPropertyContainer_0;
	// System.UInt64 Valve.VR.VREvent_ProgressUpdate_t::pathDevice
	uint64_t ___pathDevice_1;
	// System.UInt64 Valve.VR.VREvent_ProgressUpdate_t::pathInputSource
	uint64_t ___pathInputSource_2;
	// System.UInt64 Valve.VR.VREvent_ProgressUpdate_t::pathProgressAction
	uint64_t ___pathProgressAction_3;
	// System.UInt64 Valve.VR.VREvent_ProgressUpdate_t::pathIcon
	uint64_t ___pathIcon_4;
	// System.Single Valve.VR.VREvent_ProgressUpdate_t::fProgress
	float ___fProgress_5;

public:
	inline static int32_t get_offset_of_ulApplicationPropertyContainer_0() { return static_cast<int32_t>(offsetof(VREvent_ProgressUpdate_t_tE2EE0FDAEB40796B73B8477434588652690495AE, ___ulApplicationPropertyContainer_0)); }
	inline uint64_t get_ulApplicationPropertyContainer_0() const { return ___ulApplicationPropertyContainer_0; }
	inline uint64_t* get_address_of_ulApplicationPropertyContainer_0() { return &___ulApplicationPropertyContainer_0; }
	inline void set_ulApplicationPropertyContainer_0(uint64_t value)
	{
		___ulApplicationPropertyContainer_0 = value;
	}

	inline static int32_t get_offset_of_pathDevice_1() { return static_cast<int32_t>(offsetof(VREvent_ProgressUpdate_t_tE2EE0FDAEB40796B73B8477434588652690495AE, ___pathDevice_1)); }
	inline uint64_t get_pathDevice_1() const { return ___pathDevice_1; }
	inline uint64_t* get_address_of_pathDevice_1() { return &___pathDevice_1; }
	inline void set_pathDevice_1(uint64_t value)
	{
		___pathDevice_1 = value;
	}

	inline static int32_t get_offset_of_pathInputSource_2() { return static_cast<int32_t>(offsetof(VREvent_ProgressUpdate_t_tE2EE0FDAEB40796B73B8477434588652690495AE, ___pathInputSource_2)); }
	inline uint64_t get_pathInputSource_2() const { return ___pathInputSource_2; }
	inline uint64_t* get_address_of_pathInputSource_2() { return &___pathInputSource_2; }
	inline void set_pathInputSource_2(uint64_t value)
	{
		___pathInputSource_2 = value;
	}

	inline static int32_t get_offset_of_pathProgressAction_3() { return static_cast<int32_t>(offsetof(VREvent_ProgressUpdate_t_tE2EE0FDAEB40796B73B8477434588652690495AE, ___pathProgressAction_3)); }
	inline uint64_t get_pathProgressAction_3() const { return ___pathProgressAction_3; }
	inline uint64_t* get_address_of_pathProgressAction_3() { return &___pathProgressAction_3; }
	inline void set_pathProgressAction_3(uint64_t value)
	{
		___pathProgressAction_3 = value;
	}

	inline static int32_t get_offset_of_pathIcon_4() { return static_cast<int32_t>(offsetof(VREvent_ProgressUpdate_t_tE2EE0FDAEB40796B73B8477434588652690495AE, ___pathIcon_4)); }
	inline uint64_t get_pathIcon_4() const { return ___pathIcon_4; }
	inline uint64_t* get_address_of_pathIcon_4() { return &___pathIcon_4; }
	inline void set_pathIcon_4(uint64_t value)
	{
		___pathIcon_4 = value;
	}

	inline static int32_t get_offset_of_fProgress_5() { return static_cast<int32_t>(offsetof(VREvent_ProgressUpdate_t_tE2EE0FDAEB40796B73B8477434588652690495AE, ___fProgress_5)); }
	inline float get_fProgress_5() const { return ___fProgress_5; }
	inline float* get_address_of_fProgress_5() { return &___fProgress_5; }
	inline void set_fProgress_5(float value)
	{
		___fProgress_5 = value;
	}
};


// Valve.VR.VREvent_Reserved_t
struct  VREvent_Reserved_t_tD7AEEC778A329391A4DB25E9EACFC350464E7AB3 
{
public:
	// System.UInt64 Valve.VR.VREvent_Reserved_t::reserved0
	uint64_t ___reserved0_0;
	// System.UInt64 Valve.VR.VREvent_Reserved_t::reserved1
	uint64_t ___reserved1_1;
	// System.UInt64 Valve.VR.VREvent_Reserved_t::reserved2
	uint64_t ___reserved2_2;
	// System.UInt64 Valve.VR.VREvent_Reserved_t::reserved3
	uint64_t ___reserved3_3;
	// System.UInt64 Valve.VR.VREvent_Reserved_t::reserved4
	uint64_t ___reserved4_4;
	// System.UInt64 Valve.VR.VREvent_Reserved_t::reserved5
	uint64_t ___reserved5_5;

public:
	inline static int32_t get_offset_of_reserved0_0() { return static_cast<int32_t>(offsetof(VREvent_Reserved_t_tD7AEEC778A329391A4DB25E9EACFC350464E7AB3, ___reserved0_0)); }
	inline uint64_t get_reserved0_0() const { return ___reserved0_0; }
	inline uint64_t* get_address_of_reserved0_0() { return &___reserved0_0; }
	inline void set_reserved0_0(uint64_t value)
	{
		___reserved0_0 = value;
	}

	inline static int32_t get_offset_of_reserved1_1() { return static_cast<int32_t>(offsetof(VREvent_Reserved_t_tD7AEEC778A329391A4DB25E9EACFC350464E7AB3, ___reserved1_1)); }
	inline uint64_t get_reserved1_1() const { return ___reserved1_1; }
	inline uint64_t* get_address_of_reserved1_1() { return &___reserved1_1; }
	inline void set_reserved1_1(uint64_t value)
	{
		___reserved1_1 = value;
	}

	inline static int32_t get_offset_of_reserved2_2() { return static_cast<int32_t>(offsetof(VREvent_Reserved_t_tD7AEEC778A329391A4DB25E9EACFC350464E7AB3, ___reserved2_2)); }
	inline uint64_t get_reserved2_2() const { return ___reserved2_2; }
	inline uint64_t* get_address_of_reserved2_2() { return &___reserved2_2; }
	inline void set_reserved2_2(uint64_t value)
	{
		___reserved2_2 = value;
	}

	inline static int32_t get_offset_of_reserved3_3() { return static_cast<int32_t>(offsetof(VREvent_Reserved_t_tD7AEEC778A329391A4DB25E9EACFC350464E7AB3, ___reserved3_3)); }
	inline uint64_t get_reserved3_3() const { return ___reserved3_3; }
	inline uint64_t* get_address_of_reserved3_3() { return &___reserved3_3; }
	inline void set_reserved3_3(uint64_t value)
	{
		___reserved3_3 = value;
	}

	inline static int32_t get_offset_of_reserved4_4() { return static_cast<int32_t>(offsetof(VREvent_Reserved_t_tD7AEEC778A329391A4DB25E9EACFC350464E7AB3, ___reserved4_4)); }
	inline uint64_t get_reserved4_4() const { return ___reserved4_4; }
	inline uint64_t* get_address_of_reserved4_4() { return &___reserved4_4; }
	inline void set_reserved4_4(uint64_t value)
	{
		___reserved4_4 = value;
	}

	inline static int32_t get_offset_of_reserved5_5() { return static_cast<int32_t>(offsetof(VREvent_Reserved_t_tD7AEEC778A329391A4DB25E9EACFC350464E7AB3, ___reserved5_5)); }
	inline uint64_t get_reserved5_5() const { return ___reserved5_5; }
	inline uint64_t* get_address_of_reserved5_5() { return &___reserved5_5; }
	inline void set_reserved5_5(uint64_t value)
	{
		___reserved5_5 = value;
	}
};


// Valve.VR.VREvent_ScreenshotProgress_t
struct  VREvent_ScreenshotProgress_t_t9CD059D8FF2215EBC3F9014DE35F8847B904ECED 
{
public:
	// System.Single Valve.VR.VREvent_ScreenshotProgress_t::progress
	float ___progress_0;

public:
	inline static int32_t get_offset_of_progress_0() { return static_cast<int32_t>(offsetof(VREvent_ScreenshotProgress_t_t9CD059D8FF2215EBC3F9014DE35F8847B904ECED, ___progress_0)); }
	inline float get_progress_0() const { return ___progress_0; }
	inline float* get_address_of_progress_0() { return &___progress_0; }
	inline void set_progress_0(float value)
	{
		___progress_0 = value;
	}
};


// Valve.VR.VREvent_Screenshot_t
struct  VREvent_Screenshot_t_t1459B9F3FCD91BFF2A03D1F0DBC012594714BE97 
{
public:
	// System.UInt32 Valve.VR.VREvent_Screenshot_t::handle
	uint32_t ___handle_0;
	// System.UInt32 Valve.VR.VREvent_Screenshot_t::type
	uint32_t ___type_1;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(VREvent_Screenshot_t_t1459B9F3FCD91BFF2A03D1F0DBC012594714BE97, ___handle_0)); }
	inline uint32_t get_handle_0() const { return ___handle_0; }
	inline uint32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(uint32_t value)
	{
		___handle_0 = value;
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(VREvent_Screenshot_t_t1459B9F3FCD91BFF2A03D1F0DBC012594714BE97, ___type_1)); }
	inline uint32_t get_type_1() const { return ___type_1; }
	inline uint32_t* get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(uint32_t value)
	{
		___type_1 = value;
	}
};


// Valve.VR.VREvent_Scroll_t
struct  VREvent_Scroll_t_t5F4F013D4311FA0416A98AAE7B1C67794857D160 
{
public:
	// System.Single Valve.VR.VREvent_Scroll_t::xdelta
	float ___xdelta_0;
	// System.Single Valve.VR.VREvent_Scroll_t::ydelta
	float ___ydelta_1;
	// System.UInt32 Valve.VR.VREvent_Scroll_t::unused
	uint32_t ___unused_2;
	// System.Single Valve.VR.VREvent_Scroll_t::viewportscale
	float ___viewportscale_3;

public:
	inline static int32_t get_offset_of_xdelta_0() { return static_cast<int32_t>(offsetof(VREvent_Scroll_t_t5F4F013D4311FA0416A98AAE7B1C67794857D160, ___xdelta_0)); }
	inline float get_xdelta_0() const { return ___xdelta_0; }
	inline float* get_address_of_xdelta_0() { return &___xdelta_0; }
	inline void set_xdelta_0(float value)
	{
		___xdelta_0 = value;
	}

	inline static int32_t get_offset_of_ydelta_1() { return static_cast<int32_t>(offsetof(VREvent_Scroll_t_t5F4F013D4311FA0416A98AAE7B1C67794857D160, ___ydelta_1)); }
	inline float get_ydelta_1() const { return ___ydelta_1; }
	inline float* get_address_of_ydelta_1() { return &___ydelta_1; }
	inline void set_ydelta_1(float value)
	{
		___ydelta_1 = value;
	}

	inline static int32_t get_offset_of_unused_2() { return static_cast<int32_t>(offsetof(VREvent_Scroll_t_t5F4F013D4311FA0416A98AAE7B1C67794857D160, ___unused_2)); }
	inline uint32_t get_unused_2() const { return ___unused_2; }
	inline uint32_t* get_address_of_unused_2() { return &___unused_2; }
	inline void set_unused_2(uint32_t value)
	{
		___unused_2 = value;
	}

	inline static int32_t get_offset_of_viewportscale_3() { return static_cast<int32_t>(offsetof(VREvent_Scroll_t_t5F4F013D4311FA0416A98AAE7B1C67794857D160, ___viewportscale_3)); }
	inline float get_viewportscale_3() const { return ___viewportscale_3; }
	inline float* get_address_of_viewportscale_3() { return &___viewportscale_3; }
	inline void set_viewportscale_3(float value)
	{
		___viewportscale_3 = value;
	}
};


// Valve.VR.VREvent_SeatedZeroPoseReset_t
struct  VREvent_SeatedZeroPoseReset_t_t4FE5B07657B5DD9A609F7A755C4592806767D323 
{
public:
	// System.Boolean Valve.VR.VREvent_SeatedZeroPoseReset_t::bResetBySystemMenu
	bool ___bResetBySystemMenu_0;

public:
	inline static int32_t get_offset_of_bResetBySystemMenu_0() { return static_cast<int32_t>(offsetof(VREvent_SeatedZeroPoseReset_t_t4FE5B07657B5DD9A609F7A755C4592806767D323, ___bResetBySystemMenu_0)); }
	inline bool get_bResetBySystemMenu_0() const { return ___bResetBySystemMenu_0; }
	inline bool* get_address_of_bResetBySystemMenu_0() { return &___bResetBySystemMenu_0; }
	inline void set_bResetBySystemMenu_0(bool value)
	{
		___bResetBySystemMenu_0 = value;
	}
};


// Valve.VR.VREvent_ShowDevTools_t
struct  VREvent_ShowDevTools_t_t39141238FE64295EF3CBCCF82984ACB8C97FABE6 
{
public:
	// System.Int32 Valve.VR.VREvent_ShowDevTools_t::nBrowserIdentifier
	int32_t ___nBrowserIdentifier_0;

public:
	inline static int32_t get_offset_of_nBrowserIdentifier_0() { return static_cast<int32_t>(offsetof(VREvent_ShowDevTools_t_t39141238FE64295EF3CBCCF82984ACB8C97FABE6, ___nBrowserIdentifier_0)); }
	inline int32_t get_nBrowserIdentifier_0() const { return ___nBrowserIdentifier_0; }
	inline int32_t* get_address_of_nBrowserIdentifier_0() { return &___nBrowserIdentifier_0; }
	inline void set_nBrowserIdentifier_0(int32_t value)
	{
		___nBrowserIdentifier_0 = value;
	}
};


// Valve.VR.VREvent_SpatialAnchor_t
struct  VREvent_SpatialAnchor_t_tEF1C8EF84EEA707BC3393810ECAF468F3B3B9473 
{
public:
	// System.UInt32 Valve.VR.VREvent_SpatialAnchor_t::unHandle
	uint32_t ___unHandle_0;

public:
	inline static int32_t get_offset_of_unHandle_0() { return static_cast<int32_t>(offsetof(VREvent_SpatialAnchor_t_tEF1C8EF84EEA707BC3393810ECAF468F3B3B9473, ___unHandle_0)); }
	inline uint32_t get_unHandle_0() const { return ___unHandle_0; }
	inline uint32_t* get_address_of_unHandle_0() { return &___unHandle_0; }
	inline void set_unHandle_0(uint32_t value)
	{
		___unHandle_0 = value;
	}
};


// Valve.VR.VREvent_Status_t
struct  VREvent_Status_t_t157A58D59F35CB5B07E1A83BA7E41C425AB766FB 
{
public:
	// System.UInt32 Valve.VR.VREvent_Status_t::statusState
	uint32_t ___statusState_0;

public:
	inline static int32_t get_offset_of_statusState_0() { return static_cast<int32_t>(offsetof(VREvent_Status_t_t157A58D59F35CB5B07E1A83BA7E41C425AB766FB, ___statusState_0)); }
	inline uint32_t get_statusState_0() const { return ___statusState_0; }
	inline uint32_t* get_address_of_statusState_0() { return &___statusState_0; }
	inline void set_statusState_0(uint32_t value)
	{
		___statusState_0 = value;
	}
};


// Valve.VR.VREvent_TouchPadMove_t
struct  VREvent_TouchPadMove_t_t239FBA15A2154F0A535575CDF1CF22A8F3EDEA3D 
{
public:
	// System.Boolean Valve.VR.VREvent_TouchPadMove_t::bFingerDown
	bool ___bFingerDown_0;
	// System.Single Valve.VR.VREvent_TouchPadMove_t::flSecondsFingerDown
	float ___flSecondsFingerDown_1;
	// System.Single Valve.VR.VREvent_TouchPadMove_t::fValueXFirst
	float ___fValueXFirst_2;
	// System.Single Valve.VR.VREvent_TouchPadMove_t::fValueYFirst
	float ___fValueYFirst_3;
	// System.Single Valve.VR.VREvent_TouchPadMove_t::fValueXRaw
	float ___fValueXRaw_4;
	// System.Single Valve.VR.VREvent_TouchPadMove_t::fValueYRaw
	float ___fValueYRaw_5;

public:
	inline static int32_t get_offset_of_bFingerDown_0() { return static_cast<int32_t>(offsetof(VREvent_TouchPadMove_t_t239FBA15A2154F0A535575CDF1CF22A8F3EDEA3D, ___bFingerDown_0)); }
	inline bool get_bFingerDown_0() const { return ___bFingerDown_0; }
	inline bool* get_address_of_bFingerDown_0() { return &___bFingerDown_0; }
	inline void set_bFingerDown_0(bool value)
	{
		___bFingerDown_0 = value;
	}

	inline static int32_t get_offset_of_flSecondsFingerDown_1() { return static_cast<int32_t>(offsetof(VREvent_TouchPadMove_t_t239FBA15A2154F0A535575CDF1CF22A8F3EDEA3D, ___flSecondsFingerDown_1)); }
	inline float get_flSecondsFingerDown_1() const { return ___flSecondsFingerDown_1; }
	inline float* get_address_of_flSecondsFingerDown_1() { return &___flSecondsFingerDown_1; }
	inline void set_flSecondsFingerDown_1(float value)
	{
		___flSecondsFingerDown_1 = value;
	}

	inline static int32_t get_offset_of_fValueXFirst_2() { return static_cast<int32_t>(offsetof(VREvent_TouchPadMove_t_t239FBA15A2154F0A535575CDF1CF22A8F3EDEA3D, ___fValueXFirst_2)); }
	inline float get_fValueXFirst_2() const { return ___fValueXFirst_2; }
	inline float* get_address_of_fValueXFirst_2() { return &___fValueXFirst_2; }
	inline void set_fValueXFirst_2(float value)
	{
		___fValueXFirst_2 = value;
	}

	inline static int32_t get_offset_of_fValueYFirst_3() { return static_cast<int32_t>(offsetof(VREvent_TouchPadMove_t_t239FBA15A2154F0A535575CDF1CF22A8F3EDEA3D, ___fValueYFirst_3)); }
	inline float get_fValueYFirst_3() const { return ___fValueYFirst_3; }
	inline float* get_address_of_fValueYFirst_3() { return &___fValueYFirst_3; }
	inline void set_fValueYFirst_3(float value)
	{
		___fValueYFirst_3 = value;
	}

	inline static int32_t get_offset_of_fValueXRaw_4() { return static_cast<int32_t>(offsetof(VREvent_TouchPadMove_t_t239FBA15A2154F0A535575CDF1CF22A8F3EDEA3D, ___fValueXRaw_4)); }
	inline float get_fValueXRaw_4() const { return ___fValueXRaw_4; }
	inline float* get_address_of_fValueXRaw_4() { return &___fValueXRaw_4; }
	inline void set_fValueXRaw_4(float value)
	{
		___fValueXRaw_4 = value;
	}

	inline static int32_t get_offset_of_fValueYRaw_5() { return static_cast<int32_t>(offsetof(VREvent_TouchPadMove_t_t239FBA15A2154F0A535575CDF1CF22A8F3EDEA3D, ___fValueYRaw_5)); }
	inline float get_fValueYRaw_5() const { return ___fValueYRaw_5; }
	inline float* get_address_of_fValueYRaw_5() { return &___fValueYRaw_5; }
	inline void set_fValueYRaw_5(float value)
	{
		___fValueYRaw_5 = value;
	}
};


// Valve.VR.VREvent_WebConsole_t
struct  VREvent_WebConsole_t_tB082ED62757425E442A9D3D77878DE178AE3DC75 
{
public:
	// System.UInt64 Valve.VR.VREvent_WebConsole_t::webConsoleHandle
	uint64_t ___webConsoleHandle_0;

public:
	inline static int32_t get_offset_of_webConsoleHandle_0() { return static_cast<int32_t>(offsetof(VREvent_WebConsole_t_tB082ED62757425E442A9D3D77878DE178AE3DC75, ___webConsoleHandle_0)); }
	inline uint64_t get_webConsoleHandle_0() const { return ___webConsoleHandle_0; }
	inline uint64_t* get_address_of_webConsoleHandle_0() { return &___webConsoleHandle_0; }
	inline void set_webConsoleHandle_0(uint64_t value)
	{
		___webConsoleHandle_0 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// Valve.VR.EDualAnalogWhich
struct  EDualAnalogWhich_t844CFA5C049DB47CB2E9E69E900CE2AD45FC22A8 
{
public:
	// System.Int32 Valve.VR.EDualAnalogWhich::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EDualAnalogWhich_t844CFA5C049DB47CB2E9E69E900CE2AD45FC22A8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Valve.VR.EHDCPError
struct  EHDCPError_tEA1A3B61ABC539BEB5968E78D67A977D9B8FFC8F 
{
public:
	// System.Int32 Valve.VR.EHDCPError::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EHDCPError_tEA1A3B61ABC539BEB5968E78D67A977D9B8FFC8F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Valve.VR.EShowUIType
struct  EShowUIType_tBD146F5D1D019E27B82F6FCAE6A9EE94568DE7CF 
{
public:
	// System.Int32 Valve.VR.EShowUIType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EShowUIType_tBD146F5D1D019E27B82F6FCAE6A9EE94568DE7CF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Valve.VR.ETrackedDeviceProperty
struct  ETrackedDeviceProperty_tF72385D21B16A4502DC9E4F05A6C3F3D63202678 
{
public:
	// System.Int32 Valve.VR.ETrackedDeviceProperty::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ETrackedDeviceProperty_tF72385D21B16A4502DC9E4F05A6C3F3D63202678, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Valve.VR.SteamVR_ActionDirections
struct  SteamVR_ActionDirections_tC7760C9A471565840E2F1D11A61E44735571D8B1 
{
public:
	// System.Int32 Valve.VR.SteamVR_ActionDirections::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SteamVR_ActionDirections_tC7760C9A471565840E2F1D11A61E44735571D8B1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Valve.VR.SteamVR_Events_Event`1<System.Boolean>
struct  Event_1_t4AADC7D395DE3D54A428A47B268C47F57231474E  : public UnityEvent_1_tE1EF042798523847EEBB2A12FA37C4003C1B1299
{
public:

public:
};


// Valve.VR.SteamVR_Events_Event`1<System.Object>
struct  Event_1_t79FDA89FF66AB755896EC5231AA906E80D977A8A  : public UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D
{
public:

public:
};


// Valve.VR.SteamVR_Events_Event`1<System.Single>
struct  Event_1_t8E75A5B6D579BE45B766939AA5B3B15636CCA77F  : public UnityEvent_1_t655F4ECDA62E804A34CC8737AC30B836ABD3D2DA
{
public:

public:
};


// Valve.VR.SteamVR_Events_Event`1<Valve.VR.VREvent_t>
struct  Event_1_t5DB0CDA7FD2616DA8770700B1A982E1A0F052262  : public UnityEvent_1_t7E9560B75945B332DA5807C6061708BBAF5F7307
{
public:

public:
};


// Valve.VR.SteamVR_Events_Event`2<System.Int32,System.Boolean>
struct  Event_2_t5D411D24E2836A52F7D2998B747522450DB2D3F5  : public UnityEvent_2_t6FFBDA794A6AA7AF9FE8BA1C95AE94A43530E0A9
{
public:

public:
};


// Valve.VR.SteamVR_Events_Event`2<System.Object,System.Boolean>
struct  Event_2_t9B8C6B23D8417540E5908C6FE592803B5C52D62E  : public UnityEvent_2_tCC3D1AE1DF0DE9353C32AB2135945A02F0B1C6CB
{
public:

public:
};


// Valve.VR.SteamVR_Events_Event`2<System.Object,System.Object>
struct  Event_2_t04FA8831B303A3F77AF8B7E1B8C05E9562E771AF  : public UnityEvent_2_t1324E90D5AF00DA0F61802033E51716D0D9CBED1
{
public:

public:
};


// Valve.VR.SteamVR_Events_Event`3<System.Object,System.Object,System.Object>
struct  Event_3_t35D9D60B1134BEB59186505A31E7F27F1AD4A8E6  : public UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9
{
public:

public:
};


// Valve.VR.SteamVR_Events_Event`3<UnityEngine.Color,System.Single,System.Boolean>
struct  Event_3_t5541668D2F9E46098EA2A527B35E4D3BD6D8450B  : public UnityEvent_3_t8D685C60F62C7BAE22464C760302E39E1FC2932D
{
public:

public:
};


// Valve.VR.SteamVR_Input_Sources
struct  SteamVR_Input_Sources_tCE41AA589FB3B9516BDE0DFABDCB4AAEA29528F7 
{
public:
	// System.Int32 Valve.VR.SteamVR_Input_Sources::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SteamVR_Input_Sources_tCE41AA589FB3B9516BDE0DFABDCB4AAEA29528F7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// Valve.VR.SteamVR_Action_Source
struct  SteamVR_Action_Source_t9D7428CDE39924074518EE6233D9A4FAB0C33CB0  : public RuntimeObject
{
public:
	// Valve.VR.SteamVR_Input_Sources Valve.VR.SteamVR_Action_Source::<inputSource>k__BackingField
	int32_t ___U3CinputSourceU3Ek__BackingField_0;
	// System.UInt64 Valve.VR.SteamVR_Action_Source::inputSourceHandle
	uint64_t ___inputSourceHandle_1;
	// Valve.VR.SteamVR_Action Valve.VR.SteamVR_Action_Source::action
	SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 * ___action_2;

public:
	inline static int32_t get_offset_of_U3CinputSourceU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SteamVR_Action_Source_t9D7428CDE39924074518EE6233D9A4FAB0C33CB0, ___U3CinputSourceU3Ek__BackingField_0)); }
	inline int32_t get_U3CinputSourceU3Ek__BackingField_0() const { return ___U3CinputSourceU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CinputSourceU3Ek__BackingField_0() { return &___U3CinputSourceU3Ek__BackingField_0; }
	inline void set_U3CinputSourceU3Ek__BackingField_0(int32_t value)
	{
		___U3CinputSourceU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_inputSourceHandle_1() { return static_cast<int32_t>(offsetof(SteamVR_Action_Source_t9D7428CDE39924074518EE6233D9A4FAB0C33CB0, ___inputSourceHandle_1)); }
	inline uint64_t get_inputSourceHandle_1() const { return ___inputSourceHandle_1; }
	inline uint64_t* get_address_of_inputSourceHandle_1() { return &___inputSourceHandle_1; }
	inline void set_inputSourceHandle_1(uint64_t value)
	{
		___inputSourceHandle_1 = value;
	}

	inline static int32_t get_offset_of_action_2() { return static_cast<int32_t>(offsetof(SteamVR_Action_Source_t9D7428CDE39924074518EE6233D9A4FAB0C33CB0, ___action_2)); }
	inline SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 * get_action_2() const { return ___action_2; }
	inline SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 ** get_address_of_action_2() { return &___action_2; }
	inline void set_action_2(SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 * value)
	{
		___action_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___action_2), (void*)value);
	}
};


// Valve.VR.SteamVR_Action_Source_Map
struct  SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17  : public RuntimeObject
{
public:
	// System.String Valve.VR.SteamVR_Action_Source_Map::<fullPath>k__BackingField
	String_t* ___U3CfullPathU3Ek__BackingField_0;
	// System.UInt64 Valve.VR.SteamVR_Action_Source_Map::<handle>k__BackingField
	uint64_t ___U3ChandleU3Ek__BackingField_1;
	// Valve.VR.SteamVR_ActionSet Valve.VR.SteamVR_Action_Source_Map::<actionSet>k__BackingField
	SteamVR_ActionSet_t9D647E559B2D35F695CC7613111572186FBCA9F6 * ___U3CactionSetU3Ek__BackingField_2;
	// Valve.VR.SteamVR_ActionDirections Valve.VR.SteamVR_Action_Source_Map::<direction>k__BackingField
	int32_t ___U3CdirectionU3Ek__BackingField_3;
	// Valve.VR.SteamVR_Action Valve.VR.SteamVR_Action_Source_Map::action
	SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 * ___action_4;

public:
	inline static int32_t get_offset_of_U3CfullPathU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17, ___U3CfullPathU3Ek__BackingField_0)); }
	inline String_t* get_U3CfullPathU3Ek__BackingField_0() const { return ___U3CfullPathU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CfullPathU3Ek__BackingField_0() { return &___U3CfullPathU3Ek__BackingField_0; }
	inline void set_U3CfullPathU3Ek__BackingField_0(String_t* value)
	{
		___U3CfullPathU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CfullPathU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3ChandleU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17, ___U3ChandleU3Ek__BackingField_1)); }
	inline uint64_t get_U3ChandleU3Ek__BackingField_1() const { return ___U3ChandleU3Ek__BackingField_1; }
	inline uint64_t* get_address_of_U3ChandleU3Ek__BackingField_1() { return &___U3ChandleU3Ek__BackingField_1; }
	inline void set_U3ChandleU3Ek__BackingField_1(uint64_t value)
	{
		___U3ChandleU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CactionSetU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17, ___U3CactionSetU3Ek__BackingField_2)); }
	inline SteamVR_ActionSet_t9D647E559B2D35F695CC7613111572186FBCA9F6 * get_U3CactionSetU3Ek__BackingField_2() const { return ___U3CactionSetU3Ek__BackingField_2; }
	inline SteamVR_ActionSet_t9D647E559B2D35F695CC7613111572186FBCA9F6 ** get_address_of_U3CactionSetU3Ek__BackingField_2() { return &___U3CactionSetU3Ek__BackingField_2; }
	inline void set_U3CactionSetU3Ek__BackingField_2(SteamVR_ActionSet_t9D647E559B2D35F695CC7613111572186FBCA9F6 * value)
	{
		___U3CactionSetU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CactionSetU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdirectionU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17, ___U3CdirectionU3Ek__BackingField_3)); }
	inline int32_t get_U3CdirectionU3Ek__BackingField_3() const { return ___U3CdirectionU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CdirectionU3Ek__BackingField_3() { return &___U3CdirectionU3Ek__BackingField_3; }
	inline void set_U3CdirectionU3Ek__BackingField_3(int32_t value)
	{
		___U3CdirectionU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_action_4() { return static_cast<int32_t>(offsetof(SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17, ___action_4)); }
	inline SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 * get_action_4() const { return ___action_4; }
	inline SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 ** get_address_of_action_4() { return &___action_4; }
	inline void set_action_4(SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 * value)
	{
		___action_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___action_4), (void*)value);
	}
};

struct SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17_StaticFields
{
public:
	// System.String Valve.VR.SteamVR_Action_Source_Map::inLowered
	String_t* ___inLowered_5;
	// System.String Valve.VR.SteamVR_Action_Source_Map::outLowered
	String_t* ___outLowered_6;

public:
	inline static int32_t get_offset_of_inLowered_5() { return static_cast<int32_t>(offsetof(SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17_StaticFields, ___inLowered_5)); }
	inline String_t* get_inLowered_5() const { return ___inLowered_5; }
	inline String_t** get_address_of_inLowered_5() { return &___inLowered_5; }
	inline void set_inLowered_5(String_t* value)
	{
		___inLowered_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inLowered_5), (void*)value);
	}

	inline static int32_t get_offset_of_outLowered_6() { return static_cast<int32_t>(offsetof(SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17_StaticFields, ___outLowered_6)); }
	inline String_t* get_outLowered_6() const { return ___outLowered_6; }
	inline String_t** get_address_of_outLowered_6() { return &___outLowered_6; }
	inline void set_outLowered_6(String_t* value)
	{
		___outLowered_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outLowered_6), (void*)value);
	}
};


// Valve.VR.VREvent_DualAnalog_t
struct  VREvent_DualAnalog_t_tC3619C1896674578643AE38536F4DA3B79B49137 
{
public:
	// System.Single Valve.VR.VREvent_DualAnalog_t::x
	float ___x_0;
	// System.Single Valve.VR.VREvent_DualAnalog_t::y
	float ___y_1;
	// System.Single Valve.VR.VREvent_DualAnalog_t::transformedX
	float ___transformedX_2;
	// System.Single Valve.VR.VREvent_DualAnalog_t::transformedY
	float ___transformedY_3;
	// Valve.VR.EDualAnalogWhich Valve.VR.VREvent_DualAnalog_t::which
	int32_t ___which_4;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(VREvent_DualAnalog_t_tC3619C1896674578643AE38536F4DA3B79B49137, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(VREvent_DualAnalog_t_tC3619C1896674578643AE38536F4DA3B79B49137, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_transformedX_2() { return static_cast<int32_t>(offsetof(VREvent_DualAnalog_t_tC3619C1896674578643AE38536F4DA3B79B49137, ___transformedX_2)); }
	inline float get_transformedX_2() const { return ___transformedX_2; }
	inline float* get_address_of_transformedX_2() { return &___transformedX_2; }
	inline void set_transformedX_2(float value)
	{
		___transformedX_2 = value;
	}

	inline static int32_t get_offset_of_transformedY_3() { return static_cast<int32_t>(offsetof(VREvent_DualAnalog_t_tC3619C1896674578643AE38536F4DA3B79B49137, ___transformedY_3)); }
	inline float get_transformedY_3() const { return ___transformedY_3; }
	inline float* get_address_of_transformedY_3() { return &___transformedY_3; }
	inline void set_transformedY_3(float value)
	{
		___transformedY_3 = value;
	}

	inline static int32_t get_offset_of_which_4() { return static_cast<int32_t>(offsetof(VREvent_DualAnalog_t_tC3619C1896674578643AE38536F4DA3B79B49137, ___which_4)); }
	inline int32_t get_which_4() const { return ___which_4; }
	inline int32_t* get_address_of_which_4() { return &___which_4; }
	inline void set_which_4(int32_t value)
	{
		___which_4 = value;
	}
};


// Valve.VR.VREvent_HDCPError_t
struct  VREvent_HDCPError_t_tB01E1AF666EA64FA9D948BC11978D08B58C7201E 
{
public:
	// Valve.VR.EHDCPError Valve.VR.VREvent_HDCPError_t::eCode
	int32_t ___eCode_0;

public:
	inline static int32_t get_offset_of_eCode_0() { return static_cast<int32_t>(offsetof(VREvent_HDCPError_t_tB01E1AF666EA64FA9D948BC11978D08B58C7201E, ___eCode_0)); }
	inline int32_t get_eCode_0() const { return ___eCode_0; }
	inline int32_t* get_address_of_eCode_0() { return &___eCode_0; }
	inline void set_eCode_0(int32_t value)
	{
		___eCode_0 = value;
	}
};


// Valve.VR.VREvent_Property_t
struct  VREvent_Property_t_tDA1B42C6B679945C10CE6A3E37ECAE1D03E586F5 
{
public:
	// System.UInt64 Valve.VR.VREvent_Property_t::container
	uint64_t ___container_0;
	// Valve.VR.ETrackedDeviceProperty Valve.VR.VREvent_Property_t::prop
	int32_t ___prop_1;

public:
	inline static int32_t get_offset_of_container_0() { return static_cast<int32_t>(offsetof(VREvent_Property_t_tDA1B42C6B679945C10CE6A3E37ECAE1D03E586F5, ___container_0)); }
	inline uint64_t get_container_0() const { return ___container_0; }
	inline uint64_t* get_address_of_container_0() { return &___container_0; }
	inline void set_container_0(uint64_t value)
	{
		___container_0 = value;
	}

	inline static int32_t get_offset_of_prop_1() { return static_cast<int32_t>(offsetof(VREvent_Property_t_tDA1B42C6B679945C10CE6A3E37ECAE1D03E586F5, ___prop_1)); }
	inline int32_t get_prop_1() const { return ___prop_1; }
	inline int32_t* get_address_of_prop_1() { return &___prop_1; }
	inline void set_prop_1(int32_t value)
	{
		___prop_1 = value;
	}
};


// Valve.VR.VREvent_ShowUI_t
struct  VREvent_ShowUI_t_tE3EDB9F7A3BCAC0C9A3812B850DA4F4A45933997 
{
public:
	// Valve.VR.EShowUIType Valve.VR.VREvent_ShowUI_t::eType
	int32_t ___eType_0;

public:
	inline static int32_t get_offset_of_eType_0() { return static_cast<int32_t>(offsetof(VREvent_ShowUI_t_tE3EDB9F7A3BCAC0C9A3812B850DA4F4A45933997, ___eType_0)); }
	inline int32_t get_eType_0() const { return ___eType_0; }
	inline int32_t* get_address_of_eType_0() { return &___eType_0; }
	inline void set_eType_0(int32_t value)
	{
		___eType_0 = value;
	}
};


// UnityEngine.Events.UnityAction`1<System.Boolean>
struct  UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Object>
struct  UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Single>
struct  UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`2<System.Int32,System.Boolean>
struct  UnityAction_2_tC6757BFFAD492D812C4E332DCDD97778B17CACAF  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`2<System.Object,System.Boolean>
struct  UnityAction_2_tAC99DEACCF9A9F69F176A7F1DBEE5E1A24D9816D  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`2<System.Object,System.Object>
struct  UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>
struct  UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`3<UnityEngine.Color,System.Single,System.Boolean>
struct  UnityAction_3_tBB281EE324EEF9D6CD3F2B8B7C3695D8EB743EEB  : public MulticastDelegate_t
{
public:

public:
};


// Valve.VR.SteamVR_Action_Source_Map`1<System.Object>
struct  SteamVR_Action_Source_Map_1_tF6CD4E2DA9FBD867B5F22D6A040FC06A0BFE5CCA  : public SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17
{
public:
	// SourceElement[] Valve.VR.SteamVR_Action_Source_Map`1::sources
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___sources_7;

public:
	inline static int32_t get_offset_of_sources_7() { return static_cast<int32_t>(offsetof(SteamVR_Action_Source_Map_1_tF6CD4E2DA9FBD867B5F22D6A040FC06A0BFE5CCA, ___sources_7)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_sources_7() const { return ___sources_7; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_sources_7() { return &___sources_7; }
	inline void set_sources_7(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___sources_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sources_7), (void*)value);
	}
};


// Valve.VR.VREvent_Data_t
struct  VREvent_Data_t_t38985E196F3FFB84A2EC25F5F5300A1A465435F0 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_Reserved_t Valve.VR.VREvent_Data_t::reserved
			VREvent_Reserved_t_tD7AEEC778A329391A4DB25E9EACFC350464E7AB3  ___reserved_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_Reserved_t_tD7AEEC778A329391A4DB25E9EACFC350464E7AB3  ___reserved_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_Controller_t Valve.VR.VREvent_Data_t::controller
			VREvent_Controller_t_t5976E21986D7CBB3313289F60169F60680DF5D05  ___controller_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_Controller_t_t5976E21986D7CBB3313289F60169F60680DF5D05  ___controller_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_Mouse_t Valve.VR.VREvent_Data_t::mouse
			VREvent_Mouse_t_t6A0AB81EE408C60C23B2347B2D54DF92EB389B1B  ___mouse_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_Mouse_t_t6A0AB81EE408C60C23B2347B2D54DF92EB389B1B  ___mouse_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_Scroll_t Valve.VR.VREvent_Data_t::scroll
			VREvent_Scroll_t_t5F4F013D4311FA0416A98AAE7B1C67794857D160  ___scroll_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_Scroll_t_t5F4F013D4311FA0416A98AAE7B1C67794857D160  ___scroll_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_Process_t Valve.VR.VREvent_Data_t::process
			VREvent_Process_t_t83E4C3D9CAE8D898B914245BF7E34E2FD47EBE1E  ___process_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_Process_t_t83E4C3D9CAE8D898B914245BF7E34E2FD47EBE1E  ___process_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_Notification_t Valve.VR.VREvent_Data_t::notification
			VREvent_Notification_t_t3307E55FBD25A98BF78C740FE9494406A45F94BB  ___notification_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_Notification_t_t3307E55FBD25A98BF78C740FE9494406A45F94BB  ___notification_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_Overlay_t Valve.VR.VREvent_Data_t::overlay
			VREvent_Overlay_t_t6D2D8442E708459C57882EA5E5D6EE0912FAD76C  ___overlay_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_Overlay_t_t6D2D8442E708459C57882EA5E5D6EE0912FAD76C  ___overlay_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_Status_t Valve.VR.VREvent_Data_t::status
			VREvent_Status_t_t157A58D59F35CB5B07E1A83BA7E41C425AB766FB  ___status_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_Status_t_t157A58D59F35CB5B07E1A83BA7E41C425AB766FB  ___status_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_Ipd_t Valve.VR.VREvent_Data_t::ipd
			VREvent_Ipd_t_tA834CF90F72C0F1C4905DCCCA0D7AF0A3043B400  ___ipd_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_Ipd_t_tA834CF90F72C0F1C4905DCCCA0D7AF0A3043B400  ___ipd_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_Chaperone_t Valve.VR.VREvent_Data_t::chaperone
			VREvent_Chaperone_t_tCFAB4B0381A4EF5741D86EF3A75514337B44EA85  ___chaperone_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_Chaperone_t_tCFAB4B0381A4EF5741D86EF3A75514337B44EA85  ___chaperone_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_PerformanceTest_t Valve.VR.VREvent_Data_t::performanceTest
			VREvent_PerformanceTest_t_t7907E419EE035B684299AF08075DE02A6D9AA7AA  ___performanceTest_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_PerformanceTest_t_t7907E419EE035B684299AF08075DE02A6D9AA7AA  ___performanceTest_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_TouchPadMove_t Valve.VR.VREvent_Data_t::touchPadMove
			VREvent_TouchPadMove_t_t239FBA15A2154F0A535575CDF1CF22A8F3EDEA3D  ___touchPadMove_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_TouchPadMove_t_t239FBA15A2154F0A535575CDF1CF22A8F3EDEA3D  ___touchPadMove_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_SeatedZeroPoseReset_t Valve.VR.VREvent_Data_t::seatedZeroPoseReset
			VREvent_SeatedZeroPoseReset_t_t4FE5B07657B5DD9A609F7A755C4592806767D323  ___seatedZeroPoseReset_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_SeatedZeroPoseReset_t_t4FE5B07657B5DD9A609F7A755C4592806767D323  ___seatedZeroPoseReset_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_Screenshot_t Valve.VR.VREvent_Data_t::screenshot
			VREvent_Screenshot_t_t1459B9F3FCD91BFF2A03D1F0DBC012594714BE97  ___screenshot_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_Screenshot_t_t1459B9F3FCD91BFF2A03D1F0DBC012594714BE97  ___screenshot_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_ScreenshotProgress_t Valve.VR.VREvent_Data_t::screenshotProgress
			VREvent_ScreenshotProgress_t_t9CD059D8FF2215EBC3F9014DE35F8847B904ECED  ___screenshotProgress_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_ScreenshotProgress_t_t9CD059D8FF2215EBC3F9014DE35F8847B904ECED  ___screenshotProgress_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_ApplicationLaunch_t Valve.VR.VREvent_Data_t::applicationLaunch
			VREvent_ApplicationLaunch_t_t19D5E8E56A4A34EBA9497F8560DDBC045BC22389  ___applicationLaunch_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_ApplicationLaunch_t_t19D5E8E56A4A34EBA9497F8560DDBC045BC22389  ___applicationLaunch_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_EditingCameraSurface_t Valve.VR.VREvent_Data_t::cameraSurface
			VREvent_EditingCameraSurface_t_t001B622D6CDFD7226DB4337AEE63DB317E6420FC  ___cameraSurface_16;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_EditingCameraSurface_t_t001B622D6CDFD7226DB4337AEE63DB317E6420FC  ___cameraSurface_16_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_MessageOverlay_t Valve.VR.VREvent_Data_t::messageOverlay
			VREvent_MessageOverlay_t_t527A27CE8C9CDC089759AEF6257E7F5803D72BA1  ___messageOverlay_17;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_MessageOverlay_t_t527A27CE8C9CDC089759AEF6257E7F5803D72BA1  ___messageOverlay_17_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_Property_t Valve.VR.VREvent_Data_t::property
			VREvent_Property_t_tDA1B42C6B679945C10CE6A3E37ECAE1D03E586F5  ___property_18;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_Property_t_tDA1B42C6B679945C10CE6A3E37ECAE1D03E586F5  ___property_18_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_DualAnalog_t Valve.VR.VREvent_Data_t::dualAnalog
			VREvent_DualAnalog_t_tC3619C1896674578643AE38536F4DA3B79B49137  ___dualAnalog_19;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_DualAnalog_t_tC3619C1896674578643AE38536F4DA3B79B49137  ___dualAnalog_19_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_HapticVibration_t Valve.VR.VREvent_Data_t::hapticVibration
			VREvent_HapticVibration_t_tC31D4D068A151263ADCB11D4C8349D5774AC246F  ___hapticVibration_20;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_HapticVibration_t_tC31D4D068A151263ADCB11D4C8349D5774AC246F  ___hapticVibration_20_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_WebConsole_t Valve.VR.VREvent_Data_t::webConsole
			VREvent_WebConsole_t_tB082ED62757425E442A9D3D77878DE178AE3DC75  ___webConsole_21;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_WebConsole_t_tB082ED62757425E442A9D3D77878DE178AE3DC75  ___webConsole_21_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_InputBindingLoad_t Valve.VR.VREvent_Data_t::inputBinding
			VREvent_InputBindingLoad_t_tC758CE9776D2810CD958CB23032BE745D51E1EED  ___inputBinding_22;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_InputBindingLoad_t_tC758CE9776D2810CD958CB23032BE745D51E1EED  ___inputBinding_22_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_SpatialAnchor_t Valve.VR.VREvent_Data_t::spatialAnchor
			VREvent_SpatialAnchor_t_tEF1C8EF84EEA707BC3393810ECAF468F3B3B9473  ___spatialAnchor_23;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_SpatialAnchor_t_tEF1C8EF84EEA707BC3393810ECAF468F3B3B9473  ___spatialAnchor_23_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_InputActionManifestLoad_t Valve.VR.VREvent_Data_t::actionManifest
			VREvent_InputActionManifestLoad_t_t80FAEB7CDAA5F4A1992C9701923F26D79C3E3A76  ___actionManifest_24;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_InputActionManifestLoad_t_t80FAEB7CDAA5F4A1992C9701923F26D79C3E3A76  ___actionManifest_24_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_ProgressUpdate_t Valve.VR.VREvent_Data_t::progressUpdate
			VREvent_ProgressUpdate_t_tE2EE0FDAEB40796B73B8477434588652690495AE  ___progressUpdate_25;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_ProgressUpdate_t_tE2EE0FDAEB40796B73B8477434588652690495AE  ___progressUpdate_25_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_ShowUI_t Valve.VR.VREvent_Data_t::showUi
			VREvent_ShowUI_t_tE3EDB9F7A3BCAC0C9A3812B850DA4F4A45933997  ___showUi_26;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_ShowUI_t_tE3EDB9F7A3BCAC0C9A3812B850DA4F4A45933997  ___showUi_26_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_ShowDevTools_t Valve.VR.VREvent_Data_t::showDevTools
			VREvent_ShowDevTools_t_t39141238FE64295EF3CBCCF82984ACB8C97FABE6  ___showDevTools_27;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_ShowDevTools_t_t39141238FE64295EF3CBCCF82984ACB8C97FABE6  ___showDevTools_27_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_HDCPError_t Valve.VR.VREvent_Data_t::hdcpError
			VREvent_HDCPError_t_tB01E1AF666EA64FA9D948BC11978D08B58C7201E  ___hdcpError_28;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_HDCPError_t_tB01E1AF666EA64FA9D948BC11978D08B58C7201E  ___hdcpError_28_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_Keyboard_t Valve.VR.VREvent_Data_t::keyboard
			VREvent_Keyboard_t_t0FAA9B97A441A22EC65002BC6FDEB4AF7A045297  ___keyboard_29;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_Keyboard_t_t0FAA9B97A441A22EC65002BC6FDEB4AF7A045297  ___keyboard_29_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_reserved_0() { return static_cast<int32_t>(offsetof(VREvent_Data_t_t38985E196F3FFB84A2EC25F5F5300A1A465435F0, ___reserved_0)); }
	inline VREvent_Reserved_t_tD7AEEC778A329391A4DB25E9EACFC350464E7AB3  get_reserved_0() const { return ___reserved_0; }
	inline VREvent_Reserved_t_tD7AEEC778A329391A4DB25E9EACFC350464E7AB3 * get_address_of_reserved_0() { return &___reserved_0; }
	inline void set_reserved_0(VREvent_Reserved_t_tD7AEEC778A329391A4DB25E9EACFC350464E7AB3  value)
	{
		___reserved_0 = value;
	}

	inline static int32_t get_offset_of_controller_1() { return static_cast<int32_t>(offsetof(VREvent_Data_t_t38985E196F3FFB84A2EC25F5F5300A1A465435F0, ___controller_1)); }
	inline VREvent_Controller_t_t5976E21986D7CBB3313289F60169F60680DF5D05  get_controller_1() const { return ___controller_1; }
	inline VREvent_Controller_t_t5976E21986D7CBB3313289F60169F60680DF5D05 * get_address_of_controller_1() { return &___controller_1; }
	inline void set_controller_1(VREvent_Controller_t_t5976E21986D7CBB3313289F60169F60680DF5D05  value)
	{
		___controller_1 = value;
	}

	inline static int32_t get_offset_of_mouse_2() { return static_cast<int32_t>(offsetof(VREvent_Data_t_t38985E196F3FFB84A2EC25F5F5300A1A465435F0, ___mouse_2)); }
	inline VREvent_Mouse_t_t6A0AB81EE408C60C23B2347B2D54DF92EB389B1B  get_mouse_2() const { return ___mouse_2; }
	inline VREvent_Mouse_t_t6A0AB81EE408C60C23B2347B2D54DF92EB389B1B * get_address_of_mouse_2() { return &___mouse_2; }
	inline void set_mouse_2(VREvent_Mouse_t_t6A0AB81EE408C60C23B2347B2D54DF92EB389B1B  value)
	{
		___mouse_2 = value;
	}

	inline static int32_t get_offset_of_scroll_3() { return static_cast<int32_t>(offsetof(VREvent_Data_t_t38985E196F3FFB84A2EC25F5F5300A1A465435F0, ___scroll_3)); }
	inline VREvent_Scroll_t_t5F4F013D4311FA0416A98AAE7B1C67794857D160  get_scroll_3() const { return ___scroll_3; }
	inline VREvent_Scroll_t_t5F4F013D4311FA0416A98AAE7B1C67794857D160 * get_address_of_scroll_3() { return &___scroll_3; }
	inline void set_scroll_3(VREvent_Scroll_t_t5F4F013D4311FA0416A98AAE7B1C67794857D160  value)
	{
		___scroll_3 = value;
	}

	inline static int32_t get_offset_of_process_4() { return static_cast<int32_t>(offsetof(VREvent_Data_t_t38985E196F3FFB84A2EC25F5F5300A1A465435F0, ___process_4)); }
	inline VREvent_Process_t_t83E4C3D9CAE8D898B914245BF7E34E2FD47EBE1E  get_process_4() const { return ___process_4; }
	inline VREvent_Process_t_t83E4C3D9CAE8D898B914245BF7E34E2FD47EBE1E * get_address_of_process_4() { return &___process_4; }
	inline void set_process_4(VREvent_Process_t_t83E4C3D9CAE8D898B914245BF7E34E2FD47EBE1E  value)
	{
		___process_4 = value;
	}

	inline static int32_t get_offset_of_notification_5() { return static_cast<int32_t>(offsetof(VREvent_Data_t_t38985E196F3FFB84A2EC25F5F5300A1A465435F0, ___notification_5)); }
	inline VREvent_Notification_t_t3307E55FBD25A98BF78C740FE9494406A45F94BB  get_notification_5() const { return ___notification_5; }
	inline VREvent_Notification_t_t3307E55FBD25A98BF78C740FE9494406A45F94BB * get_address_of_notification_5() { return &___notification_5; }
	inline void set_notification_5(VREvent_Notification_t_t3307E55FBD25A98BF78C740FE9494406A45F94BB  value)
	{
		___notification_5 = value;
	}

	inline static int32_t get_offset_of_overlay_6() { return static_cast<int32_t>(offsetof(VREvent_Data_t_t38985E196F3FFB84A2EC25F5F5300A1A465435F0, ___overlay_6)); }
	inline VREvent_Overlay_t_t6D2D8442E708459C57882EA5E5D6EE0912FAD76C  get_overlay_6() const { return ___overlay_6; }
	inline VREvent_Overlay_t_t6D2D8442E708459C57882EA5E5D6EE0912FAD76C * get_address_of_overlay_6() { return &___overlay_6; }
	inline void set_overlay_6(VREvent_Overlay_t_t6D2D8442E708459C57882EA5E5D6EE0912FAD76C  value)
	{
		___overlay_6 = value;
	}

	inline static int32_t get_offset_of_status_7() { return static_cast<int32_t>(offsetof(VREvent_Data_t_t38985E196F3FFB84A2EC25F5F5300A1A465435F0, ___status_7)); }
	inline VREvent_Status_t_t157A58D59F35CB5B07E1A83BA7E41C425AB766FB  get_status_7() const { return ___status_7; }
	inline VREvent_Status_t_t157A58D59F35CB5B07E1A83BA7E41C425AB766FB * get_address_of_status_7() { return &___status_7; }
	inline void set_status_7(VREvent_Status_t_t157A58D59F35CB5B07E1A83BA7E41C425AB766FB  value)
	{
		___status_7 = value;
	}

	inline static int32_t get_offset_of_ipd_8() { return static_cast<int32_t>(offsetof(VREvent_Data_t_t38985E196F3FFB84A2EC25F5F5300A1A465435F0, ___ipd_8)); }
	inline VREvent_Ipd_t_tA834CF90F72C0F1C4905DCCCA0D7AF0A3043B400  get_ipd_8() const { return ___ipd_8; }
	inline VREvent_Ipd_t_tA834CF90F72C0F1C4905DCCCA0D7AF0A3043B400 * get_address_of_ipd_8() { return &___ipd_8; }
	inline void set_ipd_8(VREvent_Ipd_t_tA834CF90F72C0F1C4905DCCCA0D7AF0A3043B400  value)
	{
		___ipd_8 = value;
	}

	inline static int32_t get_offset_of_chaperone_9() { return static_cast<int32_t>(offsetof(VREvent_Data_t_t38985E196F3FFB84A2EC25F5F5300A1A465435F0, ___chaperone_9)); }
	inline VREvent_Chaperone_t_tCFAB4B0381A4EF5741D86EF3A75514337B44EA85  get_chaperone_9() const { return ___chaperone_9; }
	inline VREvent_Chaperone_t_tCFAB4B0381A4EF5741D86EF3A75514337B44EA85 * get_address_of_chaperone_9() { return &___chaperone_9; }
	inline void set_chaperone_9(VREvent_Chaperone_t_tCFAB4B0381A4EF5741D86EF3A75514337B44EA85  value)
	{
		___chaperone_9 = value;
	}

	inline static int32_t get_offset_of_performanceTest_10() { return static_cast<int32_t>(offsetof(VREvent_Data_t_t38985E196F3FFB84A2EC25F5F5300A1A465435F0, ___performanceTest_10)); }
	inline VREvent_PerformanceTest_t_t7907E419EE035B684299AF08075DE02A6D9AA7AA  get_performanceTest_10() const { return ___performanceTest_10; }
	inline VREvent_PerformanceTest_t_t7907E419EE035B684299AF08075DE02A6D9AA7AA * get_address_of_performanceTest_10() { return &___performanceTest_10; }
	inline void set_performanceTest_10(VREvent_PerformanceTest_t_t7907E419EE035B684299AF08075DE02A6D9AA7AA  value)
	{
		___performanceTest_10 = value;
	}

	inline static int32_t get_offset_of_touchPadMove_11() { return static_cast<int32_t>(offsetof(VREvent_Data_t_t38985E196F3FFB84A2EC25F5F5300A1A465435F0, ___touchPadMove_11)); }
	inline VREvent_TouchPadMove_t_t239FBA15A2154F0A535575CDF1CF22A8F3EDEA3D  get_touchPadMove_11() const { return ___touchPadMove_11; }
	inline VREvent_TouchPadMove_t_t239FBA15A2154F0A535575CDF1CF22A8F3EDEA3D * get_address_of_touchPadMove_11() { return &___touchPadMove_11; }
	inline void set_touchPadMove_11(VREvent_TouchPadMove_t_t239FBA15A2154F0A535575CDF1CF22A8F3EDEA3D  value)
	{
		___touchPadMove_11 = value;
	}

	inline static int32_t get_offset_of_seatedZeroPoseReset_12() { return static_cast<int32_t>(offsetof(VREvent_Data_t_t38985E196F3FFB84A2EC25F5F5300A1A465435F0, ___seatedZeroPoseReset_12)); }
	inline VREvent_SeatedZeroPoseReset_t_t4FE5B07657B5DD9A609F7A755C4592806767D323  get_seatedZeroPoseReset_12() const { return ___seatedZeroPoseReset_12; }
	inline VREvent_SeatedZeroPoseReset_t_t4FE5B07657B5DD9A609F7A755C4592806767D323 * get_address_of_seatedZeroPoseReset_12() { return &___seatedZeroPoseReset_12; }
	inline void set_seatedZeroPoseReset_12(VREvent_SeatedZeroPoseReset_t_t4FE5B07657B5DD9A609F7A755C4592806767D323  value)
	{
		___seatedZeroPoseReset_12 = value;
	}

	inline static int32_t get_offset_of_screenshot_13() { return static_cast<int32_t>(offsetof(VREvent_Data_t_t38985E196F3FFB84A2EC25F5F5300A1A465435F0, ___screenshot_13)); }
	inline VREvent_Screenshot_t_t1459B9F3FCD91BFF2A03D1F0DBC012594714BE97  get_screenshot_13() const { return ___screenshot_13; }
	inline VREvent_Screenshot_t_t1459B9F3FCD91BFF2A03D1F0DBC012594714BE97 * get_address_of_screenshot_13() { return &___screenshot_13; }
	inline void set_screenshot_13(VREvent_Screenshot_t_t1459B9F3FCD91BFF2A03D1F0DBC012594714BE97  value)
	{
		___screenshot_13 = value;
	}

	inline static int32_t get_offset_of_screenshotProgress_14() { return static_cast<int32_t>(offsetof(VREvent_Data_t_t38985E196F3FFB84A2EC25F5F5300A1A465435F0, ___screenshotProgress_14)); }
	inline VREvent_ScreenshotProgress_t_t9CD059D8FF2215EBC3F9014DE35F8847B904ECED  get_screenshotProgress_14() const { return ___screenshotProgress_14; }
	inline VREvent_ScreenshotProgress_t_t9CD059D8FF2215EBC3F9014DE35F8847B904ECED * get_address_of_screenshotProgress_14() { return &___screenshotProgress_14; }
	inline void set_screenshotProgress_14(VREvent_ScreenshotProgress_t_t9CD059D8FF2215EBC3F9014DE35F8847B904ECED  value)
	{
		___screenshotProgress_14 = value;
	}

	inline static int32_t get_offset_of_applicationLaunch_15() { return static_cast<int32_t>(offsetof(VREvent_Data_t_t38985E196F3FFB84A2EC25F5F5300A1A465435F0, ___applicationLaunch_15)); }
	inline VREvent_ApplicationLaunch_t_t19D5E8E56A4A34EBA9497F8560DDBC045BC22389  get_applicationLaunch_15() const { return ___applicationLaunch_15; }
	inline VREvent_ApplicationLaunch_t_t19D5E8E56A4A34EBA9497F8560DDBC045BC22389 * get_address_of_applicationLaunch_15() { return &___applicationLaunch_15; }
	inline void set_applicationLaunch_15(VREvent_ApplicationLaunch_t_t19D5E8E56A4A34EBA9497F8560DDBC045BC22389  value)
	{
		___applicationLaunch_15 = value;
	}

	inline static int32_t get_offset_of_cameraSurface_16() { return static_cast<int32_t>(offsetof(VREvent_Data_t_t38985E196F3FFB84A2EC25F5F5300A1A465435F0, ___cameraSurface_16)); }
	inline VREvent_EditingCameraSurface_t_t001B622D6CDFD7226DB4337AEE63DB317E6420FC  get_cameraSurface_16() const { return ___cameraSurface_16; }
	inline VREvent_EditingCameraSurface_t_t001B622D6CDFD7226DB4337AEE63DB317E6420FC * get_address_of_cameraSurface_16() { return &___cameraSurface_16; }
	inline void set_cameraSurface_16(VREvent_EditingCameraSurface_t_t001B622D6CDFD7226DB4337AEE63DB317E6420FC  value)
	{
		___cameraSurface_16 = value;
	}

	inline static int32_t get_offset_of_messageOverlay_17() { return static_cast<int32_t>(offsetof(VREvent_Data_t_t38985E196F3FFB84A2EC25F5F5300A1A465435F0, ___messageOverlay_17)); }
	inline VREvent_MessageOverlay_t_t527A27CE8C9CDC089759AEF6257E7F5803D72BA1  get_messageOverlay_17() const { return ___messageOverlay_17; }
	inline VREvent_MessageOverlay_t_t527A27CE8C9CDC089759AEF6257E7F5803D72BA1 * get_address_of_messageOverlay_17() { return &___messageOverlay_17; }
	inline void set_messageOverlay_17(VREvent_MessageOverlay_t_t527A27CE8C9CDC089759AEF6257E7F5803D72BA1  value)
	{
		___messageOverlay_17 = value;
	}

	inline static int32_t get_offset_of_property_18() { return static_cast<int32_t>(offsetof(VREvent_Data_t_t38985E196F3FFB84A2EC25F5F5300A1A465435F0, ___property_18)); }
	inline VREvent_Property_t_tDA1B42C6B679945C10CE6A3E37ECAE1D03E586F5  get_property_18() const { return ___property_18; }
	inline VREvent_Property_t_tDA1B42C6B679945C10CE6A3E37ECAE1D03E586F5 * get_address_of_property_18() { return &___property_18; }
	inline void set_property_18(VREvent_Property_t_tDA1B42C6B679945C10CE6A3E37ECAE1D03E586F5  value)
	{
		___property_18 = value;
	}

	inline static int32_t get_offset_of_dualAnalog_19() { return static_cast<int32_t>(offsetof(VREvent_Data_t_t38985E196F3FFB84A2EC25F5F5300A1A465435F0, ___dualAnalog_19)); }
	inline VREvent_DualAnalog_t_tC3619C1896674578643AE38536F4DA3B79B49137  get_dualAnalog_19() const { return ___dualAnalog_19; }
	inline VREvent_DualAnalog_t_tC3619C1896674578643AE38536F4DA3B79B49137 * get_address_of_dualAnalog_19() { return &___dualAnalog_19; }
	inline void set_dualAnalog_19(VREvent_DualAnalog_t_tC3619C1896674578643AE38536F4DA3B79B49137  value)
	{
		___dualAnalog_19 = value;
	}

	inline static int32_t get_offset_of_hapticVibration_20() { return static_cast<int32_t>(offsetof(VREvent_Data_t_t38985E196F3FFB84A2EC25F5F5300A1A465435F0, ___hapticVibration_20)); }
	inline VREvent_HapticVibration_t_tC31D4D068A151263ADCB11D4C8349D5774AC246F  get_hapticVibration_20() const { return ___hapticVibration_20; }
	inline VREvent_HapticVibration_t_tC31D4D068A151263ADCB11D4C8349D5774AC246F * get_address_of_hapticVibration_20() { return &___hapticVibration_20; }
	inline void set_hapticVibration_20(VREvent_HapticVibration_t_tC31D4D068A151263ADCB11D4C8349D5774AC246F  value)
	{
		___hapticVibration_20 = value;
	}

	inline static int32_t get_offset_of_webConsole_21() { return static_cast<int32_t>(offsetof(VREvent_Data_t_t38985E196F3FFB84A2EC25F5F5300A1A465435F0, ___webConsole_21)); }
	inline VREvent_WebConsole_t_tB082ED62757425E442A9D3D77878DE178AE3DC75  get_webConsole_21() const { return ___webConsole_21; }
	inline VREvent_WebConsole_t_tB082ED62757425E442A9D3D77878DE178AE3DC75 * get_address_of_webConsole_21() { return &___webConsole_21; }
	inline void set_webConsole_21(VREvent_WebConsole_t_tB082ED62757425E442A9D3D77878DE178AE3DC75  value)
	{
		___webConsole_21 = value;
	}

	inline static int32_t get_offset_of_inputBinding_22() { return static_cast<int32_t>(offsetof(VREvent_Data_t_t38985E196F3FFB84A2EC25F5F5300A1A465435F0, ___inputBinding_22)); }
	inline VREvent_InputBindingLoad_t_tC758CE9776D2810CD958CB23032BE745D51E1EED  get_inputBinding_22() const { return ___inputBinding_22; }
	inline VREvent_InputBindingLoad_t_tC758CE9776D2810CD958CB23032BE745D51E1EED * get_address_of_inputBinding_22() { return &___inputBinding_22; }
	inline void set_inputBinding_22(VREvent_InputBindingLoad_t_tC758CE9776D2810CD958CB23032BE745D51E1EED  value)
	{
		___inputBinding_22 = value;
	}

	inline static int32_t get_offset_of_spatialAnchor_23() { return static_cast<int32_t>(offsetof(VREvent_Data_t_t38985E196F3FFB84A2EC25F5F5300A1A465435F0, ___spatialAnchor_23)); }
	inline VREvent_SpatialAnchor_t_tEF1C8EF84EEA707BC3393810ECAF468F3B3B9473  get_spatialAnchor_23() const { return ___spatialAnchor_23; }
	inline VREvent_SpatialAnchor_t_tEF1C8EF84EEA707BC3393810ECAF468F3B3B9473 * get_address_of_spatialAnchor_23() { return &___spatialAnchor_23; }
	inline void set_spatialAnchor_23(VREvent_SpatialAnchor_t_tEF1C8EF84EEA707BC3393810ECAF468F3B3B9473  value)
	{
		___spatialAnchor_23 = value;
	}

	inline static int32_t get_offset_of_actionManifest_24() { return static_cast<int32_t>(offsetof(VREvent_Data_t_t38985E196F3FFB84A2EC25F5F5300A1A465435F0, ___actionManifest_24)); }
	inline VREvent_InputActionManifestLoad_t_t80FAEB7CDAA5F4A1992C9701923F26D79C3E3A76  get_actionManifest_24() const { return ___actionManifest_24; }
	inline VREvent_InputActionManifestLoad_t_t80FAEB7CDAA5F4A1992C9701923F26D79C3E3A76 * get_address_of_actionManifest_24() { return &___actionManifest_24; }
	inline void set_actionManifest_24(VREvent_InputActionManifestLoad_t_t80FAEB7CDAA5F4A1992C9701923F26D79C3E3A76  value)
	{
		___actionManifest_24 = value;
	}

	inline static int32_t get_offset_of_progressUpdate_25() { return static_cast<int32_t>(offsetof(VREvent_Data_t_t38985E196F3FFB84A2EC25F5F5300A1A465435F0, ___progressUpdate_25)); }
	inline VREvent_ProgressUpdate_t_tE2EE0FDAEB40796B73B8477434588652690495AE  get_progressUpdate_25() const { return ___progressUpdate_25; }
	inline VREvent_ProgressUpdate_t_tE2EE0FDAEB40796B73B8477434588652690495AE * get_address_of_progressUpdate_25() { return &___progressUpdate_25; }
	inline void set_progressUpdate_25(VREvent_ProgressUpdate_t_tE2EE0FDAEB40796B73B8477434588652690495AE  value)
	{
		___progressUpdate_25 = value;
	}

	inline static int32_t get_offset_of_showUi_26() { return static_cast<int32_t>(offsetof(VREvent_Data_t_t38985E196F3FFB84A2EC25F5F5300A1A465435F0, ___showUi_26)); }
	inline VREvent_ShowUI_t_tE3EDB9F7A3BCAC0C9A3812B850DA4F4A45933997  get_showUi_26() const { return ___showUi_26; }
	inline VREvent_ShowUI_t_tE3EDB9F7A3BCAC0C9A3812B850DA4F4A45933997 * get_address_of_showUi_26() { return &___showUi_26; }
	inline void set_showUi_26(VREvent_ShowUI_t_tE3EDB9F7A3BCAC0C9A3812B850DA4F4A45933997  value)
	{
		___showUi_26 = value;
	}

	inline static int32_t get_offset_of_showDevTools_27() { return static_cast<int32_t>(offsetof(VREvent_Data_t_t38985E196F3FFB84A2EC25F5F5300A1A465435F0, ___showDevTools_27)); }
	inline VREvent_ShowDevTools_t_t39141238FE64295EF3CBCCF82984ACB8C97FABE6  get_showDevTools_27() const { return ___showDevTools_27; }
	inline VREvent_ShowDevTools_t_t39141238FE64295EF3CBCCF82984ACB8C97FABE6 * get_address_of_showDevTools_27() { return &___showDevTools_27; }
	inline void set_showDevTools_27(VREvent_ShowDevTools_t_t39141238FE64295EF3CBCCF82984ACB8C97FABE6  value)
	{
		___showDevTools_27 = value;
	}

	inline static int32_t get_offset_of_hdcpError_28() { return static_cast<int32_t>(offsetof(VREvent_Data_t_t38985E196F3FFB84A2EC25F5F5300A1A465435F0, ___hdcpError_28)); }
	inline VREvent_HDCPError_t_tB01E1AF666EA64FA9D948BC11978D08B58C7201E  get_hdcpError_28() const { return ___hdcpError_28; }
	inline VREvent_HDCPError_t_tB01E1AF666EA64FA9D948BC11978D08B58C7201E * get_address_of_hdcpError_28() { return &___hdcpError_28; }
	inline void set_hdcpError_28(VREvent_HDCPError_t_tB01E1AF666EA64FA9D948BC11978D08B58C7201E  value)
	{
		___hdcpError_28 = value;
	}

	inline static int32_t get_offset_of_keyboard_29() { return static_cast<int32_t>(offsetof(VREvent_Data_t_t38985E196F3FFB84A2EC25F5F5300A1A465435F0, ___keyboard_29)); }
	inline VREvent_Keyboard_t_t0FAA9B97A441A22EC65002BC6FDEB4AF7A045297  get_keyboard_29() const { return ___keyboard_29; }
	inline VREvent_Keyboard_t_t0FAA9B97A441A22EC65002BC6FDEB4AF7A045297 * get_address_of_keyboard_29() { return &___keyboard_29; }
	inline void set_keyboard_29(VREvent_Keyboard_t_t0FAA9B97A441A22EC65002BC6FDEB4AF7A045297  value)
	{
		___keyboard_29 = value;
	}
};


// Valve.VR.VREvent_t
struct  VREvent_t_t4F330058D4B87093309E1043D17F8A3DB1BA925C 
{
public:
	// System.UInt32 Valve.VR.VREvent_t::eventType
	uint32_t ___eventType_0;
	// System.UInt32 Valve.VR.VREvent_t::trackedDeviceIndex
	uint32_t ___trackedDeviceIndex_1;
	// System.Single Valve.VR.VREvent_t::eventAgeSeconds
	float ___eventAgeSeconds_2;
	// Valve.VR.VREvent_Data_t Valve.VR.VREvent_t::data
	VREvent_Data_t_t38985E196F3FFB84A2EC25F5F5300A1A465435F0  ___data_3;

public:
	inline static int32_t get_offset_of_eventType_0() { return static_cast<int32_t>(offsetof(VREvent_t_t4F330058D4B87093309E1043D17F8A3DB1BA925C, ___eventType_0)); }
	inline uint32_t get_eventType_0() const { return ___eventType_0; }
	inline uint32_t* get_address_of_eventType_0() { return &___eventType_0; }
	inline void set_eventType_0(uint32_t value)
	{
		___eventType_0 = value;
	}

	inline static int32_t get_offset_of_trackedDeviceIndex_1() { return static_cast<int32_t>(offsetof(VREvent_t_t4F330058D4B87093309E1043D17F8A3DB1BA925C, ___trackedDeviceIndex_1)); }
	inline uint32_t get_trackedDeviceIndex_1() const { return ___trackedDeviceIndex_1; }
	inline uint32_t* get_address_of_trackedDeviceIndex_1() { return &___trackedDeviceIndex_1; }
	inline void set_trackedDeviceIndex_1(uint32_t value)
	{
		___trackedDeviceIndex_1 = value;
	}

	inline static int32_t get_offset_of_eventAgeSeconds_2() { return static_cast<int32_t>(offsetof(VREvent_t_t4F330058D4B87093309E1043D17F8A3DB1BA925C, ___eventAgeSeconds_2)); }
	inline float get_eventAgeSeconds_2() const { return ___eventAgeSeconds_2; }
	inline float* get_address_of_eventAgeSeconds_2() { return &___eventAgeSeconds_2; }
	inline void set_eventAgeSeconds_2(float value)
	{
		___eventAgeSeconds_2 = value;
	}

	inline static int32_t get_offset_of_data_3() { return static_cast<int32_t>(offsetof(VREvent_t_t4F330058D4B87093309E1043D17F8A3DB1BA925C, ___data_3)); }
	inline VREvent_Data_t_t38985E196F3FFB84A2EC25F5F5300A1A465435F0  get_data_3() const { return ___data_3; }
	inline VREvent_Data_t_t38985E196F3FFB84A2EC25F5F5300A1A465435F0 * get_address_of_data_3() { return &___data_3; }
	inline void set_data_3(VREvent_Data_t_t38985E196F3FFB84A2EC25F5F5300A1A465435F0  value)
	{
		___data_3 = value;
	}
};


// UnityEngine.Events.UnityAction`1<Valve.VR.VREvent_t>
struct  UnityAction_1_tB43C1CF1D8DCDDE3590ED959587DB9809C1294BF  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};



// System.Void Valve.VR.SteamVR_Action_Source_Map::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_Action_Source_Map_Initialize_m026286BBD5EDFADDDD6493E5E6B632914BDD7384 (SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17 * __this, const RuntimeMethod* method);
// System.Void Valve.VR.SteamVR_Action_Source_Map::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_Action_Source_Map__ctor_m447250764F35CA25B89A1133E402FA825A68ADF2 (SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17 * __this, const RuntimeMethod* method);
// System.String Valve.VR.SteamVR_Action_Source_Map::get_fullPath()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* SteamVR_Action_Source_Map_get_fullPath_m59D22AC4A2ADB2B88085A1B676D686350CE1EE2A_inline (SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17 * __this, const RuntimeMethod* method);
// System.UInt64 Valve.VR.SteamVR_Action_Source_Map::get_handle()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint64_t SteamVR_Action_Source_Map_get_handle_m4D0B503DEA30F420E162BD5ECBD57D7BD1033E0F_inline (SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17 * __this, const RuntimeMethod* method);
// Valve.VR.SteamVR_ActionSet Valve.VR.SteamVR_Action_Source_Map::get_actionSet()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR SteamVR_ActionSet_t9D647E559B2D35F695CC7613111572186FBCA9F6 * SteamVR_Action_Source_Map_get_actionSet_mE10477F66D710B36A4DB0BDEF9DC7788CD86D893_inline (SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17 * __this, const RuntimeMethod* method);
// Valve.VR.SteamVR_ActionDirections Valve.VR.SteamVR_Action_Source_Map::get_direction()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t SteamVR_Action_Source_Map_get_direction_m57FCD20566320667DDD47CCF0743E7AF33971413_inline (SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17 * __this, const RuntimeMethod* method);
// System.String Valve.VR.SteamVR_Input_ActionFile_Action::CreateNewName(System.String,Valve.VR.SteamVR_ActionDirections,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SteamVR_Input_ActionFile_Action_CreateNewName_mCA94051AED8A1828138AE9534B97F48978D3C8DE (String_t* ___actionSet0, int32_t ___direction1, String_t* ___actionName2, const RuntimeMethod* method);
// Valve.VR.SteamVR_Action Valve.VR.SteamVR_Action::FindExistingActionForPartialPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 * SteamVR_Action_FindExistingActionForPartialPath_m906465337554615A52DBC7DE91714A8874622056 (String_t* ___path0, const RuntimeMethod* method);
// System.Boolean Valve.VR.SteamVR_Action::op_Equality(Valve.VR.SteamVR_Action,Valve.VR.SteamVR_Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SteamVR_Action_op_Equality_m3F980F171D77E1CF1D953F9E7EE4EDC800E44BF7 (SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 * ___action10, SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 * ___action21, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m0BD184A74F453A72376E81CC6CAEE2556B80493E (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229 (String_t* ___value0, const RuntimeMethod* method);
// System.Void Valve.VR.SteamVR_Action::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_Action__ctor_m04B687E8309910334EE27AB31201F54FEC6A5FB2 (SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 * __this, const RuntimeMethod* method);
// System.Void Valve.VR.SteamVR_Events/Action::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m2BC0CECA7D26D71E956BF85BE27A2B75E178D29E (Action_tD381670DCBAE1D2EE90871FC4B0DE139675A28C5 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// SourceElement Valve.VR.SteamVR_Action_Source_Map`1<System.Object>::get_Item(Valve.VR.SteamVR_Input_Sources)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SteamVR_Action_Source_Map_1_get_Item_mB034B2596B39A1DB5B5BA1ADA63292FDE8DBF9D9_gshared (SteamVR_Action_Source_Map_1_tF6CD4E2DA9FBD867B5F22D6A040FC06A0BFE5CCA * __this, int32_t ___inputSource0, const RuntimeMethod* method)
{
	{
		// return GetSourceElementForIndexer(inputSource);
		int32_t L_0 = ___inputSource0;
		NullCheck((SteamVR_Action_Source_Map_1_tF6CD4E2DA9FBD867B5F22D6A040FC06A0BFE5CCA *)__this);
		RuntimeObject * L_1 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(8 /* SourceElement Valve.VR.SteamVR_Action_Source_Map`1<System.Object>::GetSourceElementForIndexer(Valve.VR.SteamVR_Input_Sources) */, (SteamVR_Action_Source_Map_1_tF6CD4E2DA9FBD867B5F22D6A040FC06A0BFE5CCA *)__this, (int32_t)L_0);
		return L_1;
	}
}
// System.Void Valve.VR.SteamVR_Action_Source_Map`1<System.Object>::OnAccessSource(Valve.VR.SteamVR_Input_Sources)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_Action_Source_Map_1_OnAccessSource_mD52E1BCBB104C08EC006B1DF2E9ADCC5C270A2B5_gshared (SteamVR_Action_Source_Map_1_tF6CD4E2DA9FBD867B5F22D6A040FC06A0BFE5CCA * __this, int32_t ___inputSource0, const RuntimeMethod* method)
{
	{
		// protected virtual void OnAccessSource(SteamVR_Input_Sources inputSource) { }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Action_Source_Map`1<System.Object>::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_Action_Source_Map_1_Initialize_mB31128F5EA8CB697566AB5D061EC3E2261A6DF45_gshared (SteamVR_Action_Source_Map_1_tF6CD4E2DA9FBD867B5F22D6A040FC06A0BFE5CCA * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// base.Initialize();
		NullCheck((SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17 *)__this);
		SteamVR_Action_Source_Map_Initialize_m026286BBD5EDFADDDD6493E5E6B632914BDD7384((SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17 *)__this, /*hidden argument*/NULL);
		// for (int sourceIndex = 0; sourceIndex < sources.Length; sourceIndex++)
		V_0 = (int32_t)0;
		goto IL_0037;
	}

IL_000a:
	{
		// if (sources[sourceIndex] != null)
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_sources_7();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		// sources[sourceIndex].Initialize();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_sources_7();
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck((SteamVR_Action_Source_t9D7428CDE39924074518EE6233D9A4FAB0C33CB0 *)L_7);
		VirtActionInvoker0::Invoke(18 /* System.Void Valve.VR.SteamVR_Action_Source::Initialize() */, (SteamVR_Action_Source_t9D7428CDE39924074518EE6233D9A4FAB0C33CB0 *)L_7);
	}

IL_0033:
	{
		// for (int sourceIndex = 0; sourceIndex < sources.Length; sourceIndex++)
		int32_t L_8 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0037:
	{
		// for (int sourceIndex = 0; sourceIndex < sources.Length; sourceIndex++)
		int32_t L_9 = V_0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_sources_7();
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))))
		{
			goto IL_000a;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Action_Source_Map`1<System.Object>::PreinitializeMap(Valve.VR.SteamVR_Input_Sources,Valve.VR.SteamVR_Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_Action_Source_Map_1_PreinitializeMap_m235FFC9737A2781972AFD16E102B52DCA6542386_gshared (SteamVR_Action_Source_Map_1_tF6CD4E2DA9FBD867B5F22D6A040FC06A0BFE5CCA * __this, int32_t ___inputSource0, SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 * ___wrappingAction1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// int sourceIndex = (int)inputSource;
		int32_t L_0 = ___inputSource0;
		V_0 = (int32_t)L_0;
		// sources[sourceIndex] = new SourceElement();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_sources_7();
		int32_t L_2 = V_0;
		RuntimeObject * L_3 = ((  RuntimeObject * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (RuntimeObject *)L_3);
		// sources[sourceIndex].Preinitialize(wrappingAction, inputSource);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_sources_7();
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 * L_8 = ___wrappingAction1;
		int32_t L_9 = ___inputSource0;
		NullCheck((SteamVR_Action_Source_t9D7428CDE39924074518EE6233D9A4FAB0C33CB0 *)L_7);
		VirtActionInvoker2< SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *, int32_t >::Invoke(17 /* System.Void Valve.VR.SteamVR_Action_Source::Preinitialize(Valve.VR.SteamVR_Action,Valve.VR.SteamVR_Input_Sources) */, (SteamVR_Action_Source_t9D7428CDE39924074518EE6233D9A4FAB0C33CB0 *)L_7, (SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *)L_8, (int32_t)L_9);
		// }
		return;
	}
}
// SourceElement Valve.VR.SteamVR_Action_Source_Map`1<System.Object>::GetSourceElementForIndexer(Valve.VR.SteamVR_Input_Sources)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SteamVR_Action_Source_Map_1_GetSourceElementForIndexer_m7536DB0EFDC79616140F90301E50B36E673E7C7A_gshared (SteamVR_Action_Source_Map_1_tF6CD4E2DA9FBD867B5F22D6A040FC06A0BFE5CCA * __this, int32_t ___inputSource0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// int sourceIndex = (int)inputSource;
		int32_t L_0 = ___inputSource0;
		V_0 = (int32_t)L_0;
		// OnAccessSource(inputSource);
		int32_t L_1 = ___inputSource0;
		NullCheck((SteamVR_Action_Source_Map_1_tF6CD4E2DA9FBD867B5F22D6A040FC06A0BFE5CCA *)__this);
		VirtActionInvoker1< int32_t >::Invoke(7 /* System.Void Valve.VR.SteamVR_Action_Source_Map`1<System.Object>::OnAccessSource(Valve.VR.SteamVR_Input_Sources) */, (SteamVR_Action_Source_Map_1_tF6CD4E2DA9FBD867B5F22D6A040FC06A0BFE5CCA *)__this, (int32_t)L_1);
		// return sources[sourceIndex];
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_sources_7();
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
// System.Void Valve.VR.SteamVR_Action_Source_Map`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_Action_Source_Map_1__ctor_m2A7CDEF37045DF1A11A62CE29A48F11C11274029_gshared (SteamVR_Action_Source_Map_1_tF6CD4E2DA9FBD867B5F22D6A040FC06A0BFE5CCA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SteamVR_Action_Source_Map_1__ctor_m2A7CDEF37045DF1A11A62CE29A48F11C11274029_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected SourceElement[] sources = new SourceElement[SteamVR_Input_Source.numSources];
		IL2CPP_RUNTIME_CLASS_INIT(SteamVR_Input_Source_tAFDB40851F8E134E08DD2DD0BC1C1770705E81D0_il2cpp_TypeInfo_var);
		int32_t L_0 = ((SteamVR_Input_Source_tAFDB40851F8E134E08DD2DD0BC1C1770705E81D0_StaticFields*)il2cpp_codegen_static_fields_for(SteamVR_Input_Source_tAFDB40851F8E134E08DD2DD0BC1C1770705E81D0_il2cpp_TypeInfo_var))->get_numSources_0();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4), (uint32_t)L_0);
		__this->set_sources_7(L_1);
		NullCheck((SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17_il2cpp_TypeInfo_var);
		SteamVR_Action_Source_Map__ctor_m447250764F35CA25B89A1133E402FA825A68ADF2((SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17 *)__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// SourceElement Valve.VR.SteamVR_Action`2<System.Object,System.Object>::get_Item(Valve.VR.SteamVR_Input_Sources)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SteamVR_Action_2_get_Item_m78F602EC40938B71D929AEFF99EF0CEB25B39A10_gshared (SteamVR_Action_2_t67EA892F0F7F8FCEB40A807AEF2569E6E8BA4B41 * __this, int32_t ___inputSource0, const RuntimeMethod* method)
{
	{
		// return sourceMap[inputSource];
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_sourceMap_4();
		int32_t L_1 = ___inputSource0;
		NullCheck((SteamVR_Action_Source_Map_1_tF6CD4E2DA9FBD867B5F22D6A040FC06A0BFE5CCA *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (SteamVR_Action_Source_Map_1_tF6CD4E2DA9FBD867B5F22D6A040FC06A0BFE5CCA *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((SteamVR_Action_Source_Map_1_tF6CD4E2DA9FBD867B5F22D6A040FC06A0BFE5CCA *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		return L_2;
	}
}
// System.String Valve.VR.SteamVR_Action`2<System.Object,System.Object>::get_fullPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SteamVR_Action_2_get_fullPath_mA621798C30A800B2D9F2CFC3F5FA2C2DDB43E139_gshared (SteamVR_Action_2_t67EA892F0F7F8FCEB40A807AEF2569E6E8BA4B41 * __this, const RuntimeMethod* method)
{
	{
		// return sourceMap.fullPath;
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_sourceMap_4();
		NullCheck((SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17 *)L_0);
		String_t* L_1 = SteamVR_Action_Source_Map_get_fullPath_m59D22AC4A2ADB2B88085A1B676D686350CE1EE2A_inline((SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17 *)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.UInt64 Valve.VR.SteamVR_Action`2<System.Object,System.Object>::get_handle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t SteamVR_Action_2_get_handle_m912D762FCADCA857EED41B8DDBBB6E1A30AA9EF6_gshared (SteamVR_Action_2_t67EA892F0F7F8FCEB40A807AEF2569E6E8BA4B41 * __this, const RuntimeMethod* method)
{
	{
		// public override ulong handle { get { return sourceMap.handle; } }
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_sourceMap_4();
		NullCheck((SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17 *)L_0);
		uint64_t L_1 = SteamVR_Action_Source_Map_get_handle_m4D0B503DEA30F420E162BD5ECBD57D7BD1033E0F_inline((SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17 *)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Valve.VR.SteamVR_ActionSet Valve.VR.SteamVR_Action`2<System.Object,System.Object>::get_actionSet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SteamVR_ActionSet_t9D647E559B2D35F695CC7613111572186FBCA9F6 * SteamVR_Action_2_get_actionSet_m2B2CB1DC1A090E309B45160C9E43B86941AC9CD7_gshared (SteamVR_Action_2_t67EA892F0F7F8FCEB40A807AEF2569E6E8BA4B41 * __this, const RuntimeMethod* method)
{
	{
		// return sourceMap.actionSet;
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_sourceMap_4();
		NullCheck((SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17 *)L_0);
		SteamVR_ActionSet_t9D647E559B2D35F695CC7613111572186FBCA9F6 * L_1 = SteamVR_Action_Source_Map_get_actionSet_mE10477F66D710B36A4DB0BDEF9DC7788CD86D893_inline((SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17 *)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Valve.VR.SteamVR_ActionDirections Valve.VR.SteamVR_Action`2<System.Object,System.Object>::get_direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SteamVR_Action_2_get_direction_m09CD1AA5965FBB97A4DF014FEA1D1603913F7D6A_gshared (SteamVR_Action_2_t67EA892F0F7F8FCEB40A807AEF2569E6E8BA4B41 * __this, const RuntimeMethod* method)
{
	{
		// return sourceMap.direction;
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_sourceMap_4();
		NullCheck((SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17 *)L_0);
		int32_t L_1 = SteamVR_Action_Source_Map_get_direction_m57FCD20566320667DDD47CCF0743E7AF33971413_inline((SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17 *)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Valve.VR.SteamVR_Action`2<System.Object,System.Object>::get_active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SteamVR_Action_2_get_active_mE496A5B6FBA248A77A6556D6AD3202FEE1089B59_gshared (SteamVR_Action_2_t67EA892F0F7F8FCEB40A807AEF2569E6E8BA4B41 * __this, const RuntimeMethod* method)
{
	{
		// public override bool active { get { return sourceMap[SteamVR_Input_Sources.Any].active; } }
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_sourceMap_4();
		NullCheck((SteamVR_Action_Source_Map_1_tF6CD4E2DA9FBD867B5F22D6A040FC06A0BFE5CCA *)L_0);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (SteamVR_Action_Source_Map_1_tF6CD4E2DA9FBD867B5F22D6A040FC06A0BFE5CCA *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((SteamVR_Action_Source_Map_1_tF6CD4E2DA9FBD867B5F22D6A040FC06A0BFE5CCA *)L_0, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		NullCheck((SteamVR_Action_Source_t9D7428CDE39924074518EE6233D9A4FAB0C33CB0 *)L_1);
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(12 /* System.Boolean Valve.VR.SteamVR_Action_Source::get_active() */, (SteamVR_Action_Source_t9D7428CDE39924074518EE6233D9A4FAB0C33CB0 *)L_1);
		return L_2;
	}
}
// System.Boolean Valve.VR.SteamVR_Action`2<System.Object,System.Object>::get_lastActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SteamVR_Action_2_get_lastActive_m78293287F8020C52429265E17522358D363A5890_gshared (SteamVR_Action_2_t67EA892F0F7F8FCEB40A807AEF2569E6E8BA4B41 * __this, const RuntimeMethod* method)
{
	{
		// public override bool lastActive { get { return sourceMap[SteamVR_Input_Sources.Any].lastActive; } }
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_sourceMap_4();
		NullCheck((SteamVR_Action_Source_Map_1_tF6CD4E2DA9FBD867B5F22D6A040FC06A0BFE5CCA *)L_0);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (SteamVR_Action_Source_Map_1_tF6CD4E2DA9FBD867B5F22D6A040FC06A0BFE5CCA *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((SteamVR_Action_Source_Map_1_tF6CD4E2DA9FBD867B5F22D6A040FC06A0BFE5CCA *)L_0, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		NullCheck((SteamVR_Action_Source_t9D7428CDE39924074518EE6233D9A4FAB0C33CB0 *)L_1);
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(14 /* System.Boolean Valve.VR.SteamVR_Action_Source::get_lastActive() */, (SteamVR_Action_Source_t9D7428CDE39924074518EE6233D9A4FAB0C33CB0 *)L_1);
		return L_2;
	}
}
// System.Boolean Valve.VR.SteamVR_Action`2<System.Object,System.Object>::get_activeBinding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SteamVR_Action_2_get_activeBinding_m9FD0EE5C4F0122651880BA2FEA16C9CA632B9AAD_gshared (SteamVR_Action_2_t67EA892F0F7F8FCEB40A807AEF2569E6E8BA4B41 * __this, const RuntimeMethod* method)
{
	{
		// public override bool activeBinding { get { return sourceMap[SteamVR_Input_Sources.Any].activeBinding; } }
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_sourceMap_4();
		NullCheck((SteamVR_Action_Source_Map_1_tF6CD4E2DA9FBD867B5F22D6A040FC06A0BFE5CCA *)L_0);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (SteamVR_Action_Source_Map_1_tF6CD4E2DA9FBD867B5F22D6A040FC06A0BFE5CCA *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((SteamVR_Action_Source_Map_1_tF6CD4E2DA9FBD867B5F22D6A040FC06A0BFE5CCA *)L_0, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		NullCheck((SteamVR_Action_Source_t9D7428CDE39924074518EE6233D9A4FAB0C33CB0 *)L_1);
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(13 /* System.Boolean Valve.VR.SteamVR_Action_Source::get_activeBinding() */, (SteamVR_Action_Source_t9D7428CDE39924074518EE6233D9A4FAB0C33CB0 *)L_1);
		return L_2;
	}
}
// System.Boolean Valve.VR.SteamVR_Action`2<System.Object,System.Object>::get_lastActiveBinding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SteamVR_Action_2_get_lastActiveBinding_m779B373EE3875EAC6D61F54795059C772AF802B7_gshared (SteamVR_Action_2_t67EA892F0F7F8FCEB40A807AEF2569E6E8BA4B41 * __this, const RuntimeMethod* method)
{
	{
		// public override bool lastActiveBinding { get { return sourceMap[SteamVR_Input_Sources.Any].lastActiveBinding; } }
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_sourceMap_4();
		NullCheck((SteamVR_Action_Source_Map_1_tF6CD4E2DA9FBD867B5F22D6A040FC06A0BFE5CCA *)L_0);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (SteamVR_Action_Source_Map_1_tF6CD4E2DA9FBD867B5F22D6A040FC06A0BFE5CCA *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((SteamVR_Action_Source_Map_1_tF6CD4E2DA9FBD867B5F22D6A040FC06A0BFE5CCA *)L_0, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		NullCheck((SteamVR_Action_Source_t9D7428CDE39924074518EE6233D9A4FAB0C33CB0 *)L_1);
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(16 /* System.Boolean Valve.VR.SteamVR_Action_Source::get_lastActiveBinding() */, (SteamVR_Action_Source_t9D7428CDE39924074518EE6233D9A4FAB0C33CB0 *)L_1);
		return L_2;
	}
}
// System.Void Valve.VR.SteamVR_Action`2<System.Object,System.Object>::PreInitialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_Action_2_PreInitialize_m0967CA30BD71BE97E0341EE5C6872AED26161CA1_gshared (SteamVR_Action_2_t67EA892F0F7F8FCEB40A807AEF2569E6E8BA4B41 * __this, String_t* ___newActionPath0, const RuntimeMethod* method)
{
	{
		// actionPath = newActionPath;
		String_t* L_0 = ___newActionPath0;
		((SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *)__this)->set_actionPath_0(L_0);
		// sourceMap = new SourceMap();
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		__this->set_sourceMap_4(L_1);
		// sourceMap.PreInitialize(this, actionPath);
		RuntimeObject * L_2 = (RuntimeObject *)__this->get_sourceMap_4();
		String_t* L_3 = (String_t*)((SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *)__this)->get_actionPath_0();
		NullCheck((SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17 *)L_2);
		VirtActionInvoker3< SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *, String_t*, bool >::Invoke(4 /* System.Void Valve.VR.SteamVR_Action_Source_Map::PreInitialize(Valve.VR.SteamVR_Action,System.String,System.Boolean) */, (SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17 *)L_2, (SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *)__this, (String_t*)L_3, (bool)1);
		// initialized = true;
		__this->set_initialized_5((bool)1);
		// }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Action`2<System.Object,System.Object>::CreateUninitialized(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_Action_2_CreateUninitialized_m5328092457DDB2CFC39A3544E275362A482D74E7_gshared (SteamVR_Action_2_t67EA892F0F7F8FCEB40A807AEF2569E6E8BA4B41 * __this, String_t* ___newActionPath0, bool ___caseSensitive1, const RuntimeMethod* method)
{
	{
		// actionPath = newActionPath;
		String_t* L_0 = ___newActionPath0;
		((SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *)__this)->set_actionPath_0(L_0);
		// sourceMap = new SourceMap();
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		__this->set_sourceMap_4(L_1);
		// sourceMap.PreInitialize(this, actionPath, false);
		RuntimeObject * L_2 = (RuntimeObject *)__this->get_sourceMap_4();
		String_t* L_3 = (String_t*)((SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *)__this)->get_actionPath_0();
		NullCheck((SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17 *)L_2);
		VirtActionInvoker3< SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *, String_t*, bool >::Invoke(4 /* System.Void Valve.VR.SteamVR_Action_Source_Map::PreInitialize(Valve.VR.SteamVR_Action,System.String,System.Boolean) */, (SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17 *)L_2, (SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *)__this, (String_t*)L_3, (bool)0);
		// needsReinit = true;
		((SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *)__this)->set_needsReinit_1((bool)1);
		// initialized = false;
		__this->set_initialized_5((bool)0);
		// }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Action`2<System.Object,System.Object>::CreateUninitialized(System.String,Valve.VR.SteamVR_ActionDirections,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_Action_2_CreateUninitialized_mF5243A025A4E915D6DA3C646A437AD199DC011F5_gshared (SteamVR_Action_2_t67EA892F0F7F8FCEB40A807AEF2569E6E8BA4B41 * __this, String_t* ___newActionSet0, int32_t ___direction1, String_t* ___newAction2, bool ___caseSensitive3, const RuntimeMethod* method)
{
	{
		// actionPath = SteamVR_Input_ActionFile_Action.CreateNewName(newActionSet, direction, newAction);
		String_t* L_0 = ___newActionSet0;
		int32_t L_1 = ___direction1;
		String_t* L_2 = ___newAction2;
		String_t* L_3 = SteamVR_Input_ActionFile_Action_CreateNewName_mCA94051AED8A1828138AE9534B97F48978D3C8DE((String_t*)L_0, (int32_t)L_1, (String_t*)L_2, /*hidden argument*/NULL);
		((SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *)__this)->set_actionPath_0(L_3);
		// sourceMap = new SourceMap();
		RuntimeObject * L_4 = ((  RuntimeObject * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		__this->set_sourceMap_4(L_4);
		// sourceMap.PreInitialize(this, actionPath, false);
		RuntimeObject * L_5 = (RuntimeObject *)__this->get_sourceMap_4();
		String_t* L_6 = (String_t*)((SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *)__this)->get_actionPath_0();
		NullCheck((SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17 *)L_5);
		VirtActionInvoker3< SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *, String_t*, bool >::Invoke(4 /* System.Void Valve.VR.SteamVR_Action_Source_Map::PreInitialize(Valve.VR.SteamVR_Action,System.String,System.Boolean) */, (SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17 *)L_5, (SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *)__this, (String_t*)L_6, (bool)0);
		// needsReinit = true;
		((SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *)__this)->set_needsReinit_1((bool)1);
		// initialized = false;
		__this->set_initialized_5((bool)0);
		// }
		return;
	}
}
// System.String Valve.VR.SteamVR_Action`2<System.Object,System.Object>::TryNeedsInitData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SteamVR_Action_2_TryNeedsInitData_m9FAA11924CC72B84B7C278D9AE4974C81CD5B12C_gshared (SteamVR_Action_2_t67EA892F0F7F8FCEB40A807AEF2569E6E8BA4B41 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SteamVR_Action_2_TryNeedsInitData_m9FAA11924CC72B84B7C278D9AE4974C81CD5B12C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 * V_0 = NULL;
	{
		// if (needsReinit && actionPath != null)
		bool L_0 = (bool)((SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *)__this)->get_needsReinit_1();
		if (!L_0)
		{
			goto IL_0065;
		}
	}
	{
		String_t* L_1 = (String_t*)((SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *)__this)->get_actionPath_0();
		if (!L_1)
		{
			goto IL_0065;
		}
	}
	{
		// SteamVR_Action existingAction = FindExistingActionForPartialPath(actionPath);
		String_t* L_2 = (String_t*)((SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *)__this)->get_actionPath_0();
		IL2CPP_RUNTIME_CLASS_INIT(SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734_il2cpp_TypeInfo_var);
		SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 * L_3 = SteamVR_Action_FindExistingActionForPartialPath_m906465337554615A52DBC7DE91714A8874622056((String_t*)L_2, /*hidden argument*/NULL);
		V_0 = (SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *)L_3;
		// if (existingAction == null)
		SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 * L_4 = V_0;
		bool L_5 = SteamVR_Action_op_Equality_m3F980F171D77E1CF1D953F9E7EE4EDC800E44BF7((SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *)L_4, (SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0033;
		}
	}
	{
		// this.sourceMap = null;
		RuntimeObject ** L_6 = (RuntimeObject **)__this->get_address_of_sourceMap_4();
		il2cpp_codegen_initobj(L_6, sizeof(RuntimeObject *));
		// }
		goto IL_0065;
	}

IL_0033:
	{
		// this.actionPath = existingAction.fullPath;
		SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 * L_7 = V_0;
		NullCheck((SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *)L_7);
		String_t* L_8 = VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String Valve.VR.SteamVR_Action::get_fullPath() */, (SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *)L_7);
		((SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *)__this)->set_actionPath_0(L_8);
		// this.sourceMap = (SourceMap)existingAction.GetSourceMap();
		SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 * L_9 = V_0;
		NullCheck((SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *)L_9);
		SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17 * L_10 = VirtFuncInvoker0< SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17 * >::Invoke(30 /* Valve.VR.SteamVR_Action_Source_Map Valve.VR.SteamVR_Action::GetSourceMap() */, (SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *)L_9);
		__this->set_sourceMap_4(((RuntimeObject *)Castclass((RuntimeObject*)L_10, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0))));
		// initialized = true;
		__this->set_initialized_5((bool)1);
		// needsReinit = false;
		((SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *)__this)->set_needsReinit_1((bool)0);
		// return actionPath;
		String_t* L_11 = (String_t*)((SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *)__this)->get_actionPath_0();
		return L_11;
	}

IL_0065:
	{
		// return null;
		return (String_t*)NULL;
	}
}
// System.Void Valve.VR.SteamVR_Action`2<System.Object,System.Object>::Initialize(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_Action_2_Initialize_mA9DAC628BDF16216663413242D2D4971AE18F9EA_gshared (SteamVR_Action_2_t67EA892F0F7F8FCEB40A807AEF2569E6E8BA4B41 * __this, bool ___createNew0, bool ___throwErrors1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SteamVR_Action_2_Initialize_mA9DAC628BDF16216663413242D2D4971AE18F9EA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (needsReinit)
		bool L_0 = (bool)((SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *)__this)->get_needsReinit_1();
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// TryNeedsInitData();
		NullCheck((SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *)__this);
		VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String Valve.VR.SteamVR_Action::TryNeedsInitData() */, (SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *)__this);
	}

IL_000f:
	{
		// if (createNew)
		bool L_1 = ___createNew0;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// sourceMap.Initialize();
		RuntimeObject * L_2 = (RuntimeObject *)__this->get_sourceMap_4();
		NullCheck((SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17 *)L_2);
		VirtActionInvoker0::Invoke(6 /* System.Void Valve.VR.SteamVR_Action_Source_Map::Initialize() */, (SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17 *)L_2);
		// }
		goto IL_0042;
	}

IL_0024:
	{
		// sourceMap = SteamVR_Input.GetActionDataFromPath<SourceMap>(actionPath);
		String_t* L_3 = (String_t*)((SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *)__this)->get_actionPath_0();
		IL2CPP_RUNTIME_CLASS_INIT(SteamVR_Input_tCE4A1EC6C51592CB9DCD7B860984CB2C4DD937BF_il2cpp_TypeInfo_var);
		RuntimeObject * L_4 = ((  RuntimeObject * (*) (String_t*, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((String_t*)L_3, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_sourceMap_4(L_4);
		// if (sourceMap == null)
		RuntimeObject * L_5 = (RuntimeObject *)__this->get_sourceMap_4();
	}

IL_0042:
	{
		// initialized = true;
		__this->set_initialized_5((bool)1);
		// }
		return;
	}
}
// Valve.VR.SteamVR_Action_Source_Map Valve.VR.SteamVR_Action`2<System.Object,System.Object>::GetSourceMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17 * SteamVR_Action_2_GetSourceMap_mA859BD33391461D4352AED9D653E772DA5EDECEF_gshared (SteamVR_Action_2_t67EA892F0F7F8FCEB40A807AEF2569E6E8BA4B41 * __this, const RuntimeMethod* method)
{
	{
		// return sourceMap;
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_sourceMap_4();
		return (SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17 *)L_0;
	}
}
// System.Void Valve.VR.SteamVR_Action`2<System.Object,System.Object>::InitializeCopy(System.String,Valve.VR.SteamVR_Action_Source_Map)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_Action_2_InitializeCopy_mA489B7C68C0876ADCD0D5E67FE9A18029E92D2BD_gshared (SteamVR_Action_2_t67EA892F0F7F8FCEB40A807AEF2569E6E8BA4B41 * __this, String_t* ___newActionPath0, SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17 * ___newData1, const RuntimeMethod* method)
{
	{
		// this.actionPath = newActionPath;
		String_t* L_0 = ___newActionPath0;
		((SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *)__this)->set_actionPath_0(L_0);
		// this.sourceMap = (SourceMap)newData;
		SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17 * L_1 = ___newData1;
		__this->set_sourceMap_4(((RuntimeObject *)Castclass((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0))));
		// initialized = true;
		__this->set_initialized_5((bool)1);
		// }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Action`2<System.Object,System.Object>::InitAfterDeserialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_Action_2_InitAfterDeserialize_m97D226DB0464C3D2CF67AC71B588420741A770F6_gshared (SteamVR_Action_2_t67EA892F0F7F8FCEB40A807AEF2569E6E8BA4B41 * __this, const RuntimeMethod* method)
{
	{
		// if (sourceMap != null)
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_sourceMap_4();
		if (!L_0)
		{
			goto IL_0051;
		}
	}
	{
		// if (sourceMap.fullPath != actionPath)
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_sourceMap_4();
		NullCheck((SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17 *)L_1);
		String_t* L_2 = SteamVR_Action_Source_Map_get_fullPath_m59D22AC4A2ADB2B88085A1B676D686350CE1EE2A_inline((SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17 *)L_1, /*hidden argument*/NULL);
		String_t* L_3 = (String_t*)((SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *)__this)->get_actionPath_0();
		bool L_4 = String_op_Inequality_m0BD184A74F453A72376E81CC6CAEE2556B80493E((String_t*)L_2, (String_t*)L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		// needsReinit = true;
		((SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *)__this)->set_needsReinit_1((bool)1);
		// TryNeedsInitData();
		NullCheck((SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *)__this);
		VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String Valve.VR.SteamVR_Action::TryNeedsInitData() */, (SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *)__this);
	}

IL_0038:
	{
		// if (string.IsNullOrEmpty(actionPath))
		String_t* L_5 = (String_t*)((SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *)__this)->get_actionPath_0();
		bool L_6 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229((String_t*)L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0051;
		}
	}
	{
		// sourceMap = null;
		RuntimeObject ** L_7 = (RuntimeObject **)__this->get_address_of_sourceMap_4();
		il2cpp_codegen_initobj(L_7, sizeof(RuntimeObject *));
	}

IL_0051:
	{
		// if (initialized == false)
		bool L_8 = (bool)__this->get_initialized_5();
		if (L_8)
		{
			goto IL_0061;
		}
	}
	{
		// Initialize(false, false);
		NullCheck((SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *)__this);
		VirtActionInvoker2< bool, bool >::Invoke(28 /* System.Void Valve.VR.SteamVR_Action::Initialize(System.Boolean,System.Boolean) */, (SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *)__this, (bool)0, (bool)0);
	}

IL_0061:
	{
		// }
		return;
	}
}
// System.Boolean Valve.VR.SteamVR_Action`2<System.Object,System.Object>::GetActive(Valve.VR.SteamVR_Input_Sources)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SteamVR_Action_2_GetActive_m7DF907A92D63E40C33C3C215F0252A8D24CE58F5_gshared (SteamVR_Action_2_t67EA892F0F7F8FCEB40A807AEF2569E6E8BA4B41 * __this, int32_t ___inputSource0, const RuntimeMethod* method)
{
	{
		// return sourceMap[inputSource].active;
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_sourceMap_4();
		int32_t L_1 = ___inputSource0;
		NullCheck((SteamVR_Action_Source_Map_1_tF6CD4E2DA9FBD867B5F22D6A040FC06A0BFE5CCA *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (SteamVR_Action_Source_Map_1_tF6CD4E2DA9FBD867B5F22D6A040FC06A0BFE5CCA *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((SteamVR_Action_Source_Map_1_tF6CD4E2DA9FBD867B5F22D6A040FC06A0BFE5CCA *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		NullCheck((SteamVR_Action_Source_t9D7428CDE39924074518EE6233D9A4FAB0C33CB0 *)L_2);
		bool L_3 = VirtFuncInvoker0< bool >::Invoke(12 /* System.Boolean Valve.VR.SteamVR_Action_Source::get_active() */, (SteamVR_Action_Source_t9D7428CDE39924074518EE6233D9A4FAB0C33CB0 *)L_2);
		return L_3;
	}
}
// System.Boolean Valve.VR.SteamVR_Action`2<System.Object,System.Object>::GetActiveBinding(Valve.VR.SteamVR_Input_Sources)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SteamVR_Action_2_GetActiveBinding_mFC7A2F8245F306A97AD9F50DF181FA1353309F01_gshared (SteamVR_Action_2_t67EA892F0F7F8FCEB40A807AEF2569E6E8BA4B41 * __this, int32_t ___inputSource0, const RuntimeMethod* method)
{
	{
		// return sourceMap[inputSource].activeBinding;
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_sourceMap_4();
		int32_t L_1 = ___inputSource0;
		NullCheck((SteamVR_Action_Source_Map_1_tF6CD4E2DA9FBD867B5F22D6A040FC06A0BFE5CCA *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (SteamVR_Action_Source_Map_1_tF6CD4E2DA9FBD867B5F22D6A040FC06A0BFE5CCA *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((SteamVR_Action_Source_Map_1_tF6CD4E2DA9FBD867B5F22D6A040FC06A0BFE5CCA *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		NullCheck((SteamVR_Action_Source_t9D7428CDE39924074518EE6233D9A4FAB0C33CB0 *)L_2);
		bool L_3 = VirtFuncInvoker0< bool >::Invoke(13 /* System.Boolean Valve.VR.SteamVR_Action_Source::get_activeBinding() */, (SteamVR_Action_Source_t9D7428CDE39924074518EE6233D9A4FAB0C33CB0 *)L_2);
		return L_3;
	}
}
// System.Boolean Valve.VR.SteamVR_Action`2<System.Object,System.Object>::GetLastActive(Valve.VR.SteamVR_Input_Sources)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SteamVR_Action_2_GetLastActive_mF4C1C84D16CFA174AEBC2F2064CB80962FD01683_gshared (SteamVR_Action_2_t67EA892F0F7F8FCEB40A807AEF2569E6E8BA4B41 * __this, int32_t ___inputSource0, const RuntimeMethod* method)
{
	{
		// return sourceMap[inputSource].lastActive;
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_sourceMap_4();
		int32_t L_1 = ___inputSource0;
		NullCheck((SteamVR_Action_Source_Map_1_tF6CD4E2DA9FBD867B5F22D6A040FC06A0BFE5CCA *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (SteamVR_Action_Source_Map_1_tF6CD4E2DA9FBD867B5F22D6A040FC06A0BFE5CCA *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((SteamVR_Action_Source_Map_1_tF6CD4E2DA9FBD867B5F22D6A040FC06A0BFE5CCA *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		NullCheck((SteamVR_Action_Source_t9D7428CDE39924074518EE6233D9A4FAB0C33CB0 *)L_2);
		bool L_3 = VirtFuncInvoker0< bool >::Invoke(14 /* System.Boolean Valve.VR.SteamVR_Action_Source::get_lastActive() */, (SteamVR_Action_Source_t9D7428CDE39924074518EE6233D9A4FAB0C33CB0 *)L_2);
		return L_3;
	}
}
// System.Boolean Valve.VR.SteamVR_Action`2<System.Object,System.Object>::GetLastActiveBinding(Valve.VR.SteamVR_Input_Sources)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SteamVR_Action_2_GetLastActiveBinding_mCA03B37F2873CE12501C0863F718B72B2C785A16_gshared (SteamVR_Action_2_t67EA892F0F7F8FCEB40A807AEF2569E6E8BA4B41 * __this, int32_t ___inputSource0, const RuntimeMethod* method)
{
	{
		// return sourceMap[inputSource].lastActiveBinding;
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_sourceMap_4();
		int32_t L_1 = ___inputSource0;
		NullCheck((SteamVR_Action_Source_Map_1_tF6CD4E2DA9FBD867B5F22D6A040FC06A0BFE5CCA *)L_0);
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (SteamVR_Action_Source_Map_1_tF6CD4E2DA9FBD867B5F22D6A040FC06A0BFE5CCA *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((SteamVR_Action_Source_Map_1_tF6CD4E2DA9FBD867B5F22D6A040FC06A0BFE5CCA *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		NullCheck((SteamVR_Action_Source_t9D7428CDE39924074518EE6233D9A4FAB0C33CB0 *)L_2);
		bool L_3 = VirtFuncInvoker0< bool >::Invoke(16 /* System.Boolean Valve.VR.SteamVR_Action_Source::get_lastActiveBinding() */, (SteamVR_Action_Source_t9D7428CDE39924074518EE6233D9A4FAB0C33CB0 *)L_2);
		return L_3;
	}
}
// System.Void Valve.VR.SteamVR_Action`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_Action_2__ctor_m6089D5B461038EC08D387C989032991C9A32C153_gshared (SteamVR_Action_2_t67EA892F0F7F8FCEB40A807AEF2569E6E8BA4B41 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SteamVR_Action_2__ctor_m6089D5B461038EC08D387C989032991C9A32C153_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NullCheck((SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734_il2cpp_TypeInfo_var);
		SteamVR_Action__ctor_m04B687E8309910334EE27AB31201F54FEC6A5FB2((SteamVR_Action_t272895E0F3F361D1CB8C4560B42CC28B7861C734 *)__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Valve.VR.SteamVR_Events_Action`1<System.Boolean>::.ctor(Valve.VR.SteamVR_Events_Event`1<T>,UnityEngine.Events.UnityAction`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m6662B7E4E3DED6E43B070C74229DE9EE30F4B58D_gshared (Action_1_t7BE8C5DE3785A61B441BCA376E3ED153DACA36F8 * __this, Event_1_t4AADC7D395DE3D54A428A47B268C47F57231474E * ____event0, UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * ___action1, const RuntimeMethod* method)
{
	{
		// public Action(Event<T> _event, UnityAction<T> action)
		NullCheck((Action_tD381670DCBAE1D2EE90871FC4B0DE139675A28C5 *)__this);
		Action__ctor_m2BC0CECA7D26D71E956BF85BE27A2B75E178D29E((Action_tD381670DCBAE1D2EE90871FC4B0DE139675A28C5 *)__this, /*hidden argument*/NULL);
		// this._event = _event;
		Event_1_t4AADC7D395DE3D54A428A47B268C47F57231474E * L_0 = ____event0;
		__this->set__event_0(L_0);
		// this.action = action;
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_1 = ___action1;
		__this->set_action_1(L_1);
		// }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Events_Action`1<System.Boolean>::Enable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Enable_mB578A8EA86BBD08A448D9F98B9A40D81ACA2A021_gshared (Action_1_t7BE8C5DE3785A61B441BCA376E3ED153DACA36F8 * __this, bool ___enabled0, const RuntimeMethod* method)
{
	{
		// if (enabled)
		bool L_0 = ___enabled0;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// _event.Listen(action);
		Event_1_t4AADC7D395DE3D54A428A47B268C47F57231474E * L_1 = (Event_1_t4AADC7D395DE3D54A428A47B268C47F57231474E *)__this->get__event_0();
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_2 = (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)__this->get_action_1();
		NullCheck((Event_1_t4AADC7D395DE3D54A428A47B268C47F57231474E *)L_1);
		((  void (*) (Event_1_t4AADC7D395DE3D54A428A47B268C47F57231474E *, UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Event_1_t4AADC7D395DE3D54A428A47B268C47F57231474E *)L_1, (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}

IL_0015:
	{
		// _event.Remove(action);
		Event_1_t4AADC7D395DE3D54A428A47B268C47F57231474E * L_3 = (Event_1_t4AADC7D395DE3D54A428A47B268C47F57231474E *)__this->get__event_0();
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_4 = (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)__this->get_action_1();
		NullCheck((Event_1_t4AADC7D395DE3D54A428A47B268C47F57231474E *)L_3);
		((  void (*) (Event_1_t4AADC7D395DE3D54A428A47B268C47F57231474E *, UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((Event_1_t4AADC7D395DE3D54A428A47B268C47F57231474E *)L_3, (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Valve.VR.SteamVR_Events_Action`1<System.Object>::.ctor(Valve.VR.SteamVR_Events_Event`1<T>,UnityEngine.Events.UnityAction`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mBE712CD6F848B665CF41A233F9337D939A5C38C8_gshared (Action_1_t29E2C53255506736CB01BBA55C3C5746F5770755 * __this, Event_1_t79FDA89FF66AB755896EC5231AA906E80D977A8A * ____event0, UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___action1, const RuntimeMethod* method)
{
	{
		// public Action(Event<T> _event, UnityAction<T> action)
		NullCheck((Action_tD381670DCBAE1D2EE90871FC4B0DE139675A28C5 *)__this);
		Action__ctor_m2BC0CECA7D26D71E956BF85BE27A2B75E178D29E((Action_tD381670DCBAE1D2EE90871FC4B0DE139675A28C5 *)__this, /*hidden argument*/NULL);
		// this._event = _event;
		Event_1_t79FDA89FF66AB755896EC5231AA906E80D977A8A * L_0 = ____event0;
		__this->set__event_0(L_0);
		// this.action = action;
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_1 = ___action1;
		__this->set_action_1(L_1);
		// }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Events_Action`1<System.Object>::Enable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Enable_mC53250AD5C762E6DD8188B582F86E52EAA26AF19_gshared (Action_1_t29E2C53255506736CB01BBA55C3C5746F5770755 * __this, bool ___enabled0, const RuntimeMethod* method)
{
	{
		// if (enabled)
		bool L_0 = ___enabled0;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// _event.Listen(action);
		Event_1_t79FDA89FF66AB755896EC5231AA906E80D977A8A * L_1 = (Event_1_t79FDA89FF66AB755896EC5231AA906E80D977A8A *)__this->get__event_0();
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_2 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)__this->get_action_1();
		NullCheck((Event_1_t79FDA89FF66AB755896EC5231AA906E80D977A8A *)L_1);
		((  void (*) (Event_1_t79FDA89FF66AB755896EC5231AA906E80D977A8A *, UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Event_1_t79FDA89FF66AB755896EC5231AA906E80D977A8A *)L_1, (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}

IL_0015:
	{
		// _event.Remove(action);
		Event_1_t79FDA89FF66AB755896EC5231AA906E80D977A8A * L_3 = (Event_1_t79FDA89FF66AB755896EC5231AA906E80D977A8A *)__this->get__event_0();
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_4 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)__this->get_action_1();
		NullCheck((Event_1_t79FDA89FF66AB755896EC5231AA906E80D977A8A *)L_3);
		((  void (*) (Event_1_t79FDA89FF66AB755896EC5231AA906E80D977A8A *, UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((Event_1_t79FDA89FF66AB755896EC5231AA906E80D977A8A *)L_3, (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Valve.VR.SteamVR_Events_Action`1<System.Single>::.ctor(Valve.VR.SteamVR_Events_Event`1<T>,UnityEngine.Events.UnityAction`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mF847A72F5BC06973F2320A275B6C7B9684B40D51_gshared (Action_1_t53C9CFF8020552CED0696CBB0081D23CDBC6A920 * __this, Event_1_t8E75A5B6D579BE45B766939AA5B3B15636CCA77F * ____event0, UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * ___action1, const RuntimeMethod* method)
{
	{
		// public Action(Event<T> _event, UnityAction<T> action)
		NullCheck((Action_tD381670DCBAE1D2EE90871FC4B0DE139675A28C5 *)__this);
		Action__ctor_m2BC0CECA7D26D71E956BF85BE27A2B75E178D29E((Action_tD381670DCBAE1D2EE90871FC4B0DE139675A28C5 *)__this, /*hidden argument*/NULL);
		// this._event = _event;
		Event_1_t8E75A5B6D579BE45B766939AA5B3B15636CCA77F * L_0 = ____event0;
		__this->set__event_0(L_0);
		// this.action = action;
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_1 = ___action1;
		__this->set_action_1(L_1);
		// }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Events_Action`1<System.Single>::Enable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Enable_m04E43ABB87AE91DDEAC97DDB320B1F6FE79E3F03_gshared (Action_1_t53C9CFF8020552CED0696CBB0081D23CDBC6A920 * __this, bool ___enabled0, const RuntimeMethod* method)
{
	{
		// if (enabled)
		bool L_0 = ___enabled0;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// _event.Listen(action);
		Event_1_t8E75A5B6D579BE45B766939AA5B3B15636CCA77F * L_1 = (Event_1_t8E75A5B6D579BE45B766939AA5B3B15636CCA77F *)__this->get__event_0();
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_2 = (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)__this->get_action_1();
		NullCheck((Event_1_t8E75A5B6D579BE45B766939AA5B3B15636CCA77F *)L_1);
		((  void (*) (Event_1_t8E75A5B6D579BE45B766939AA5B3B15636CCA77F *, UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Event_1_t8E75A5B6D579BE45B766939AA5B3B15636CCA77F *)L_1, (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}

IL_0015:
	{
		// _event.Remove(action);
		Event_1_t8E75A5B6D579BE45B766939AA5B3B15636CCA77F * L_3 = (Event_1_t8E75A5B6D579BE45B766939AA5B3B15636CCA77F *)__this->get__event_0();
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_4 = (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)__this->get_action_1();
		NullCheck((Event_1_t8E75A5B6D579BE45B766939AA5B3B15636CCA77F *)L_3);
		((  void (*) (Event_1_t8E75A5B6D579BE45B766939AA5B3B15636CCA77F *, UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((Event_1_t8E75A5B6D579BE45B766939AA5B3B15636CCA77F *)L_3, (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Valve.VR.SteamVR_Events_Action`1<Valve.VR.VREvent_t>::.ctor(Valve.VR.SteamVR_Events_Event`1<T>,UnityEngine.Events.UnityAction`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m9298A3A5A348FC3BAAB912BE094A1D322B154661_gshared (Action_1_t7957910A6AB0A5DE3BAB860D219485F133F00242 * __this, Event_1_t5DB0CDA7FD2616DA8770700B1A982E1A0F052262 * ____event0, UnityAction_1_tB43C1CF1D8DCDDE3590ED959587DB9809C1294BF * ___action1, const RuntimeMethod* method)
{
	{
		// public Action(Event<T> _event, UnityAction<T> action)
		NullCheck((Action_tD381670DCBAE1D2EE90871FC4B0DE139675A28C5 *)__this);
		Action__ctor_m2BC0CECA7D26D71E956BF85BE27A2B75E178D29E((Action_tD381670DCBAE1D2EE90871FC4B0DE139675A28C5 *)__this, /*hidden argument*/NULL);
		// this._event = _event;
		Event_1_t5DB0CDA7FD2616DA8770700B1A982E1A0F052262 * L_0 = ____event0;
		__this->set__event_0(L_0);
		// this.action = action;
		UnityAction_1_tB43C1CF1D8DCDDE3590ED959587DB9809C1294BF * L_1 = ___action1;
		__this->set_action_1(L_1);
		// }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Events_Action`1<Valve.VR.VREvent_t>::Enable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Enable_m16B8DF3CF62A5CD9560F596B5732CA74F0C6B87E_gshared (Action_1_t7957910A6AB0A5DE3BAB860D219485F133F00242 * __this, bool ___enabled0, const RuntimeMethod* method)
{
	{
		// if (enabled)
		bool L_0 = ___enabled0;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// _event.Listen(action);
		Event_1_t5DB0CDA7FD2616DA8770700B1A982E1A0F052262 * L_1 = (Event_1_t5DB0CDA7FD2616DA8770700B1A982E1A0F052262 *)__this->get__event_0();
		UnityAction_1_tB43C1CF1D8DCDDE3590ED959587DB9809C1294BF * L_2 = (UnityAction_1_tB43C1CF1D8DCDDE3590ED959587DB9809C1294BF *)__this->get_action_1();
		NullCheck((Event_1_t5DB0CDA7FD2616DA8770700B1A982E1A0F052262 *)L_1);
		((  void (*) (Event_1_t5DB0CDA7FD2616DA8770700B1A982E1A0F052262 *, UnityAction_1_tB43C1CF1D8DCDDE3590ED959587DB9809C1294BF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Event_1_t5DB0CDA7FD2616DA8770700B1A982E1A0F052262 *)L_1, (UnityAction_1_tB43C1CF1D8DCDDE3590ED959587DB9809C1294BF *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}

IL_0015:
	{
		// _event.Remove(action);
		Event_1_t5DB0CDA7FD2616DA8770700B1A982E1A0F052262 * L_3 = (Event_1_t5DB0CDA7FD2616DA8770700B1A982E1A0F052262 *)__this->get__event_0();
		UnityAction_1_tB43C1CF1D8DCDDE3590ED959587DB9809C1294BF * L_4 = (UnityAction_1_tB43C1CF1D8DCDDE3590ED959587DB9809C1294BF *)__this->get_action_1();
		NullCheck((Event_1_t5DB0CDA7FD2616DA8770700B1A982E1A0F052262 *)L_3);
		((  void (*) (Event_1_t5DB0CDA7FD2616DA8770700B1A982E1A0F052262 *, UnityAction_1_tB43C1CF1D8DCDDE3590ED959587DB9809C1294BF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((Event_1_t5DB0CDA7FD2616DA8770700B1A982E1A0F052262 *)L_3, (UnityAction_1_tB43C1CF1D8DCDDE3590ED959587DB9809C1294BF *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Valve.VR.SteamVR_Events_Action`2<System.Int32,System.Boolean>::.ctor(Valve.VR.SteamVR_Events_Event`2<T0,T1>,UnityEngine.Events.UnityAction`2<T0,T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m82C5DC23BB7873B54B857B2A3ED33B6D42A94B0F_gshared (Action_2_tA0C6E11F5C5B3C71429320D46B51A09F509B81D6 * __this, Event_2_t5D411D24E2836A52F7D2998B747522450DB2D3F5 * ____event0, UnityAction_2_tC6757BFFAD492D812C4E332DCDD97778B17CACAF * ___action1, const RuntimeMethod* method)
{
	{
		// public Action(Event<T0, T1> _event, UnityAction<T0, T1> action)
		NullCheck((Action_tD381670DCBAE1D2EE90871FC4B0DE139675A28C5 *)__this);
		Action__ctor_m2BC0CECA7D26D71E956BF85BE27A2B75E178D29E((Action_tD381670DCBAE1D2EE90871FC4B0DE139675A28C5 *)__this, /*hidden argument*/NULL);
		// this._event = _event;
		Event_2_t5D411D24E2836A52F7D2998B747522450DB2D3F5 * L_0 = ____event0;
		__this->set__event_0(L_0);
		// this.action = action;
		UnityAction_2_tC6757BFFAD492D812C4E332DCDD97778B17CACAF * L_1 = ___action1;
		__this->set_action_1(L_1);
		// }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Events_Action`2<System.Int32,System.Boolean>::Enable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2_Enable_m27E47C43FD30ED3689821E6352AC3458D79E0E30_gshared (Action_2_tA0C6E11F5C5B3C71429320D46B51A09F509B81D6 * __this, bool ___enabled0, const RuntimeMethod* method)
{
	{
		// if (enabled)
		bool L_0 = ___enabled0;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// _event.Listen(action);
		Event_2_t5D411D24E2836A52F7D2998B747522450DB2D3F5 * L_1 = (Event_2_t5D411D24E2836A52F7D2998B747522450DB2D3F5 *)__this->get__event_0();
		UnityAction_2_tC6757BFFAD492D812C4E332DCDD97778B17CACAF * L_2 = (UnityAction_2_tC6757BFFAD492D812C4E332DCDD97778B17CACAF *)__this->get_action_1();
		NullCheck((Event_2_t5D411D24E2836A52F7D2998B747522450DB2D3F5 *)L_1);
		((  void (*) (Event_2_t5D411D24E2836A52F7D2998B747522450DB2D3F5 *, UnityAction_2_tC6757BFFAD492D812C4E332DCDD97778B17CACAF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Event_2_t5D411D24E2836A52F7D2998B747522450DB2D3F5 *)L_1, (UnityAction_2_tC6757BFFAD492D812C4E332DCDD97778B17CACAF *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}

IL_0015:
	{
		// _event.Remove(action);
		Event_2_t5D411D24E2836A52F7D2998B747522450DB2D3F5 * L_3 = (Event_2_t5D411D24E2836A52F7D2998B747522450DB2D3F5 *)__this->get__event_0();
		UnityAction_2_tC6757BFFAD492D812C4E332DCDD97778B17CACAF * L_4 = (UnityAction_2_tC6757BFFAD492D812C4E332DCDD97778B17CACAF *)__this->get_action_1();
		NullCheck((Event_2_t5D411D24E2836A52F7D2998B747522450DB2D3F5 *)L_3);
		((  void (*) (Event_2_t5D411D24E2836A52F7D2998B747522450DB2D3F5 *, UnityAction_2_tC6757BFFAD492D812C4E332DCDD97778B17CACAF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((Event_2_t5D411D24E2836A52F7D2998B747522450DB2D3F5 *)L_3, (UnityAction_2_tC6757BFFAD492D812C4E332DCDD97778B17CACAF *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Valve.VR.SteamVR_Events_Action`2<System.Object,System.Boolean>::.ctor(Valve.VR.SteamVR_Events_Event`2<T0,T1>,UnityEngine.Events.UnityAction`2<T0,T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m0D28DF3E9B2A2C3C56801B503749B561A943C048_gshared (Action_2_tC709BD29B3F3F01E49C1E9FAE364DB63476C086A * __this, Event_2_t9B8C6B23D8417540E5908C6FE592803B5C52D62E * ____event0, UnityAction_2_tAC99DEACCF9A9F69F176A7F1DBEE5E1A24D9816D * ___action1, const RuntimeMethod* method)
{
	{
		// public Action(Event<T0, T1> _event, UnityAction<T0, T1> action)
		NullCheck((Action_tD381670DCBAE1D2EE90871FC4B0DE139675A28C5 *)__this);
		Action__ctor_m2BC0CECA7D26D71E956BF85BE27A2B75E178D29E((Action_tD381670DCBAE1D2EE90871FC4B0DE139675A28C5 *)__this, /*hidden argument*/NULL);
		// this._event = _event;
		Event_2_t9B8C6B23D8417540E5908C6FE592803B5C52D62E * L_0 = ____event0;
		__this->set__event_0(L_0);
		// this.action = action;
		UnityAction_2_tAC99DEACCF9A9F69F176A7F1DBEE5E1A24D9816D * L_1 = ___action1;
		__this->set_action_1(L_1);
		// }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Events_Action`2<System.Object,System.Boolean>::Enable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2_Enable_mC1289D89FDD6178B95AD5236450AA59EA8DA4CCF_gshared (Action_2_tC709BD29B3F3F01E49C1E9FAE364DB63476C086A * __this, bool ___enabled0, const RuntimeMethod* method)
{
	{
		// if (enabled)
		bool L_0 = ___enabled0;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// _event.Listen(action);
		Event_2_t9B8C6B23D8417540E5908C6FE592803B5C52D62E * L_1 = (Event_2_t9B8C6B23D8417540E5908C6FE592803B5C52D62E *)__this->get__event_0();
		UnityAction_2_tAC99DEACCF9A9F69F176A7F1DBEE5E1A24D9816D * L_2 = (UnityAction_2_tAC99DEACCF9A9F69F176A7F1DBEE5E1A24D9816D *)__this->get_action_1();
		NullCheck((Event_2_t9B8C6B23D8417540E5908C6FE592803B5C52D62E *)L_1);
		((  void (*) (Event_2_t9B8C6B23D8417540E5908C6FE592803B5C52D62E *, UnityAction_2_tAC99DEACCF9A9F69F176A7F1DBEE5E1A24D9816D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Event_2_t9B8C6B23D8417540E5908C6FE592803B5C52D62E *)L_1, (UnityAction_2_tAC99DEACCF9A9F69F176A7F1DBEE5E1A24D9816D *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}

IL_0015:
	{
		// _event.Remove(action);
		Event_2_t9B8C6B23D8417540E5908C6FE592803B5C52D62E * L_3 = (Event_2_t9B8C6B23D8417540E5908C6FE592803B5C52D62E *)__this->get__event_0();
		UnityAction_2_tAC99DEACCF9A9F69F176A7F1DBEE5E1A24D9816D * L_4 = (UnityAction_2_tAC99DEACCF9A9F69F176A7F1DBEE5E1A24D9816D *)__this->get_action_1();
		NullCheck((Event_2_t9B8C6B23D8417540E5908C6FE592803B5C52D62E *)L_3);
		((  void (*) (Event_2_t9B8C6B23D8417540E5908C6FE592803B5C52D62E *, UnityAction_2_tAC99DEACCF9A9F69F176A7F1DBEE5E1A24D9816D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((Event_2_t9B8C6B23D8417540E5908C6FE592803B5C52D62E *)L_3, (UnityAction_2_tAC99DEACCF9A9F69F176A7F1DBEE5E1A24D9816D *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Valve.VR.SteamVR_Events_Action`2<System.Object,System.Object>::.ctor(Valve.VR.SteamVR_Events_Event`2<T0,T1>,UnityEngine.Events.UnityAction`2<T0,T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_mB3512977540F87D896FA2A2E143AB623A3B7B60E_gshared (Action_2_t4EB83A128D36A66F70839A9D3BC6A86785F3E92E * __this, Event_2_t04FA8831B303A3F77AF8B7E1B8C05E9562E771AF * ____event0, UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * ___action1, const RuntimeMethod* method)
{
	{
		// public Action(Event<T0, T1> _event, UnityAction<T0, T1> action)
		NullCheck((Action_tD381670DCBAE1D2EE90871FC4B0DE139675A28C5 *)__this);
		Action__ctor_m2BC0CECA7D26D71E956BF85BE27A2B75E178D29E((Action_tD381670DCBAE1D2EE90871FC4B0DE139675A28C5 *)__this, /*hidden argument*/NULL);
		// this._event = _event;
		Event_2_t04FA8831B303A3F77AF8B7E1B8C05E9562E771AF * L_0 = ____event0;
		__this->set__event_0(L_0);
		// this.action = action;
		UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * L_1 = ___action1;
		__this->set_action_1(L_1);
		// }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Events_Action`2<System.Object,System.Object>::Enable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2_Enable_m254E42EC6D478C7B7169E8E9B49D94515DF9CE50_gshared (Action_2_t4EB83A128D36A66F70839A9D3BC6A86785F3E92E * __this, bool ___enabled0, const RuntimeMethod* method)
{
	{
		// if (enabled)
		bool L_0 = ___enabled0;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// _event.Listen(action);
		Event_2_t04FA8831B303A3F77AF8B7E1B8C05E9562E771AF * L_1 = (Event_2_t04FA8831B303A3F77AF8B7E1B8C05E9562E771AF *)__this->get__event_0();
		UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * L_2 = (UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 *)__this->get_action_1();
		NullCheck((Event_2_t04FA8831B303A3F77AF8B7E1B8C05E9562E771AF *)L_1);
		((  void (*) (Event_2_t04FA8831B303A3F77AF8B7E1B8C05E9562E771AF *, UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Event_2_t04FA8831B303A3F77AF8B7E1B8C05E9562E771AF *)L_1, (UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}

IL_0015:
	{
		// _event.Remove(action);
		Event_2_t04FA8831B303A3F77AF8B7E1B8C05E9562E771AF * L_3 = (Event_2_t04FA8831B303A3F77AF8B7E1B8C05E9562E771AF *)__this->get__event_0();
		UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * L_4 = (UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 *)__this->get_action_1();
		NullCheck((Event_2_t04FA8831B303A3F77AF8B7E1B8C05E9562E771AF *)L_3);
		((  void (*) (Event_2_t04FA8831B303A3F77AF8B7E1B8C05E9562E771AF *, UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((Event_2_t04FA8831B303A3F77AF8B7E1B8C05E9562E771AF *)L_3, (UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Valve.VR.SteamVR_Events_Action`3<System.Object,System.Object,System.Object>::.ctor(Valve.VR.SteamVR_Events_Event`3<T0,T1,T2>,UnityEngine.Events.UnityAction`3<T0,T1,T2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_3__ctor_m8F347AFB61EAAF39E8799ED31EA39F6096C1B5EB_gshared (Action_3_t927B7E19334E790BC03E72B8B01289B581E7F6ED * __this, Event_3_t35D9D60B1134BEB59186505A31E7F27F1AD4A8E6 * ____event0, UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * ___action1, const RuntimeMethod* method)
{
	{
		// public Action(Event<T0, T1, T2> _event, UnityAction<T0, T1, T2> action)
		NullCheck((Action_tD381670DCBAE1D2EE90871FC4B0DE139675A28C5 *)__this);
		Action__ctor_m2BC0CECA7D26D71E956BF85BE27A2B75E178D29E((Action_tD381670DCBAE1D2EE90871FC4B0DE139675A28C5 *)__this, /*hidden argument*/NULL);
		// this._event = _event;
		Event_3_t35D9D60B1134BEB59186505A31E7F27F1AD4A8E6 * L_0 = ____event0;
		__this->set__event_0(L_0);
		// this.action = action;
		UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * L_1 = ___action1;
		__this->set_action_1(L_1);
		// }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Events_Action`3<System.Object,System.Object,System.Object>::Enable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_3_Enable_m14EDEB271FB42EE42F9EA64CB831F364F45DD628_gshared (Action_3_t927B7E19334E790BC03E72B8B01289B581E7F6ED * __this, bool ___enabled0, const RuntimeMethod* method)
{
	{
		// if (enabled)
		bool L_0 = ___enabled0;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// _event.Listen(action);
		Event_3_t35D9D60B1134BEB59186505A31E7F27F1AD4A8E6 * L_1 = (Event_3_t35D9D60B1134BEB59186505A31E7F27F1AD4A8E6 *)__this->get__event_0();
		UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * L_2 = (UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 *)__this->get_action_1();
		NullCheck((Event_3_t35D9D60B1134BEB59186505A31E7F27F1AD4A8E6 *)L_1);
		((  void (*) (Event_3_t35D9D60B1134BEB59186505A31E7F27F1AD4A8E6 *, UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Event_3_t35D9D60B1134BEB59186505A31E7F27F1AD4A8E6 *)L_1, (UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}

IL_0015:
	{
		// _event.Remove(action);
		Event_3_t35D9D60B1134BEB59186505A31E7F27F1AD4A8E6 * L_3 = (Event_3_t35D9D60B1134BEB59186505A31E7F27F1AD4A8E6 *)__this->get__event_0();
		UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * L_4 = (UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 *)__this->get_action_1();
		NullCheck((Event_3_t35D9D60B1134BEB59186505A31E7F27F1AD4A8E6 *)L_3);
		((  void (*) (Event_3_t35D9D60B1134BEB59186505A31E7F27F1AD4A8E6 *, UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((Event_3_t35D9D60B1134BEB59186505A31E7F27F1AD4A8E6 *)L_3, (UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Valve.VR.SteamVR_Events_Action`3<UnityEngine.Color,System.Single,System.Boolean>::.ctor(Valve.VR.SteamVR_Events_Event`3<T0,T1,T2>,UnityEngine.Events.UnityAction`3<T0,T1,T2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_3__ctor_m059A261DFFEAF445AF5EDF0E7BD76CE67BE5BB82_gshared (Action_3_t7D8734BBE6B7EB1F779A2546951827ACF04C9152 * __this, Event_3_t5541668D2F9E46098EA2A527B35E4D3BD6D8450B * ____event0, UnityAction_3_tBB281EE324EEF9D6CD3F2B8B7C3695D8EB743EEB * ___action1, const RuntimeMethod* method)
{
	{
		// public Action(Event<T0, T1, T2> _event, UnityAction<T0, T1, T2> action)
		NullCheck((Action_tD381670DCBAE1D2EE90871FC4B0DE139675A28C5 *)__this);
		Action__ctor_m2BC0CECA7D26D71E956BF85BE27A2B75E178D29E((Action_tD381670DCBAE1D2EE90871FC4B0DE139675A28C5 *)__this, /*hidden argument*/NULL);
		// this._event = _event;
		Event_3_t5541668D2F9E46098EA2A527B35E4D3BD6D8450B * L_0 = ____event0;
		__this->set__event_0(L_0);
		// this.action = action;
		UnityAction_3_tBB281EE324EEF9D6CD3F2B8B7C3695D8EB743EEB * L_1 = ___action1;
		__this->set_action_1(L_1);
		// }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Events_Action`3<UnityEngine.Color,System.Single,System.Boolean>::Enable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_3_Enable_mE3D620102C53B37A7C6206BF6912DE7AB7FD63AF_gshared (Action_3_t7D8734BBE6B7EB1F779A2546951827ACF04C9152 * __this, bool ___enabled0, const RuntimeMethod* method)
{
	{
		// if (enabled)
		bool L_0 = ___enabled0;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// _event.Listen(action);
		Event_3_t5541668D2F9E46098EA2A527B35E4D3BD6D8450B * L_1 = (Event_3_t5541668D2F9E46098EA2A527B35E4D3BD6D8450B *)__this->get__event_0();
		UnityAction_3_tBB281EE324EEF9D6CD3F2B8B7C3695D8EB743EEB * L_2 = (UnityAction_3_tBB281EE324EEF9D6CD3F2B8B7C3695D8EB743EEB *)__this->get_action_1();
		NullCheck((Event_3_t5541668D2F9E46098EA2A527B35E4D3BD6D8450B *)L_1);
		((  void (*) (Event_3_t5541668D2F9E46098EA2A527B35E4D3BD6D8450B *, UnityAction_3_tBB281EE324EEF9D6CD3F2B8B7C3695D8EB743EEB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Event_3_t5541668D2F9E46098EA2A527B35E4D3BD6D8450B *)L_1, (UnityAction_3_tBB281EE324EEF9D6CD3F2B8B7C3695D8EB743EEB *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}

IL_0015:
	{
		// _event.Remove(action);
		Event_3_t5541668D2F9E46098EA2A527B35E4D3BD6D8450B * L_3 = (Event_3_t5541668D2F9E46098EA2A527B35E4D3BD6D8450B *)__this->get__event_0();
		UnityAction_3_tBB281EE324EEF9D6CD3F2B8B7C3695D8EB743EEB * L_4 = (UnityAction_3_tBB281EE324EEF9D6CD3F2B8B7C3695D8EB743EEB *)__this->get_action_1();
		NullCheck((Event_3_t5541668D2F9E46098EA2A527B35E4D3BD6D8450B *)L_3);
		((  void (*) (Event_3_t5541668D2F9E46098EA2A527B35E4D3BD6D8450B *, UnityAction_3_tBB281EE324EEF9D6CD3F2B8B7C3695D8EB743EEB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((Event_3_t5541668D2F9E46098EA2A527B35E4D3BD6D8450B *)L_3, (UnityAction_3_tBB281EE324EEF9D6CD3F2B8B7C3695D8EB743EEB *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Valve.VR.SteamVR_Events_Event`1<System.Boolean>::Listen(UnityEngine.Events.UnityAction`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_1_Listen_m0ED346E5A9AA66D0C0722DEE360502FFA384E4F8_gshared (Event_1_t4AADC7D395DE3D54A428A47B268C47F57231474E * __this, UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * ___action0, const RuntimeMethod* method)
{
	{
		// public void Listen(UnityAction<T> action) { this.AddListener(action); }
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_0 = ___action0;
		NullCheck((UnityEvent_1_tE1EF042798523847EEBB2A12FA37C4003C1B1299 *)__this);
		((  void (*) (UnityEvent_1_tE1EF042798523847EEBB2A12FA37C4003C1B1299 *, UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((UnityEvent_1_tE1EF042798523847EEBB2A12FA37C4003C1B1299 *)__this, (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// public void Listen(UnityAction<T> action) { this.AddListener(action); }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Events_Event`1<System.Boolean>::Remove(UnityEngine.Events.UnityAction`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_1_Remove_m7B21C1890F2D26B45907621EE19E430ABF61339E_gshared (Event_1_t4AADC7D395DE3D54A428A47B268C47F57231474E * __this, UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * ___action0, const RuntimeMethod* method)
{
	{
		// public void Remove(UnityAction<T> action) { this.RemoveListener(action); }
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_0 = ___action0;
		NullCheck((UnityEvent_1_tE1EF042798523847EEBB2A12FA37C4003C1B1299 *)__this);
		((  void (*) (UnityEvent_1_tE1EF042798523847EEBB2A12FA37C4003C1B1299 *, UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((UnityEvent_1_tE1EF042798523847EEBB2A12FA37C4003C1B1299 *)__this, (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		// public void Remove(UnityAction<T> action) { this.RemoveListener(action); }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Events_Event`1<System.Boolean>::Send(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_1_Send_m7F40F6699A587DA4A3286987204F82CAE77AD991_gshared (Event_1_t4AADC7D395DE3D54A428A47B268C47F57231474E * __this, bool ___arg00, const RuntimeMethod* method)
{
	{
		// public void Send(T arg0) { this.Invoke(arg0); }
		bool L_0 = ___arg00;
		NullCheck((UnityEvent_1_tE1EF042798523847EEBB2A12FA37C4003C1B1299 *)__this);
		((  void (*) (UnityEvent_1_tE1EF042798523847EEBB2A12FA37C4003C1B1299 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((UnityEvent_1_tE1EF042798523847EEBB2A12FA37C4003C1B1299 *)__this, (bool)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		// public void Send(T arg0) { this.Invoke(arg0); }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Events_Event`1<System.Boolean>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_1__ctor_m3D5CB124154ABADCF1502E32D830D73AFADE0321_gshared (Event_1_t4AADC7D395DE3D54A428A47B268C47F57231474E * __this, const RuntimeMethod* method)
{
	{
		NullCheck((UnityEvent_1_tE1EF042798523847EEBB2A12FA37C4003C1B1299 *)__this);
		((  void (*) (UnityEvent_1_tE1EF042798523847EEBB2A12FA37C4003C1B1299 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((UnityEvent_1_tE1EF042798523847EEBB2A12FA37C4003C1B1299 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Valve.VR.SteamVR_Events_Event`1<System.Object>::Listen(UnityEngine.Events.UnityAction`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_1_Listen_m182CC06662C5452C1E237913E22675F17022B52D_gshared (Event_1_t79FDA89FF66AB755896EC5231AA906E80D977A8A * __this, UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___action0, const RuntimeMethod* method)
{
	{
		// public void Listen(UnityAction<T> action) { this.AddListener(action); }
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_0 = ___action0;
		NullCheck((UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D *)__this);
		((  void (*) (UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D *, UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D *)__this, (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// public void Listen(UnityAction<T> action) { this.AddListener(action); }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Events_Event`1<System.Object>::Remove(UnityEngine.Events.UnityAction`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_1_Remove_mD2DDA1BA594F517540282348023CC2BDEE9BF058_gshared (Event_1_t79FDA89FF66AB755896EC5231AA906E80D977A8A * __this, UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___action0, const RuntimeMethod* method)
{
	{
		// public void Remove(UnityAction<T> action) { this.RemoveListener(action); }
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_0 = ___action0;
		NullCheck((UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D *)__this);
		((  void (*) (UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D *, UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D *)__this, (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		// public void Remove(UnityAction<T> action) { this.RemoveListener(action); }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Events_Event`1<System.Object>::Send(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_1_Send_m18A387A4E593A17F7945F99C8394E60E37FBA0C1_gshared (Event_1_t79FDA89FF66AB755896EC5231AA906E80D977A8A * __this, RuntimeObject * ___arg00, const RuntimeMethod* method)
{
	{
		// public void Send(T arg0) { this.Invoke(arg0); }
		RuntimeObject * L_0 = ___arg00;
		NullCheck((UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D *)__this);
		((  void (*) (UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D *)__this, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		// public void Send(T arg0) { this.Invoke(arg0); }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Events_Event`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_1__ctor_mC7471F4D8DF06F1E012EC714012E1D029A2BC4D1_gshared (Event_1_t79FDA89FF66AB755896EC5231AA906E80D977A8A * __this, const RuntimeMethod* method)
{
	{
		NullCheck((UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D *)__this);
		((  void (*) (UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Valve.VR.SteamVR_Events_Event`1<System.Single>::Listen(UnityEngine.Events.UnityAction`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_1_Listen_mFF3DE25B8D7AA25C2CB1F4E42735F6525AE7D2EA_gshared (Event_1_t8E75A5B6D579BE45B766939AA5B3B15636CCA77F * __this, UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * ___action0, const RuntimeMethod* method)
{
	{
		// public void Listen(UnityAction<T> action) { this.AddListener(action); }
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_0 = ___action0;
		NullCheck((UnityEvent_1_t655F4ECDA62E804A34CC8737AC30B836ABD3D2DA *)__this);
		((  void (*) (UnityEvent_1_t655F4ECDA62E804A34CC8737AC30B836ABD3D2DA *, UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((UnityEvent_1_t655F4ECDA62E804A34CC8737AC30B836ABD3D2DA *)__this, (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// public void Listen(UnityAction<T> action) { this.AddListener(action); }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Events_Event`1<System.Single>::Remove(UnityEngine.Events.UnityAction`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_1_Remove_m1408EE641B8BD49181A9164F7AABD041F9ABCF02_gshared (Event_1_t8E75A5B6D579BE45B766939AA5B3B15636CCA77F * __this, UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * ___action0, const RuntimeMethod* method)
{
	{
		// public void Remove(UnityAction<T> action) { this.RemoveListener(action); }
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_0 = ___action0;
		NullCheck((UnityEvent_1_t655F4ECDA62E804A34CC8737AC30B836ABD3D2DA *)__this);
		((  void (*) (UnityEvent_1_t655F4ECDA62E804A34CC8737AC30B836ABD3D2DA *, UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((UnityEvent_1_t655F4ECDA62E804A34CC8737AC30B836ABD3D2DA *)__this, (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		// public void Remove(UnityAction<T> action) { this.RemoveListener(action); }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Events_Event`1<System.Single>::Send(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_1_Send_m49840613F41373F7F3AC3E9148C522B48B158B91_gshared (Event_1_t8E75A5B6D579BE45B766939AA5B3B15636CCA77F * __this, float ___arg00, const RuntimeMethod* method)
{
	{
		// public void Send(T arg0) { this.Invoke(arg0); }
		float L_0 = ___arg00;
		NullCheck((UnityEvent_1_t655F4ECDA62E804A34CC8737AC30B836ABD3D2DA *)__this);
		((  void (*) (UnityEvent_1_t655F4ECDA62E804A34CC8737AC30B836ABD3D2DA *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((UnityEvent_1_t655F4ECDA62E804A34CC8737AC30B836ABD3D2DA *)__this, (float)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		// public void Send(T arg0) { this.Invoke(arg0); }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Events_Event`1<System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_1__ctor_mF2107E81A7516B16F731C3E05C47FA3DDAFF81C2_gshared (Event_1_t8E75A5B6D579BE45B766939AA5B3B15636CCA77F * __this, const RuntimeMethod* method)
{
	{
		NullCheck((UnityEvent_1_t655F4ECDA62E804A34CC8737AC30B836ABD3D2DA *)__this);
		((  void (*) (UnityEvent_1_t655F4ECDA62E804A34CC8737AC30B836ABD3D2DA *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((UnityEvent_1_t655F4ECDA62E804A34CC8737AC30B836ABD3D2DA *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Valve.VR.SteamVR_Events_Event`1<Valve.VR.VREvent_t>::Listen(UnityEngine.Events.UnityAction`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_1_Listen_m8A8805251599A69638ED15A0D6BE0714AA0A69EF_gshared (Event_1_t5DB0CDA7FD2616DA8770700B1A982E1A0F052262 * __this, UnityAction_1_tB43C1CF1D8DCDDE3590ED959587DB9809C1294BF * ___action0, const RuntimeMethod* method)
{
	{
		// public void Listen(UnityAction<T> action) { this.AddListener(action); }
		UnityAction_1_tB43C1CF1D8DCDDE3590ED959587DB9809C1294BF * L_0 = ___action0;
		NullCheck((UnityEvent_1_t7E9560B75945B332DA5807C6061708BBAF5F7307 *)__this);
		((  void (*) (UnityEvent_1_t7E9560B75945B332DA5807C6061708BBAF5F7307 *, UnityAction_1_tB43C1CF1D8DCDDE3590ED959587DB9809C1294BF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((UnityEvent_1_t7E9560B75945B332DA5807C6061708BBAF5F7307 *)__this, (UnityAction_1_tB43C1CF1D8DCDDE3590ED959587DB9809C1294BF *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// public void Listen(UnityAction<T> action) { this.AddListener(action); }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Events_Event`1<Valve.VR.VREvent_t>::Remove(UnityEngine.Events.UnityAction`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_1_Remove_m8F5B244890D81ADF723423B17F09C474EC362C4E_gshared (Event_1_t5DB0CDA7FD2616DA8770700B1A982E1A0F052262 * __this, UnityAction_1_tB43C1CF1D8DCDDE3590ED959587DB9809C1294BF * ___action0, const RuntimeMethod* method)
{
	{
		// public void Remove(UnityAction<T> action) { this.RemoveListener(action); }
		UnityAction_1_tB43C1CF1D8DCDDE3590ED959587DB9809C1294BF * L_0 = ___action0;
		NullCheck((UnityEvent_1_t7E9560B75945B332DA5807C6061708BBAF5F7307 *)__this);
		((  void (*) (UnityEvent_1_t7E9560B75945B332DA5807C6061708BBAF5F7307 *, UnityAction_1_tB43C1CF1D8DCDDE3590ED959587DB9809C1294BF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((UnityEvent_1_t7E9560B75945B332DA5807C6061708BBAF5F7307 *)__this, (UnityAction_1_tB43C1CF1D8DCDDE3590ED959587DB9809C1294BF *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		// public void Remove(UnityAction<T> action) { this.RemoveListener(action); }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Events_Event`1<Valve.VR.VREvent_t>::Send(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_1_Send_mAA4D099B8929F06F98DE821595AC09C11C65FFEA_gshared (Event_1_t5DB0CDA7FD2616DA8770700B1A982E1A0F052262 * __this, VREvent_t_t4F330058D4B87093309E1043D17F8A3DB1BA925C  ___arg00, const RuntimeMethod* method)
{
	{
		// public void Send(T arg0) { this.Invoke(arg0); }
		VREvent_t_t4F330058D4B87093309E1043D17F8A3DB1BA925C  L_0 = ___arg00;
		NullCheck((UnityEvent_1_t7E9560B75945B332DA5807C6061708BBAF5F7307 *)__this);
		((  void (*) (UnityEvent_1_t7E9560B75945B332DA5807C6061708BBAF5F7307 *, VREvent_t_t4F330058D4B87093309E1043D17F8A3DB1BA925C , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((UnityEvent_1_t7E9560B75945B332DA5807C6061708BBAF5F7307 *)__this, (VREvent_t_t4F330058D4B87093309E1043D17F8A3DB1BA925C )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		// public void Send(T arg0) { this.Invoke(arg0); }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Events_Event`1<Valve.VR.VREvent_t>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_1__ctor_m9E9A465B87FE935C3C519DC846D4BBCFD88EE39F_gshared (Event_1_t5DB0CDA7FD2616DA8770700B1A982E1A0F052262 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((UnityEvent_1_t7E9560B75945B332DA5807C6061708BBAF5F7307 *)__this);
		((  void (*) (UnityEvent_1_t7E9560B75945B332DA5807C6061708BBAF5F7307 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((UnityEvent_1_t7E9560B75945B332DA5807C6061708BBAF5F7307 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Valve.VR.SteamVR_Events_Event`2<System.Int32,System.Boolean>::Listen(UnityEngine.Events.UnityAction`2<T0,T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_2_Listen_m54EB4A16B56E3E34CDCAEF86661AAA054F83676E_gshared (Event_2_t5D411D24E2836A52F7D2998B747522450DB2D3F5 * __this, UnityAction_2_tC6757BFFAD492D812C4E332DCDD97778B17CACAF * ___action0, const RuntimeMethod* method)
{
	{
		// public void Listen(UnityAction<T0, T1> action) { this.AddListener(action); }
		UnityAction_2_tC6757BFFAD492D812C4E332DCDD97778B17CACAF * L_0 = ___action0;
		NullCheck((UnityEvent_2_t6FFBDA794A6AA7AF9FE8BA1C95AE94A43530E0A9 *)__this);
		((  void (*) (UnityEvent_2_t6FFBDA794A6AA7AF9FE8BA1C95AE94A43530E0A9 *, UnityAction_2_tC6757BFFAD492D812C4E332DCDD97778B17CACAF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((UnityEvent_2_t6FFBDA794A6AA7AF9FE8BA1C95AE94A43530E0A9 *)__this, (UnityAction_2_tC6757BFFAD492D812C4E332DCDD97778B17CACAF *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// public void Listen(UnityAction<T0, T1> action) { this.AddListener(action); }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Events_Event`2<System.Int32,System.Boolean>::Remove(UnityEngine.Events.UnityAction`2<T0,T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_2_Remove_mE311F399FCED3A196505F0F108CF338088A11B4A_gshared (Event_2_t5D411D24E2836A52F7D2998B747522450DB2D3F5 * __this, UnityAction_2_tC6757BFFAD492D812C4E332DCDD97778B17CACAF * ___action0, const RuntimeMethod* method)
{
	{
		// public void Remove(UnityAction<T0, T1> action) { this.RemoveListener(action); }
		UnityAction_2_tC6757BFFAD492D812C4E332DCDD97778B17CACAF * L_0 = ___action0;
		NullCheck((UnityEvent_2_t6FFBDA794A6AA7AF9FE8BA1C95AE94A43530E0A9 *)__this);
		((  void (*) (UnityEvent_2_t6FFBDA794A6AA7AF9FE8BA1C95AE94A43530E0A9 *, UnityAction_2_tC6757BFFAD492D812C4E332DCDD97778B17CACAF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((UnityEvent_2_t6FFBDA794A6AA7AF9FE8BA1C95AE94A43530E0A9 *)__this, (UnityAction_2_tC6757BFFAD492D812C4E332DCDD97778B17CACAF *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		// public void Remove(UnityAction<T0, T1> action) { this.RemoveListener(action); }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Events_Event`2<System.Int32,System.Boolean>::Send(T0,T1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_2_Send_m17149AE73C64F539E355BF34F8C2F05537E3FD0E_gshared (Event_2_t5D411D24E2836A52F7D2998B747522450DB2D3F5 * __this, int32_t ___arg00, bool ___arg11, const RuntimeMethod* method)
{
	{
		// public void Send(T0 arg0, T1 arg1) { this.Invoke(arg0, arg1); }
		int32_t L_0 = ___arg00;
		bool L_1 = ___arg11;
		NullCheck((UnityEvent_2_t6FFBDA794A6AA7AF9FE8BA1C95AE94A43530E0A9 *)__this);
		((  void (*) (UnityEvent_2_t6FFBDA794A6AA7AF9FE8BA1C95AE94A43530E0A9 *, int32_t, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((UnityEvent_2_t6FFBDA794A6AA7AF9FE8BA1C95AE94A43530E0A9 *)__this, (int32_t)L_0, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		// public void Send(T0 arg0, T1 arg1) { this.Invoke(arg0, arg1); }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Events_Event`2<System.Int32,System.Boolean>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_2__ctor_mC1EBC9CFD8A067EC1C3E9F1308F89442FE6B059C_gshared (Event_2_t5D411D24E2836A52F7D2998B747522450DB2D3F5 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((UnityEvent_2_t6FFBDA794A6AA7AF9FE8BA1C95AE94A43530E0A9 *)__this);
		((  void (*) (UnityEvent_2_t6FFBDA794A6AA7AF9FE8BA1C95AE94A43530E0A9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((UnityEvent_2_t6FFBDA794A6AA7AF9FE8BA1C95AE94A43530E0A9 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Valve.VR.SteamVR_Events_Event`2<System.Object,System.Boolean>::Listen(UnityEngine.Events.UnityAction`2<T0,T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_2_Listen_m6B433ED3EBBA20B3E442379DB77C03D83C651D83_gshared (Event_2_t9B8C6B23D8417540E5908C6FE592803B5C52D62E * __this, UnityAction_2_tAC99DEACCF9A9F69F176A7F1DBEE5E1A24D9816D * ___action0, const RuntimeMethod* method)
{
	{
		// public void Listen(UnityAction<T0, T1> action) { this.AddListener(action); }
		UnityAction_2_tAC99DEACCF9A9F69F176A7F1DBEE5E1A24D9816D * L_0 = ___action0;
		NullCheck((UnityEvent_2_tCC3D1AE1DF0DE9353C32AB2135945A02F0B1C6CB *)__this);
		((  void (*) (UnityEvent_2_tCC3D1AE1DF0DE9353C32AB2135945A02F0B1C6CB *, UnityAction_2_tAC99DEACCF9A9F69F176A7F1DBEE5E1A24D9816D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((UnityEvent_2_tCC3D1AE1DF0DE9353C32AB2135945A02F0B1C6CB *)__this, (UnityAction_2_tAC99DEACCF9A9F69F176A7F1DBEE5E1A24D9816D *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// public void Listen(UnityAction<T0, T1> action) { this.AddListener(action); }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Events_Event`2<System.Object,System.Boolean>::Remove(UnityEngine.Events.UnityAction`2<T0,T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_2_Remove_m920A34BAAF87EEB7C44CAAF1716415ACE022CD48_gshared (Event_2_t9B8C6B23D8417540E5908C6FE592803B5C52D62E * __this, UnityAction_2_tAC99DEACCF9A9F69F176A7F1DBEE5E1A24D9816D * ___action0, const RuntimeMethod* method)
{
	{
		// public void Remove(UnityAction<T0, T1> action) { this.RemoveListener(action); }
		UnityAction_2_tAC99DEACCF9A9F69F176A7F1DBEE5E1A24D9816D * L_0 = ___action0;
		NullCheck((UnityEvent_2_tCC3D1AE1DF0DE9353C32AB2135945A02F0B1C6CB *)__this);
		((  void (*) (UnityEvent_2_tCC3D1AE1DF0DE9353C32AB2135945A02F0B1C6CB *, UnityAction_2_tAC99DEACCF9A9F69F176A7F1DBEE5E1A24D9816D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((UnityEvent_2_tCC3D1AE1DF0DE9353C32AB2135945A02F0B1C6CB *)__this, (UnityAction_2_tAC99DEACCF9A9F69F176A7F1DBEE5E1A24D9816D *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		// public void Remove(UnityAction<T0, T1> action) { this.RemoveListener(action); }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Events_Event`2<System.Object,System.Boolean>::Send(T0,T1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_2_Send_mE75EC48EE4E89F58F271FC8659E4027FAAE9C13B_gshared (Event_2_t9B8C6B23D8417540E5908C6FE592803B5C52D62E * __this, RuntimeObject * ___arg00, bool ___arg11, const RuntimeMethod* method)
{
	{
		// public void Send(T0 arg0, T1 arg1) { this.Invoke(arg0, arg1); }
		RuntimeObject * L_0 = ___arg00;
		bool L_1 = ___arg11;
		NullCheck((UnityEvent_2_tCC3D1AE1DF0DE9353C32AB2135945A02F0B1C6CB *)__this);
		((  void (*) (UnityEvent_2_tCC3D1AE1DF0DE9353C32AB2135945A02F0B1C6CB *, RuntimeObject *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((UnityEvent_2_tCC3D1AE1DF0DE9353C32AB2135945A02F0B1C6CB *)__this, (RuntimeObject *)L_0, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		// public void Send(T0 arg0, T1 arg1) { this.Invoke(arg0, arg1); }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Events_Event`2<System.Object,System.Boolean>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_2__ctor_mB1E20DFCD84FF59D84BDDDF9891B4BC921CFFECF_gshared (Event_2_t9B8C6B23D8417540E5908C6FE592803B5C52D62E * __this, const RuntimeMethod* method)
{
	{
		NullCheck((UnityEvent_2_tCC3D1AE1DF0DE9353C32AB2135945A02F0B1C6CB *)__this);
		((  void (*) (UnityEvent_2_tCC3D1AE1DF0DE9353C32AB2135945A02F0B1C6CB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((UnityEvent_2_tCC3D1AE1DF0DE9353C32AB2135945A02F0B1C6CB *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Valve.VR.SteamVR_Events_Event`2<System.Object,System.Object>::Listen(UnityEngine.Events.UnityAction`2<T0,T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_2_Listen_mCCBD285907C6BBAEF3B06A7BB58C42C2734188A8_gshared (Event_2_t04FA8831B303A3F77AF8B7E1B8C05E9562E771AF * __this, UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * ___action0, const RuntimeMethod* method)
{
	{
		// public void Listen(UnityAction<T0, T1> action) { this.AddListener(action); }
		UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * L_0 = ___action0;
		NullCheck((UnityEvent_2_t1324E90D5AF00DA0F61802033E51716D0D9CBED1 *)__this);
		((  void (*) (UnityEvent_2_t1324E90D5AF00DA0F61802033E51716D0D9CBED1 *, UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((UnityEvent_2_t1324E90D5AF00DA0F61802033E51716D0D9CBED1 *)__this, (UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// public void Listen(UnityAction<T0, T1> action) { this.AddListener(action); }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Events_Event`2<System.Object,System.Object>::Remove(UnityEngine.Events.UnityAction`2<T0,T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_2_Remove_mF24B947A008961B399DB9BA6356303865925A011_gshared (Event_2_t04FA8831B303A3F77AF8B7E1B8C05E9562E771AF * __this, UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * ___action0, const RuntimeMethod* method)
{
	{
		// public void Remove(UnityAction<T0, T1> action) { this.RemoveListener(action); }
		UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * L_0 = ___action0;
		NullCheck((UnityEvent_2_t1324E90D5AF00DA0F61802033E51716D0D9CBED1 *)__this);
		((  void (*) (UnityEvent_2_t1324E90D5AF00DA0F61802033E51716D0D9CBED1 *, UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((UnityEvent_2_t1324E90D5AF00DA0F61802033E51716D0D9CBED1 *)__this, (UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		// public void Remove(UnityAction<T0, T1> action) { this.RemoveListener(action); }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Events_Event`2<System.Object,System.Object>::Send(T0,T1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_2_Send_m2F2293083E88500CE049F9B9639B5B6D3B05AF02_gshared (Event_2_t04FA8831B303A3F77AF8B7E1B8C05E9562E771AF * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method)
{
	{
		// public void Send(T0 arg0, T1 arg1) { this.Invoke(arg0, arg1); }
		RuntimeObject * L_0 = ___arg00;
		RuntimeObject * L_1 = ___arg11;
		NullCheck((UnityEvent_2_t1324E90D5AF00DA0F61802033E51716D0D9CBED1 *)__this);
		((  void (*) (UnityEvent_2_t1324E90D5AF00DA0F61802033E51716D0D9CBED1 *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((UnityEvent_2_t1324E90D5AF00DA0F61802033E51716D0D9CBED1 *)__this, (RuntimeObject *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		// public void Send(T0 arg0, T1 arg1) { this.Invoke(arg0, arg1); }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Events_Event`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_2__ctor_m8BF423470D8AB4A6F0E1721BDED0E3834EA1639F_gshared (Event_2_t04FA8831B303A3F77AF8B7E1B8C05E9562E771AF * __this, const RuntimeMethod* method)
{
	{
		NullCheck((UnityEvent_2_t1324E90D5AF00DA0F61802033E51716D0D9CBED1 *)__this);
		((  void (*) (UnityEvent_2_t1324E90D5AF00DA0F61802033E51716D0D9CBED1 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((UnityEvent_2_t1324E90D5AF00DA0F61802033E51716D0D9CBED1 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Valve.VR.SteamVR_Events_Event`3<System.Object,System.Object,System.Object>::Listen(UnityEngine.Events.UnityAction`3<T0,T1,T2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_3_Listen_m23C75869DEB8B4E0E243DF4DC98D1695E25DBAF3_gshared (Event_3_t35D9D60B1134BEB59186505A31E7F27F1AD4A8E6 * __this, UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * ___action0, const RuntimeMethod* method)
{
	{
		// public void Listen(UnityAction<T0, T1, T2> action) { this.AddListener(action); }
		UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * L_0 = ___action0;
		NullCheck((UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9 *)__this);
		((  void (*) (UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9 *, UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9 *)__this, (UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// public void Listen(UnityAction<T0, T1, T2> action) { this.AddListener(action); }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Events_Event`3<System.Object,System.Object,System.Object>::Remove(UnityEngine.Events.UnityAction`3<T0,T1,T2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_3_Remove_m0A88E53FCB0E97A3BC2E81FCFA24D8503A662B9D_gshared (Event_3_t35D9D60B1134BEB59186505A31E7F27F1AD4A8E6 * __this, UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * ___action0, const RuntimeMethod* method)
{
	{
		// public void Remove(UnityAction<T0, T1, T2> action) { this.RemoveListener(action); }
		UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * L_0 = ___action0;
		NullCheck((UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9 *)__this);
		((  void (*) (UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9 *, UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9 *)__this, (UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		// public void Remove(UnityAction<T0, T1, T2> action) { this.RemoveListener(action); }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Events_Event`3<System.Object,System.Object,System.Object>::Send(T0,T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_3_Send_m1203A53633E0C8A1DD93E7B33F726D5A4A1D7E83_gshared (Event_3_t35D9D60B1134BEB59186505A31E7F27F1AD4A8E6 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, const RuntimeMethod* method)
{
	{
		// public void Send(T0 arg0, T1 arg1, T2 arg2) { this.Invoke(arg0, arg1, arg2); }
		RuntimeObject * L_0 = ___arg00;
		RuntimeObject * L_1 = ___arg11;
		RuntimeObject * L_2 = ___arg22;
		NullCheck((UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9 *)__this);
		((  void (*) (UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9 *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9 *)__this, (RuntimeObject *)L_0, (RuntimeObject *)L_1, (RuntimeObject *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		// public void Send(T0 arg0, T1 arg1, T2 arg2) { this.Invoke(arg0, arg1, arg2); }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Events_Event`3<System.Object,System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_3__ctor_mCA65821FFBDFD03E54DDEC5C072A6EC2F94CD521_gshared (Event_3_t35D9D60B1134BEB59186505A31E7F27F1AD4A8E6 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9 *)__this);
		((  void (*) (UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Valve.VR.SteamVR_Events_Event`3<UnityEngine.Color,System.Single,System.Boolean>::Listen(UnityEngine.Events.UnityAction`3<T0,T1,T2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_3_Listen_mFB3CDD2A6E583BDAA7C6B73D7685E6CB5A118B61_gshared (Event_3_t5541668D2F9E46098EA2A527B35E4D3BD6D8450B * __this, UnityAction_3_tBB281EE324EEF9D6CD3F2B8B7C3695D8EB743EEB * ___action0, const RuntimeMethod* method)
{
	{
		// public void Listen(UnityAction<T0, T1, T2> action) { this.AddListener(action); }
		UnityAction_3_tBB281EE324EEF9D6CD3F2B8B7C3695D8EB743EEB * L_0 = ___action0;
		NullCheck((UnityEvent_3_t8D685C60F62C7BAE22464C760302E39E1FC2932D *)__this);
		((  void (*) (UnityEvent_3_t8D685C60F62C7BAE22464C760302E39E1FC2932D *, UnityAction_3_tBB281EE324EEF9D6CD3F2B8B7C3695D8EB743EEB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((UnityEvent_3_t8D685C60F62C7BAE22464C760302E39E1FC2932D *)__this, (UnityAction_3_tBB281EE324EEF9D6CD3F2B8B7C3695D8EB743EEB *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// public void Listen(UnityAction<T0, T1, T2> action) { this.AddListener(action); }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Events_Event`3<UnityEngine.Color,System.Single,System.Boolean>::Remove(UnityEngine.Events.UnityAction`3<T0,T1,T2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_3_Remove_m079ED2364B3442EF296EB3C7666C2E20F60D58A4_gshared (Event_3_t5541668D2F9E46098EA2A527B35E4D3BD6D8450B * __this, UnityAction_3_tBB281EE324EEF9D6CD3F2B8B7C3695D8EB743EEB * ___action0, const RuntimeMethod* method)
{
	{
		// public void Remove(UnityAction<T0, T1, T2> action) { this.RemoveListener(action); }
		UnityAction_3_tBB281EE324EEF9D6CD3F2B8B7C3695D8EB743EEB * L_0 = ___action0;
		NullCheck((UnityEvent_3_t8D685C60F62C7BAE22464C760302E39E1FC2932D *)__this);
		((  void (*) (UnityEvent_3_t8D685C60F62C7BAE22464C760302E39E1FC2932D *, UnityAction_3_tBB281EE324EEF9D6CD3F2B8B7C3695D8EB743EEB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((UnityEvent_3_t8D685C60F62C7BAE22464C760302E39E1FC2932D *)__this, (UnityAction_3_tBB281EE324EEF9D6CD3F2B8B7C3695D8EB743EEB *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		// public void Remove(UnityAction<T0, T1, T2> action) { this.RemoveListener(action); }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Events_Event`3<UnityEngine.Color,System.Single,System.Boolean>::Send(T0,T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_3_Send_mF0C29AA53B1D53EF6D40B975876E74A64E64549C_gshared (Event_3_t5541668D2F9E46098EA2A527B35E4D3BD6D8450B * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___arg00, float ___arg11, bool ___arg22, const RuntimeMethod* method)
{
	{
		// public void Send(T0 arg0, T1 arg1, T2 arg2) { this.Invoke(arg0, arg1, arg2); }
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_0 = ___arg00;
		float L_1 = ___arg11;
		bool L_2 = ___arg22;
		NullCheck((UnityEvent_3_t8D685C60F62C7BAE22464C760302E39E1FC2932D *)__this);
		((  void (*) (UnityEvent_3_t8D685C60F62C7BAE22464C760302E39E1FC2932D *, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 , float, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((UnityEvent_3_t8D685C60F62C7BAE22464C760302E39E1FC2932D *)__this, (Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 )L_0, (float)L_1, (bool)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		// public void Send(T0 arg0, T1 arg1, T2 arg2) { this.Invoke(arg0, arg1, arg2); }
		return;
	}
}
// System.Void Valve.VR.SteamVR_Events_Event`3<UnityEngine.Color,System.Single,System.Boolean>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_3__ctor_m1CBD73AB873546FD8DD9E86430406453E915B0CA_gshared (Event_3_t5541668D2F9E46098EA2A527B35E4D3BD6D8450B * __this, const RuntimeMethod* method)
{
	{
		NullCheck((UnityEvent_3_t8D685C60F62C7BAE22464C760302E39E1FC2932D *)__this);
		((  void (*) (UnityEvent_3_t8D685C60F62C7BAE22464C760302E39E1FC2932D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((UnityEvent_3_t8D685C60F62C7BAE22464C760302E39E1FC2932D *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Valve.VR.SteamVR_RingBuffer`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_RingBuffer_1__ctor_mA0FF734C7E8F013C939B4B698B9255452B60DE5C_gshared (SteamVR_RingBuffer_1_t353935239BF163A78AC80BF35E82548FDC5DA1EA * __this, int32_t ___size0, const RuntimeMethod* method)
{
	{
		// public SteamVR_RingBuffer(int size)
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		// buffer = new T[size];
		int32_t L_0 = ___size0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), (uint32_t)L_0);
		__this->set_buffer_0(L_1);
		// currentIndex = 0;
		__this->set_currentIndex_1(0);
		// }
		return;
	}
}
// System.Void Valve.VR.SteamVR_RingBuffer`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_RingBuffer_1_Add_m0B1106D1FCFAFFD12E6F6D61F54561CC3BE36B02_gshared (SteamVR_RingBuffer_1_t353935239BF163A78AC80BF35E82548FDC5DA1EA * __this, RuntimeObject * ___newElement0, const RuntimeMethod* method)
{
	{
		// buffer[currentIndex] = newElement;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_buffer_0();
		int32_t L_1 = (int32_t)__this->get_currentIndex_1();
		RuntimeObject * L_2 = ___newElement0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (RuntimeObject *)L_2);
		// StepForward();
		NullCheck((SteamVR_RingBuffer_1_t353935239BF163A78AC80BF35E82548FDC5DA1EA *)__this);
		VirtActionInvoker0::Invoke(4 /* System.Void Valve.VR.SteamVR_RingBuffer`1<System.Object>::StepForward() */, (SteamVR_RingBuffer_1_t353935239BF163A78AC80BF35E82548FDC5DA1EA *)__this);
		// }
		return;
	}
}
// System.Void Valve.VR.SteamVR_RingBuffer`1<System.Object>::StepForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_RingBuffer_1_StepForward_m2CEA8662D3229559B6D9929676A36AD43FE01855_gshared (SteamVR_RingBuffer_1_t353935239BF163A78AC80BF35E82548FDC5DA1EA * __this, const RuntimeMethod* method)
{
	{
		// lastElement = buffer[currentIndex];
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_buffer_0();
		int32_t L_1 = (int32_t)__this->get_currentIndex_1();
		NullCheck(L_0);
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		__this->set_lastElement_2(L_3);
		// currentIndex++;
		int32_t L_4 = (int32_t)__this->get_currentIndex_1();
		__this->set_currentIndex_1(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1)));
		// if (currentIndex >= buffer.Length)
		int32_t L_5 = (int32_t)__this->get_currentIndex_1();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_buffer_0();
		NullCheck(L_6);
		if ((((int32_t)L_5) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))))
		{
			goto IL_003c;
		}
	}
	{
		// currentIndex = 0;
		__this->set_currentIndex_1(0);
	}

IL_003c:
	{
		// cleared = false;
		__this->set_cleared_3((bool)0);
		// }
		return;
	}
}
// T Valve.VR.SteamVR_RingBuffer`1<System.Object>::GetAtIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SteamVR_RingBuffer_1_GetAtIndex_m7423C1F679DAA8CEDF30653C671C9D58EBAA8F22_gshared (SteamVR_RingBuffer_1_t353935239BF163A78AC80BF35E82548FDC5DA1EA * __this, int32_t ___atIndex0, const RuntimeMethod* method)
{
	{
		// if (atIndex < 0)
		int32_t L_0 = ___atIndex0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0010;
		}
	}
	{
		// atIndex += buffer.Length;
		int32_t L_1 = ___atIndex0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_buffer_0();
		NullCheck(L_2);
		___atIndex0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))));
	}

IL_0010:
	{
		// return buffer[atIndex];
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_buffer_0();
		int32_t L_4 = ___atIndex0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		return L_6;
	}
}
// T Valve.VR.SteamVR_RingBuffer`1<System.Object>::GetLast()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SteamVR_RingBuffer_1_GetLast_mD1D93934D061FF18DDC78E8F5E43F3983C5104C0_gshared (SteamVR_RingBuffer_1_t353935239BF163A78AC80BF35E82548FDC5DA1EA * __this, const RuntimeMethod* method)
{
	{
		// return lastElement;
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_lastElement_2();
		return L_0;
	}
}
// System.Int32 Valve.VR.SteamVR_RingBuffer`1<System.Object>::GetLastIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SteamVR_RingBuffer_1_GetLastIndex_m8E013F88D16A7628A8CCC786FBFD9030DECD08C3_gshared (SteamVR_RingBuffer_1_t353935239BF163A78AC80BF35E82548FDC5DA1EA * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// int lastIndex = currentIndex - 1;
		int32_t L_0 = (int32_t)__this->get_currentIndex_1();
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1));
		// if (lastIndex < 0)
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		// lastIndex += buffer.Length;
		int32_t L_2 = V_0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_buffer_0();
		NullCheck(L_3);
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))));
	}

IL_0018:
	{
		// return lastIndex;
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.Void Valve.VR.SteamVR_RingBuffer`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_RingBuffer_1_Clear_m5528DA1A5C57E5F48EE17EF2B2B73ED0ACDF66EE_gshared (SteamVR_RingBuffer_1_t353935239BF163A78AC80BF35E82548FDC5DA1EA * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		// if (cleared == true)
		bool L_0 = (bool)__this->get_cleared_3();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (buffer == null)
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_buffer_0();
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		// return;
		return;
	}

IL_0012:
	{
		// for (int index = 0; index < buffer.Length; index++)
		V_0 = (int32_t)0;
		goto IL_002f;
	}

IL_0016:
	{
		// buffer[index] = default(T);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_buffer_0();
		int32_t L_3 = V_0;
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject *));
		RuntimeObject * L_4 = V_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (RuntimeObject *)L_4);
		// for (int index = 0; index < buffer.Length; index++)
		int32_t L_5 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_002f:
	{
		// for (int index = 0; index < buffer.Length; index++)
		int32_t L_6 = V_0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_buffer_0();
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))))
		{
			goto IL_0016;
		}
	}
	{
		// lastElement = default(T);
		RuntimeObject ** L_8 = (RuntimeObject **)__this->get_address_of_lastElement_2();
		il2cpp_codegen_initobj(L_8, sizeof(RuntimeObject *));
		// currentIndex = 0;
		__this->set_currentIndex_1(0);
		// cleared = true;
		__this->set_cleared_3((bool)1);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* SteamVR_Action_Source_Map_get_fullPath_m59D22AC4A2ADB2B88085A1B676D686350CE1EE2A_inline (SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17 * __this, const RuntimeMethod* method)
{
	{
		// public string fullPath { get; protected set; }
		String_t* L_0 = __this->get_U3CfullPathU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint64_t SteamVR_Action_Source_Map_get_handle_m4D0B503DEA30F420E162BD5ECBD57D7BD1033E0F_inline (SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17 * __this, const RuntimeMethod* method)
{
	{
		// public ulong handle { get; protected set; }
		uint64_t L_0 = __this->get_U3ChandleU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR SteamVR_ActionSet_t9D647E559B2D35F695CC7613111572186FBCA9F6 * SteamVR_Action_Source_Map_get_actionSet_mE10477F66D710B36A4DB0BDEF9DC7788CD86D893_inline (SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17 * __this, const RuntimeMethod* method)
{
	{
		// public SteamVR_ActionSet actionSet { get; protected set; }
		SteamVR_ActionSet_t9D647E559B2D35F695CC7613111572186FBCA9F6 * L_0 = __this->get_U3CactionSetU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t SteamVR_Action_Source_Map_get_direction_m57FCD20566320667DDD47CCF0743E7AF33971413_inline (SteamVR_Action_Source_Map_t7EF8D4B037DC17D04177E758D64AA2C482031E17 * __this, const RuntimeMethod* method)
{
	{
		// public SteamVR_ActionDirections direction { get; protected set; }
		int32_t L_0 = __this->get_U3CdirectionU3Ek__BackingField_3();
		return L_0;
	}
}
