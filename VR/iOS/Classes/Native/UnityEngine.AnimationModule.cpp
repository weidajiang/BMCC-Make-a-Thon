﻿#include "il2cpp-config.h"

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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.ArgumentNullException
struct ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.List`1<UnityEngine.Animations.ConstraintSource>
struct List_1_t09FCE348A4E5E52E266CCC1DE562EFC20187B630;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.InvalidCastException
struct InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA;
// System.InvalidOperationException
struct InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Animation
struct Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C;
// UnityEngine.Animation/Enumerator
struct Enumerator_t6F97AECE1A160A668D8D8798607BE29B1D8CD92C;
// UnityEngine.AnimationClip
struct AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE;
// UnityEngine.AnimationClip[]
struct AnimationClipU5BU5D_t26BCE82D4E5CBA43CAD83905725B4D6D500B3E36;
// UnityEngine.AnimationEvent
struct AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F;
// UnityEngine.AnimationState
struct AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386;
// UnityEngine.Animations.ConstraintSource[]
struct ConstraintSourceU5BU5D_t4F199DA485A53982B75512962E433EE1A536AD56;
// UnityEngine.Animations.LookAtConstraint
struct LookAtConstraint_t21565CB52914267484967D0205012FD17E3717CC;
// UnityEngine.Animator
struct Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A;
// UnityEngine.AnimatorControllerParameter
struct AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68;
// UnityEngine.AnimatorControllerParameter[]
struct AnimatorControllerParameterU5BU5D_t7B886A2A1648ECF218447ED1DE8D241652F863FD;
// UnityEngine.AnimatorOverrideController
struct AnimatorOverrideController_t130F04B57E753FD4288EF3235699ABE7C88FF312;
// UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback
struct OnOverrideControllerDirtyCallback_t73560E6E30067C09BC58A15F9D2726051B077E2E;
// UnityEngine.AvatarMask
struct AvatarMask_t12E2214B133E61C5CF28DC1E4F6DC2451C75D88A;
// UnityEngine.Motion
struct Motion_t497BF9244B6A769D1AE925C3876B187C56C8CF8F;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Playables.PlayableBinding/CreateOutputMethod
struct CreateOutputMethod_tA7B649F49822FC5DD0B0D9F17247C73CAECB1CA3;
// UnityEngine.Playables.PlayableBinding[]
struct PlayableBindingU5BU5D_t7EB322901D51EAB67BA4F711C87F3AC1CF5D89AB;
// UnityEngine.RuntimeAnimatorController
struct RuntimeAnimatorController_tDA6672C8194522C2F60F8F2F241657E57C3520BD;
// UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734;
// UnityEngine.StateMachineBehaviour
struct StateMachineBehaviour_t698612ED92024B087045C388731B7673550C786C;
// UnityEngine.TrackedReference
struct TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;

IL2CPP_EXTERN_C RuntimeClass* AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationScriptPlayable_t1EDF8E51A9ED180BB012656916323FA4F68CA27E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CreateOutputMethod_tA7B649F49822FC5DD0B0D9F17247C73CAECB1CA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enumerator_t6F97AECE1A160A668D8D8798607BE29B1D8CD92C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HumanBodyBones_t84CDC0803F451E10186E589016F33D8404227892_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral04E4E32AA834F9BA9336C5388E9470F196EB0891;
IL2CPP_EXTERN_C String_t* _stringLiteral35482DF98E7DEED2FC6BDE9BDD1E273E27CF1F2C;
IL2CPP_EXTERN_C String_t* _stringLiteral3DB192144788919FBAC5C900D49CE390D3FFF2C0;
IL2CPP_EXTERN_C String_t* _stringLiteral4518459D262696CF9B5DAB1E0A1BC3AC2F9BD9DF;
IL2CPP_EXTERN_C String_t* _stringLiteral488203F92B6BE929591A420476D70A53696658FE;
IL2CPP_EXTERN_C String_t* _stringLiteral59BDBA16999CF4EF3F7712740907B2C5E860459C;
IL2CPP_EXTERN_C String_t* _stringLiteral5F731C5A8B77F4284645D8155A226267126EA04E;
IL2CPP_EXTERN_C String_t* _stringLiteral6502516F734DD885173E353D47AAEB82BC7070A9;
IL2CPP_EXTERN_C String_t* _stringLiteral78BE72B5118B8A09F539AD4D79E3196A5DF77143;
IL2CPP_EXTERN_C String_t* _stringLiteral7E3996230D9AF0349B43FF7B536FC25AF0C19C71;
IL2CPP_EXTERN_C String_t* _stringLiteral89A50E4F5CC89A3DCF37354A9F39B7C5D00DD0F2;
IL2CPP_EXTERN_C String_t* _stringLiteral9D4CCA1595C30E43D23F14AEDF815846F837956A;
IL2CPP_EXTERN_C String_t* _stringLiteralB47C26932C83DD7E0C54FC87EDDE2F3B50E5104C;
IL2CPP_EXTERN_C String_t* _stringLiteralB9DF0CBB713EC6E9DFD70C9BFB0B820148433428;
IL2CPP_EXTERN_C String_t* _stringLiteralBCE16DD0260827ECF338C787F1206F77860CACC5;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE84CF4E03BE4B80890666511595220B5EC9F1949;
IL2CPP_EXTERN_C String_t* _stringLiteralEB133F4E0F7233E456C4B73BC81F165EA7547C40;
IL2CPP_EXTERN_C String_t* _stringLiteralFCF5307272E4A4426DDA9E4E6930E2B834B95B2C;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationClipPlayable__ctor_mEC2D160DE94DA6B775063CA8977DB9E5E0F134DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationLayerMixerPlayable_SetLayerMaskFromAvatarMask_mF5C7BB80B9DDA7583F5E88E73FDCB0C3D494A5A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationLayerMixerPlayable__ctor_mA2156DFDEA435F14446528098837ED3FF6B7147C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationMixerPlayable__ctor_mD446E3257F803A3D4C04D394A75AA5376533CF43_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationMotionXToDeltaPlayable__ctor_mC51D5F76DD0CE29B305932303A4A5AA42ACCD9E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationOffsetPlayable__ctor_m380B4761BE82E4684F82A18933DBBC79E3D5F607_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationPlayableBinding_CreateAnimationOutput_m1E51EF60F417712EC940A1192E616FD2C2831DA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationPlayableOutput__ctor_mB620607DC74C6B62A8320EE364BB6BEDC2AD3F1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationPosePlayable__ctor_mF02468DCD2C8C0226C89C4DF90454DD9D230595D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationRemoveScalePlayable__ctor_mB06216973E6B635E7F4A3C8E372E5F7E89D327E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationScriptPlayable__ctor_mDA5EA55852F0A1079954B2DCB90398C4D7FFC412_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimatorControllerPlayable_SetHandle_m2CAE8DABC4B19AB6BD90249D0D7FC7A9E07C3A96_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Animator_GetBoneTransform_m44760610785563E713D82AC1FC0771B38CDBB16F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LookAtConstraint_SetSources_mDC34E30E3BE74E9E9651683A2F5D9067CA476221_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimationClipPlayable_t6EF38F9EED94096D4793638AFC8D11D285B43183_m4006EF666DE80B407FDDD7D6F0740EB8617E36AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371_mC3942EB4B00EAC10035AA7EBE23CA679C8790D20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A_m172B8D6DA48AD49F0740833F7D18CD468B072E5E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC_mCC63F3E0D55A21A9E56D80D26150AD2B78C6EC50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E_mF434E44E279E1DBD0887921B38A5C57812B1371A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07_m35A103AAF8E80E7C007214546C71B4E90901C2A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B_m1E16540EE6283270E3DE85D46C3BE1F8B85E73C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_t1EDF8E51A9ED180BB012656916323FA4F68CA27E_m1767ADED196AAA8B4D6FBB9313003E33A967E799_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B_mC6A8CB67F39B0B39BF77ED6177B3C2DF1BC91533_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableOutputHandle_IsPlayableOutputOfType_TisAnimationPlayableOutput_tA10178429D6528BDB4516F6788CE680E349553E6_m8A303EBBB990B19C38B5E27B3FF37F3FF41C8FCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t AnimationClipPlayable_CreateHandle_m9C5091FC6B92141016021B8D79906F3382332E38_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimationClipPlayable_Equals_m06BA3E1C3AE0CC205C8531CCF6596C99C8D927EE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimationClipPlayable__ctor_mEC2D160DE94DA6B775063CA8977DB9E5E0F134DC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimationEvent__ctor_m6C228EB716B6B53DE2665091C056428EFB90897F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimationEvent_get_animatorClipInfo_m1317C7C3C4411E70D38AF4E97305A2193494C42D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimationLayerMixerPlayable_CreateHandleInternal_m24E2E0BE206419F3607623F5EA037F0E6E82B532_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimationLayerMixerPlayable_CreateHandle_m85139F526B28E183A04E47F0CFD09D8927F68EB8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimationLayerMixerPlayable_Create_m6D3F092372F36FE32596E6AEB3DFA5FE37FEBCF9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimationLayerMixerPlayable_Equals_m0A6A86FEDCE98E63B84BD01D0D362D03EA733E59_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimationLayerMixerPlayable_SetLayerMaskFromAvatarMask_mF5C7BB80B9DDA7583F5E88E73FDCB0C3D494A5A8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimationLayerMixerPlayable__cctor_m3712A5D44F275E70624C0D734C9CED9BD12D0AC9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimationLayerMixerPlayable__ctor_mA2156DFDEA435F14446528098837ED3FF6B7147C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimationMixerPlayable_CreateHandleInternal_mED72AB9121F23A6D12EBABD539CF5E046F4AFD16_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimationMixerPlayable_CreateHandle_m3A8F728441AF2D2D16833A607E8A602FBDEDD313_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimationMixerPlayable_Create_m5E6AE8A0051F0267AFFAEC5D449CEC0A0A682D2C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimationMixerPlayable_Equals_m7CB1B61B74A6BE00A35AD072490F07D4C7A17B0F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimationMixerPlayable__cctor_m820F56C1D4257D4F5446BD66402D4428E0DF8E3E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimationMixerPlayable__ctor_mD446E3257F803A3D4C04D394A75AA5376533CF43_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimationMotionXToDeltaPlayable_CreateHandleInternal_m9A0B513A408E3A9BD0D0AE040633DE4A92BAE77C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimationMotionXToDeltaPlayable_CreateHandle_m91B60DED2AE0AAA8EEDE3E8B34DDACAC140BA7BD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimationMotionXToDeltaPlayable_Create_mA7DA433C50F2102986221FF9382EC33BDE388271_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimationMotionXToDeltaPlayable_Equals_m53B4AAB54D7F3633C3954056F8C334BB8B7D590E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimationMotionXToDeltaPlayable_SetAbsoluteMotion_mDCF671C2986EBD639EDE0AF88748507EAC9853B9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimationMotionXToDeltaPlayable__cctor_mCB948CE31E0AAEC53CB1D6746D091604413C5EEE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimationMotionXToDeltaPlayable__ctor_mC51D5F76DD0CE29B305932303A4A5AA42ACCD9E6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimationOffsetPlayable_CreateHandleInternal_mF0B7934FD80F93B01659E39F53986912D1E72440_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimationOffsetPlayable_CreateHandle_mC5C47FEB5F1B34AB6237DAB01660267351AF12C9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimationOffsetPlayable_Create_m1A514FBB2EB7D05F31688DE2D194E9FC063B0720_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimationOffsetPlayable_Equals_m30B207FC6287EABF6FC1FDA47784322A3ABB98DF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimationOffsetPlayable__cctor_m174AD41778526FA15E41C6A11303A4F190A4CEA6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimationOffsetPlayable__ctor_m380B4761BE82E4684F82A18933DBBC79E3D5F607_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimationPlayableBinding_Create_m574485453EEF75BAA078668EA0BE3579BE2D9BAF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimationPlayableOutput__ctor_mB620607DC74C6B62A8320EE364BB6BEDC2AD3F1A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimationPlayableOutput_get_Null_mAFAC34CF34A884B7957333BDD9D438428910D751_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimationPosePlayable_Equals_m4417430115DCF9B39D3E4B64424120CE7E555961_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimationPosePlayable__cctor_mDE42A26BC2624427AA8086C4AB69FB531949153F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimationPosePlayable__ctor_mF02468DCD2C8C0226C89C4DF90454DD9D230595D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimationRemoveScalePlayable_CreateHandleInternal_m90F196F5F014459D15CF0F5C5C0280FF2BDDE24A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimationRemoveScalePlayable_CreateHandle_mB529C77EE1CC0DB85D73301B2484EAAAEE65EF6C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimationRemoveScalePlayable_Create_m7FDEE39CF2D926699B5FF76D8F22C57577CCF595_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimationRemoveScalePlayable_Equals_m58B139243E3B27CE86CA4CC470895BF719CD9BAD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimationRemoveScalePlayable__cctor_m7BA13559FDA2BF8E061839B333085C402DED6829_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimationRemoveScalePlayable__ctor_mB06216973E6B635E7F4A3C8E372E5F7E89D327E1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimationScriptPlayable_Equals_m4995D1AD353F43FE3FA854A8384601F58156E69E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimationScriptPlayable__cctor_m3FA9E1E2E1EADACBC718598BEFECB25F867E454E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimationScriptPlayable__ctor_mDA5EA55852F0A1079954B2DCB90398C4D7FFC412_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Animation_GetEnumerator_m1AA556FBFDF08728D25984E9C3123C187DC76191_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimatorControllerParameter_Equals_m71402007E47A2C82599B74BE7E95476B89838682_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimatorControllerParameter__ctor_mCCC1C8C5E13550B5745B4F10D0FCF6F948517797_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimatorControllerPlayable_CreateHandleInternal_m7AFE10D091BC80A9877809A94F3398045CA6914C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimatorControllerPlayable_CreateHandle_mC5C9D453305CB3ECE1CAAAAA0FCF01F5C3DCD8B9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimatorControllerPlayable_Create_mD22E2135B1D33EB45D615F7342F6E949FDBE9ED0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimatorControllerPlayable_Equals_m04685CCA5A5FC388A0387D3453A677C0CB47D173_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimatorControllerPlayable_SetFloat_m7FBD4CC0F24814CE50174625E25DC49ED41CD3E2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimatorControllerPlayable_SetHandle_m2CAE8DABC4B19AB6BD90249D0D7FC7A9E07C3A96_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimatorControllerPlayable__cctor_m6FCC197F3BF33EAFC37D5217617FCDC64E8B304E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimatorControllerPlayable__ctor_m739B1BFC592B6C160410141057F1B2BA1B971897_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Animator_CheckIfInIKPass_mD5AD9B7BD27B551BD8EA8EA13384237A4DC02E10_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Animator_GetBoneTransform_m44760610785563E713D82AC1FC0771B38CDBB16F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LookAtConstraint_SetSources_mDC34E30E3BE74E9E9651683A2F5D9067CA476221_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Motion__ctor_mAED8097767A0FD4F3B5A8E687D569E33DB6F8443_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RuntimeAnimatorController__ctor_mF55B0DDD5700D725CD4E59521E5A16BD774ABC32_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;;
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com;
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com;;
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke;
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke;;

struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct AnimationClipU5BU5D_t26BCE82D4E5CBA43CAD83905725B4D6D500B3E36;
struct AnimatorControllerParameterU5BU5D_t7B886A2A1648ECF218447ED1DE8D241652F863FD;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t6EFABDA0B2A020FB3DD6CA286799D867733667F1 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct  Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74  : public RuntimeObject
{
public:

public:
};


// System.Collections.Generic.List`1<UnityEngine.Animations.ConstraintSource>
struct  List_1_t09FCE348A4E5E52E266CCC1DE562EFC20187B630  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ConstraintSourceU5BU5D_t4F199DA485A53982B75512962E433EE1A536AD56* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t09FCE348A4E5E52E266CCC1DE562EFC20187B630, ____items_1)); }
	inline ConstraintSourceU5BU5D_t4F199DA485A53982B75512962E433EE1A536AD56* get__items_1() const { return ____items_1; }
	inline ConstraintSourceU5BU5D_t4F199DA485A53982B75512962E433EE1A536AD56** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ConstraintSourceU5BU5D_t4F199DA485A53982B75512962E433EE1A536AD56* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t09FCE348A4E5E52E266CCC1DE562EFC20187B630, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t09FCE348A4E5E52E266CCC1DE562EFC20187B630, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t09FCE348A4E5E52E266CCC1DE562EFC20187B630, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t09FCE348A4E5E52E266CCC1DE562EFC20187B630_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ConstraintSourceU5BU5D_t4F199DA485A53982B75512962E433EE1A536AD56* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t09FCE348A4E5E52E266CCC1DE562EFC20187B630_StaticFields, ____emptyArray_5)); }
	inline ConstraintSourceU5BU5D_t4F199DA485A53982B75512962E433EE1A536AD56* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ConstraintSourceU5BU5D_t4F199DA485A53982B75512962E433EE1A536AD56** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ConstraintSourceU5BU5D_t4F199DA485A53982B75512962E433EE1A536AD56* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


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

// UnityEngine.Animation_Enumerator
struct  Enumerator_t6F97AECE1A160A668D8D8798607BE29B1D8CD92C  : public RuntimeObject
{
public:
	// UnityEngine.Animation UnityEngine.Animation_Enumerator::m_Outer
	Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * ___m_Outer_0;
	// System.Int32 UnityEngine.Animation_Enumerator::m_CurrentIndex
	int32_t ___m_CurrentIndex_1;

public:
	inline static int32_t get_offset_of_m_Outer_0() { return static_cast<int32_t>(offsetof(Enumerator_t6F97AECE1A160A668D8D8798607BE29B1D8CD92C, ___m_Outer_0)); }
	inline Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * get_m_Outer_0() const { return ___m_Outer_0; }
	inline Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C ** get_address_of_m_Outer_0() { return &___m_Outer_0; }
	inline void set_m_Outer_0(Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * value)
	{
		___m_Outer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Outer_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentIndex_1() { return static_cast<int32_t>(offsetof(Enumerator_t6F97AECE1A160A668D8D8798607BE29B1D8CD92C, ___m_CurrentIndex_1)); }
	inline int32_t get_m_CurrentIndex_1() const { return ___m_CurrentIndex_1; }
	inline int32_t* get_address_of_m_CurrentIndex_1() { return &___m_CurrentIndex_1; }
	inline void set_m_CurrentIndex_1(int32_t value)
	{
		___m_CurrentIndex_1 = value;
	}
};


// UnityEngine.Animations.AnimationPlayableBinding
struct  AnimationPlayableBinding_t85E9153BA6187DCB4CEDB7DCF2C300C57814EDE3  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Animations.AnimationPlayableExtensions
struct  AnimationPlayableExtensions_tECBA1D48F6CC1443316644A4040E6C6A8F460D21  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Animations.AnimationPlayableGraphExtensions
struct  AnimationPlayableGraphExtensions_t27F6B5DD7B42C2F5ECB5122325B1146DAE99D025  : public RuntimeObject
{
public:

public:
};


// UnityEngine.HumanTrait
struct  HumanTrait_tCD3BF6F692C3AE5803A1872F826932F07BA1ADE9  : public RuntimeObject
{
public:

public:
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


// System.UInt32
struct  UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
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


// UnityEngine.Animations.ConstraintSource
struct  ConstraintSource_t63B0D0146AE7F080F4801408E83F82D7FD12B994 
{
public:
	// UnityEngine.Transform UnityEngine.Animations.ConstraintSource::m_SourceTransform
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___m_SourceTransform_0;
	// System.Single UnityEngine.Animations.ConstraintSource::m_Weight
	float ___m_Weight_1;

public:
	inline static int32_t get_offset_of_m_SourceTransform_0() { return static_cast<int32_t>(offsetof(ConstraintSource_t63B0D0146AE7F080F4801408E83F82D7FD12B994, ___m_SourceTransform_0)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_m_SourceTransform_0() const { return ___m_SourceTransform_0; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_m_SourceTransform_0() { return &___m_SourceTransform_0; }
	inline void set_m_SourceTransform_0(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___m_SourceTransform_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SourceTransform_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Weight_1() { return static_cast<int32_t>(offsetof(ConstraintSource_t63B0D0146AE7F080F4801408E83F82D7FD12B994, ___m_Weight_1)); }
	inline float get_m_Weight_1() const { return ___m_Weight_1; }
	inline float* get_address_of_m_Weight_1() { return &___m_Weight_1; }
	inline void set_m_Weight_1(float value)
	{
		___m_Weight_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Animations.ConstraintSource
struct ConstraintSource_t63B0D0146AE7F080F4801408E83F82D7FD12B994_marshaled_pinvoke
{
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___m_SourceTransform_0;
	float ___m_Weight_1;
};
// Native definition for COM marshalling of UnityEngine.Animations.ConstraintSource
struct ConstraintSource_t63B0D0146AE7F080F4801408E83F82D7FD12B994_marshaled_com
{
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___m_SourceTransform_0;
	float ___m_Weight_1;
};

// UnityEngine.Animations.NotKeyableAttribute
struct  NotKeyableAttribute_tC0F8DAA85C33BBE045EFE59BB65D9A060D4282BE  : public Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74
{
public:

public:
};


// UnityEngine.AnimatorClipInfo
struct  AnimatorClipInfo_t78457ABBA83D388EDFF26F436F5E61A29CF4E180 
{
public:
	// System.Int32 UnityEngine.AnimatorClipInfo::m_ClipInstanceID
	int32_t ___m_ClipInstanceID_0;
	// System.Single UnityEngine.AnimatorClipInfo::m_Weight
	float ___m_Weight_1;

public:
	inline static int32_t get_offset_of_m_ClipInstanceID_0() { return static_cast<int32_t>(offsetof(AnimatorClipInfo_t78457ABBA83D388EDFF26F436F5E61A29CF4E180, ___m_ClipInstanceID_0)); }
	inline int32_t get_m_ClipInstanceID_0() const { return ___m_ClipInstanceID_0; }
	inline int32_t* get_address_of_m_ClipInstanceID_0() { return &___m_ClipInstanceID_0; }
	inline void set_m_ClipInstanceID_0(int32_t value)
	{
		___m_ClipInstanceID_0 = value;
	}

	inline static int32_t get_offset_of_m_Weight_1() { return static_cast<int32_t>(offsetof(AnimatorClipInfo_t78457ABBA83D388EDFF26F436F5E61A29CF4E180, ___m_Weight_1)); }
	inline float get_m_Weight_1() const { return ___m_Weight_1; }
	inline float* get_address_of_m_Weight_1() { return &___m_Weight_1; }
	inline void set_m_Weight_1(float value)
	{
		___m_Weight_1 = value;
	}
};


// UnityEngine.AnimatorStateInfo
struct  AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 
{
public:
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Name
	int32_t ___m_Name_0;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Path
	int32_t ___m_Path_1;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_FullPath
	int32_t ___m_FullPath_2;
	// System.Single UnityEngine.AnimatorStateInfo::m_NormalizedTime
	float ___m_NormalizedTime_3;
	// System.Single UnityEngine.AnimatorStateInfo::m_Length
	float ___m_Length_4;
	// System.Single UnityEngine.AnimatorStateInfo::m_Speed
	float ___m_Speed_5;
	// System.Single UnityEngine.AnimatorStateInfo::m_SpeedMultiplier
	float ___m_SpeedMultiplier_6;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Tag
	int32_t ___m_Tag_7;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Loop
	int32_t ___m_Loop_8;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2, ___m_Name_0)); }
	inline int32_t get_m_Name_0() const { return ___m_Name_0; }
	inline int32_t* get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(int32_t value)
	{
		___m_Name_0 = value;
	}

	inline static int32_t get_offset_of_m_Path_1() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2, ___m_Path_1)); }
	inline int32_t get_m_Path_1() const { return ___m_Path_1; }
	inline int32_t* get_address_of_m_Path_1() { return &___m_Path_1; }
	inline void set_m_Path_1(int32_t value)
	{
		___m_Path_1 = value;
	}

	inline static int32_t get_offset_of_m_FullPath_2() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2, ___m_FullPath_2)); }
	inline int32_t get_m_FullPath_2() const { return ___m_FullPath_2; }
	inline int32_t* get_address_of_m_FullPath_2() { return &___m_FullPath_2; }
	inline void set_m_FullPath_2(int32_t value)
	{
		___m_FullPath_2 = value;
	}

	inline static int32_t get_offset_of_m_NormalizedTime_3() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2, ___m_NormalizedTime_3)); }
	inline float get_m_NormalizedTime_3() const { return ___m_NormalizedTime_3; }
	inline float* get_address_of_m_NormalizedTime_3() { return &___m_NormalizedTime_3; }
	inline void set_m_NormalizedTime_3(float value)
	{
		___m_NormalizedTime_3 = value;
	}

	inline static int32_t get_offset_of_m_Length_4() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2, ___m_Length_4)); }
	inline float get_m_Length_4() const { return ___m_Length_4; }
	inline float* get_address_of_m_Length_4() { return &___m_Length_4; }
	inline void set_m_Length_4(float value)
	{
		___m_Length_4 = value;
	}

	inline static int32_t get_offset_of_m_Speed_5() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2, ___m_Speed_5)); }
	inline float get_m_Speed_5() const { return ___m_Speed_5; }
	inline float* get_address_of_m_Speed_5() { return &___m_Speed_5; }
	inline void set_m_Speed_5(float value)
	{
		___m_Speed_5 = value;
	}

	inline static int32_t get_offset_of_m_SpeedMultiplier_6() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2, ___m_SpeedMultiplier_6)); }
	inline float get_m_SpeedMultiplier_6() const { return ___m_SpeedMultiplier_6; }
	inline float* get_address_of_m_SpeedMultiplier_6() { return &___m_SpeedMultiplier_6; }
	inline void set_m_SpeedMultiplier_6(float value)
	{
		___m_SpeedMultiplier_6 = value;
	}

	inline static int32_t get_offset_of_m_Tag_7() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2, ___m_Tag_7)); }
	inline int32_t get_m_Tag_7() const { return ___m_Tag_7; }
	inline int32_t* get_address_of_m_Tag_7() { return &___m_Tag_7; }
	inline void set_m_Tag_7(int32_t value)
	{
		___m_Tag_7 = value;
	}

	inline static int32_t get_offset_of_m_Loop_8() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2, ___m_Loop_8)); }
	inline int32_t get_m_Loop_8() const { return ___m_Loop_8; }
	inline int32_t* get_address_of_m_Loop_8() { return &___m_Loop_8; }
	inline void set_m_Loop_8(int32_t value)
	{
		___m_Loop_8 = value;
	}
};


// UnityEngine.AnimatorTransitionInfo
struct  AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B 
{
public:
	// System.Int32 UnityEngine.AnimatorTransitionInfo::m_FullPath
	int32_t ___m_FullPath_0;
	// System.Int32 UnityEngine.AnimatorTransitionInfo::m_UserName
	int32_t ___m_UserName_1;
	// System.Int32 UnityEngine.AnimatorTransitionInfo::m_Name
	int32_t ___m_Name_2;
	// System.Boolean UnityEngine.AnimatorTransitionInfo::m_HasFixedDuration
	bool ___m_HasFixedDuration_3;
	// System.Single UnityEngine.AnimatorTransitionInfo::m_Duration
	float ___m_Duration_4;
	// System.Single UnityEngine.AnimatorTransitionInfo::m_NormalizedTime
	float ___m_NormalizedTime_5;
	// System.Boolean UnityEngine.AnimatorTransitionInfo::m_AnyState
	bool ___m_AnyState_6;
	// System.Int32 UnityEngine.AnimatorTransitionInfo::m_TransitionType
	int32_t ___m_TransitionType_7;

public:
	inline static int32_t get_offset_of_m_FullPath_0() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B, ___m_FullPath_0)); }
	inline int32_t get_m_FullPath_0() const { return ___m_FullPath_0; }
	inline int32_t* get_address_of_m_FullPath_0() { return &___m_FullPath_0; }
	inline void set_m_FullPath_0(int32_t value)
	{
		___m_FullPath_0 = value;
	}

	inline static int32_t get_offset_of_m_UserName_1() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B, ___m_UserName_1)); }
	inline int32_t get_m_UserName_1() const { return ___m_UserName_1; }
	inline int32_t* get_address_of_m_UserName_1() { return &___m_UserName_1; }
	inline void set_m_UserName_1(int32_t value)
	{
		___m_UserName_1 = value;
	}

	inline static int32_t get_offset_of_m_Name_2() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B, ___m_Name_2)); }
	inline int32_t get_m_Name_2() const { return ___m_Name_2; }
	inline int32_t* get_address_of_m_Name_2() { return &___m_Name_2; }
	inline void set_m_Name_2(int32_t value)
	{
		___m_Name_2 = value;
	}

	inline static int32_t get_offset_of_m_HasFixedDuration_3() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B, ___m_HasFixedDuration_3)); }
	inline bool get_m_HasFixedDuration_3() const { return ___m_HasFixedDuration_3; }
	inline bool* get_address_of_m_HasFixedDuration_3() { return &___m_HasFixedDuration_3; }
	inline void set_m_HasFixedDuration_3(bool value)
	{
		___m_HasFixedDuration_3 = value;
	}

	inline static int32_t get_offset_of_m_Duration_4() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B, ___m_Duration_4)); }
	inline float get_m_Duration_4() const { return ___m_Duration_4; }
	inline float* get_address_of_m_Duration_4() { return &___m_Duration_4; }
	inline void set_m_Duration_4(float value)
	{
		___m_Duration_4 = value;
	}

	inline static int32_t get_offset_of_m_NormalizedTime_5() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B, ___m_NormalizedTime_5)); }
	inline float get_m_NormalizedTime_5() const { return ___m_NormalizedTime_5; }
	inline float* get_address_of_m_NormalizedTime_5() { return &___m_NormalizedTime_5; }
	inline void set_m_NormalizedTime_5(float value)
	{
		___m_NormalizedTime_5 = value;
	}

	inline static int32_t get_offset_of_m_AnyState_6() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B, ___m_AnyState_6)); }
	inline bool get_m_AnyState_6() const { return ___m_AnyState_6; }
	inline bool* get_address_of_m_AnyState_6() { return &___m_AnyState_6; }
	inline void set_m_AnyState_6(bool value)
	{
		___m_AnyState_6 = value;
	}

	inline static int32_t get_offset_of_m_TransitionType_7() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B, ___m_TransitionType_7)); }
	inline int32_t get_m_TransitionType_7() const { return ___m_TransitionType_7; }
	inline int32_t* get_address_of_m_TransitionType_7() { return &___m_TransitionType_7; }
	inline void set_m_TransitionType_7(int32_t value)
	{
		___m_TransitionType_7 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AnimatorTransitionInfo
struct AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B_marshaled_pinvoke
{
	int32_t ___m_FullPath_0;
	int32_t ___m_UserName_1;
	int32_t ___m_Name_2;
	int32_t ___m_HasFixedDuration_3;
	float ___m_Duration_4;
	float ___m_NormalizedTime_5;
	int32_t ___m_AnyState_6;
	int32_t ___m_TransitionType_7;
};
// Native definition for COM marshalling of UnityEngine.AnimatorTransitionInfo
struct AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B_marshaled_com
{
	int32_t ___m_FullPath_0;
	int32_t ___m_UserName_1;
	int32_t ___m_Name_2;
	int32_t ___m_HasFixedDuration_3;
	float ___m_Duration_4;
	float ___m_NormalizedTime_5;
	int32_t ___m_AnyState_6;
	int32_t ___m_TransitionType_7;
};

// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.SharedBetweenAnimatorsAttribute
struct  SharedBetweenAnimatorsAttribute_tD52C4EACCF9B8F7A21A34D11D3971A823B131F03  : public Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74
{
public:

public:
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
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

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.AnimationEventSource
struct  AnimationEventSource_t0CA86CB3D775209B46F475A99887C93530F20702 
{
public:
	// System.Int32 UnityEngine.AnimationEventSource::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AnimationEventSource_t0CA86CB3D775209B46F475A99887C93530F20702, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Animations.AnimationHumanStream
struct  AnimationHumanStream_t4E6A2B8E37C9F4DCC77F8B2A802AD604EDEC4FB2 
{
public:
	// System.IntPtr UnityEngine.Animations.AnimationHumanStream::stream
	intptr_t ___stream_0;

public:
	inline static int32_t get_offset_of_stream_0() { return static_cast<int32_t>(offsetof(AnimationHumanStream_t4E6A2B8E37C9F4DCC77F8B2A802AD604EDEC4FB2, ___stream_0)); }
	inline intptr_t get_stream_0() const { return ___stream_0; }
	inline intptr_t* get_address_of_stream_0() { return &___stream_0; }
	inline void set_stream_0(intptr_t value)
	{
		___stream_0 = value;
	}
};


// UnityEngine.Animations.AnimationStream
struct  AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E 
{
public:
	// System.UInt32 UnityEngine.Animations.AnimationStream::m_AnimatorBindingsVersion
	uint32_t ___m_AnimatorBindingsVersion_0;
	// System.IntPtr UnityEngine.Animations.AnimationStream::constant
	intptr_t ___constant_1;
	// System.IntPtr UnityEngine.Animations.AnimationStream::input
	intptr_t ___input_2;
	// System.IntPtr UnityEngine.Animations.AnimationStream::output
	intptr_t ___output_3;
	// System.IntPtr UnityEngine.Animations.AnimationStream::workspace
	intptr_t ___workspace_4;
	// System.IntPtr UnityEngine.Animations.AnimationStream::inputStreamAccessor
	intptr_t ___inputStreamAccessor_5;
	// System.IntPtr UnityEngine.Animations.AnimationStream::animationHandleBinder
	intptr_t ___animationHandleBinder_6;

public:
	inline static int32_t get_offset_of_m_AnimatorBindingsVersion_0() { return static_cast<int32_t>(offsetof(AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E, ___m_AnimatorBindingsVersion_0)); }
	inline uint32_t get_m_AnimatorBindingsVersion_0() const { return ___m_AnimatorBindingsVersion_0; }
	inline uint32_t* get_address_of_m_AnimatorBindingsVersion_0() { return &___m_AnimatorBindingsVersion_0; }
	inline void set_m_AnimatorBindingsVersion_0(uint32_t value)
	{
		___m_AnimatorBindingsVersion_0 = value;
	}

	inline static int32_t get_offset_of_constant_1() { return static_cast<int32_t>(offsetof(AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E, ___constant_1)); }
	inline intptr_t get_constant_1() const { return ___constant_1; }
	inline intptr_t* get_address_of_constant_1() { return &___constant_1; }
	inline void set_constant_1(intptr_t value)
	{
		___constant_1 = value;
	}

	inline static int32_t get_offset_of_input_2() { return static_cast<int32_t>(offsetof(AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E, ___input_2)); }
	inline intptr_t get_input_2() const { return ___input_2; }
	inline intptr_t* get_address_of_input_2() { return &___input_2; }
	inline void set_input_2(intptr_t value)
	{
		___input_2 = value;
	}

	inline static int32_t get_offset_of_output_3() { return static_cast<int32_t>(offsetof(AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E, ___output_3)); }
	inline intptr_t get_output_3() const { return ___output_3; }
	inline intptr_t* get_address_of_output_3() { return &___output_3; }
	inline void set_output_3(intptr_t value)
	{
		___output_3 = value;
	}

	inline static int32_t get_offset_of_workspace_4() { return static_cast<int32_t>(offsetof(AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E, ___workspace_4)); }
	inline intptr_t get_workspace_4() const { return ___workspace_4; }
	inline intptr_t* get_address_of_workspace_4() { return &___workspace_4; }
	inline void set_workspace_4(intptr_t value)
	{
		___workspace_4 = value;
	}

	inline static int32_t get_offset_of_inputStreamAccessor_5() { return static_cast<int32_t>(offsetof(AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E, ___inputStreamAccessor_5)); }
	inline intptr_t get_inputStreamAccessor_5() const { return ___inputStreamAccessor_5; }
	inline intptr_t* get_address_of_inputStreamAccessor_5() { return &___inputStreamAccessor_5; }
	inline void set_inputStreamAccessor_5(intptr_t value)
	{
		___inputStreamAccessor_5 = value;
	}

	inline static int32_t get_offset_of_animationHandleBinder_6() { return static_cast<int32_t>(offsetof(AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E, ___animationHandleBinder_6)); }
	inline intptr_t get_animationHandleBinder_6() const { return ___animationHandleBinder_6; }
	inline intptr_t* get_address_of_animationHandleBinder_6() { return &___animationHandleBinder_6; }
	inline void set_animationHandleBinder_6(intptr_t value)
	{
		___animationHandleBinder_6 = value;
	}
};


// UnityEngine.AnimatorControllerParameterType
struct  AnimatorControllerParameterType_t340CE2BBAB87F4684FEA76C24F1BCB9FC10D5B1F 
{
public:
	// System.Int32 UnityEngine.AnimatorControllerParameterType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AnimatorControllerParameterType_t340CE2BBAB87F4684FEA76C24F1BCB9FC10D5B1F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.AvatarIKGoal
struct  AvatarIKGoal_t15BB8118646D4C1217A2A8F4098ACB473B9C4C11 
{
public:
	// System.Int32 UnityEngine.AvatarIKGoal::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AvatarIKGoal_t15BB8118646D4C1217A2A8F4098ACB473B9C4C11, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.HumanBodyBones
struct  HumanBodyBones_t84CDC0803F451E10186E589016F33D8404227892 
{
public:
	// System.Int32 UnityEngine.HumanBodyBones::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HumanBodyBones_t84CDC0803F451E10186E589016F33D8404227892, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.HumanLimit
struct  HumanLimit_t6AB2A599FC9E1F7E1598954FA9A0E568ECA5B6F3 
{
public:
	// UnityEngine.Vector3 UnityEngine.HumanLimit::m_Min
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Min_0;
	// UnityEngine.Vector3 UnityEngine.HumanLimit::m_Max
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Max_1;
	// UnityEngine.Vector3 UnityEngine.HumanLimit::m_Center
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Center_2;
	// System.Single UnityEngine.HumanLimit::m_AxisLength
	float ___m_AxisLength_3;
	// System.Int32 UnityEngine.HumanLimit::m_UseDefaultValues
	int32_t ___m_UseDefaultValues_4;

public:
	inline static int32_t get_offset_of_m_Min_0() { return static_cast<int32_t>(offsetof(HumanLimit_t6AB2A599FC9E1F7E1598954FA9A0E568ECA5B6F3, ___m_Min_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Min_0() const { return ___m_Min_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Min_0() { return &___m_Min_0; }
	inline void set_m_Min_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Min_0 = value;
	}

	inline static int32_t get_offset_of_m_Max_1() { return static_cast<int32_t>(offsetof(HumanLimit_t6AB2A599FC9E1F7E1598954FA9A0E568ECA5B6F3, ___m_Max_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Max_1() const { return ___m_Max_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Max_1() { return &___m_Max_1; }
	inline void set_m_Max_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Max_1 = value;
	}

	inline static int32_t get_offset_of_m_Center_2() { return static_cast<int32_t>(offsetof(HumanLimit_t6AB2A599FC9E1F7E1598954FA9A0E568ECA5B6F3, ___m_Center_2)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Center_2() const { return ___m_Center_2; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Center_2() { return &___m_Center_2; }
	inline void set_m_Center_2(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Center_2 = value;
	}

	inline static int32_t get_offset_of_m_AxisLength_3() { return static_cast<int32_t>(offsetof(HumanLimit_t6AB2A599FC9E1F7E1598954FA9A0E568ECA5B6F3, ___m_AxisLength_3)); }
	inline float get_m_AxisLength_3() const { return ___m_AxisLength_3; }
	inline float* get_address_of_m_AxisLength_3() { return &___m_AxisLength_3; }
	inline void set_m_AxisLength_3(float value)
	{
		___m_AxisLength_3 = value;
	}

	inline static int32_t get_offset_of_m_UseDefaultValues_4() { return static_cast<int32_t>(offsetof(HumanLimit_t6AB2A599FC9E1F7E1598954FA9A0E568ECA5B6F3, ___m_UseDefaultValues_4)); }
	inline int32_t get_m_UseDefaultValues_4() const { return ___m_UseDefaultValues_4; }
	inline int32_t* get_address_of_m_UseDefaultValues_4() { return &___m_UseDefaultValues_4; }
	inline void set_m_UseDefaultValues_4(int32_t value)
	{
		___m_UseDefaultValues_4 = value;
	}
};


// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.PlayMode
struct  PlayMode_tE55342CFE774475487030D6B30D815DEF4C509C3 
{
public:
	// System.Int32 UnityEngine.PlayMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlayMode_tE55342CFE774475487030D6B30D815DEF4C509C3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Playables.PlayableGraph
struct  PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableGraph::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableGraph::m_Version
	uint32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA, ___m_Version_1)); }
	inline uint32_t get_m_Version_1() const { return ___m_Version_1; }
	inline uint32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(uint32_t value)
	{
		___m_Version_1 = value;
	}
};


// UnityEngine.Playables.PlayableHandle
struct  PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableHandle::m_Version
	uint32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182, ___m_Version_1)); }
	inline uint32_t get_m_Version_1() const { return ___m_Version_1; }
	inline uint32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(uint32_t value)
	{
		___m_Version_1 = value;
	}
};

struct PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_StaticFields
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::m_Null
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Null_2;

public:
	inline static int32_t get_offset_of_m_Null_2() { return static_cast<int32_t>(offsetof(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_StaticFields, ___m_Null_2)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Null_2() const { return ___m_Null_2; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Null_2() { return &___m_Null_2; }
	inline void set_m_Null_2(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Null_2 = value;
	}
};


// UnityEngine.Playables.PlayableOutputHandle
struct  PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableOutputHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableOutputHandle::m_Version
	uint32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922, ___m_Version_1)); }
	inline uint32_t get_m_Version_1() const { return ___m_Version_1; }
	inline uint32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(uint32_t value)
	{
		___m_Version_1 = value;
	}
};

struct PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922_StaticFields
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutputHandle::m_Null
	PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  ___m_Null_2;

public:
	inline static int32_t get_offset_of_m_Null_2() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922_StaticFields, ___m_Null_2)); }
	inline PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  get_m_Null_2() const { return ___m_Null_2; }
	inline PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 * get_address_of_m_Null_2() { return &___m_Null_2; }
	inline void set_m_Null_2(PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  value)
	{
		___m_Null_2 = value;
	}
};


// UnityEngine.SkeletonBone
struct  SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5 
{
public:
	// System.String UnityEngine.SkeletonBone::name
	String_t* ___name_0;
	// System.String UnityEngine.SkeletonBone::parentName
	String_t* ___parentName_1;
	// UnityEngine.Vector3 UnityEngine.SkeletonBone::position
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position_2;
	// UnityEngine.Quaternion UnityEngine.SkeletonBone::rotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation_3;
	// UnityEngine.Vector3 UnityEngine.SkeletonBone::scale
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___scale_4;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_parentName_1() { return static_cast<int32_t>(offsetof(SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5, ___parentName_1)); }
	inline String_t* get_parentName_1() const { return ___parentName_1; }
	inline String_t** get_address_of_parentName_1() { return &___parentName_1; }
	inline void set_parentName_1(String_t* value)
	{
		___parentName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parentName_1), (void*)value);
	}

	inline static int32_t get_offset_of_position_2() { return static_cast<int32_t>(offsetof(SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5, ___position_2)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_position_2() const { return ___position_2; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_position_2() { return &___position_2; }
	inline void set_position_2(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___position_2 = value;
	}

	inline static int32_t get_offset_of_rotation_3() { return static_cast<int32_t>(offsetof(SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5, ___rotation_3)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_rotation_3() const { return ___rotation_3; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_rotation_3() { return &___rotation_3; }
	inline void set_rotation_3(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___rotation_3 = value;
	}

	inline static int32_t get_offset_of_scale_4() { return static_cast<int32_t>(offsetof(SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5, ___scale_4)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_scale_4() const { return ___scale_4; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_scale_4() { return &___scale_4; }
	inline void set_scale_4(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___scale_4 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.SkeletonBone
struct SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5_marshaled_pinvoke
{
	char* ___name_0;
	char* ___parentName_1;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position_2;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation_3;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___scale_4;
};
// Native definition for COM marshalling of UnityEngine.SkeletonBone
struct SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppChar* ___parentName_1;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position_2;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation_3;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___scale_4;
};

// UnityEngine.TrackedReference
struct  TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.TrackedReference::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.TrackedReference
struct TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.TrackedReference
struct TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.WrapMode
struct  WrapMode_t3704F0388A4F801D2F54B1EA1EE8DC014D667AFD 
{
public:
	// System.Int32 UnityEngine.WrapMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WrapMode_t3704F0388A4F801D2F54B1EA1EE8DC014D667AFD, ___value___2)); }
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

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.AnimationEvent
struct  AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F  : public RuntimeObject
{
public:
	// System.Single UnityEngine.AnimationEvent::m_Time
	float ___m_Time_0;
	// System.String UnityEngine.AnimationEvent::m_FunctionName
	String_t* ___m_FunctionName_1;
	// System.String UnityEngine.AnimationEvent::m_StringParameter
	String_t* ___m_StringParameter_2;
	// UnityEngine.Object UnityEngine.AnimationEvent::m_ObjectReferenceParameter
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___m_ObjectReferenceParameter_3;
	// System.Single UnityEngine.AnimationEvent::m_FloatParameter
	float ___m_FloatParameter_4;
	// System.Int32 UnityEngine.AnimationEvent::m_IntParameter
	int32_t ___m_IntParameter_5;
	// System.Int32 UnityEngine.AnimationEvent::m_MessageOptions
	int32_t ___m_MessageOptions_6;
	// UnityEngine.AnimationEventSource UnityEngine.AnimationEvent::m_Source
	int32_t ___m_Source_7;
	// UnityEngine.AnimationState UnityEngine.AnimationEvent::m_StateSender
	AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * ___m_StateSender_8;
	// UnityEngine.AnimatorStateInfo UnityEngine.AnimationEvent::m_AnimatorStateInfo
	AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2  ___m_AnimatorStateInfo_9;
	// UnityEngine.AnimatorClipInfo UnityEngine.AnimationEvent::m_AnimatorClipInfo
	AnimatorClipInfo_t78457ABBA83D388EDFF26F436F5E61A29CF4E180  ___m_AnimatorClipInfo_10;

public:
	inline static int32_t get_offset_of_m_Time_0() { return static_cast<int32_t>(offsetof(AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F, ___m_Time_0)); }
	inline float get_m_Time_0() const { return ___m_Time_0; }
	inline float* get_address_of_m_Time_0() { return &___m_Time_0; }
	inline void set_m_Time_0(float value)
	{
		___m_Time_0 = value;
	}

	inline static int32_t get_offset_of_m_FunctionName_1() { return static_cast<int32_t>(offsetof(AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F, ___m_FunctionName_1)); }
	inline String_t* get_m_FunctionName_1() const { return ___m_FunctionName_1; }
	inline String_t** get_address_of_m_FunctionName_1() { return &___m_FunctionName_1; }
	inline void set_m_FunctionName_1(String_t* value)
	{
		___m_FunctionName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FunctionName_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_StringParameter_2() { return static_cast<int32_t>(offsetof(AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F, ___m_StringParameter_2)); }
	inline String_t* get_m_StringParameter_2() const { return ___m_StringParameter_2; }
	inline String_t** get_address_of_m_StringParameter_2() { return &___m_StringParameter_2; }
	inline void set_m_StringParameter_2(String_t* value)
	{
		___m_StringParameter_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StringParameter_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_ObjectReferenceParameter_3() { return static_cast<int32_t>(offsetof(AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F, ___m_ObjectReferenceParameter_3)); }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * get_m_ObjectReferenceParameter_3() const { return ___m_ObjectReferenceParameter_3; }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 ** get_address_of_m_ObjectReferenceParameter_3() { return &___m_ObjectReferenceParameter_3; }
	inline void set_m_ObjectReferenceParameter_3(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * value)
	{
		___m_ObjectReferenceParameter_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ObjectReferenceParameter_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_FloatParameter_4() { return static_cast<int32_t>(offsetof(AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F, ___m_FloatParameter_4)); }
	inline float get_m_FloatParameter_4() const { return ___m_FloatParameter_4; }
	inline float* get_address_of_m_FloatParameter_4() { return &___m_FloatParameter_4; }
	inline void set_m_FloatParameter_4(float value)
	{
		___m_FloatParameter_4 = value;
	}

	inline static int32_t get_offset_of_m_IntParameter_5() { return static_cast<int32_t>(offsetof(AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F, ___m_IntParameter_5)); }
	inline int32_t get_m_IntParameter_5() const { return ___m_IntParameter_5; }
	inline int32_t* get_address_of_m_IntParameter_5() { return &___m_IntParameter_5; }
	inline void set_m_IntParameter_5(int32_t value)
	{
		___m_IntParameter_5 = value;
	}

	inline static int32_t get_offset_of_m_MessageOptions_6() { return static_cast<int32_t>(offsetof(AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F, ___m_MessageOptions_6)); }
	inline int32_t get_m_MessageOptions_6() const { return ___m_MessageOptions_6; }
	inline int32_t* get_address_of_m_MessageOptions_6() { return &___m_MessageOptions_6; }
	inline void set_m_MessageOptions_6(int32_t value)
	{
		___m_MessageOptions_6 = value;
	}

	inline static int32_t get_offset_of_m_Source_7() { return static_cast<int32_t>(offsetof(AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F, ___m_Source_7)); }
	inline int32_t get_m_Source_7() const { return ___m_Source_7; }
	inline int32_t* get_address_of_m_Source_7() { return &___m_Source_7; }
	inline void set_m_Source_7(int32_t value)
	{
		___m_Source_7 = value;
	}

	inline static int32_t get_offset_of_m_StateSender_8() { return static_cast<int32_t>(offsetof(AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F, ___m_StateSender_8)); }
	inline AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * get_m_StateSender_8() const { return ___m_StateSender_8; }
	inline AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 ** get_address_of_m_StateSender_8() { return &___m_StateSender_8; }
	inline void set_m_StateSender_8(AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * value)
	{
		___m_StateSender_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StateSender_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_AnimatorStateInfo_9() { return static_cast<int32_t>(offsetof(AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F, ___m_AnimatorStateInfo_9)); }
	inline AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2  get_m_AnimatorStateInfo_9() const { return ___m_AnimatorStateInfo_9; }
	inline AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 * get_address_of_m_AnimatorStateInfo_9() { return &___m_AnimatorStateInfo_9; }
	inline void set_m_AnimatorStateInfo_9(AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2  value)
	{
		___m_AnimatorStateInfo_9 = value;
	}

	inline static int32_t get_offset_of_m_AnimatorClipInfo_10() { return static_cast<int32_t>(offsetof(AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F, ___m_AnimatorClipInfo_10)); }
	inline AnimatorClipInfo_t78457ABBA83D388EDFF26F436F5E61A29CF4E180  get_m_AnimatorClipInfo_10() const { return ___m_AnimatorClipInfo_10; }
	inline AnimatorClipInfo_t78457ABBA83D388EDFF26F436F5E61A29CF4E180 * get_address_of_m_AnimatorClipInfo_10() { return &___m_AnimatorClipInfo_10; }
	inline void set_m_AnimatorClipInfo_10(AnimatorClipInfo_t78457ABBA83D388EDFF26F436F5E61A29CF4E180  value)
	{
		___m_AnimatorClipInfo_10 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AnimationEvent
struct AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F_marshaled_pinvoke
{
	float ___m_Time_0;
	char* ___m_FunctionName_1;
	char* ___m_StringParameter_2;
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke ___m_ObjectReferenceParameter_3;
	float ___m_FloatParameter_4;
	int32_t ___m_IntParameter_5;
	int32_t ___m_MessageOptions_6;
	int32_t ___m_Source_7;
	AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * ___m_StateSender_8;
	AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2  ___m_AnimatorStateInfo_9;
	AnimatorClipInfo_t78457ABBA83D388EDFF26F436F5E61A29CF4E180  ___m_AnimatorClipInfo_10;
};
// Native definition for COM marshalling of UnityEngine.AnimationEvent
struct AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F_marshaled_com
{
	float ___m_Time_0;
	Il2CppChar* ___m_FunctionName_1;
	Il2CppChar* ___m_StringParameter_2;
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com* ___m_ObjectReferenceParameter_3;
	float ___m_FloatParameter_4;
	int32_t ___m_IntParameter_5;
	int32_t ___m_MessageOptions_6;
	int32_t ___m_Source_7;
	AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * ___m_StateSender_8;
	AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2  ___m_AnimatorStateInfo_9;
	AnimatorClipInfo_t78457ABBA83D388EDFF26F436F5E61A29CF4E180  ___m_AnimatorClipInfo_10;
};

// UnityEngine.AnimationState
struct  AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386  : public TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107
{
public:

public:
};


// UnityEngine.Animations.AnimationClipPlayable
struct  AnimationClipPlayable_t6EF38F9EED94096D4793638AFC8D11D285B43183 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationClipPlayable::m_Handle
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationClipPlayable_t6EF38F9EED94096D4793638AFC8D11D285B43183, ___m_Handle_0)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Handle_0 = value;
	}
};


// UnityEngine.Animations.AnimationLayerMixerPlayable
struct  AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationLayerMixerPlayable::m_Handle
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371, ___m_Handle_0)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Handle_0 = value;
	}
};

struct AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371_StaticFields
{
public:
	// UnityEngine.Animations.AnimationLayerMixerPlayable UnityEngine.Animations.AnimationLayerMixerPlayable::m_NullPlayable
	AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371_StaticFields, ___m_NullPlayable_1)); }
	inline AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371  value)
	{
		___m_NullPlayable_1 = value;
	}
};


// UnityEngine.Animations.AnimationMixerPlayable
struct  AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMixerPlayable::m_Handle
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A, ___m_Handle_0)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Handle_0 = value;
	}
};

struct AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A_StaticFields
{
public:
	// UnityEngine.Animations.AnimationMixerPlayable UnityEngine.Animations.AnimationMixerPlayable::m_NullPlayable
	AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A_StaticFields, ___m_NullPlayable_1)); }
	inline AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A  value)
	{
		___m_NullPlayable_1 = value;
	}
};


// UnityEngine.Animations.AnimationMotionXToDeltaPlayable
struct  AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMotionXToDeltaPlayable::m_Handle
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC, ___m_Handle_0)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Handle_0 = value;
	}
};

struct AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC_StaticFields
{
public:
	// UnityEngine.Animations.AnimationMotionXToDeltaPlayable UnityEngine.Animations.AnimationMotionXToDeltaPlayable::m_NullPlayable
	AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC_StaticFields, ___m_NullPlayable_1)); }
	inline AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC  value)
	{
		___m_NullPlayable_1 = value;
	}
};


// UnityEngine.Animations.AnimationOffsetPlayable
struct  AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationOffsetPlayable::m_Handle
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E, ___m_Handle_0)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Handle_0 = value;
	}
};

struct AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E_StaticFields
{
public:
	// UnityEngine.Animations.AnimationOffsetPlayable UnityEngine.Animations.AnimationOffsetPlayable::m_NullPlayable
	AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E_StaticFields, ___m_NullPlayable_1)); }
	inline AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E  value)
	{
		___m_NullPlayable_1 = value;
	}
};


// UnityEngine.Animations.AnimationPlayableOutput
struct  AnimationPlayableOutput_tA10178429D6528BDB4516F6788CE680E349553E6 
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Animations.AnimationPlayableOutput::m_Handle
	PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationPlayableOutput_tA10178429D6528BDB4516F6788CE680E349553E6, ___m_Handle_0)); }
	inline PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  value)
	{
		___m_Handle_0 = value;
	}
};


// UnityEngine.Animations.AnimationPosePlayable
struct  AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationPosePlayable::m_Handle
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07, ___m_Handle_0)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Handle_0 = value;
	}
};

struct AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07_StaticFields
{
public:
	// UnityEngine.Animations.AnimationPosePlayable UnityEngine.Animations.AnimationPosePlayable::m_NullPlayable
	AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07_StaticFields, ___m_NullPlayable_1)); }
	inline AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07  value)
	{
		___m_NullPlayable_1 = value;
	}
};


// UnityEngine.Animations.AnimationRemoveScalePlayable
struct  AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationRemoveScalePlayable::m_Handle
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B, ___m_Handle_0)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Handle_0 = value;
	}
};

struct AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B_StaticFields
{
public:
	// UnityEngine.Animations.AnimationRemoveScalePlayable UnityEngine.Animations.AnimationRemoveScalePlayable::m_NullPlayable
	AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B_StaticFields, ___m_NullPlayable_1)); }
	inline AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B  value)
	{
		___m_NullPlayable_1 = value;
	}
};


// UnityEngine.Animations.AnimationScriptPlayable
struct  AnimationScriptPlayable_t1EDF8E51A9ED180BB012656916323FA4F68CA27E 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationScriptPlayable::m_Handle
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationScriptPlayable_t1EDF8E51A9ED180BB012656916323FA4F68CA27E, ___m_Handle_0)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Handle_0 = value;
	}
};

struct AnimationScriptPlayable_t1EDF8E51A9ED180BB012656916323FA4F68CA27E_StaticFields
{
public:
	// UnityEngine.Animations.AnimationScriptPlayable UnityEngine.Animations.AnimationScriptPlayable::m_NullPlayable
	AnimationScriptPlayable_t1EDF8E51A9ED180BB012656916323FA4F68CA27E  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(AnimationScriptPlayable_t1EDF8E51A9ED180BB012656916323FA4F68CA27E_StaticFields, ___m_NullPlayable_1)); }
	inline AnimationScriptPlayable_t1EDF8E51A9ED180BB012656916323FA4F68CA27E  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline AnimationScriptPlayable_t1EDF8E51A9ED180BB012656916323FA4F68CA27E * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(AnimationScriptPlayable_t1EDF8E51A9ED180BB012656916323FA4F68CA27E  value)
	{
		___m_NullPlayable_1 = value;
	}
};


// UnityEngine.Animations.AnimatorControllerPlayable
struct  AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimatorControllerPlayable::m_Handle
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B, ___m_Handle_0)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Handle_0 = value;
	}
};

struct AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B_StaticFields
{
public:
	// UnityEngine.Animations.AnimatorControllerPlayable UnityEngine.Animations.AnimatorControllerPlayable::m_NullPlayable
	AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B_StaticFields, ___m_NullPlayable_1)); }
	inline AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B  value)
	{
		___m_NullPlayable_1 = value;
	}
};


// UnityEngine.AnimatorControllerParameter
struct  AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68  : public RuntimeObject
{
public:
	// System.String UnityEngine.AnimatorControllerParameter::m_Name
	String_t* ___m_Name_0;
	// UnityEngine.AnimatorControllerParameterType UnityEngine.AnimatorControllerParameter::m_Type
	int32_t ___m_Type_1;
	// System.Single UnityEngine.AnimatorControllerParameter::m_DefaultFloat
	float ___m_DefaultFloat_2;
	// System.Int32 UnityEngine.AnimatorControllerParameter::m_DefaultInt
	int32_t ___m_DefaultInt_3;
	// System.Boolean UnityEngine.AnimatorControllerParameter::m_DefaultBool
	bool ___m_DefaultBool_4;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_1() { return static_cast<int32_t>(offsetof(AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68, ___m_Type_1)); }
	inline int32_t get_m_Type_1() const { return ___m_Type_1; }
	inline int32_t* get_address_of_m_Type_1() { return &___m_Type_1; }
	inline void set_m_Type_1(int32_t value)
	{
		___m_Type_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultFloat_2() { return static_cast<int32_t>(offsetof(AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68, ___m_DefaultFloat_2)); }
	inline float get_m_DefaultFloat_2() const { return ___m_DefaultFloat_2; }
	inline float* get_address_of_m_DefaultFloat_2() { return &___m_DefaultFloat_2; }
	inline void set_m_DefaultFloat_2(float value)
	{
		___m_DefaultFloat_2 = value;
	}

	inline static int32_t get_offset_of_m_DefaultInt_3() { return static_cast<int32_t>(offsetof(AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68, ___m_DefaultInt_3)); }
	inline int32_t get_m_DefaultInt_3() const { return ___m_DefaultInt_3; }
	inline int32_t* get_address_of_m_DefaultInt_3() { return &___m_DefaultInt_3; }
	inline void set_m_DefaultInt_3(int32_t value)
	{
		___m_DefaultInt_3 = value;
	}

	inline static int32_t get_offset_of_m_DefaultBool_4() { return static_cast<int32_t>(offsetof(AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68, ___m_DefaultBool_4)); }
	inline bool get_m_DefaultBool_4() const { return ___m_DefaultBool_4; }
	inline bool* get_address_of_m_DefaultBool_4() { return &___m_DefaultBool_4; }
	inline void set_m_DefaultBool_4(bool value)
	{
		___m_DefaultBool_4 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AnimatorControllerParameter
struct AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68_marshaled_pinvoke
{
	char* ___m_Name_0;
	int32_t ___m_Type_1;
	float ___m_DefaultFloat_2;
	int32_t ___m_DefaultInt_3;
	int32_t ___m_DefaultBool_4;
};
// Native definition for COM marshalling of UnityEngine.AnimatorControllerParameter
struct AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68_marshaled_com
{
	Il2CppChar* ___m_Name_0;
	int32_t ___m_Type_1;
	float ___m_DefaultFloat_2;
	int32_t ___m_DefaultInt_3;
	int32_t ___m_DefaultBool_4;
};

// UnityEngine.Avatar
struct  Avatar_t14B515893D5504566D487FFE046DCB8C8C50D02B  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.AvatarMask
struct  AvatarMask_t12E2214B133E61C5CF28DC1E4F6DC2451C75D88A  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.HumanBone
struct  HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995 
{
public:
	// System.String UnityEngine.HumanBone::m_BoneName
	String_t* ___m_BoneName_0;
	// System.String UnityEngine.HumanBone::m_HumanName
	String_t* ___m_HumanName_1;
	// UnityEngine.HumanLimit UnityEngine.HumanBone::limit
	HumanLimit_t6AB2A599FC9E1F7E1598954FA9A0E568ECA5B6F3  ___limit_2;

public:
	inline static int32_t get_offset_of_m_BoneName_0() { return static_cast<int32_t>(offsetof(HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995, ___m_BoneName_0)); }
	inline String_t* get_m_BoneName_0() const { return ___m_BoneName_0; }
	inline String_t** get_address_of_m_BoneName_0() { return &___m_BoneName_0; }
	inline void set_m_BoneName_0(String_t* value)
	{
		___m_BoneName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BoneName_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_HumanName_1() { return static_cast<int32_t>(offsetof(HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995, ___m_HumanName_1)); }
	inline String_t* get_m_HumanName_1() const { return ___m_HumanName_1; }
	inline String_t** get_address_of_m_HumanName_1() { return &___m_HumanName_1; }
	inline void set_m_HumanName_1(String_t* value)
	{
		___m_HumanName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HumanName_1), (void*)value);
	}

	inline static int32_t get_offset_of_limit_2() { return static_cast<int32_t>(offsetof(HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995, ___limit_2)); }
	inline HumanLimit_t6AB2A599FC9E1F7E1598954FA9A0E568ECA5B6F3  get_limit_2() const { return ___limit_2; }
	inline HumanLimit_t6AB2A599FC9E1F7E1598954FA9A0E568ECA5B6F3 * get_address_of_limit_2() { return &___limit_2; }
	inline void set_limit_2(HumanLimit_t6AB2A599FC9E1F7E1598954FA9A0E568ECA5B6F3  value)
	{
		___limit_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.HumanBone
struct HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_marshaled_pinvoke
{
	char* ___m_BoneName_0;
	char* ___m_HumanName_1;
	HumanLimit_t6AB2A599FC9E1F7E1598954FA9A0E568ECA5B6F3  ___limit_2;
};
// Native definition for COM marshalling of UnityEngine.HumanBone
struct HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_marshaled_com
{
	Il2CppChar* ___m_BoneName_0;
	Il2CppChar* ___m_HumanName_1;
	HumanLimit_t6AB2A599FC9E1F7E1598954FA9A0E568ECA5B6F3  ___limit_2;
};

// UnityEngine.Motion
struct  Motion_t497BF9244B6A769D1AE925C3876B187C56C8CF8F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:
	// System.Boolean UnityEngine.Motion::<isAnimatorMotion>k__BackingField
	bool ___U3CisAnimatorMotionU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CisAnimatorMotionU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Motion_t497BF9244B6A769D1AE925C3876B187C56C8CF8F, ___U3CisAnimatorMotionU3Ek__BackingField_4)); }
	inline bool get_U3CisAnimatorMotionU3Ek__BackingField_4() const { return ___U3CisAnimatorMotionU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CisAnimatorMotionU3Ek__BackingField_4() { return &___U3CisAnimatorMotionU3Ek__BackingField_4; }
	inline void set_U3CisAnimatorMotionU3Ek__BackingField_4(bool value)
	{
		___U3CisAnimatorMotionU3Ek__BackingField_4 = value;
	}
};


// UnityEngine.Playables.Playable
struct  Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.Playable::m_Handle
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0, ___m_Handle_0)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Handle_0 = value;
	}
};

struct Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_StaticFields
{
public:
	// UnityEngine.Playables.Playable UnityEngine.Playables.Playable::m_NullPlayable
	Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_StaticFields, ___m_NullPlayable_1)); }
	inline Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  value)
	{
		___m_NullPlayable_1 = value;
	}
};


// UnityEngine.Playables.PlayableBinding
struct  PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8 
{
public:
	// System.String UnityEngine.Playables.PlayableBinding::m_StreamName
	String_t* ___m_StreamName_0;
	// UnityEngine.Object UnityEngine.Playables.PlayableBinding::m_SourceObject
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___m_SourceObject_1;
	// System.Type UnityEngine.Playables.PlayableBinding::m_SourceBindingType
	Type_t * ___m_SourceBindingType_2;
	// UnityEngine.Playables.PlayableBinding_CreateOutputMethod UnityEngine.Playables.PlayableBinding::m_CreateOutputMethod
	CreateOutputMethod_tA7B649F49822FC5DD0B0D9F17247C73CAECB1CA3 * ___m_CreateOutputMethod_3;

public:
	inline static int32_t get_offset_of_m_StreamName_0() { return static_cast<int32_t>(offsetof(PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8, ___m_StreamName_0)); }
	inline String_t* get_m_StreamName_0() const { return ___m_StreamName_0; }
	inline String_t** get_address_of_m_StreamName_0() { return &___m_StreamName_0; }
	inline void set_m_StreamName_0(String_t* value)
	{
		___m_StreamName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StreamName_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_SourceObject_1() { return static_cast<int32_t>(offsetof(PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8, ___m_SourceObject_1)); }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * get_m_SourceObject_1() const { return ___m_SourceObject_1; }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 ** get_address_of_m_SourceObject_1() { return &___m_SourceObject_1; }
	inline void set_m_SourceObject_1(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * value)
	{
		___m_SourceObject_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SourceObject_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SourceBindingType_2() { return static_cast<int32_t>(offsetof(PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8, ___m_SourceBindingType_2)); }
	inline Type_t * get_m_SourceBindingType_2() const { return ___m_SourceBindingType_2; }
	inline Type_t ** get_address_of_m_SourceBindingType_2() { return &___m_SourceBindingType_2; }
	inline void set_m_SourceBindingType_2(Type_t * value)
	{
		___m_SourceBindingType_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SourceBindingType_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CreateOutputMethod_3() { return static_cast<int32_t>(offsetof(PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8, ___m_CreateOutputMethod_3)); }
	inline CreateOutputMethod_tA7B649F49822FC5DD0B0D9F17247C73CAECB1CA3 * get_m_CreateOutputMethod_3() const { return ___m_CreateOutputMethod_3; }
	inline CreateOutputMethod_tA7B649F49822FC5DD0B0D9F17247C73CAECB1CA3 ** get_address_of_m_CreateOutputMethod_3() { return &___m_CreateOutputMethod_3; }
	inline void set_m_CreateOutputMethod_3(CreateOutputMethod_tA7B649F49822FC5DD0B0D9F17247C73CAECB1CA3 * value)
	{
		___m_CreateOutputMethod_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CreateOutputMethod_3), (void*)value);
	}
};

struct PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8_StaticFields
{
public:
	// UnityEngine.Playables.PlayableBinding[] UnityEngine.Playables.PlayableBinding::None
	PlayableBindingU5BU5D_t7EB322901D51EAB67BA4F711C87F3AC1CF5D89AB* ___None_4;
	// System.Double UnityEngine.Playables.PlayableBinding::DefaultDuration
	double ___DefaultDuration_5;

public:
	inline static int32_t get_offset_of_None_4() { return static_cast<int32_t>(offsetof(PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8_StaticFields, ___None_4)); }
	inline PlayableBindingU5BU5D_t7EB322901D51EAB67BA4F711C87F3AC1CF5D89AB* get_None_4() const { return ___None_4; }
	inline PlayableBindingU5BU5D_t7EB322901D51EAB67BA4F711C87F3AC1CF5D89AB** get_address_of_None_4() { return &___None_4; }
	inline void set_None_4(PlayableBindingU5BU5D_t7EB322901D51EAB67BA4F711C87F3AC1CF5D89AB* value)
	{
		___None_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___None_4), (void*)value);
	}

	inline static int32_t get_offset_of_DefaultDuration_5() { return static_cast<int32_t>(offsetof(PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8_StaticFields, ___DefaultDuration_5)); }
	inline double get_DefaultDuration_5() const { return ___DefaultDuration_5; }
	inline double* get_address_of_DefaultDuration_5() { return &___DefaultDuration_5; }
	inline void set_DefaultDuration_5(double value)
	{
		___DefaultDuration_5 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Playables.PlayableBinding
struct PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8_marshaled_pinvoke
{
	char* ___m_StreamName_0;
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke ___m_SourceObject_1;
	Type_t * ___m_SourceBindingType_2;
	Il2CppMethodPointer ___m_CreateOutputMethod_3;
};
// Native definition for COM marshalling of UnityEngine.Playables.PlayableBinding
struct PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8_marshaled_com
{
	Il2CppChar* ___m_StreamName_0;
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com* ___m_SourceObject_1;
	Type_t * ___m_SourceBindingType_2;
	Il2CppMethodPointer ___m_CreateOutputMethod_3;
};

// UnityEngine.Playables.PlayableOutput
struct  PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345 
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutput::m_Handle
	PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345, ___m_Handle_0)); }
	inline PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  value)
	{
		___m_Handle_0 = value;
	}
};

struct PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345_StaticFields
{
public:
	// UnityEngine.Playables.PlayableOutput UnityEngine.Playables.PlayableOutput::m_NullPlayableOutput
	PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345  ___m_NullPlayableOutput_1;

public:
	inline static int32_t get_offset_of_m_NullPlayableOutput_1() { return static_cast<int32_t>(offsetof(PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345_StaticFields, ___m_NullPlayableOutput_1)); }
	inline PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345  get_m_NullPlayableOutput_1() const { return ___m_NullPlayableOutput_1; }
	inline PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345 * get_address_of_m_NullPlayableOutput_1() { return &___m_NullPlayableOutput_1; }
	inline void set_m_NullPlayableOutput_1(PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345  value)
	{
		___m_NullPlayableOutput_1 = value;
	}
};


// UnityEngine.RuntimeAnimatorController
struct  RuntimeAnimatorController_tDA6672C8194522C2F60F8F2F241657E57C3520BD  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.ScriptableObject
struct  ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_pinvoke : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_com : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
};

// System.ArgumentException
struct  ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// System.IndexOutOfRangeException
struct  IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.InvalidCastException
struct  InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.InvalidOperationException
struct  InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// UnityEngine.AnimationClip
struct  AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE  : public Motion_t497BF9244B6A769D1AE925C3876B187C56C8CF8F
{
public:

public:
};


// UnityEngine.AnimatorOverrideController
struct  AnimatorOverrideController_t130F04B57E753FD4288EF3235699ABE7C88FF312  : public RuntimeAnimatorController_tDA6672C8194522C2F60F8F2F241657E57C3520BD
{
public:
	// UnityEngine.AnimatorOverrideController_OnOverrideControllerDirtyCallback UnityEngine.AnimatorOverrideController::OnOverrideControllerDirty
	OnOverrideControllerDirtyCallback_t73560E6E30067C09BC58A15F9D2726051B077E2E * ___OnOverrideControllerDirty_4;

public:
	inline static int32_t get_offset_of_OnOverrideControllerDirty_4() { return static_cast<int32_t>(offsetof(AnimatorOverrideController_t130F04B57E753FD4288EF3235699ABE7C88FF312, ___OnOverrideControllerDirty_4)); }
	inline OnOverrideControllerDirtyCallback_t73560E6E30067C09BC58A15F9D2726051B077E2E * get_OnOverrideControllerDirty_4() const { return ___OnOverrideControllerDirty_4; }
	inline OnOverrideControllerDirtyCallback_t73560E6E30067C09BC58A15F9D2726051B077E2E ** get_address_of_OnOverrideControllerDirty_4() { return &___OnOverrideControllerDirty_4; }
	inline void set_OnOverrideControllerDirty_4(OnOverrideControllerDirtyCallback_t73560E6E30067C09BC58A15F9D2726051B077E2E * value)
	{
		___OnOverrideControllerDirty_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnOverrideControllerDirty_4), (void*)value);
	}
};


// UnityEngine.AnimatorOverrideController_OnOverrideControllerDirtyCallback
struct  OnOverrideControllerDirtyCallback_t73560E6E30067C09BC58A15F9D2726051B077E2E  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Playables.PlayableBinding_CreateOutputMethod
struct  CreateOutputMethod_tA7B649F49822FC5DD0B0D9F17247C73CAECB1CA3  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.StateMachineBehaviour
struct  StateMachineBehaviour_t698612ED92024B087045C388731B7673550C786C  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// System.ArgumentNullException
struct  ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:

public:
};


// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};

struct ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
};


// UnityEngine.Animation
struct  Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.Animations.LookAtConstraint
struct  LookAtConstraint_t21565CB52914267484967D0205012FD17E3717CC  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.Animator
struct  Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.AnimatorControllerParameter[]
struct AnimatorControllerParameterU5BU5D_t7B886A2A1648ECF218447ED1DE8D241652F863FD  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68 * m_Items[1];

public:
	inline AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.AnimationClip[]
struct AnimationClipU5BU5D_t26BCE82D4E5CBA43CAD83905725B4D6D500B3E36  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * m_Items[1];

public:
	inline AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};

IL2CPP_EXTERN_C void Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshal_pinvoke(const Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0& unmarshaled, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshal_pinvoke_back(const Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke& marshaled, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0& unmarshaled);
IL2CPP_EXTERN_C void Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshal_pinvoke_cleanup(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshal_com(const Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0& unmarshaled, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com& marshaled);
IL2CPP_EXTERN_C void Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshal_com_back(const Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com& marshaled, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0& unmarshaled);
IL2CPP_EXTERN_C void Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshal_com_cleanup(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com& marshaled);

// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationClipPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationClipPlayable_t6EF38F9EED94096D4793638AFC8D11D285B43183_m4006EF666DE80B407FDDD7D6F0740EB8617E36AB_gshared (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationLayerMixerPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371_mC3942EB4B00EAC10035AA7EBE23CA679C8790D20_gshared (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationMixerPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A_m172B8D6DA48AD49F0740833F7D18CD468B072E5E_gshared (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationMotionXToDeltaPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC_mCC63F3E0D55A21A9E56D80D26150AD2B78C6EC50_gshared (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationOffsetPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E_mF434E44E279E1DBD0887921B38A5C57812B1371A_gshared (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::IsPlayableOutputOfType<UnityEngine.Animations.AnimationPlayableOutput>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutputHandle_IsPlayableOutputOfType_TisAnimationPlayableOutput_tA10178429D6528BDB4516F6788CE680E349553E6_m8A303EBBB990B19C38B5E27B3FF37F3FF41C8FCD_gshared (PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationPosePlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07_m35A103AAF8E80E7C007214546C71B4E90901C2A2_gshared (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationRemoveScalePlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B_m1E16540EE6283270E3DE85D46C3BE1F8B85E73C2_gshared (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationScriptPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_t1EDF8E51A9ED180BB012656916323FA4F68CA27E_m1767ADED196AAA8B4D6FBB9313003E33A967E799_gshared (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimatorControllerPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B_mC6A8CB67F39B0B39BF77ED6177B3C2DF1BC91533_gshared (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, const RuntimeMethod* method);

// System.Void UnityEngine.Animation::INTERNAL_CALL_Stop(UnityEngine.Animation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animation_INTERNAL_CALL_Stop_mB618F3753B63E9FF2CB6A664E4AF849F95964A66 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * ___self0, const RuntimeMethod* method);
// UnityEngine.AnimationState UnityEngine.Animation::GetState(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * Animation_GetState_mA9C3339C7F4E26737EED4E0509DA5214105FFA5C (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animation::Play(UnityEngine.PlayMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animation_Play_mD134EE8853844F098E4D1F3F734CBE4C47C9B8B4 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, int32_t ___mode0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animation::PlayDefaultAnimation(UnityEngine.PlayMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animation_PlayDefaultAnimation_m406A78CA23531AF46EA6DEA35C436DB3CCB9CFE2 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, int32_t ___mode0, const RuntimeMethod* method);
// System.Void UnityEngine.Animation/Enumerator::.ctor(UnityEngine.Animation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mE90274D68218FACBF1EC2BBB177244F49E446E11 (Enumerator_t6F97AECE1A160A668D8D8798607BE29B1D8CD92C * __this, Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * ___outer0, const RuntimeMethod* method);
// System.Boolean UnityEngine.TrackedReference::op_Implicit(UnityEngine.TrackedReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackedReference_op_Implicit_mE2F202D7C4D71679836CC2AE2CA08645E3208E44 (TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107 * ___exists0, const RuntimeMethod* method);
// UnityEngine.AnimationClip UnityEngine.AnimationState::get_clip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * AnimationState_get_clip_m099599D843F26BA5EF7541F1B1782AFD80F69092 (AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.AnimationState UnityEngine.Animation::GetStateAtIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * Animation_GetStateAtIndex_mC1F37F66327704F8DD88BE26AD73B2D5051698CA (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Animation::GetStateCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animation_GetStateCount_m9E1764870EAF179CD0D21E3FB5D2DB3086962650 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Motion::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Motion__ctor_mAED8097767A0FD4F3B5A8E687D569E33DB6F8443 (Motion_t497BF9244B6A769D1AE925C3876B187C56C8CF8F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AnimationClip::Internal_CreateAnimationClip(UnityEngine.AnimationClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip_Internal_CreateAnimationClip_m87F8D1F5CA59266F288F97C2D1B041EE161C047C (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * ___self0, const RuntimeMethod* method);
// System.Boolean UnityEngine.AnimationEvent::get_isFiredByAnimator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationEvent_get_isFiredByAnimator_mC87145EB434E27B5B1713E96552C56B4FF1AA0B7 (AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.TrackedReference::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedReference__ctor_m3F870F888D748E167296D3434305F6769CDB5B04 (TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107 * __this, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationClipPlayable::CreateHandle(UnityEngine.Playables.PlayableGraph,UnityEngine.AnimationClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationClipPlayable_CreateHandle_m9C5091FC6B92141016021B8D79906F3382332E38 (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  ___graph0, AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * ___clip1, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.AnimationClipPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClipPlayable__ctor_mEC2D160DE94DA6B775063CA8977DB9E5E0F134DC (AnimationClipPlayable_t6EF38F9EED94096D4793638AFC8D11D285B43183 * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::get_Null()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  PlayableHandle_get_Null_m09DE585EF795EFA2811950173C80F4FA24CBAAD1 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.AnimationClipPlayable::CreateHandleInternal(UnityEngine.Playables.PlayableGraph,UnityEngine.AnimationClip,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationClipPlayable_CreateHandleInternal_mB90322FF70ED8133562F0ED22FE2A6F2F12C32DD (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  ___graph0, AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * ___clip1, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * ___handle2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsValid_mDA0A998EA6E2442C5F3B6CDFAF07EBA9A6873059 (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationClipPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationClipPlayable_t6EF38F9EED94096D4793638AFC8D11D285B43183_m4006EF666DE80B407FDDD7D6F0740EB8617E36AB (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationClipPlayable_t6EF38F9EED94096D4793638AFC8D11D285B43183_m4006EF666DE80B407FDDD7D6F0740EB8617E36AB_gshared)(__this, method);
}
// System.Void System.InvalidCastException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidCastException__ctor_m3795145150387C6C362DA693613505C604AB8812 (InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA * __this, String_t* ___message0, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationClipPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationClipPlayable_GetHandle_mB1B706B9ADB194766DC938C332469AC698AD0D9E (AnimationClipPlayable_t6EF38F9EED94096D4793638AFC8D11D285B43183 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Playables.Playable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Playable__ctor_m24C6ED455A921F585698BFFEC5CCED397205543E (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::op_Equality(UnityEngine.Playables.PlayableHandle,UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_op_Equality_mBA774AE123AF794A1EB55148206CDD52DAFA42DF (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___x0, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___y1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.AnimationClipPlayable::Equals(UnityEngine.Animations.AnimationClipPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationClipPlayable_Equals_m06BA3E1C3AE0CC205C8531CCF6596C99C8D927EE (AnimationClipPlayable_t6EF38F9EED94096D4793638AFC8D11D285B43183 * __this, AnimationClipPlayable_t6EF38F9EED94096D4793638AFC8D11D285B43183  ___other0, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.AnimationClipPlayable::SetApplyFootIKInternal(UnityEngine.Playables.PlayableHandle&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClipPlayable_SetApplyFootIKInternal_mE3BE5C35529A4E1870F6086D77A22DCB539201EE (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * ___handle0, bool ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.AnimationClipPlayable::SetApplyFootIK(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClipPlayable_SetApplyFootIK_m882DAF931DBC52B31717C12E9E764E4943ED3C67 (AnimationClipPlayable_t6EF38F9EED94096D4793638AFC8D11D285B43183 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.AnimationClipPlayable::SetRemoveStartOffsetInternal(UnityEngine.Playables.PlayableHandle&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClipPlayable_SetRemoveStartOffsetInternal_m4067DC6BB1AEA323177A9542948A2A825254FF7B (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * ___handle0, bool ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.AnimationClipPlayable::SetRemoveStartOffset(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClipPlayable_SetRemoveStartOffset_m3AB1CB523BEDAB403DE1053AFDFB445894351C18 (AnimationClipPlayable_t6EF38F9EED94096D4793638AFC8D11D285B43183 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.AnimationClipPlayable::SetOverrideLoopTimeInternal(UnityEngine.Playables.PlayableHandle&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClipPlayable_SetOverrideLoopTimeInternal_m077FD77BCEC62D1D497931CE7D09E9C7140BEABE (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * ___handle0, bool ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.AnimationClipPlayable::SetOverrideLoopTime(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClipPlayable_SetOverrideLoopTime_m5EC2CEBCAF286FACB16B64C2AC95D5082D6A2591 (AnimationClipPlayable_t6EF38F9EED94096D4793638AFC8D11D285B43183 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.AnimationClipPlayable::SetLoopTimeInternal(UnityEngine.Playables.PlayableHandle&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClipPlayable_SetLoopTimeInternal_m1B66C46208A99BAB57F41E5611892CF84D8D485F (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * ___handle0, bool ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.AnimationClipPlayable::SetLoopTime(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClipPlayable_SetLoopTime_mA83207C0A17E49392C0EE66091539A4D42FDCF3B (AnimationClipPlayable_t6EF38F9EED94096D4793638AFC8D11D285B43183 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.AnimationClipPlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.AnimationClip,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationClipPlayable_CreateHandleInternal_Injected_mD10E5D388D1EFCF44E0DD1E412B7180461A5D894 (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA * ___graph0, AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * ___clip1, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * ___handle2, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationLayerMixerPlayable::CreateHandle(UnityEngine.Playables.PlayableGraph,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationLayerMixerPlayable_CreateHandle_m85139F526B28E183A04E47F0CFD09D8927F68EB8 (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  ___graph0, int32_t ___inputCount1, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.AnimationLayerMixerPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationLayerMixerPlayable__ctor_mA2156DFDEA435F14446528098837ED3FF6B7147C (AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371 * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.AnimationLayerMixerPlayable::CreateHandleInternal(UnityEngine.Playables.PlayableGraph,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationLayerMixerPlayable_CreateHandleInternal_m24E2E0BE206419F3607623F5EA037F0E6E82B532 (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  ___graph0, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * ___handle1, const RuntimeMethod* method);
// System.Void UnityEngine.Playables.PlayableHandle::SetInputCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_SetInputCount_m49435B8578BD74EB205D70348E63D4F92FB4FF69 (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationLayerMixerPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371_mC3942EB4B00EAC10035AA7EBE23CA679C8790D20 (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371_mC3942EB4B00EAC10035AA7EBE23CA679C8790D20_gshared)(__this, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationLayerMixerPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationLayerMixerPlayable_GetHandle_mD4159505D29B17D507599ED6FA3BEC1370691DB8 (AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.AnimationLayerMixerPlayable::Equals(UnityEngine.Animations.AnimationLayerMixerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationLayerMixerPlayable_Equals_m0A6A86FEDCE98E63B84BD01D0D362D03EA733E59 (AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371 * __this, AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371  ___other0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Playables.PlayableHandle::GetInputCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayableHandle_GetInputCount_m6E9DDB55B527BD1E42B7ED094AC9CF154B72E416 (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m300CE4D04A068C209FD858101AC361C1B600B5AE (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.AnimationLayerMixerPlayable::SetLayerMaskFromAvatarMaskInternal(UnityEngine.Playables.PlayableHandle&,System.UInt32,UnityEngine.AvatarMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationLayerMixerPlayable_SetLayerMaskFromAvatarMaskInternal_m3C701203649DD4C6D295EEE3E9896E95041D533E (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * ___handle0, uint32_t ___layerIndex1, AvatarMask_t12E2214B133E61C5CF28DC1E4F6DC2451C75D88A * ___mask2, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.AnimationLayerMixerPlayable::SetLayerMaskFromAvatarMask(System.UInt32,UnityEngine.AvatarMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationLayerMixerPlayable_SetLayerMaskFromAvatarMask_mF5C7BB80B9DDA7583F5E88E73FDCB0C3D494A5A8 (AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371 * __this, uint32_t ___layerIndex0, AvatarMask_t12E2214B133E61C5CF28DC1E4F6DC2451C75D88A * ___mask1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.AnimationLayerMixerPlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationLayerMixerPlayable_CreateHandleInternal_Injected_m9BD85B42AF94CE9CB57D0A40B585C2A49846133A (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA * ___graph0, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * ___handle1, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMixerPlayable::CreateHandle(UnityEngine.Playables.PlayableGraph,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationMixerPlayable_CreateHandle_m3A8F728441AF2D2D16833A607E8A602FBDEDD313 (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  ___graph0, int32_t ___inputCount1, bool ___normalizeWeights2, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.AnimationMixerPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationMixerPlayable__ctor_mD446E3257F803A3D4C04D394A75AA5376533CF43 (AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.AnimationMixerPlayable::CreateHandleInternal(UnityEngine.Playables.PlayableGraph,System.Boolean,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationMixerPlayable_CreateHandleInternal_mED72AB9121F23A6D12EBABD539CF5E046F4AFD16 (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  ___graph0, bool ___normalizeWeights1, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * ___handle2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationMixerPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A_m172B8D6DA48AD49F0740833F7D18CD468B072E5E (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A_m172B8D6DA48AD49F0740833F7D18CD468B072E5E_gshared)(__this, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMixerPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationMixerPlayable_GetHandle_mC5939239D7C47C6E0FF4EC72021EE793863BC567 (AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.AnimationMixerPlayable::Equals(UnityEngine.Animations.AnimationMixerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationMixerPlayable_Equals_m7CB1B61B74A6BE00A35AD072490F07D4C7A17B0F (AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A * __this, AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.AnimationMixerPlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,System.Boolean,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationMixerPlayable_CreateHandleInternal_Injected_m01A68B12AFBBAF8CFE80C01EA6A68D350802F7F6 (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA * ___graph0, bool ___normalizeWeights1, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * ___handle2, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMotionXToDeltaPlayable::CreateHandle(UnityEngine.Playables.PlayableGraph)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationMotionXToDeltaPlayable_CreateHandle_m91B60DED2AE0AAA8EEDE3E8B34DDACAC140BA7BD (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  ___graph0, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.AnimationMotionXToDeltaPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationMotionXToDeltaPlayable__ctor_mC51D5F76DD0CE29B305932303A4A5AA42ACCD9E6 (AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.AnimationMotionXToDeltaPlayable::CreateHandleInternal(UnityEngine.Playables.PlayableGraph,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationMotionXToDeltaPlayable_CreateHandleInternal_m9A0B513A408E3A9BD0D0AE040633DE4A92BAE77C (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  ___graph0, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * ___handle1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationMotionXToDeltaPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC_mCC63F3E0D55A21A9E56D80D26150AD2B78C6EC50 (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC_mCC63F3E0D55A21A9E56D80D26150AD2B78C6EC50_gshared)(__this, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMotionXToDeltaPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationMotionXToDeltaPlayable_GetHandle_mE36F0671962333EAF5B434A062930D9E76A79076 (AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.AnimationMotionXToDeltaPlayable::Equals(UnityEngine.Animations.AnimationMotionXToDeltaPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationMotionXToDeltaPlayable_Equals_m53B4AAB54D7F3633C3954056F8C334BB8B7D590E (AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC * __this, AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC  ___other0, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.AnimationMotionXToDeltaPlayable::SetAbsoluteMotionInternal(UnityEngine.Playables.PlayableHandle&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationMotionXToDeltaPlayable_SetAbsoluteMotionInternal_m81F7C39EDA56A9192470408CF52554FD224FA496 (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * ___handle0, bool ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.AnimationMotionXToDeltaPlayable::SetAbsoluteMotion(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationMotionXToDeltaPlayable_SetAbsoluteMotion_mDCF671C2986EBD639EDE0AF88748507EAC9853B9 (AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.AnimationMotionXToDeltaPlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationMotionXToDeltaPlayable_CreateHandleInternal_Injected_m30027A59F8F0726E74DC4DD30A8186BF819B9BDB (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA * ___graph0, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * ___handle1, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationOffsetPlayable::CreateHandle(UnityEngine.Playables.PlayableGraph,UnityEngine.Vector3,UnityEngine.Quaternion,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationOffsetPlayable_CreateHandle_mC5C47FEB5F1B34AB6237DAB01660267351AF12C9 (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  ___graph0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation2, int32_t ___inputCount3, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.AnimationOffsetPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationOffsetPlayable__ctor_m380B4761BE82E4684F82A18933DBBC79E3D5F607 (AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.AnimationOffsetPlayable::CreateHandleInternal(UnityEngine.Playables.PlayableGraph,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationOffsetPlayable_CreateHandleInternal_mF0B7934FD80F93B01659E39F53986912D1E72440 (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  ___graph0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation2, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * ___handle3, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationOffsetPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E_mF434E44E279E1DBD0887921B38A5C57812B1371A (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E_mF434E44E279E1DBD0887921B38A5C57812B1371A_gshared)(__this, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationOffsetPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationOffsetPlayable_GetHandle_m5213878A6D7F29801F74CD3A8B866D444793665E (AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.AnimationOffsetPlayable::Equals(UnityEngine.Animations.AnimationOffsetPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationOffsetPlayable_Equals_m30B207FC6287EABF6FC1FDA47784322A3ABB98DF (AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E * __this, AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.AnimationOffsetPlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationOffsetPlayable_CreateHandleInternal_Injected_m57B156AF03AD244E69736E7FA05B09DF7993FB0A (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA * ___graph0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___position1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___rotation2, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * ___handle3, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ___handle0, const RuntimeMethod* method);
// System.Void UnityEngine.Playables.PlayableBinding/CreateOutputMethod::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateOutputMethod__ctor_m252187F08E76732D791C8458AF5629F29BDDB8F2 (CreateOutputMethod_tA7B649F49822FC5DD0B0D9F17247C73CAECB1CA3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableBinding UnityEngine.Playables.PlayableBinding::CreateInternal(System.String,UnityEngine.Object,System.Type,UnityEngine.Playables.PlayableBinding/CreateOutputMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8  PlayableBinding_CreateInternal_mA2A8810B76E843A40B9BC55D72D960AE155B9801 (String_t* ___name0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___sourceObject1, Type_t * ___sourceType2, CreateOutputMethod_tA7B649F49822FC5DD0B0D9F17247C73CAECB1CA3 * ___createFunction3, const RuntimeMethod* method);
// UnityEngine.Animations.AnimationPlayableOutput UnityEngine.Animations.AnimationPlayableOutput::Create(UnityEngine.Playables.PlayableGraph,System.String,UnityEngine.Animator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationPlayableOutput_tA10178429D6528BDB4516F6788CE680E349553E6  AnimationPlayableOutput_Create_m9A1672F8534123A914FB2938BD9706E224A99F56 (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  ___graph0, String_t* ___name1, Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___target2, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableOutput UnityEngine.Animations.AnimationPlayableOutput::op_Implicit(UnityEngine.Animations.AnimationPlayableOutput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345  AnimationPlayableOutput_op_Implicit_m688EE62F433F969F5EC4575437F45A2D2DF00192 (AnimationPlayableOutput_tA10178429D6528BDB4516F6788CE680E349553E6  ___output0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.AnimationPlayableGraphExtensions::InternalCreateAnimationOutput(UnityEngine.Playables.PlayableGraph&,System.String,UnityEngine.Playables.PlayableOutputHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationPlayableGraphExtensions_InternalCreateAnimationOutput_mE01B12008978E7E105F42D05CB98228CA7063573 (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA * ___graph0, String_t* ___name1, PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 * ___handle2, const RuntimeMethod* method);
// UnityEngine.Animations.AnimationPlayableOutput UnityEngine.Animations.AnimationPlayableOutput::get_Null()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationPlayableOutput_tA10178429D6528BDB4516F6788CE680E349553E6  AnimationPlayableOutput_get_Null_mAFAC34CF34A884B7957333BDD9D438428910D751 (const RuntimeMethod* method);
// System.Void UnityEngine.Animations.AnimationPlayableOutput::.ctor(UnityEngine.Playables.PlayableOutputHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableOutput__ctor_mB620607DC74C6B62A8320EE364BB6BEDC2AD3F1A (AnimationPlayableOutput_tA10178429D6528BDB4516F6788CE680E349553E6 * __this, PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  ___handle0, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.AnimationPlayableOutput::SetTarget(UnityEngine.Animator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableOutput_SetTarget_m55330CFBD33CB09036BC5EF7639F3BB4C454D37E (AnimationPlayableOutput_tA10178429D6528BDB4516F6788CE680E349553E6 * __this, Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutputHandle_IsValid_mF2C0EDE99960D68E4FD017EB063680D82A9CBD6F (PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::IsPlayableOutputOfType<UnityEngine.Animations.AnimationPlayableOutput>()
inline bool PlayableOutputHandle_IsPlayableOutputOfType_TisAnimationPlayableOutput_tA10178429D6528BDB4516F6788CE680E349553E6_m8A303EBBB990B19C38B5E27B3FF37F3FF41C8FCD (PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 *, const RuntimeMethod*))PlayableOutputHandle_IsPlayableOutputOfType_TisAnimationPlayableOutput_tA10178429D6528BDB4516F6788CE680E349553E6_m8A303EBBB990B19C38B5E27B3FF37F3FF41C8FCD_gshared)(__this, method);
}
// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutputHandle::get_Null()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  PlayableOutputHandle_get_Null_mA462EF24F3B0CDD5B3C3F0C57073D49CED316FA4 (const RuntimeMethod* method);
// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Animations.AnimationPlayableOutput::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  AnimationPlayableOutput_GetHandle_m7E849F774F2B3E233A115FFB63DF473AF88F95E0 (AnimationPlayableOutput_tA10178429D6528BDB4516F6788CE680E349553E6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Playables.PlayableOutput::.ctor(UnityEngine.Playables.PlayableOutputHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableOutput__ctor_m881EC9E4BAD358971373EE1D6BF9C37DDB7A4943 (PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345 * __this, PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  ___handle0, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutput::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  PlayableOutput_GetHandle_m079ADC0139E95AA914CD7502F27EC79BB1A876F3 (PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.AnimationPlayableOutput::InternalSetTarget(UnityEngine.Playables.PlayableOutputHandle&,UnityEngine.Animator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableOutput_InternalSetTarget_mC678FFE8AE5CAEE4EB98011174391C033C3752AB (PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 * ___handle0, Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___target1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationPosePlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07_m35A103AAF8E80E7C007214546C71B4E90901C2A2 (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07_m35A103AAF8E80E7C007214546C71B4E90901C2A2_gshared)(__this, method);
}
// System.Void UnityEngine.Animations.AnimationPosePlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPosePlayable__ctor_mF02468DCD2C8C0226C89C4DF90454DD9D230595D (AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07 * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationPosePlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationPosePlayable_GetHandle_m9D856E83755A447ABCD6C0D8FE011AFF659A016E (AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.AnimationPosePlayable::Equals(UnityEngine.Animations.AnimationPosePlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationPosePlayable_Equals_m4417430115DCF9B39D3E4B64424120CE7E555961 (AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07 * __this, AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07  ___other0, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationRemoveScalePlayable::CreateHandle(UnityEngine.Playables.PlayableGraph,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationRemoveScalePlayable_CreateHandle_mB529C77EE1CC0DB85D73301B2484EAAAEE65EF6C (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  ___graph0, int32_t ___inputCount1, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.AnimationRemoveScalePlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationRemoveScalePlayable__ctor_mB06216973E6B635E7F4A3C8E372E5F7E89D327E1 (AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.AnimationRemoveScalePlayable::CreateHandleInternal(UnityEngine.Playables.PlayableGraph,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationRemoveScalePlayable_CreateHandleInternal_m90F196F5F014459D15CF0F5C5C0280FF2BDDE24A (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  ___graph0, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * ___handle1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationRemoveScalePlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B_m1E16540EE6283270E3DE85D46C3BE1F8B85E73C2 (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B_m1E16540EE6283270E3DE85D46C3BE1F8B85E73C2_gshared)(__this, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationRemoveScalePlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationRemoveScalePlayable_GetHandle_mA5063F10E01C8546F88E9ABE07B71373BF290EED (AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.AnimationRemoveScalePlayable::Equals(UnityEngine.Animations.AnimationRemoveScalePlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationRemoveScalePlayable_Equals_m58B139243E3B27CE86CA4CC470895BF719CD9BAD (AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B * __this, AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.AnimationRemoveScalePlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationRemoveScalePlayable_CreateHandleInternal_Injected_m0BA4E57820067D6D841CF1FCD8C03D9C8F6B693B (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA * ___graph0, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * ___handle1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationScriptPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_t1EDF8E51A9ED180BB012656916323FA4F68CA27E_m1767ADED196AAA8B4D6FBB9313003E33A967E799 (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_t1EDF8E51A9ED180BB012656916323FA4F68CA27E_m1767ADED196AAA8B4D6FBB9313003E33A967E799_gshared)(__this, method);
}
// System.Void UnityEngine.Animations.AnimationScriptPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationScriptPlayable__ctor_mDA5EA55852F0A1079954B2DCB90398C4D7FFC412 (AnimationScriptPlayable_t1EDF8E51A9ED180BB012656916323FA4F68CA27E * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationScriptPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationScriptPlayable_GetHandle_m661730E4C17F10A8D3C46492A9AD1D61EF0F4315 (AnimationScriptPlayable_t1EDF8E51A9ED180BB012656916323FA4F68CA27E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.AnimationScriptPlayable::Equals(UnityEngine.Animations.AnimationScriptPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationScriptPlayable_Equals_m4995D1AD353F43FE3FA854A8384601F58156E69E (AnimationScriptPlayable_t1EDF8E51A9ED180BB012656916323FA4F68CA27E * __this, AnimationScriptPlayable_t1EDF8E51A9ED180BB012656916323FA4F68CA27E  ___other0, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimatorControllerPlayable::CreateHandle(UnityEngine.Playables.PlayableGraph,UnityEngine.RuntimeAnimatorController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimatorControllerPlayable_CreateHandle_mC5C9D453305CB3ECE1CAAAAA0FCF01F5C3DCD8B9 (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  ___graph0, RuntimeAnimatorController_tDA6672C8194522C2F60F8F2F241657E57C3520BD * ___controller1, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.AnimatorControllerPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorControllerPlayable__ctor_m739B1BFC592B6C160410141057F1B2BA1B971897 (AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.AnimatorControllerPlayable::CreateHandleInternal(UnityEngine.Playables.PlayableGraph,UnityEngine.RuntimeAnimatorController,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimatorControllerPlayable_CreateHandleInternal_m7AFE10D091BC80A9877809A94F3398045CA6914C (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  ___graph0, RuntimeAnimatorController_tDA6672C8194522C2F60F8F2F241657E57C3520BD * ___controller1, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * ___handle2, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.AnimatorControllerPlayable::SetHandle(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorControllerPlayable_SetHandle_m2CAE8DABC4B19AB6BD90249D0D7FC7A9E07C3A96 (AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimatorControllerPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimatorControllerPlayable_GetHandle_mB83731910E1534BECA36F64BA22AA68A71D08CA8 (AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B * __this, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706 (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimatorControllerPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B_mC6A8CB67F39B0B39BF77ED6177B3C2DF1BC91533 (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B_mC6A8CB67F39B0B39BF77ED6177B3C2DF1BC91533_gshared)(__this, method);
}
// System.Boolean UnityEngine.Animations.AnimatorControllerPlayable::Equals(UnityEngine.Animations.AnimatorControllerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimatorControllerPlayable_Equals_m04685CCA5A5FC388A0387D3453A677C0CB47D173 (AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B * __this, AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B  ___other0, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.AnimatorControllerPlayable::SetFloatID(UnityEngine.Playables.PlayableHandle&,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorControllerPlayable_SetFloatID_m00F2343E553C75074B986D06FFF46E653E0B38CC (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * ___handle0, int32_t ___id1, float ___value2, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.AnimatorControllerPlayable::SetFloat(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorControllerPlayable_SetFloat_m7FBD4CC0F24814CE50174625E25DC49ED41CD3E2 (AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B * __this, int32_t ___id0, float ___value1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.AnimatorControllerPlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.RuntimeAnimatorController,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimatorControllerPlayable_CreateHandleInternal_Injected_mE9FD7C37D1270DC65C4A74211DCE0FCADB7722D0 (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA * ___graph0, RuntimeAnimatorController_tDA6672C8194522C2F60F8F2F241657E57C3520BD * ___controller1, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * ___handle2, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.ConstraintSource::set_sourceTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstraintSource_set_sourceTransform_mFA10C6FC2646581E9908CEBCE74528DF77A9A746 (ConstraintSource_t63B0D0146AE7F080F4801408E83F82D7FD12B994 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.ConstraintSource::set_weight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstraintSource_set_weight_m779901D002DDCD925CBD05FC9F70DEA6E1FB4080 (ConstraintSource_t63B0D0146AE7F080F4801408E83F82D7FD12B994 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.LookAtConstraint::SetSourcesInternal(UnityEngine.Animations.LookAtConstraint,System.Collections.Generic.List`1<UnityEngine.Animations.ConstraintSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LookAtConstraint_SetSourcesInternal_m425BC21117905979EFE816EB70C1986A532B7451 (LookAtConstraint_t21565CB52914267484967D0205012FD17E3717CC * ___self0, List_1_t09FCE348A4E5E52E266CCC1DE562EFC20187B630 * ___sources1, const RuntimeMethod* method);
// System.Single UnityEngine.Animator::GetFloatID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_GetFloatID_m651CA5557BCABC522FAC92CF89CFE39240E82BD8 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___id0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetFloatString(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloatString_mE425F554C50682E41D362D7593B3B069609B7091 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, float ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetFloatStringDamp(System.String,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloatStringDamp_m2DFC0ED89DB0DBF202DF6A1A20D6A91CA6C20B70 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, float ___value1, float ___dampTime2, float ___deltaTime3, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetFloatID(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloatID_mC8049D4DC5D19929FF51172902E35D496F9EB805 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___id0, float ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetBoolString(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBoolString_mA61F1A44D13EF82A7C2CAF466EBA81E65D054D46 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetBoolID(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBoolID_m03BC09B1F267F9B07FF9F8EDDBAA4D0AA8D61EF0 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___id0, bool ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetIntegerString(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetIntegerString_m6D069E7F310547EA883ABC2D72BA41C3CDA6B1C4 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetIntegerID(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetIntegerID_mF9CF13102019C3714F927B3827EEF4473C0AB5BA (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___id0, int32_t ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetTriggerString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTriggerString_m77CE57996467D0C973FA2D0CB4DF87BD062C8A1E (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetTriggerID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTriggerID_mD08597B567A91FC132350A343E69A084EC958040 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___id0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::ResetTriggerString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_ResetTriggerString_m31B233F948D7551D220FEDA56B002E6724B89851 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::get_deltaPosition_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_get_deltaPosition_Injected_mB3C1937C55150A4E113BB2D8D6FEC323268C7BBA (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___ret0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::CheckIfInIKPass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_CheckIfInIKPass_mD5AD9B7BD27B551BD8EA8EA13384237A4DC02E10 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetGoalPosition(UnityEngine.AvatarIKGoal,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetGoalPosition_m27E296D914F30F2C0BAE57149A4B7E430959E61F (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___goal0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___goalPosition1, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetGoalPosition_Injected(UnityEngine.AvatarIKGoal,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetGoalPosition_Injected_m3FCA5A1E8B603902FDEC306CF4324BC4551D3737 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___goal0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___goalPosition1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Animator::GetGoalRotation(UnityEngine.AvatarIKGoal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Animator_GetGoalRotation_m741B3B9895B02D6147D05854D3930931BA195E4C (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___goal0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::GetGoalRotation_Injected(UnityEngine.AvatarIKGoal,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_GetGoalRotation_Injected_m4011F9579BE99CDC1BEBAF4280EB5F5472A109DC (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___goal0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___ret1, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetGoalRotation(UnityEngine.AvatarIKGoal,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetGoalRotation_mEF3F4FDFC5C77775B3DF86C1D2A213AA2FCEA465 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___goal0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___goalRotation1, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetGoalRotation_Injected(UnityEngine.AvatarIKGoal,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetGoalRotation_Injected_m37692B68D8CC4D92559553F9AAE52D714C4699A9 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___goal0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___goalRotation1, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetGoalWeightPosition(UnityEngine.AvatarIKGoal,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetGoalWeightPosition_m890B8E9CCFF48C094B5E34EE35CC105567F83481 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___goal0, float ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetGoalWeightRotation(UnityEngine.AvatarIKGoal,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetGoalWeightRotation_mC32F9430FA93AD28AC309F724398A1CAAEF88904 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___goal0, float ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetLookAtPositionInternal(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetLookAtPositionInternal_mD621D4C229D132ECD57B1D9F90783A16FEBA5A84 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lookAtPosition0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetLookAtPositionInternal_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetLookAtPositionInternal_Injected_mE43763E88F5BEA74AE47D478B1137A48090A38DB (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___lookAtPosition0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetLookAtWeightInternal(System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetLookAtWeightInternal_mFE3EA212AD2159F6A66BF80D30385227E836A4BE (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, float ___weight0, float ___bodyWeight1, float ___headWeight2, float ___eyesWeight3, float ___clampWeight4, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495 (RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method);
// System.Void System.IndexOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_mCCE2EFF47A0ACB4B2636F63140F94FCEA71A9BCA (IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Int32 UnityEngine.HumanTrait::GetBoneIndexFromMono(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HumanTrait_GetBoneIndexFromMono_mEE030DE71CE19611BB3CC881799CCF3828D0928E (int32_t ___humanId0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Animator::GetBoneTransformInternal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Animator_GetBoneTransformInternal_mC33B048536349D354D9FE17D46377B8E467599E5 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___humanBoneId0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::GetCurrentGraph(UnityEngine.Playables.PlayableGraph&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_GetCurrentGraph_mC84D76AF70D99C6151BE20F76FAB9840E39FD77D (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA * ___graph0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animator::get_logWarnings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_get_logWarnings_mE755494196C56C22909C97125F48EC6A7CFED617 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animator::IsInIKPass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_IsInIKPass_m464BA0915D3FF398D1356A65187DACD74633D973 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Single UnityEngine.AnimatorClipInfo::get_weight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimatorClipInfo_get_weight_m1A1275CE522B4691DA88D618E1C40E57074795C6 (AnimatorClipInfo_t78457ABBA83D388EDFF26F436F5E61A29CF4E180 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Animator::StringToHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_StringToHash_m80E4CCCB84AAD032A5D84EF5832B7F35C1E5AE3F (String_t* ___name0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.String UnityEngine.AnimatorControllerParameter::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AnimatorControllerParameter_get_name_mBC6037CF46E647026CF3AD51E76B4003A181EB60 (AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnOverrideControllerDirtyCallback_Invoke_m002CFC2CE3C42A058380BE98F015E654D5F9F177 (OnOverrideControllerDirtyCallback_t73560E6E30067C09BC58A15F9D2726051B077E2E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m091EBAEBC7919B0391ABDAFB7389ADC12206525B (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_m6E2B3821A4A361556FC12E9B1C71E1D5DC002C5B (ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.AnimationClip UnityEngine.Animation::get_clip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * Animation_get_clip_m7E1F846B79C143FC538A143503B0BF025560F02F (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, const RuntimeMethod* method)
{
	typedef AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * (*Animation_get_clip_m7E1F846B79C143FC538A143503B0BF025560F02F_ftn) (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C *);
	static Animation_get_clip_m7E1F846B79C143FC538A143503B0BF025560F02F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_get_clip_m7E1F846B79C143FC538A143503B0BF025560F02F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::get_clip()");
	AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Animation::set_clip(UnityEngine.AnimationClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animation_set_clip_m06FE7EA35E27FC7797B271B7F3CB30B8A668E8AF (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * ___value0, const RuntimeMethod* method)
{
	typedef void (*Animation_set_clip_m06FE7EA35E27FC7797B271B7F3CB30B8A668E8AF_ftn) (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C *, AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE *);
	static Animation_set_clip_m06FE7EA35E27FC7797B271B7F3CB30B8A668E8AF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_set_clip_m06FE7EA35E27FC7797B271B7F3CB30B8A668E8AF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::set_clip(UnityEngine.AnimationClip)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Animation::set_playAutomatically(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animation_set_playAutomatically_mCDD868E1071E64C036871FF4E842FB982B3FD780 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*Animation_set_playAutomatically_mCDD868E1071E64C036871FF4E842FB982B3FD780_ftn) (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C *, bool);
	static Animation_set_playAutomatically_mCDD868E1071E64C036871FF4E842FB982B3FD780_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_set_playAutomatically_mCDD868E1071E64C036871FF4E842FB982B3FD780_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::set_playAutomatically(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Animation::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animation_Stop_mDEEBC36F3D8E57380C0161D8A744AE7019282B36 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, const RuntimeMethod* method)
{
	{
		Animation_INTERNAL_CALL_Stop_mB618F3753B63E9FF2CB6A664E4AF849F95964A66(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animation::INTERNAL_CALL_Stop(UnityEngine.Animation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animation_INTERNAL_CALL_Stop_mB618F3753B63E9FF2CB6A664E4AF849F95964A66 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * ___self0, const RuntimeMethod* method)
{
	typedef void (*Animation_INTERNAL_CALL_Stop_mB618F3753B63E9FF2CB6A664E4AF849F95964A66_ftn) (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C *);
	static Animation_INTERNAL_CALL_Stop_mB618F3753B63E9FF2CB6A664E4AF849F95964A66_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_INTERNAL_CALL_Stop_mB618F3753B63E9FF2CB6A664E4AF849F95964A66_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::INTERNAL_CALL_Stop(UnityEngine.Animation)");
	_il2cpp_icall_func(___self0);
}
// UnityEngine.AnimationState UnityEngine.Animation::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * Animation_get_Item_mA50F89B91D6170D6824B0B562790470586445AB9 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, String_t* ___name0, const RuntimeMethod* method)
{
	AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * V_0 = NULL;
	{
		String_t* L_0 = ___name0;
		AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * L_1 = Animation_GetState_mA9C3339C7F4E26737EED4E0509DA5214105FFA5C(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.Animation::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animation_Play_mEC9F6C1F931E11D4D69043AD44CC71698B776A51 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		V_0 = 0;
		int32_t L_0 = V_0;
		bool L_1 = Animation_Play_mD134EE8853844F098E4D1F3F734CBE4C47C9B8B4(__this, L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		goto IL_000d;
	}

IL_000d:
	{
		bool L_2 = V_1;
		return L_2;
	}
}
// System.Boolean UnityEngine.Animation::Play(UnityEngine.PlayMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animation_Play_mD134EE8853844F098E4D1F3F734CBE4C47C9B8B4 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, int32_t ___mode0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = ___mode0;
		bool L_1 = Animation_PlayDefaultAnimation_m406A78CA23531AF46EA6DEA35C436DB3CCB9CFE2(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.Animation::PlayDefaultAnimation(UnityEngine.PlayMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animation_PlayDefaultAnimation_m406A78CA23531AF46EA6DEA35C436DB3CCB9CFE2 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, int32_t ___mode0, const RuntimeMethod* method)
{
	typedef bool (*Animation_PlayDefaultAnimation_m406A78CA23531AF46EA6DEA35C436DB3CCB9CFE2_ftn) (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C *, int32_t);
	static Animation_PlayDefaultAnimation_m406A78CA23531AF46EA6DEA35C436DB3CCB9CFE2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_PlayDefaultAnimation_m406A78CA23531AF46EA6DEA35C436DB3CCB9CFE2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::PlayDefaultAnimation(UnityEngine.PlayMode)");
	bool retVal = _il2cpp_icall_func(__this, ___mode0);
	return retVal;
}
// System.Collections.IEnumerator UnityEngine.Animation::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Animation_GetEnumerator_m1AA556FBFDF08728D25984E9C3123C187DC76191 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Animation_GetEnumerator_m1AA556FBFDF08728D25984E9C3123C187DC76191_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		Enumerator_t6F97AECE1A160A668D8D8798607BE29B1D8CD92C * L_0 = (Enumerator_t6F97AECE1A160A668D8D8798607BE29B1D8CD92C *)il2cpp_codegen_object_new(Enumerator_t6F97AECE1A160A668D8D8798607BE29B1D8CD92C_il2cpp_TypeInfo_var);
		Enumerator__ctor_mE90274D68218FACBF1EC2BBB177244F49E446E11(L_0, __this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.AnimationState UnityEngine.Animation::GetState(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * Animation_GetState_mA9C3339C7F4E26737EED4E0509DA5214105FFA5C (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, String_t* ___name0, const RuntimeMethod* method)
{
	typedef AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * (*Animation_GetState_mA9C3339C7F4E26737EED4E0509DA5214105FFA5C_ftn) (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C *, String_t*);
	static Animation_GetState_mA9C3339C7F4E26737EED4E0509DA5214105FFA5C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_GetState_mA9C3339C7F4E26737EED4E0509DA5214105FFA5C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::GetState(System.String)");
	AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * retVal = _il2cpp_icall_func(__this, ___name0);
	return retVal;
}
// UnityEngine.AnimationState UnityEngine.Animation::GetStateAtIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * Animation_GetStateAtIndex_mC1F37F66327704F8DD88BE26AD73B2D5051698CA (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, int32_t ___index0, const RuntimeMethod* method)
{
	typedef AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * (*Animation_GetStateAtIndex_mC1F37F66327704F8DD88BE26AD73B2D5051698CA_ftn) (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C *, int32_t);
	static Animation_GetStateAtIndex_mC1F37F66327704F8DD88BE26AD73B2D5051698CA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_GetStateAtIndex_mC1F37F66327704F8DD88BE26AD73B2D5051698CA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::GetStateAtIndex(System.Int32)");
	AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * retVal = _il2cpp_icall_func(__this, ___index0);
	return retVal;
}
// System.Int32 UnityEngine.Animation::GetStateCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animation_GetStateCount_m9E1764870EAF179CD0D21E3FB5D2DB3086962650 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, const RuntimeMethod* method)
{
	typedef int32_t (*Animation_GetStateCount_m9E1764870EAF179CD0D21E3FB5D2DB3086962650_ftn) (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C *);
	static Animation_GetStateCount_m9E1764870EAF179CD0D21E3FB5D2DB3086962650_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_GetStateCount_m9E1764870EAF179CD0D21E3FB5D2DB3086962650_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::GetStateCount()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// UnityEngine.AnimationClip UnityEngine.Animation::GetClip(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * Animation_GetClip_m969655322B952D724332615B75AAD0092CDD59D1 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, String_t* ___name0, const RuntimeMethod* method)
{
	AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * V_0 = NULL;
	bool V_1 = false;
	AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * V_2 = NULL;
	{
		String_t* L_0 = ___name0;
		AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * L_1 = Animation_GetState_mA9C3339C7F4E26737EED4E0509DA5214105FFA5C(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * L_2 = V_0;
		bool L_3 = TrackedReference_op_Implicit_mE2F202D7C4D71679836CC2AE2CA08645E3208E44(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_001c;
		}
	}
	{
		AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * L_5 = V_0;
		NullCheck(L_5);
		AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * L_6 = AnimationState_get_clip_m099599D843F26BA5EF7541F1B1782AFD80F69092(L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		goto IL_0020;
	}

IL_001c:
	{
		V_2 = (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE *)NULL;
		goto IL_0020;
	}

IL_0020:
	{
		AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * L_7 = V_2;
		return L_7;
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
// System.Void UnityEngine.Animation_Enumerator::.ctor(UnityEngine.Animation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mE90274D68218FACBF1EC2BBB177244F49E446E11 (Enumerator_t6F97AECE1A160A668D8D8798607BE29B1D8CD92C * __this, Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * ___outer0, const RuntimeMethod* method)
{
	{
		__this->set_m_CurrentIndex_1((-1));
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * L_0 = ___outer0;
		__this->set_m_Outer_0(L_0);
		return;
	}
}
// System.Object UnityEngine.Animation_Enumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m7E017EDF8269D883AB26739301E19787C385F315 (Enumerator_t6F97AECE1A160A668D8D8798607BE29B1D8CD92C * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * L_0 = __this->get_m_Outer_0();
		int32_t L_1 = __this->get_m_CurrentIndex_1();
		NullCheck(L_0);
		AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * L_2 = Animation_GetStateAtIndex_mC1F37F66327704F8DD88BE26AD73B2D5051698CA(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0015;
	}

IL_0015:
	{
		RuntimeObject * L_3 = V_0;
		return L_3;
	}
}
// System.Boolean UnityEngine.Animation_Enumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mC4528CDA0A6BA22B421D8ABB26F0C1843B710195 (Enumerator_t6F97AECE1A160A668D8D8798607BE29B1D8CD92C * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * L_0 = __this->get_m_Outer_0();
		NullCheck(L_0);
		int32_t L_1 = Animation_GetStateCount_m9E1764870EAF179CD0D21E3FB5D2DB3086962650(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = __this->get_m_CurrentIndex_1();
		__this->set_m_CurrentIndex_1(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)));
		int32_t L_3 = __this->get_m_CurrentIndex_1();
		int32_t L_4 = V_0;
		V_1 = (bool)((((int32_t)L_3) < ((int32_t)L_4))? 1 : 0);
		goto IL_0027;
	}

IL_0027:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
// System.Void UnityEngine.Animation_Enumerator::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Reset_mB6DD93470BE4B0948C32BE2919B76788E5C1C1D3 (Enumerator_t6F97AECE1A160A668D8D8798607BE29B1D8CD92C * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_CurrentIndex_1((-1));
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
// System.Void UnityEngine.AnimationClip::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip__ctor_mD6CF66D5B878C5D717E86A241A6D3C16542427C3 (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * __this, const RuntimeMethod* method)
{
	{
		Motion__ctor_mAED8097767A0FD4F3B5A8E687D569E33DB6F8443(__this, /*hidden argument*/NULL);
		AnimationClip_Internal_CreateAnimationClip_m87F8D1F5CA59266F288F97C2D1B041EE161C047C(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AnimationClip::Internal_CreateAnimationClip(UnityEngine.AnimationClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip_Internal_CreateAnimationClip_m87F8D1F5CA59266F288F97C2D1B041EE161C047C (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * ___self0, const RuntimeMethod* method)
{
	typedef void (*AnimationClip_Internal_CreateAnimationClip_m87F8D1F5CA59266F288F97C2D1B041EE161C047C_ftn) (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE *);
	static AnimationClip_Internal_CreateAnimationClip_m87F8D1F5CA59266F288F97C2D1B041EE161C047C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_Internal_CreateAnimationClip_m87F8D1F5CA59266F288F97C2D1B041EE161C047C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::Internal_CreateAnimationClip(UnityEngine.AnimationClip)");
	_il2cpp_icall_func(___self0);
}
// System.Single UnityEngine.AnimationClip::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationClip_get_length_m55DCD61003D76E19AB0B3649A3C0F072D829CD4A (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * __this, const RuntimeMethod* method)
{
	typedef float (*AnimationClip_get_length_m55DCD61003D76E19AB0B3649A3C0F072D829CD4A_ftn) (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE *);
	static AnimationClip_get_length_m55DCD61003D76E19AB0B3649A3C0F072D829CD4A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_get_length_m55DCD61003D76E19AB0B3649A3C0F072D829CD4A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::get_length()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Single UnityEngine.AnimationClip::get_frameRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationClip_get_frameRate_mDDD2917F025BD64718024A30201EAFADD230C197 (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * __this, const RuntimeMethod* method)
{
	typedef float (*AnimationClip_get_frameRate_mDDD2917F025BD64718024A30201EAFADD230C197_ftn) (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE *);
	static AnimationClip_get_frameRate_mDDD2917F025BD64718024A30201EAFADD230C197_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_get_frameRate_mDDD2917F025BD64718024A30201EAFADD230C197_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::get_frameRate()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.AnimationClip::set_frameRate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip_set_frameRate_m67AFA111B36DB56C9F44922470F1B9DADF79F2B6 (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*AnimationClip_set_frameRate_m67AFA111B36DB56C9F44922470F1B9DADF79F2B6_ftn) (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE *, float);
	static AnimationClip_set_frameRate_m67AFA111B36DB56C9F44922470F1B9DADF79F2B6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_set_frameRate_m67AFA111B36DB56C9F44922470F1B9DADF79F2B6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::set_frameRate(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Boolean UnityEngine.AnimationClip::get_legacy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationClip_get_legacy_mD5ACD53883943150B90378B86216E8330F499485 (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * __this, const RuntimeMethod* method)
{
	typedef bool (*AnimationClip_get_legacy_mD5ACD53883943150B90378B86216E8330F499485_ftn) (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE *);
	static AnimationClip_get_legacy_mD5ACD53883943150B90378B86216E8330F499485_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_get_legacy_mD5ACD53883943150B90378B86216E8330F499485_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::get_legacy()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.AnimationClip::set_legacy(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip_set_legacy_m810FC1E97431C532BC03F9A99334A78C212521DB (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*AnimationClip_set_legacy_m810FC1E97431C532BC03F9A99334A78C212521DB_ftn) (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE *, bool);
	static AnimationClip_set_legacy_m810FC1E97431C532BC03F9A99334A78C212521DB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_set_legacy_m810FC1E97431C532BC03F9A99334A78C212521DB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::set_legacy(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Boolean UnityEngine.AnimationClip::get_empty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationClip_get_empty_mA4F9A8D03636F9F93AEC6A6B103EA610F3E8ADB5 (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * __this, const RuntimeMethod* method)
{
	typedef bool (*AnimationClip_get_empty_mA4F9A8D03636F9F93AEC6A6B103EA610F3E8ADB5_ftn) (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE *);
	static AnimationClip_get_empty_mA4F9A8D03636F9F93AEC6A6B103EA610F3E8ADB5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_get_empty_mA4F9A8D03636F9F93AEC6A6B103EA610F3E8ADB5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::get_empty()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.AnimationClip::get_hasGenericRootTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationClip_get_hasGenericRootTransform_m3B36D07BF202E7563509916BA53728FC6A144E6E (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * __this, const RuntimeMethod* method)
{
	typedef bool (*AnimationClip_get_hasGenericRootTransform_m3B36D07BF202E7563509916BA53728FC6A144E6E_ftn) (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE *);
	static AnimationClip_get_hasGenericRootTransform_m3B36D07BF202E7563509916BA53728FC6A144E6E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_get_hasGenericRootTransform_m3B36D07BF202E7563509916BA53728FC6A144E6E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::get_hasGenericRootTransform()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.AnimationClip::get_hasMotionCurves()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationClip_get_hasMotionCurves_m6805BC5D8C22A62C166EDF50A6A1191D76F99EC4 (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * __this, const RuntimeMethod* method)
{
	typedef bool (*AnimationClip_get_hasMotionCurves_m6805BC5D8C22A62C166EDF50A6A1191D76F99EC4_ftn) (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE *);
	static AnimationClip_get_hasMotionCurves_m6805BC5D8C22A62C166EDF50A6A1191D76F99EC4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_get_hasMotionCurves_m6805BC5D8C22A62C166EDF50A6A1191D76F99EC4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::get_hasMotionCurves()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.AnimationClip::get_hasRootCurves()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationClip_get_hasRootCurves_m54E4627B00FDA2EEF1AA24227060F60D462233FB (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * __this, const RuntimeMethod* method)
{
	typedef bool (*AnimationClip_get_hasRootCurves_m54E4627B00FDA2EEF1AA24227060F60D462233FB_ftn) (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE *);
	static AnimationClip_get_hasRootCurves_m54E4627B00FDA2EEF1AA24227060F60D462233FB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_get_hasRootCurves_m54E4627B00FDA2EEF1AA24227060F60D462233FB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::get_hasRootCurves()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.AnimationClip::get_hasRootMotion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationClip_get_hasRootMotion_m8D147F46654439710C1BCEC238861512DD4A8E2F (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * __this, const RuntimeMethod* method)
{
	typedef bool (*AnimationClip_get_hasRootMotion_m8D147F46654439710C1BCEC238861512DD4A8E2F_ftn) (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE *);
	static AnimationClip_get_hasRootMotion_m8D147F46654439710C1BCEC238861512DD4A8E2F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_get_hasRootMotion_m8D147F46654439710C1BCEC238861512DD4A8E2F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::get_hasRootMotion()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: UnityEngine.AnimationEvent
IL2CPP_EXTERN_C void AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F_marshal_pinvoke(const AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F& unmarshaled, AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_StateSender_8Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_StateSender' of type 'AnimationEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_StateSender_8Exception, NULL);
}
IL2CPP_EXTERN_C void AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F_marshal_pinvoke_back(const AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F_marshaled_pinvoke& marshaled, AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F& unmarshaled)
{
	Exception_t* ___m_StateSender_8Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_StateSender' of type 'AnimationEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_StateSender_8Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimationEvent
IL2CPP_EXTERN_C void AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F_marshal_pinvoke_cleanup(AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: UnityEngine.AnimationEvent
IL2CPP_EXTERN_C void AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F_marshal_com(const AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F& unmarshaled, AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F_marshaled_com& marshaled)
{
	Exception_t* ___m_StateSender_8Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_StateSender' of type 'AnimationEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_StateSender_8Exception, NULL);
}
IL2CPP_EXTERN_C void AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F_marshal_com_back(const AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F_marshaled_com& marshaled, AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F& unmarshaled)
{
	Exception_t* ___m_StateSender_8Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_StateSender' of type 'AnimationEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_StateSender_8Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimationEvent
IL2CPP_EXTERN_C void AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F_marshal_com_cleanup(AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.AnimationEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationEvent__ctor_m6C228EB716B6B53DE2665091C056428EFB90897F (AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationEvent__ctor_m6C228EB716B6B53DE2665091C056428EFB90897F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		__this->set_m_Time_0((0.0f));
		__this->set_m_FunctionName_1(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		__this->set_m_StringParameter_2(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		__this->set_m_ObjectReferenceParameter_3((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL);
		__this->set_m_FloatParameter_4((0.0f));
		__this->set_m_IntParameter_5(0);
		__this->set_m_MessageOptions_6(0);
		__this->set_m_Source_7(0);
		__this->set_m_StateSender_8((AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 *)NULL);
		return;
	}
}
// System.Boolean UnityEngine.AnimationEvent::get_isFiredByAnimator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationEvent_get_isFiredByAnimator_mC87145EB434E27B5B1713E96552C56B4FF1AA0B7 (AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->get_m_Source_7();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.AnimatorClipInfo UnityEngine.AnimationEvent::get_animatorClipInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimatorClipInfo_t78457ABBA83D388EDFF26F436F5E61A29CF4E180  AnimationEvent_get_animatorClipInfo_m1317C7C3C4411E70D38AF4E97305A2193494C42D (AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationEvent_get_animatorClipInfo_m1317C7C3C4411E70D38AF4E97305A2193494C42D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	AnimatorClipInfo_t78457ABBA83D388EDFF26F436F5E61A29CF4E180  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		bool L_0 = AnimationEvent_get_isFiredByAnimator_mC87145EB434E27B5B1713E96552C56B4FF1AA0B7(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteralEB133F4E0F7233E456C4B73BC81F165EA7547C40, /*hidden argument*/NULL);
	}

IL_0019:
	{
		AnimatorClipInfo_t78457ABBA83D388EDFF26F436F5E61A29CF4E180  L_2 = __this->get_m_AnimatorClipInfo_10();
		V_1 = L_2;
		goto IL_0022;
	}

IL_0022:
	{
		AnimatorClipInfo_t78457ABBA83D388EDFF26F436F5E61A29CF4E180  L_3 = V_1;
		return L_3;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.AnimationState::set_wrapMode(UnityEngine.WrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationState_set_wrapMode_m1602B498E28EAB28157E6E3A34F0C554962153C9 (AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*AnimationState_set_wrapMode_m1602B498E28EAB28157E6E3A34F0C554962153C9_ftn) (AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 *, int32_t);
	static AnimationState_set_wrapMode_m1602B498E28EAB28157E6E3A34F0C554962153C9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationState_set_wrapMode_m1602B498E28EAB28157E6E3A34F0C554962153C9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationState::set_wrapMode(UnityEngine.WrapMode)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.AnimationState::set_time(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationState_set_time_mC2C603420498B05E17FA07D6F36152D57FF714F5 (AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*AnimationState_set_time_mC2C603420498B05E17FA07D6F36152D57FF714F5_ftn) (AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 *, float);
	static AnimationState_set_time_mC2C603420498B05E17FA07D6F36152D57FF714F5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationState_set_time_mC2C603420498B05E17FA07D6F36152D57FF714F5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationState::set_time(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.AnimationState::set_speed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationState_set_speed_m858CD8CC55491E8FA1017462296628C63AD86DD0 (AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*AnimationState_set_speed_m858CD8CC55491E8FA1017462296628C63AD86DD0_ftn) (AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 *, float);
	static AnimationState_set_speed_m858CD8CC55491E8FA1017462296628C63AD86DD0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationState_set_speed_m858CD8CC55491E8FA1017462296628C63AD86DD0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationState::set_speed(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Single UnityEngine.AnimationState::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationState_get_length_mC42253B5D8A65EBE7AC51E86E4C4AF6AE719230F (AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * __this, const RuntimeMethod* method)
{
	typedef float (*AnimationState_get_length_mC42253B5D8A65EBE7AC51E86E4C4AF6AE719230F_ftn) (AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 *);
	static AnimationState_get_length_mC42253B5D8A65EBE7AC51E86E4C4AF6AE719230F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationState_get_length_mC42253B5D8A65EBE7AC51E86E4C4AF6AE719230F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationState::get_length()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// UnityEngine.AnimationClip UnityEngine.AnimationState::get_clip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * AnimationState_get_clip_m099599D843F26BA5EF7541F1B1782AFD80F69092 (AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * __this, const RuntimeMethod* method)
{
	typedef AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * (*AnimationState_get_clip_m099599D843F26BA5EF7541F1B1782AFD80F69092_ftn) (AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 *);
	static AnimationState_get_clip_m099599D843F26BA5EF7541F1B1782AFD80F69092_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationState_get_clip_m099599D843F26BA5EF7541F1B1782AFD80F69092_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationState::get_clip()");
	AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.AnimationState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationState__ctor_mD763623A91BDF7F4AA95507A977F815103284E06 (AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * __this, const RuntimeMethod* method)
{
	{
		TrackedReference__ctor_m3F870F888D748E167296D3434305F6769CDB5B04(__this, /*hidden argument*/NULL);
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
// UnityEngine.Animations.AnimationClipPlayable UnityEngine.Animations.AnimationClipPlayable::Create(UnityEngine.Playables.PlayableGraph,UnityEngine.AnimationClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationClipPlayable_t6EF38F9EED94096D4793638AFC8D11D285B43183  AnimationClipPlayable_Create_mBC6EAC4C65EA14DB52F5314FCBF4D3A86D38BB87 (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  ___graph0, AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * ___clip1, const RuntimeMethod* method)
{
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AnimationClipPlayable_t6EF38F9EED94096D4793638AFC8D11D285B43183  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  L_0 = ___graph0;
		AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * L_1 = ___clip1;
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_2 = AnimationClipPlayable_CreateHandle_m9C5091FC6B92141016021B8D79906F3382332E38(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_3 = V_0;
		AnimationClipPlayable_t6EF38F9EED94096D4793638AFC8D11D285B43183  L_4;
		memset((&L_4), 0, sizeof(L_4));
		AnimationClipPlayable__ctor_mEC2D160DE94DA6B775063CA8977DB9E5E0F134DC((&L_4), L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		goto IL_0012;
	}

IL_0012:
	{
		AnimationClipPlayable_t6EF38F9EED94096D4793638AFC8D11D285B43183  L_5 = V_1;
		return L_5;
	}
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationClipPlayable::CreateHandle(UnityEngine.Playables.PlayableGraph,UnityEngine.AnimationClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationClipPlayable_CreateHandle_m9C5091FC6B92141016021B8D79906F3382332E38 (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  ___graph0, AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * ___clip1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationClipPlayable_CreateHandle_m9C5091FC6B92141016021B8D79906F3382332E38_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = PlayableHandle_get_Null_m09DE585EF795EFA2811950173C80F4FA24CBAAD1(/*hidden argument*/NULL);
		V_0 = L_0;
		PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  L_1 = ___graph0;
		AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * L_2 = ___clip1;
		bool L_3 = AnimationClipPlayable_CreateHandleInternal_mB90322FF70ED8133562F0ED22FE2A6F2F12C32DD(L_1, L_2, (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&V_0), /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_5 = PlayableHandle_get_Null_m09DE585EF795EFA2811950173C80F4FA24CBAAD1(/*hidden argument*/NULL);
		V_2 = L_5;
		goto IL_0023;
	}

IL_001f:
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_6 = V_0;
		V_2 = L_6;
		goto IL_0023;
	}

IL_0023:
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_7 = V_2;
		return L_7;
	}
}
// System.Void UnityEngine.Animations.AnimationClipPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClipPlayable__ctor_mEC2D160DE94DA6B775063CA8977DB9E5E0F134DC (AnimationClipPlayable_t6EF38F9EED94096D4793638AFC8D11D285B43183 * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationClipPlayable__ctor_mEC2D160DE94DA6B775063CA8977DB9E5E0F134DC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0 = PlayableHandle_IsValid_mDA0A998EA6E2442C5F3B6CDFAF07EBA9A6873059((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&___handle0), /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		bool L_2 = PlayableHandle_IsPlayableOfType_TisAnimationClipPlayable_t6EF38F9EED94096D4793638AFC8D11D285B43183_m4006EF666DE80B407FDDD7D6F0740EB8617E36AB((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&___handle0), /*hidden argument*/PlayableHandle_IsPlayableOfType_TisAnimationClipPlayable_t6EF38F9EED94096D4793638AFC8D11D285B43183_m4006EF666DE80B407FDDD7D6F0740EB8617E36AB_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA * L_4 = (InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA *)il2cpp_codegen_object_new(InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_m3795145150387C6C362DA693613505C604AB8812(L_4, _stringLiteral5F731C5A8B77F4284645D8155A226267126EA04E, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, AnimationClipPlayable__ctor_mEC2D160DE94DA6B775063CA8977DB9E5E0F134DC_RuntimeMethod_var);
	}

IL_0026:
	{
	}

IL_0027:
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_5 = ___handle0;
		__this->set_m_Handle_0(L_5);
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationClipPlayable__ctor_mEC2D160DE94DA6B775063CA8977DB9E5E0F134DC_AdjustorThunk (RuntimeObject * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationClipPlayable_t6EF38F9EED94096D4793638AFC8D11D285B43183 * _thisAdjusted = reinterpret_cast<AnimationClipPlayable_t6EF38F9EED94096D4793638AFC8D11D285B43183 *>(__this + _offset);
	AnimationClipPlayable__ctor_mEC2D160DE94DA6B775063CA8977DB9E5E0F134DC(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationClipPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationClipPlayable_GetHandle_mB1B706B9ADB194766DC938C332469AC698AD0D9E (AnimationClipPlayable_t6EF38F9EED94096D4793638AFC8D11D285B43183 * __this, const RuntimeMethod* method)
{
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationClipPlayable_GetHandle_mB1B706B9ADB194766DC938C332469AC698AD0D9E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationClipPlayable_t6EF38F9EED94096D4793638AFC8D11D285B43183 * _thisAdjusted = reinterpret_cast<AnimationClipPlayable_t6EF38F9EED94096D4793638AFC8D11D285B43183 *>(__this + _offset);
	return AnimationClipPlayable_GetHandle_mB1B706B9ADB194766DC938C332469AC698AD0D9E(_thisAdjusted, method);
}
// UnityEngine.Playables.Playable UnityEngine.Animations.AnimationClipPlayable::op_Implicit(UnityEngine.Animations.AnimationClipPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  AnimationClipPlayable_op_Implicit_m5F9DA3AB6330E4ED226E161E4F4CC25C493984E4 (AnimationClipPlayable_t6EF38F9EED94096D4793638AFC8D11D285B43183  ___playable0, const RuntimeMethod* method)
{
	Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = AnimationClipPlayable_GetHandle_mB1B706B9ADB194766DC938C332469AC698AD0D9E((AnimationClipPlayable_t6EF38F9EED94096D4793638AFC8D11D285B43183 *)(&___playable0), /*hidden argument*/NULL);
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Playable__ctor_m24C6ED455A921F585698BFFEC5CCED397205543E((&L_1), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.Animations.AnimationClipPlayable::Equals(UnityEngine.Animations.AnimationClipPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationClipPlayable_Equals_m06BA3E1C3AE0CC205C8531CCF6596C99C8D927EE (AnimationClipPlayable_t6EF38F9EED94096D4793638AFC8D11D285B43183 * __this, AnimationClipPlayable_t6EF38F9EED94096D4793638AFC8D11D285B43183  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationClipPlayable_Equals_m06BA3E1C3AE0CC205C8531CCF6596C99C8D927EE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = AnimationClipPlayable_GetHandle_mB1B706B9ADB194766DC938C332469AC698AD0D9E((AnimationClipPlayable_t6EF38F9EED94096D4793638AFC8D11D285B43183 *)__this, /*hidden argument*/NULL);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_1 = AnimationClipPlayable_GetHandle_mB1B706B9ADB194766DC938C332469AC698AD0D9E((AnimationClipPlayable_t6EF38F9EED94096D4793638AFC8D11D285B43183 *)(&___other0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var);
		bool L_2 = PlayableHandle_op_Equality_mBA774AE123AF794A1EB55148206CDD52DAFA42DF(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool AnimationClipPlayable_Equals_m06BA3E1C3AE0CC205C8531CCF6596C99C8D927EE_AdjustorThunk (RuntimeObject * __this, AnimationClipPlayable_t6EF38F9EED94096D4793638AFC8D11D285B43183  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationClipPlayable_t6EF38F9EED94096D4793638AFC8D11D285B43183 * _thisAdjusted = reinterpret_cast<AnimationClipPlayable_t6EF38F9EED94096D4793638AFC8D11D285B43183 *>(__this + _offset);
	return AnimationClipPlayable_Equals_m06BA3E1C3AE0CC205C8531CCF6596C99C8D927EE(_thisAdjusted, ___other0, method);
}
// System.Void UnityEngine.Animations.AnimationClipPlayable::SetApplyFootIK(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClipPlayable_SetApplyFootIK_m882DAF931DBC52B31717C12E9E764E4943ED3C67 (AnimationClipPlayable_t6EF38F9EED94096D4793638AFC8D11D285B43183 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * L_0 = __this->get_address_of_m_Handle_0();
		bool L_1 = ___value0;
		AnimationClipPlayable_SetApplyFootIKInternal_mE3BE5C35529A4E1870F6086D77A22DCB539201EE((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationClipPlayable_SetApplyFootIK_m882DAF931DBC52B31717C12E9E764E4943ED3C67_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationClipPlayable_t6EF38F9EED94096D4793638AFC8D11D285B43183 * _thisAdjusted = reinterpret_cast<AnimationClipPlayable_t6EF38F9EED94096D4793638AFC8D11D285B43183 *>(__this + _offset);
	AnimationClipPlayable_SetApplyFootIK_m882DAF931DBC52B31717C12E9E764E4943ED3C67(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.Animations.AnimationClipPlayable::SetRemoveStartOffset(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClipPlayable_SetRemoveStartOffset_m3AB1CB523BEDAB403DE1053AFDFB445894351C18 (AnimationClipPlayable_t6EF38F9EED94096D4793638AFC8D11D285B43183 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * L_0 = __this->get_address_of_m_Handle_0();
		bool L_1 = ___value0;
		AnimationClipPlayable_SetRemoveStartOffsetInternal_m4067DC6BB1AEA323177A9542948A2A825254FF7B((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationClipPlayable_SetRemoveStartOffset_m3AB1CB523BEDAB403DE1053AFDFB445894351C18_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationClipPlayable_t6EF38F9EED94096D4793638AFC8D11D285B43183 * _thisAdjusted = reinterpret_cast<AnimationClipPlayable_t6EF38F9EED94096D4793638AFC8D11D285B43183 *>(__this + _offset);
	AnimationClipPlayable_SetRemoveStartOffset_m3AB1CB523BEDAB403DE1053AFDFB445894351C18(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.Animations.AnimationClipPlayable::SetOverrideLoopTime(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClipPlayable_SetOverrideLoopTime_m5EC2CEBCAF286FACB16B64C2AC95D5082D6A2591 (AnimationClipPlayable_t6EF38F9EED94096D4793638AFC8D11D285B43183 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * L_0 = __this->get_address_of_m_Handle_0();
		bool L_1 = ___value0;
		AnimationClipPlayable_SetOverrideLoopTimeInternal_m077FD77BCEC62D1D497931CE7D09E9C7140BEABE((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationClipPlayable_SetOverrideLoopTime_m5EC2CEBCAF286FACB16B64C2AC95D5082D6A2591_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationClipPlayable_t6EF38F9EED94096D4793638AFC8D11D285B43183 * _thisAdjusted = reinterpret_cast<AnimationClipPlayable_t6EF38F9EED94096D4793638AFC8D11D285B43183 *>(__this + _offset);
	AnimationClipPlayable_SetOverrideLoopTime_m5EC2CEBCAF286FACB16B64C2AC95D5082D6A2591(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.Animations.AnimationClipPlayable::SetLoopTime(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClipPlayable_SetLoopTime_mA83207C0A17E49392C0EE66091539A4D42FDCF3B (AnimationClipPlayable_t6EF38F9EED94096D4793638AFC8D11D285B43183 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * L_0 = __this->get_address_of_m_Handle_0();
		bool L_1 = ___value0;
		AnimationClipPlayable_SetLoopTimeInternal_m1B66C46208A99BAB57F41E5611892CF84D8D485F((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationClipPlayable_SetLoopTime_mA83207C0A17E49392C0EE66091539A4D42FDCF3B_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationClipPlayable_t6EF38F9EED94096D4793638AFC8D11D285B43183 * _thisAdjusted = reinterpret_cast<AnimationClipPlayable_t6EF38F9EED94096D4793638AFC8D11D285B43183 *>(__this + _offset);
	AnimationClipPlayable_SetLoopTime_mA83207C0A17E49392C0EE66091539A4D42FDCF3B(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.Animations.AnimationClipPlayable::CreateHandleInternal(UnityEngine.Playables.PlayableGraph,UnityEngine.AnimationClip,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationClipPlayable_CreateHandleInternal_mB90322FF70ED8133562F0ED22FE2A6F2F12C32DD (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  ___graph0, AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * ___clip1, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * ___handle2, const RuntimeMethod* method)
{
	{
		AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * L_0 = ___clip1;
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * L_1 = ___handle2;
		bool L_2 = AnimationClipPlayable_CreateHandleInternal_Injected_mD10E5D388D1EFCF44E0DD1E412B7180461A5D894((PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA *)(&___graph0), L_0, (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UnityEngine.Animations.AnimationClipPlayable::SetApplyFootIKInternal(UnityEngine.Playables.PlayableHandle&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClipPlayable_SetApplyFootIKInternal_mE3BE5C35529A4E1870F6086D77A22DCB539201EE (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * ___handle0, bool ___value1, const RuntimeMethod* method)
{
	typedef void (*AnimationClipPlayable_SetApplyFootIKInternal_mE3BE5C35529A4E1870F6086D77A22DCB539201EE_ftn) (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *, bool);
	static AnimationClipPlayable_SetApplyFootIKInternal_mE3BE5C35529A4E1870F6086D77A22DCB539201EE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClipPlayable_SetApplyFootIKInternal_mE3BE5C35529A4E1870F6086D77A22DCB539201EE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationClipPlayable::SetApplyFootIKInternal(UnityEngine.Playables.PlayableHandle&,System.Boolean)");
	_il2cpp_icall_func(___handle0, ___value1);
}
// System.Void UnityEngine.Animations.AnimationClipPlayable::SetRemoveStartOffsetInternal(UnityEngine.Playables.PlayableHandle&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClipPlayable_SetRemoveStartOffsetInternal_m4067DC6BB1AEA323177A9542948A2A825254FF7B (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * ___handle0, bool ___value1, const RuntimeMethod* method)
{
	typedef void (*AnimationClipPlayable_SetRemoveStartOffsetInternal_m4067DC6BB1AEA323177A9542948A2A825254FF7B_ftn) (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *, bool);
	static AnimationClipPlayable_SetRemoveStartOffsetInternal_m4067DC6BB1AEA323177A9542948A2A825254FF7B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClipPlayable_SetRemoveStartOffsetInternal_m4067DC6BB1AEA323177A9542948A2A825254FF7B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationClipPlayable::SetRemoveStartOffsetInternal(UnityEngine.Playables.PlayableHandle&,System.Boolean)");
	_il2cpp_icall_func(___handle0, ___value1);
}
// System.Void UnityEngine.Animations.AnimationClipPlayable::SetOverrideLoopTimeInternal(UnityEngine.Playables.PlayableHandle&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClipPlayable_SetOverrideLoopTimeInternal_m077FD77BCEC62D1D497931CE7D09E9C7140BEABE (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * ___handle0, bool ___value1, const RuntimeMethod* method)
{
	typedef void (*AnimationClipPlayable_SetOverrideLoopTimeInternal_m077FD77BCEC62D1D497931CE7D09E9C7140BEABE_ftn) (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *, bool);
	static AnimationClipPlayable_SetOverrideLoopTimeInternal_m077FD77BCEC62D1D497931CE7D09E9C7140BEABE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClipPlayable_SetOverrideLoopTimeInternal_m077FD77BCEC62D1D497931CE7D09E9C7140BEABE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationClipPlayable::SetOverrideLoopTimeInternal(UnityEngine.Playables.PlayableHandle&,System.Boolean)");
	_il2cpp_icall_func(___handle0, ___value1);
}
// System.Void UnityEngine.Animations.AnimationClipPlayable::SetLoopTimeInternal(UnityEngine.Playables.PlayableHandle&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClipPlayable_SetLoopTimeInternal_m1B66C46208A99BAB57F41E5611892CF84D8D485F (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * ___handle0, bool ___value1, const RuntimeMethod* method)
{
	typedef void (*AnimationClipPlayable_SetLoopTimeInternal_m1B66C46208A99BAB57F41E5611892CF84D8D485F_ftn) (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *, bool);
	static AnimationClipPlayable_SetLoopTimeInternal_m1B66C46208A99BAB57F41E5611892CF84D8D485F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClipPlayable_SetLoopTimeInternal_m1B66C46208A99BAB57F41E5611892CF84D8D485F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationClipPlayable::SetLoopTimeInternal(UnityEngine.Playables.PlayableHandle&,System.Boolean)");
	_il2cpp_icall_func(___handle0, ___value1);
}
// System.Boolean UnityEngine.Animations.AnimationClipPlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.AnimationClip,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationClipPlayable_CreateHandleInternal_Injected_mD10E5D388D1EFCF44E0DD1E412B7180461A5D894 (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA * ___graph0, AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * ___clip1, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * ___handle2, const RuntimeMethod* method)
{
	typedef bool (*AnimationClipPlayable_CreateHandleInternal_Injected_mD10E5D388D1EFCF44E0DD1E412B7180461A5D894_ftn) (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA *, AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE *, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *);
	static AnimationClipPlayable_CreateHandleInternal_Injected_mD10E5D388D1EFCF44E0DD1E412B7180461A5D894_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClipPlayable_CreateHandleInternal_Injected_mD10E5D388D1EFCF44E0DD1E412B7180461A5D894_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationClipPlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.AnimationClip,UnityEngine.Playables.PlayableHandle&)");
	bool retVal = _il2cpp_icall_func(___graph0, ___clip1, ___handle2);
	return retVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Animations.AnimationLayerMixerPlayable UnityEngine.Animations.AnimationLayerMixerPlayable::Create(UnityEngine.Playables.PlayableGraph,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371  AnimationLayerMixerPlayable_Create_m6D3F092372F36FE32596E6AEB3DFA5FE37FEBCF9 (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  ___graph0, int32_t ___inputCount1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationLayerMixerPlayable_Create_m6D3F092372F36FE32596E6AEB3DFA5FE37FEBCF9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  L_0 = ___graph0;
		int32_t L_1 = ___inputCount1;
		IL2CPP_RUNTIME_CLASS_INIT(AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371_il2cpp_TypeInfo_var);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_2 = AnimationLayerMixerPlayable_CreateHandle_m85139F526B28E183A04E47F0CFD09D8927F68EB8(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_3 = V_0;
		AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371  L_4;
		memset((&L_4), 0, sizeof(L_4));
		AnimationLayerMixerPlayable__ctor_mA2156DFDEA435F14446528098837ED3FF6B7147C((&L_4), L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		goto IL_0012;
	}

IL_0012:
	{
		AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371  L_5 = V_1;
		return L_5;
	}
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationLayerMixerPlayable::CreateHandle(UnityEngine.Playables.PlayableGraph,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationLayerMixerPlayable_CreateHandle_m85139F526B28E183A04E47F0CFD09D8927F68EB8 (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  ___graph0, int32_t ___inputCount1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationLayerMixerPlayable_CreateHandle_m85139F526B28E183A04E47F0CFD09D8927F68EB8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = PlayableHandle_get_Null_m09DE585EF795EFA2811950173C80F4FA24CBAAD1(/*hidden argument*/NULL);
		V_0 = L_0;
		PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  L_1 = ___graph0;
		IL2CPP_RUNTIME_CLASS_INIT(AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371_il2cpp_TypeInfo_var);
		bool L_2 = AnimationLayerMixerPlayable_CreateHandleInternal_m24E2E0BE206419F3607623F5EA037F0E6E82B532(L_1, (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&V_0), /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_4 = PlayableHandle_get_Null_m09DE585EF795EFA2811950173C80F4FA24CBAAD1(/*hidden argument*/NULL);
		V_2 = L_4;
		goto IL_002b;
	}

IL_001e:
	{
		int32_t L_5 = ___inputCount1;
		PlayableHandle_SetInputCount_m49435B8578BD74EB205D70348E63D4F92FB4FF69((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&V_0), L_5, /*hidden argument*/NULL);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_6 = V_0;
		V_2 = L_6;
		goto IL_002b;
	}

IL_002b:
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_7 = V_2;
		return L_7;
	}
}
// System.Void UnityEngine.Animations.AnimationLayerMixerPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationLayerMixerPlayable__ctor_mA2156DFDEA435F14446528098837ED3FF6B7147C (AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371 * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationLayerMixerPlayable__ctor_mA2156DFDEA435F14446528098837ED3FF6B7147C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0 = PlayableHandle_IsValid_mDA0A998EA6E2442C5F3B6CDFAF07EBA9A6873059((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&___handle0), /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		bool L_2 = PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371_mC3942EB4B00EAC10035AA7EBE23CA679C8790D20((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&___handle0), /*hidden argument*/PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371_mC3942EB4B00EAC10035AA7EBE23CA679C8790D20_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA * L_4 = (InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA *)il2cpp_codegen_object_new(InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_m3795145150387C6C362DA693613505C604AB8812(L_4, _stringLiteral6502516F734DD885173E353D47AAEB82BC7070A9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, AnimationLayerMixerPlayable__ctor_mA2156DFDEA435F14446528098837ED3FF6B7147C_RuntimeMethod_var);
	}

IL_0026:
	{
	}

IL_0027:
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_5 = ___handle0;
		__this->set_m_Handle_0(L_5);
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationLayerMixerPlayable__ctor_mA2156DFDEA435F14446528098837ED3FF6B7147C_AdjustorThunk (RuntimeObject * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371 * _thisAdjusted = reinterpret_cast<AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371 *>(__this + _offset);
	AnimationLayerMixerPlayable__ctor_mA2156DFDEA435F14446528098837ED3FF6B7147C(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationLayerMixerPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationLayerMixerPlayable_GetHandle_mD4159505D29B17D507599ED6FA3BEC1370691DB8 (AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371 * __this, const RuntimeMethod* method)
{
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationLayerMixerPlayable_GetHandle_mD4159505D29B17D507599ED6FA3BEC1370691DB8_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371 * _thisAdjusted = reinterpret_cast<AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371 *>(__this + _offset);
	return AnimationLayerMixerPlayable_GetHandle_mD4159505D29B17D507599ED6FA3BEC1370691DB8(_thisAdjusted, method);
}
// UnityEngine.Playables.Playable UnityEngine.Animations.AnimationLayerMixerPlayable::op_Implicit(UnityEngine.Animations.AnimationLayerMixerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  AnimationLayerMixerPlayable_op_Implicit_m12D04DC519770FD092C8DF6ED9360E8A3D230A8E (AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371  ___playable0, const RuntimeMethod* method)
{
	Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = AnimationLayerMixerPlayable_GetHandle_mD4159505D29B17D507599ED6FA3BEC1370691DB8((AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371 *)(&___playable0), /*hidden argument*/NULL);
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Playable__ctor_m24C6ED455A921F585698BFFEC5CCED397205543E((&L_1), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.Animations.AnimationLayerMixerPlayable::Equals(UnityEngine.Animations.AnimationLayerMixerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationLayerMixerPlayable_Equals_m0A6A86FEDCE98E63B84BD01D0D362D03EA733E59 (AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371 * __this, AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationLayerMixerPlayable_Equals_m0A6A86FEDCE98E63B84BD01D0D362D03EA733E59_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = AnimationLayerMixerPlayable_GetHandle_mD4159505D29B17D507599ED6FA3BEC1370691DB8((AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371 *)__this, /*hidden argument*/NULL);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_1 = AnimationLayerMixerPlayable_GetHandle_mD4159505D29B17D507599ED6FA3BEC1370691DB8((AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371 *)(&___other0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var);
		bool L_2 = PlayableHandle_op_Equality_mBA774AE123AF794A1EB55148206CDD52DAFA42DF(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool AnimationLayerMixerPlayable_Equals_m0A6A86FEDCE98E63B84BD01D0D362D03EA733E59_AdjustorThunk (RuntimeObject * __this, AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371 * _thisAdjusted = reinterpret_cast<AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371 *>(__this + _offset);
	return AnimationLayerMixerPlayable_Equals_m0A6A86FEDCE98E63B84BD01D0D362D03EA733E59(_thisAdjusted, ___other0, method);
}
// System.Void UnityEngine.Animations.AnimationLayerMixerPlayable::SetLayerMaskFromAvatarMask(System.UInt32,UnityEngine.AvatarMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationLayerMixerPlayable_SetLayerMaskFromAvatarMask_mF5C7BB80B9DDA7583F5E88E73FDCB0C3D494A5A8 (AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371 * __this, uint32_t ___layerIndex0, AvatarMask_t12E2214B133E61C5CF28DC1E4F6DC2451C75D88A * ___mask1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationLayerMixerPlayable_SetLayerMaskFromAvatarMask_mF5C7BB80B9DDA7583F5E88E73FDCB0C3D494A5A8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		uint32_t L_0 = ___layerIndex0;
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * L_1 = __this->get_address_of_m_Handle_0();
		int32_t L_2 = PlayableHandle_GetInputCount_m6E9DDB55B527BD1E42B7ED094AC9CF154B72E416((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)L_1, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)((((int64_t)(((int64_t)((uint64_t)L_0)))) < ((int64_t)(((int64_t)((int64_t)L_2)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0045;
		}
	}
	{
		uint32_t L_4 = ___layerIndex0;
		uint32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var, &L_5);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * L_7 = __this->get_address_of_m_Handle_0();
		int32_t L_8 = PlayableHandle_GetInputCount_m6E9DDB55B527BD1E42B7ED094AC9CF154B72E416((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)L_7, /*hidden argument*/NULL);
		int32_t L_9 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1));
		RuntimeObject * L_10 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_9);
		String_t* L_11 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteralE84CF4E03BE4B80890666511595220B5EC9F1949, L_6, L_10, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_12 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m300CE4D04A068C209FD858101AC361C1B600B5AE(L_12, _stringLiteral89A50E4F5CC89A3DCF37354A9F39B7C5D00DD0F2, L_11, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, AnimationLayerMixerPlayable_SetLayerMaskFromAvatarMask_mF5C7BB80B9DDA7583F5E88E73FDCB0C3D494A5A8_RuntimeMethod_var);
	}

IL_0045:
	{
		AvatarMask_t12E2214B133E61C5CF28DC1E4F6DC2451C75D88A * L_13 = ___mask1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_14 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_13, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_1 = L_14;
		bool L_15 = V_1;
		if (!L_15)
		{
			goto IL_005b;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_16 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_16, _stringLiteral9D4CCA1595C30E43D23F14AEDF815846F837956A, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, AnimationLayerMixerPlayable_SetLayerMaskFromAvatarMask_mF5C7BB80B9DDA7583F5E88E73FDCB0C3D494A5A8_RuntimeMethod_var);
	}

IL_005b:
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * L_17 = __this->get_address_of_m_Handle_0();
		uint32_t L_18 = ___layerIndex0;
		AvatarMask_t12E2214B133E61C5CF28DC1E4F6DC2451C75D88A * L_19 = ___mask1;
		IL2CPP_RUNTIME_CLASS_INIT(AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371_il2cpp_TypeInfo_var);
		AnimationLayerMixerPlayable_SetLayerMaskFromAvatarMaskInternal_m3C701203649DD4C6D295EEE3E9896E95041D533E((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)L_17, L_18, L_19, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationLayerMixerPlayable_SetLayerMaskFromAvatarMask_mF5C7BB80B9DDA7583F5E88E73FDCB0C3D494A5A8_AdjustorThunk (RuntimeObject * __this, uint32_t ___layerIndex0, AvatarMask_t12E2214B133E61C5CF28DC1E4F6DC2451C75D88A * ___mask1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371 * _thisAdjusted = reinterpret_cast<AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371 *>(__this + _offset);
	AnimationLayerMixerPlayable_SetLayerMaskFromAvatarMask_mF5C7BB80B9DDA7583F5E88E73FDCB0C3D494A5A8(_thisAdjusted, ___layerIndex0, ___mask1, method);
}
// System.Boolean UnityEngine.Animations.AnimationLayerMixerPlayable::CreateHandleInternal(UnityEngine.Playables.PlayableGraph,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationLayerMixerPlayable_CreateHandleInternal_m24E2E0BE206419F3607623F5EA037F0E6E82B532 (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  ___graph0, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * ___handle1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationLayerMixerPlayable_CreateHandleInternal_m24E2E0BE206419F3607623F5EA037F0E6E82B532_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * L_0 = ___handle1;
		IL2CPP_RUNTIME_CLASS_INIT(AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371_il2cpp_TypeInfo_var);
		bool L_1 = AnimationLayerMixerPlayable_CreateHandleInternal_Injected_m9BD85B42AF94CE9CB57D0A40B585C2A49846133A((PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA *)(&___graph0), (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityEngine.Animations.AnimationLayerMixerPlayable::SetLayerMaskFromAvatarMaskInternal(UnityEngine.Playables.PlayableHandle&,System.UInt32,UnityEngine.AvatarMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationLayerMixerPlayable_SetLayerMaskFromAvatarMaskInternal_m3C701203649DD4C6D295EEE3E9896E95041D533E (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * ___handle0, uint32_t ___layerIndex1, AvatarMask_t12E2214B133E61C5CF28DC1E4F6DC2451C75D88A * ___mask2, const RuntimeMethod* method)
{
	typedef void (*AnimationLayerMixerPlayable_SetLayerMaskFromAvatarMaskInternal_m3C701203649DD4C6D295EEE3E9896E95041D533E_ftn) (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *, uint32_t, AvatarMask_t12E2214B133E61C5CF28DC1E4F6DC2451C75D88A *);
	static AnimationLayerMixerPlayable_SetLayerMaskFromAvatarMaskInternal_m3C701203649DD4C6D295EEE3E9896E95041D533E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationLayerMixerPlayable_SetLayerMaskFromAvatarMaskInternal_m3C701203649DD4C6D295EEE3E9896E95041D533E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationLayerMixerPlayable::SetLayerMaskFromAvatarMaskInternal(UnityEngine.Playables.PlayableHandle&,System.UInt32,UnityEngine.AvatarMask)");
	_il2cpp_icall_func(___handle0, ___layerIndex1, ___mask2);
}
// System.Void UnityEngine.Animations.AnimationLayerMixerPlayable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationLayerMixerPlayable__cctor_m3712A5D44F275E70624C0D734C9CED9BD12D0AC9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationLayerMixerPlayable__cctor_m3712A5D44F275E70624C0D734C9CED9BD12D0AC9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = PlayableHandle_get_Null_m09DE585EF795EFA2811950173C80F4FA24CBAAD1(/*hidden argument*/NULL);
		AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371  L_1;
		memset((&L_1), 0, sizeof(L_1));
		AnimationLayerMixerPlayable__ctor_mA2156DFDEA435F14446528098837ED3FF6B7147C((&L_1), L_0, /*hidden argument*/NULL);
		((AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371_StaticFields*)il2cpp_codegen_static_fields_for(AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371_il2cpp_TypeInfo_var))->set_m_NullPlayable_1(L_1);
		return;
	}
}
// System.Boolean UnityEngine.Animations.AnimationLayerMixerPlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationLayerMixerPlayable_CreateHandleInternal_Injected_m9BD85B42AF94CE9CB57D0A40B585C2A49846133A (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA * ___graph0, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * ___handle1, const RuntimeMethod* method)
{
	typedef bool (*AnimationLayerMixerPlayable_CreateHandleInternal_Injected_m9BD85B42AF94CE9CB57D0A40B585C2A49846133A_ftn) (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA *, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *);
	static AnimationLayerMixerPlayable_CreateHandleInternal_Injected_m9BD85B42AF94CE9CB57D0A40B585C2A49846133A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationLayerMixerPlayable_CreateHandleInternal_Injected_m9BD85B42AF94CE9CB57D0A40B585C2A49846133A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationLayerMixerPlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.Playables.PlayableHandle&)");
	bool retVal = _il2cpp_icall_func(___graph0, ___handle1);
	return retVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Animations.AnimationMixerPlayable UnityEngine.Animations.AnimationMixerPlayable::Create(UnityEngine.Playables.PlayableGraph,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A  AnimationMixerPlayable_Create_m5E6AE8A0051F0267AFFAEC5D449CEC0A0A682D2C (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  ___graph0, int32_t ___inputCount1, bool ___normalizeWeights2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationMixerPlayable_Create_m5E6AE8A0051F0267AFFAEC5D449CEC0A0A682D2C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  L_0 = ___graph0;
		int32_t L_1 = ___inputCount1;
		bool L_2 = ___normalizeWeights2;
		IL2CPP_RUNTIME_CLASS_INIT(AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A_il2cpp_TypeInfo_var);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_3 = AnimationMixerPlayable_CreateHandle_m3A8F728441AF2D2D16833A607E8A602FBDEDD313(L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_4 = V_0;
		AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A  L_5;
		memset((&L_5), 0, sizeof(L_5));
		AnimationMixerPlayable__ctor_mD446E3257F803A3D4C04D394A75AA5376533CF43((&L_5), L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		goto IL_0013;
	}

IL_0013:
	{
		AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A  L_6 = V_1;
		return L_6;
	}
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMixerPlayable::CreateHandle(UnityEngine.Playables.PlayableGraph,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationMixerPlayable_CreateHandle_m3A8F728441AF2D2D16833A607E8A602FBDEDD313 (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  ___graph0, int32_t ___inputCount1, bool ___normalizeWeights2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationMixerPlayable_CreateHandle_m3A8F728441AF2D2D16833A607E8A602FBDEDD313_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = PlayableHandle_get_Null_m09DE585EF795EFA2811950173C80F4FA24CBAAD1(/*hidden argument*/NULL);
		V_0 = L_0;
		PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  L_1 = ___graph0;
		bool L_2 = ___normalizeWeights2;
		IL2CPP_RUNTIME_CLASS_INIT(AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A_il2cpp_TypeInfo_var);
		bool L_3 = AnimationMixerPlayable_CreateHandleInternal_mED72AB9121F23A6D12EBABD539CF5E046F4AFD16(L_1, L_2, (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&V_0), /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_5 = PlayableHandle_get_Null_m09DE585EF795EFA2811950173C80F4FA24CBAAD1(/*hidden argument*/NULL);
		V_2 = L_5;
		goto IL_002c;
	}

IL_001f:
	{
		int32_t L_6 = ___inputCount1;
		PlayableHandle_SetInputCount_m49435B8578BD74EB205D70348E63D4F92FB4FF69((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&V_0), L_6, /*hidden argument*/NULL);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_7 = V_0;
		V_2 = L_7;
		goto IL_002c;
	}

IL_002c:
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_8 = V_2;
		return L_8;
	}
}
// System.Void UnityEngine.Animations.AnimationMixerPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationMixerPlayable__ctor_mD446E3257F803A3D4C04D394A75AA5376533CF43 (AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationMixerPlayable__ctor_mD446E3257F803A3D4C04D394A75AA5376533CF43_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0 = PlayableHandle_IsValid_mDA0A998EA6E2442C5F3B6CDFAF07EBA9A6873059((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&___handle0), /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		bool L_2 = PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A_m172B8D6DA48AD49F0740833F7D18CD468B072E5E((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&___handle0), /*hidden argument*/PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A_m172B8D6DA48AD49F0740833F7D18CD468B072E5E_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA * L_4 = (InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA *)il2cpp_codegen_object_new(InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_m3795145150387C6C362DA693613505C604AB8812(L_4, _stringLiteral35482DF98E7DEED2FC6BDE9BDD1E273E27CF1F2C, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, AnimationMixerPlayable__ctor_mD446E3257F803A3D4C04D394A75AA5376533CF43_RuntimeMethod_var);
	}

IL_0026:
	{
	}

IL_0027:
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_5 = ___handle0;
		__this->set_m_Handle_0(L_5);
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationMixerPlayable__ctor_mD446E3257F803A3D4C04D394A75AA5376533CF43_AdjustorThunk (RuntimeObject * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A * _thisAdjusted = reinterpret_cast<AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A *>(__this + _offset);
	AnimationMixerPlayable__ctor_mD446E3257F803A3D4C04D394A75AA5376533CF43(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMixerPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationMixerPlayable_GetHandle_mC5939239D7C47C6E0FF4EC72021EE793863BC567 (AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A * __this, const RuntimeMethod* method)
{
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationMixerPlayable_GetHandle_mC5939239D7C47C6E0FF4EC72021EE793863BC567_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A * _thisAdjusted = reinterpret_cast<AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A *>(__this + _offset);
	return AnimationMixerPlayable_GetHandle_mC5939239D7C47C6E0FF4EC72021EE793863BC567(_thisAdjusted, method);
}
// UnityEngine.Playables.Playable UnityEngine.Animations.AnimationMixerPlayable::op_Implicit(UnityEngine.Animations.AnimationMixerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  AnimationMixerPlayable_op_Implicit_m2E1D0D00AB1DD1DED86B861277303018CFB568AB (AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A  ___playable0, const RuntimeMethod* method)
{
	Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = AnimationMixerPlayable_GetHandle_mC5939239D7C47C6E0FF4EC72021EE793863BC567((AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A *)(&___playable0), /*hidden argument*/NULL);
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Playable__ctor_m24C6ED455A921F585698BFFEC5CCED397205543E((&L_1), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.Animations.AnimationMixerPlayable::Equals(UnityEngine.Animations.AnimationMixerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationMixerPlayable_Equals_m7CB1B61B74A6BE00A35AD072490F07D4C7A17B0F (AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A * __this, AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationMixerPlayable_Equals_m7CB1B61B74A6BE00A35AD072490F07D4C7A17B0F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = AnimationMixerPlayable_GetHandle_mC5939239D7C47C6E0FF4EC72021EE793863BC567((AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A *)__this, /*hidden argument*/NULL);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_1 = AnimationMixerPlayable_GetHandle_mC5939239D7C47C6E0FF4EC72021EE793863BC567((AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A *)(&___other0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var);
		bool L_2 = PlayableHandle_op_Equality_mBA774AE123AF794A1EB55148206CDD52DAFA42DF(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool AnimationMixerPlayable_Equals_m7CB1B61B74A6BE00A35AD072490F07D4C7A17B0F_AdjustorThunk (RuntimeObject * __this, AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A * _thisAdjusted = reinterpret_cast<AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A *>(__this + _offset);
	return AnimationMixerPlayable_Equals_m7CB1B61B74A6BE00A35AD072490F07D4C7A17B0F(_thisAdjusted, ___other0, method);
}
// System.Boolean UnityEngine.Animations.AnimationMixerPlayable::CreateHandleInternal(UnityEngine.Playables.PlayableGraph,System.Boolean,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationMixerPlayable_CreateHandleInternal_mED72AB9121F23A6D12EBABD539CF5E046F4AFD16 (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  ___graph0, bool ___normalizeWeights1, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * ___handle2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationMixerPlayable_CreateHandleInternal_mED72AB9121F23A6D12EBABD539CF5E046F4AFD16_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___normalizeWeights1;
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * L_1 = ___handle2;
		IL2CPP_RUNTIME_CLASS_INIT(AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A_il2cpp_TypeInfo_var);
		bool L_2 = AnimationMixerPlayable_CreateHandleInternal_Injected_m01A68B12AFBBAF8CFE80C01EA6A68D350802F7F6((PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA *)(&___graph0), L_0, (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UnityEngine.Animations.AnimationMixerPlayable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationMixerPlayable__cctor_m820F56C1D4257D4F5446BD66402D4428E0DF8E3E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationMixerPlayable__cctor_m820F56C1D4257D4F5446BD66402D4428E0DF8E3E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = PlayableHandle_get_Null_m09DE585EF795EFA2811950173C80F4FA24CBAAD1(/*hidden argument*/NULL);
		AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A  L_1;
		memset((&L_1), 0, sizeof(L_1));
		AnimationMixerPlayable__ctor_mD446E3257F803A3D4C04D394A75AA5376533CF43((&L_1), L_0, /*hidden argument*/NULL);
		((AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A_StaticFields*)il2cpp_codegen_static_fields_for(AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A_il2cpp_TypeInfo_var))->set_m_NullPlayable_1(L_1);
		return;
	}
}
// System.Boolean UnityEngine.Animations.AnimationMixerPlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,System.Boolean,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationMixerPlayable_CreateHandleInternal_Injected_m01A68B12AFBBAF8CFE80C01EA6A68D350802F7F6 (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA * ___graph0, bool ___normalizeWeights1, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * ___handle2, const RuntimeMethod* method)
{
	typedef bool (*AnimationMixerPlayable_CreateHandleInternal_Injected_m01A68B12AFBBAF8CFE80C01EA6A68D350802F7F6_ftn) (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA *, bool, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *);
	static AnimationMixerPlayable_CreateHandleInternal_Injected_m01A68B12AFBBAF8CFE80C01EA6A68D350802F7F6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationMixerPlayable_CreateHandleInternal_Injected_m01A68B12AFBBAF8CFE80C01EA6A68D350802F7F6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationMixerPlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,System.Boolean,UnityEngine.Playables.PlayableHandle&)");
	bool retVal = _il2cpp_icall_func(___graph0, ___normalizeWeights1, ___handle2);
	return retVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Animations.AnimationMotionXToDeltaPlayable UnityEngine.Animations.AnimationMotionXToDeltaPlayable::Create(UnityEngine.Playables.PlayableGraph)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC  AnimationMotionXToDeltaPlayable_Create_mA7DA433C50F2102986221FF9382EC33BDE388271 (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  ___graph0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationMotionXToDeltaPlayable_Create_mA7DA433C50F2102986221FF9382EC33BDE388271_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  L_0 = ___graph0;
		IL2CPP_RUNTIME_CLASS_INIT(AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC_il2cpp_TypeInfo_var);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_1 = AnimationMotionXToDeltaPlayable_CreateHandle_m91B60DED2AE0AAA8EEDE3E8B34DDACAC140BA7BD(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_2 = V_0;
		AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC  L_3;
		memset((&L_3), 0, sizeof(L_3));
		AnimationMotionXToDeltaPlayable__ctor_mC51D5F76DD0CE29B305932303A4A5AA42ACCD9E6((&L_3), L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC  L_4 = V_1;
		return L_4;
	}
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMotionXToDeltaPlayable::CreateHandle(UnityEngine.Playables.PlayableGraph)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationMotionXToDeltaPlayable_CreateHandle_m91B60DED2AE0AAA8EEDE3E8B34DDACAC140BA7BD (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  ___graph0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationMotionXToDeltaPlayable_CreateHandle_m91B60DED2AE0AAA8EEDE3E8B34DDACAC140BA7BD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = PlayableHandle_get_Null_m09DE585EF795EFA2811950173C80F4FA24CBAAD1(/*hidden argument*/NULL);
		V_0 = L_0;
		PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  L_1 = ___graph0;
		IL2CPP_RUNTIME_CLASS_INIT(AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC_il2cpp_TypeInfo_var);
		bool L_2 = AnimationMotionXToDeltaPlayable_CreateHandleInternal_m9A0B513A408E3A9BD0D0AE040633DE4A92BAE77C(L_1, (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&V_0), /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_4 = PlayableHandle_get_Null_m09DE585EF795EFA2811950173C80F4FA24CBAAD1(/*hidden argument*/NULL);
		V_2 = L_4;
		goto IL_002b;
	}

IL_001e:
	{
		PlayableHandle_SetInputCount_m49435B8578BD74EB205D70348E63D4F92FB4FF69((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&V_0), 1, /*hidden argument*/NULL);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_5 = V_0;
		V_2 = L_5;
		goto IL_002b;
	}

IL_002b:
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_6 = V_2;
		return L_6;
	}
}
// System.Void UnityEngine.Animations.AnimationMotionXToDeltaPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationMotionXToDeltaPlayable__ctor_mC51D5F76DD0CE29B305932303A4A5AA42ACCD9E6 (AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationMotionXToDeltaPlayable__ctor_mC51D5F76DD0CE29B305932303A4A5AA42ACCD9E6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0 = PlayableHandle_IsValid_mDA0A998EA6E2442C5F3B6CDFAF07EBA9A6873059((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&___handle0), /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		bool L_2 = PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC_mCC63F3E0D55A21A9E56D80D26150AD2B78C6EC50((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&___handle0), /*hidden argument*/PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC_mCC63F3E0D55A21A9E56D80D26150AD2B78C6EC50_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA * L_4 = (InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA *)il2cpp_codegen_object_new(InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_m3795145150387C6C362DA693613505C604AB8812(L_4, _stringLiteral59BDBA16999CF4EF3F7712740907B2C5E860459C, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, AnimationMotionXToDeltaPlayable__ctor_mC51D5F76DD0CE29B305932303A4A5AA42ACCD9E6_RuntimeMethod_var);
	}

IL_0026:
	{
	}

IL_0027:
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_5 = ___handle0;
		__this->set_m_Handle_0(L_5);
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationMotionXToDeltaPlayable__ctor_mC51D5F76DD0CE29B305932303A4A5AA42ACCD9E6_AdjustorThunk (RuntimeObject * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC * _thisAdjusted = reinterpret_cast<AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC *>(__this + _offset);
	AnimationMotionXToDeltaPlayable__ctor_mC51D5F76DD0CE29B305932303A4A5AA42ACCD9E6(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMotionXToDeltaPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationMotionXToDeltaPlayable_GetHandle_mE36F0671962333EAF5B434A062930D9E76A79076 (AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC * __this, const RuntimeMethod* method)
{
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationMotionXToDeltaPlayable_GetHandle_mE36F0671962333EAF5B434A062930D9E76A79076_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC * _thisAdjusted = reinterpret_cast<AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC *>(__this + _offset);
	return AnimationMotionXToDeltaPlayable_GetHandle_mE36F0671962333EAF5B434A062930D9E76A79076(_thisAdjusted, method);
}
// UnityEngine.Playables.Playable UnityEngine.Animations.AnimationMotionXToDeltaPlayable::op_Implicit(UnityEngine.Animations.AnimationMotionXToDeltaPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  AnimationMotionXToDeltaPlayable_op_Implicit_m89BEE39648559D44B297A627C68C2F6F55A12974 (AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC  ___playable0, const RuntimeMethod* method)
{
	Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = AnimationMotionXToDeltaPlayable_GetHandle_mE36F0671962333EAF5B434A062930D9E76A79076((AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC *)(&___playable0), /*hidden argument*/NULL);
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Playable__ctor_m24C6ED455A921F585698BFFEC5CCED397205543E((&L_1), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.Animations.AnimationMotionXToDeltaPlayable::Equals(UnityEngine.Animations.AnimationMotionXToDeltaPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationMotionXToDeltaPlayable_Equals_m53B4AAB54D7F3633C3954056F8C334BB8B7D590E (AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC * __this, AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationMotionXToDeltaPlayable_Equals_m53B4AAB54D7F3633C3954056F8C334BB8B7D590E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = AnimationMotionXToDeltaPlayable_GetHandle_mE36F0671962333EAF5B434A062930D9E76A79076((AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC *)__this, /*hidden argument*/NULL);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_1 = AnimationMotionXToDeltaPlayable_GetHandle_mE36F0671962333EAF5B434A062930D9E76A79076((AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC *)(&___other0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var);
		bool L_2 = PlayableHandle_op_Equality_mBA774AE123AF794A1EB55148206CDD52DAFA42DF(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool AnimationMotionXToDeltaPlayable_Equals_m53B4AAB54D7F3633C3954056F8C334BB8B7D590E_AdjustorThunk (RuntimeObject * __this, AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC * _thisAdjusted = reinterpret_cast<AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC *>(__this + _offset);
	return AnimationMotionXToDeltaPlayable_Equals_m53B4AAB54D7F3633C3954056F8C334BB8B7D590E(_thisAdjusted, ___other0, method);
}
// System.Void UnityEngine.Animations.AnimationMotionXToDeltaPlayable::SetAbsoluteMotion(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationMotionXToDeltaPlayable_SetAbsoluteMotion_mDCF671C2986EBD639EDE0AF88748507EAC9853B9 (AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationMotionXToDeltaPlayable_SetAbsoluteMotion_mDCF671C2986EBD639EDE0AF88748507EAC9853B9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * L_0 = __this->get_address_of_m_Handle_0();
		bool L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC_il2cpp_TypeInfo_var);
		AnimationMotionXToDeltaPlayable_SetAbsoluteMotionInternal_m81F7C39EDA56A9192470408CF52554FD224FA496((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationMotionXToDeltaPlayable_SetAbsoluteMotion_mDCF671C2986EBD639EDE0AF88748507EAC9853B9_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC * _thisAdjusted = reinterpret_cast<AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC *>(__this + _offset);
	AnimationMotionXToDeltaPlayable_SetAbsoluteMotion_mDCF671C2986EBD639EDE0AF88748507EAC9853B9(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.Animations.AnimationMotionXToDeltaPlayable::CreateHandleInternal(UnityEngine.Playables.PlayableGraph,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationMotionXToDeltaPlayable_CreateHandleInternal_m9A0B513A408E3A9BD0D0AE040633DE4A92BAE77C (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  ___graph0, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * ___handle1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationMotionXToDeltaPlayable_CreateHandleInternal_m9A0B513A408E3A9BD0D0AE040633DE4A92BAE77C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * L_0 = ___handle1;
		IL2CPP_RUNTIME_CLASS_INIT(AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC_il2cpp_TypeInfo_var);
		bool L_1 = AnimationMotionXToDeltaPlayable_CreateHandleInternal_Injected_m30027A59F8F0726E74DC4DD30A8186BF819B9BDB((PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA *)(&___graph0), (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityEngine.Animations.AnimationMotionXToDeltaPlayable::SetAbsoluteMotionInternal(UnityEngine.Playables.PlayableHandle&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationMotionXToDeltaPlayable_SetAbsoluteMotionInternal_m81F7C39EDA56A9192470408CF52554FD224FA496 (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * ___handle0, bool ___value1, const RuntimeMethod* method)
{
	typedef void (*AnimationMotionXToDeltaPlayable_SetAbsoluteMotionInternal_m81F7C39EDA56A9192470408CF52554FD224FA496_ftn) (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *, bool);
	static AnimationMotionXToDeltaPlayable_SetAbsoluteMotionInternal_m81F7C39EDA56A9192470408CF52554FD224FA496_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationMotionXToDeltaPlayable_SetAbsoluteMotionInternal_m81F7C39EDA56A9192470408CF52554FD224FA496_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationMotionXToDeltaPlayable::SetAbsoluteMotionInternal(UnityEngine.Playables.PlayableHandle&,System.Boolean)");
	_il2cpp_icall_func(___handle0, ___value1);
}
// System.Void UnityEngine.Animations.AnimationMotionXToDeltaPlayable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationMotionXToDeltaPlayable__cctor_mCB948CE31E0AAEC53CB1D6746D091604413C5EEE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationMotionXToDeltaPlayable__cctor_mCB948CE31E0AAEC53CB1D6746D091604413C5EEE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = PlayableHandle_get_Null_m09DE585EF795EFA2811950173C80F4FA24CBAAD1(/*hidden argument*/NULL);
		AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC  L_1;
		memset((&L_1), 0, sizeof(L_1));
		AnimationMotionXToDeltaPlayable__ctor_mC51D5F76DD0CE29B305932303A4A5AA42ACCD9E6((&L_1), L_0, /*hidden argument*/NULL);
		((AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC_StaticFields*)il2cpp_codegen_static_fields_for(AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC_il2cpp_TypeInfo_var))->set_m_NullPlayable_1(L_1);
		return;
	}
}
// System.Boolean UnityEngine.Animations.AnimationMotionXToDeltaPlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationMotionXToDeltaPlayable_CreateHandleInternal_Injected_m30027A59F8F0726E74DC4DD30A8186BF819B9BDB (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA * ___graph0, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * ___handle1, const RuntimeMethod* method)
{
	typedef bool (*AnimationMotionXToDeltaPlayable_CreateHandleInternal_Injected_m30027A59F8F0726E74DC4DD30A8186BF819B9BDB_ftn) (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA *, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *);
	static AnimationMotionXToDeltaPlayable_CreateHandleInternal_Injected_m30027A59F8F0726E74DC4DD30A8186BF819B9BDB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationMotionXToDeltaPlayable_CreateHandleInternal_Injected_m30027A59F8F0726E74DC4DD30A8186BF819B9BDB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationMotionXToDeltaPlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.Playables.PlayableHandle&)");
	bool retVal = _il2cpp_icall_func(___graph0, ___handle1);
	return retVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Animations.AnimationOffsetPlayable UnityEngine.Animations.AnimationOffsetPlayable::Create(UnityEngine.Playables.PlayableGraph,UnityEngine.Vector3,UnityEngine.Quaternion,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E  AnimationOffsetPlayable_Create_m1A514FBB2EB7D05F31688DE2D194E9FC063B0720 (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  ___graph0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation2, int32_t ___inputCount3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationOffsetPlayable_Create_m1A514FBB2EB7D05F31688DE2D194E9FC063B0720_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  L_0 = ___graph0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___position1;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_2 = ___rotation2;
		int32_t L_3 = ___inputCount3;
		IL2CPP_RUNTIME_CLASS_INIT(AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E_il2cpp_TypeInfo_var);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_4 = AnimationOffsetPlayable_CreateHandle_mC5C47FEB5F1B34AB6237DAB01660267351AF12C9(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_5 = V_0;
		AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		AnimationOffsetPlayable__ctor_m380B4761BE82E4684F82A18933DBBC79E3D5F607((&L_6), L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		goto IL_0014;
	}

IL_0014:
	{
		AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E  L_7 = V_1;
		return L_7;
	}
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationOffsetPlayable::CreateHandle(UnityEngine.Playables.PlayableGraph,UnityEngine.Vector3,UnityEngine.Quaternion,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationOffsetPlayable_CreateHandle_mC5C47FEB5F1B34AB6237DAB01660267351AF12C9 (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  ___graph0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation2, int32_t ___inputCount3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationOffsetPlayable_CreateHandle_mC5C47FEB5F1B34AB6237DAB01660267351AF12C9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = PlayableHandle_get_Null_m09DE585EF795EFA2811950173C80F4FA24CBAAD1(/*hidden argument*/NULL);
		V_0 = L_0;
		PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  L_1 = ___graph0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___position1;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_3 = ___rotation2;
		IL2CPP_RUNTIME_CLASS_INIT(AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E_il2cpp_TypeInfo_var);
		bool L_4 = AnimationOffsetPlayable_CreateHandleInternal_mF0B7934FD80F93B01659E39F53986912D1E72440(L_1, L_2, L_3, (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&V_0), /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_6 = PlayableHandle_get_Null_m09DE585EF795EFA2811950173C80F4FA24CBAAD1(/*hidden argument*/NULL);
		V_2 = L_6;
		goto IL_002d;
	}

IL_0020:
	{
		int32_t L_7 = ___inputCount3;
		PlayableHandle_SetInputCount_m49435B8578BD74EB205D70348E63D4F92FB4FF69((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&V_0), L_7, /*hidden argument*/NULL);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_8 = V_0;
		V_2 = L_8;
		goto IL_002d;
	}

IL_002d:
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_9 = V_2;
		return L_9;
	}
}
// System.Void UnityEngine.Animations.AnimationOffsetPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationOffsetPlayable__ctor_m380B4761BE82E4684F82A18933DBBC79E3D5F607 (AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationOffsetPlayable__ctor_m380B4761BE82E4684F82A18933DBBC79E3D5F607_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0 = PlayableHandle_IsValid_mDA0A998EA6E2442C5F3B6CDFAF07EBA9A6873059((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&___handle0), /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		bool L_2 = PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E_mF434E44E279E1DBD0887921B38A5C57812B1371A((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&___handle0), /*hidden argument*/PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E_mF434E44E279E1DBD0887921B38A5C57812B1371A_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA * L_4 = (InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA *)il2cpp_codegen_object_new(InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_m3795145150387C6C362DA693613505C604AB8812(L_4, _stringLiteral04E4E32AA834F9BA9336C5388E9470F196EB0891, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, AnimationOffsetPlayable__ctor_m380B4761BE82E4684F82A18933DBBC79E3D5F607_RuntimeMethod_var);
	}

IL_0026:
	{
	}

IL_0027:
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_5 = ___handle0;
		__this->set_m_Handle_0(L_5);
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationOffsetPlayable__ctor_m380B4761BE82E4684F82A18933DBBC79E3D5F607_AdjustorThunk (RuntimeObject * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E * _thisAdjusted = reinterpret_cast<AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E *>(__this + _offset);
	AnimationOffsetPlayable__ctor_m380B4761BE82E4684F82A18933DBBC79E3D5F607(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationOffsetPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationOffsetPlayable_GetHandle_m5213878A6D7F29801F74CD3A8B866D444793665E (AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E * __this, const RuntimeMethod* method)
{
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationOffsetPlayable_GetHandle_m5213878A6D7F29801F74CD3A8B866D444793665E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E * _thisAdjusted = reinterpret_cast<AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E *>(__this + _offset);
	return AnimationOffsetPlayable_GetHandle_m5213878A6D7F29801F74CD3A8B866D444793665E(_thisAdjusted, method);
}
// UnityEngine.Playables.Playable UnityEngine.Animations.AnimationOffsetPlayable::op_Implicit(UnityEngine.Animations.AnimationOffsetPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  AnimationOffsetPlayable_op_Implicit_m128CA815B633101657EB641AC876DB37D1127ECD (AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E  ___playable0, const RuntimeMethod* method)
{
	Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = AnimationOffsetPlayable_GetHandle_m5213878A6D7F29801F74CD3A8B866D444793665E((AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E *)(&___playable0), /*hidden argument*/NULL);
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Playable__ctor_m24C6ED455A921F585698BFFEC5CCED397205543E((&L_1), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.Animations.AnimationOffsetPlayable::Equals(UnityEngine.Animations.AnimationOffsetPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationOffsetPlayable_Equals_m30B207FC6287EABF6FC1FDA47784322A3ABB98DF (AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E * __this, AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationOffsetPlayable_Equals_m30B207FC6287EABF6FC1FDA47784322A3ABB98DF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = AnimationOffsetPlayable_GetHandle_m5213878A6D7F29801F74CD3A8B866D444793665E((AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E *)(&___other0), /*hidden argument*/NULL);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_1 = L_0;
		RuntimeObject * L_2 = Box(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var, &L_1);
		RuntimeObject * L_3 = Box(AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E_il2cpp_TypeInfo_var, __this);
		NullCheck(L_3);
		bool L_4 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_3, L_2);
		*__this = *(AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E *)UnBox(L_3);
		V_0 = L_4;
		goto IL_001c;
	}

IL_001c:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool AnimationOffsetPlayable_Equals_m30B207FC6287EABF6FC1FDA47784322A3ABB98DF_AdjustorThunk (RuntimeObject * __this, AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E * _thisAdjusted = reinterpret_cast<AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E *>(__this + _offset);
	return AnimationOffsetPlayable_Equals_m30B207FC6287EABF6FC1FDA47784322A3ABB98DF(_thisAdjusted, ___other0, method);
}
// System.Boolean UnityEngine.Animations.AnimationOffsetPlayable::CreateHandleInternal(UnityEngine.Playables.PlayableGraph,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationOffsetPlayable_CreateHandleInternal_mF0B7934FD80F93B01659E39F53986912D1E72440 (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  ___graph0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation2, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * ___handle3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationOffsetPlayable_CreateHandleInternal_mF0B7934FD80F93B01659E39F53986912D1E72440_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * L_0 = ___handle3;
		IL2CPP_RUNTIME_CLASS_INIT(AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E_il2cpp_TypeInfo_var);
		bool L_1 = AnimationOffsetPlayable_CreateHandleInternal_Injected_m57B156AF03AD244E69736E7FA05B09DF7993FB0A((PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA *)(&___graph0), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&___position1), (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&___rotation2), (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityEngine.Animations.AnimationOffsetPlayable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationOffsetPlayable__cctor_m174AD41778526FA15E41C6A11303A4F190A4CEA6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationOffsetPlayable__cctor_m174AD41778526FA15E41C6A11303A4F190A4CEA6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = PlayableHandle_get_Null_m09DE585EF795EFA2811950173C80F4FA24CBAAD1(/*hidden argument*/NULL);
		AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E  L_1;
		memset((&L_1), 0, sizeof(L_1));
		AnimationOffsetPlayable__ctor_m380B4761BE82E4684F82A18933DBBC79E3D5F607((&L_1), L_0, /*hidden argument*/NULL);
		((AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E_StaticFields*)il2cpp_codegen_static_fields_for(AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E_il2cpp_TypeInfo_var))->set_m_NullPlayable_1(L_1);
		return;
	}
}
// System.Boolean UnityEngine.Animations.AnimationOffsetPlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationOffsetPlayable_CreateHandleInternal_Injected_m57B156AF03AD244E69736E7FA05B09DF7993FB0A (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA * ___graph0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___position1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___rotation2, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * ___handle3, const RuntimeMethod* method)
{
	typedef bool (*AnimationOffsetPlayable_CreateHandleInternal_Injected_m57B156AF03AD244E69736E7FA05B09DF7993FB0A_ftn) (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *);
	static AnimationOffsetPlayable_CreateHandleInternal_Injected_m57B156AF03AD244E69736E7FA05B09DF7993FB0A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationOffsetPlayable_CreateHandleInternal_Injected_m57B156AF03AD244E69736E7FA05B09DF7993FB0A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationOffsetPlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Playables.PlayableHandle&)");
	bool retVal = _il2cpp_icall_func(___graph0, ___position1, ___rotation2, ___handle3);
	return retVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Playables.PlayableBinding UnityEngine.Animations.AnimationPlayableBinding::Create(System.String,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8  AnimationPlayableBinding_Create_m574485453EEF75BAA078668EA0BE3579BE2D9BAF (String_t* ___name0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___key1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationPlayableBinding_Create_m574485453EEF75BAA078668EA0BE3579BE2D9BAF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0 = ___name0;
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_1 = ___key1;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_2 = { reinterpret_cast<intptr_t> (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_2, /*hidden argument*/NULL);
		CreateOutputMethod_tA7B649F49822FC5DD0B0D9F17247C73CAECB1CA3 * L_4 = (CreateOutputMethod_tA7B649F49822FC5DD0B0D9F17247C73CAECB1CA3 *)il2cpp_codegen_object_new(CreateOutputMethod_tA7B649F49822FC5DD0B0D9F17247C73CAECB1CA3_il2cpp_TypeInfo_var);
		CreateOutputMethod__ctor_m252187F08E76732D791C8458AF5629F29BDDB8F2(L_4, NULL, (intptr_t)((intptr_t)AnimationPlayableBinding_CreateAnimationOutput_m1E51EF60F417712EC940A1192E616FD2C2831DA7_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8_il2cpp_TypeInfo_var);
		PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8  L_5 = PlayableBinding_CreateInternal_mA2A8810B76E843A40B9BC55D72D960AE155B9801(L_0, L_1, L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		goto IL_0021;
	}

IL_0021:
	{
		PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8  L_6 = V_0;
		return L_6;
	}
}
// UnityEngine.Playables.PlayableOutput UnityEngine.Animations.AnimationPlayableBinding::CreateAnimationOutput(UnityEngine.Playables.PlayableGraph,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345  AnimationPlayableBinding_CreateAnimationOutput_m1E51EF60F417712EC940A1192E616FD2C2831DA7 (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  ___graph0, String_t* ___name1, const RuntimeMethod* method)
{
	PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  L_0 = ___graph0;
		String_t* L_1 = ___name1;
		AnimationPlayableOutput_tA10178429D6528BDB4516F6788CE680E349553E6  L_2 = AnimationPlayableOutput_Create_m9A1672F8534123A914FB2938BD9706E224A99F56(L_0, L_1, (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *)NULL, /*hidden argument*/NULL);
		PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345  L_3 = AnimationPlayableOutput_op_Implicit_m688EE62F433F969F5EC4575437F45A2D2DF00192(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345  L_4 = V_0;
		return L_4;
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
// System.Void UnityEngine.Animations.AnimationPlayableExtensions::SetAnimatedPropertiesInternal(UnityEngine.Playables.PlayableHandle&,UnityEngine.AnimationClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableExtensions_SetAnimatedPropertiesInternal_mD23316C192A44E0518CA2FE3C8C9F88E9D4DF0A9 (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * ___playable0, AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * ___animatedProperties1, const RuntimeMethod* method)
{
	typedef void (*AnimationPlayableExtensions_SetAnimatedPropertiesInternal_mD23316C192A44E0518CA2FE3C8C9F88E9D4DF0A9_ftn) (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *, AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE *);
	static AnimationPlayableExtensions_SetAnimatedPropertiesInternal_mD23316C192A44E0518CA2FE3C8C9F88E9D4DF0A9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationPlayableExtensions_SetAnimatedPropertiesInternal_mD23316C192A44E0518CA2FE3C8C9F88E9D4DF0A9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationPlayableExtensions::SetAnimatedPropertiesInternal(UnityEngine.Playables.PlayableHandle&,UnityEngine.AnimationClip)");
	_il2cpp_icall_func(___playable0, ___animatedProperties1);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.Animations.AnimationPlayableGraphExtensions::InternalCreateAnimationOutput(UnityEngine.Playables.PlayableGraph&,System.String,UnityEngine.Playables.PlayableOutputHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationPlayableGraphExtensions_InternalCreateAnimationOutput_mE01B12008978E7E105F42D05CB98228CA7063573 (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA * ___graph0, String_t* ___name1, PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 * ___handle2, const RuntimeMethod* method)
{
	typedef bool (*AnimationPlayableGraphExtensions_InternalCreateAnimationOutput_mE01B12008978E7E105F42D05CB98228CA7063573_ftn) (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA *, String_t*, PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 *);
	static AnimationPlayableGraphExtensions_InternalCreateAnimationOutput_mE01B12008978E7E105F42D05CB98228CA7063573_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationPlayableGraphExtensions_InternalCreateAnimationOutput_mE01B12008978E7E105F42D05CB98228CA7063573_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationPlayableGraphExtensions::InternalCreateAnimationOutput(UnityEngine.Playables.PlayableGraph&,System.String,UnityEngine.Playables.PlayableOutputHandle&)");
	bool retVal = _il2cpp_icall_func(___graph0, ___name1, ___handle2);
	return retVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Animations.AnimationPlayableOutput UnityEngine.Animations.AnimationPlayableOutput::Create(UnityEngine.Playables.PlayableGraph,System.String,UnityEngine.Animator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationPlayableOutput_tA10178429D6528BDB4516F6788CE680E349553E6  AnimationPlayableOutput_Create_m9A1672F8534123A914FB2938BD9706E224A99F56 (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  ___graph0, String_t* ___name1, Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___target2, const RuntimeMethod* method)
{
	PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AnimationPlayableOutput_tA10178429D6528BDB4516F6788CE680E349553E6  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	AnimationPlayableOutput_tA10178429D6528BDB4516F6788CE680E349553E6  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		String_t* L_0 = ___name1;
		bool L_1 = AnimationPlayableGraphExtensions_InternalCreateAnimationOutput_mE01B12008978E7E105F42D05CB98228CA7063573((PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA *)(&___graph0), L_0, (PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 *)(&V_0), /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		AnimationPlayableOutput_tA10178429D6528BDB4516F6788CE680E349553E6  L_3 = AnimationPlayableOutput_get_Null_mAFAC34CF34A884B7957333BDD9D438428910D751(/*hidden argument*/NULL);
		V_3 = L_3;
		goto IL_002f;
	}

IL_001a:
	{
		PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  L_4 = V_0;
		AnimationPlayableOutput__ctor_mB620607DC74C6B62A8320EE364BB6BEDC2AD3F1A((AnimationPlayableOutput_tA10178429D6528BDB4516F6788CE680E349553E6 *)(&V_1), L_4, /*hidden argument*/NULL);
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_5 = ___target2;
		AnimationPlayableOutput_SetTarget_m55330CFBD33CB09036BC5EF7639F3BB4C454D37E((AnimationPlayableOutput_tA10178429D6528BDB4516F6788CE680E349553E6 *)(&V_1), L_5, /*hidden argument*/NULL);
		AnimationPlayableOutput_tA10178429D6528BDB4516F6788CE680E349553E6  L_6 = V_1;
		V_3 = L_6;
		goto IL_002f;
	}

IL_002f:
	{
		AnimationPlayableOutput_tA10178429D6528BDB4516F6788CE680E349553E6  L_7 = V_3;
		return L_7;
	}
}
// System.Void UnityEngine.Animations.AnimationPlayableOutput::.ctor(UnityEngine.Playables.PlayableOutputHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableOutput__ctor_mB620607DC74C6B62A8320EE364BB6BEDC2AD3F1A (AnimationPlayableOutput_tA10178429D6528BDB4516F6788CE680E349553E6 * __this, PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  ___handle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationPlayableOutput__ctor_mB620607DC74C6B62A8320EE364BB6BEDC2AD3F1A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0 = PlayableOutputHandle_IsValid_mF2C0EDE99960D68E4FD017EB063680D82A9CBD6F((PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 *)(&___handle0), /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		bool L_2 = PlayableOutputHandle_IsPlayableOutputOfType_TisAnimationPlayableOutput_tA10178429D6528BDB4516F6788CE680E349553E6_m8A303EBBB990B19C38B5E27B3FF37F3FF41C8FCD((PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 *)(&___handle0), /*hidden argument*/PlayableOutputHandle_IsPlayableOutputOfType_TisAnimationPlayableOutput_tA10178429D6528BDB4516F6788CE680E349553E6_m8A303EBBB990B19C38B5E27B3FF37F3FF41C8FCD_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA * L_4 = (InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA *)il2cpp_codegen_object_new(InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_m3795145150387C6C362DA693613505C604AB8812(L_4, _stringLiteral78BE72B5118B8A09F539AD4D79E3196A5DF77143, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, AnimationPlayableOutput__ctor_mB620607DC74C6B62A8320EE364BB6BEDC2AD3F1A_RuntimeMethod_var);
	}

IL_0026:
	{
	}

IL_0027:
	{
		PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  L_5 = ___handle0;
		__this->set_m_Handle_0(L_5);
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationPlayableOutput__ctor_mB620607DC74C6B62A8320EE364BB6BEDC2AD3F1A_AdjustorThunk (RuntimeObject * __this, PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  ___handle0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationPlayableOutput_tA10178429D6528BDB4516F6788CE680E349553E6 * _thisAdjusted = reinterpret_cast<AnimationPlayableOutput_tA10178429D6528BDB4516F6788CE680E349553E6 *>(__this + _offset);
	AnimationPlayableOutput__ctor_mB620607DC74C6B62A8320EE364BB6BEDC2AD3F1A(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Animations.AnimationPlayableOutput UnityEngine.Animations.AnimationPlayableOutput::get_Null()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationPlayableOutput_tA10178429D6528BDB4516F6788CE680E349553E6  AnimationPlayableOutput_get_Null_mAFAC34CF34A884B7957333BDD9D438428910D751 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationPlayableOutput_get_Null_mAFAC34CF34A884B7957333BDD9D438428910D751_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AnimationPlayableOutput_tA10178429D6528BDB4516F6788CE680E349553E6  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922_il2cpp_TypeInfo_var);
		PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  L_0 = PlayableOutputHandle_get_Null_mA462EF24F3B0CDD5B3C3F0C57073D49CED316FA4(/*hidden argument*/NULL);
		AnimationPlayableOutput_tA10178429D6528BDB4516F6788CE680E349553E6  L_1;
		memset((&L_1), 0, sizeof(L_1));
		AnimationPlayableOutput__ctor_mB620607DC74C6B62A8320EE364BB6BEDC2AD3F1A((&L_1), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		AnimationPlayableOutput_tA10178429D6528BDB4516F6788CE680E349553E6  L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Animations.AnimationPlayableOutput::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  AnimationPlayableOutput_GetHandle_m7E849F774F2B3E233A115FFB63DF473AF88F95E0 (AnimationPlayableOutput_tA10178429D6528BDB4516F6788CE680E349553E6 * __this, const RuntimeMethod* method)
{
	PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  AnimationPlayableOutput_GetHandle_m7E849F774F2B3E233A115FFB63DF473AF88F95E0_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationPlayableOutput_tA10178429D6528BDB4516F6788CE680E349553E6 * _thisAdjusted = reinterpret_cast<AnimationPlayableOutput_tA10178429D6528BDB4516F6788CE680E349553E6 *>(__this + _offset);
	return AnimationPlayableOutput_GetHandle_m7E849F774F2B3E233A115FFB63DF473AF88F95E0(_thisAdjusted, method);
}
// UnityEngine.Playables.PlayableOutput UnityEngine.Animations.AnimationPlayableOutput::op_Implicit(UnityEngine.Animations.AnimationPlayableOutput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345  AnimationPlayableOutput_op_Implicit_m688EE62F433F969F5EC4575437F45A2D2DF00192 (AnimationPlayableOutput_tA10178429D6528BDB4516F6788CE680E349553E6  ___output0, const RuntimeMethod* method)
{
	PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  L_0 = AnimationPlayableOutput_GetHandle_m7E849F774F2B3E233A115FFB63DF473AF88F95E0((AnimationPlayableOutput_tA10178429D6528BDB4516F6788CE680E349553E6 *)(&___output0), /*hidden argument*/NULL);
		PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345  L_1;
		memset((&L_1), 0, sizeof(L_1));
		PlayableOutput__ctor_m881EC9E4BAD358971373EE1D6BF9C37DDB7A4943((&L_1), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345  L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Animations.AnimationPlayableOutput UnityEngine.Animations.AnimationPlayableOutput::op_Explicit(UnityEngine.Playables.PlayableOutput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationPlayableOutput_tA10178429D6528BDB4516F6788CE680E349553E6  AnimationPlayableOutput_op_Explicit_mC184B418326641F6A2646A788246D45ABBFFBCE4 (PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345  ___output0, const RuntimeMethod* method)
{
	AnimationPlayableOutput_tA10178429D6528BDB4516F6788CE680E349553E6  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  L_0 = PlayableOutput_GetHandle_m079ADC0139E95AA914CD7502F27EC79BB1A876F3((PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345 *)(&___output0), /*hidden argument*/NULL);
		AnimationPlayableOutput_tA10178429D6528BDB4516F6788CE680E349553E6  L_1;
		memset((&L_1), 0, sizeof(L_1));
		AnimationPlayableOutput__ctor_mB620607DC74C6B62A8320EE364BB6BEDC2AD3F1A((&L_1), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		AnimationPlayableOutput_tA10178429D6528BDB4516F6788CE680E349553E6  L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Animations.AnimationPlayableOutput::SetTarget(UnityEngine.Animator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableOutput_SetTarget_m55330CFBD33CB09036BC5EF7639F3BB4C454D37E (AnimationPlayableOutput_tA10178429D6528BDB4516F6788CE680E349553E6 * __this, Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___value0, const RuntimeMethod* method)
{
	{
		PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 * L_0 = __this->get_address_of_m_Handle_0();
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_1 = ___value0;
		AnimationPlayableOutput_InternalSetTarget_mC678FFE8AE5CAEE4EB98011174391C033C3752AB((PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationPlayableOutput_SetTarget_m55330CFBD33CB09036BC5EF7639F3BB4C454D37E_AdjustorThunk (RuntimeObject * __this, Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationPlayableOutput_tA10178429D6528BDB4516F6788CE680E349553E6 * _thisAdjusted = reinterpret_cast<AnimationPlayableOutput_tA10178429D6528BDB4516F6788CE680E349553E6 *>(__this + _offset);
	AnimationPlayableOutput_SetTarget_m55330CFBD33CB09036BC5EF7639F3BB4C454D37E(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.Animations.AnimationPlayableOutput::InternalSetTarget(UnityEngine.Playables.PlayableOutputHandle&,UnityEngine.Animator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableOutput_InternalSetTarget_mC678FFE8AE5CAEE4EB98011174391C033C3752AB (PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 * ___handle0, Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___target1, const RuntimeMethod* method)
{
	typedef void (*AnimationPlayableOutput_InternalSetTarget_mC678FFE8AE5CAEE4EB98011174391C033C3752AB_ftn) (PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 *, Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *);
	static AnimationPlayableOutput_InternalSetTarget_mC678FFE8AE5CAEE4EB98011174391C033C3752AB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationPlayableOutput_InternalSetTarget_mC678FFE8AE5CAEE4EB98011174391C033C3752AB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationPlayableOutput::InternalSetTarget(UnityEngine.Playables.PlayableOutputHandle&,UnityEngine.Animator)");
	_il2cpp_icall_func(___handle0, ___target1);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Animations.AnimationPosePlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPosePlayable__ctor_mF02468DCD2C8C0226C89C4DF90454DD9D230595D (AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07 * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationPosePlayable__ctor_mF02468DCD2C8C0226C89C4DF90454DD9D230595D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0 = PlayableHandle_IsValid_mDA0A998EA6E2442C5F3B6CDFAF07EBA9A6873059((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&___handle0), /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		bool L_2 = PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07_m35A103AAF8E80E7C007214546C71B4E90901C2A2((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&___handle0), /*hidden argument*/PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07_m35A103AAF8E80E7C007214546C71B4E90901C2A2_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA * L_4 = (InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA *)il2cpp_codegen_object_new(InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_m3795145150387C6C362DA693613505C604AB8812(L_4, _stringLiteralFCF5307272E4A4426DDA9E4E6930E2B834B95B2C, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, AnimationPosePlayable__ctor_mF02468DCD2C8C0226C89C4DF90454DD9D230595D_RuntimeMethod_var);
	}

IL_0026:
	{
	}

IL_0027:
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_5 = ___handle0;
		__this->set_m_Handle_0(L_5);
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationPosePlayable__ctor_mF02468DCD2C8C0226C89C4DF90454DD9D230595D_AdjustorThunk (RuntimeObject * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07 * _thisAdjusted = reinterpret_cast<AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07 *>(__this + _offset);
	AnimationPosePlayable__ctor_mF02468DCD2C8C0226C89C4DF90454DD9D230595D(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationPosePlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationPosePlayable_GetHandle_m9D856E83755A447ABCD6C0D8FE011AFF659A016E (AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07 * __this, const RuntimeMethod* method)
{
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationPosePlayable_GetHandle_m9D856E83755A447ABCD6C0D8FE011AFF659A016E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07 * _thisAdjusted = reinterpret_cast<AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07 *>(__this + _offset);
	return AnimationPosePlayable_GetHandle_m9D856E83755A447ABCD6C0D8FE011AFF659A016E(_thisAdjusted, method);
}
// System.Boolean UnityEngine.Animations.AnimationPosePlayable::Equals(UnityEngine.Animations.AnimationPosePlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationPosePlayable_Equals_m4417430115DCF9B39D3E4B64424120CE7E555961 (AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07 * __this, AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationPosePlayable_Equals_m4417430115DCF9B39D3E4B64424120CE7E555961_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = AnimationPosePlayable_GetHandle_m9D856E83755A447ABCD6C0D8FE011AFF659A016E((AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07 *)(&___other0), /*hidden argument*/NULL);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_1 = L_0;
		RuntimeObject * L_2 = Box(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var, &L_1);
		RuntimeObject * L_3 = Box(AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07_il2cpp_TypeInfo_var, __this);
		NullCheck(L_3);
		bool L_4 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_3, L_2);
		*__this = *(AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07 *)UnBox(L_3);
		V_0 = L_4;
		goto IL_001c;
	}

IL_001c:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool AnimationPosePlayable_Equals_m4417430115DCF9B39D3E4B64424120CE7E555961_AdjustorThunk (RuntimeObject * __this, AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07 * _thisAdjusted = reinterpret_cast<AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07 *>(__this + _offset);
	return AnimationPosePlayable_Equals_m4417430115DCF9B39D3E4B64424120CE7E555961(_thisAdjusted, ___other0, method);
}
// System.Void UnityEngine.Animations.AnimationPosePlayable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPosePlayable__cctor_mDE42A26BC2624427AA8086C4AB69FB531949153F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationPosePlayable__cctor_mDE42A26BC2624427AA8086C4AB69FB531949153F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = PlayableHandle_get_Null_m09DE585EF795EFA2811950173C80F4FA24CBAAD1(/*hidden argument*/NULL);
		AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07  L_1;
		memset((&L_1), 0, sizeof(L_1));
		AnimationPosePlayable__ctor_mF02468DCD2C8C0226C89C4DF90454DD9D230595D((&L_1), L_0, /*hidden argument*/NULL);
		((AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07_StaticFields*)il2cpp_codegen_static_fields_for(AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07_il2cpp_TypeInfo_var))->set_m_NullPlayable_1(L_1);
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
// UnityEngine.Animations.AnimationRemoveScalePlayable UnityEngine.Animations.AnimationRemoveScalePlayable::Create(UnityEngine.Playables.PlayableGraph,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B  AnimationRemoveScalePlayable_Create_m7FDEE39CF2D926699B5FF76D8F22C57577CCF595 (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  ___graph0, int32_t ___inputCount1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationRemoveScalePlayable_Create_m7FDEE39CF2D926699B5FF76D8F22C57577CCF595_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  L_0 = ___graph0;
		int32_t L_1 = ___inputCount1;
		IL2CPP_RUNTIME_CLASS_INIT(AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B_il2cpp_TypeInfo_var);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_2 = AnimationRemoveScalePlayable_CreateHandle_mB529C77EE1CC0DB85D73301B2484EAAAEE65EF6C(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_3 = V_0;
		AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B  L_4;
		memset((&L_4), 0, sizeof(L_4));
		AnimationRemoveScalePlayable__ctor_mB06216973E6B635E7F4A3C8E372E5F7E89D327E1((&L_4), L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		goto IL_0012;
	}

IL_0012:
	{
		AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B  L_5 = V_1;
		return L_5;
	}
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationRemoveScalePlayable::CreateHandle(UnityEngine.Playables.PlayableGraph,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationRemoveScalePlayable_CreateHandle_mB529C77EE1CC0DB85D73301B2484EAAAEE65EF6C (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  ___graph0, int32_t ___inputCount1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationRemoveScalePlayable_CreateHandle_mB529C77EE1CC0DB85D73301B2484EAAAEE65EF6C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = PlayableHandle_get_Null_m09DE585EF795EFA2811950173C80F4FA24CBAAD1(/*hidden argument*/NULL);
		V_0 = L_0;
		PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  L_1 = ___graph0;
		IL2CPP_RUNTIME_CLASS_INIT(AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B_il2cpp_TypeInfo_var);
		bool L_2 = AnimationRemoveScalePlayable_CreateHandleInternal_m90F196F5F014459D15CF0F5C5C0280FF2BDDE24A(L_1, (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&V_0), /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_4 = PlayableHandle_get_Null_m09DE585EF795EFA2811950173C80F4FA24CBAAD1(/*hidden argument*/NULL);
		V_2 = L_4;
		goto IL_002b;
	}

IL_001e:
	{
		int32_t L_5 = ___inputCount1;
		PlayableHandle_SetInputCount_m49435B8578BD74EB205D70348E63D4F92FB4FF69((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&V_0), L_5, /*hidden argument*/NULL);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_6 = V_0;
		V_2 = L_6;
		goto IL_002b;
	}

IL_002b:
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_7 = V_2;
		return L_7;
	}
}
// System.Void UnityEngine.Animations.AnimationRemoveScalePlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationRemoveScalePlayable__ctor_mB06216973E6B635E7F4A3C8E372E5F7E89D327E1 (AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationRemoveScalePlayable__ctor_mB06216973E6B635E7F4A3C8E372E5F7E89D327E1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0 = PlayableHandle_IsValid_mDA0A998EA6E2442C5F3B6CDFAF07EBA9A6873059((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&___handle0), /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		bool L_2 = PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B_m1E16540EE6283270E3DE85D46C3BE1F8B85E73C2((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&___handle0), /*hidden argument*/PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B_m1E16540EE6283270E3DE85D46C3BE1F8B85E73C2_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA * L_4 = (InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA *)il2cpp_codegen_object_new(InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_m3795145150387C6C362DA693613505C604AB8812(L_4, _stringLiteralB9DF0CBB713EC6E9DFD70C9BFB0B820148433428, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, AnimationRemoveScalePlayable__ctor_mB06216973E6B635E7F4A3C8E372E5F7E89D327E1_RuntimeMethod_var);
	}

IL_0026:
	{
	}

IL_0027:
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_5 = ___handle0;
		__this->set_m_Handle_0(L_5);
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationRemoveScalePlayable__ctor_mB06216973E6B635E7F4A3C8E372E5F7E89D327E1_AdjustorThunk (RuntimeObject * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B * _thisAdjusted = reinterpret_cast<AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B *>(__this + _offset);
	AnimationRemoveScalePlayable__ctor_mB06216973E6B635E7F4A3C8E372E5F7E89D327E1(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationRemoveScalePlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationRemoveScalePlayable_GetHandle_mA5063F10E01C8546F88E9ABE07B71373BF290EED (AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B * __this, const RuntimeMethod* method)
{
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationRemoveScalePlayable_GetHandle_mA5063F10E01C8546F88E9ABE07B71373BF290EED_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B * _thisAdjusted = reinterpret_cast<AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B *>(__this + _offset);
	return AnimationRemoveScalePlayable_GetHandle_mA5063F10E01C8546F88E9ABE07B71373BF290EED(_thisAdjusted, method);
}
// UnityEngine.Playables.Playable UnityEngine.Animations.AnimationRemoveScalePlayable::op_Implicit(UnityEngine.Animations.AnimationRemoveScalePlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  AnimationRemoveScalePlayable_op_Implicit_mAAA1F060B74286C3CB58CA8494486C7E5E65D15E (AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B  ___playable0, const RuntimeMethod* method)
{
	Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = AnimationRemoveScalePlayable_GetHandle_mA5063F10E01C8546F88E9ABE07B71373BF290EED((AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B *)(&___playable0), /*hidden argument*/NULL);
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Playable__ctor_m24C6ED455A921F585698BFFEC5CCED397205543E((&L_1), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.Animations.AnimationRemoveScalePlayable::Equals(UnityEngine.Animations.AnimationRemoveScalePlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationRemoveScalePlayable_Equals_m58B139243E3B27CE86CA4CC470895BF719CD9BAD (AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B * __this, AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationRemoveScalePlayable_Equals_m58B139243E3B27CE86CA4CC470895BF719CD9BAD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = AnimationRemoveScalePlayable_GetHandle_mA5063F10E01C8546F88E9ABE07B71373BF290EED((AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B *)(&___other0), /*hidden argument*/NULL);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_1 = L_0;
		RuntimeObject * L_2 = Box(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var, &L_1);
		RuntimeObject * L_3 = Box(AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B_il2cpp_TypeInfo_var, __this);
		NullCheck(L_3);
		bool L_4 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_3, L_2);
		*__this = *(AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B *)UnBox(L_3);
		V_0 = L_4;
		goto IL_001c;
	}

IL_001c:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool AnimationRemoveScalePlayable_Equals_m58B139243E3B27CE86CA4CC470895BF719CD9BAD_AdjustorThunk (RuntimeObject * __this, AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B * _thisAdjusted = reinterpret_cast<AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B *>(__this + _offset);
	return AnimationRemoveScalePlayable_Equals_m58B139243E3B27CE86CA4CC470895BF719CD9BAD(_thisAdjusted, ___other0, method);
}
// System.Boolean UnityEngine.Animations.AnimationRemoveScalePlayable::CreateHandleInternal(UnityEngine.Playables.PlayableGraph,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationRemoveScalePlayable_CreateHandleInternal_m90F196F5F014459D15CF0F5C5C0280FF2BDDE24A (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  ___graph0, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * ___handle1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationRemoveScalePlayable_CreateHandleInternal_m90F196F5F014459D15CF0F5C5C0280FF2BDDE24A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * L_0 = ___handle1;
		IL2CPP_RUNTIME_CLASS_INIT(AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B_il2cpp_TypeInfo_var);
		bool L_1 = AnimationRemoveScalePlayable_CreateHandleInternal_Injected_m0BA4E57820067D6D841CF1FCD8C03D9C8F6B693B((PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA *)(&___graph0), (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityEngine.Animations.AnimationRemoveScalePlayable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationRemoveScalePlayable__cctor_m7BA13559FDA2BF8E061839B333085C402DED6829 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationRemoveScalePlayable__cctor_m7BA13559FDA2BF8E061839B333085C402DED6829_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = PlayableHandle_get_Null_m09DE585EF795EFA2811950173C80F4FA24CBAAD1(/*hidden argument*/NULL);
		AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B  L_1;
		memset((&L_1), 0, sizeof(L_1));
		AnimationRemoveScalePlayable__ctor_mB06216973E6B635E7F4A3C8E372E5F7E89D327E1((&L_1), L_0, /*hidden argument*/NULL);
		((AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B_StaticFields*)il2cpp_codegen_static_fields_for(AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B_il2cpp_TypeInfo_var))->set_m_NullPlayable_1(L_1);
		return;
	}
}
// System.Boolean UnityEngine.Animations.AnimationRemoveScalePlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationRemoveScalePlayable_CreateHandleInternal_Injected_m0BA4E57820067D6D841CF1FCD8C03D9C8F6B693B (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA * ___graph0, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * ___handle1, const RuntimeMethod* method)
{
	typedef bool (*AnimationRemoveScalePlayable_CreateHandleInternal_Injected_m0BA4E57820067D6D841CF1FCD8C03D9C8F6B693B_ftn) (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA *, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *);
	static AnimationRemoveScalePlayable_CreateHandleInternal_Injected_m0BA4E57820067D6D841CF1FCD8C03D9C8F6B693B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationRemoveScalePlayable_CreateHandleInternal_Injected_m0BA4E57820067D6D841CF1FCD8C03D9C8F6B693B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationRemoveScalePlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.Playables.PlayableHandle&)");
	bool retVal = _il2cpp_icall_func(___graph0, ___handle1);
	return retVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Animations.AnimationScriptPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationScriptPlayable__ctor_mDA5EA55852F0A1079954B2DCB90398C4D7FFC412 (AnimationScriptPlayable_t1EDF8E51A9ED180BB012656916323FA4F68CA27E * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationScriptPlayable__ctor_mDA5EA55852F0A1079954B2DCB90398C4D7FFC412_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0 = PlayableHandle_IsValid_mDA0A998EA6E2442C5F3B6CDFAF07EBA9A6873059((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&___handle0), /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		bool L_2 = PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_t1EDF8E51A9ED180BB012656916323FA4F68CA27E_m1767ADED196AAA8B4D6FBB9313003E33A967E799((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&___handle0), /*hidden argument*/PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_t1EDF8E51A9ED180BB012656916323FA4F68CA27E_m1767ADED196AAA8B4D6FBB9313003E33A967E799_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA * L_4 = (InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA *)il2cpp_codegen_object_new(InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_m3795145150387C6C362DA693613505C604AB8812(L_4, _stringLiteral4518459D262696CF9B5DAB1E0A1BC3AC2F9BD9DF, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, AnimationScriptPlayable__ctor_mDA5EA55852F0A1079954B2DCB90398C4D7FFC412_RuntimeMethod_var);
	}

IL_0026:
	{
	}

IL_0027:
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_5 = ___handle0;
		__this->set_m_Handle_0(L_5);
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationScriptPlayable__ctor_mDA5EA55852F0A1079954B2DCB90398C4D7FFC412_AdjustorThunk (RuntimeObject * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationScriptPlayable_t1EDF8E51A9ED180BB012656916323FA4F68CA27E * _thisAdjusted = reinterpret_cast<AnimationScriptPlayable_t1EDF8E51A9ED180BB012656916323FA4F68CA27E *>(__this + _offset);
	AnimationScriptPlayable__ctor_mDA5EA55852F0A1079954B2DCB90398C4D7FFC412(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationScriptPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationScriptPlayable_GetHandle_m661730E4C17F10A8D3C46492A9AD1D61EF0F4315 (AnimationScriptPlayable_t1EDF8E51A9ED180BB012656916323FA4F68CA27E * __this, const RuntimeMethod* method)
{
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationScriptPlayable_GetHandle_m661730E4C17F10A8D3C46492A9AD1D61EF0F4315_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationScriptPlayable_t1EDF8E51A9ED180BB012656916323FA4F68CA27E * _thisAdjusted = reinterpret_cast<AnimationScriptPlayable_t1EDF8E51A9ED180BB012656916323FA4F68CA27E *>(__this + _offset);
	return AnimationScriptPlayable_GetHandle_m661730E4C17F10A8D3C46492A9AD1D61EF0F4315(_thisAdjusted, method);
}
// System.Boolean UnityEngine.Animations.AnimationScriptPlayable::Equals(UnityEngine.Animations.AnimationScriptPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationScriptPlayable_Equals_m4995D1AD353F43FE3FA854A8384601F58156E69E (AnimationScriptPlayable_t1EDF8E51A9ED180BB012656916323FA4F68CA27E * __this, AnimationScriptPlayable_t1EDF8E51A9ED180BB012656916323FA4F68CA27E  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationScriptPlayable_Equals_m4995D1AD353F43FE3FA854A8384601F58156E69E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = AnimationScriptPlayable_GetHandle_m661730E4C17F10A8D3C46492A9AD1D61EF0F4315((AnimationScriptPlayable_t1EDF8E51A9ED180BB012656916323FA4F68CA27E *)__this, /*hidden argument*/NULL);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_1 = AnimationScriptPlayable_GetHandle_m661730E4C17F10A8D3C46492A9AD1D61EF0F4315((AnimationScriptPlayable_t1EDF8E51A9ED180BB012656916323FA4F68CA27E *)(&___other0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var);
		bool L_2 = PlayableHandle_op_Equality_mBA774AE123AF794A1EB55148206CDD52DAFA42DF(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool AnimationScriptPlayable_Equals_m4995D1AD353F43FE3FA854A8384601F58156E69E_AdjustorThunk (RuntimeObject * __this, AnimationScriptPlayable_t1EDF8E51A9ED180BB012656916323FA4F68CA27E  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationScriptPlayable_t1EDF8E51A9ED180BB012656916323FA4F68CA27E * _thisAdjusted = reinterpret_cast<AnimationScriptPlayable_t1EDF8E51A9ED180BB012656916323FA4F68CA27E *>(__this + _offset);
	return AnimationScriptPlayable_Equals_m4995D1AD353F43FE3FA854A8384601F58156E69E(_thisAdjusted, ___other0, method);
}
// System.Void UnityEngine.Animations.AnimationScriptPlayable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationScriptPlayable__cctor_m3FA9E1E2E1EADACBC718598BEFECB25F867E454E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationScriptPlayable__cctor_m3FA9E1E2E1EADACBC718598BEFECB25F867E454E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = PlayableHandle_get_Null_m09DE585EF795EFA2811950173C80F4FA24CBAAD1(/*hidden argument*/NULL);
		AnimationScriptPlayable_t1EDF8E51A9ED180BB012656916323FA4F68CA27E  L_1;
		memset((&L_1), 0, sizeof(L_1));
		AnimationScriptPlayable__ctor_mDA5EA55852F0A1079954B2DCB90398C4D7FFC412((&L_1), L_0, /*hidden argument*/NULL);
		((AnimationScriptPlayable_t1EDF8E51A9ED180BB012656916323FA4F68CA27E_StaticFields*)il2cpp_codegen_static_fields_for(AnimationScriptPlayable_t1EDF8E51A9ED180BB012656916323FA4F68CA27E_il2cpp_TypeInfo_var))->set_m_NullPlayable_1(L_1);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Animations.AnimatorControllerPlayable UnityEngine.Animations.AnimatorControllerPlayable::Create(UnityEngine.Playables.PlayableGraph,UnityEngine.RuntimeAnimatorController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B  AnimatorControllerPlayable_Create_mD22E2135B1D33EB45D615F7342F6E949FDBE9ED0 (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  ___graph0, RuntimeAnimatorController_tDA6672C8194522C2F60F8F2F241657E57C3520BD * ___controller1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimatorControllerPlayable_Create_mD22E2135B1D33EB45D615F7342F6E949FDBE9ED0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  L_0 = ___graph0;
		RuntimeAnimatorController_tDA6672C8194522C2F60F8F2F241657E57C3520BD * L_1 = ___controller1;
		IL2CPP_RUNTIME_CLASS_INIT(AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B_il2cpp_TypeInfo_var);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_2 = AnimatorControllerPlayable_CreateHandle_mC5C9D453305CB3ECE1CAAAAA0FCF01F5C3DCD8B9(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_3 = V_0;
		AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B  L_4;
		memset((&L_4), 0, sizeof(L_4));
		AnimatorControllerPlayable__ctor_m739B1BFC592B6C160410141057F1B2BA1B971897((&L_4), L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		goto IL_0012;
	}

IL_0012:
	{
		AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B  L_5 = V_1;
		return L_5;
	}
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimatorControllerPlayable::CreateHandle(UnityEngine.Playables.PlayableGraph,UnityEngine.RuntimeAnimatorController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimatorControllerPlayable_CreateHandle_mC5C9D453305CB3ECE1CAAAAA0FCF01F5C3DCD8B9 (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  ___graph0, RuntimeAnimatorController_tDA6672C8194522C2F60F8F2F241657E57C3520BD * ___controller1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimatorControllerPlayable_CreateHandle_mC5C9D453305CB3ECE1CAAAAA0FCF01F5C3DCD8B9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = PlayableHandle_get_Null_m09DE585EF795EFA2811950173C80F4FA24CBAAD1(/*hidden argument*/NULL);
		V_0 = L_0;
		PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  L_1 = ___graph0;
		RuntimeAnimatorController_tDA6672C8194522C2F60F8F2F241657E57C3520BD * L_2 = ___controller1;
		IL2CPP_RUNTIME_CLASS_INIT(AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B_il2cpp_TypeInfo_var);
		bool L_3 = AnimatorControllerPlayable_CreateHandleInternal_m7AFE10D091BC80A9877809A94F3398045CA6914C(L_1, L_2, (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&V_0), /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_5 = PlayableHandle_get_Null_m09DE585EF795EFA2811950173C80F4FA24CBAAD1(/*hidden argument*/NULL);
		V_2 = L_5;
		goto IL_0023;
	}

IL_001f:
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_6 = V_0;
		V_2 = L_6;
		goto IL_0023;
	}

IL_0023:
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_7 = V_2;
		return L_7;
	}
}
// System.Void UnityEngine.Animations.AnimatorControllerPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorControllerPlayable__ctor_m739B1BFC592B6C160410141057F1B2BA1B971897 (AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimatorControllerPlayable__ctor_m739B1BFC592B6C160410141057F1B2BA1B971897_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = PlayableHandle_get_Null_m09DE585EF795EFA2811950173C80F4FA24CBAAD1(/*hidden argument*/NULL);
		__this->set_m_Handle_0(L_0);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_1 = ___handle0;
		AnimatorControllerPlayable_SetHandle_m2CAE8DABC4B19AB6BD90249D0D7FC7A9E07C3A96((AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B *)__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void AnimatorControllerPlayable__ctor_m739B1BFC592B6C160410141057F1B2BA1B971897_AdjustorThunk (RuntimeObject * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B * _thisAdjusted = reinterpret_cast<AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B *>(__this + _offset);
	AnimatorControllerPlayable__ctor_m739B1BFC592B6C160410141057F1B2BA1B971897(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimatorControllerPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimatorControllerPlayable_GetHandle_mB83731910E1534BECA36F64BA22AA68A71D08CA8 (AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B * __this, const RuntimeMethod* method)
{
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimatorControllerPlayable_GetHandle_mB83731910E1534BECA36F64BA22AA68A71D08CA8_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B * _thisAdjusted = reinterpret_cast<AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B *>(__this + _offset);
	return AnimatorControllerPlayable_GetHandle_mB83731910E1534BECA36F64BA22AA68A71D08CA8(_thisAdjusted, method);
}
// System.Void UnityEngine.Animations.AnimatorControllerPlayable::SetHandle(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorControllerPlayable_SetHandle_m2CAE8DABC4B19AB6BD90249D0D7FC7A9E07C3A96 (AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimatorControllerPlayable_SetHandle_m2CAE8DABC4B19AB6BD90249D0D7FC7A9E07C3A96_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * L_0 = __this->get_address_of_m_Handle_0();
		bool L_1 = PlayableHandle_IsValid_mDA0A998EA6E2442C5F3B6CDFAF07EBA9A6873059((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_3 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_3, _stringLiteral7E3996230D9AF0349B43FF7B536FC25AF0C19C71, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, AnimatorControllerPlayable_SetHandle_m2CAE8DABC4B19AB6BD90249D0D7FC7A9E07C3A96_RuntimeMethod_var);
	}

IL_001b:
	{
		bool L_4 = PlayableHandle_IsValid_mDA0A998EA6E2442C5F3B6CDFAF07EBA9A6873059((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&___handle0), /*hidden argument*/NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0041;
		}
	}
	{
		bool L_6 = PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B_mC6A8CB67F39B0B39BF77ED6177B3C2DF1BC91533((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&___handle0), /*hidden argument*/PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B_mC6A8CB67F39B0B39BF77ED6177B3C2DF1BC91533_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0040;
		}
	}
	{
		InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA * L_8 = (InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA *)il2cpp_codegen_object_new(InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_m3795145150387C6C362DA693613505C604AB8812(L_8, _stringLiteralB47C26932C83DD7E0C54FC87EDDE2F3B50E5104C, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, AnimatorControllerPlayable_SetHandle_m2CAE8DABC4B19AB6BD90249D0D7FC7A9E07C3A96_RuntimeMethod_var);
	}

IL_0040:
	{
	}

IL_0041:
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_9 = ___handle0;
		__this->set_m_Handle_0(L_9);
		return;
	}
}
IL2CPP_EXTERN_C  void AnimatorControllerPlayable_SetHandle_m2CAE8DABC4B19AB6BD90249D0D7FC7A9E07C3A96_AdjustorThunk (RuntimeObject * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B * _thisAdjusted = reinterpret_cast<AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B *>(__this + _offset);
	AnimatorControllerPlayable_SetHandle_m2CAE8DABC4B19AB6BD90249D0D7FC7A9E07C3A96(_thisAdjusted, ___handle0, method);
}
// System.Boolean UnityEngine.Animations.AnimatorControllerPlayable::Equals(UnityEngine.Animations.AnimatorControllerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimatorControllerPlayable_Equals_m04685CCA5A5FC388A0387D3453A677C0CB47D173 (AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B * __this, AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimatorControllerPlayable_Equals_m04685CCA5A5FC388A0387D3453A677C0CB47D173_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = AnimatorControllerPlayable_GetHandle_mB83731910E1534BECA36F64BA22AA68A71D08CA8((AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B *)__this, /*hidden argument*/NULL);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_1 = AnimatorControllerPlayable_GetHandle_mB83731910E1534BECA36F64BA22AA68A71D08CA8((AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B *)(&___other0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var);
		bool L_2 = PlayableHandle_op_Equality_mBA774AE123AF794A1EB55148206CDD52DAFA42DF(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool AnimatorControllerPlayable_Equals_m04685CCA5A5FC388A0387D3453A677C0CB47D173_AdjustorThunk (RuntimeObject * __this, AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B * _thisAdjusted = reinterpret_cast<AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B *>(__this + _offset);
	return AnimatorControllerPlayable_Equals_m04685CCA5A5FC388A0387D3453A677C0CB47D173(_thisAdjusted, ___other0, method);
}
// System.Void UnityEngine.Animations.AnimatorControllerPlayable::SetFloat(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorControllerPlayable_SetFloat_m7FBD4CC0F24814CE50174625E25DC49ED41CD3E2 (AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B * __this, int32_t ___id0, float ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimatorControllerPlayable_SetFloat_m7FBD4CC0F24814CE50174625E25DC49ED41CD3E2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * L_0 = __this->get_address_of_m_Handle_0();
		int32_t L_1 = ___id0;
		float L_2 = ___value1;
		IL2CPP_RUNTIME_CLASS_INIT(AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B_il2cpp_TypeInfo_var);
		AnimatorControllerPlayable_SetFloatID_m00F2343E553C75074B986D06FFF46E653E0B38CC((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void AnimatorControllerPlayable_SetFloat_m7FBD4CC0F24814CE50174625E25DC49ED41CD3E2_AdjustorThunk (RuntimeObject * __this, int32_t ___id0, float ___value1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B * _thisAdjusted = reinterpret_cast<AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B *>(__this + _offset);
	AnimatorControllerPlayable_SetFloat_m7FBD4CC0F24814CE50174625E25DC49ED41CD3E2(_thisAdjusted, ___id0, ___value1, method);
}
// System.Boolean UnityEngine.Animations.AnimatorControllerPlayable::CreateHandleInternal(UnityEngine.Playables.PlayableGraph,UnityEngine.RuntimeAnimatorController,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimatorControllerPlayable_CreateHandleInternal_m7AFE10D091BC80A9877809A94F3398045CA6914C (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  ___graph0, RuntimeAnimatorController_tDA6672C8194522C2F60F8F2F241657E57C3520BD * ___controller1, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * ___handle2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimatorControllerPlayable_CreateHandleInternal_m7AFE10D091BC80A9877809A94F3398045CA6914C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeAnimatorController_tDA6672C8194522C2F60F8F2F241657E57C3520BD * L_0 = ___controller1;
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * L_1 = ___handle2;
		IL2CPP_RUNTIME_CLASS_INIT(AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B_il2cpp_TypeInfo_var);
		bool L_2 = AnimatorControllerPlayable_CreateHandleInternal_Injected_mE9FD7C37D1270DC65C4A74211DCE0FCADB7722D0((PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA *)(&___graph0), L_0, (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UnityEngine.Animations.AnimatorControllerPlayable::SetFloatID(UnityEngine.Playables.PlayableHandle&,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorControllerPlayable_SetFloatID_m00F2343E553C75074B986D06FFF46E653E0B38CC (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * ___handle0, int32_t ___id1, float ___value2, const RuntimeMethod* method)
{
	typedef void (*AnimatorControllerPlayable_SetFloatID_m00F2343E553C75074B986D06FFF46E653E0B38CC_ftn) (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *, int32_t, float);
	static AnimatorControllerPlayable_SetFloatID_m00F2343E553C75074B986D06FFF46E653E0B38CC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimatorControllerPlayable_SetFloatID_m00F2343E553C75074B986D06FFF46E653E0B38CC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimatorControllerPlayable::SetFloatID(UnityEngine.Playables.PlayableHandle&,System.Int32,System.Single)");
	_il2cpp_icall_func(___handle0, ___id1, ___value2);
}
// System.Void UnityEngine.Animations.AnimatorControllerPlayable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorControllerPlayable__cctor_m6FCC197F3BF33EAFC37D5217617FCDC64E8B304E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimatorControllerPlayable__cctor_m6FCC197F3BF33EAFC37D5217617FCDC64E8B304E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = PlayableHandle_get_Null_m09DE585EF795EFA2811950173C80F4FA24CBAAD1(/*hidden argument*/NULL);
		AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B  L_1;
		memset((&L_1), 0, sizeof(L_1));
		AnimatorControllerPlayable__ctor_m739B1BFC592B6C160410141057F1B2BA1B971897((&L_1), L_0, /*hidden argument*/NULL);
		((AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B_StaticFields*)il2cpp_codegen_static_fields_for(AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B_il2cpp_TypeInfo_var))->set_m_NullPlayable_1(L_1);
		return;
	}
}
// System.Boolean UnityEngine.Animations.AnimatorControllerPlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.RuntimeAnimatorController,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimatorControllerPlayable_CreateHandleInternal_Injected_mE9FD7C37D1270DC65C4A74211DCE0FCADB7722D0 (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA * ___graph0, RuntimeAnimatorController_tDA6672C8194522C2F60F8F2F241657E57C3520BD * ___controller1, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * ___handle2, const RuntimeMethod* method)
{
	typedef bool (*AnimatorControllerPlayable_CreateHandleInternal_Injected_mE9FD7C37D1270DC65C4A74211DCE0FCADB7722D0_ftn) (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA *, RuntimeAnimatorController_tDA6672C8194522C2F60F8F2F241657E57C3520BD *, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *);
	static AnimatorControllerPlayable_CreateHandleInternal_Injected_mE9FD7C37D1270DC65C4A74211DCE0FCADB7722D0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimatorControllerPlayable_CreateHandleInternal_Injected_mE9FD7C37D1270DC65C4A74211DCE0FCADB7722D0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimatorControllerPlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.RuntimeAnimatorController,UnityEngine.Playables.PlayableHandle&)");
	bool retVal = _il2cpp_icall_func(___graph0, ___controller1, ___handle2);
	return retVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.Animations.ConstraintSource
IL2CPP_EXTERN_C void ConstraintSource_t63B0D0146AE7F080F4801408E83F82D7FD12B994_marshal_pinvoke(const ConstraintSource_t63B0D0146AE7F080F4801408E83F82D7FD12B994& unmarshaled, ConstraintSource_t63B0D0146AE7F080F4801408E83F82D7FD12B994_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_SourceTransform_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_SourceTransform' of type 'ConstraintSource': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_SourceTransform_0Exception, NULL);
}
IL2CPP_EXTERN_C void ConstraintSource_t63B0D0146AE7F080F4801408E83F82D7FD12B994_marshal_pinvoke_back(const ConstraintSource_t63B0D0146AE7F080F4801408E83F82D7FD12B994_marshaled_pinvoke& marshaled, ConstraintSource_t63B0D0146AE7F080F4801408E83F82D7FD12B994& unmarshaled)
{
	Exception_t* ___m_SourceTransform_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_SourceTransform' of type 'ConstraintSource': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_SourceTransform_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Animations.ConstraintSource
IL2CPP_EXTERN_C void ConstraintSource_t63B0D0146AE7F080F4801408E83F82D7FD12B994_marshal_pinvoke_cleanup(ConstraintSource_t63B0D0146AE7F080F4801408E83F82D7FD12B994_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Animations.ConstraintSource
IL2CPP_EXTERN_C void ConstraintSource_t63B0D0146AE7F080F4801408E83F82D7FD12B994_marshal_com(const ConstraintSource_t63B0D0146AE7F080F4801408E83F82D7FD12B994& unmarshaled, ConstraintSource_t63B0D0146AE7F080F4801408E83F82D7FD12B994_marshaled_com& marshaled)
{
	Exception_t* ___m_SourceTransform_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_SourceTransform' of type 'ConstraintSource': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_SourceTransform_0Exception, NULL);
}
IL2CPP_EXTERN_C void ConstraintSource_t63B0D0146AE7F080F4801408E83F82D7FD12B994_marshal_com_back(const ConstraintSource_t63B0D0146AE7F080F4801408E83F82D7FD12B994_marshaled_com& marshaled, ConstraintSource_t63B0D0146AE7F080F4801408E83F82D7FD12B994& unmarshaled)
{
	Exception_t* ___m_SourceTransform_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_SourceTransform' of type 'ConstraintSource': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_SourceTransform_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Animations.ConstraintSource
IL2CPP_EXTERN_C void ConstraintSource_t63B0D0146AE7F080F4801408E83F82D7FD12B994_marshal_com_cleanup(ConstraintSource_t63B0D0146AE7F080F4801408E83F82D7FD12B994_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Animations.ConstraintSource::set_sourceTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstraintSource_set_sourceTransform_mFA10C6FC2646581E9908CEBCE74528DF77A9A746 (ConstraintSource_t63B0D0146AE7F080F4801408E83F82D7FD12B994 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___value0, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = ___value0;
		__this->set_m_SourceTransform_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void ConstraintSource_set_sourceTransform_mFA10C6FC2646581E9908CEBCE74528DF77A9A746_AdjustorThunk (RuntimeObject * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ConstraintSource_t63B0D0146AE7F080F4801408E83F82D7FD12B994 * _thisAdjusted = reinterpret_cast<ConstraintSource_t63B0D0146AE7F080F4801408E83F82D7FD12B994 *>(__this + _offset);
	ConstraintSource_set_sourceTransform_mFA10C6FC2646581E9908CEBCE74528DF77A9A746(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.Animations.ConstraintSource::set_weight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstraintSource_set_weight_m779901D002DDCD925CBD05FC9F70DEA6E1FB4080 (ConstraintSource_t63B0D0146AE7F080F4801408E83F82D7FD12B994 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_m_Weight_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void ConstraintSource_set_weight_m779901D002DDCD925CBD05FC9F70DEA6E1FB4080_AdjustorThunk (RuntimeObject * __this, float ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ConstraintSource_t63B0D0146AE7F080F4801408E83F82D7FD12B994 * _thisAdjusted = reinterpret_cast<ConstraintSource_t63B0D0146AE7F080F4801408E83F82D7FD12B994 *>(__this + _offset);
	ConstraintSource_set_weight_m779901D002DDCD925CBD05FC9F70DEA6E1FB4080(_thisAdjusted, ___value0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Animations.LookAtConstraint::set_constraintActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LookAtConstraint_set_constraintActive_mDC246E7D0DE915B084EDD7E08897632D8CE22AEA (LookAtConstraint_t21565CB52914267484967D0205012FD17E3717CC * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*LookAtConstraint_set_constraintActive_mDC246E7D0DE915B084EDD7E08897632D8CE22AEA_ftn) (LookAtConstraint_t21565CB52914267484967D0205012FD17E3717CC *, bool);
	static LookAtConstraint_set_constraintActive_mDC246E7D0DE915B084EDD7E08897632D8CE22AEA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (LookAtConstraint_set_constraintActive_mDC246E7D0DE915B084EDD7E08897632D8CE22AEA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.LookAtConstraint::set_constraintActive(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Animations.LookAtConstraint::SetSources(System.Collections.Generic.List`1<UnityEngine.Animations.ConstraintSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LookAtConstraint_SetSources_mDC34E30E3BE74E9E9651683A2F5D9067CA476221 (LookAtConstraint_t21565CB52914267484967D0205012FD17E3717CC * __this, List_1_t09FCE348A4E5E52E266CCC1DE562EFC20187B630 * ___sources0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LookAtConstraint_SetSources_mDC34E30E3BE74E9E9651683A2F5D9067CA476221_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		List_1_t09FCE348A4E5E52E266CCC1DE562EFC20187B630 * L_0 = ___sources0;
		V_0 = (bool)((((RuntimeObject*)(List_1_t09FCE348A4E5E52E266CCC1DE562EFC20187B630 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_2 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_2, _stringLiteralBCE16DD0260827ECF338C787F1206F77860CACC5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, LookAtConstraint_SetSources_mDC34E30E3BE74E9E9651683A2F5D9067CA476221_RuntimeMethod_var);
	}

IL_0014:
	{
		List_1_t09FCE348A4E5E52E266CCC1DE562EFC20187B630 * L_3 = ___sources0;
		LookAtConstraint_SetSourcesInternal_m425BC21117905979EFE816EB70C1986A532B7451(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animations.LookAtConstraint::SetSourcesInternal(UnityEngine.Animations.LookAtConstraint,System.Collections.Generic.List`1<UnityEngine.Animations.ConstraintSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LookAtConstraint_SetSourcesInternal_m425BC21117905979EFE816EB70C1986A532B7451 (LookAtConstraint_t21565CB52914267484967D0205012FD17E3717CC * ___self0, List_1_t09FCE348A4E5E52E266CCC1DE562EFC20187B630 * ___sources1, const RuntimeMethod* method)
{
	typedef void (*LookAtConstraint_SetSourcesInternal_m425BC21117905979EFE816EB70C1986A532B7451_ftn) (LookAtConstraint_t21565CB52914267484967D0205012FD17E3717CC *, List_1_t09FCE348A4E5E52E266CCC1DE562EFC20187B630 *);
	static LookAtConstraint_SetSourcesInternal_m425BC21117905979EFE816EB70C1986A532B7451_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (LookAtConstraint_SetSourcesInternal_m425BC21117905979EFE816EB70C1986A532B7451_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.LookAtConstraint::SetSourcesInternal(UnityEngine.Animations.LookAtConstraint,System.Collections.Generic.List`1<UnityEngine.Animations.ConstraintSource>)");
	_il2cpp_icall_func(___self0, ___sources1);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.Animator::get_isHuman()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_get_isHuman_mFD0E2CDDB50DE69A6048B2D7575EE1E9F4E22AE9 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	typedef bool (*Animator_get_isHuman_mFD0E2CDDB50DE69A6048B2D7575EE1E9F4E22AE9_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *);
	static Animator_get_isHuman_mFD0E2CDDB50DE69A6048B2D7575EE1E9F4E22AE9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_isHuman_mFD0E2CDDB50DE69A6048B2D7575EE1E9F4E22AE9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_isHuman()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.Animator::get_hasRootMotion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_get_hasRootMotion_mD77AF741113D388C6AB56C463F66C2AA25E4377A (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	typedef bool (*Animator_get_hasRootMotion_mD77AF741113D388C6AB56C463F66C2AA25E4377A_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *);
	static Animator_get_hasRootMotion_mD77AF741113D388C6AB56C463F66C2AA25E4377A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_hasRootMotion_mD77AF741113D388C6AB56C463F66C2AA25E4377A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_hasRootMotion()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.Animator::get_isInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_get_isInitialized_mC4B380F4376B55D1D019C2A9650AA31C6090CA9F (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	typedef bool (*Animator_get_isInitialized_mC4B380F4376B55D1D019C2A9650AA31C6090CA9F_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *);
	static Animator_get_isInitialized_mC4B380F4376B55D1D019C2A9650AA31C6090CA9F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_isInitialized_mC4B380F4376B55D1D019C2A9650AA31C6090CA9F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_isInitialized()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Single UnityEngine.Animator::GetFloat(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_GetFloat_mD81DFC8E86940E023CF5512DC8E7003A5FF63260 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___id0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		int32_t L_0 = ___id0;
		float L_1 = Animator_GetFloatID_m651CA5557BCABC522FAC92CF89CFE39240E82BD8(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_mE4C29F6980EBBBD954637721E6E13A0BE2B13C43 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, float ___value1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		float L_1 = ___value1;
		Animator_SetFloatString_mE425F554C50682E41D362D7593B3B069609B7091(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_mC260C82EF3FD1DB6B66FE898C595D5F901E59681 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, float ___value1, float ___dampTime2, float ___deltaTime3, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		float L_1 = ___value1;
		float L_2 = ___dampTime2;
		float L_3 = ___deltaTime3;
		Animator_SetFloatStringDamp_m2DFC0ED89DB0DBF202DF6A1A20D6A91CA6C20B70(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetFloat(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_mF9C412D31B389EC3305BB8FC299A09AA95A8A415 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___id0, float ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___id0;
		float L_1 = ___value1;
		Animator_SetFloatID_mC8049D4DC5D19929FF51172902E35D496F9EB805(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m497805BA217139E42808899782FA05C15BC9879E (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		bool L_1 = ___value1;
		Animator_SetBoolString_mA61F1A44D13EF82A7C2CAF466EBA81E65D054D46(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetBool(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m706B7DB1DAED4AE10ECD1BF6876FB0B524082A10 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___id0, bool ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___id0;
		bool L_1 = ___value1;
		Animator_SetBoolID_m03BC09B1F267F9B07FF9F8EDDBAA4D0AA8D61EF0(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetInteger(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetInteger_m1E6D66416F48D6E02E7618A0142D70F5232BCC22 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		int32_t L_1 = ___value1;
		Animator_SetIntegerString_m6D069E7F310547EA883ABC2D72BA41C3CDA6B1C4(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetInteger(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetInteger_m89D0F15197F3B4D75E02194B432685F68F458B70 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___id0, int32_t ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___id0;
		int32_t L_1 = ___value1;
		Animator_SetIntegerID_mF9CF13102019C3714F927B3827EEF4473C0AB5BA(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_m68D29B7FA54C2F230F5AD780D462612B18E74245 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		Animator_SetTriggerString_m77CE57996467D0C973FA2D0CB4DF87BD062C8A1E(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetTrigger(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_m2ED217B225743B9C9EB3E7B0B8905FFEEB221002 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___id0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___id0;
		Animator_SetTriggerID_mD08597B567A91FC132350A343E69A084EC958040(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::ResetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_ResetTrigger_m70120C9A00EA482BF0880D2C02EC814CE3D71FD1 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		Animator_ResetTriggerString_m31B233F948D7551D220FEDA56B002E6724B89851(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Animator::get_deltaPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Animator_get_deltaPosition_m85287AA699C50B6AA7489CD313F8CFED5D998533 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Animator_get_deltaPosition_Injected_mB3C1937C55150A4E113BB2D8D6FEC323268C7BBA(__this, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Animator::set_applyRootMotion(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_applyRootMotion_mD25B7FCFCDAD7C5D107E860D2E46AB765271A982 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*Animator_set_applyRootMotion_mD25B7FCFCDAD7C5D107E860D2E46AB765271A982_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, bool);
	static Animator_set_applyRootMotion_mD25B7FCFCDAD7C5D107E860D2E46AB765271A982_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_applyRootMotion_mD25B7FCFCDAD7C5D107E860D2E46AB765271A982_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_applyRootMotion(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Animator::SetIKPosition(UnityEngine.AvatarIKGoal,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetIKPosition_m2A57FAB29642C1C7E19F85F0DFD5421DA32598C4 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___goal0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___goalPosition1, const RuntimeMethod* method)
{
	{
		Animator_CheckIfInIKPass_mD5AD9B7BD27B551BD8EA8EA13384237A4DC02E10(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___goal0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___goalPosition1;
		Animator_SetGoalPosition_m27E296D914F30F2C0BAE57149A4B7E430959E61F(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetGoalPosition(UnityEngine.AvatarIKGoal,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetGoalPosition_m27E296D914F30F2C0BAE57149A4B7E430959E61F (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___goal0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___goalPosition1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___goal0;
		Animator_SetGoalPosition_Injected_m3FCA5A1E8B603902FDEC306CF4324BC4551D3737(__this, L_0, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&___goalPosition1), /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Quaternion UnityEngine.Animator::GetIKRotation(UnityEngine.AvatarIKGoal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Animator_GetIKRotation_mCA2582EAD91AE8E9C0E533EDBAF73C7196B4922A (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___goal0, const RuntimeMethod* method)
{
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Animator_CheckIfInIKPass_mD5AD9B7BD27B551BD8EA8EA13384237A4DC02E10(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___goal0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = Animator_GetGoalRotation_m741B3B9895B02D6147D05854D3930931BA195E4C(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Quaternion UnityEngine.Animator::GetGoalRotation(UnityEngine.AvatarIKGoal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Animator_GetGoalRotation_m741B3B9895B02D6147D05854D3930931BA195E4C (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___goal0, const RuntimeMethod* method)
{
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___goal0;
		Animator_GetGoalRotation_Injected_m4011F9579BE99CDC1BEBAF4280EB5F5472A109DC(__this, L_0, (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&V_0), /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Animator::SetIKRotation(UnityEngine.AvatarIKGoal,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetIKRotation_mE871B19486D3E41AF8A361EF1C0393D22F5F0E15 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___goal0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___goalRotation1, const RuntimeMethod* method)
{
	{
		Animator_CheckIfInIKPass_mD5AD9B7BD27B551BD8EA8EA13384237A4DC02E10(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___goal0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = ___goalRotation1;
		Animator_SetGoalRotation_mEF3F4FDFC5C77775B3DF86C1D2A213AA2FCEA465(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetGoalRotation(UnityEngine.AvatarIKGoal,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetGoalRotation_mEF3F4FDFC5C77775B3DF86C1D2A213AA2FCEA465 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___goal0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___goalRotation1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___goal0;
		Animator_SetGoalRotation_Injected_m37692B68D8CC4D92559553F9AAE52D714C4699A9(__this, L_0, (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&___goalRotation1), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetIKPositionWeight(UnityEngine.AvatarIKGoal,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetIKPositionWeight_m443110C146EEBAFFC49C0194A721070A2D9F2D10 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___goal0, float ___value1, const RuntimeMethod* method)
{
	{
		Animator_CheckIfInIKPass_mD5AD9B7BD27B551BD8EA8EA13384237A4DC02E10(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___goal0;
		float L_1 = ___value1;
		Animator_SetGoalWeightPosition_m890B8E9CCFF48C094B5E34EE35CC105567F83481(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetGoalWeightPosition(UnityEngine.AvatarIKGoal,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetGoalWeightPosition_m890B8E9CCFF48C094B5E34EE35CC105567F83481 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___goal0, float ___value1, const RuntimeMethod* method)
{
	typedef void (*Animator_SetGoalWeightPosition_m890B8E9CCFF48C094B5E34EE35CC105567F83481_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t, float);
	static Animator_SetGoalWeightPosition_m890B8E9CCFF48C094B5E34EE35CC105567F83481_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetGoalWeightPosition_m890B8E9CCFF48C094B5E34EE35CC105567F83481_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetGoalWeightPosition(UnityEngine.AvatarIKGoal,System.Single)");
	_il2cpp_icall_func(__this, ___goal0, ___value1);
}
// System.Void UnityEngine.Animator::SetIKRotationWeight(UnityEngine.AvatarIKGoal,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetIKRotationWeight_m3730BB1FF4712D6863B7A32AA2096821CEC3A8CE (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___goal0, float ___value1, const RuntimeMethod* method)
{
	{
		Animator_CheckIfInIKPass_mD5AD9B7BD27B551BD8EA8EA13384237A4DC02E10(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___goal0;
		float L_1 = ___value1;
		Animator_SetGoalWeightRotation_mC32F9430FA93AD28AC309F724398A1CAAEF88904(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetGoalWeightRotation(UnityEngine.AvatarIKGoal,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetGoalWeightRotation_mC32F9430FA93AD28AC309F724398A1CAAEF88904 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___goal0, float ___value1, const RuntimeMethod* method)
{
	typedef void (*Animator_SetGoalWeightRotation_mC32F9430FA93AD28AC309F724398A1CAAEF88904_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t, float);
	static Animator_SetGoalWeightRotation_mC32F9430FA93AD28AC309F724398A1CAAEF88904_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetGoalWeightRotation_mC32F9430FA93AD28AC309F724398A1CAAEF88904_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetGoalWeightRotation(UnityEngine.AvatarIKGoal,System.Single)");
	_il2cpp_icall_func(__this, ___goal0, ___value1);
}
// System.Void UnityEngine.Animator::SetLookAtPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetLookAtPosition_mDE13BABEC48388F30A268099BBE6E6E9780BA8F8 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lookAtPosition0, const RuntimeMethod* method)
{
	{
		Animator_CheckIfInIKPass_mD5AD9B7BD27B551BD8EA8EA13384237A4DC02E10(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___lookAtPosition0;
		Animator_SetLookAtPositionInternal_mD621D4C229D132ECD57B1D9F90783A16FEBA5A84(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetLookAtPositionInternal(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetLookAtPositionInternal_mD621D4C229D132ECD57B1D9F90783A16FEBA5A84 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lookAtPosition0, const RuntimeMethod* method)
{
	{
		Animator_SetLookAtPositionInternal_Injected_mE43763E88F5BEA74AE47D478B1137A48090A38DB(__this, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&___lookAtPosition0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetLookAtWeight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetLookAtWeight_m2983E7C852140D99418B82A32523F9D4F945C7D0 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, float ___weight0, const RuntimeMethod* method)
{
	{
		Animator_CheckIfInIKPass_mD5AD9B7BD27B551BD8EA8EA13384237A4DC02E10(__this, /*hidden argument*/NULL);
		float L_0 = ___weight0;
		Animator_SetLookAtWeightInternal_mFE3EA212AD2159F6A66BF80D30385227E836A4BE(__this, L_0, (0.0f), (1.0f), (0.0f), (0.5f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetLookAtWeightInternal(System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetLookAtWeightInternal_mFE3EA212AD2159F6A66BF80D30385227E836A4BE (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, float ___weight0, float ___bodyWeight1, float ___headWeight2, float ___eyesWeight3, float ___clampWeight4, const RuntimeMethod* method)
{
	typedef void (*Animator_SetLookAtWeightInternal_mFE3EA212AD2159F6A66BF80D30385227E836A4BE_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, float, float, float, float, float);
	static Animator_SetLookAtWeightInternal_mFE3EA212AD2159F6A66BF80D30385227E836A4BE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetLookAtWeightInternal_mFE3EA212AD2159F6A66BF80D30385227E836A4BE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetLookAtWeightInternal(System.Single,System.Single,System.Single,System.Single,System.Single)");
	_il2cpp_icall_func(__this, ___weight0, ___bodyWeight1, ___headWeight2, ___eyesWeight3, ___clampWeight4);
}
// System.Void UnityEngine.Animator::SetLayerWeight(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetLayerWeight_mCD79BBDCD7DD47929E00C5EA69DEF2573EAD939F (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___layerIndex0, float ___weight1, const RuntimeMethod* method)
{
	typedef void (*Animator_SetLayerWeight_mCD79BBDCD7DD47929E00C5EA69DEF2573EAD939F_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t, float);
	static Animator_SetLayerWeight_mCD79BBDCD7DD47929E00C5EA69DEF2573EAD939F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetLayerWeight_mCD79BBDCD7DD47929E00C5EA69DEF2573EAD939F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetLayerWeight(System.Int32,System.Single)");
	_il2cpp_icall_func(__this, ___layerIndex0, ___weight1);
}
// UnityEngine.AnimatorControllerParameter[] UnityEngine.Animator::get_parameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimatorControllerParameterU5BU5D_t7B886A2A1648ECF218447ED1DE8D241652F863FD* Animator_get_parameters_m1BD5F40B26D17498C0DD24E7720A2788953542FA (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	typedef AnimatorControllerParameterU5BU5D_t7B886A2A1648ECF218447ED1DE8D241652F863FD* (*Animator_get_parameters_m1BD5F40B26D17498C0DD24E7720A2788953542FA_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *);
	static Animator_get_parameters_m1BD5F40B26D17498C0DD24E7720A2788953542FA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_parameters_m1BD5F40B26D17498C0DD24E7720A2788953542FA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_parameters()");
	AnimatorControllerParameterU5BU5D_t7B886A2A1648ECF218447ED1DE8D241652F863FD* retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Animator::set_speed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_speed_mEA558D196D84684744A642A56AFBF22F16448813 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*Animator_set_speed_mEA558D196D84684744A642A56AFBF22F16448813_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, float);
	static Animator_set_speed_mEA558D196D84684744A642A56AFBF22F16448813_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_speed_mEA558D196D84684744A642A56AFBF22F16448813_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_speed(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Animator::Play(System.Int32,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_Play_m20B525F785DA59888E645125DB2DDC071E924F3E (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___stateNameHash0, int32_t ___layer1, float ___normalizedTime2, const RuntimeMethod* method)
{
	typedef void (*Animator_Play_m20B525F785DA59888E645125DB2DDC071E924F3E_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t, int32_t, float);
	static Animator_Play_m20B525F785DA59888E645125DB2DDC071E924F3E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_Play_m20B525F785DA59888E645125DB2DDC071E924F3E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::Play(System.Int32,System.Int32,System.Single)");
	_il2cpp_icall_func(__this, ___stateNameHash0, ___layer1, ___normalizedTime2);
}
// UnityEngine.Transform UnityEngine.Animator::GetBoneTransform(UnityEngine.HumanBodyBones)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Animator_GetBoneTransform_m44760610785563E713D82AC1FC0771B38CDBB16F (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___humanBoneId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Animator_GetBoneTransform_m44760610785563E713D82AC1FC0771B38CDBB16F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_1 = NULL;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___humanBoneId0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_1 = ___humanBoneId0;
		G_B3_0 = ((((int32_t)((((int32_t)L_1) < ((int32_t)((int32_t)55)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 1;
	}

IL_0010:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_3 = ((int32_t)((int32_t)55));
		RuntimeObject * L_4 = Box(HumanBodyBones_t84CDC0803F451E10186E589016F33D8404227892_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteral3DB192144788919FBAC5C900D49CE390D3FFF2C0, L_4, /*hidden argument*/NULL);
		IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF * L_6 = (IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF *)il2cpp_codegen_object_new(IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_mCCE2EFF47A0ACB4B2636F63140F94FCEA71A9BCA(L_6, L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, Animator_GetBoneTransform_m44760610785563E713D82AC1FC0771B38CDBB16F_RuntimeMethod_var);
	}

IL_002b:
	{
		int32_t L_7 = ___humanBoneId0;
		int32_t L_8 = HumanTrait_GetBoneIndexFromMono_mEE030DE71CE19611BB3CC881799CCF3828D0928E(L_7, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = Animator_GetBoneTransformInternal_mC33B048536349D354D9FE17D46377B8E467599E5(__this, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		goto IL_003a;
	}

IL_003a:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = V_1;
		return L_10;
	}
}
// UnityEngine.Transform UnityEngine.Animator::GetBoneTransformInternal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Animator_GetBoneTransformInternal_mC33B048536349D354D9FE17D46377B8E467599E5 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___humanBoneId0, const RuntimeMethod* method)
{
	typedef Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * (*Animator_GetBoneTransformInternal_mC33B048536349D354D9FE17D46377B8E467599E5_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t);
	static Animator_GetBoneTransformInternal_mC33B048536349D354D9FE17D46377B8E467599E5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetBoneTransformInternal_mC33B048536349D354D9FE17D46377B8E467599E5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetBoneTransformInternal(System.Int32)");
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * retVal = _il2cpp_icall_func(__this, ___humanBoneId0);
	return retVal;
}
// UnityEngine.RuntimeAnimatorController UnityEngine.Animator::get_runtimeAnimatorController()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeAnimatorController_tDA6672C8194522C2F60F8F2F241657E57C3520BD * Animator_get_runtimeAnimatorController_m68C657899041D4CEF8958BBBDD39941647C2B53E (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	typedef RuntimeAnimatorController_tDA6672C8194522C2F60F8F2F241657E57C3520BD * (*Animator_get_runtimeAnimatorController_m68C657899041D4CEF8958BBBDD39941647C2B53E_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *);
	static Animator_get_runtimeAnimatorController_m68C657899041D4CEF8958BBBDD39941647C2B53E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_runtimeAnimatorController_m68C657899041D4CEF8958BBBDD39941647C2B53E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_runtimeAnimatorController()");
	RuntimeAnimatorController_tDA6672C8194522C2F60F8F2F241657E57C3520BD * retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.Animator::get_hasBoundPlayables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_get_hasBoundPlayables_m283AF0BA9B841E3FD1ADC5541C41B936A9D1EB05 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	typedef bool (*Animator_get_hasBoundPlayables_m283AF0BA9B841E3FD1ADC5541C41B936A9D1EB05_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *);
	static Animator_get_hasBoundPlayables_m283AF0BA9B841E3FD1ADC5541C41B936A9D1EB05_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_hasBoundPlayables_m283AF0BA9B841E3FD1ADC5541C41B936A9D1EB05_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_hasBoundPlayables()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Int32 UnityEngine.Animator::StringToHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_StringToHash_m80E4CCCB84AAD032A5D84EF5832B7F35C1E5AE3F (String_t* ___name0, const RuntimeMethod* method)
{
	typedef int32_t (*Animator_StringToHash_m80E4CCCB84AAD032A5D84EF5832B7F35C1E5AE3F_ftn) (String_t*);
	static Animator_StringToHash_m80E4CCCB84AAD032A5D84EF5832B7F35C1E5AE3F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_StringToHash_m80E4CCCB84AAD032A5D84EF5832B7F35C1E5AE3F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::StringToHash(System.String)");
	int32_t retVal = _il2cpp_icall_func(___name0);
	return retVal;
}
// UnityEngine.Playables.PlayableGraph UnityEngine.Animator::get_playableGraph()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  Animator_get_playableGraph_m92B144545CB11E45EDE4797B0AEB7CEE15E12A26 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA ));
		Animator_GetCurrentGraph_mC84D76AF70D99C6151BE20F76FAB9840E39FD77D(__this, (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA *)(&V_0), /*hidden argument*/NULL);
		PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  L_0 = V_0;
		V_1 = L_0;
		goto IL_0016;
	}

IL_0016:
	{
		PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  L_1 = V_1;
		return L_1;
	}
}
// System.Void UnityEngine.Animator::GetCurrentGraph(UnityEngine.Playables.PlayableGraph&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_GetCurrentGraph_mC84D76AF70D99C6151BE20F76FAB9840E39FD77D (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA * ___graph0, const RuntimeMethod* method)
{
	typedef void (*Animator_GetCurrentGraph_mC84D76AF70D99C6151BE20F76FAB9840E39FD77D_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA *);
	static Animator_GetCurrentGraph_mC84D76AF70D99C6151BE20F76FAB9840E39FD77D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetCurrentGraph_mC84D76AF70D99C6151BE20F76FAB9840E39FD77D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetCurrentGraph(UnityEngine.Playables.PlayableGraph&)");
	_il2cpp_icall_func(__this, ___graph0);
}
// System.Void UnityEngine.Animator::CheckIfInIKPass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_CheckIfInIKPass_mD5AD9B7BD27B551BD8EA8EA13384237A4DC02E10 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Animator_CheckIfInIKPass_mD5AD9B7BD27B551BD8EA8EA13384237A4DC02E10_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		bool L_0 = Animator_get_logWarnings_mE755494196C56C22909C97125F48EC6A7CFED617(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		bool L_1 = Animator_IsInIKPass_m464BA0915D3FF398D1356A65187DACD74633D973(__this, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 0;
	}

IL_0015:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(_stringLiteral488203F92B6BE929591A420476D70A53696658FE, /*hidden argument*/NULL);
	}

IL_0024:
	{
		return;
	}
}
// System.Boolean UnityEngine.Animator::IsInIKPass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_IsInIKPass_m464BA0915D3FF398D1356A65187DACD74633D973 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	typedef bool (*Animator_IsInIKPass_m464BA0915D3FF398D1356A65187DACD74633D973_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *);
	static Animator_IsInIKPass_m464BA0915D3FF398D1356A65187DACD74633D973_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_IsInIKPass_m464BA0915D3FF398D1356A65187DACD74633D973_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::IsInIKPass()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Animator::SetFloatString(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloatString_mE425F554C50682E41D362D7593B3B069609B7091 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, float ___value1, const RuntimeMethod* method)
{
	typedef void (*Animator_SetFloatString_mE425F554C50682E41D362D7593B3B069609B7091_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, String_t*, float);
	static Animator_SetFloatString_mE425F554C50682E41D362D7593B3B069609B7091_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetFloatString_mE425F554C50682E41D362D7593B3B069609B7091_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetFloatString(System.String,System.Single)");
	_il2cpp_icall_func(__this, ___name0, ___value1);
}
// System.Void UnityEngine.Animator::SetFloatID(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloatID_mC8049D4DC5D19929FF51172902E35D496F9EB805 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___id0, float ___value1, const RuntimeMethod* method)
{
	typedef void (*Animator_SetFloatID_mC8049D4DC5D19929FF51172902E35D496F9EB805_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t, float);
	static Animator_SetFloatID_mC8049D4DC5D19929FF51172902E35D496F9EB805_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetFloatID_mC8049D4DC5D19929FF51172902E35D496F9EB805_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetFloatID(System.Int32,System.Single)");
	_il2cpp_icall_func(__this, ___id0, ___value1);
}
// System.Single UnityEngine.Animator::GetFloatID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_GetFloatID_m651CA5557BCABC522FAC92CF89CFE39240E82BD8 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___id0, const RuntimeMethod* method)
{
	typedef float (*Animator_GetFloatID_m651CA5557BCABC522FAC92CF89CFE39240E82BD8_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t);
	static Animator_GetFloatID_m651CA5557BCABC522FAC92CF89CFE39240E82BD8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetFloatID_m651CA5557BCABC522FAC92CF89CFE39240E82BD8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetFloatID(System.Int32)");
	float retVal = _il2cpp_icall_func(__this, ___id0);
	return retVal;
}
// System.Void UnityEngine.Animator::SetBoolString(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBoolString_mA61F1A44D13EF82A7C2CAF466EBA81E65D054D46 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method)
{
	typedef void (*Animator_SetBoolString_mA61F1A44D13EF82A7C2CAF466EBA81E65D054D46_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, String_t*, bool);
	static Animator_SetBoolString_mA61F1A44D13EF82A7C2CAF466EBA81E65D054D46_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetBoolString_mA61F1A44D13EF82A7C2CAF466EBA81E65D054D46_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetBoolString(System.String,System.Boolean)");
	_il2cpp_icall_func(__this, ___name0, ___value1);
}
// System.Void UnityEngine.Animator::SetBoolID(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBoolID_m03BC09B1F267F9B07FF9F8EDDBAA4D0AA8D61EF0 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___id0, bool ___value1, const RuntimeMethod* method)
{
	typedef void (*Animator_SetBoolID_m03BC09B1F267F9B07FF9F8EDDBAA4D0AA8D61EF0_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t, bool);
	static Animator_SetBoolID_m03BC09B1F267F9B07FF9F8EDDBAA4D0AA8D61EF0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetBoolID_m03BC09B1F267F9B07FF9F8EDDBAA4D0AA8D61EF0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetBoolID(System.Int32,System.Boolean)");
	_il2cpp_icall_func(__this, ___id0, ___value1);
}
// System.Void UnityEngine.Animator::SetIntegerString(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetIntegerString_m6D069E7F310547EA883ABC2D72BA41C3CDA6B1C4 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method)
{
	typedef void (*Animator_SetIntegerString_m6D069E7F310547EA883ABC2D72BA41C3CDA6B1C4_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, String_t*, int32_t);
	static Animator_SetIntegerString_m6D069E7F310547EA883ABC2D72BA41C3CDA6B1C4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetIntegerString_m6D069E7F310547EA883ABC2D72BA41C3CDA6B1C4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetIntegerString(System.String,System.Int32)");
	_il2cpp_icall_func(__this, ___name0, ___value1);
}
// System.Void UnityEngine.Animator::SetIntegerID(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetIntegerID_mF9CF13102019C3714F927B3827EEF4473C0AB5BA (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___id0, int32_t ___value1, const RuntimeMethod* method)
{
	typedef void (*Animator_SetIntegerID_mF9CF13102019C3714F927B3827EEF4473C0AB5BA_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t, int32_t);
	static Animator_SetIntegerID_mF9CF13102019C3714F927B3827EEF4473C0AB5BA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetIntegerID_mF9CF13102019C3714F927B3827EEF4473C0AB5BA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetIntegerID(System.Int32,System.Int32)");
	_il2cpp_icall_func(__this, ___id0, ___value1);
}
// System.Void UnityEngine.Animator::SetTriggerString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTriggerString_m77CE57996467D0C973FA2D0CB4DF87BD062C8A1E (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, const RuntimeMethod* method)
{
	typedef void (*Animator_SetTriggerString_m77CE57996467D0C973FA2D0CB4DF87BD062C8A1E_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, String_t*);
	static Animator_SetTriggerString_m77CE57996467D0C973FA2D0CB4DF87BD062C8A1E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetTriggerString_m77CE57996467D0C973FA2D0CB4DF87BD062C8A1E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetTriggerString(System.String)");
	_il2cpp_icall_func(__this, ___name0);
}
// System.Void UnityEngine.Animator::SetTriggerID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTriggerID_mD08597B567A91FC132350A343E69A084EC958040 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___id0, const RuntimeMethod* method)
{
	typedef void (*Animator_SetTriggerID_mD08597B567A91FC132350A343E69A084EC958040_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t);
	static Animator_SetTriggerID_mD08597B567A91FC132350A343E69A084EC958040_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetTriggerID_mD08597B567A91FC132350A343E69A084EC958040_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetTriggerID(System.Int32)");
	_il2cpp_icall_func(__this, ___id0);
}
// System.Void UnityEngine.Animator::ResetTriggerString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_ResetTriggerString_m31B233F948D7551D220FEDA56B002E6724B89851 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, const RuntimeMethod* method)
{
	typedef void (*Animator_ResetTriggerString_m31B233F948D7551D220FEDA56B002E6724B89851_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, String_t*);
	static Animator_ResetTriggerString_m31B233F948D7551D220FEDA56B002E6724B89851_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_ResetTriggerString_m31B233F948D7551D220FEDA56B002E6724B89851_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::ResetTriggerString(System.String)");
	_il2cpp_icall_func(__this, ___name0);
}
// System.Void UnityEngine.Animator::SetFloatStringDamp(System.String,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloatStringDamp_m2DFC0ED89DB0DBF202DF6A1A20D6A91CA6C20B70 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, float ___value1, float ___dampTime2, float ___deltaTime3, const RuntimeMethod* method)
{
	typedef void (*Animator_SetFloatStringDamp_m2DFC0ED89DB0DBF202DF6A1A20D6A91CA6C20B70_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, String_t*, float, float, float);
	static Animator_SetFloatStringDamp_m2DFC0ED89DB0DBF202DF6A1A20D6A91CA6C20B70_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetFloatStringDamp_m2DFC0ED89DB0DBF202DF6A1A20D6A91CA6C20B70_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetFloatStringDamp(System.String,System.Single,System.Single,System.Single)");
	_il2cpp_icall_func(__this, ___name0, ___value1, ___dampTime2, ___deltaTime3);
}
// System.Boolean UnityEngine.Animator::get_logWarnings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_get_logWarnings_mE755494196C56C22909C97125F48EC6A7CFED617 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	typedef bool (*Animator_get_logWarnings_mE755494196C56C22909C97125F48EC6A7CFED617_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *);
	static Animator_get_logWarnings_mE755494196C56C22909C97125F48EC6A7CFED617_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_logWarnings_mE755494196C56C22909C97125F48EC6A7CFED617_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_logWarnings()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Animator::get_deltaPosition_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_get_deltaPosition_Injected_mB3C1937C55150A4E113BB2D8D6FEC323268C7BBA (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___ret0, const RuntimeMethod* method)
{
	typedef void (*Animator_get_deltaPosition_Injected_mB3C1937C55150A4E113BB2D8D6FEC323268C7BBA_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *);
	static Animator_get_deltaPosition_Injected_mB3C1937C55150A4E113BB2D8D6FEC323268C7BBA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_deltaPosition_Injected_mB3C1937C55150A4E113BB2D8D6FEC323268C7BBA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_deltaPosition_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Void UnityEngine.Animator::SetGoalPosition_Injected(UnityEngine.AvatarIKGoal,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetGoalPosition_Injected_m3FCA5A1E8B603902FDEC306CF4324BC4551D3737 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___goal0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___goalPosition1, const RuntimeMethod* method)
{
	typedef void (*Animator_SetGoalPosition_Injected_m3FCA5A1E8B603902FDEC306CF4324BC4551D3737_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *);
	static Animator_SetGoalPosition_Injected_m3FCA5A1E8B603902FDEC306CF4324BC4551D3737_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetGoalPosition_Injected_m3FCA5A1E8B603902FDEC306CF4324BC4551D3737_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetGoalPosition_Injected(UnityEngine.AvatarIKGoal,UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___goal0, ___goalPosition1);
}
// System.Void UnityEngine.Animator::GetGoalRotation_Injected(UnityEngine.AvatarIKGoal,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_GetGoalRotation_Injected_m4011F9579BE99CDC1BEBAF4280EB5F5472A109DC (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___goal0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___ret1, const RuntimeMethod* method)
{
	typedef void (*Animator_GetGoalRotation_Injected_m4011F9579BE99CDC1BEBAF4280EB5F5472A109DC_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *);
	static Animator_GetGoalRotation_Injected_m4011F9579BE99CDC1BEBAF4280EB5F5472A109DC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetGoalRotation_Injected_m4011F9579BE99CDC1BEBAF4280EB5F5472A109DC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetGoalRotation_Injected(UnityEngine.AvatarIKGoal,UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___goal0, ___ret1);
}
// System.Void UnityEngine.Animator::SetGoalRotation_Injected(UnityEngine.AvatarIKGoal,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetGoalRotation_Injected_m37692B68D8CC4D92559553F9AAE52D714C4699A9 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___goal0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___goalRotation1, const RuntimeMethod* method)
{
	typedef void (*Animator_SetGoalRotation_Injected_m37692B68D8CC4D92559553F9AAE52D714C4699A9_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *);
	static Animator_SetGoalRotation_Injected_m37692B68D8CC4D92559553F9AAE52D714C4699A9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetGoalRotation_Injected_m37692B68D8CC4D92559553F9AAE52D714C4699A9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetGoalRotation_Injected(UnityEngine.AvatarIKGoal,UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___goal0, ___goalRotation1);
}
// System.Void UnityEngine.Animator::SetLookAtPositionInternal_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetLookAtPositionInternal_Injected_mE43763E88F5BEA74AE47D478B1137A48090A38DB (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___lookAtPosition0, const RuntimeMethod* method)
{
	typedef void (*Animator_SetLookAtPositionInternal_Injected_mE43763E88F5BEA74AE47D478B1137A48090A38DB_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *);
	static Animator_SetLookAtPositionInternal_Injected_mE43763E88F5BEA74AE47D478B1137A48090A38DB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetLookAtPositionInternal_Injected_mE43763E88F5BEA74AE47D478B1137A48090A38DB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetLookAtPositionInternal_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___lookAtPosition0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single UnityEngine.AnimatorClipInfo::get_weight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimatorClipInfo_get_weight_m1A1275CE522B4691DA88D618E1C40E57074795C6 (AnimatorClipInfo_t78457ABBA83D388EDFF26F436F5E61A29CF4E180 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_m_Weight_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  float AnimatorClipInfo_get_weight_m1A1275CE522B4691DA88D618E1C40E57074795C6_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimatorClipInfo_t78457ABBA83D388EDFF26F436F5E61A29CF4E180 * _thisAdjusted = reinterpret_cast<AnimatorClipInfo_t78457ABBA83D388EDFF26F436F5E61A29CF4E180 *>(__this + _offset);
	return AnimatorClipInfo_get_weight_m1A1275CE522B4691DA88D618E1C40E57074795C6(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.AnimatorControllerParameter
IL2CPP_EXTERN_C void AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68_marshal_pinvoke(const AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68& unmarshaled, AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Name_0 = il2cpp_codegen_marshal_string(unmarshaled.get_m_Name_0());
	marshaled.___m_Type_1 = unmarshaled.get_m_Type_1();
	marshaled.___m_DefaultFloat_2 = unmarshaled.get_m_DefaultFloat_2();
	marshaled.___m_DefaultInt_3 = unmarshaled.get_m_DefaultInt_3();
	marshaled.___m_DefaultBool_4 = static_cast<int32_t>(unmarshaled.get_m_DefaultBool_4());
}
IL2CPP_EXTERN_C void AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68_marshal_pinvoke_back(const AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68_marshaled_pinvoke& marshaled, AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68& unmarshaled)
{
	unmarshaled.set_m_Name_0(il2cpp_codegen_marshal_string_result(marshaled.___m_Name_0));
	int32_t unmarshaled_m_Type_temp_1 = 0;
	unmarshaled_m_Type_temp_1 = marshaled.___m_Type_1;
	unmarshaled.set_m_Type_1(unmarshaled_m_Type_temp_1);
	float unmarshaled_m_DefaultFloat_temp_2 = 0.0f;
	unmarshaled_m_DefaultFloat_temp_2 = marshaled.___m_DefaultFloat_2;
	unmarshaled.set_m_DefaultFloat_2(unmarshaled_m_DefaultFloat_temp_2);
	int32_t unmarshaled_m_DefaultInt_temp_3 = 0;
	unmarshaled_m_DefaultInt_temp_3 = marshaled.___m_DefaultInt_3;
	unmarshaled.set_m_DefaultInt_3(unmarshaled_m_DefaultInt_temp_3);
	bool unmarshaled_m_DefaultBool_temp_4 = false;
	unmarshaled_m_DefaultBool_temp_4 = static_cast<bool>(marshaled.___m_DefaultBool_4);
	unmarshaled.set_m_DefaultBool_4(unmarshaled_m_DefaultBool_temp_4);
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimatorControllerParameter
IL2CPP_EXTERN_C void AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68_marshal_pinvoke_cleanup(AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_Name_0);
	marshaled.___m_Name_0 = NULL;
}
// Conversion methods for marshalling of: UnityEngine.AnimatorControllerParameter
IL2CPP_EXTERN_C void AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68_marshal_com(const AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68& unmarshaled, AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68_marshaled_com& marshaled)
{
	marshaled.___m_Name_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_m_Name_0());
	marshaled.___m_Type_1 = unmarshaled.get_m_Type_1();
	marshaled.___m_DefaultFloat_2 = unmarshaled.get_m_DefaultFloat_2();
	marshaled.___m_DefaultInt_3 = unmarshaled.get_m_DefaultInt_3();
	marshaled.___m_DefaultBool_4 = static_cast<int32_t>(unmarshaled.get_m_DefaultBool_4());
}
IL2CPP_EXTERN_C void AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68_marshal_com_back(const AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68_marshaled_com& marshaled, AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68& unmarshaled)
{
	unmarshaled.set_m_Name_0(il2cpp_codegen_marshal_bstring_result(marshaled.___m_Name_0));
	int32_t unmarshaled_m_Type_temp_1 = 0;
	unmarshaled_m_Type_temp_1 = marshaled.___m_Type_1;
	unmarshaled.set_m_Type_1(unmarshaled_m_Type_temp_1);
	float unmarshaled_m_DefaultFloat_temp_2 = 0.0f;
	unmarshaled_m_DefaultFloat_temp_2 = marshaled.___m_DefaultFloat_2;
	unmarshaled.set_m_DefaultFloat_2(unmarshaled_m_DefaultFloat_temp_2);
	int32_t unmarshaled_m_DefaultInt_temp_3 = 0;
	unmarshaled_m_DefaultInt_temp_3 = marshaled.___m_DefaultInt_3;
	unmarshaled.set_m_DefaultInt_3(unmarshaled_m_DefaultInt_temp_3);
	bool unmarshaled_m_DefaultBool_temp_4 = false;
	unmarshaled_m_DefaultBool_temp_4 = static_cast<bool>(marshaled.___m_DefaultBool_4);
	unmarshaled.set_m_DefaultBool_4(unmarshaled_m_DefaultBool_temp_4);
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimatorControllerParameter
IL2CPP_EXTERN_C void AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68_marshal_com_cleanup(AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___m_Name_0);
	marshaled.___m_Name_0 = NULL;
}
// System.String UnityEngine.AnimatorControllerParameter::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AnimatorControllerParameter_get_name_mBC6037CF46E647026CF3AD51E76B4003A181EB60 (AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_Name_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.AnimatorControllerParameter::get_nameHash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimatorControllerParameter_get_nameHash_m1C54FD6635D2D92654118A59C11BE52D06903FF1 (AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		String_t* L_0 = __this->get_m_Name_0();
		int32_t L_1 = Animator_StringToHash_m80E4CCCB84AAD032A5D84EF5832B7F35C1E5AE3F(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.AnimatorControllerParameter::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimatorControllerParameter_Equals_m71402007E47A2C82599B74BE7E95476B89838682 (AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68 * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimatorControllerParameter_Equals_m71402007E47A2C82599B74BE7E95476B89838682_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68 * V_0 = NULL;
	bool V_1 = false;
	int32_t G_B7_0 = 0;
	{
		RuntimeObject * L_0 = ___o0;
		V_0 = ((AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68 *)IsInstClass((RuntimeObject*)L_0, AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68_il2cpp_TypeInfo_var));
		AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0058;
		}
	}
	{
		String_t* L_2 = __this->get_m_Name_0();
		AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68 * L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4 = L_3->get_m_Name_0();
		bool L_5 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_2, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_6 = __this->get_m_Type_1();
		AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68 * L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = L_7->get_m_Type_1();
		if ((!(((uint32_t)L_6) == ((uint32_t)L_8))))
		{
			goto IL_0058;
		}
	}
	{
		float L_9 = __this->get_m_DefaultFloat_2();
		AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68 * L_10 = V_0;
		NullCheck(L_10);
		float L_11 = L_10->get_m_DefaultFloat_2();
		if ((!(((float)L_9) == ((float)L_11))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_12 = __this->get_m_DefaultInt_3();
		AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68 * L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = L_13->get_m_DefaultInt_3();
		if ((!(((uint32_t)L_12) == ((uint32_t)L_14))))
		{
			goto IL_0058;
		}
	}
	{
		bool L_15 = __this->get_m_DefaultBool_4();
		AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68 * L_16 = V_0;
		NullCheck(L_16);
		bool L_17 = L_16->get_m_DefaultBool_4();
		G_B7_0 = ((((int32_t)L_15) == ((int32_t)L_17))? 1 : 0);
		goto IL_0059;
	}

IL_0058:
	{
		G_B7_0 = 0;
	}

IL_0059:
	{
		V_1 = (bool)G_B7_0;
		goto IL_005c;
	}

IL_005c:
	{
		bool L_18 = V_1;
		return L_18;
	}
}
// System.Int32 UnityEngine.AnimatorControllerParameter::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimatorControllerParameter_GetHashCode_mF9447E55008C5B10243C7D0D81376BFC2CAA1730 (AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		String_t* L_0 = AnimatorControllerParameter_get_name_mBC6037CF46E647026CF3AD51E76B4003A181EB60(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.AnimatorControllerParameter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorControllerParameter__ctor_mCCC1C8C5E13550B5745B4F10D0FCF6F948517797 (AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimatorControllerParameter__ctor_mCCC1C8C5E13550B5745B4F10D0FCF6F948517797_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_m_Name_0(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.AnimatorOverrideController::OnInvalidateOverrideController(UnityEngine.AnimatorOverrideController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorOverrideController_OnInvalidateOverrideController_mA538F1349FCF3968C5042F2D8860114F51818CB2 (AnimatorOverrideController_t130F04B57E753FD4288EF3235699ABE7C88FF312 * ___controller0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		AnimatorOverrideController_t130F04B57E753FD4288EF3235699ABE7C88FF312 * L_0 = ___controller0;
		NullCheck(L_0);
		OnOverrideControllerDirtyCallback_t73560E6E30067C09BC58A15F9D2726051B077E2E * L_1 = L_0->get_OnOverrideControllerDirty_4();
		V_0 = (bool)((!(((RuntimeObject*)(OnOverrideControllerDirtyCallback_t73560E6E30067C09BC58A15F9D2726051B077E2E *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		AnimatorOverrideController_t130F04B57E753FD4288EF3235699ABE7C88FF312 * L_3 = ___controller0;
		NullCheck(L_3);
		OnOverrideControllerDirtyCallback_t73560E6E30067C09BC58A15F9D2726051B077E2E * L_4 = L_3->get_OnOverrideControllerDirty_4();
		NullCheck(L_4);
		OnOverrideControllerDirtyCallback_Invoke_m002CFC2CE3C42A058380BE98F015E654D5F9F177(L_4, /*hidden argument*/NULL);
	}

IL_001a:
	{
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnOverrideControllerDirtyCallback_t73560E6E30067C09BC58A15F9D2726051B077E2E (OnOverrideControllerDirtyCallback_t73560E6E30067C09BC58A15F9D2726051B077E2E * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.AnimatorOverrideController_OnOverrideControllerDirtyCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnOverrideControllerDirtyCallback__ctor_m9277DED194C85B1C3B4C7ABBB1D54CCB43C724D8 (OnOverrideControllerDirtyCallback_t73560E6E30067C09BC58A15F9D2726051B077E2E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.AnimatorOverrideController_OnOverrideControllerDirtyCallback::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnOverrideControllerDirtyCallback_Invoke_m002CFC2CE3C42A058380BE98F015E654D5F9F177 (OnOverrideControllerDirtyCallback_t73560E6E30067C09BC58A15F9D2726051B077E2E * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.AnimatorOverrideController_OnOverrideControllerDirtyCallback::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnOverrideControllerDirtyCallback_BeginInvoke_m35CE43BF7D40E88192183CF666F2BB7EFE8C6F9D (OnOverrideControllerDirtyCallback_t73560E6E30067C09BC58A15F9D2726051B077E2E * __this, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void UnityEngine.AnimatorOverrideController_OnOverrideControllerDirtyCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnOverrideControllerDirtyCallback_EndInvoke_m39CFD9FD2CC3035CFF6809F56447932B1394C08E (OnOverrideControllerDirtyCallback_t73560E6E30067C09BC58A15F9D2726051B077E2E * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.AnimatorTransitionInfo
IL2CPP_EXTERN_C void AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B_marshal_pinvoke(const AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B& unmarshaled, AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B_marshaled_pinvoke& marshaled)
{
	marshaled.___m_FullPath_0 = unmarshaled.get_m_FullPath_0();
	marshaled.___m_UserName_1 = unmarshaled.get_m_UserName_1();
	marshaled.___m_Name_2 = unmarshaled.get_m_Name_2();
	marshaled.___m_HasFixedDuration_3 = static_cast<int32_t>(unmarshaled.get_m_HasFixedDuration_3());
	marshaled.___m_Duration_4 = unmarshaled.get_m_Duration_4();
	marshaled.___m_NormalizedTime_5 = unmarshaled.get_m_NormalizedTime_5();
	marshaled.___m_AnyState_6 = static_cast<int32_t>(unmarshaled.get_m_AnyState_6());
	marshaled.___m_TransitionType_7 = unmarshaled.get_m_TransitionType_7();
}
IL2CPP_EXTERN_C void AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B_marshal_pinvoke_back(const AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B_marshaled_pinvoke& marshaled, AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B& unmarshaled)
{
	int32_t unmarshaled_m_FullPath_temp_0 = 0;
	unmarshaled_m_FullPath_temp_0 = marshaled.___m_FullPath_0;
	unmarshaled.set_m_FullPath_0(unmarshaled_m_FullPath_temp_0);
	int32_t unmarshaled_m_UserName_temp_1 = 0;
	unmarshaled_m_UserName_temp_1 = marshaled.___m_UserName_1;
	unmarshaled.set_m_UserName_1(unmarshaled_m_UserName_temp_1);
	int32_t unmarshaled_m_Name_temp_2 = 0;
	unmarshaled_m_Name_temp_2 = marshaled.___m_Name_2;
	unmarshaled.set_m_Name_2(unmarshaled_m_Name_temp_2);
	bool unmarshaled_m_HasFixedDuration_temp_3 = false;
	unmarshaled_m_HasFixedDuration_temp_3 = static_cast<bool>(marshaled.___m_HasFixedDuration_3);
	unmarshaled.set_m_HasFixedDuration_3(unmarshaled_m_HasFixedDuration_temp_3);
	float unmarshaled_m_Duration_temp_4 = 0.0f;
	unmarshaled_m_Duration_temp_4 = marshaled.___m_Duration_4;
	unmarshaled.set_m_Duration_4(unmarshaled_m_Duration_temp_4);
	float unmarshaled_m_NormalizedTime_temp_5 = 0.0f;
	unmarshaled_m_NormalizedTime_temp_5 = marshaled.___m_NormalizedTime_5;
	unmarshaled.set_m_NormalizedTime_5(unmarshaled_m_NormalizedTime_temp_5);
	bool unmarshaled_m_AnyState_temp_6 = false;
	unmarshaled_m_AnyState_temp_6 = static_cast<bool>(marshaled.___m_AnyState_6);
	unmarshaled.set_m_AnyState_6(unmarshaled_m_AnyState_temp_6);
	int32_t unmarshaled_m_TransitionType_temp_7 = 0;
	unmarshaled_m_TransitionType_temp_7 = marshaled.___m_TransitionType_7;
	unmarshaled.set_m_TransitionType_7(unmarshaled_m_TransitionType_temp_7);
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimatorTransitionInfo
IL2CPP_EXTERN_C void AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B_marshal_pinvoke_cleanup(AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.AnimatorTransitionInfo
IL2CPP_EXTERN_C void AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B_marshal_com(const AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B& unmarshaled, AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B_marshaled_com& marshaled)
{
	marshaled.___m_FullPath_0 = unmarshaled.get_m_FullPath_0();
	marshaled.___m_UserName_1 = unmarshaled.get_m_UserName_1();
	marshaled.___m_Name_2 = unmarshaled.get_m_Name_2();
	marshaled.___m_HasFixedDuration_3 = static_cast<int32_t>(unmarshaled.get_m_HasFixedDuration_3());
	marshaled.___m_Duration_4 = unmarshaled.get_m_Duration_4();
	marshaled.___m_NormalizedTime_5 = unmarshaled.get_m_NormalizedTime_5();
	marshaled.___m_AnyState_6 = static_cast<int32_t>(unmarshaled.get_m_AnyState_6());
	marshaled.___m_TransitionType_7 = unmarshaled.get_m_TransitionType_7();
}
IL2CPP_EXTERN_C void AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B_marshal_com_back(const AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B_marshaled_com& marshaled, AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B& unmarshaled)
{
	int32_t unmarshaled_m_FullPath_temp_0 = 0;
	unmarshaled_m_FullPath_temp_0 = marshaled.___m_FullPath_0;
	unmarshaled.set_m_FullPath_0(unmarshaled_m_FullPath_temp_0);
	int32_t unmarshaled_m_UserName_temp_1 = 0;
	unmarshaled_m_UserName_temp_1 = marshaled.___m_UserName_1;
	unmarshaled.set_m_UserName_1(unmarshaled_m_UserName_temp_1);
	int32_t unmarshaled_m_Name_temp_2 = 0;
	unmarshaled_m_Name_temp_2 = marshaled.___m_Name_2;
	unmarshaled.set_m_Name_2(unmarshaled_m_Name_temp_2);
	bool unmarshaled_m_HasFixedDuration_temp_3 = false;
	unmarshaled_m_HasFixedDuration_temp_3 = static_cast<bool>(marshaled.___m_HasFixedDuration_3);
	unmarshaled.set_m_HasFixedDuration_3(unmarshaled_m_HasFixedDuration_temp_3);
	float unmarshaled_m_Duration_temp_4 = 0.0f;
	unmarshaled_m_Duration_temp_4 = marshaled.___m_Duration_4;
	unmarshaled.set_m_Duration_4(unmarshaled_m_Duration_temp_4);
	float unmarshaled_m_NormalizedTime_temp_5 = 0.0f;
	unmarshaled_m_NormalizedTime_temp_5 = marshaled.___m_NormalizedTime_5;
	unmarshaled.set_m_NormalizedTime_5(unmarshaled_m_NormalizedTime_temp_5);
	bool unmarshaled_m_AnyState_temp_6 = false;
	unmarshaled_m_AnyState_temp_6 = static_cast<bool>(marshaled.___m_AnyState_6);
	unmarshaled.set_m_AnyState_6(unmarshaled_m_AnyState_temp_6);
	int32_t unmarshaled_m_TransitionType_temp_7 = 0;
	unmarshaled_m_TransitionType_temp_7 = marshaled.___m_TransitionType_7;
	unmarshaled.set_m_TransitionType_7(unmarshaled_m_TransitionType_temp_7);
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimatorTransitionInfo
IL2CPP_EXTERN_C void AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B_marshal_com_cleanup(AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.HumanBone
IL2CPP_EXTERN_C void HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_marshal_pinvoke(const HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995& unmarshaled, HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_marshaled_pinvoke& marshaled)
{
	marshaled.___m_BoneName_0 = il2cpp_codegen_marshal_string(unmarshaled.get_m_BoneName_0());
	marshaled.___m_HumanName_1 = il2cpp_codegen_marshal_string(unmarshaled.get_m_HumanName_1());
	marshaled.___limit_2 = unmarshaled.get_limit_2();
}
IL2CPP_EXTERN_C void HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_marshal_pinvoke_back(const HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_marshaled_pinvoke& marshaled, HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995& unmarshaled)
{
	unmarshaled.set_m_BoneName_0(il2cpp_codegen_marshal_string_result(marshaled.___m_BoneName_0));
	unmarshaled.set_m_HumanName_1(il2cpp_codegen_marshal_string_result(marshaled.___m_HumanName_1));
	HumanLimit_t6AB2A599FC9E1F7E1598954FA9A0E568ECA5B6F3  unmarshaled_limit_temp_2;
	memset((&unmarshaled_limit_temp_2), 0, sizeof(unmarshaled_limit_temp_2));
	unmarshaled_limit_temp_2 = marshaled.___limit_2;
	unmarshaled.set_limit_2(unmarshaled_limit_temp_2);
}
// Conversion method for clean up from marshalling of: UnityEngine.HumanBone
IL2CPP_EXTERN_C void HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_marshal_pinvoke_cleanup(HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_BoneName_0);
	marshaled.___m_BoneName_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___m_HumanName_1);
	marshaled.___m_HumanName_1 = NULL;
}
// Conversion methods for marshalling of: UnityEngine.HumanBone
IL2CPP_EXTERN_C void HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_marshal_com(const HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995& unmarshaled, HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_marshaled_com& marshaled)
{
	marshaled.___m_BoneName_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_m_BoneName_0());
	marshaled.___m_HumanName_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_m_HumanName_1());
	marshaled.___limit_2 = unmarshaled.get_limit_2();
}
IL2CPP_EXTERN_C void HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_marshal_com_back(const HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_marshaled_com& marshaled, HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995& unmarshaled)
{
	unmarshaled.set_m_BoneName_0(il2cpp_codegen_marshal_bstring_result(marshaled.___m_BoneName_0));
	unmarshaled.set_m_HumanName_1(il2cpp_codegen_marshal_bstring_result(marshaled.___m_HumanName_1));
	HumanLimit_t6AB2A599FC9E1F7E1598954FA9A0E568ECA5B6F3  unmarshaled_limit_temp_2;
	memset((&unmarshaled_limit_temp_2), 0, sizeof(unmarshaled_limit_temp_2));
	unmarshaled_limit_temp_2 = marshaled.___limit_2;
	unmarshaled.set_limit_2(unmarshaled_limit_temp_2);
}
// Conversion method for clean up from marshalling of: UnityEngine.HumanBone
IL2CPP_EXTERN_C void HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_marshal_com_cleanup(HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___m_BoneName_0);
	marshaled.___m_BoneName_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___m_HumanName_1);
	marshaled.___m_HumanName_1 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 UnityEngine.HumanTrait::GetBoneIndexFromMono(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HumanTrait_GetBoneIndexFromMono_mEE030DE71CE19611BB3CC881799CCF3828D0928E (int32_t ___humanId0, const RuntimeMethod* method)
{
	typedef int32_t (*HumanTrait_GetBoneIndexFromMono_mEE030DE71CE19611BB3CC881799CCF3828D0928E_ftn) (int32_t);
	static HumanTrait_GetBoneIndexFromMono_mEE030DE71CE19611BB3CC881799CCF3828D0928E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (HumanTrait_GetBoneIndexFromMono_mEE030DE71CE19611BB3CC881799CCF3828D0928E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.HumanTrait::GetBoneIndexFromMono(System.Int32)");
	int32_t retVal = _il2cpp_icall_func(___humanId0);
	return retVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Motion::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Motion__ctor_mAED8097767A0FD4F3B5A8E687D569E33DB6F8443 (Motion_t497BF9244B6A769D1AE925C3876B187C56C8CF8F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Motion__ctor_mAED8097767A0FD4F3B5A8E687D569E33DB6F8443_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object__ctor_m091EBAEBC7919B0391ABDAFB7389ADC12206525B(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Motion::get_isLooping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Motion_get_isLooping_mB77B08AB685FDA9B73DAFFC9CA364A0087ACBBE2 (Motion_t497BF9244B6A769D1AE925C3876B187C56C8CF8F * __this, const RuntimeMethod* method)
{
	typedef bool (*Motion_get_isLooping_mB77B08AB685FDA9B73DAFFC9CA364A0087ACBBE2_ftn) (Motion_t497BF9244B6A769D1AE925C3876B187C56C8CF8F *);
	static Motion_get_isLooping_mB77B08AB685FDA9B73DAFFC9CA364A0087ACBBE2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Motion_get_isLooping_mB77B08AB685FDA9B73DAFFC9CA364A0087ACBBE2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Motion::get_isLooping()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.RuntimeAnimatorController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeAnimatorController__ctor_mF55B0DDD5700D725CD4E59521E5A16BD774ABC32 (RuntimeAnimatorController_tDA6672C8194522C2F60F8F2F241657E57C3520BD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RuntimeAnimatorController__ctor_mF55B0DDD5700D725CD4E59521E5A16BD774ABC32_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object__ctor_m091EBAEBC7919B0391ABDAFB7389ADC12206525B(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.AnimationClip[] UnityEngine.RuntimeAnimatorController::get_animationClips()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationClipU5BU5D_t26BCE82D4E5CBA43CAD83905725B4D6D500B3E36* RuntimeAnimatorController_get_animationClips_mDD7156EB54EF5141D36C686A5C73FAD7DB465AE7 (RuntimeAnimatorController_tDA6672C8194522C2F60F8F2F241657E57C3520BD * __this, const RuntimeMethod* method)
{
	typedef AnimationClipU5BU5D_t26BCE82D4E5CBA43CAD83905725B4D6D500B3E36* (*RuntimeAnimatorController_get_animationClips_mDD7156EB54EF5141D36C686A5C73FAD7DB465AE7_ftn) (RuntimeAnimatorController_tDA6672C8194522C2F60F8F2F241657E57C3520BD *);
	static RuntimeAnimatorController_get_animationClips_mDD7156EB54EF5141D36C686A5C73FAD7DB465AE7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RuntimeAnimatorController_get_animationClips_mDD7156EB54EF5141D36C686A5C73FAD7DB465AE7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RuntimeAnimatorController::get_animationClips()");
	AnimationClipU5BU5D_t26BCE82D4E5CBA43CAD83905725B4D6D500B3E36* retVal = _il2cpp_icall_func(__this);
	return retVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.SkeletonBone
IL2CPP_EXTERN_C void SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5_marshal_pinvoke(const SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5& unmarshaled, SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5_marshaled_pinvoke& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_string(unmarshaled.get_name_0());
	marshaled.___parentName_1 = il2cpp_codegen_marshal_string(unmarshaled.get_parentName_1());
	marshaled.___position_2 = unmarshaled.get_position_2();
	marshaled.___rotation_3 = unmarshaled.get_rotation_3();
	marshaled.___scale_4 = unmarshaled.get_scale_4();
}
IL2CPP_EXTERN_C void SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5_marshal_pinvoke_back(const SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5_marshaled_pinvoke& marshaled, SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5& unmarshaled)
{
	unmarshaled.set_name_0(il2cpp_codegen_marshal_string_result(marshaled.___name_0));
	unmarshaled.set_parentName_1(il2cpp_codegen_marshal_string_result(marshaled.___parentName_1));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  unmarshaled_position_temp_2;
	memset((&unmarshaled_position_temp_2), 0, sizeof(unmarshaled_position_temp_2));
	unmarshaled_position_temp_2 = marshaled.___position_2;
	unmarshaled.set_position_2(unmarshaled_position_temp_2);
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  unmarshaled_rotation_temp_3;
	memset((&unmarshaled_rotation_temp_3), 0, sizeof(unmarshaled_rotation_temp_3));
	unmarshaled_rotation_temp_3 = marshaled.___rotation_3;
	unmarshaled.set_rotation_3(unmarshaled_rotation_temp_3);
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  unmarshaled_scale_temp_4;
	memset((&unmarshaled_scale_temp_4), 0, sizeof(unmarshaled_scale_temp_4));
	unmarshaled_scale_temp_4 = marshaled.___scale_4;
	unmarshaled.set_scale_4(unmarshaled_scale_temp_4);
}
// Conversion method for clean up from marshalling of: UnityEngine.SkeletonBone
IL2CPP_EXTERN_C void SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5_marshal_pinvoke_cleanup(SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___name_0);
	marshaled.___name_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___parentName_1);
	marshaled.___parentName_1 = NULL;
}
// Conversion methods for marshalling of: UnityEngine.SkeletonBone
IL2CPP_EXTERN_C void SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5_marshal_com(const SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5& unmarshaled, SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5_marshaled_com& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_name_0());
	marshaled.___parentName_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_parentName_1());
	marshaled.___position_2 = unmarshaled.get_position_2();
	marshaled.___rotation_3 = unmarshaled.get_rotation_3();
	marshaled.___scale_4 = unmarshaled.get_scale_4();
}
IL2CPP_EXTERN_C void SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5_marshal_com_back(const SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5_marshaled_com& marshaled, SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5& unmarshaled)
{
	unmarshaled.set_name_0(il2cpp_codegen_marshal_bstring_result(marshaled.___name_0));
	unmarshaled.set_parentName_1(il2cpp_codegen_marshal_bstring_result(marshaled.___parentName_1));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  unmarshaled_position_temp_2;
	memset((&unmarshaled_position_temp_2), 0, sizeof(unmarshaled_position_temp_2));
	unmarshaled_position_temp_2 = marshaled.___position_2;
	unmarshaled.set_position_2(unmarshaled_position_temp_2);
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  unmarshaled_rotation_temp_3;
	memset((&unmarshaled_rotation_temp_3), 0, sizeof(unmarshaled_rotation_temp_3));
	unmarshaled_rotation_temp_3 = marshaled.___rotation_3;
	unmarshaled.set_rotation_3(unmarshaled_rotation_temp_3);
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  unmarshaled_scale_temp_4;
	memset((&unmarshaled_scale_temp_4), 0, sizeof(unmarshaled_scale_temp_4));
	unmarshaled_scale_temp_4 = marshaled.___scale_4;
	unmarshaled.set_scale_4(unmarshaled_scale_temp_4);
}
// Conversion method for clean up from marshalling of: UnityEngine.SkeletonBone
IL2CPP_EXTERN_C void SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5_marshal_com_cleanup(SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___name_0);
	marshaled.___name_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___parentName_1);
	marshaled.___parentName_1 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.StateMachineBehaviour::OnStateEnter(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateEnter_mAB25325C96611ADDF93038EC6792EC4F76AEF4EE (StateMachineBehaviour_t698612ED92024B087045C388731B7673550C786C * __this, Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___animator0, AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2  ___stateInfo1, int32_t ___layerIndex2, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateUpdate(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateUpdate_mE12079F72B209DDFFAB4088B2B210EA20C2C4266 (StateMachineBehaviour_t698612ED92024B087045C388731B7673550C786C * __this, Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___animator0, AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2  ___stateInfo1, int32_t ___layerIndex2, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateExit(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateExit_m83F9656CE5265BD15F3B5D1AB91411A211922730 (StateMachineBehaviour_t698612ED92024B087045C388731B7673550C786C * __this, Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___animator0, AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2  ___stateInfo1, int32_t ___layerIndex2, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMove(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateMove_mAE38B3B50B0A495AF30E6711F52381668B63DAA2 (StateMachineBehaviour_t698612ED92024B087045C388731B7673550C786C * __this, Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___animator0, AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2  ___stateInfo1, int32_t ___layerIndex2, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateIK(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateIK_mB977958BB73727EF2F721BB449DFEA781529785B (StateMachineBehaviour_t698612ED92024B087045C388731B7673550C786C * __this, Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___animator0, AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2  ___stateInfo1, int32_t ___layerIndex2, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineEnter(UnityEngine.Animator,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateMachineEnter_m5497D76EAE53BEF94431E3C1AAD0B58B89E745C7 (StateMachineBehaviour_t698612ED92024B087045C388731B7673550C786C * __this, Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___animator0, int32_t ___stateMachinePathHash1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineExit(UnityEngine.Animator,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateMachineExit_m8A0744B8E90157AE466269DF324C44BFCBB47FF3 (StateMachineBehaviour_t698612ED92024B087045C388731B7673550C786C * __this, Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___animator0, int32_t ___stateMachinePathHash1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateEnter(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32,UnityEngine.Animations.AnimatorControllerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateEnter_mAAD23D49A3F84438928677D2FA3F8E26CFDE2522 (StateMachineBehaviour_t698612ED92024B087045C388731B7673550C786C * __this, Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___animator0, AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2  ___stateInfo1, int32_t ___layerIndex2, AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B  ___controller3, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateUpdate(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32,UnityEngine.Animations.AnimatorControllerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateUpdate_mF1E4E77449D427AE5DDD68FD8EECCAD1E54E1EE9 (StateMachineBehaviour_t698612ED92024B087045C388731B7673550C786C * __this, Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___animator0, AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2  ___stateInfo1, int32_t ___layerIndex2, AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B  ___controller3, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateExit(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32,UnityEngine.Animations.AnimatorControllerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateExit_m43A13AA682B9E86F6D2952338F47CE1B2BF9D4A7 (StateMachineBehaviour_t698612ED92024B087045C388731B7673550C786C * __this, Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___animator0, AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2  ___stateInfo1, int32_t ___layerIndex2, AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B  ___controller3, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMove(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32,UnityEngine.Animations.AnimatorControllerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateMove_mD8060C6C70456CDC4D678184723C05A7750846F3 (StateMachineBehaviour_t698612ED92024B087045C388731B7673550C786C * __this, Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___animator0, AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2  ___stateInfo1, int32_t ___layerIndex2, AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B  ___controller3, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateIK(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32,UnityEngine.Animations.AnimatorControllerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateIK_m09D6AC0300060ACF7B82283AD947E9A260585576 (StateMachineBehaviour_t698612ED92024B087045C388731B7673550C786C * __this, Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___animator0, AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2  ___stateInfo1, int32_t ___layerIndex2, AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B  ___controller3, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineEnter(UnityEngine.Animator,System.Int32,UnityEngine.Animations.AnimatorControllerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateMachineEnter_m6DE0F767D565EFC33361BA13A6DCC65AC89D3D07 (StateMachineBehaviour_t698612ED92024B087045C388731B7673550C786C * __this, Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___animator0, int32_t ___stateMachinePathHash1, AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B  ___controller2, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineExit(UnityEngine.Animator,System.Int32,UnityEngine.Animations.AnimatorControllerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateMachineExit_m01575716EA20F88A56C3CB778FACE2CBDA68EF26 (StateMachineBehaviour_t698612ED92024B087045C388731B7673550C786C * __this, Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___animator0, int32_t ___stateMachinePathHash1, AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B  ___controller2, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour__ctor_m60289315ADCB494227D881EEFA6C4458BACA79DB (StateMachineBehaviour_t698612ED92024B087045C388731B7673550C786C * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m6E2B3821A4A361556FC12E9B1C71E1D5DC002C5B(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
