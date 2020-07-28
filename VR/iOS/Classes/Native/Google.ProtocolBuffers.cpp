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
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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

// Google.ProtocolBuffers.ByteString
struct ByteString_t484699ED4C1CFF8928F9242C75BD5F6532CF768A;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t6FF414144C567C520A212C17587CA998689956E3;
// Google.ProtocolBuffers.CodedOutputStream/OutOfSpaceException
struct OutOfSpaceException_t6BC55F41676DE61CC27D6EE98E044FE5C4C7BE5E;
// Google.ProtocolBuffers.ExtensionRegistry
struct ExtensionRegistry_tAC8BBAEAD627B80DF852E93F941EF92FB4C8558E;
// Google.ProtocolBuffers.IBuilderLite
struct IBuilderLite_t567B86BEB7E50C9DF4668CA9B485FF9DD383A4A4;
// Google.ProtocolBuffers.IMessageLite
struct IMessageLite_tBFF4C3D45EE47902CE049D63AE119D373003C2A3;
// Google.ProtocolBuffers.InvalidProtocolBufferException
struct InvalidProtocolBufferException_t33420AA524353DDC202DCBD0462457CC2AA7B4F9;
// Google.ProtocolBuffers.UninitializedMessageException
struct UninitializedMessageException_t1339F5C8F06420A91D3E15FC76A28F1A077AE516;
// System.ArgumentNullException
struct ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t1DE3927D87FD236507BFE9CA7E3EEA348C53E0E1;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,Google.ProtocolBuffers.IGeneratedExtensionLite>[]
struct EntryU5BU5D_t6E40EF886E2FBF98AE86E7E8ECF89889BE2D2ADD;
// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Collections.Generic.Dictionary`2<System.String,Google.ProtocolBuffers.IGeneratedExtensionLite>>[]
struct EntryU5BU5D_t6C425514A8652110DDC620E3BE20CA6C338E5A56;
// System.Collections.Generic.Dictionary`2/KeyCollection<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,Google.ProtocolBuffers.IGeneratedExtensionLite>
struct KeyCollection_t2B491D14337AA01B42A63156164F8AE84A8566CE;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.Dictionary`2<System.String,Google.ProtocolBuffers.IGeneratedExtensionLite>>
struct KeyCollection_tA45B81E543CAAAC6992905BAF3E691B98AB0BE0D;
// System.Collections.Generic.Dictionary`2/ValueCollection<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,Google.ProtocolBuffers.IGeneratedExtensionLite>
struct ValueCollection_tDF89D883F0AA356D87FD1E2AB090313BF2EFE9E9;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.Dictionary`2<System.String,Google.ProtocolBuffers.IGeneratedExtensionLite>>
struct ValueCollection_t49AA1D4E25F66BF56E88D7AD2E42916493E1D3CE;
// System.Collections.Generic.Dictionary`2<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,Google.ProtocolBuffers.IGeneratedExtensionLite>
struct Dictionary_2_t36E2ECEC38081A5C8DF6DED6117C7CE5B2491886;
// System.Collections.Generic.Dictionary`2<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,System.Object>
struct Dictionary_2_t5D53CD85F2109E3D1CFF0CF3015A8488BE5B6124;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.Dictionary`2<System.String,Google.ProtocolBuffers.IGeneratedExtensionLite>>
struct Dictionary_2_t418F30137BF00E0E9EFF2A2DB75AB3A010190D9B;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t8EEF5939629F2AA669326F3F4C81829CA4FBD3F7;
// System.Collections.Generic.IEnumerable`1<System.Single>
struct IEnumerable_1_tC56022D901625310FABDB176D77FA45CA2305820;
// System.Collections.Generic.IEnumerator`1<System.Byte>
struct IEnumerator_1_t6DCEB6C737F808D588F4BD3631CEC7D7E538ED92;
// System.Collections.Generic.IEqualityComparer`1<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair>
struct IEqualityComparer_1_t030ADA62CD0C42B7D2B7F9852E606A2C1897EC9E;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_tAE7A8756D8CF0882DD348DC328FB36FEE0FB7DD0;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_tE956158CC01AC74DA6C955D715EF30E86AE7C79D;
// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_t4AB280456F4DE770AC993DE9A7C8C563A6311531;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Exception
struct Exception_t;
// System.Globalization.Calendar
struct Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5;
// System.Globalization.CompareInfo
struct CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1;
// System.Globalization.CultureData
struct CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD;
// System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8;
// System.Globalization.TextInfo
struct TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8;
// System.IO.IOException
struct IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA;
// System.IO.Stream
struct Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.InvalidOperationException
struct InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteString_t484699ED4C1CFF8928F9242C75BD5F6532CF768A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CodedOutputStream_t6FF414144C567C520A212C17587CA998689956E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t36E2ECEC38081A5C8DF6DED6117C7CE5B2491886_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t418F30137BF00E0E9EFF2A2DB75AB3A010190D9B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExtensionIntPair_tA731DCA4C288695BF78F3F71F1515142068CC5DB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExtensionRegistry_tAC8BBAEAD627B80DF852E93F941EF92FB4C8558E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FrameworkPortability_t267BF7312587491B107C4F014A1FB31FD1BD99BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBuilderLite_t567B86BEB7E50C9DF4668CA9B485FF9DD383A4A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t8EEF5939629F2AA669326F3F4C81829CA4FBD3F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t0BF26EB2CC417639047BF3EFA258F9AECB26A564_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tC56022D901625310FABDB176D77FA45CA2305820_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tCD0F5A8354BEF7A7CB31DB98044011359B3388AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMessageLite_tBFF4C3D45EE47902CE049D63AE119D373003C2A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Il2CppComObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidProtocolBufferException_t33420AA524353DDC202DCBD0462457CC2AA7B4F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t4AB280456F4DE770AC993DE9A7C8C563A6311531_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OutOfSpaceException_t6BC55F41676DE61CC27D6EE98E044FE5C4C7BE5E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral045057002662385DE9C811E66D0BDDE5B6CF3910;
IL2CPP_EXTERN_C String_t* _stringLiteral285F3B15EA8780938A07FE9D4F6E133AB89106E3;
IL2CPP_EXTERN_C String_t* _stringLiteral30133B6FF71F6DAF198B18008F412FB6BF53FE4B;
IL2CPP_EXTERN_C String_t* _stringLiteral39F9BE5FDE72EF40E0F01789CDC1C8AC80EC71E1;
IL2CPP_EXTERN_C String_t* _stringLiteral3B4A637C4FBF57CFE8397A9A7CE53C2752BEF51E;
IL2CPP_EXTERN_C String_t* _stringLiteral416A0755E111EE94DA7039C12357812212ACA6AC;
IL2CPP_EXTERN_C String_t* _stringLiteral68445AC719CEB240628DEFE2122D783E15A6272C;
IL2CPP_EXTERN_C String_t* _stringLiteral852B569DC2E0A0A57F15209CABF0EABF5648B748;
IL2CPP_EXTERN_C String_t* _stringLiteral9C6C0377962A8ADD66F28FBDAFB336E0746FC119;
IL2CPP_EXTERN_C String_t* _stringLiteralACEEF87BB04C3609A4B94E7CB5142DFB071EE6F6;
IL2CPP_EXTERN_C String_t* _stringLiteralC1938D47E5DDC4C0B390F55D0CAABBF7B2F31A7B;
IL2CPP_EXTERN_C String_t* _stringLiteralCF6A113CDBEF532EF55377D14E91EE33248BC5DC;
IL2CPP_EXTERN_C String_t* _stringLiteralE980AEDBE164B9AE86ECD01744E589611BF38881;
IL2CPP_EXTERN_C String_t* _stringLiteralEC85C56D556BB643A11CDCB7720612BE24EF4584;
IL2CPP_EXTERN_C const RuntimeMethod* CodedInputStream_CheckLastTagWas_m0DAA172667D4075A6914716396E1CDFF96CAF5A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CodedInputStream_PushLimit_m055A0982177C87205DA4AB870A4C0CF56AFE9C7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CodedInputStream_ReadMessage_m7DA8CB99856FBF06EB24656EF1C0634F1FDC2BA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CodedInputStream_ReadRawBytes_m60E3439632092B8C7EE2D22682B7F7DC672184CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CodedInputStream_ReadRawVarint32_m3D50095F615E35805EE5EFF1A95111BEE84A0F83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CodedInputStream_ReadRawVarint32_mEB99186B7A2BBACABCAEFB4579EBA9BB1DBA1265_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CodedInputStream_ReadRawVarint64_mDD7099D0590839AFA896E033EECD43E82B834071_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CodedInputStream_ReadTag_m23AD3CE9C1EA9C2A60CDF47055EFD90C8478A9F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CodedInputStream_RefillBuffer_mAFD4A09A9127023CB6024245B27394DC234C242F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CodedInputStream_SkipField_m8D83720F0C50B636EAA76C82C9993FABF8EBF907_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CodedInputStream_SkipImpl_m4CBC750F18077F37088AF8F8A28E664AB323DF88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CodedInputStream_SkipRawBytes_m8EC3B6FCCE8F72B0DA9DE76DDCE8964904676108_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CodedInputStream_SlowReadRawVarint32_m4BD0F8ACC2A9B6335AB0B17D19AFE65109DD63DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CodedOutputStream_CheckNoSpaceLeft_mC23977D42A81BA5E37063FD8117EC568D90B466B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CodedOutputStream_RefreshBuffer_m228716090B0D4D7716E2FA4E1EBFCE4061F65B0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CodedOutputStream_get_SpaceLeft_mADAF9D8D680791DD50C0ED974809FA602BD2BB8C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m6E310B3BE9BAB20C277774572444FC00E1BB76EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mEB4C29112CBC2CF1E636806831A9972B0BE0A5F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m8705DA716860C4D15AEC6B46F0A2A3CBBE0225E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mD3CC74979D47180FD9ECF7046BBE6D93E106FB1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m9D6CD526545E123E983BCA908194AA1E30833B0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mCC9D38BB3CBE3F2E67EDF3390D36ABFAD293468E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m84AFF0B8BC2B832C145F5252E1A2356E7CBEA664_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m52FC81AB50BD21B6BFA16546E3AF9C94611D9811_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_ThrowIfNull_m2E4DC9108B27449ACAAF01C5218B752EAD31AE59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowHelper_ThrowIfNull_mB8435B4F2F4DB53E02BD873006D61C1E9D826D0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t ByteString_Equals_m4DA87E7B49C2CEA07E21ACA2322430222A9C3163_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ByteString_GetEnumerator_mBC3C445EB21B657575B4BA250D0B3816561A4249_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ByteString__cctor_mB4E455AD3CC78C9C46FADB102DE08F78400AEEEF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CodedInputStream_CheckLastTagWas_m0DAA172667D4075A6914716396E1CDFF96CAF5A3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CodedInputStream_CreateInstance_mDCCBF7B8F327F1FDD334431F754FEF73841F3D85_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CodedInputStream_CreateInstance_mED0E557FA356ADBC18ED093E2D7BF13840CF0E44_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CodedInputStream_PushLimit_m055A0982177C87205DA4AB870A4C0CF56AFE9C7E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CodedInputStream_ReadFloatArray_mF36250455461A4B25D959E30D16B13AF600E384A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CodedInputStream_ReadFloat_mD9086AA478EBB9116119E886132EB77A34057BF7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CodedInputStream_ReadMessage_m7DA8CB99856FBF06EB24656EF1C0634F1FDC2BA5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CodedInputStream_ReadRawBytes_m60E3439632092B8C7EE2D22682B7F7DC672184CA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CodedInputStream_ReadRawVarint32_m3D50095F615E35805EE5EFF1A95111BEE84A0F83_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CodedInputStream_ReadRawVarint32_mEB99186B7A2BBACABCAEFB4579EBA9BB1DBA1265_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CodedInputStream_ReadRawVarint64_mDD7099D0590839AFA896E033EECD43E82B834071_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CodedInputStream_ReadTag_m23AD3CE9C1EA9C2A60CDF47055EFD90C8478A9F4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CodedInputStream_RefillBuffer_mAFD4A09A9127023CB6024245B27394DC234C242F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CodedInputStream_SkipField_m8D83720F0C50B636EAA76C82C9993FABF8EBF907_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CodedInputStream_SkipImpl_m4CBC750F18077F37088AF8F8A28E664AB323DF88_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CodedInputStream_SkipRawBytes_m8EC3B6FCCE8F72B0DA9DE76DDCE8964904676108_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CodedInputStream_SlowReadRawVarint32_m4BD0F8ACC2A9B6335AB0B17D19AFE65109DD63DC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CodedInputStream__ctor_m60B9F9B76FAA08808B1243A383E5E2CCCAFFC9F6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CodedOutputStream_CheckNoSpaceLeft_mC23977D42A81BA5E37063FD8117EC568D90B466B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CodedOutputStream_ComputeEnumSizeNoTag_mCB5B90A0B231A5802F44CFC5ADAEB1242F0553C5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CodedOutputStream_ComputeEnumSize_mE1251105EDCED82ABE3F9E4E3AA12EBD71949655_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CodedOutputStream_ComputeFloatSize_m590AFD0BAD36720168DBFB2EA91754E846F70BC7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CodedOutputStream_ComputeInt32SizeNoTag_m370909614401731E07D4DEACEF7488A38A30B01C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CodedOutputStream_ComputeInt32Size_m81AD208FD9D9AA6BEF44E7DED4F46FA8D6E3390B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CodedOutputStream_ComputeInt64Size_m469FA3555088F5F6436873B0B862B27DAC90A566_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CodedOutputStream_ComputeMessageSize_m8EB8C8EA0C467313A246817B90D1AD63BC4011C9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CodedOutputStream_ComputeTagSize_mE2C32E82317507B0C0E344AC0D218A8F6EA12CBE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CodedOutputStream_CreateInstance_m54CE3BE9AEF110DA1EA545A191E591367E7CA9A6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CodedOutputStream_CreateInstance_mB40511EA02D789AE51561B3B3A2A0F7A54CC1DD5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CodedOutputStream_RefreshBuffer_m228716090B0D4D7716E2FA4E1EBFCE4061F65B0A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CodedOutputStream_WriteFloatNoTag_m237A87522C5A2E3AF41EB69F7B0DF415F7A87B95_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CodedOutputStream_WriteMessage_m0D6B8F598C7EF8006829246B5894C874C4AA96FC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CodedOutputStream_WritePackedFloatArray_m831FBF27B71E42F6BF8949A3656ADF54E5201301_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CodedOutputStream__cctor_m04BA84AE430F59CB6222197FBEA2E27AD0099507_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CodedOutputStream_get_SpaceLeft_mADAF9D8D680791DD50C0ED974809FA602BD2BB8C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ExtensionIntPair_Equals_m224294E7F9245BCED0B0DD828A59F136212F97C4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ExtensionIntPair_tA731DCA4C288695BF78F3F71F1515142068CC5DB_com_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ExtensionIntPair_tA731DCA4C288695BF78F3F71F1515142068CC5DB_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ExtensionRegistry_CreateInstance_mBE28073ABF59242395C31E9DFAC9B7FEA784BCB7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ExtensionRegistry__cctor_mD36BBA297AACB67B5478C47FD5AFF2775B3CD987_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ExtensionRegistry_get_Empty_mC76700E7B42667A40F8433F271510D22D330BF29_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FrameworkPortability__cctor_mDD51694847B6996EA1C3EA84C8B5CDE6141D65AE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FrameworkPortability_get_InvariantCulture_m88D300312A84CE7D244C8C22272D988912EA1A12_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InvalidProtocolBufferException_InvalidEndTag_m44C403DCD5ABF407C892941533DEA994CA3A0988_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InvalidProtocolBufferException_InvalidTag_m9DBE12CAA1E271794334B86D0BA59CBD5648B1E5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InvalidProtocolBufferException_InvalidWireType_m51F656A8F5AE76B6CD8ED343F712CFF4255D2F3F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InvalidProtocolBufferException_MalformedVarint_m0756001DC26E773821E1279F93937EBE65D39634_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InvalidProtocolBufferException_NegativeSize_mE83794AAC7C961105F3DE44D5128635DD49D87E5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InvalidProtocolBufferException_RecursionLimitExceeded_m4D9BE2951461ECA65434439A0E1E12C878B16735_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InvalidProtocolBufferException_SizeLimitExceeded_m3BEC675C6D09C08DED8EF7C8BA2FC3A015895B47_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InvalidProtocolBufferException_TruncatedMessage_m0F1518DA8E834E0AA913C21046D14AE4F332A23F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OutOfSpaceException__ctor_m5B2FF11494FCA787A208E50C60B5D250C87B9249_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ThrowHelper_ThrowIfNull_m2E4DC9108B27449ACAAF01C5218B752EAD31AE59_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ThrowHelper_ThrowIfNull_mB8435B4F2F4DB53E02BD873006D61C1E9D826D0A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UninitializedMessageException_AsInvalidProtocolBufferException_m9731AF29AD15EF96286EC9A80AC4B2DF39C534A7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UninitializedMessageException__ctor_m90F992B8FE15D9561ED07370C274A52EC43736BB_MetadataUsageId;
struct CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_com;
struct CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_pinvoke;
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_com;
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t5EAAE81F0C5C78AF71D2E98EF19F96C92E2D6A5A 
{
public:

public:
};


// System.Object


// Google.ProtocolBuffers.ByteArray
struct  ByteArray_tEB7390053513FB18B53C767F80A20451A3D3DC64  : public RuntimeObject
{
public:

public:
};


// Google.ProtocolBuffers.ByteString
struct  ByteString_t484699ED4C1CFF8928F9242C75BD5F6532CF768A  : public RuntimeObject
{
public:
	// System.Byte[] Google.ProtocolBuffers.ByteString::bytes
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes_1;

public:
	inline static int32_t get_offset_of_bytes_1() { return static_cast<int32_t>(offsetof(ByteString_t484699ED4C1CFF8928F9242C75BD5F6532CF768A, ___bytes_1)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_bytes_1() const { return ___bytes_1; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_bytes_1() { return &___bytes_1; }
	inline void set_bytes_1(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___bytes_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bytes_1), (void*)value);
	}
};

struct ByteString_t484699ED4C1CFF8928F9242C75BD5F6532CF768A_StaticFields
{
public:
	// Google.ProtocolBuffers.ByteString Google.ProtocolBuffers.ByteString::empty
	ByteString_t484699ED4C1CFF8928F9242C75BD5F6532CF768A * ___empty_0;

public:
	inline static int32_t get_offset_of_empty_0() { return static_cast<int32_t>(offsetof(ByteString_t484699ED4C1CFF8928F9242C75BD5F6532CF768A_StaticFields, ___empty_0)); }
	inline ByteString_t484699ED4C1CFF8928F9242C75BD5F6532CF768A * get_empty_0() const { return ___empty_0; }
	inline ByteString_t484699ED4C1CFF8928F9242C75BD5F6532CF768A ** get_address_of_empty_0() { return &___empty_0; }
	inline void set_empty_0(ByteString_t484699ED4C1CFF8928F9242C75BD5F6532CF768A * value)
	{
		___empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___empty_0), (void*)value);
	}
};


// Google.ProtocolBuffers.CodedInputStream
struct  CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E  : public RuntimeObject
{
public:
	// System.Byte[] Google.ProtocolBuffers.CodedInputStream::buffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer_0;
	// System.Int32 Google.ProtocolBuffers.CodedInputStream::bufferSize
	int32_t ___bufferSize_1;
	// System.Int32 Google.ProtocolBuffers.CodedInputStream::bufferSizeAfterLimit
	int32_t ___bufferSizeAfterLimit_2;
	// System.Int32 Google.ProtocolBuffers.CodedInputStream::bufferPos
	int32_t ___bufferPos_3;
	// System.IO.Stream Google.ProtocolBuffers.CodedInputStream::input
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___input_4;
	// System.UInt32 Google.ProtocolBuffers.CodedInputStream::lastTag
	uint32_t ___lastTag_5;
	// System.UInt32 Google.ProtocolBuffers.CodedInputStream::nextTag
	uint32_t ___nextTag_6;
	// System.Boolean Google.ProtocolBuffers.CodedInputStream::hasNextTag
	bool ___hasNextTag_7;
	// System.Int32 Google.ProtocolBuffers.CodedInputStream::totalBytesRetired
	int32_t ___totalBytesRetired_8;
	// System.Int32 Google.ProtocolBuffers.CodedInputStream::currentLimit
	int32_t ___currentLimit_9;
	// System.Int32 Google.ProtocolBuffers.CodedInputStream::recursionDepth
	int32_t ___recursionDepth_10;
	// System.Int32 Google.ProtocolBuffers.CodedInputStream::recursionLimit
	int32_t ___recursionLimit_11;
	// System.Int32 Google.ProtocolBuffers.CodedInputStream::sizeLimit
	int32_t ___sizeLimit_12;

public:
	inline static int32_t get_offset_of_buffer_0() { return static_cast<int32_t>(offsetof(CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E, ___buffer_0)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_buffer_0() const { return ___buffer_0; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_buffer_0() { return &___buffer_0; }
	inline void set_buffer_0(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___buffer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buffer_0), (void*)value);
	}

	inline static int32_t get_offset_of_bufferSize_1() { return static_cast<int32_t>(offsetof(CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E, ___bufferSize_1)); }
	inline int32_t get_bufferSize_1() const { return ___bufferSize_1; }
	inline int32_t* get_address_of_bufferSize_1() { return &___bufferSize_1; }
	inline void set_bufferSize_1(int32_t value)
	{
		___bufferSize_1 = value;
	}

	inline static int32_t get_offset_of_bufferSizeAfterLimit_2() { return static_cast<int32_t>(offsetof(CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E, ___bufferSizeAfterLimit_2)); }
	inline int32_t get_bufferSizeAfterLimit_2() const { return ___bufferSizeAfterLimit_2; }
	inline int32_t* get_address_of_bufferSizeAfterLimit_2() { return &___bufferSizeAfterLimit_2; }
	inline void set_bufferSizeAfterLimit_2(int32_t value)
	{
		___bufferSizeAfterLimit_2 = value;
	}

	inline static int32_t get_offset_of_bufferPos_3() { return static_cast<int32_t>(offsetof(CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E, ___bufferPos_3)); }
	inline int32_t get_bufferPos_3() const { return ___bufferPos_3; }
	inline int32_t* get_address_of_bufferPos_3() { return &___bufferPos_3; }
	inline void set_bufferPos_3(int32_t value)
	{
		___bufferPos_3 = value;
	}

	inline static int32_t get_offset_of_input_4() { return static_cast<int32_t>(offsetof(CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E, ___input_4)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_input_4() const { return ___input_4; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_input_4() { return &___input_4; }
	inline void set_input_4(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___input_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___input_4), (void*)value);
	}

	inline static int32_t get_offset_of_lastTag_5() { return static_cast<int32_t>(offsetof(CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E, ___lastTag_5)); }
	inline uint32_t get_lastTag_5() const { return ___lastTag_5; }
	inline uint32_t* get_address_of_lastTag_5() { return &___lastTag_5; }
	inline void set_lastTag_5(uint32_t value)
	{
		___lastTag_5 = value;
	}

	inline static int32_t get_offset_of_nextTag_6() { return static_cast<int32_t>(offsetof(CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E, ___nextTag_6)); }
	inline uint32_t get_nextTag_6() const { return ___nextTag_6; }
	inline uint32_t* get_address_of_nextTag_6() { return &___nextTag_6; }
	inline void set_nextTag_6(uint32_t value)
	{
		___nextTag_6 = value;
	}

	inline static int32_t get_offset_of_hasNextTag_7() { return static_cast<int32_t>(offsetof(CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E, ___hasNextTag_7)); }
	inline bool get_hasNextTag_7() const { return ___hasNextTag_7; }
	inline bool* get_address_of_hasNextTag_7() { return &___hasNextTag_7; }
	inline void set_hasNextTag_7(bool value)
	{
		___hasNextTag_7 = value;
	}

	inline static int32_t get_offset_of_totalBytesRetired_8() { return static_cast<int32_t>(offsetof(CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E, ___totalBytesRetired_8)); }
	inline int32_t get_totalBytesRetired_8() const { return ___totalBytesRetired_8; }
	inline int32_t* get_address_of_totalBytesRetired_8() { return &___totalBytesRetired_8; }
	inline void set_totalBytesRetired_8(int32_t value)
	{
		___totalBytesRetired_8 = value;
	}

	inline static int32_t get_offset_of_currentLimit_9() { return static_cast<int32_t>(offsetof(CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E, ___currentLimit_9)); }
	inline int32_t get_currentLimit_9() const { return ___currentLimit_9; }
	inline int32_t* get_address_of_currentLimit_9() { return &___currentLimit_9; }
	inline void set_currentLimit_9(int32_t value)
	{
		___currentLimit_9 = value;
	}

	inline static int32_t get_offset_of_recursionDepth_10() { return static_cast<int32_t>(offsetof(CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E, ___recursionDepth_10)); }
	inline int32_t get_recursionDepth_10() const { return ___recursionDepth_10; }
	inline int32_t* get_address_of_recursionDepth_10() { return &___recursionDepth_10; }
	inline void set_recursionDepth_10(int32_t value)
	{
		___recursionDepth_10 = value;
	}

	inline static int32_t get_offset_of_recursionLimit_11() { return static_cast<int32_t>(offsetof(CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E, ___recursionLimit_11)); }
	inline int32_t get_recursionLimit_11() const { return ___recursionLimit_11; }
	inline int32_t* get_address_of_recursionLimit_11() { return &___recursionLimit_11; }
	inline void set_recursionLimit_11(int32_t value)
	{
		___recursionLimit_11 = value;
	}

	inline static int32_t get_offset_of_sizeLimit_12() { return static_cast<int32_t>(offsetof(CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E, ___sizeLimit_12)); }
	inline int32_t get_sizeLimit_12() const { return ___sizeLimit_12; }
	inline int32_t* get_address_of_sizeLimit_12() { return &___sizeLimit_12; }
	inline void set_sizeLimit_12(int32_t value)
	{
		___sizeLimit_12 = value;
	}
};


// Google.ProtocolBuffers.CodedOutputStream
struct  CodedOutputStream_t6FF414144C567C520A212C17587CA998689956E3  : public RuntimeObject
{
public:
	// System.Byte[] Google.ProtocolBuffers.CodedOutputStream::buffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer_1;
	// System.Int32 Google.ProtocolBuffers.CodedOutputStream::limit
	int32_t ___limit_2;
	// System.Int32 Google.ProtocolBuffers.CodedOutputStream::position
	int32_t ___position_3;
	// System.IO.Stream Google.ProtocolBuffers.CodedOutputStream::output
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___output_4;

public:
	inline static int32_t get_offset_of_buffer_1() { return static_cast<int32_t>(offsetof(CodedOutputStream_t6FF414144C567C520A212C17587CA998689956E3, ___buffer_1)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_buffer_1() const { return ___buffer_1; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_buffer_1() { return &___buffer_1; }
	inline void set_buffer_1(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___buffer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buffer_1), (void*)value);
	}

	inline static int32_t get_offset_of_limit_2() { return static_cast<int32_t>(offsetof(CodedOutputStream_t6FF414144C567C520A212C17587CA998689956E3, ___limit_2)); }
	inline int32_t get_limit_2() const { return ___limit_2; }
	inline int32_t* get_address_of_limit_2() { return &___limit_2; }
	inline void set_limit_2(int32_t value)
	{
		___limit_2 = value;
	}

	inline static int32_t get_offset_of_position_3() { return static_cast<int32_t>(offsetof(CodedOutputStream_t6FF414144C567C520A212C17587CA998689956E3, ___position_3)); }
	inline int32_t get_position_3() const { return ___position_3; }
	inline int32_t* get_address_of_position_3() { return &___position_3; }
	inline void set_position_3(int32_t value)
	{
		___position_3 = value;
	}

	inline static int32_t get_offset_of_output_4() { return static_cast<int32_t>(offsetof(CodedOutputStream_t6FF414144C567C520A212C17587CA998689956E3, ___output_4)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_output_4() const { return ___output_4; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_output_4() { return &___output_4; }
	inline void set_output_4(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___output_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___output_4), (void*)value);
	}
};

struct CodedOutputStream_t6FF414144C567C520A212C17587CA998689956E3_StaticFields
{
public:
	// System.Int32 Google.ProtocolBuffers.CodedOutputStream::DefaultBufferSize
	int32_t ___DefaultBufferSize_0;

public:
	inline static int32_t get_offset_of_DefaultBufferSize_0() { return static_cast<int32_t>(offsetof(CodedOutputStream_t6FF414144C567C520A212C17587CA998689956E3_StaticFields, ___DefaultBufferSize_0)); }
	inline int32_t get_DefaultBufferSize_0() const { return ___DefaultBufferSize_0; }
	inline int32_t* get_address_of_DefaultBufferSize_0() { return &___DefaultBufferSize_0; }
	inline void set_DefaultBufferSize_0(int32_t value)
	{
		___DefaultBufferSize_0 = value;
	}
};


// Google.ProtocolBuffers.Collections.Lists
struct  Lists_t177FC1C6F9F617C0E7E2DBF08AC025B15C473CDE  : public RuntimeObject
{
public:

public:
};


// Google.ProtocolBuffers.ExtensionRegistry
struct  ExtensionRegistry_tAC8BBAEAD627B80DF852E93F941EF92FB4C8558E  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.Dictionary`2<System.String,Google.ProtocolBuffers.IGeneratedExtensionLite>> Google.ProtocolBuffers.ExtensionRegistry::extensionsByName
	Dictionary_2_t418F30137BF00E0E9EFF2A2DB75AB3A010190D9B * ___extensionsByName_1;
	// System.Collections.Generic.Dictionary`2<Google.ProtocolBuffers.ExtensionRegistry_ExtensionIntPair,Google.ProtocolBuffers.IGeneratedExtensionLite> Google.ProtocolBuffers.ExtensionRegistry::extensionsByNumber
	Dictionary_2_t36E2ECEC38081A5C8DF6DED6117C7CE5B2491886 * ___extensionsByNumber_2;
	// System.Boolean Google.ProtocolBuffers.ExtensionRegistry::readOnly
	bool ___readOnly_3;

public:
	inline static int32_t get_offset_of_extensionsByName_1() { return static_cast<int32_t>(offsetof(ExtensionRegistry_tAC8BBAEAD627B80DF852E93F941EF92FB4C8558E, ___extensionsByName_1)); }
	inline Dictionary_2_t418F30137BF00E0E9EFF2A2DB75AB3A010190D9B * get_extensionsByName_1() const { return ___extensionsByName_1; }
	inline Dictionary_2_t418F30137BF00E0E9EFF2A2DB75AB3A010190D9B ** get_address_of_extensionsByName_1() { return &___extensionsByName_1; }
	inline void set_extensionsByName_1(Dictionary_2_t418F30137BF00E0E9EFF2A2DB75AB3A010190D9B * value)
	{
		___extensionsByName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___extensionsByName_1), (void*)value);
	}

	inline static int32_t get_offset_of_extensionsByNumber_2() { return static_cast<int32_t>(offsetof(ExtensionRegistry_tAC8BBAEAD627B80DF852E93F941EF92FB4C8558E, ___extensionsByNumber_2)); }
	inline Dictionary_2_t36E2ECEC38081A5C8DF6DED6117C7CE5B2491886 * get_extensionsByNumber_2() const { return ___extensionsByNumber_2; }
	inline Dictionary_2_t36E2ECEC38081A5C8DF6DED6117C7CE5B2491886 ** get_address_of_extensionsByNumber_2() { return &___extensionsByNumber_2; }
	inline void set_extensionsByNumber_2(Dictionary_2_t36E2ECEC38081A5C8DF6DED6117C7CE5B2491886 * value)
	{
		___extensionsByNumber_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___extensionsByNumber_2), (void*)value);
	}

	inline static int32_t get_offset_of_readOnly_3() { return static_cast<int32_t>(offsetof(ExtensionRegistry_tAC8BBAEAD627B80DF852E93F941EF92FB4C8558E, ___readOnly_3)); }
	inline bool get_readOnly_3() const { return ___readOnly_3; }
	inline bool* get_address_of_readOnly_3() { return &___readOnly_3; }
	inline void set_readOnly_3(bool value)
	{
		___readOnly_3 = value;
	}
};

struct ExtensionRegistry_tAC8BBAEAD627B80DF852E93F941EF92FB4C8558E_StaticFields
{
public:
	// Google.ProtocolBuffers.ExtensionRegistry Google.ProtocolBuffers.ExtensionRegistry::empty
	ExtensionRegistry_tAC8BBAEAD627B80DF852E93F941EF92FB4C8558E * ___empty_0;

public:
	inline static int32_t get_offset_of_empty_0() { return static_cast<int32_t>(offsetof(ExtensionRegistry_tAC8BBAEAD627B80DF852E93F941EF92FB4C8558E_StaticFields, ___empty_0)); }
	inline ExtensionRegistry_tAC8BBAEAD627B80DF852E93F941EF92FB4C8558E * get_empty_0() const { return ___empty_0; }
	inline ExtensionRegistry_tAC8BBAEAD627B80DF852E93F941EF92FB4C8558E ** get_address_of_empty_0() { return &___empty_0; }
	inline void set_empty_0(ExtensionRegistry_tAC8BBAEAD627B80DF852E93F941EF92FB4C8558E * value)
	{
		___empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___empty_0), (void*)value);
	}
};


// Google.ProtocolBuffers.FrameworkPortability
struct  FrameworkPortability_t267BF7312587491B107C4F014A1FB31FD1BD99BF  : public RuntimeObject
{
public:

public:
};

struct FrameworkPortability_t267BF7312587491B107C4F014A1FB31FD1BD99BF_StaticFields
{
public:
	// System.String Google.ProtocolBuffers.FrameworkPortability::NewLine
	String_t* ___NewLine_0;

public:
	inline static int32_t get_offset_of_NewLine_0() { return static_cast<int32_t>(offsetof(FrameworkPortability_t267BF7312587491B107C4F014A1FB31FD1BD99BF_StaticFields, ___NewLine_0)); }
	inline String_t* get_NewLine_0() const { return ___NewLine_0; }
	inline String_t** get_address_of_NewLine_0() { return &___NewLine_0; }
	inline void set_NewLine_0(String_t* value)
	{
		___NewLine_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NewLine_0), (void*)value);
	}
};


// Google.ProtocolBuffers.ThrowHelper
struct  ThrowHelper_t3E67C857468CD0B4D6079C370BBF654BFCF1159E  : public RuntimeObject
{
public:

public:
};


// Google.ProtocolBuffers.WireFormat
struct  WireFormat_t425379E0D655232E096A491DE7D74997F57A04E8  : public RuntimeObject
{
public:

public:
};

struct Il2CppArrayBounds;

// System.Array


// System.BitConverter
struct  BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE  : public RuntimeObject
{
public:

public:
};

struct BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_StaticFields
{
public:
	// System.Boolean System.BitConverter::IsLittleEndian
	bool ___IsLittleEndian_0;

public:
	inline static int32_t get_offset_of_IsLittleEndian_0() { return static_cast<int32_t>(offsetof(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_StaticFields, ___IsLittleEndian_0)); }
	inline bool get_IsLittleEndian_0() const { return ___IsLittleEndian_0; }
	inline bool* get_address_of_IsLittleEndian_0() { return &___IsLittleEndian_0; }
	inline void set_IsLittleEndian_0(bool value)
	{
		___IsLittleEndian_0 = value;
	}
};


// System.Collections.Generic.Dictionary`2<Google.ProtocolBuffers.ExtensionRegistry_ExtensionIntPair,Google.ProtocolBuffers.IGeneratedExtensionLite>
struct  Dictionary_2_t36E2ECEC38081A5C8DF6DED6117C7CE5B2491886  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t6E40EF886E2FBF98AE86E7E8ECF89889BE2D2ADD* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t2B491D14337AA01B42A63156164F8AE84A8566CE * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tDF89D883F0AA356D87FD1E2AB090313BF2EFE9E9 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t36E2ECEC38081A5C8DF6DED6117C7CE5B2491886, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t36E2ECEC38081A5C8DF6DED6117C7CE5B2491886, ___entries_1)); }
	inline EntryU5BU5D_t6E40EF886E2FBF98AE86E7E8ECF89889BE2D2ADD* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t6E40EF886E2FBF98AE86E7E8ECF89889BE2D2ADD** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t6E40EF886E2FBF98AE86E7E8ECF89889BE2D2ADD* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t36E2ECEC38081A5C8DF6DED6117C7CE5B2491886, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t36E2ECEC38081A5C8DF6DED6117C7CE5B2491886, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t36E2ECEC38081A5C8DF6DED6117C7CE5B2491886, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t36E2ECEC38081A5C8DF6DED6117C7CE5B2491886, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t36E2ECEC38081A5C8DF6DED6117C7CE5B2491886, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t36E2ECEC38081A5C8DF6DED6117C7CE5B2491886, ___keys_7)); }
	inline KeyCollection_t2B491D14337AA01B42A63156164F8AE84A8566CE * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t2B491D14337AA01B42A63156164F8AE84A8566CE ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t2B491D14337AA01B42A63156164F8AE84A8566CE * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t36E2ECEC38081A5C8DF6DED6117C7CE5B2491886, ___values_8)); }
	inline ValueCollection_tDF89D883F0AA356D87FD1E2AB090313BF2EFE9E9 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tDF89D883F0AA356D87FD1E2AB090313BF2EFE9E9 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tDF89D883F0AA356D87FD1E2AB090313BF2EFE9E9 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t36E2ECEC38081A5C8DF6DED6117C7CE5B2491886, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.Dictionary`2<System.String,Google.ProtocolBuffers.IGeneratedExtensionLite>>
struct  Dictionary_2_t418F30137BF00E0E9EFF2A2DB75AB3A010190D9B  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t6C425514A8652110DDC620E3BE20CA6C338E5A56* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tA45B81E543CAAAC6992905BAF3E691B98AB0BE0D * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t49AA1D4E25F66BF56E88D7AD2E42916493E1D3CE * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t418F30137BF00E0E9EFF2A2DB75AB3A010190D9B, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t418F30137BF00E0E9EFF2A2DB75AB3A010190D9B, ___entries_1)); }
	inline EntryU5BU5D_t6C425514A8652110DDC620E3BE20CA6C338E5A56* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t6C425514A8652110DDC620E3BE20CA6C338E5A56** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t6C425514A8652110DDC620E3BE20CA6C338E5A56* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t418F30137BF00E0E9EFF2A2DB75AB3A010190D9B, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t418F30137BF00E0E9EFF2A2DB75AB3A010190D9B, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t418F30137BF00E0E9EFF2A2DB75AB3A010190D9B, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t418F30137BF00E0E9EFF2A2DB75AB3A010190D9B, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t418F30137BF00E0E9EFF2A2DB75AB3A010190D9B, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t418F30137BF00E0E9EFF2A2DB75AB3A010190D9B, ___keys_7)); }
	inline KeyCollection_tA45B81E543CAAAC6992905BAF3E691B98AB0BE0D * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tA45B81E543CAAAC6992905BAF3E691B98AB0BE0D ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tA45B81E543CAAAC6992905BAF3E691B98AB0BE0D * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t418F30137BF00E0E9EFF2A2DB75AB3A010190D9B, ___values_8)); }
	inline ValueCollection_t49AA1D4E25F66BF56E88D7AD2E42916493E1D3CE * get_values_8() const { return ___values_8; }
	inline ValueCollection_t49AA1D4E25F66BF56E88D7AD2E42916493E1D3CE ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t49AA1D4E25F66BF56E88D7AD2E42916493E1D3CE * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t418F30137BF00E0E9EFF2A2DB75AB3A010190D9B, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Byte[]>
struct  List_1_t4AB280456F4DE770AC993DE9A7C8C563A6311531  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ByteU5BU5DU5BU5D_t1DE3927D87FD236507BFE9CA7E3EEA348C53E0E1* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t4AB280456F4DE770AC993DE9A7C8C563A6311531, ____items_1)); }
	inline ByteU5BU5DU5BU5D_t1DE3927D87FD236507BFE9CA7E3EEA348C53E0E1* get__items_1() const { return ____items_1; }
	inline ByteU5BU5DU5BU5D_t1DE3927D87FD236507BFE9CA7E3EEA348C53E0E1** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ByteU5BU5DU5BU5D_t1DE3927D87FD236507BFE9CA7E3EEA348C53E0E1* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t4AB280456F4DE770AC993DE9A7C8C563A6311531, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t4AB280456F4DE770AC993DE9A7C8C563A6311531, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t4AB280456F4DE770AC993DE9A7C8C563A6311531, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t4AB280456F4DE770AC993DE9A7C8C563A6311531_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ByteU5BU5DU5BU5D_t1DE3927D87FD236507BFE9CA7E3EEA348C53E0E1* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t4AB280456F4DE770AC993DE9A7C8C563A6311531_StaticFields, ____emptyArray_5)); }
	inline ByteU5BU5DU5BU5D_t1DE3927D87FD236507BFE9CA7E3EEA348C53E0E1* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ByteU5BU5DU5BU5D_t1DE3927D87FD236507BFE9CA7E3EEA348C53E0E1** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ByteU5BU5DU5BU5D_t1DE3927D87FD236507BFE9CA7E3EEA348C53E0E1* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>
struct  List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____items_1)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Globalization.CultureInfo
struct  CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD * ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;

public:
	inline static int32_t get_offset_of_m_isReadOnly_3() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_isReadOnly_3)); }
	inline bool get_m_isReadOnly_3() const { return ___m_isReadOnly_3; }
	inline bool* get_address_of_m_isReadOnly_3() { return &___m_isReadOnly_3; }
	inline void set_m_isReadOnly_3(bool value)
	{
		___m_isReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_cultureID_4() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___cultureID_4)); }
	inline int32_t get_cultureID_4() const { return ___cultureID_4; }
	inline int32_t* get_address_of_cultureID_4() { return &___cultureID_4; }
	inline void set_cultureID_4(int32_t value)
	{
		___cultureID_4 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_5() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___parent_lcid_5)); }
	inline int32_t get_parent_lcid_5() const { return ___parent_lcid_5; }
	inline int32_t* get_address_of_parent_lcid_5() { return &___parent_lcid_5; }
	inline void set_parent_lcid_5(int32_t value)
	{
		___parent_lcid_5 = value;
	}

	inline static int32_t get_offset_of_datetime_index_6() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___datetime_index_6)); }
	inline int32_t get_datetime_index_6() const { return ___datetime_index_6; }
	inline int32_t* get_address_of_datetime_index_6() { return &___datetime_index_6; }
	inline void set_datetime_index_6(int32_t value)
	{
		___datetime_index_6 = value;
	}

	inline static int32_t get_offset_of_number_index_7() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___number_index_7)); }
	inline int32_t get_number_index_7() const { return ___number_index_7; }
	inline int32_t* get_address_of_number_index_7() { return &___number_index_7; }
	inline void set_number_index_7(int32_t value)
	{
		___number_index_7 = value;
	}

	inline static int32_t get_offset_of_default_calendar_type_8() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___default_calendar_type_8)); }
	inline int32_t get_default_calendar_type_8() const { return ___default_calendar_type_8; }
	inline int32_t* get_address_of_default_calendar_type_8() { return &___default_calendar_type_8; }
	inline void set_default_calendar_type_8(int32_t value)
	{
		___default_calendar_type_8 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_9() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_useUserOverride_9)); }
	inline bool get_m_useUserOverride_9() const { return ___m_useUserOverride_9; }
	inline bool* get_address_of_m_useUserOverride_9() { return &___m_useUserOverride_9; }
	inline void set_m_useUserOverride_9(bool value)
	{
		___m_useUserOverride_9 = value;
	}

	inline static int32_t get_offset_of_numInfo_10() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___numInfo_10)); }
	inline NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * get_numInfo_10() const { return ___numInfo_10; }
	inline NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 ** get_address_of_numInfo_10() { return &___numInfo_10; }
	inline void set_numInfo_10(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * value)
	{
		___numInfo_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numInfo_10), (void*)value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_11() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___dateTimeInfo_11)); }
	inline DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * get_dateTimeInfo_11() const { return ___dateTimeInfo_11; }
	inline DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F ** get_address_of_dateTimeInfo_11() { return &___dateTimeInfo_11; }
	inline void set_dateTimeInfo_11(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * value)
	{
		___dateTimeInfo_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateTimeInfo_11), (void*)value);
	}

	inline static int32_t get_offset_of_textInfo_12() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___textInfo_12)); }
	inline TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * get_textInfo_12() const { return ___textInfo_12; }
	inline TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 ** get_address_of_textInfo_12() { return &___textInfo_12; }
	inline void set_textInfo_12(TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * value)
	{
		___textInfo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_name_13() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_name_13)); }
	inline String_t* get_m_name_13() const { return ___m_name_13; }
	inline String_t** get_address_of_m_name_13() { return &___m_name_13; }
	inline void set_m_name_13(String_t* value)
	{
		___m_name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_name_13), (void*)value);
	}

	inline static int32_t get_offset_of_englishname_14() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___englishname_14)); }
	inline String_t* get_englishname_14() const { return ___englishname_14; }
	inline String_t** get_address_of_englishname_14() { return &___englishname_14; }
	inline void set_englishname_14(String_t* value)
	{
		___englishname_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___englishname_14), (void*)value);
	}

	inline static int32_t get_offset_of_nativename_15() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___nativename_15)); }
	inline String_t* get_nativename_15() const { return ___nativename_15; }
	inline String_t** get_address_of_nativename_15() { return &___nativename_15; }
	inline void set_nativename_15(String_t* value)
	{
		___nativename_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativename_15), (void*)value);
	}

	inline static int32_t get_offset_of_iso3lang_16() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___iso3lang_16)); }
	inline String_t* get_iso3lang_16() const { return ___iso3lang_16; }
	inline String_t** get_address_of_iso3lang_16() { return &___iso3lang_16; }
	inline void set_iso3lang_16(String_t* value)
	{
		___iso3lang_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso3lang_16), (void*)value);
	}

	inline static int32_t get_offset_of_iso2lang_17() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___iso2lang_17)); }
	inline String_t* get_iso2lang_17() const { return ___iso2lang_17; }
	inline String_t** get_address_of_iso2lang_17() { return &___iso2lang_17; }
	inline void set_iso2lang_17(String_t* value)
	{
		___iso2lang_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso2lang_17), (void*)value);
	}

	inline static int32_t get_offset_of_win3lang_18() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___win3lang_18)); }
	inline String_t* get_win3lang_18() const { return ___win3lang_18; }
	inline String_t** get_address_of_win3lang_18() { return &___win3lang_18; }
	inline void set_win3lang_18(String_t* value)
	{
		___win3lang_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___win3lang_18), (void*)value);
	}

	inline static int32_t get_offset_of_territory_19() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___territory_19)); }
	inline String_t* get_territory_19() const { return ___territory_19; }
	inline String_t** get_address_of_territory_19() { return &___territory_19; }
	inline void set_territory_19(String_t* value)
	{
		___territory_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___territory_19), (void*)value);
	}

	inline static int32_t get_offset_of_native_calendar_names_20() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___native_calendar_names_20)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_native_calendar_names_20() const { return ___native_calendar_names_20; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_native_calendar_names_20() { return &___native_calendar_names_20; }
	inline void set_native_calendar_names_20(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___native_calendar_names_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_calendar_names_20), (void*)value);
	}

	inline static int32_t get_offset_of_compareInfo_21() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___compareInfo_21)); }
	inline CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * get_compareInfo_21() const { return ___compareInfo_21; }
	inline CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 ** get_address_of_compareInfo_21() { return &___compareInfo_21; }
	inline void set_compareInfo_21(CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * value)
	{
		___compareInfo_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compareInfo_21), (void*)value);
	}

	inline static int32_t get_offset_of_textinfo_data_22() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___textinfo_data_22)); }
	inline void* get_textinfo_data_22() const { return ___textinfo_data_22; }
	inline void** get_address_of_textinfo_data_22() { return &___textinfo_data_22; }
	inline void set_textinfo_data_22(void* value)
	{
		___textinfo_data_22 = value;
	}

	inline static int32_t get_offset_of_m_dataItem_23() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_dataItem_23)); }
	inline int32_t get_m_dataItem_23() const { return ___m_dataItem_23; }
	inline int32_t* get_address_of_m_dataItem_23() { return &___m_dataItem_23; }
	inline void set_m_dataItem_23(int32_t value)
	{
		___m_dataItem_23 = value;
	}

	inline static int32_t get_offset_of_calendar_24() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___calendar_24)); }
	inline Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * get_calendar_24() const { return ___calendar_24; }
	inline Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 ** get_address_of_calendar_24() { return &___calendar_24; }
	inline void set_calendar_24(Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * value)
	{
		___calendar_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calendar_24), (void*)value);
	}

	inline static int32_t get_offset_of_parent_culture_25() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___parent_culture_25)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_parent_culture_25() const { return ___parent_culture_25; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_parent_culture_25() { return &___parent_culture_25; }
	inline void set_parent_culture_25(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___parent_culture_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_culture_25), (void*)value);
	}

	inline static int32_t get_offset_of_constructed_26() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___constructed_26)); }
	inline bool get_constructed_26() const { return ___constructed_26; }
	inline bool* get_address_of_constructed_26() { return &___constructed_26; }
	inline void set_constructed_26(bool value)
	{
		___constructed_26 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_27() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___cached_serialized_form_27)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_cached_serialized_form_27() const { return ___cached_serialized_form_27; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_cached_serialized_form_27() { return &___cached_serialized_form_27; }
	inline void set_cached_serialized_form_27(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___cached_serialized_form_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cached_serialized_form_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_cultureData_28() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_cultureData_28)); }
	inline CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD * get_m_cultureData_28() const { return ___m_cultureData_28; }
	inline CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD ** get_address_of_m_cultureData_28() { return &___m_cultureData_28; }
	inline void set_m_cultureData_28(CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD * value)
	{
		___m_cultureData_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureData_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_isInherited_29() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_isInherited_29)); }
	inline bool get_m_isInherited_29() const { return ___m_isInherited_29; }
	inline bool* get_address_of_m_isInherited_29() { return &___m_isInherited_29; }
	inline void set_m_isInherited_29(bool value)
	{
		___m_isInherited_29 = value;
	}
};

struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___s_DefaultThreadCurrentUICulture_33;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___s_DefaultThreadCurrentCulture_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B * ___shared_by_number_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 * ___shared_by_name_36;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_37;

public:
	inline static int32_t get_offset_of_invariant_culture_info_0() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___invariant_culture_info_0)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_invariant_culture_info_0() const { return ___invariant_culture_info_0; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_invariant_culture_info_0() { return &___invariant_culture_info_0; }
	inline void set_invariant_culture_info_0(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___invariant_culture_info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariant_culture_info_0), (void*)value);
	}

	inline static int32_t get_offset_of_shared_table_lock_1() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___shared_table_lock_1)); }
	inline RuntimeObject * get_shared_table_lock_1() const { return ___shared_table_lock_1; }
	inline RuntimeObject ** get_address_of_shared_table_lock_1() { return &___shared_table_lock_1; }
	inline void set_shared_table_lock_1(RuntimeObject * value)
	{
		___shared_table_lock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_table_lock_1), (void*)value);
	}

	inline static int32_t get_offset_of_default_current_culture_2() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___default_current_culture_2)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_default_current_culture_2() const { return ___default_current_culture_2; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_default_current_culture_2() { return &___default_current_culture_2; }
	inline void set_default_current_culture_2(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___default_current_culture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___default_current_culture_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentUICulture_33() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___s_DefaultThreadCurrentUICulture_33)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_s_DefaultThreadCurrentUICulture_33() const { return ___s_DefaultThreadCurrentUICulture_33; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_s_DefaultThreadCurrentUICulture_33() { return &___s_DefaultThreadCurrentUICulture_33; }
	inline void set_s_DefaultThreadCurrentUICulture_33(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___s_DefaultThreadCurrentUICulture_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentUICulture_33), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentCulture_34() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___s_DefaultThreadCurrentCulture_34)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_s_DefaultThreadCurrentCulture_34() const { return ___s_DefaultThreadCurrentCulture_34; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_s_DefaultThreadCurrentCulture_34() { return &___s_DefaultThreadCurrentCulture_34; }
	inline void set_s_DefaultThreadCurrentCulture_34(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___s_DefaultThreadCurrentCulture_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentCulture_34), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_number_35() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___shared_by_number_35)); }
	inline Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B * get_shared_by_number_35() const { return ___shared_by_number_35; }
	inline Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B ** get_address_of_shared_by_number_35() { return &___shared_by_number_35; }
	inline void set_shared_by_number_35(Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B * value)
	{
		___shared_by_number_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_number_35), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_name_36() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___shared_by_name_36)); }
	inline Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 * get_shared_by_name_36() const { return ___shared_by_name_36; }
	inline Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 ** get_address_of_shared_by_name_36() { return &___shared_by_name_36; }
	inline void set_shared_by_name_36(Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 * value)
	{
		___shared_by_name_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_name_36), (void*)value);
	}

	inline static int32_t get_offset_of_IsTaiwanSku_37() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___IsTaiwanSku_37)); }
	inline bool get_IsTaiwanSku_37() const { return ___IsTaiwanSku_37; }
	inline bool* get_address_of_IsTaiwanSku_37() { return &___IsTaiwanSku_37; }
	inline void set_IsTaiwanSku_37(bool value)
	{
		___IsTaiwanSku_37 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___numInfo_10;
	DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___dateTimeInfo_11;
	TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * ___calendar_24;
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___numInfo_10;
	DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___dateTimeInfo_11;
	TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * ___calendar_24;
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// System.MarshalByRefObject
struct  MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
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

// Google.ProtocolBuffers.ExtensionRegistry_ExtensionIntPair
struct  ExtensionIntPair_tA731DCA4C288695BF78F3F71F1515142068CC5DB 
{
public:
	// System.Object Google.ProtocolBuffers.ExtensionRegistry_ExtensionIntPair::msgType
	RuntimeObject * ___msgType_0;
	// System.Int32 Google.ProtocolBuffers.ExtensionRegistry_ExtensionIntPair::number
	int32_t ___number_1;

public:
	inline static int32_t get_offset_of_msgType_0() { return static_cast<int32_t>(offsetof(ExtensionIntPair_tA731DCA4C288695BF78F3F71F1515142068CC5DB, ___msgType_0)); }
	inline RuntimeObject * get_msgType_0() const { return ___msgType_0; }
	inline RuntimeObject ** get_address_of_msgType_0() { return &___msgType_0; }
	inline void set_msgType_0(RuntimeObject * value)
	{
		___msgType_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___msgType_0), (void*)value);
	}

	inline static int32_t get_offset_of_number_1() { return static_cast<int32_t>(offsetof(ExtensionIntPair_tA731DCA4C288695BF78F3F71F1515142068CC5DB, ___number_1)); }
	inline int32_t get_number_1() const { return ___number_1; }
	inline int32_t* get_address_of_number_1() { return &___number_1; }
	inline void set_number_1(int32_t value)
	{
		___number_1 = value;
	}
};

// Native definition for P/Invoke marshalling of Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair
struct ExtensionIntPair_tA731DCA4C288695BF78F3F71F1515142068CC5DB_marshaled_pinvoke
{
	Il2CppIUnknown* ___msgType_0;
	int32_t ___number_1;
};
// Native definition for COM marshalling of Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair
struct ExtensionIntPair_tA731DCA4C288695BF78F3F71F1515142068CC5DB_marshaled_com
{
	Il2CppIUnknown* ___msgType_0;
	int32_t ___number_1;
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


// System.Byte
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Collections.Generic.List`1_Enumerator<System.Byte[]>
struct  Enumerator_tC0B6B6F583136EC0D5C30E72EE78DDCB14B0156D 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t4AB280456F4DE770AC993DE9A7C8C563A6311531 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tC0B6B6F583136EC0D5C30E72EE78DDCB14B0156D, ___list_0)); }
	inline List_1_t4AB280456F4DE770AC993DE9A7C8C563A6311531 * get_list_0() const { return ___list_0; }
	inline List_1_t4AB280456F4DE770AC993DE9A7C8C563A6311531 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t4AB280456F4DE770AC993DE9A7C8C563A6311531 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tC0B6B6F583136EC0D5C30E72EE78DDCB14B0156D, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tC0B6B6F583136EC0D5C30E72EE78DDCB14B0156D, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tC0B6B6F583136EC0D5C30E72EE78DDCB14B0156D, ___current_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_current_3() const { return ___current_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<System.Object>
struct  Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___list_0)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_list_0() const { return ___list_0; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
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

// System.IO.Stream
struct  Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:
	// System.IO.Stream_ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * ____asyncActiveSemaphore_3;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_2() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7, ____activeReadWriteTask_2)); }
	inline ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * get__activeReadWriteTask_2() const { return ____activeReadWriteTask_2; }
	inline ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 ** get_address_of__activeReadWriteTask_2() { return &____activeReadWriteTask_2; }
	inline void set__activeReadWriteTask_2(ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * value)
	{
		____activeReadWriteTask_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_2), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_3() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7, ____asyncActiveSemaphore_3)); }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * get__asyncActiveSemaphore_3() const { return ____asyncActiveSemaphore_3; }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 ** get_address_of__asyncActiveSemaphore_3() { return &____asyncActiveSemaphore_3; }
	inline void set__asyncActiveSemaphore_3(SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * value)
	{
		____asyncActiveSemaphore_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_3), (void*)value);
	}
};

struct Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_StaticFields, ___Null_1)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_Null_1() const { return ___Null_1; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
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


// System.Int64
struct  Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
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


// Google.ProtocolBuffers.WireFormat_WireType
struct  WireType_t8CD0ECF3E37384246B0EAEFD7C939129743ED620 
{
public:
	// System.UInt32 Google.ProtocolBuffers.WireFormat_WireType::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WireType_t8CD0ECF3E37384246B0EAEFD7C939129743ED620, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
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


// Google.ProtocolBuffers.UninitializedMessageException
struct  UninitializedMessageException_t1339F5C8F06420A91D3E15FC76A28F1A077AE516  : public Exception_t
{
public:
	// System.Collections.Generic.IList`1<System.String> Google.ProtocolBuffers.UninitializedMessageException::missingFields
	RuntimeObject* ___missingFields_17;

public:
	inline static int32_t get_offset_of_missingFields_17() { return static_cast<int32_t>(offsetof(UninitializedMessageException_t1339F5C8F06420A91D3E15FC76A28F1A077AE516, ___missingFields_17)); }
	inline RuntimeObject* get_missingFields_17() const { return ___missingFields_17; }
	inline RuntimeObject** get_address_of_missingFields_17() { return &___missingFields_17; }
	inline void set_missingFields_17(RuntimeObject* value)
	{
		___missingFields_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___missingFields_17), (void*)value);
	}
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


// System.IO.IOException
struct  IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.IO.IOException::_maybeFullPath
	String_t* ____maybeFullPath_17;

public:
	inline static int32_t get_offset_of__maybeFullPath_17() { return static_cast<int32_t>(offsetof(IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA, ____maybeFullPath_17)); }
	inline String_t* get__maybeFullPath_17() const { return ____maybeFullPath_17; }
	inline String_t** get_address_of__maybeFullPath_17() { return &____maybeFullPath_17; }
	inline void set__maybeFullPath_17(String_t* value)
	{
		____maybeFullPath_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____maybeFullPath_17), (void*)value);
	}
};


// System.InvalidOperationException
struct  InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// Google.ProtocolBuffers.CodedOutputStream_OutOfSpaceException
struct  OutOfSpaceException_t6BC55F41676DE61CC27D6EE98E044FE5C4C7BE5E  : public IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA
{
public:

public:
};


// Google.ProtocolBuffers.InvalidProtocolBufferException
struct  InvalidProtocolBufferException_t33420AA524353DDC202DCBD0462457CC2AA7B4F9  : public IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF53CF77928EFDC5526D16A693C3F6C8B4325EC62_gshared (Dictionary_2_t5D53CD85F2109E3D1CFF0CF3015A8488BE5B6124 * __this, const RuntimeMethod* method);

// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_m1F882D595976063718AF6E405664FC761924D353 (RuntimeArray * ___src0, int32_t ___srcOffset1, RuntimeArray * ___dst2, int32_t ___dstOffset3, int32_t ___count4, const RuntimeMethod* method);
// System.Void Google.ProtocolBuffers.ByteArray::ByteCopy(System.Byte[],System.Int32,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteArray_ByteCopy_m94ECDFD1389C9541A9F67272EE4EE4B3C9E4A0BB (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___src0, int32_t ___srcOffset1, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___dst2, int32_t ___dstOffset3, int32_t ___count4, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.Byte> Google.ProtocolBuffers.ByteString::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ByteString_GetEnumerator_mBC3C445EB21B657575B4BA250D0B3816561A4249 (ByteString_t484699ED4C1CFF8928F9242C75BD5F6532CF768A * __this, const RuntimeMethod* method);
// Google.ProtocolBuffers.CodedInputStream Google.ProtocolBuffers.CodedInputStream::CreateInstance(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E * CodedInputStream_CreateInstance_mDCCBF7B8F327F1FDD334431F754FEF73841F3D85 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buf0, const RuntimeMethod* method);
// System.Boolean Google.ProtocolBuffers.ByteString::Equals(Google.ProtocolBuffers.ByteString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ByteString_Equals_mEFC46C0676208219A7AEF437AF30BC0160B87BA8 (ByteString_t484699ED4C1CFF8928F9242C75BD5F6532CF768A * __this, ByteString_t484699ED4C1CFF8928F9242C75BD5F6532CF768A * ___other0, const RuntimeMethod* method);
// System.Void Google.ProtocolBuffers.ByteString::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteString__ctor_m77972159D66DA7ECFBD8E7B620B65D85B9ACD041 (ByteString_t484699ED4C1CFF8928F9242C75BD5F6532CF768A * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes0, const RuntimeMethod* method);
// System.Boolean Google.ProtocolBuffers.CodedInputStream::RefillBuffer(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CodedInputStream_RefillBuffer_mAFD4A09A9127023CB6024245B27394DC234C242F (CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E * __this, bool ___mustSucceed0, const RuntimeMethod* method);
// System.Void Google.ProtocolBuffers.CodedInputStream::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedInputStream__ctor_m60B9F9B76FAA08808B1243A383E5E2CCCAFFC9F6 (CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___input0, const RuntimeMethod* method);
// System.Void Google.ProtocolBuffers.CodedInputStream::.ctor(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedInputStream__ctor_m25002ECFA7626046D8621E40717D71243CDBE91E (CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method);
// Google.ProtocolBuffers.InvalidProtocolBufferException Google.ProtocolBuffers.InvalidProtocolBufferException::InvalidEndTag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InvalidProtocolBufferException_t33420AA524353DDC202DCBD0462457CC2AA7B4F9 * InvalidProtocolBufferException_InvalidEndTag_m44C403DCD5ABF407C892941533DEA994CA3A0988 (const RuntimeMethod* method);
// System.Boolean Google.ProtocolBuffers.CodedInputStream::ReadTag(System.UInt32&,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CodedInputStream_ReadTag_m23AD3CE9C1EA9C2A60CDF47055EFD90C8478A9F4 (CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E * __this, uint32_t* ___fieldTag0, String_t** ___fieldName1, const RuntimeMethod* method);
// System.Boolean Google.ProtocolBuffers.CodedInputStream::get_IsAtEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CodedInputStream_get_IsAtEnd_m8417EC83EC7CE827735CE42EFF467BDAC85D567E (CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E * __this, const RuntimeMethod* method);
// System.UInt32 Google.ProtocolBuffers.CodedInputStream::ReadRawVarint32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CodedInputStream_ReadRawVarint32_m3D50095F615E35805EE5EFF1A95111BEE84A0F83 (CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E * __this, const RuntimeMethod* method);
// Google.ProtocolBuffers.InvalidProtocolBufferException Google.ProtocolBuffers.InvalidProtocolBufferException::InvalidTag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InvalidProtocolBufferException_t33420AA524353DDC202DCBD0462457CC2AA7B4F9 * InvalidProtocolBufferException_InvalidTag_m9DBE12CAA1E271794334B86D0BA59CBD5648B1E5 (const RuntimeMethod* method);
// System.Single System.BitConverter::ToSingle(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BitConverter_ToSingle_m5A87B9C607E24D0F283EB39990FAF7ABAB1CBB17 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___value0, int32_t ___startIndex1, const RuntimeMethod* method);
// System.Byte[] Google.ProtocolBuffers.CodedInputStream::ReadRawBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* CodedInputStream_ReadRawBytes_m60E3439632092B8C7EE2D22682B7F7DC672184CA (CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E * __this, int32_t ___size0, const RuntimeMethod* method);
// System.Void Google.ProtocolBuffers.ByteArray::Reverse(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteArray_Reverse_m34CB3CB538881691666A11172E354C907CC19910 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes0, const RuntimeMethod* method);
// System.UInt64 Google.ProtocolBuffers.CodedInputStream::ReadRawVarint64()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CodedInputStream_ReadRawVarint64_mDD7099D0590839AFA896E033EECD43E82B834071 (CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E * __this, const RuntimeMethod* method);
// Google.ProtocolBuffers.InvalidProtocolBufferException Google.ProtocolBuffers.InvalidProtocolBufferException::RecursionLimitExceeded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InvalidProtocolBufferException_t33420AA524353DDC202DCBD0462457CC2AA7B4F9 * InvalidProtocolBufferException_RecursionLimitExceeded_m4D9BE2951461ECA65434439A0E1E12C878B16735 (const RuntimeMethod* method);
// System.Int32 Google.ProtocolBuffers.CodedInputStream::PushLimit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CodedInputStream_PushLimit_m055A0982177C87205DA4AB870A4C0CF56AFE9C7E (CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E * __this, int32_t ___byteLimit0, const RuntimeMethod* method);
// System.Void Google.ProtocolBuffers.CodedInputStream::CheckLastTagWas(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedInputStream_CheckLastTagWas_m0DAA172667D4075A6914716396E1CDFF96CAF5A3 (CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E * __this, uint32_t ___value0, const RuntimeMethod* method);
// System.Void Google.ProtocolBuffers.CodedInputStream::PopLimit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedInputStream_PopLimit_m194E43997E0D1E8EF3C6F6A67C7350F60AD92465 (CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E * __this, int32_t ___oldLimit0, const RuntimeMethod* method);
// Google.ProtocolBuffers.WireFormat/WireType Google.ProtocolBuffers.WireFormat::GetTagWireType(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t WireFormat_GetTagWireType_mC2E691E0C75357305D00F3BB6AB2783764E86B1A (uint32_t ___tag0, const RuntimeMethod* method);
// System.Boolean Google.ProtocolBuffers.CodedInputStream::PeekNextTag(System.UInt32&,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CodedInputStream_PeekNextTag_m2D28A65E348CF9D6E884D6A4428B385D3B88568F (CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E * __this, uint32_t* ___fieldTag0, String_t** ___fieldName1, const RuntimeMethod* method);
// System.Boolean Google.ProtocolBuffers.CodedInputStream::get_ReachedLimit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CodedInputStream_get_ReachedLimit_m8736B51914163DE2A8837C2288A079F06C86FB64 (CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E * __this, const RuntimeMethod* method);
// System.Boolean Google.ProtocolBuffers.CodedInputStream::BeginArray(System.UInt32,System.Boolean&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CodedInputStream_BeginArray_m42A2EF56555A3ACE3DE02F1E55991703473174B3 (CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E * __this, uint32_t ___fieldTag0, bool* ___isPacked1, int32_t* ___oldLimit2, const RuntimeMethod* method);
// System.Boolean Google.ProtocolBuffers.CodedInputStream::ReadFloat(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CodedInputStream_ReadFloat_mD9086AA478EBB9116119E886132EB77A34057BF7 (CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E * __this, float* ___value0, const RuntimeMethod* method);
// System.Boolean Google.ProtocolBuffers.CodedInputStream::ContinueArray(System.UInt32,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CodedInputStream_ContinueArray_m89C18ABC3064B5E3173D09BFA8FC6263A670B639 (CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E * __this, uint32_t ___currentTag0, bool ___packed1, int32_t ___oldLimit2, const RuntimeMethod* method);
// System.Byte Google.ProtocolBuffers.CodedInputStream::ReadRawByte()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t CodedInputStream_ReadRawByte_m511DFAE58BB34C5CEC4487BEFDD2EB72016E7F70 (CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E * __this, const RuntimeMethod* method);
// Google.ProtocolBuffers.InvalidProtocolBufferException Google.ProtocolBuffers.InvalidProtocolBufferException::MalformedVarint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InvalidProtocolBufferException_t33420AA524353DDC202DCBD0462457CC2AA7B4F9 * InvalidProtocolBufferException_MalformedVarint_m0756001DC26E773821E1279F93937EBE65D39634 (const RuntimeMethod* method);
// System.UInt32 Google.ProtocolBuffers.CodedInputStream::SlowReadRawVarint32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CodedInputStream_SlowReadRawVarint32_m4BD0F8ACC2A9B6335AB0B17D19AFE65109DD63DC (CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E * __this, const RuntimeMethod* method);
// Google.ProtocolBuffers.InvalidProtocolBufferException Google.ProtocolBuffers.InvalidProtocolBufferException::TruncatedMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InvalidProtocolBufferException_t33420AA524353DDC202DCBD0462457CC2AA7B4F9 * InvalidProtocolBufferException_TruncatedMessage_m0F1518DA8E834E0AA913C21046D14AE4F332A23F (const RuntimeMethod* method);
// Google.ProtocolBuffers.InvalidProtocolBufferException Google.ProtocolBuffers.InvalidProtocolBufferException::NegativeSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InvalidProtocolBufferException_t33420AA524353DDC202DCBD0462457CC2AA7B4F9 * InvalidProtocolBufferException_NegativeSize_mE83794AAC7C961105F3DE44D5128635DD49D87E5 (const RuntimeMethod* method);
// System.Void Google.ProtocolBuffers.CodedInputStream::RecomputeBufferSizeAfterLimit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedInputStream_RecomputeBufferSizeAfterLimit_m9C20EE52E2D94F82A602FA3EF3DA5CB87E0A2EE7 (CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E * __this, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706 (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * __this, String_t* ___message0, const RuntimeMethod* method);
// Google.ProtocolBuffers.InvalidProtocolBufferException Google.ProtocolBuffers.InvalidProtocolBufferException::SizeLimitExceeded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InvalidProtocolBufferException_t33420AA524353DDC202DCBD0462457CC2AA7B4F9 * InvalidProtocolBufferException_SizeLimitExceeded_m3BEC675C6D09C08DED8EF7C8BA2FC3A015895B47 (const RuntimeMethod* method);
// System.Void Google.ProtocolBuffers.CodedInputStream::SkipRawBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedInputStream_SkipRawBytes_m8EC3B6FCCE8F72B0DA9DE76DDCE8964904676108 (CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E * __this, int32_t ___size0, const RuntimeMethod* method);
// System.Void Google.ProtocolBuffers.ByteArray::Copy(System.Byte[],System.Int32,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteArray_Copy_m557A996C1B60E97D2E479EEE8D9CB321AB75B8FF (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___src0, int32_t ___srcOffset1, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___dst2, int32_t ___dstOffset3, int32_t ___count4, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Byte[]>::.ctor()
inline void List_1__ctor_m52FC81AB50BD21B6BFA16546E3AF9C94611D9811 (List_1_t4AB280456F4DE770AC993DE9A7C8C563A6311531 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4AB280456F4DE770AC993DE9A7C8C563A6311531 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_mC950438198519FB2B0260FCB91220847EE4BB525 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Add(!0)
inline void List_1_Add_mCC9D38BB3CBE3F2E67EDF3390D36ABFAD293468E (List_1_t4AB280456F4DE770AC993DE9A7C8C563A6311531 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4AB280456F4DE770AC993DE9A7C8C563A6311531 *, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Byte[]>::GetEnumerator()
inline Enumerator_tC0B6B6F583136EC0D5C30E72EE78DDCB14B0156D  List_1_GetEnumerator_m84AFF0B8BC2B832C145F5252E1A2356E7CBEA664 (List_1_t4AB280456F4DE770AC993DE9A7C8C563A6311531 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tC0B6B6F583136EC0D5C30E72EE78DDCB14B0156D  (*) (List_1_t4AB280456F4DE770AC993DE9A7C8C563A6311531 *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Byte[]>::get_Current()
inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* Enumerator_get_Current_m9D6CD526545E123E983BCA908194AA1E30833B0A_inline (Enumerator_tC0B6B6F583136EC0D5C30E72EE78DDCB14B0156D * __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* (*) (Enumerator_tC0B6B6F583136EC0D5C30E72EE78DDCB14B0156D *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Byte[]>::MoveNext()
inline bool Enumerator_MoveNext_mD3CC74979D47180FD9ECF7046BBE6D93E106FB1E (Enumerator_tC0B6B6F583136EC0D5C30E72EE78DDCB14B0156D * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tC0B6B6F583136EC0D5C30E72EE78DDCB14B0156D *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Byte[]>::Dispose()
inline void Enumerator_Dispose_m8705DA716860C4D15AEC6B46F0A2A3CBBE0225E1 (Enumerator_tC0B6B6F583136EC0D5C30E72EE78DDCB14B0156D * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tC0B6B6F583136EC0D5C30E72EE78DDCB14B0156D *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// System.UInt64 Google.ProtocolBuffers.CodedInputStream::ReadRawLittleEndian64()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CodedInputStream_ReadRawLittleEndian64_m0DC389BC213758ED97481456E282ED2CF0000E42 (CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E * __this, const RuntimeMethod* method);
// System.Void Google.ProtocolBuffers.CodedInputStream::SkipMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedInputStream_SkipMessage_mB6E7938C82845EA0474DCCC8122DD5BE8C634DF0 (CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E * __this, const RuntimeMethod* method);
// System.Int32 Google.ProtocolBuffers.WireFormat::GetTagFieldNumber(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WireFormat_GetTagFieldNumber_m8F294B6FC91FDE36C55F136E66FB73543C537018 (uint32_t ___tag0, const RuntimeMethod* method);
// System.UInt32 Google.ProtocolBuffers.WireFormat::MakeTag(System.Int32,Google.ProtocolBuffers.WireFormat/WireType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t WireFormat_MakeTag_m9BF62F1578FA7B2877A8D1458026E19AAFE3964F (int32_t ___fieldNumber0, uint32_t ___wireType1, const RuntimeMethod* method);
// System.UInt32 Google.ProtocolBuffers.CodedInputStream::ReadRawLittleEndian32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CodedInputStream_ReadRawLittleEndian32_m701343A2D5D3D8BBB543E45C171B1251BFD55658 (CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E * __this, const RuntimeMethod* method);
// Google.ProtocolBuffers.InvalidProtocolBufferException Google.ProtocolBuffers.InvalidProtocolBufferException::InvalidWireType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InvalidProtocolBufferException_t33420AA524353DDC202DCBD0462457CC2AA7B4F9 * InvalidProtocolBufferException_InvalidWireType_m51F656A8F5AE76B6CD8ED343F712CFF4255D2F3F (const RuntimeMethod* method);
// System.Boolean Google.ProtocolBuffers.CodedInputStream::SkipField()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CodedInputStream_SkipField_m8D83720F0C50B636EAA76C82C9993FABF8EBF907 (CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E * __this, const RuntimeMethod* method);
// System.Void Google.ProtocolBuffers.CodedInputStream::SkipImpl(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedInputStream_SkipImpl_m4CBC750F18077F37088AF8F8A28E664AB323DF88 (CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E * __this, int32_t ___amountToSkip0, const RuntimeMethod* method);
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeTagSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CodedOutputStream_ComputeTagSize_mE2C32E82317507B0C0E344AC0D218A8F6EA12CBE (int32_t ___fieldNumber0, const RuntimeMethod* method);
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeRawVarint64Size(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CodedOutputStream_ComputeRawVarint64Size_mA787C8FE03DED2971D70313ABC7B71F37F466B82 (uint64_t ___value0, const RuntimeMethod* method);
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeRawVarint32Size(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CodedOutputStream_ComputeRawVarint32Size_mBB34A0D2142D18730820495009D674EB2F889E32 (uint32_t ___value0, const RuntimeMethod* method);
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeEnumSizeNoTag(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CodedOutputStream_ComputeEnumSizeNoTag_mCB5B90A0B231A5802F44CFC5ADAEB1242F0553C5 (int32_t ___value0, const RuntimeMethod* method);
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeInt32SizeNoTag(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CodedOutputStream_ComputeInt32SizeNoTag_m370909614401731E07D4DEACEF7488A38A30B01C (int32_t ___value0, const RuntimeMethod* method);
// Google.ProtocolBuffers.CodedOutputStream Google.ProtocolBuffers.CodedOutputStream::CreateInstance(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CodedOutputStream_t6FF414144C567C520A212C17587CA998689956E3 * CodedOutputStream_CreateInstance_mB40511EA02D789AE51561B3B3A2A0F7A54CC1DD5 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___flatArray0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method);
// System.Void Google.ProtocolBuffers.CodedOutputStream::.ctor(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedOutputStream__ctor_m5440A4DAF33751466097FD4CD85D7A7562BDA564 (CodedOutputStream_t6FF414144C567C520A212C17587CA998689956E3 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method);
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteTag(System.Int32,Google.ProtocolBuffers.WireFormat/WireType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedOutputStream_WriteTag_mAD0902B5FFE753EFD6C311DDFB11C77703DE9F31 (CodedOutputStream_t6FF414144C567C520A212C17587CA998689956E3 * __this, int32_t ___fieldNumber0, uint32_t ___type1, const RuntimeMethod* method);
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteFloatNoTag(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedOutputStream_WriteFloatNoTag_m237A87522C5A2E3AF41EB69F7B0DF415F7A87B95 (CodedOutputStream_t6FF414144C567C520A212C17587CA998689956E3 * __this, float ___value0, const RuntimeMethod* method);
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteRawVarint64(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedOutputStream_WriteRawVarint64_mEB769FF529708B0B04BAA1FCC5843351E255F681 (CodedOutputStream_t6FF414144C567C520A212C17587CA998689956E3 * __this, uint64_t ___value0, const RuntimeMethod* method);
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteRawVarint32(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedOutputStream_WriteRawVarint32_m600FA15E7AE0A175329E1213BD91F4D27B8F43E7 (CodedOutputStream_t6FF414144C567C520A212C17587CA998689956E3 * __this, uint32_t ___value0, const RuntimeMethod* method);
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteInt32NoTag(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedOutputStream_WriteInt32NoTag_m44A3C8BF676D904191FEA4C1C744449631AE4EA8 (CodedOutputStream_t6FF414144C567C520A212C17587CA998689956E3 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Byte[] System.BitConverter::GetBytes(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* BitConverter_GetBytes_m5795DECB822051D8BBF3EA92DD3B2372E017ADAF (float ___value0, const RuntimeMethod* method);
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteRawBytes(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedOutputStream_WriteRawBytes_mC6EF30495677ECD22E0F6055388DD33D7592B2B0 (CodedOutputStream_t6FF414144C567C520A212C17587CA998689956E3 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___value0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method);
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteRawByte(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedOutputStream_WriteRawByte_m2E7A872FBE5B33184F0106F8797920B7A17A6AA6 (CodedOutputStream_t6FF414144C567C520A212C17587CA998689956E3 * __this, uint8_t ___value0, const RuntimeMethod* method);
// System.Void Google.ProtocolBuffers.CodedOutputStream::RefreshBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedOutputStream_RefreshBuffer_m228716090B0D4D7716E2FA4E1EBFCE4061F65B0A (CodedOutputStream_t6FF414144C567C520A212C17587CA998689956E3 * __this, const RuntimeMethod* method);
// System.Void Google.ProtocolBuffers.CodedOutputStream/OutOfSpaceException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutOfSpaceException__ctor_m5B2FF11494FCA787A208E50C60B5D250C87B9249 (OutOfSpaceException_t6BC55F41676DE61CC27D6EE98E044FE5C4C7BE5E * __this, const RuntimeMethod* method);
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::get_SpaceLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CodedOutputStream_get_SpaceLeft_mADAF9D8D680791DD50C0ED974809FA602BD2BB8C (CodedOutputStream_t6FF414144C567C520A212C17587CA998689956E3 * __this, const RuntimeMethod* method);
// System.Void System.IO.IOException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOException__ctor_mB64DEFB376AA8E279A647A3770F913B20EF65175 (IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.Dictionary`2<System.String,Google.ProtocolBuffers.IGeneratedExtensionLite>>::.ctor()
inline void Dictionary_2__ctor_m6E310B3BE9BAB20C277774572444FC00E1BB76EC (Dictionary_2_t418F30137BF00E0E9EFF2A2DB75AB3A010190D9B * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t418F30137BF00E0E9EFF2A2DB75AB3A010190D9B *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,Google.ProtocolBuffers.IGeneratedExtensionLite>::.ctor()
inline void Dictionary_2__ctor_mEB4C29112CBC2CF1E636806831A9972B0BE0A5F9 (Dictionary_2_t36E2ECEC38081A5C8DF6DED6117C7CE5B2491886 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t36E2ECEC38081A5C8DF6DED6117C7CE5B2491886 *, const RuntimeMethod*))Dictionary_2__ctor_mF53CF77928EFDC5526D16A693C3F6C8B4325EC62_gshared)(__this, method);
}
// System.Void Google.ProtocolBuffers.ExtensionRegistry::.ctor(System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.Dictionary`2<System.String,Google.ProtocolBuffers.IGeneratedExtensionLite>>,System.Collections.Generic.Dictionary`2<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,Google.ProtocolBuffers.IGeneratedExtensionLite>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtensionRegistry__ctor_mF4099F865F601799805753719699B51A1F8BF699 (ExtensionRegistry_tAC8BBAEAD627B80DF852E93F941EF92FB4C8558E * __this, Dictionary_2_t418F30137BF00E0E9EFF2A2DB75AB3A010190D9B * ___byName0, Dictionary_2_t36E2ECEC38081A5C8DF6DED6117C7CE5B2491886 * ___byNumber1, bool ___readOnly2, const RuntimeMethod* method);
// System.Int32 Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExtensionIntPair_GetHashCode_m1D21D9A1D7D3E5A2ECEE9383AF118B4F3D82D299 (ExtensionIntPair_tA731DCA4C288695BF78F3F71F1515142068CC5DB * __this, const RuntimeMethod* method);
// System.Boolean Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair::Equals(Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExtensionIntPair_Equals_m8276EEC0E6636D5526116D44148196AAC89AADB2 (ExtensionIntPair_tA731DCA4C288695BF78F3F71F1515142068CC5DB * __this, ExtensionIntPair_tA731DCA4C288695BF78F3F71F1515142068CC5DB  ___other0, const RuntimeMethod* method);
// System.Boolean Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExtensionIntPair_Equals_m224294E7F9245BCED0B0DD828A59F136212F97C4 (ExtensionIntPair_tA731DCA4C288695BF78F3F71F1515142068CC5DB * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72 (const RuntimeMethod* method);
// System.String System.Environment::get_NewLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_get_NewLine_m5D4F4667FA5D1E2DBDD4DF9696D0CE76C83EF318 (const RuntimeMethod* method);
// System.Void Google.ProtocolBuffers.InvalidProtocolBufferException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidProtocolBufferException__ctor_m82587930FDC7CF75A04B507E73E644DBF28BCF0E (InvalidProtocolBufferException_t33420AA524353DDC202DCBD0462457CC2AA7B4F9 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m682F47F1DE29EBE74F44F6478D3C17D176C63510 (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * __this, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60 (RuntimeObject * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06 (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
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
// System.Void Google.ProtocolBuffers.ByteArray::Copy(System.Byte[],System.Int32,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteArray_Copy_m557A996C1B60E97D2E479EEE8D9CB321AB75B8FF (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___src0, int32_t ___srcOffset1, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___dst2, int32_t ___dstOffset3, int32_t ___count4, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___count4;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)12))))
		{
			goto IL_0019;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___src0;
		int32_t L_2 = ___srcOffset1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = ___dst2;
		int32_t L_4 = ___dstOffset3;
		int32_t L_5 = ___count4;
		Buffer_BlockCopy_m1F882D595976063718AF6E405664FC761924D353((RuntimeArray *)(RuntimeArray *)L_1, L_2, (RuntimeArray *)(RuntimeArray *)L_3, L_4, L_5, /*hidden argument*/NULL);
		goto IL_0024;
	}

IL_0019:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = ___src0;
		int32_t L_7 = ___srcOffset1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_8 = ___dst2;
		int32_t L_9 = ___dstOffset3;
		int32_t L_10 = ___count4;
		ByteArray_ByteCopy_m94ECDFD1389C9541A9F67272EE4EE4B3C9E4A0BB(L_6, L_7, L_8, L_9, L_10, /*hidden argument*/NULL);
	}

IL_0024:
	{
		return;
	}
}
// System.Void Google.ProtocolBuffers.ByteArray::ByteCopy(System.Byte[],System.Int32,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteArray_ByteCopy_m94ECDFD1389C9541A9F67272EE4EE4B3C9E4A0BB (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___src0, int32_t ___srcOffset1, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___dst2, int32_t ___dstOffset3, int32_t ___count4, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___srcOffset1;
		int32_t L_1 = ___count4;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1));
		int32_t L_2 = ___srcOffset1;
		V_1 = L_2;
		goto IL_001b;
	}

IL_000c:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = ___dst2;
		int32_t L_4 = ___dstOffset3;
		int32_t L_5 = L_4;
		___dstOffset3 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = ___src0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (uint8_t)L_9);
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_001b:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
// System.Void Google.ProtocolBuffers.ByteArray::Reverse(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteArray_Reverse_m34CB3CB538881691666A11172E354C907CC19910 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes0, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_1 = 0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___bytes0;
		NullCheck(L_0);
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))), (int32_t)1));
		goto IL_0023;
	}

IL_000d:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___bytes0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = ___bytes0;
		int32_t L_6 = V_1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_7 = ___bytes0;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		uint8_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (uint8_t)L_10);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_11 = ___bytes0;
		int32_t L_12 = V_2;
		uint8_t L_13 = V_0;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (uint8_t)L_13);
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)1));
	}

IL_0023:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_2;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_000d;
		}
	}
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
// System.Void Google.ProtocolBuffers.ByteString::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteString__ctor_m77972159D66DA7ECFBD8E7B620B65D85B9ACD041 (ByteString_t484699ED4C1CFF8928F9242C75BD5F6532CF768A * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___bytes0;
		__this->set_bytes_1(L_0);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Byte> Google.ProtocolBuffers.ByteString::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ByteString_GetEnumerator_mBC3C445EB21B657575B4BA250D0B3816561A4249 (ByteString_t484699ED4C1CFF8928F9242C75BD5F6532CF768A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ByteString_GetEnumerator_mBC3C445EB21B657575B4BA250D0B3816561A4249_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get_bytes_1();
		NullCheck((RuntimeObject*)(RuntimeObject*)L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Byte>::GetEnumerator() */, IEnumerable_1_t0BF26EB2CC417639047BF3EFA258F9AECB26A564_il2cpp_TypeInfo_var, (RuntimeObject*)(RuntimeObject*)L_0);
		return L_1;
	}
}
// System.Collections.IEnumerator Google.ProtocolBuffers.ByteString::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ByteString_System_Collections_IEnumerable_GetEnumerator_m34F2DA34980CB755B3D7B2CBE72FA16ED0B48EBF (ByteString_t484699ED4C1CFF8928F9242C75BD5F6532CF768A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ByteString_GetEnumerator_mBC3C445EB21B657575B4BA250D0B3816561A4249(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// Google.ProtocolBuffers.CodedInputStream Google.ProtocolBuffers.ByteString::CreateCodedInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E * ByteString_CreateCodedInput_m82BF44BB2E98BE75D8ED0BFBE1373293745309B1 (ByteString_t484699ED4C1CFF8928F9242C75BD5F6532CF768A * __this, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get_bytes_1();
		CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E * L_1 = CodedInputStream_CreateInstance_mDCCBF7B8F327F1FDD334431F754FEF73841F3D85(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Google.ProtocolBuffers.ByteString::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ByteString_Equals_m4DA87E7B49C2CEA07E21ACA2322430222A9C3163 (ByteString_t484699ED4C1CFF8928F9242C75BD5F6532CF768A * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ByteString_Equals_m4DA87E7B49C2CEA07E21ACA2322430222A9C3163_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteString_t484699ED4C1CFF8928F9242C75BD5F6532CF768A * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___obj0;
		V_0 = ((ByteString_t484699ED4C1CFF8928F9242C75BD5F6532CF768A *)IsInstSealed((RuntimeObject*)L_0, ByteString_t484699ED4C1CFF8928F9242C75BD5F6532CF768A_il2cpp_TypeInfo_var));
		RuntimeObject * L_1 = ___obj0;
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		return (bool)0;
	}

IL_000f:
	{
		ByteString_t484699ED4C1CFF8928F9242C75BD5F6532CF768A * L_2 = V_0;
		bool L_3 = ByteString_Equals_mEFC46C0676208219A7AEF437AF30BC0160B87BA8(__this, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 Google.ProtocolBuffers.ByteString::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ByteString_GetHashCode_m268B011825773C6512A8370AA00979838849D63C (ByteString_t484699ED4C1CFF8928F9242C75BD5F6532CF768A * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_2 = NULL;
	int32_t V_3 = 0;
	{
		V_0 = ((int32_t)23);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get_bytes_1();
		V_2 = L_0;
		V_3 = 0;
		goto IL_001f;
	}

IL_0011:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = V_2;
		int32_t L_2 = V_3;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		int32_t L_5 = V_0;
		uint8_t L_6 = V_1;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_5<<(int32_t)8))|(int32_t)L_6));
		int32_t L_7 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_001f:
	{
		int32_t L_8 = V_3;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_9 = V_2;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_10 = V_0;
		return L_10;
	}
}
// System.Boolean Google.ProtocolBuffers.ByteString::Equals(Google.ProtocolBuffers.ByteString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ByteString_Equals_mEFC46C0676208219A7AEF437AF30BC0160B87BA8 (ByteString_t484699ED4C1CFF8928F9242C75BD5F6532CF768A * __this, ByteString_t484699ED4C1CFF8928F9242C75BD5F6532CF768A * ___other0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		ByteString_t484699ED4C1CFF8928F9242C75BD5F6532CF768A * L_0 = ___other0;
		NullCheck(L_0);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = L_0->get_bytes_1();
		NullCheck(L_1);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = __this->get_bytes_1();
		NullCheck(L_2);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))) == ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))))
		{
			goto IL_0017;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		V_0 = 0;
		goto IL_0039;
	}

IL_001e:
	{
		ByteString_t484699ED4C1CFF8928F9242C75BD5F6532CF768A * L_3 = ___other0;
		NullCheck(L_3);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = L_3->get_bytes_1();
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_8 = __this->get_bytes_1();
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		if ((((int32_t)L_7) == ((int32_t)L_11)))
		{
			goto IL_0035;
		}
	}
	{
		return (bool)0;
	}

IL_0035:
	{
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0039:
	{
		int32_t L_13 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_14 = __this->get_bytes_1();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))))
		{
			goto IL_001e;
		}
	}
	{
		return (bool)1;
	}
}
// System.Void Google.ProtocolBuffers.ByteString::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteString__cctor_mB4E455AD3CC78C9C46FADB102DE08F78400AEEEF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ByteString__cctor_mB4E455AD3CC78C9C46FADB102DE08F78400AEEEF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)0);
		ByteString_t484699ED4C1CFF8928F9242C75BD5F6532CF768A * L_1 = (ByteString_t484699ED4C1CFF8928F9242C75BD5F6532CF768A *)il2cpp_codegen_object_new(ByteString_t484699ED4C1CFF8928F9242C75BD5F6532CF768A_il2cpp_TypeInfo_var);
		ByteString__ctor_m77972159D66DA7ECFBD8E7B620B65D85B9ACD041(L_1, L_0, /*hidden argument*/NULL);
		((ByteString_t484699ED4C1CFF8928F9242C75BD5F6532CF768A_StaticFields*)il2cpp_codegen_static_fields_for(ByteString_t484699ED4C1CFF8928F9242C75BD5F6532CF768A_il2cpp_TypeInfo_var))->set_empty_0(L_1);
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
// System.Void Google.ProtocolBuffers.CodedInputStream::.ctor(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedInputStream__ctor_m25002ECFA7626046D8621E40717D71243CDBE91E (CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method)
{
	{
		__this->set_bufferSizeAfterLimit_2(0);
		__this->set_bufferPos_3(0);
		__this->set_lastTag_5(0);
		__this->set_nextTag_6(0);
		__this->set_hasNextTag_7((bool)0);
		__this->set_totalBytesRetired_8(0);
		__this->set_currentLimit_9(((int32_t)2147483647LL));
		__this->set_recursionDepth_10(0);
		__this->set_recursionLimit_11(((int32_t)64));
		__this->set_sizeLimit_12(((int32_t)67108864));
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___buffer0;
		__this->set_buffer_0(L_0);
		int32_t L_1 = ___offset1;
		__this->set_bufferPos_3(L_1);
		int32_t L_2 = ___offset1;
		int32_t L_3 = ___length2;
		__this->set_bufferSize_1(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3)));
		__this->set_input_4((Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 *)NULL);
		return;
	}
}
// System.Void Google.ProtocolBuffers.CodedInputStream::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedInputStream__ctor_m60B9F9B76FAA08808B1243A383E5E2CCCAFFC9F6 (CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodedInputStream__ctor_m60B9F9B76FAA08808B1243A383E5E2CCCAFFC9F6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_bufferSizeAfterLimit_2(0);
		__this->set_bufferPos_3(0);
		__this->set_lastTag_5(0);
		__this->set_nextTag_6(0);
		__this->set_hasNextTag_7((bool)0);
		__this->set_totalBytesRetired_8(0);
		__this->set_currentLimit_9(((int32_t)2147483647LL));
		__this->set_recursionDepth_10(0);
		__this->set_recursionLimit_11(((int32_t)64));
		__this->set_sizeLimit_12(((int32_t)67108864));
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)4096));
		__this->set_buffer_0(L_0);
		__this->set_bufferSize_1(0);
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_1 = ___input0;
		__this->set_input_4(L_1);
		return;
	}
}
// System.Boolean Google.ProtocolBuffers.CodedInputStream::get_ReachedLimit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CodedInputStream_get_ReachedLimit_m8736B51914163DE2A8837C2288A079F06C86FB64 (CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_currentLimit_9();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)2147483647LL)))))
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		int32_t L_1 = __this->get_totalBytesRetired_8();
		int32_t L_2 = __this->get_bufferPos_3();
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2));
		int32_t L_3 = V_0;
		int32_t L_4 = __this->get_currentLimit_9();
		return (bool)((((int32_t)((((int32_t)L_3) < ((int32_t)L_4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Google.ProtocolBuffers.CodedInputStream::get_IsAtEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CodedInputStream_get_IsAtEnd_m8417EC83EC7CE827735CE42EFF467BDAC85D567E (CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E * __this, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = __this->get_bufferPos_3();
		int32_t L_1 = __this->get_bufferSize_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_001d;
		}
	}
	{
		bool L_2 = CodedInputStream_RefillBuffer_mAFD4A09A9127023CB6024245B27394DC234C242F(__this, (bool)0, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 0;
	}

IL_001e:
	{
		return (bool)G_B3_0;
	}
}
// Google.ProtocolBuffers.CodedInputStream Google.ProtocolBuffers.CodedInputStream::CreateInstance(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E * CodedInputStream_CreateInstance_mED0E557FA356ADBC18ED093E2D7BF13840CF0E44 (Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodedInputStream_CreateInstance_mED0E557FA356ADBC18ED093E2D7BF13840CF0E44_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_0 = ___input0;
		CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E * L_1 = (CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E *)il2cpp_codegen_object_new(CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E_il2cpp_TypeInfo_var);
		CodedInputStream__ctor_m60B9F9B76FAA08808B1243A383E5E2CCCAFFC9F6(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Google.ProtocolBuffers.CodedInputStream Google.ProtocolBuffers.CodedInputStream::CreateInstance(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E * CodedInputStream_CreateInstance_mDCCBF7B8F327F1FDD334431F754FEF73841F3D85 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buf0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodedInputStream_CreateInstance_mDCCBF7B8F327F1FDD334431F754FEF73841F3D85_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___buf0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___buf0;
		NullCheck(L_1);
		CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E * L_2 = (CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E *)il2cpp_codegen_object_new(CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E_il2cpp_TypeInfo_var);
		CodedInputStream__ctor_m25002ECFA7626046D8621E40717D71243CDBE91E(L_2, L_0, 0, (((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))), /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void Google.ProtocolBuffers.CodedInputStream::CheckLastTagWas(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedInputStream_CheckLastTagWas_m0DAA172667D4075A6914716396E1CDFF96CAF5A3 (CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodedInputStream_CheckLastTagWas_m0DAA172667D4075A6914716396E1CDFF96CAF5A3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0 = __this->get_lastTag_5();
		uint32_t L_1 = ___value0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		InvalidProtocolBufferException_t33420AA524353DDC202DCBD0462457CC2AA7B4F9 * L_2 = InvalidProtocolBufferException_InvalidEndTag_m44C403DCD5ABF407C892941533DEA994CA3A0988(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, CodedInputStream_CheckLastTagWas_m0DAA172667D4075A6914716396E1CDFF96CAF5A3_RuntimeMethod_var);
	}

IL_0012:
	{
		return;
	}
}
// System.Boolean Google.ProtocolBuffers.CodedInputStream::PeekNextTag(System.UInt32&,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CodedInputStream_PeekNextTag_m2D28A65E348CF9D6E884D6A4428B385D3B88568F (CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E * __this, uint32_t* ___fieldTag0, String_t** ___fieldName1, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		bool L_0 = __this->get_hasNextTag_7();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		String_t** L_1 = ___fieldName1;
		*((RuntimeObject **)L_1) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_1, (void*)(RuntimeObject *)NULL);
		uint32_t* L_2 = ___fieldTag0;
		uint32_t L_3 = __this->get_nextTag_6();
		*((int32_t*)L_2) = (int32_t)L_3;
		return (bool)1;
	}

IL_0018:
	{
		uint32_t L_4 = __this->get_lastTag_5();
		V_0 = L_4;
		uint32_t* L_5 = __this->get_address_of_nextTag_6();
		String_t** L_6 = ___fieldName1;
		bool L_7 = CodedInputStream_ReadTag_m23AD3CE9C1EA9C2A60CDF47055EFD90C8478A9F4(__this, (uint32_t*)L_5, (String_t**)L_6, /*hidden argument*/NULL);
		__this->set_hasNextTag_7(L_7);
		uint32_t L_8 = V_0;
		__this->set_lastTag_5(L_8);
		uint32_t* L_9 = ___fieldTag0;
		uint32_t L_10 = __this->get_nextTag_6();
		*((int32_t*)L_9) = (int32_t)L_10;
		bool L_11 = __this->get_hasNextTag_7();
		return L_11;
	}
}
// System.Boolean Google.ProtocolBuffers.CodedInputStream::ReadTag(System.UInt32&,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CodedInputStream_ReadTag_m23AD3CE9C1EA9C2A60CDF47055EFD90C8478A9F4 (CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E * __this, uint32_t* ___fieldTag0, String_t** ___fieldName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodedInputStream_ReadTag_m23AD3CE9C1EA9C2A60CDF47055EFD90C8478A9F4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t** L_0 = ___fieldName1;
		*((RuntimeObject **)L_0) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_0, (void*)(RuntimeObject *)NULL);
		bool L_1 = __this->get_hasNextTag_7();
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		uint32_t* L_2 = ___fieldTag0;
		uint32_t L_3 = __this->get_nextTag_6();
		*((int32_t*)L_2) = (int32_t)L_3;
		uint32_t* L_4 = ___fieldTag0;
		int32_t L_5 = *((uint32_t*)L_4);
		__this->set_lastTag_5(L_5);
		__this->set_hasNextTag_7((bool)0);
		return (bool)1;
	}

IL_0027:
	{
		bool L_6 = CodedInputStream_get_IsAtEnd_m8417EC83EC7CE827735CE42EFF467BDAC85D567E(__this, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_003f;
		}
	}
	{
		uint32_t* L_7 = ___fieldTag0;
		*((int32_t*)L_7) = (int32_t)0;
		uint32_t* L_8 = ___fieldTag0;
		int32_t L_9 = *((uint32_t*)L_8);
		__this->set_lastTag_5(L_9);
		return (bool)0;
	}

IL_003f:
	{
		uint32_t* L_10 = ___fieldTag0;
		uint32_t L_11 = CodedInputStream_ReadRawVarint32_m3D50095F615E35805EE5EFF1A95111BEE84A0F83(__this, /*hidden argument*/NULL);
		*((int32_t*)L_10) = (int32_t)L_11;
		uint32_t* L_12 = ___fieldTag0;
		int32_t L_13 = *((uint32_t*)L_12);
		__this->set_lastTag_5(L_13);
		uint32_t L_14 = __this->get_lastTag_5();
		if (L_14)
		{
			goto IL_0060;
		}
	}
	{
		InvalidProtocolBufferException_t33420AA524353DDC202DCBD0462457CC2AA7B4F9 * L_15 = InvalidProtocolBufferException_InvalidTag_m9DBE12CAA1E271794334B86D0BA59CBD5648B1E5(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, CodedInputStream_ReadTag_m23AD3CE9C1EA9C2A60CDF47055EFD90C8478A9F4_RuntimeMethod_var);
	}

IL_0060:
	{
		return (bool)1;
	}
}
// System.Boolean Google.ProtocolBuffers.CodedInputStream::ReadFloat(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CodedInputStream_ReadFloat_mD9086AA478EBB9116119E886132EB77A34057BF7 (CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E * __this, float* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodedInputStream_ReadFloat_mD9086AA478EBB9116119E886132EB77A34057BF7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var);
		bool L_0 = ((BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var))->get_IsLittleEndian_0();
		if (!L_0)
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_1 = __this->get_bufferSize_1();
		int32_t L_2 = __this->get_bufferPos_3();
		if ((((int32_t)4) > ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)L_2)))))
		{
			goto IL_0043;
		}
	}
	{
		float* L_3 = ___value0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = __this->get_buffer_0();
		int32_t L_5 = __this->get_bufferPos_3();
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var);
		float L_6 = BitConverter_ToSingle_m5A87B9C607E24D0F283EB39990FAF7ABAB1CBB17(L_4, L_5, /*hidden argument*/NULL);
		*((float*)L_3) = (float)L_6;
		int32_t L_7 = __this->get_bufferPos_3();
		__this->set_bufferPos_3(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)4)));
		goto IL_0064;
	}

IL_0043:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_8 = CodedInputStream_ReadRawBytes_m60E3439632092B8C7EE2D22682B7F7DC672184CA(__this, 4, /*hidden argument*/NULL);
		V_0 = L_8;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var);
		bool L_9 = ((BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var))->get_IsLittleEndian_0();
		if (L_9)
		{
			goto IL_005b;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_10 = V_0;
		ByteArray_Reverse_m34CB3CB538881691666A11172E354C907CC19910(L_10, /*hidden argument*/NULL);
	}

IL_005b:
	{
		float* L_11 = ___value0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_12 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var);
		float L_13 = BitConverter_ToSingle_m5A87B9C607E24D0F283EB39990FAF7ABAB1CBB17(L_12, 0, /*hidden argument*/NULL);
		*((float*)L_11) = (float)L_13;
	}

IL_0064:
	{
		return (bool)1;
	}
}
// System.Boolean Google.ProtocolBuffers.CodedInputStream::ReadInt64(System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CodedInputStream_ReadInt64_m55FA77E4A4E9CECBEE875A15D592E2310FA3989C (CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E * __this, int64_t* ___value0, const RuntimeMethod* method)
{
	{
		int64_t* L_0 = ___value0;
		uint64_t L_1 = CodedInputStream_ReadRawVarint64_mDD7099D0590839AFA896E033EECD43E82B834071(__this, /*hidden argument*/NULL);
		*((int64_t*)L_0) = (int64_t)L_1;
		return (bool)1;
	}
}
// System.Boolean Google.ProtocolBuffers.CodedInputStream::ReadInt32(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CodedInputStream_ReadInt32_m5DFAF195BE1D9460F1054F33F7546C03C5C4BFE4 (CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E * __this, int32_t* ___value0, const RuntimeMethod* method)
{
	{
		int32_t* L_0 = ___value0;
		uint32_t L_1 = CodedInputStream_ReadRawVarint32_m3D50095F615E35805EE5EFF1A95111BEE84A0F83(__this, /*hidden argument*/NULL);
		*((int32_t*)L_0) = (int32_t)L_1;
		return (bool)1;
	}
}
// System.Void Google.ProtocolBuffers.CodedInputStream::ReadMessage(Google.ProtocolBuffers.IBuilderLite,Google.ProtocolBuffers.ExtensionRegistry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedInputStream_ReadMessage_m7DA8CB99856FBF06EB24656EF1C0634F1FDC2BA5 (CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E * __this, RuntimeObject* ___builder0, ExtensionRegistry_tAC8BBAEAD627B80DF852E93F941EF92FB4C8558E * ___extensionRegistry1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodedInputStream_ReadMessage_m7DA8CB99856FBF06EB24656EF1C0634F1FDC2BA5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		uint32_t L_0 = CodedInputStream_ReadRawVarint32_m3D50095F615E35805EE5EFF1A95111BEE84A0F83(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = __this->get_recursionDepth_10();
		int32_t L_2 = __this->get_recursionLimit_11();
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_001e;
		}
	}
	{
		InvalidProtocolBufferException_t33420AA524353DDC202DCBD0462457CC2AA7B4F9 * L_3 = InvalidProtocolBufferException_RecursionLimitExceeded_m4D9BE2951461ECA65434439A0E1E12C878B16735(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, CodedInputStream_ReadMessage_m7DA8CB99856FBF06EB24656EF1C0634F1FDC2BA5_RuntimeMethod_var);
	}

IL_001e:
	{
		int32_t L_4 = V_0;
		int32_t L_5 = CodedInputStream_PushLimit_m055A0982177C87205DA4AB870A4C0CF56AFE9C7E(__this, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		int32_t L_6 = __this->get_recursionDepth_10();
		__this->set_recursionDepth_10(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1)));
		RuntimeObject* L_7 = ___builder0;
		ExtensionRegistry_tAC8BBAEAD627B80DF852E93F941EF92FB4C8558E * L_8 = ___extensionRegistry1;
		NullCheck(L_7);
		InterfaceFuncInvoker2< RuntimeObject*, RuntimeObject*, ExtensionRegistry_tAC8BBAEAD627B80DF852E93F941EF92FB4C8558E * >::Invoke(0 /* Google.ProtocolBuffers.IBuilderLite Google.ProtocolBuffers.IBuilderLite::WeakMergeFrom(Google.ProtocolBuffers.ICodedInputStream,Google.ProtocolBuffers.ExtensionRegistry) */, IBuilderLite_t567B86BEB7E50C9DF4668CA9B485FF9DD383A4A4_il2cpp_TypeInfo_var, L_7, __this, L_8);
		CodedInputStream_CheckLastTagWas_m0DAA172667D4075A6914716396E1CDFF96CAF5A3(__this, 0, /*hidden argument*/NULL);
		int32_t L_9 = __this->get_recursionDepth_10();
		__this->set_recursionDepth_10(((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)1)));
		int32_t L_10 = V_1;
		CodedInputStream_PopLimit_m194E43997E0D1E8EF3C6F6A67C7350F60AD92465(__this, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Google.ProtocolBuffers.CodedInputStream::BeginArray(System.UInt32,System.Boolean&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CodedInputStream_BeginArray_m42A2EF56555A3ACE3DE02F1E55991703473174B3 (CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E * __this, uint32_t ___fieldTag0, bool* ___isPacked1, int32_t* ___oldLimit2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		bool* L_0 = ___isPacked1;
		uint32_t L_1 = ___fieldTag0;
		uint32_t L_2 = WireFormat_GetTagWireType_mC2E691E0C75357305D00F3BB6AB2783764E86B1A(L_1, /*hidden argument*/NULL);
		*((int8_t*)L_0) = (int8_t)((((int32_t)L_2) == ((int32_t)2))? 1 : 0);
		bool* L_3 = ___isPacked1;
		int32_t L_4 = *((int8_t*)L_3);
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		uint32_t L_5 = CodedInputStream_ReadRawVarint32_m3D50095F615E35805EE5EFF1A95111BEE84A0F83(__this, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)L_5&(int32_t)((int32_t)2147483647LL)));
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}
	{
		int32_t* L_7 = ___oldLimit2;
		int32_t L_8 = V_0;
		int32_t L_9 = CodedInputStream_PushLimit_m055A0982177C87205DA4AB870A4C0CF56AFE9C7E(__this, L_8, /*hidden argument*/NULL);
		*((int32_t*)L_7) = (int32_t)L_9;
		return (bool)1;
	}

IL_0031:
	{
		int32_t* L_10 = ___oldLimit2;
		*((int32_t*)L_10) = (int32_t)(-1);
		return (bool)0;
	}

IL_0036:
	{
		int32_t* L_11 = ___oldLimit2;
		*((int32_t*)L_11) = (int32_t)(-1);
		return (bool)1;
	}
}
// System.Boolean Google.ProtocolBuffers.CodedInputStream::ContinueArray(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CodedInputStream_ContinueArray_m9E5201C6D13EB4E669B86309DBD08AB6C3AE8C0A (CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E * __this, uint32_t ___currentTag0, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	uint32_t V_1 = 0;
	{
		bool L_0 = CodedInputStream_PeekNextTag_m2D28A65E348CF9D6E884D6A4428B385D3B88568F(__this, (uint32_t*)(&V_1), (String_t**)(&V_0), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		uint32_t L_1 = V_1;
		uint32_t L_2 = ___currentTag0;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_001f;
		}
	}
	{
		__this->set_hasNextTag_7((bool)0);
		return (bool)1;
	}

IL_001f:
	{
		return (bool)0;
	}
}
// System.Boolean Google.ProtocolBuffers.CodedInputStream::ContinueArray(System.UInt32,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CodedInputStream_ContinueArray_m89C18ABC3064B5E3173D09BFA8FC6263A670B639 (CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E * __this, uint32_t ___currentTag0, bool ___packed1, int32_t ___oldLimit2, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	uint32_t V_1 = 0;
	{
		bool L_0 = ___packed1;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		bool L_1 = CodedInputStream_get_ReachedLimit_m8736B51914163DE2A8837C2288A079F06C86FB64(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = ___oldLimit2;
		CodedInputStream_PopLimit_m194E43997E0D1E8EF3C6F6A67C7350F60AD92465(__this, L_2, /*hidden argument*/NULL);
		return (bool)0;
	}

IL_001a:
	{
		return (bool)1;
	}

IL_001c:
	{
		bool L_3 = CodedInputStream_PeekNextTag_m2D28A65E348CF9D6E884D6A4428B385D3B88568F(__this, (uint32_t*)(&V_1), (String_t**)(&V_0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_003b;
		}
	}
	{
		uint32_t L_4 = V_1;
		uint32_t L_5 = ___currentTag0;
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_003b;
		}
	}
	{
		__this->set_hasNextTag_7((bool)0);
		return (bool)1;
	}

IL_003b:
	{
		return (bool)0;
	}
}
// System.Void Google.ProtocolBuffers.CodedInputStream::ReadFloatArray(System.UInt32,System.String,System.Collections.Generic.ICollection`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedInputStream_ReadFloatArray_mF36250455461A4B25D959E30D16B13AF600E384A (CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E * __this, uint32_t ___fieldTag0, String_t* ___fieldName1, RuntimeObject* ___list2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodedInputStream_ReadFloatArray_mF36250455461A4B25D959E30D16B13AF600E384A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	{
		uint32_t L_0 = ___fieldTag0;
		bool L_1 = CodedInputStream_BeginArray_m42A2EF56555A3ACE3DE02F1E55991703473174B3(__this, L_0, (bool*)(&V_0), (int32_t*)(&V_1), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0034;
		}
	}
	{
		V_2 = (0.0f);
	}

IL_0016:
	{
		CodedInputStream_ReadFloat_mD9086AA478EBB9116119E886132EB77A34057BF7(__this, (float*)(&V_2), /*hidden argument*/NULL);
		RuntimeObject* L_2 = ___list2;
		float L_3 = V_2;
		NullCheck(L_2);
		InterfaceActionInvoker1< float >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.Single>::Add(!0) */, ICollection_1_t8EEF5939629F2AA669326F3F4C81829CA4FBD3F7_il2cpp_TypeInfo_var, L_2, L_3);
		uint32_t L_4 = ___fieldTag0;
		bool L_5 = V_0;
		int32_t L_6 = V_1;
		bool L_7 = CodedInputStream_ContinueArray_m89C18ABC3064B5E3173D09BFA8FC6263A670B639(__this, L_4, L_5, L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0016;
		}
	}

IL_0034:
	{
		return;
	}
}
// System.UInt32 Google.ProtocolBuffers.CodedInputStream::SlowReadRawVarint32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CodedInputStream_SlowReadRawVarint32_m4BD0F8ACC2A9B6335AB0B17D19AFE65109DD63DC (CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodedInputStream_SlowReadRawVarint32_m4BD0F8ACC2A9B6335AB0B17D19AFE65109DD63DC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		uint8_t L_0 = CodedInputStream_ReadRawByte_m511DFAE58BB34C5CEC4487BEFDD2EB72016E7F70(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)128))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = V_0;
		return L_2;
	}

IL_0014:
	{
		int32_t L_3 = V_0;
		V_1 = ((int32_t)((int32_t)L_3&(int32_t)((int32_t)127)));
		uint8_t L_4 = CodedInputStream_ReadRawByte_m511DFAE58BB34C5CEC4487BEFDD2EB72016E7F70(__this, /*hidden argument*/NULL);
		uint8_t L_5 = L_4;
		V_0 = L_5;
		if ((((int32_t)L_5) >= ((int32_t)((int32_t)128))))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_6 = V_1;
		int32_t L_7 = V_0;
		V_1 = ((int32_t)((int32_t)L_6|(int32_t)((int32_t)((int32_t)L_7<<(int32_t)7))));
		goto IL_00d2;
	}

IL_0036:
	{
		int32_t L_8 = V_1;
		int32_t L_9 = V_0;
		V_1 = ((int32_t)((int32_t)L_8|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_9&(int32_t)((int32_t)127)))<<(int32_t)7))));
		uint8_t L_10 = CodedInputStream_ReadRawByte_m511DFAE58BB34C5CEC4487BEFDD2EB72016E7F70(__this, /*hidden argument*/NULL);
		uint8_t L_11 = L_10;
		V_0 = L_11;
		if ((((int32_t)L_11) >= ((int32_t)((int32_t)128))))
		{
			goto IL_005d;
		}
	}
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		V_1 = ((int32_t)((int32_t)L_12|(int32_t)((int32_t)((int32_t)L_13<<(int32_t)((int32_t)14)))));
		goto IL_00d2;
	}

IL_005d:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = V_0;
		V_1 = ((int32_t)((int32_t)L_14|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_15&(int32_t)((int32_t)127)))<<(int32_t)((int32_t)14)))));
		uint8_t L_16 = CodedInputStream_ReadRawByte_m511DFAE58BB34C5CEC4487BEFDD2EB72016E7F70(__this, /*hidden argument*/NULL);
		uint8_t L_17 = L_16;
		V_0 = L_17;
		if ((((int32_t)L_17) >= ((int32_t)((int32_t)128))))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_18 = V_1;
		int32_t L_19 = V_0;
		V_1 = ((int32_t)((int32_t)L_18|(int32_t)((int32_t)((int32_t)L_19<<(int32_t)((int32_t)21)))));
		goto IL_00d2;
	}

IL_0085:
	{
		int32_t L_20 = V_1;
		int32_t L_21 = V_0;
		V_1 = ((int32_t)((int32_t)L_20|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_21&(int32_t)((int32_t)127)))<<(int32_t)((int32_t)21)))));
		int32_t L_22 = V_1;
		uint8_t L_23 = CodedInputStream_ReadRawByte_m511DFAE58BB34C5CEC4487BEFDD2EB72016E7F70(__this, /*hidden argument*/NULL);
		uint8_t L_24 = L_23;
		V_0 = L_24;
		V_1 = ((int32_t)((int32_t)L_22|(int32_t)((int32_t)((int32_t)L_24<<(int32_t)((int32_t)28)))));
		int32_t L_25 = V_0;
		if ((((int32_t)L_25) < ((int32_t)((int32_t)128))))
		{
			goto IL_00d2;
		}
	}
	{
		V_2 = 0;
		goto IL_00c5;
	}

IL_00af:
	{
		uint8_t L_26 = CodedInputStream_ReadRawByte_m511DFAE58BB34C5CEC4487BEFDD2EB72016E7F70(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_26) >= ((int32_t)((int32_t)128))))
		{
			goto IL_00c1;
		}
	}
	{
		int32_t L_27 = V_1;
		return L_27;
	}

IL_00c1:
	{
		int32_t L_28 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_00c5:
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) < ((int32_t)5)))
		{
			goto IL_00af;
		}
	}
	{
		InvalidProtocolBufferException_t33420AA524353DDC202DCBD0462457CC2AA7B4F9 * L_30 = InvalidProtocolBufferException_MalformedVarint_m0756001DC26E773821E1279F93937EBE65D39634(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_30, CodedInputStream_SlowReadRawVarint32_m4BD0F8ACC2A9B6335AB0B17D19AFE65109DD63DC_RuntimeMethod_var);
	}

IL_00d2:
	{
		int32_t L_31 = V_1;
		return L_31;
	}
}
// System.UInt32 Google.ProtocolBuffers.CodedInputStream::ReadRawVarint32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CodedInputStream_ReadRawVarint32_m3D50095F615E35805EE5EFF1A95111BEE84A0F83 (CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodedInputStream_ReadRawVarint32_m3D50095F615E35805EE5EFF1A95111BEE84A0F83_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->get_bufferPos_3();
		int32_t L_1 = __this->get_bufferSize_1();
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)5))) <= ((int32_t)L_1)))
		{
			goto IL_001a;
		}
	}
	{
		uint32_t L_2 = CodedInputStream_SlowReadRawVarint32_m4BD0F8ACC2A9B6335AB0B17D19AFE65109DD63DC(__this, /*hidden argument*/NULL);
		return L_2;
	}

IL_001a:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = __this->get_buffer_0();
		int32_t L_4 = __this->get_bufferPos_3();
		int32_t L_5 = L_4;
		V_1 = L_5;
		__this->set_bufferPos_3(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		int32_t L_6 = V_1;
		NullCheck(L_3);
		int32_t L_7 = L_6;
		uint8_t L_8 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = L_8;
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) >= ((int32_t)((int32_t)128))))
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_10 = V_0;
		return L_10;
	}

IL_0040:
	{
		int32_t L_11 = V_0;
		V_2 = ((int32_t)((int32_t)L_11&(int32_t)((int32_t)127)));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_12 = __this->get_buffer_0();
		int32_t L_13 = __this->get_bufferPos_3();
		int32_t L_14 = L_13;
		V_1 = L_14;
		__this->set_bufferPos_3(((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1)));
		int32_t L_15 = V_1;
		NullCheck(L_12);
		int32_t L_16 = L_15;
		uint8_t L_17 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		uint8_t L_18 = L_17;
		V_0 = L_18;
		if ((((int32_t)L_18) >= ((int32_t)((int32_t)128))))
		{
			goto IL_0074;
		}
	}
	{
		int32_t L_19 = V_2;
		int32_t L_20 = V_0;
		V_2 = ((int32_t)((int32_t)L_19|(int32_t)((int32_t)((int32_t)L_20<<(int32_t)7))));
		goto IL_0146;
	}

IL_0074:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_0;
		V_2 = ((int32_t)((int32_t)L_21|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_22&(int32_t)((int32_t)127)))<<(int32_t)7))));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_23 = __this->get_buffer_0();
		int32_t L_24 = __this->get_bufferPos_3();
		int32_t L_25 = L_24;
		V_1 = L_25;
		__this->set_bufferPos_3(((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1)));
		int32_t L_26 = V_1;
		NullCheck(L_23);
		int32_t L_27 = L_26;
		uint8_t L_28 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		uint8_t L_29 = L_28;
		V_0 = L_29;
		if ((((int32_t)L_29) >= ((int32_t)((int32_t)128))))
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_30 = V_2;
		int32_t L_31 = V_0;
		V_2 = ((int32_t)((int32_t)L_30|(int32_t)((int32_t)((int32_t)L_31<<(int32_t)((int32_t)14)))));
		goto IL_0146;
	}

IL_00ad:
	{
		int32_t L_32 = V_2;
		int32_t L_33 = V_0;
		V_2 = ((int32_t)((int32_t)L_32|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_33&(int32_t)((int32_t)127)))<<(int32_t)((int32_t)14)))));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_34 = __this->get_buffer_0();
		int32_t L_35 = __this->get_bufferPos_3();
		int32_t L_36 = L_35;
		V_1 = L_36;
		__this->set_bufferPos_3(((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1)));
		int32_t L_37 = V_1;
		NullCheck(L_34);
		int32_t L_38 = L_37;
		uint8_t L_39 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		uint8_t L_40 = L_39;
		V_0 = L_40;
		if ((((int32_t)L_40) >= ((int32_t)((int32_t)128))))
		{
			goto IL_00e7;
		}
	}
	{
		int32_t L_41 = V_2;
		int32_t L_42 = V_0;
		V_2 = ((int32_t)((int32_t)L_41|(int32_t)((int32_t)((int32_t)L_42<<(int32_t)((int32_t)21)))));
		goto IL_0146;
	}

IL_00e7:
	{
		int32_t L_43 = V_2;
		int32_t L_44 = V_0;
		V_2 = ((int32_t)((int32_t)L_43|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_44&(int32_t)((int32_t)127)))<<(int32_t)((int32_t)21)))));
		int32_t L_45 = V_2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_46 = __this->get_buffer_0();
		int32_t L_47 = __this->get_bufferPos_3();
		int32_t L_48 = L_47;
		V_1 = L_48;
		__this->set_bufferPos_3(((int32_t)il2cpp_codegen_add((int32_t)L_48, (int32_t)1)));
		int32_t L_49 = V_1;
		NullCheck(L_46);
		int32_t L_50 = L_49;
		uint8_t L_51 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		uint8_t L_52 = L_51;
		V_0 = L_52;
		V_2 = ((int32_t)((int32_t)L_45|(int32_t)((int32_t)((int32_t)L_52<<(int32_t)((int32_t)28)))));
		int32_t L_53 = V_0;
		if ((((int32_t)L_53) < ((int32_t)((int32_t)128))))
		{
			goto IL_0146;
		}
	}
	{
		V_3 = 0;
		goto IL_0139;
	}

IL_0123:
	{
		uint8_t L_54 = CodedInputStream_ReadRawByte_m511DFAE58BB34C5CEC4487BEFDD2EB72016E7F70(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_54) >= ((int32_t)((int32_t)128))))
		{
			goto IL_0135;
		}
	}
	{
		int32_t L_55 = V_2;
		return L_55;
	}

IL_0135:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_56, (int32_t)1));
	}

IL_0139:
	{
		int32_t L_57 = V_3;
		if ((((int32_t)L_57) < ((int32_t)5)))
		{
			goto IL_0123;
		}
	}
	{
		InvalidProtocolBufferException_t33420AA524353DDC202DCBD0462457CC2AA7B4F9 * L_58 = InvalidProtocolBufferException_MalformedVarint_m0756001DC26E773821E1279F93937EBE65D39634(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_58, CodedInputStream_ReadRawVarint32_m3D50095F615E35805EE5EFF1A95111BEE84A0F83_RuntimeMethod_var);
	}

IL_0146:
	{
		int32_t L_59 = V_2;
		return L_59;
	}
}
// System.UInt32 Google.ProtocolBuffers.CodedInputStream::ReadRawVarint32(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CodedInputStream_ReadRawVarint32_mEB99186B7A2BBACABCAEFB4579EBA9BB1DBA1265 (Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodedInputStream_ReadRawVarint32_mEB99186B7A2BBACABCAEFB4579EBA9BB1DBA1265_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_003b;
	}

IL_0009:
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_0 = ___input0;
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.IO.Stream::ReadByte() */, L_0);
		V_2 = L_1;
		int32_t L_2 = V_2;
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_001d;
		}
	}
	{
		InvalidProtocolBufferException_t33420AA524353DDC202DCBD0462457CC2AA7B4F9 * L_3 = InvalidProtocolBufferException_TruncatedMessage_m0F1518DA8E834E0AA913C21046D14AE4F332A23F(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, CodedInputStream_ReadRawVarint32_mEB99186B7A2BBACABCAEFB4579EBA9BB1DBA1265_RuntimeMethod_var);
	}

IL_001d:
	{
		int32_t L_4 = V_0;
		int32_t L_5 = V_2;
		int32_t L_6 = V_1;
		V_0 = ((int32_t)((int32_t)L_4|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5&(int32_t)((int32_t)127)))<<(int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)31)))))));
		int32_t L_7 = V_2;
		if (((int32_t)((int32_t)L_7&(int32_t)((int32_t)128))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_8 = V_0;
		return L_8;
	}

IL_0037:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)7));
	}

IL_003b:
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) < ((int32_t)((int32_t)32))))
		{
			goto IL_0009;
		}
	}
	{
		goto IL_006e;
	}

IL_0048:
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_11 = ___input0;
		NullCheck(L_11);
		int32_t L_12 = VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.IO.Stream::ReadByte() */, L_11);
		V_3 = L_12;
		int32_t L_13 = V_3;
		if ((!(((uint32_t)L_13) == ((uint32_t)(-1)))))
		{
			goto IL_005c;
		}
	}
	{
		InvalidProtocolBufferException_t33420AA524353DDC202DCBD0462457CC2AA7B4F9 * L_14 = InvalidProtocolBufferException_TruncatedMessage_m0F1518DA8E834E0AA913C21046D14AE4F332A23F(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, CodedInputStream_ReadRawVarint32_mEB99186B7A2BBACABCAEFB4579EBA9BB1DBA1265_RuntimeMethod_var);
	}

IL_005c:
	{
		int32_t L_15 = V_3;
		if (((int32_t)((int32_t)L_15&(int32_t)((int32_t)128))))
		{
			goto IL_006a;
		}
	}
	{
		int32_t L_16 = V_0;
		return L_16;
	}

IL_006a:
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)7));
	}

IL_006e:
	{
		int32_t L_18 = V_1;
		if ((((int32_t)L_18) < ((int32_t)((int32_t)64))))
		{
			goto IL_0048;
		}
	}
	{
		InvalidProtocolBufferException_t33420AA524353DDC202DCBD0462457CC2AA7B4F9 * L_19 = InvalidProtocolBufferException_MalformedVarint_m0756001DC26E773821E1279F93937EBE65D39634(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, CodedInputStream_ReadRawVarint32_mEB99186B7A2BBACABCAEFB4579EBA9BB1DBA1265_RuntimeMethod_var);
	}
}
// System.UInt64 Google.ProtocolBuffers.CodedInputStream::ReadRawVarint64()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CodedInputStream_ReadRawVarint64_mDD7099D0590839AFA896E033EECD43E82B834071 (CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodedInputStream_ReadRawVarint64_mDD7099D0590839AFA896E033EECD43E82B834071_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint64_t V_1 = 0;
	uint8_t V_2 = 0x0;
	{
		V_0 = 0;
		V_1 = (((int64_t)((int64_t)0)));
		goto IL_0030;
	}

IL_000a:
	{
		uint8_t L_0 = CodedInputStream_ReadRawByte_m511DFAE58BB34C5CEC4487BEFDD2EB72016E7F70(__this, /*hidden argument*/NULL);
		V_2 = L_0;
		uint64_t L_1 = V_1;
		uint8_t L_2 = V_2;
		int32_t L_3 = V_0;
		V_1 = ((int64_t)((int64_t)L_1|(int64_t)((int64_t)((int64_t)(((int64_t)((int64_t)((int32_t)((int32_t)L_2&(int32_t)((int32_t)127))))))<<(int32_t)((int32_t)((int32_t)L_3&(int32_t)((int32_t)63)))))));
		uint8_t L_4 = V_2;
		if (((int32_t)((int32_t)L_4&(int32_t)((int32_t)128))))
		{
			goto IL_002c;
		}
	}
	{
		uint64_t L_5 = V_1;
		return L_5;
	}

IL_002c:
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)7));
	}

IL_0030:
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) < ((int32_t)((int32_t)64))))
		{
			goto IL_000a;
		}
	}
	{
		InvalidProtocolBufferException_t33420AA524353DDC202DCBD0462457CC2AA7B4F9 * L_8 = InvalidProtocolBufferException_MalformedVarint_m0756001DC26E773821E1279F93937EBE65D39634(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, CodedInputStream_ReadRawVarint64_mDD7099D0590839AFA896E033EECD43E82B834071_RuntimeMethod_var);
	}
}
// System.UInt32 Google.ProtocolBuffers.CodedInputStream::ReadRawLittleEndian32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CodedInputStream_ReadRawLittleEndian32_m701343A2D5D3D8BBB543E45C171B1251BFD55658 (CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	{
		uint8_t L_0 = CodedInputStream_ReadRawByte_m511DFAE58BB34C5CEC4487BEFDD2EB72016E7F70(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		uint8_t L_1 = CodedInputStream_ReadRawByte_m511DFAE58BB34C5CEC4487BEFDD2EB72016E7F70(__this, /*hidden argument*/NULL);
		V_1 = L_1;
		uint8_t L_2 = CodedInputStream_ReadRawByte_m511DFAE58BB34C5CEC4487BEFDD2EB72016E7F70(__this, /*hidden argument*/NULL);
		V_2 = L_2;
		uint8_t L_3 = CodedInputStream_ReadRawByte_m511DFAE58BB34C5CEC4487BEFDD2EB72016E7F70(__this, /*hidden argument*/NULL);
		V_3 = L_3;
		uint32_t L_4 = V_0;
		uint32_t L_5 = V_1;
		uint32_t L_6 = V_2;
		uint32_t L_7 = V_3;
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_4|(int32_t)((int32_t)((int32_t)L_5<<(int32_t)8))))|(int32_t)((int32_t)((int32_t)L_6<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)L_7<<(int32_t)((int32_t)24)))));
	}
}
// System.UInt64 Google.ProtocolBuffers.CodedInputStream::ReadRawLittleEndian64()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CodedInputStream_ReadRawLittleEndian64_m0DC389BC213758ED97481456E282ED2CF0000E42 (CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E * __this, const RuntimeMethod* method)
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	uint64_t V_3 = 0;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	{
		uint8_t L_0 = CodedInputStream_ReadRawByte_m511DFAE58BB34C5CEC4487BEFDD2EB72016E7F70(__this, /*hidden argument*/NULL);
		V_0 = (((int64_t)((uint64_t)L_0)));
		uint8_t L_1 = CodedInputStream_ReadRawByte_m511DFAE58BB34C5CEC4487BEFDD2EB72016E7F70(__this, /*hidden argument*/NULL);
		V_1 = (((int64_t)((uint64_t)L_1)));
		uint8_t L_2 = CodedInputStream_ReadRawByte_m511DFAE58BB34C5CEC4487BEFDD2EB72016E7F70(__this, /*hidden argument*/NULL);
		V_2 = (((int64_t)((uint64_t)L_2)));
		uint8_t L_3 = CodedInputStream_ReadRawByte_m511DFAE58BB34C5CEC4487BEFDD2EB72016E7F70(__this, /*hidden argument*/NULL);
		V_3 = (((int64_t)((uint64_t)L_3)));
		uint8_t L_4 = CodedInputStream_ReadRawByte_m511DFAE58BB34C5CEC4487BEFDD2EB72016E7F70(__this, /*hidden argument*/NULL);
		V_4 = (((int64_t)((uint64_t)L_4)));
		uint8_t L_5 = CodedInputStream_ReadRawByte_m511DFAE58BB34C5CEC4487BEFDD2EB72016E7F70(__this, /*hidden argument*/NULL);
		V_5 = (((int64_t)((uint64_t)L_5)));
		uint8_t L_6 = CodedInputStream_ReadRawByte_m511DFAE58BB34C5CEC4487BEFDD2EB72016E7F70(__this, /*hidden argument*/NULL);
		V_6 = (((int64_t)((uint64_t)L_6)));
		uint8_t L_7 = CodedInputStream_ReadRawByte_m511DFAE58BB34C5CEC4487BEFDD2EB72016E7F70(__this, /*hidden argument*/NULL);
		V_7 = (((int64_t)((uint64_t)L_7)));
		uint64_t L_8 = V_0;
		uint64_t L_9 = V_1;
		uint64_t L_10 = V_2;
		uint64_t L_11 = V_3;
		uint64_t L_12 = V_4;
		uint64_t L_13 = V_5;
		uint64_t L_14 = V_6;
		uint64_t L_15 = V_7;
		return ((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)L_8|(int64_t)((int64_t)((int64_t)L_9<<(int32_t)8))))|(int64_t)((int64_t)((int64_t)L_10<<(int32_t)((int32_t)16)))))|(int64_t)((int64_t)((int64_t)L_11<<(int32_t)((int32_t)24)))))|(int64_t)((int64_t)((int64_t)L_12<<(int32_t)((int32_t)32)))))|(int64_t)((int64_t)((int64_t)L_13<<(int32_t)((int32_t)40)))))|(int64_t)((int64_t)((int64_t)L_14<<(int32_t)((int32_t)48)))))|(int64_t)((int64_t)((int64_t)L_15<<(int32_t)((int32_t)56)))));
	}
}
// System.Int32 Google.ProtocolBuffers.CodedInputStream::PushLimit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CodedInputStream_PushLimit_m055A0982177C87205DA4AB870A4C0CF56AFE9C7E (CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E * __this, int32_t ___byteLimit0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodedInputStream_PushLimit_m055A0982177C87205DA4AB870A4C0CF56AFE9C7E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___byteLimit0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		InvalidProtocolBufferException_t33420AA524353DDC202DCBD0462457CC2AA7B4F9 * L_1 = InvalidProtocolBufferException_NegativeSize_mE83794AAC7C961105F3DE44D5128635DD49D87E5(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, CodedInputStream_PushLimit_m055A0982177C87205DA4AB870A4C0CF56AFE9C7E_RuntimeMethod_var);
	}

IL_000d:
	{
		int32_t L_2 = ___byteLimit0;
		int32_t L_3 = __this->get_totalBytesRetired_8();
		int32_t L_4 = __this->get_bufferPos_3();
		___byteLimit0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_4))));
		int32_t L_5 = __this->get_currentLimit_9();
		V_0 = L_5;
		int32_t L_6 = ___byteLimit0;
		int32_t L_7 = V_0;
		if ((((int32_t)L_6) <= ((int32_t)L_7)))
		{
			goto IL_0032;
		}
	}
	{
		InvalidProtocolBufferException_t33420AA524353DDC202DCBD0462457CC2AA7B4F9 * L_8 = InvalidProtocolBufferException_TruncatedMessage_m0F1518DA8E834E0AA913C21046D14AE4F332A23F(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, CodedInputStream_PushLimit_m055A0982177C87205DA4AB870A4C0CF56AFE9C7E_RuntimeMethod_var);
	}

IL_0032:
	{
		int32_t L_9 = ___byteLimit0;
		__this->set_currentLimit_9(L_9);
		CodedInputStream_RecomputeBufferSizeAfterLimit_m9C20EE52E2D94F82A602FA3EF3DA5CB87E0A2EE7(__this, /*hidden argument*/NULL);
		int32_t L_10 = V_0;
		return L_10;
	}
}
// System.Void Google.ProtocolBuffers.CodedInputStream::RecomputeBufferSizeAfterLimit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedInputStream_RecomputeBufferSizeAfterLimit_m9C20EE52E2D94F82A602FA3EF3DA5CB87E0A2EE7 (CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_bufferSize_1();
		int32_t L_1 = __this->get_bufferSizeAfterLimit_2();
		__this->set_bufferSize_1(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)));
		int32_t L_2 = __this->get_totalBytesRetired_8();
		int32_t L_3 = __this->get_bufferSize_1();
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3));
		int32_t L_4 = V_0;
		int32_t L_5 = __this->get_currentLimit_9();
		if ((((int32_t)L_4) <= ((int32_t)L_5)))
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_6 = V_0;
		int32_t L_7 = __this->get_currentLimit_9();
		__this->set_bufferSizeAfterLimit_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)L_7)));
		int32_t L_8 = __this->get_bufferSize_1();
		int32_t L_9 = __this->get_bufferSizeAfterLimit_2();
		__this->set_bufferSize_1(((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)L_9)));
		goto IL_005a;
	}

IL_0053:
	{
		__this->set_bufferSizeAfterLimit_2(0);
	}

IL_005a:
	{
		return;
	}
}
// System.Void Google.ProtocolBuffers.CodedInputStream::PopLimit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedInputStream_PopLimit_m194E43997E0D1E8EF3C6F6A67C7350F60AD92465 (CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E * __this, int32_t ___oldLimit0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___oldLimit0;
		__this->set_currentLimit_9(L_0);
		CodedInputStream_RecomputeBufferSizeAfterLimit_m9C20EE52E2D94F82A602FA3EF3DA5CB87E0A2EE7(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Google.ProtocolBuffers.CodedInputStream::RefillBuffer(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CodedInputStream_RefillBuffer_mAFD4A09A9127023CB6024245B27394DC234C242F (CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E * __this, bool ___mustSucceed0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodedInputStream_RefillBuffer_mAFD4A09A9127023CB6024245B27394DC234C242F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E * G_B8_0 = NULL;
	CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E * G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E * G_B9_1 = NULL;
	{
		int32_t L_0 = __this->get_bufferPos_3();
		int32_t L_1 = __this->get_bufferSize_1();
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_001c;
		}
	}
	{
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_2 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_2, _stringLiteral30133B6FF71F6DAF198B18008F412FB6BF53FE4B, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, CodedInputStream_RefillBuffer_mAFD4A09A9127023CB6024245B27394DC234C242F_RuntimeMethod_var);
	}

IL_001c:
	{
		int32_t L_3 = __this->get_totalBytesRetired_8();
		int32_t L_4 = __this->get_bufferSize_1();
		int32_t L_5 = __this->get_currentLimit_9();
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_4))) == ((uint32_t)L_5))))
		{
			goto IL_0042;
		}
	}
	{
		bool L_6 = ___mustSucceed0;
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		InvalidProtocolBufferException_t33420AA524353DDC202DCBD0462457CC2AA7B4F9 * L_7 = InvalidProtocolBufferException_TruncatedMessage_m0F1518DA8E834E0AA913C21046D14AE4F332A23F(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, CodedInputStream_RefillBuffer_mAFD4A09A9127023CB6024245B27394DC234C242F_RuntimeMethod_var);
	}

IL_0040:
	{
		return (bool)0;
	}

IL_0042:
	{
		int32_t L_8 = __this->get_totalBytesRetired_8();
		int32_t L_9 = __this->get_bufferSize_1();
		__this->set_totalBytesRetired_8(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)L_9)));
		__this->set_bufferPos_3(0);
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_10 = __this->get_input_4();
		G_B7_0 = __this;
		if (L_10)
		{
			G_B8_0 = __this;
			goto IL_006e;
		}
	}
	{
		G_B9_0 = 0;
		G_B9_1 = G_B7_0;
		goto IL_0088;
	}

IL_006e:
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_11 = __this->get_input_4();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_12 = __this->get_buffer_0();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_13 = __this->get_buffer_0();
		NullCheck(L_13);
		NullCheck(L_11);
		int32_t L_14 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(21 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_11, L_12, 0, (((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))));
		G_B9_0 = L_14;
		G_B9_1 = G_B8_0;
	}

IL_0088:
	{
		NullCheck(G_B9_1);
		G_B9_1->set_bufferSize_1(G_B9_0);
		int32_t L_15 = __this->get_bufferSize_1();
		if ((((int32_t)L_15) >= ((int32_t)0)))
		{
			goto IL_00a4;
		}
	}
	{
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_16 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_16, _stringLiteral045057002662385DE9C811E66D0BDDE5B6CF3910, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, CodedInputStream_RefillBuffer_mAFD4A09A9127023CB6024245B27394DC234C242F_RuntimeMethod_var);
	}

IL_00a4:
	{
		int32_t L_17 = __this->get_bufferSize_1();
		if (L_17)
		{
			goto IL_00bd;
		}
	}
	{
		bool L_18 = ___mustSucceed0;
		if (!L_18)
		{
			goto IL_00bb;
		}
	}
	{
		InvalidProtocolBufferException_t33420AA524353DDC202DCBD0462457CC2AA7B4F9 * L_19 = InvalidProtocolBufferException_TruncatedMessage_m0F1518DA8E834E0AA913C21046D14AE4F332A23F(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, CodedInputStream_RefillBuffer_mAFD4A09A9127023CB6024245B27394DC234C242F_RuntimeMethod_var);
	}

IL_00bb:
	{
		return (bool)0;
	}

IL_00bd:
	{
		CodedInputStream_RecomputeBufferSizeAfterLimit_m9C20EE52E2D94F82A602FA3EF3DA5CB87E0A2EE7(__this, /*hidden argument*/NULL);
		int32_t L_20 = __this->get_totalBytesRetired_8();
		int32_t L_21 = __this->get_bufferSize_1();
		int32_t L_22 = __this->get_bufferSizeAfterLimit_2();
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)L_21)), (int32_t)L_22));
		int32_t L_23 = V_0;
		int32_t L_24 = __this->get_sizeLimit_12();
		if ((((int32_t)L_23) > ((int32_t)L_24)))
		{
			goto IL_00eb;
		}
	}
	{
		int32_t L_25 = V_0;
		if ((((int32_t)L_25) >= ((int32_t)0)))
		{
			goto IL_00f1;
		}
	}

IL_00eb:
	{
		InvalidProtocolBufferException_t33420AA524353DDC202DCBD0462457CC2AA7B4F9 * L_26 = InvalidProtocolBufferException_SizeLimitExceeded_m3BEC675C6D09C08DED8EF7C8BA2FC3A015895B47(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, CodedInputStream_RefillBuffer_mAFD4A09A9127023CB6024245B27394DC234C242F_RuntimeMethod_var);
	}

IL_00f1:
	{
		return (bool)1;
	}
}
// System.Byte Google.ProtocolBuffers.CodedInputStream::ReadRawByte()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t CodedInputStream_ReadRawByte_m511DFAE58BB34C5CEC4487BEFDD2EB72016E7F70 (CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_bufferPos_3();
		int32_t L_1 = __this->get_bufferSize_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0019;
		}
	}
	{
		CodedInputStream_RefillBuffer_mAFD4A09A9127023CB6024245B27394DC234C242F(__this, (bool)1, /*hidden argument*/NULL);
	}

IL_0019:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = __this->get_buffer_0();
		int32_t L_3 = __this->get_bufferPos_3();
		int32_t L_4 = L_3;
		V_0 = L_4;
		__this->set_bufferPos_3(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1)));
		int32_t L_5 = V_0;
		NullCheck(L_2);
		int32_t L_6 = L_5;
		uint8_t L_7 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		return L_7;
	}
}
// System.Byte[] Google.ProtocolBuffers.CodedInputStream::ReadRawBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* CodedInputStream_ReadRawBytes_m60E3439632092B8C7EE2D22682B7F7DC672184CA (CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E * __this, int32_t ___size0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodedInputStream_ReadRawBytes_m60E3439632092B8C7EE2D22682B7F7DC672184CA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	List_1_t4AB280456F4DE770AC993DE9A7C8C563A6311531 * V_6 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_7 = NULL;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_10 = NULL;
	int32_t V_11 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_12 = NULL;
	Enumerator_tC0B6B6F583136EC0D5C30E72EE78DDCB14B0156D  V_13;
	memset((&V_13), 0, sizeof(V_13));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B16_0 = 0;
	{
		int32_t L_0 = ___size0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		InvalidProtocolBufferException_t33420AA524353DDC202DCBD0462457CC2AA7B4F9 * L_1 = InvalidProtocolBufferException_NegativeSize_mE83794AAC7C961105F3DE44D5128635DD49D87E5(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, CodedInputStream_ReadRawBytes_m60E3439632092B8C7EE2D22682B7F7DC672184CA_RuntimeMethod_var);
	}

IL_000d:
	{
		int32_t L_2 = __this->get_totalBytesRetired_8();
		int32_t L_3 = __this->get_bufferPos_3();
		int32_t L_4 = ___size0;
		int32_t L_5 = __this->get_currentLimit_9();
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3)), (int32_t)L_4))) <= ((int32_t)L_5)))
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_6 = __this->get_currentLimit_9();
		int32_t L_7 = __this->get_totalBytesRetired_8();
		int32_t L_8 = __this->get_bufferPos_3();
		CodedInputStream_SkipRawBytes_m8EC3B6FCCE8F72B0DA9DE76DDCE8964904676108(__this, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)L_7)), (int32_t)L_8)), /*hidden argument*/NULL);
		InvalidProtocolBufferException_t33420AA524353DDC202DCBD0462457CC2AA7B4F9 * L_9 = InvalidProtocolBufferException_TruncatedMessage_m0F1518DA8E834E0AA913C21046D14AE4F332A23F(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, CodedInputStream_ReadRawBytes_m60E3439632092B8C7EE2D22682B7F7DC672184CA_RuntimeMethod_var);
	}

IL_0047:
	{
		int32_t L_10 = ___size0;
		int32_t L_11 = __this->get_bufferSize_1();
		int32_t L_12 = __this->get_bufferPos_3();
		if ((((int32_t)L_10) > ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)L_12)))))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_13 = ___size0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_14 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)L_13);
		V_0 = L_14;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_15 = __this->get_buffer_0();
		int32_t L_16 = __this->get_bufferPos_3();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_17 = V_0;
		int32_t L_18 = ___size0;
		ByteArray_Copy_m557A996C1B60E97D2E479EEE8D9CB321AB75B8FF(L_15, L_16, L_17, 0, L_18, /*hidden argument*/NULL);
		int32_t L_19 = __this->get_bufferPos_3();
		int32_t L_20 = ___size0;
		__this->set_bufferPos_3(((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)L_20)));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_21 = V_0;
		return L_21;
	}

IL_0085:
	{
		int32_t L_22 = ___size0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_23 = __this->get_buffer_0();
		NullCheck(L_23);
		if ((((int32_t)L_22) >= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length)))))))
		{
			goto IL_0130;
		}
	}
	{
		int32_t L_24 = ___size0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_25 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)L_24);
		V_1 = L_25;
		int32_t L_26 = __this->get_bufferSize_1();
		int32_t L_27 = __this->get_bufferPos_3();
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_26, (int32_t)L_27));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_28 = __this->get_buffer_0();
		int32_t L_29 = __this->get_bufferPos_3();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_30 = V_1;
		int32_t L_31 = V_2;
		ByteArray_Copy_m557A996C1B60E97D2E479EEE8D9CB321AB75B8FF(L_28, L_29, L_30, 0, L_31, /*hidden argument*/NULL);
		int32_t L_32 = __this->get_bufferSize_1();
		__this->set_bufferPos_3(L_32);
		CodedInputStream_RefillBuffer_mAFD4A09A9127023CB6024245B27394DC234C242F(__this, (bool)1, /*hidden argument*/NULL);
		goto IL_0106;
	}

IL_00d5:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_33 = __this->get_buffer_0();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_34 = V_1;
		int32_t L_35 = V_2;
		int32_t L_36 = __this->get_bufferSize_1();
		Buffer_BlockCopy_m1F882D595976063718AF6E405664FC761924D353((RuntimeArray *)(RuntimeArray *)L_33, 0, (RuntimeArray *)(RuntimeArray *)L_34, L_35, L_36, /*hidden argument*/NULL);
		int32_t L_37 = V_2;
		int32_t L_38 = __this->get_bufferSize_1();
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)L_38));
		int32_t L_39 = __this->get_bufferSize_1();
		__this->set_bufferPos_3(L_39);
		CodedInputStream_RefillBuffer_mAFD4A09A9127023CB6024245B27394DC234C242F(__this, (bool)1, /*hidden argument*/NULL);
	}

IL_0106:
	{
		int32_t L_40 = ___size0;
		int32_t L_41 = V_2;
		int32_t L_42 = __this->get_bufferSize_1();
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_40, (int32_t)L_41))) > ((int32_t)L_42)))
		{
			goto IL_00d5;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_43 = __this->get_buffer_0();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_44 = V_1;
		int32_t L_45 = V_2;
		int32_t L_46 = ___size0;
		int32_t L_47 = V_2;
		ByteArray_Copy_m557A996C1B60E97D2E479EEE8D9CB321AB75B8FF(L_43, 0, L_44, L_45, ((int32_t)il2cpp_codegen_subtract((int32_t)L_46, (int32_t)L_47)), /*hidden argument*/NULL);
		int32_t L_48 = ___size0;
		int32_t L_49 = V_2;
		__this->set_bufferPos_3(((int32_t)il2cpp_codegen_subtract((int32_t)L_48, (int32_t)L_49)));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_50 = V_1;
		return L_50;
	}

IL_0130:
	{
		int32_t L_51 = __this->get_bufferPos_3();
		V_3 = L_51;
		int32_t L_52 = __this->get_bufferSize_1();
		V_4 = L_52;
		int32_t L_53 = __this->get_totalBytesRetired_8();
		int32_t L_54 = __this->get_bufferSize_1();
		__this->set_totalBytesRetired_8(((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)L_54)));
		__this->set_bufferPos_3(0);
		__this->set_bufferSize_1(0);
		int32_t L_55 = ___size0;
		int32_t L_56 = V_4;
		int32_t L_57 = V_3;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_55, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_56, (int32_t)L_57))));
		List_1_t4AB280456F4DE770AC993DE9A7C8C563A6311531 * L_58 = (List_1_t4AB280456F4DE770AC993DE9A7C8C563A6311531 *)il2cpp_codegen_object_new(List_1_t4AB280456F4DE770AC993DE9A7C8C563A6311531_il2cpp_TypeInfo_var);
		List_1__ctor_m52FC81AB50BD21B6BFA16546E3AF9C94611D9811(L_58, /*hidden argument*/List_1__ctor_m52FC81AB50BD21B6BFA16546E3AF9C94611D9811_RuntimeMethod_var);
		V_6 = L_58;
		goto IL_01fc;
	}

IL_0174:
	{
		int32_t L_59 = V_5;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_60 = __this->get_buffer_0();
		NullCheck(L_60);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		int32_t L_61 = Math_Min_mC950438198519FB2B0260FCB91220847EE4BB525(L_59, (((int32_t)((int32_t)(((RuntimeArray*)L_60)->max_length)))), /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_62 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)L_61);
		V_7 = L_62;
		V_8 = 0;
		goto IL_01df;
	}

IL_0192:
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_63 = __this->get_input_4();
		if (L_63)
		{
			goto IL_01a3;
		}
	}
	{
		G_B16_0 = (-1);
		goto IL_01b9;
	}

IL_01a3:
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_64 = __this->get_input_4();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_65 = V_7;
		int32_t L_66 = V_8;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_67 = V_7;
		NullCheck(L_67);
		int32_t L_68 = V_8;
		NullCheck(L_64);
		int32_t L_69 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(21 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_64, L_65, L_66, ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_67)->max_length)))), (int32_t)L_68)));
		G_B16_0 = L_69;
	}

IL_01b9:
	{
		V_9 = G_B16_0;
		int32_t L_70 = V_9;
		if ((((int32_t)L_70) > ((int32_t)0)))
		{
			goto IL_01c9;
		}
	}
	{
		InvalidProtocolBufferException_t33420AA524353DDC202DCBD0462457CC2AA7B4F9 * L_71 = InvalidProtocolBufferException_TruncatedMessage_m0F1518DA8E834E0AA913C21046D14AE4F332A23F(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_71, CodedInputStream_ReadRawBytes_m60E3439632092B8C7EE2D22682B7F7DC672184CA_RuntimeMethod_var);
	}

IL_01c9:
	{
		int32_t L_72 = __this->get_totalBytesRetired_8();
		int32_t L_73 = V_9;
		__this->set_totalBytesRetired_8(((int32_t)il2cpp_codegen_add((int32_t)L_72, (int32_t)L_73)));
		int32_t L_74 = V_8;
		int32_t L_75 = V_9;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_74, (int32_t)L_75));
	}

IL_01df:
	{
		int32_t L_76 = V_8;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_77 = V_7;
		NullCheck(L_77);
		if ((((int32_t)L_76) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_77)->max_length)))))))
		{
			goto IL_0192;
		}
	}
	{
		int32_t L_78 = V_5;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_79 = V_7;
		NullCheck(L_79);
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_78, (int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_79)->max_length))))));
		List_1_t4AB280456F4DE770AC993DE9A7C8C563A6311531 * L_80 = V_6;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_81 = V_7;
		NullCheck(L_80);
		List_1_Add_mCC9D38BB3CBE3F2E67EDF3390D36ABFAD293468E(L_80, L_81, /*hidden argument*/List_1_Add_mCC9D38BB3CBE3F2E67EDF3390D36ABFAD293468E_RuntimeMethod_var);
	}

IL_01fc:
	{
		int32_t L_82 = V_5;
		if ((((int32_t)L_82) > ((int32_t)0)))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_83 = ___size0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_84 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)L_83);
		V_10 = L_84;
		int32_t L_85 = V_4;
		int32_t L_86 = V_3;
		V_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_85, (int32_t)L_86));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_87 = __this->get_buffer_0();
		int32_t L_88 = V_3;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_89 = V_10;
		int32_t L_90 = V_11;
		ByteArray_Copy_m557A996C1B60E97D2E479EEE8D9CB321AB75B8FF(L_87, L_88, L_89, 0, L_90, /*hidden argument*/NULL);
		List_1_t4AB280456F4DE770AC993DE9A7C8C563A6311531 * L_91 = V_6;
		NullCheck(L_91);
		Enumerator_tC0B6B6F583136EC0D5C30E72EE78DDCB14B0156D  L_92 = List_1_GetEnumerator_m84AFF0B8BC2B832C145F5252E1A2356E7CBEA664(L_91, /*hidden argument*/List_1_GetEnumerator_m84AFF0B8BC2B832C145F5252E1A2356E7CBEA664_RuntimeMethod_var);
		V_13 = L_92;
	}

IL_022c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0253;
		}

IL_0231:
		{
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_93 = Enumerator_get_Current_m9D6CD526545E123E983BCA908194AA1E30833B0A_inline((Enumerator_tC0B6B6F583136EC0D5C30E72EE78DDCB14B0156D *)(&V_13), /*hidden argument*/Enumerator_get_Current_m9D6CD526545E123E983BCA908194AA1E30833B0A_RuntimeMethod_var);
			V_12 = L_93;
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_94 = V_12;
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_95 = V_10;
			int32_t L_96 = V_11;
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_97 = V_12;
			NullCheck(L_97);
			Buffer_BlockCopy_m1F882D595976063718AF6E405664FC761924D353((RuntimeArray *)(RuntimeArray *)L_94, 0, (RuntimeArray *)(RuntimeArray *)L_95, L_96, (((int32_t)((int32_t)(((RuntimeArray*)L_97)->max_length)))), /*hidden argument*/NULL);
			int32_t L_98 = V_11;
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_99 = V_12;
			NullCheck(L_99);
			V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_98, (int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_99)->max_length))))));
		}

IL_0253:
		{
			bool L_100 = Enumerator_MoveNext_mD3CC74979D47180FD9ECF7046BBE6D93E106FB1E((Enumerator_tC0B6B6F583136EC0D5C30E72EE78DDCB14B0156D *)(&V_13), /*hidden argument*/Enumerator_MoveNext_mD3CC74979D47180FD9ECF7046BBE6D93E106FB1E_RuntimeMethod_var);
			if (L_100)
			{
				goto IL_0231;
			}
		}

IL_025f:
		{
			IL2CPP_LEAVE(0x272, FINALLY_0264);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0264;
	}

FINALLY_0264:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m8705DA716860C4D15AEC6B46F0A2A3CBBE0225E1((Enumerator_tC0B6B6F583136EC0D5C30E72EE78DDCB14B0156D *)(&V_13), /*hidden argument*/Enumerator_Dispose_m8705DA716860C4D15AEC6B46F0A2A3CBBE0225E1_RuntimeMethod_var);
		IL2CPP_END_FINALLY(612)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(612)
	{
		IL2CPP_JUMP_TBL(0x272, IL_0272)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0272:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_101 = V_10;
		return L_101;
	}
}
// System.Boolean Google.ProtocolBuffers.CodedInputStream::SkipField()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CodedInputStream_SkipField_m8D83720F0C50B636EAA76C82C9993FABF8EBF907 (CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodedInputStream_SkipField_m8D83720F0C50B636EAA76C82C9993FABF8EBF907_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		uint32_t L_0 = __this->get_lastTag_5();
		V_0 = L_0;
		uint32_t L_1 = V_0;
		uint32_t L_2 = WireFormat_GetTagWireType_mC2E691E0C75357305D00F3BB6AB2783764E86B1A(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		uint32_t L_3 = V_1;
		switch (L_3)
		{
			case 0:
			{
				goto IL_0031;
			}
			case 1:
			{
				goto IL_003a;
			}
			case 2:
			{
				goto IL_0043;
			}
			case 3:
			{
				goto IL_0051;
			}
			case 4:
			{
				goto IL_006b;
			}
			case 5:
			{
				goto IL_006d;
			}
		}
	}
	{
		goto IL_0076;
	}

IL_0031:
	{
		CodedInputStream_ReadRawVarint64_mDD7099D0590839AFA896E033EECD43E82B834071(__this, /*hidden argument*/NULL);
		return (bool)1;
	}

IL_003a:
	{
		CodedInputStream_ReadRawLittleEndian64_m0DC389BC213758ED97481456E282ED2CF0000E42(__this, /*hidden argument*/NULL);
		return (bool)1;
	}

IL_0043:
	{
		uint32_t L_4 = CodedInputStream_ReadRawVarint32_m3D50095F615E35805EE5EFF1A95111BEE84A0F83(__this, /*hidden argument*/NULL);
		CodedInputStream_SkipRawBytes_m8EC3B6FCCE8F72B0DA9DE76DDCE8964904676108(__this, L_4, /*hidden argument*/NULL);
		return (bool)1;
	}

IL_0051:
	{
		CodedInputStream_SkipMessage_mB6E7938C82845EA0474DCCC8122DD5BE8C634DF0(__this, /*hidden argument*/NULL);
		uint32_t L_5 = V_0;
		int32_t L_6 = WireFormat_GetTagFieldNumber_m8F294B6FC91FDE36C55F136E66FB73543C537018(L_5, /*hidden argument*/NULL);
		uint32_t L_7 = WireFormat_MakeTag_m9BF62F1578FA7B2877A8D1458026E19AAFE3964F(L_6, 4, /*hidden argument*/NULL);
		CodedInputStream_CheckLastTagWas_m0DAA172667D4075A6914716396E1CDFF96CAF5A3(__this, L_7, /*hidden argument*/NULL);
		return (bool)1;
	}

IL_006b:
	{
		return (bool)0;
	}

IL_006d:
	{
		CodedInputStream_ReadRawLittleEndian32_m701343A2D5D3D8BBB543E45C171B1251BFD55658(__this, /*hidden argument*/NULL);
		return (bool)1;
	}

IL_0076:
	{
		InvalidProtocolBufferException_t33420AA524353DDC202DCBD0462457CC2AA7B4F9 * L_8 = InvalidProtocolBufferException_InvalidWireType_m51F656A8F5AE76B6CD8ED343F712CFF4255D2F3F(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, CodedInputStream_SkipField_m8D83720F0C50B636EAA76C82C9993FABF8EBF907_RuntimeMethod_var);
	}
}
// System.Void Google.ProtocolBuffers.CodedInputStream::SkipMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedInputStream_SkipMessage_mB6E7938C82845EA0474DCCC8122DD5BE8C634DF0 (CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	String_t* V_1 = NULL;
	{
		goto IL_0011;
	}

IL_0005:
	{
		bool L_0 = CodedInputStream_SkipField_m8D83720F0C50B636EAA76C82C9993FABF8EBF907(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		bool L_1 = CodedInputStream_ReadTag_m23AD3CE9C1EA9C2A60CDF47055EFD90C8478A9F4(__this, (uint32_t*)(&V_0), (String_t**)(&V_1), /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0005;
		}
	}
	{
		return;
	}
}
// System.Void Google.ProtocolBuffers.CodedInputStream::SkipRawBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedInputStream_SkipRawBytes_m8EC3B6FCCE8F72B0DA9DE76DDCE8964904676108 (CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E * __this, int32_t ___size0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodedInputStream_SkipRawBytes_m8EC3B6FCCE8F72B0DA9DE76DDCE8964904676108_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___size0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		InvalidProtocolBufferException_t33420AA524353DDC202DCBD0462457CC2AA7B4F9 * L_1 = InvalidProtocolBufferException_NegativeSize_mE83794AAC7C961105F3DE44D5128635DD49D87E5(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, CodedInputStream_SkipRawBytes_m8EC3B6FCCE8F72B0DA9DE76DDCE8964904676108_RuntimeMethod_var);
	}

IL_000d:
	{
		int32_t L_2 = __this->get_totalBytesRetired_8();
		int32_t L_3 = __this->get_bufferPos_3();
		int32_t L_4 = ___size0;
		int32_t L_5 = __this->get_currentLimit_9();
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3)), (int32_t)L_4))) <= ((int32_t)L_5)))
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_6 = __this->get_currentLimit_9();
		int32_t L_7 = __this->get_totalBytesRetired_8();
		int32_t L_8 = __this->get_bufferPos_3();
		CodedInputStream_SkipRawBytes_m8EC3B6FCCE8F72B0DA9DE76DDCE8964904676108(__this, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)L_7)), (int32_t)L_8)), /*hidden argument*/NULL);
		InvalidProtocolBufferException_t33420AA524353DDC202DCBD0462457CC2AA7B4F9 * L_9 = InvalidProtocolBufferException_TruncatedMessage_m0F1518DA8E834E0AA913C21046D14AE4F332A23F(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, CodedInputStream_SkipRawBytes_m8EC3B6FCCE8F72B0DA9DE76DDCE8964904676108_RuntimeMethod_var);
	}

IL_0047:
	{
		int32_t L_10 = ___size0;
		int32_t L_11 = __this->get_bufferSize_1();
		int32_t L_12 = __this->get_bufferPos_3();
		if ((((int32_t)L_10) > ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)L_12)))))
		{
			goto IL_006d;
		}
	}
	{
		int32_t L_13 = __this->get_bufferPos_3();
		int32_t L_14 = ___size0;
		__this->set_bufferPos_3(((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)L_14)));
		goto IL_00cd;
	}

IL_006d:
	{
		int32_t L_15 = __this->get_bufferSize_1();
		int32_t L_16 = __this->get_bufferPos_3();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)L_16));
		int32_t L_17 = __this->get_totalBytesRetired_8();
		int32_t L_18 = __this->get_bufferSize_1();
		__this->set_totalBytesRetired_8(((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)L_18)));
		__this->set_bufferPos_3(0);
		__this->set_bufferSize_1(0);
		int32_t L_19 = V_0;
		int32_t L_20 = ___size0;
		if ((((int32_t)L_19) >= ((int32_t)L_20)))
		{
			goto IL_00cd;
		}
	}
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_21 = __this->get_input_4();
		if (L_21)
		{
			goto IL_00b4;
		}
	}
	{
		InvalidProtocolBufferException_t33420AA524353DDC202DCBD0462457CC2AA7B4F9 * L_22 = InvalidProtocolBufferException_TruncatedMessage_m0F1518DA8E834E0AA913C21046D14AE4F332A23F(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, CodedInputStream_SkipRawBytes_m8EC3B6FCCE8F72B0DA9DE76DDCE8964904676108_RuntimeMethod_var);
	}

IL_00b4:
	{
		int32_t L_23 = ___size0;
		int32_t L_24 = V_0;
		CodedInputStream_SkipImpl_m4CBC750F18077F37088AF8F8A28E664AB323DF88(__this, ((int32_t)il2cpp_codegen_subtract((int32_t)L_23, (int32_t)L_24)), /*hidden argument*/NULL);
		int32_t L_25 = __this->get_totalBytesRetired_8();
		int32_t L_26 = ___size0;
		int32_t L_27 = V_0;
		__this->set_totalBytesRetired_8(((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_26, (int32_t)L_27)))));
	}

IL_00cd:
	{
		return;
	}
}
// System.Void Google.ProtocolBuffers.CodedInputStream::SkipImpl(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedInputStream_SkipImpl_m4CBC750F18077F37088AF8F8A28E664AB323DF88 (CodedInputStream_tA9AEABE9C295D1774AE21944A2ECFAD1AD98D48E * __this, int32_t ___amountToSkip0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodedInputStream_SkipImpl_m4CBC750F18077F37088AF8F8A28E664AB323DF88_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_1 = NULL;
	int32_t V_2 = 0;
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_0 = __this->get_input_4();
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean System.IO.Stream::get_CanSeek() */, L_0);
		if (!L_1)
		{
			goto IL_004f;
		}
	}
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_2 = __this->get_input_4();
		NullCheck(L_2);
		int64_t L_3 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_2);
		V_0 = L_3;
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_4 = __this->get_input_4();
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_5 = L_4;
		NullCheck(L_5);
		int64_t L_6 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_5);
		int32_t L_7 = ___amountToSkip0;
		NullCheck(L_5);
		VirtActionInvoker1< int64_t >::Invoke(12 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_5, ((int64_t)il2cpp_codegen_add((int64_t)L_6, (int64_t)(((int64_t)((int64_t)L_7))))));
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_8 = __this->get_input_4();
		NullCheck(L_8);
		int64_t L_9 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_8);
		int64_t L_10 = V_0;
		int32_t L_11 = ___amountToSkip0;
		if ((((int64_t)L_9) == ((int64_t)((int64_t)il2cpp_codegen_add((int64_t)L_10, (int64_t)(((int64_t)((int64_t)L_11))))))))
		{
			goto IL_004a;
		}
	}
	{
		InvalidProtocolBufferException_t33420AA524353DDC202DCBD0462457CC2AA7B4F9 * L_12 = InvalidProtocolBufferException_TruncatedMessage_m0F1518DA8E834E0AA913C21046D14AE4F332A23F(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, CodedInputStream_SkipImpl_m4CBC750F18077F37088AF8F8A28E664AB323DF88_RuntimeMethod_var);
	}

IL_004a:
	{
		goto IL_008f;
	}

IL_004f:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_13 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		V_1 = L_13;
		goto IL_0088;
	}

IL_005f:
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_14 = __this->get_input_4();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_15 = V_1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_16 = V_1;
		NullCheck(L_16);
		int32_t L_17 = ___amountToSkip0;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		int32_t L_18 = Math_Min_mC950438198519FB2B0260FCB91220847EE4BB525((((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))), L_17, /*hidden argument*/NULL);
		NullCheck(L_14);
		int32_t L_19 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(21 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_14, L_15, 0, L_18);
		V_2 = L_19;
		int32_t L_20 = V_2;
		if ((((int32_t)L_20) > ((int32_t)0)))
		{
			goto IL_0083;
		}
	}
	{
		InvalidProtocolBufferException_t33420AA524353DDC202DCBD0462457CC2AA7B4F9 * L_21 = InvalidProtocolBufferException_TruncatedMessage_m0F1518DA8E834E0AA913C21046D14AE4F332A23F(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, CodedInputStream_SkipImpl_m4CBC750F18077F37088AF8F8A28E664AB323DF88_RuntimeMethod_var);
	}

IL_0083:
	{
		int32_t L_22 = ___amountToSkip0;
		int32_t L_23 = V_2;
		___amountToSkip0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)L_23));
	}

IL_0088:
	{
		int32_t L_24 = ___amountToSkip0;
		if ((((int32_t)L_24) > ((int32_t)0)))
		{
			goto IL_005f;
		}
	}

IL_008f:
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
// System.Void Google.ProtocolBuffers.CodedOutputStream::.ctor(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedOutputStream__ctor_m5440A4DAF33751466097FD4CD85D7A7562BDA564 (CodedOutputStream_t6FF414144C567C520A212C17587CA998689956E3 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		__this->set_output_4((Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 *)NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___buffer0;
		__this->set_buffer_1(L_0);
		int32_t L_1 = ___offset1;
		__this->set_position_3(L_1);
		int32_t L_2 = ___offset1;
		int32_t L_3 = ___length2;
		__this->set_limit_2(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3)));
		return;
	}
}
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::get_SpaceLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CodedOutputStream_get_SpaceLeft_mADAF9D8D680791DD50C0ED974809FA602BD2BB8C (CodedOutputStream_t6FF414144C567C520A212C17587CA998689956E3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodedOutputStream_get_SpaceLeft_mADAF9D8D680791DD50C0ED974809FA602BD2BB8C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_0 = __this->get_output_4();
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_1 = __this->get_limit_2();
		int32_t L_2 = __this->get_position_3();
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)L_2));
	}

IL_0019:
	{
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_3 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_3, _stringLiteral3B4A637C4FBF57CFE8397A9A7CE53C2752BEF51E, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, CodedOutputStream_get_SpaceLeft_mADAF9D8D680791DD50C0ED974809FA602BD2BB8C_RuntimeMethod_var);
	}
}
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeFloatSize(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CodedOutputStream_ComputeFloatSize_m590AFD0BAD36720168DBFB2EA91754E846F70BC7 (int32_t ___fieldNumber0, float ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodedOutputStream_ComputeFloatSize_m590AFD0BAD36720168DBFB2EA91754E846F70BC7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___fieldNumber0;
		IL2CPP_RUNTIME_CLASS_INIT(CodedOutputStream_t6FF414144C567C520A212C17587CA998689956E3_il2cpp_TypeInfo_var);
		int32_t L_1 = CodedOutputStream_ComputeTagSize_mE2C32E82317507B0C0E344AC0D218A8F6EA12CBE(L_0, /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)4));
	}
}
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeInt64Size(System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CodedOutputStream_ComputeInt64Size_m469FA3555088F5F6436873B0B862B27DAC90A566 (int32_t ___fieldNumber0, int64_t ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodedOutputStream_ComputeInt64Size_m469FA3555088F5F6436873B0B862B27DAC90A566_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___fieldNumber0;
		IL2CPP_RUNTIME_CLASS_INIT(CodedOutputStream_t6FF414144C567C520A212C17587CA998689956E3_il2cpp_TypeInfo_var);
		int32_t L_1 = CodedOutputStream_ComputeTagSize_mE2C32E82317507B0C0E344AC0D218A8F6EA12CBE(L_0, /*hidden argument*/NULL);
		int64_t L_2 = ___value1;
		int32_t L_3 = CodedOutputStream_ComputeRawVarint64Size_mA787C8FE03DED2971D70313ABC7B71F37F466B82(L_2, /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_3));
	}
}
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeInt32Size(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CodedOutputStream_ComputeInt32Size_m81AD208FD9D9AA6BEF44E7DED4F46FA8D6E3390B (int32_t ___fieldNumber0, int32_t ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodedOutputStream_ComputeInt32Size_m81AD208FD9D9AA6BEF44E7DED4F46FA8D6E3390B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___value1;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_1 = ___fieldNumber0;
		IL2CPP_RUNTIME_CLASS_INIT(CodedOutputStream_t6FF414144C567C520A212C17587CA998689956E3_il2cpp_TypeInfo_var);
		int32_t L_2 = CodedOutputStream_ComputeTagSize_mE2C32E82317507B0C0E344AC0D218A8F6EA12CBE(L_1, /*hidden argument*/NULL);
		int32_t L_3 = ___value1;
		int32_t L_4 = CodedOutputStream_ComputeRawVarint32Size_mBB34A0D2142D18730820495009D674EB2F889E32(L_3, /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_4));
	}

IL_0015:
	{
		int32_t L_5 = ___fieldNumber0;
		IL2CPP_RUNTIME_CLASS_INIT(CodedOutputStream_t6FF414144C567C520A212C17587CA998689956E3_il2cpp_TypeInfo_var);
		int32_t L_6 = CodedOutputStream_ComputeTagSize_mE2C32E82317507B0C0E344AC0D218A8F6EA12CBE(L_5, /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)((int32_t)10)));
	}
}
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeMessageSize(System.Int32,Google.ProtocolBuffers.IMessageLite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CodedOutputStream_ComputeMessageSize_m8EB8C8EA0C467313A246817B90D1AD63BC4011C9 (int32_t ___fieldNumber0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodedOutputStream_ComputeMessageSize_m8EB8C8EA0C467313A246817B90D1AD63BC4011C9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___value1;
		NullCheck(L_0);
		int32_t L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 Google.ProtocolBuffers.IMessageLite::get_SerializedSize() */, IMessageLite_tBFF4C3D45EE47902CE049D63AE119D373003C2A3_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		int32_t L_2 = ___fieldNumber0;
		IL2CPP_RUNTIME_CLASS_INIT(CodedOutputStream_t6FF414144C567C520A212C17587CA998689956E3_il2cpp_TypeInfo_var);
		int32_t L_3 = CodedOutputStream_ComputeTagSize_mE2C32E82317507B0C0E344AC0D218A8F6EA12CBE(L_2, /*hidden argument*/NULL);
		int32_t L_4 = V_0;
		int32_t L_5 = CodedOutputStream_ComputeRawVarint32Size_mBB34A0D2142D18730820495009D674EB2F889E32(L_4, /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_5)), (int32_t)L_6));
	}
}
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeEnumSize(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CodedOutputStream_ComputeEnumSize_mE1251105EDCED82ABE3F9E4E3AA12EBD71949655 (int32_t ___fieldNumber0, int32_t ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodedOutputStream_ComputeEnumSize_mE1251105EDCED82ABE3F9E4E3AA12EBD71949655_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___fieldNumber0;
		IL2CPP_RUNTIME_CLASS_INIT(CodedOutputStream_t6FF414144C567C520A212C17587CA998689956E3_il2cpp_TypeInfo_var);
		int32_t L_1 = CodedOutputStream_ComputeTagSize_mE2C32E82317507B0C0E344AC0D218A8F6EA12CBE(L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___value1;
		int32_t L_3 = CodedOutputStream_ComputeEnumSizeNoTag_mCB5B90A0B231A5802F44CFC5ADAEB1242F0553C5(L_2, /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_3));
	}
}
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeInt32SizeNoTag(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CodedOutputStream_ComputeInt32SizeNoTag_m370909614401731E07D4DEACEF7488A38A30B01C (int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodedOutputStream_ComputeInt32SizeNoTag_m370909614401731E07D4DEACEF7488A38A30B01C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___value0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(CodedOutputStream_t6FF414144C567C520A212C17587CA998689956E3_il2cpp_TypeInfo_var);
		int32_t L_2 = CodedOutputStream_ComputeRawVarint32Size_mBB34A0D2142D18730820495009D674EB2F889E32(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_000e:
	{
		return ((int32_t)10);
	}
}
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeEnumSizeNoTag(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CodedOutputStream_ComputeEnumSizeNoTag_mCB5B90A0B231A5802F44CFC5ADAEB1242F0553C5 (int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodedOutputStream_ComputeEnumSizeNoTag_mCB5B90A0B231A5802F44CFC5ADAEB1242F0553C5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(CodedOutputStream_t6FF414144C567C520A212C17587CA998689956E3_il2cpp_TypeInfo_var);
		int32_t L_1 = CodedOutputStream_ComputeInt32SizeNoTag_m370909614401731E07D4DEACEF7488A38A30B01C(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeRawVarint32Size(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CodedOutputStream_ComputeRawVarint32Size_mBB34A0D2142D18730820495009D674EB2F889E32 (uint32_t ___value0, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = ___value0;
		if (((int32_t)((int32_t)L_0&(int32_t)((int32_t)-128))))
		{
			goto IL_000b;
		}
	}
	{
		return 1;
	}

IL_000b:
	{
		uint32_t L_1 = ___value0;
		if (((int32_t)((int32_t)L_1&(int32_t)((int32_t)-16384))))
		{
			goto IL_0019;
		}
	}
	{
		return 2;
	}

IL_0019:
	{
		uint32_t L_2 = ___value0;
		if (((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2097152))))
		{
			goto IL_0027;
		}
	}
	{
		return 3;
	}

IL_0027:
	{
		uint32_t L_3 = ___value0;
		if (((int32_t)((int32_t)L_3&(int32_t)((int32_t)-268435456))))
		{
			goto IL_0035;
		}
	}
	{
		return 4;
	}

IL_0035:
	{
		return 5;
	}
}
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeRawVarint64Size(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CodedOutputStream_ComputeRawVarint64Size_mA787C8FE03DED2971D70313ABC7B71F37F466B82 (uint64_t ___value0, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = ___value0;
		if ((!(((uint64_t)((int64_t)((int64_t)L_0&(int64_t)(((int64_t)((int64_t)((int32_t)-128))))))) == ((uint64_t)(((int64_t)((int64_t)0)))))))
		{
			goto IL_000e;
		}
	}
	{
		return 1;
	}

IL_000e:
	{
		uint64_t L_1 = ___value0;
		if ((!(((uint64_t)((int64_t)((int64_t)L_1&(int64_t)(((int64_t)((int64_t)((int32_t)-16384))))))) == ((uint64_t)(((int64_t)((int64_t)0)))))))
		{
			goto IL_001f;
		}
	}
	{
		return 2;
	}

IL_001f:
	{
		uint64_t L_2 = ___value0;
		if ((!(((uint64_t)((int64_t)((int64_t)L_2&(int64_t)(((int64_t)((int64_t)((int32_t)-2097152))))))) == ((uint64_t)(((int64_t)((int64_t)0)))))))
		{
			goto IL_0030;
		}
	}
	{
		return 3;
	}

IL_0030:
	{
		uint64_t L_3 = ___value0;
		if ((!(((uint64_t)((int64_t)((int64_t)L_3&(int64_t)(((int64_t)((int64_t)((int32_t)-268435456))))))) == ((uint64_t)(((int64_t)((int64_t)0)))))))
		{
			goto IL_0041;
		}
	}
	{
		return 4;
	}

IL_0041:
	{
		uint64_t L_4 = ___value0;
		if ((!(((uint64_t)((int64_t)((int64_t)L_4&(int64_t)((int64_t)-34359738368LL)))) == ((uint64_t)(((int64_t)((int64_t)0)))))))
		{
			goto IL_0055;
		}
	}
	{
		return 5;
	}

IL_0055:
	{
		uint64_t L_5 = ___value0;
		if ((!(((uint64_t)((int64_t)((int64_t)L_5&(int64_t)((int64_t)-4398046511104LL)))) == ((uint64_t)(((int64_t)((int64_t)0)))))))
		{
			goto IL_0069;
		}
	}
	{
		return 6;
	}

IL_0069:
	{
		uint64_t L_6 = ___value0;
		if ((!(((uint64_t)((int64_t)((int64_t)L_6&(int64_t)((int64_t)-562949953421312LL)))) == ((uint64_t)(((int64_t)((int64_t)0)))))))
		{
			goto IL_007d;
		}
	}
	{
		return 7;
	}

IL_007d:
	{
		uint64_t L_7 = ___value0;
		if ((!(((uint64_t)((int64_t)((int64_t)L_7&(int64_t)((int64_t)-72057594037927936LL)))) == ((uint64_t)(((int64_t)((int64_t)0)))))))
		{
			goto IL_0091;
		}
	}
	{
		return 8;
	}

IL_0091:
	{
		uint64_t L_8 = ___value0;
		if ((!(((uint64_t)((int64_t)((int64_t)L_8&(int64_t)((int64_t)(std::numeric_limits<int64_t>::min)())))) == ((uint64_t)(((int64_t)((int64_t)0)))))))
		{
			goto IL_00a6;
		}
	}
	{
		return ((int32_t)9);
	}

IL_00a6:
	{
		return ((int32_t)10);
	}
}
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeTagSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CodedOutputStream_ComputeTagSize_mE2C32E82317507B0C0E344AC0D218A8F6EA12CBE (int32_t ___fieldNumber0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodedOutputStream_ComputeTagSize_mE2C32E82317507B0C0E344AC0D218A8F6EA12CBE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___fieldNumber0;
		uint32_t L_1 = WireFormat_MakeTag_m9BF62F1578FA7B2877A8D1458026E19AAFE3964F(L_0, 0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CodedOutputStream_t6FF414144C567C520A212C17587CA998689956E3_il2cpp_TypeInfo_var);
		int32_t L_2 = CodedOutputStream_ComputeRawVarint32Size_mBB34A0D2142D18730820495009D674EB2F889E32(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// Google.ProtocolBuffers.CodedOutputStream Google.ProtocolBuffers.CodedOutputStream::CreateInstance(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CodedOutputStream_t6FF414144C567C520A212C17587CA998689956E3 * CodedOutputStream_CreateInstance_m54CE3BE9AEF110DA1EA545A191E591367E7CA9A6 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___flatArray0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodedOutputStream_CreateInstance_m54CE3BE9AEF110DA1EA545A191E591367E7CA9A6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___flatArray0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___flatArray0;
		NullCheck(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(CodedOutputStream_t6FF414144C567C520A212C17587CA998689956E3_il2cpp_TypeInfo_var);
		CodedOutputStream_t6FF414144C567C520A212C17587CA998689956E3 * L_2 = CodedOutputStream_CreateInstance_mB40511EA02D789AE51561B3B3A2A0F7A54CC1DD5(L_0, 0, (((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))), /*hidden argument*/NULL);
		return L_2;
	}
}
// Google.ProtocolBuffers.CodedOutputStream Google.ProtocolBuffers.CodedOutputStream::CreateInstance(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CodedOutputStream_t6FF414144C567C520A212C17587CA998689956E3 * CodedOutputStream_CreateInstance_mB40511EA02D789AE51561B3B3A2A0F7A54CC1DD5 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___flatArray0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodedOutputStream_CreateInstance_mB40511EA02D789AE51561B3B3A2A0F7A54CC1DD5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___flatArray0;
		int32_t L_1 = ___offset1;
		int32_t L_2 = ___length2;
		CodedOutputStream_t6FF414144C567C520A212C17587CA998689956E3 * L_3 = (CodedOutputStream_t6FF414144C567C520A212C17587CA998689956E3 *)il2cpp_codegen_object_new(CodedOutputStream_t6FF414144C567C520A212C17587CA998689956E3_il2cpp_TypeInfo_var);
		CodedOutputStream__ctor_m5440A4DAF33751466097FD4CD85D7A7562BDA564(L_3, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteFloat(System.Int32,System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedOutputStream_WriteFloat_m3EEF3CB5A52127C6DBE9585F99CDF58B4A7D8DD8 (CodedOutputStream_t6FF414144C567C520A212C17587CA998689956E3 * __this, int32_t ___fieldNumber0, String_t* ___fieldName1, float ___value2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___fieldNumber0;
		CodedOutputStream_WriteTag_mAD0902B5FFE753EFD6C311DDFB11C77703DE9F31(__this, L_0, 5, /*hidden argument*/NULL);
		float L_1 = ___value2;
		CodedOutputStream_WriteFloatNoTag_m237A87522C5A2E3AF41EB69F7B0DF415F7A87B95(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteInt64(System.Int32,System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedOutputStream_WriteInt64_m019539F5E16160623E854D43D7B236ECA542AE0F (CodedOutputStream_t6FF414144C567C520A212C17587CA998689956E3 * __this, int32_t ___fieldNumber0, String_t* ___fieldName1, int64_t ___value2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___fieldNumber0;
		CodedOutputStream_WriteTag_mAD0902B5FFE753EFD6C311DDFB11C77703DE9F31(__this, L_0, 0, /*hidden argument*/NULL);
		int64_t L_1 = ___value2;
		CodedOutputStream_WriteRawVarint64_mEB769FF529708B0B04BAA1FCC5843351E255F681(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteInt32(System.Int32,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedOutputStream_WriteInt32_m882E713613E8F5F75C53B0788BBE02DD6799B6CA (CodedOutputStream_t6FF414144C567C520A212C17587CA998689956E3 * __this, int32_t ___fieldNumber0, String_t* ___fieldName1, int32_t ___value2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___fieldNumber0;
		CodedOutputStream_WriteTag_mAD0902B5FFE753EFD6C311DDFB11C77703DE9F31(__this, L_0, 0, /*hidden argument*/NULL);
		int32_t L_1 = ___value2;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_2 = ___value2;
		CodedOutputStream_WriteRawVarint32_m600FA15E7AE0A175329E1213BD91F4D27B8F43E7(__this, L_2, /*hidden argument*/NULL);
		goto IL_0023;
	}

IL_001b:
	{
		int32_t L_3 = ___value2;
		CodedOutputStream_WriteRawVarint64_mEB769FF529708B0B04BAA1FCC5843351E255F681(__this, (((int64_t)((int64_t)L_3))), /*hidden argument*/NULL);
	}

IL_0023:
	{
		return;
	}
}
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteMessage(System.Int32,System.String,Google.ProtocolBuffers.IMessageLite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedOutputStream_WriteMessage_m0D6B8F598C7EF8006829246B5894C874C4AA96FC (CodedOutputStream_t6FF414144C567C520A212C17587CA998689956E3 * __this, int32_t ___fieldNumber0, String_t* ___fieldName1, RuntimeObject* ___value2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodedOutputStream_WriteMessage_m0D6B8F598C7EF8006829246B5894C874C4AA96FC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___fieldNumber0;
		CodedOutputStream_WriteTag_mAD0902B5FFE753EFD6C311DDFB11C77703DE9F31(__this, L_0, 2, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___value2;
		NullCheck(L_1);
		int32_t L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 Google.ProtocolBuffers.IMessageLite::get_SerializedSize() */, IMessageLite_tBFF4C3D45EE47902CE049D63AE119D373003C2A3_il2cpp_TypeInfo_var, L_1);
		CodedOutputStream_WriteRawVarint32_m600FA15E7AE0A175329E1213BD91F4D27B8F43E7(__this, L_2, /*hidden argument*/NULL);
		RuntimeObject* L_3 = ___value2;
		NullCheck(L_3);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1 /* System.Void Google.ProtocolBuffers.IMessageLite::WriteTo(Google.ProtocolBuffers.ICodedOutputStream) */, IMessageLite_tBFF4C3D45EE47902CE049D63AE119D373003C2A3_il2cpp_TypeInfo_var, L_3, __this);
		return;
	}
}
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteEnum(System.Int32,System.String,System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedOutputStream_WriteEnum_mB1B7A037BEC4C5488B23CE12848D52AE87D012A2 (CodedOutputStream_t6FF414144C567C520A212C17587CA998689956E3 * __this, int32_t ___fieldNumber0, String_t* ___fieldName1, int32_t ___value2, RuntimeObject * ___rawValue3, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___fieldNumber0;
		CodedOutputStream_WriteTag_mAD0902B5FFE753EFD6C311DDFB11C77703DE9F31(__this, L_0, 0, /*hidden argument*/NULL);
		int32_t L_1 = ___value2;
		CodedOutputStream_WriteInt32NoTag_m44A3C8BF676D904191FEA4C1C744449631AE4EA8(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteFloatNoTag(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedOutputStream_WriteFloatNoTag_m237A87522C5A2E3AF41EB69F7B0DF415F7A87B95 (CodedOutputStream_t6FF414144C567C520A212C17587CA998689956E3 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodedOutputStream_WriteFloatNoTag_m237A87522C5A2E3AF41EB69F7B0DF415F7A87B95_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	int32_t V_1 = 0;
	{
		float L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = BitConverter_GetBytes_m5795DECB822051D8BBF3EA92DD3B2372E017ADAF(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = ((BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var))->get_IsLittleEndian_0();
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = V_0;
		ByteArray_Reverse_m34CB3CB538881691666A11172E354C907CC19910(L_3, /*hidden argument*/NULL);
	}

IL_0017:
	{
		int32_t L_4 = __this->get_limit_2();
		int32_t L_5 = __this->get_position_3();
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)L_5))) < ((int32_t)4)))
		{
			goto IL_009b;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = __this->get_buffer_1();
		int32_t L_7 = __this->get_position_3();
		int32_t L_8 = L_7;
		V_1 = L_8;
		__this->set_position_3(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1)));
		int32_t L_9 = V_1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = 0;
		uint8_t L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (uint8_t)L_12);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_13 = __this->get_buffer_1();
		int32_t L_14 = __this->get_position_3();
		int32_t L_15 = L_14;
		V_1 = L_15;
		__this->set_position_3(((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1)));
		int32_t L_16 = V_1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18 = 1;
		uint8_t L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (uint8_t)L_19);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_20 = __this->get_buffer_1();
		int32_t L_21 = __this->get_position_3();
		int32_t L_22 = L_21;
		V_1 = L_22;
		__this->set_position_3(((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1)));
		int32_t L_23 = V_1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_24 = V_0;
		NullCheck(L_24);
		int32_t L_25 = 2;
		uint8_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (uint8_t)L_26);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_27 = __this->get_buffer_1();
		int32_t L_28 = __this->get_position_3();
		int32_t L_29 = L_28;
		V_1 = L_29;
		__this->set_position_3(((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1)));
		int32_t L_30 = V_1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_31 = V_0;
		NullCheck(L_31);
		int32_t L_32 = 3;
		uint8_t L_33 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_30), (uint8_t)L_33);
		goto IL_00a4;
	}

IL_009b:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_34 = V_0;
		CodedOutputStream_WriteRawBytes_mC6EF30495677ECD22E0F6055388DD33D7592B2B0(__this, L_34, 0, 4, /*hidden argument*/NULL);
	}

IL_00a4:
	{
		return;
	}
}
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteInt32NoTag(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedOutputStream_WriteInt32NoTag_m44A3C8BF676D904191FEA4C1C744449631AE4EA8 (CodedOutputStream_t6FF414144C567C520A212C17587CA998689956E3 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___value0;
		CodedOutputStream_WriteRawVarint32_m600FA15E7AE0A175329E1213BD91F4D27B8F43E7(__this, L_1, /*hidden argument*/NULL);
		goto IL_001b;
	}

IL_0013:
	{
		int32_t L_2 = ___value0;
		CodedOutputStream_WriteRawVarint64_mEB769FF529708B0B04BAA1FCC5843351E255F681(__this, (((int64_t)((int64_t)L_2))), /*hidden argument*/NULL);
	}

IL_001b:
	{
		return;
	}
}
// System.Void Google.ProtocolBuffers.CodedOutputStream::WritePackedFloatArray(System.Int32,System.String,System.Int32,System.Collections.Generic.IEnumerable`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedOutputStream_WritePackedFloatArray_m831FBF27B71E42F6BF8949A3656ADF54E5201301 (CodedOutputStream_t6FF414144C567C520A212C17587CA998689956E3 * __this, int32_t ___fieldNumber0, String_t* ___fieldName1, int32_t ___calculatedSize2, RuntimeObject* ___list3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodedOutputStream_WritePackedFloatArray_m831FBF27B71E42F6BF8949A3656ADF54E5201301_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	RuntimeObject* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = ___fieldNumber0;
		CodedOutputStream_WriteTag_mAD0902B5FFE753EFD6C311DDFB11C77703DE9F31(__this, L_0, 2, /*hidden argument*/NULL);
		int32_t L_1 = ___calculatedSize2;
		CodedOutputStream_WriteRawVarint32_m600FA15E7AE0A175329E1213BD91F4D27B8F43E7(__this, L_1, /*hidden argument*/NULL);
		RuntimeObject* L_2 = ___list3;
		NullCheck(L_2);
		RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Single>::GetEnumerator() */, IEnumerable_1_tC56022D901625310FABDB176D77FA45CA2305820_il2cpp_TypeInfo_var, L_2);
		V_1 = L_3;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002a;
		}

IL_001c:
		{
			RuntimeObject* L_4 = V_1;
			NullCheck(L_4);
			float L_5 = InterfaceFuncInvoker0< float >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Single>::get_Current() */, IEnumerator_1_tCD0F5A8354BEF7A7CB31DB98044011359B3388AF_il2cpp_TypeInfo_var, L_4);
			V_0 = L_5;
			float L_6 = V_0;
			CodedOutputStream_WriteFloatNoTag_m237A87522C5A2E3AF41EB69F7B0DF415F7A87B95(__this, L_6, /*hidden argument*/NULL);
		}

IL_002a:
		{
			RuntimeObject* L_7 = V_1;
			NullCheck(L_7);
			bool L_8 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_7);
			if (L_8)
			{
				goto IL_001c;
			}
		}

IL_0035:
		{
			IL2CPP_LEAVE(0x47, FINALLY_003a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003a;
	}

FINALLY_003a:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_9 = V_1;
			if (!L_9)
			{
				goto IL_0046;
			}
		}

IL_0040:
		{
			RuntimeObject* L_10 = V_1;
			NullCheck(L_10);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_10);
		}

IL_0046:
		{
			IL2CPP_END_FINALLY(58)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(58)
	{
		IL2CPP_JUMP_TBL(0x47, IL_0047)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0047:
	{
		return;
	}
}
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteTag(System.Int32,Google.ProtocolBuffers.WireFormat_WireType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedOutputStream_WriteTag_mAD0902B5FFE753EFD6C311DDFB11C77703DE9F31 (CodedOutputStream_t6FF414144C567C520A212C17587CA998689956E3 * __this, int32_t ___fieldNumber0, uint32_t ___type1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___fieldNumber0;
		uint32_t L_1 = ___type1;
		uint32_t L_2 = WireFormat_MakeTag_m9BF62F1578FA7B2877A8D1458026E19AAFE3964F(L_0, L_1, /*hidden argument*/NULL);
		CodedOutputStream_WriteRawVarint32_m600FA15E7AE0A175329E1213BD91F4D27B8F43E7(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteRawVarint32(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedOutputStream_WriteRawVarint32_m600FA15E7AE0A175329E1213BD91F4D27B8F43E7 (CodedOutputStream_t6FF414144C567C520A212C17587CA998689956E3 * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		goto IL_002d;
	}

IL_0005:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get_buffer_1();
		int32_t L_1 = __this->get_position_3();
		int32_t L_2 = L_1;
		V_0 = L_2;
		__this->set_position_3(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)));
		int32_t L_3 = V_0;
		uint32_t L_4 = ___value0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_4&(int32_t)((int32_t)127)))|(int32_t)((int32_t)128)))))));
		uint32_t L_5 = ___value0;
		___value0 = ((int32_t)((uint32_t)L_5>>7));
	}

IL_002d:
	{
		uint32_t L_6 = ___value0;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)127)))))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_7 = __this->get_position_3();
		int32_t L_8 = __this->get_limit_2();
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0005;
		}
	}

IL_0046:
	{
		goto IL_0061;
	}

IL_004b:
	{
		uint32_t L_9 = ___value0;
		CodedOutputStream_WriteRawByte_m2E7A872FBE5B33184F0106F8797920B7A17A6AA6(__this, (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_9&(int32_t)((int32_t)127)))|(int32_t)((int32_t)128)))))), /*hidden argument*/NULL);
		uint32_t L_10 = ___value0;
		___value0 = ((int32_t)((uint32_t)L_10>>7));
	}

IL_0061:
	{
		uint32_t L_11 = ___value0;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)127)))))
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_12 = __this->get_position_3();
		int32_t L_13 = __this->get_limit_2();
		if ((((int32_t)L_12) >= ((int32_t)L_13)))
		{
			goto IL_0099;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_14 = __this->get_buffer_1();
		int32_t L_15 = __this->get_position_3();
		int32_t L_16 = L_15;
		V_0 = L_16;
		__this->set_position_3(((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1)));
		int32_t L_17 = V_0;
		uint32_t L_18 = ___value0;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (uint8_t)(((int32_t)((uint8_t)L_18))));
		goto IL_00a1;
	}

IL_0099:
	{
		uint32_t L_19 = ___value0;
		CodedOutputStream_WriteRawByte_m2E7A872FBE5B33184F0106F8797920B7A17A6AA6(__this, (uint8_t)(((int32_t)((uint8_t)L_19))), /*hidden argument*/NULL);
	}

IL_00a1:
	{
		return;
	}
}
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteRawVarint64(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedOutputStream_WriteRawVarint64_mEB769FF529708B0B04BAA1FCC5843351E255F681 (CodedOutputStream_t6FF414144C567C520A212C17587CA998689956E3 * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		goto IL_002f;
	}

IL_0005:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get_buffer_1();
		int32_t L_1 = __this->get_position_3();
		int32_t L_2 = L_1;
		V_0 = L_2;
		__this->set_position_3(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)));
		int32_t L_3 = V_0;
		uint64_t L_4 = ___value0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)((int64_t)((int64_t)L_4&(int64_t)(((int64_t)((int64_t)((int32_t)127))))))|(int64_t)(((int64_t)((int64_t)((int32_t)128))))))))));
		uint64_t L_5 = ___value0;
		___value0 = ((int64_t)((uint64_t)L_5>>7));
	}

IL_002f:
	{
		uint64_t L_6 = ___value0;
		if ((!(((uint64_t)L_6) > ((uint64_t)(((int64_t)((int64_t)((int32_t)127))))))))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_7 = __this->get_position_3();
		int32_t L_8 = __this->get_limit_2();
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0005;
		}
	}

IL_0049:
	{
		goto IL_0066;
	}

IL_004e:
	{
		uint64_t L_9 = ___value0;
		CodedOutputStream_WriteRawByte_m2E7A872FBE5B33184F0106F8797920B7A17A6AA6(__this, (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)((int64_t)((int64_t)L_9&(int64_t)(((int64_t)((int64_t)((int32_t)127))))))|(int64_t)(((int64_t)((int64_t)((int32_t)128))))))))), /*hidden argument*/NULL);
		uint64_t L_10 = ___value0;
		___value0 = ((int64_t)((uint64_t)L_10>>7));
	}

IL_0066:
	{
		uint64_t L_11 = ___value0;
		if ((!(((uint64_t)L_11) <= ((uint64_t)(((int64_t)((int64_t)((int32_t)127))))))))
		{
			goto IL_004e;
		}
	}
	{
		int32_t L_12 = __this->get_position_3();
		int32_t L_13 = __this->get_limit_2();
		if ((((int32_t)L_12) >= ((int32_t)L_13)))
		{
			goto IL_009f;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_14 = __this->get_buffer_1();
		int32_t L_15 = __this->get_position_3();
		int32_t L_16 = L_15;
		V_0 = L_16;
		__this->set_position_3(((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1)));
		int32_t L_17 = V_0;
		uint64_t L_18 = ___value0;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (uint8_t)(((int32_t)((uint8_t)L_18))));
		goto IL_00a7;
	}

IL_009f:
	{
		uint64_t L_19 = ___value0;
		CodedOutputStream_WriteRawByte_m2E7A872FBE5B33184F0106F8797920B7A17A6AA6(__this, (uint8_t)(((int32_t)((uint8_t)L_19))), /*hidden argument*/NULL);
	}

IL_00a7:
	{
		return;
	}
}
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteRawByte(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedOutputStream_WriteRawByte_m2E7A872FBE5B33184F0106F8797920B7A17A6AA6 (CodedOutputStream_t6FF414144C567C520A212C17587CA998689956E3 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_position_3();
		int32_t L_1 = __this->get_limit_2();
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		CodedOutputStream_RefreshBuffer_m228716090B0D4D7716E2FA4E1EBFCE4061F65B0A(__this, /*hidden argument*/NULL);
	}

IL_0017:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = __this->get_buffer_1();
		int32_t L_3 = __this->get_position_3();
		int32_t L_4 = L_3;
		V_0 = L_4;
		__this->set_position_3(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1)));
		int32_t L_5 = V_0;
		uint8_t L_6 = ___value0;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (uint8_t)L_6);
		return;
	}
}
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteRawBytes(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedOutputStream_WriteRawBytes_mC6EF30495677ECD22E0F6055388DD33D7592B2B0 (CodedOutputStream_t6FF414144C567C520A212C17587CA998689956E3 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___value0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_limit_2();
		int32_t L_1 = __this->get_position_3();
		int32_t L_2 = ___length2;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1))) < ((int32_t)L_2)))
		{
			goto IL_003a;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = ___value0;
		int32_t L_4 = ___offset1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = __this->get_buffer_1();
		int32_t L_6 = __this->get_position_3();
		int32_t L_7 = ___length2;
		ByteArray_Copy_m557A996C1B60E97D2E479EEE8D9CB321AB75B8FF(L_3, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		int32_t L_8 = __this->get_position_3();
		int32_t L_9 = ___length2;
		__this->set_position_3(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)L_9)));
		goto IL_00ad;
	}

IL_003a:
	{
		int32_t L_10 = __this->get_limit_2();
		int32_t L_11 = __this->get_position_3();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)L_11));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_12 = ___value0;
		int32_t L_13 = ___offset1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_14 = __this->get_buffer_1();
		int32_t L_15 = __this->get_position_3();
		int32_t L_16 = V_0;
		ByteArray_Copy_m557A996C1B60E97D2E479EEE8D9CB321AB75B8FF(L_12, L_13, L_14, L_15, L_16, /*hidden argument*/NULL);
		int32_t L_17 = ___offset1;
		int32_t L_18 = V_0;
		___offset1 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)L_18));
		int32_t L_19 = ___length2;
		int32_t L_20 = V_0;
		___length2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)L_20));
		int32_t L_21 = __this->get_limit_2();
		__this->set_position_3(L_21);
		CodedOutputStream_RefreshBuffer_m228716090B0D4D7716E2FA4E1EBFCE4061F65B0A(__this, /*hidden argument*/NULL);
		int32_t L_22 = ___length2;
		int32_t L_23 = __this->get_limit_2();
		if ((((int32_t)L_22) > ((int32_t)L_23)))
		{
			goto IL_009f;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_24 = ___value0;
		int32_t L_25 = ___offset1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_26 = __this->get_buffer_1();
		int32_t L_27 = ___length2;
		ByteArray_Copy_m557A996C1B60E97D2E479EEE8D9CB321AB75B8FF(L_24, L_25, L_26, 0, L_27, /*hidden argument*/NULL);
		int32_t L_28 = ___length2;
		__this->set_position_3(L_28);
		goto IL_00ad;
	}

IL_009f:
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_29 = __this->get_output_4();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_30 = ___value0;
		int32_t L_31 = ___offset1;
		int32_t L_32 = ___length2;
		NullCheck(L_29);
		VirtActionInvoker3< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(23 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_29, L_30, L_31, L_32);
	}

IL_00ad:
	{
		return;
	}
}
// System.Void Google.ProtocolBuffers.CodedOutputStream::RefreshBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedOutputStream_RefreshBuffer_m228716090B0D4D7716E2FA4E1EBFCE4061F65B0A (CodedOutputStream_t6FF414144C567C520A212C17587CA998689956E3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodedOutputStream_RefreshBuffer_m228716090B0D4D7716E2FA4E1EBFCE4061F65B0A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_0 = __this->get_output_4();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		OutOfSpaceException_t6BC55F41676DE61CC27D6EE98E044FE5C4C7BE5E * L_1 = (OutOfSpaceException_t6BC55F41676DE61CC27D6EE98E044FE5C4C7BE5E *)il2cpp_codegen_object_new(OutOfSpaceException_t6BC55F41676DE61CC27D6EE98E044FE5C4C7BE5E_il2cpp_TypeInfo_var);
		OutOfSpaceException__ctor_m5B2FF11494FCA787A208E50C60B5D250C87B9249(L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, CodedOutputStream_RefreshBuffer_m228716090B0D4D7716E2FA4E1EBFCE4061F65B0A_RuntimeMethod_var);
	}

IL_0011:
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_2 = __this->get_output_4();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = __this->get_buffer_1();
		int32_t L_4 = __this->get_position_3();
		NullCheck(L_2);
		VirtActionInvoker3< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(23 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_2, L_3, 0, L_4);
		__this->set_position_3(0);
		return;
	}
}
// System.Void Google.ProtocolBuffers.CodedOutputStream::CheckNoSpaceLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedOutputStream_CheckNoSpaceLeft_mC23977D42A81BA5E37063FD8117EC568D90B466B (CodedOutputStream_t6FF414144C567C520A212C17587CA998689956E3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodedOutputStream_CheckNoSpaceLeft_mC23977D42A81BA5E37063FD8117EC568D90B466B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = CodedOutputStream_get_SpaceLeft_mADAF9D8D680791DD50C0ED974809FA602BD2BB8C(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_1 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_1, _stringLiteralCF6A113CDBEF532EF55377D14E91EE33248BC5DC, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, CodedOutputStream_CheckNoSpaceLeft_mC23977D42A81BA5E37063FD8117EC568D90B466B_RuntimeMethod_var);
	}

IL_0016:
	{
		return;
	}
}
// System.Void Google.ProtocolBuffers.CodedOutputStream::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedOutputStream__cctor_m04BA84AE430F59CB6222197FBEA2E27AD0099507 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CodedOutputStream__cctor_m04BA84AE430F59CB6222197FBEA2E27AD0099507_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((CodedOutputStream_t6FF414144C567C520A212C17587CA998689956E3_StaticFields*)il2cpp_codegen_static_fields_for(CodedOutputStream_t6FF414144C567C520A212C17587CA998689956E3_il2cpp_TypeInfo_var))->set_DefaultBufferSize_0(((int32_t)4096));
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
// System.Void Google.ProtocolBuffers.CodedOutputStream_OutOfSpaceException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutOfSpaceException__ctor_m5B2FF11494FCA787A208E50C60B5D250C87B9249 (OutOfSpaceException_t6BC55F41676DE61CC27D6EE98E044FE5C4C7BE5E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OutOfSpaceException__ctor_m5B2FF11494FCA787A208E50C60B5D250C87B9249_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IOException__ctor_mB64DEFB376AA8E279A647A3770F913B20EF65175(__this, _stringLiteralC1938D47E5DDC4C0B390F55D0CAABBF7B2F31A7B, /*hidden argument*/NULL);
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
// System.Void Google.ProtocolBuffers.ExtensionRegistry::.ctor(System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.Dictionary`2<System.String,Google.ProtocolBuffers.IGeneratedExtensionLite>>,System.Collections.Generic.Dictionary`2<Google.ProtocolBuffers.ExtensionRegistry_ExtensionIntPair,Google.ProtocolBuffers.IGeneratedExtensionLite>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtensionRegistry__ctor_mF4099F865F601799805753719699B51A1F8BF699 (ExtensionRegistry_tAC8BBAEAD627B80DF852E93F941EF92FB4C8558E * __this, Dictionary_2_t418F30137BF00E0E9EFF2A2DB75AB3A010190D9B * ___byName0, Dictionary_2_t36E2ECEC38081A5C8DF6DED6117C7CE5B2491886 * ___byNumber1, bool ___readOnly2, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		Dictionary_2_t418F30137BF00E0E9EFF2A2DB75AB3A010190D9B * L_0 = ___byName0;
		__this->set_extensionsByName_1(L_0);
		Dictionary_2_t36E2ECEC38081A5C8DF6DED6117C7CE5B2491886 * L_1 = ___byNumber1;
		__this->set_extensionsByNumber_2(L_1);
		bool L_2 = ___readOnly2;
		__this->set_readOnly_3(L_2);
		return;
	}
}
// Google.ProtocolBuffers.ExtensionRegistry Google.ProtocolBuffers.ExtensionRegistry::get_Empty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExtensionRegistry_tAC8BBAEAD627B80DF852E93F941EF92FB4C8558E * ExtensionRegistry_get_Empty_mC76700E7B42667A40F8433F271510D22D330BF29 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExtensionRegistry_get_Empty_mC76700E7B42667A40F8433F271510D22D330BF29_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ExtensionRegistry_tAC8BBAEAD627B80DF852E93F941EF92FB4C8558E_il2cpp_TypeInfo_var);
		ExtensionRegistry_tAC8BBAEAD627B80DF852E93F941EF92FB4C8558E * L_0 = ((ExtensionRegistry_tAC8BBAEAD627B80DF852E93F941EF92FB4C8558E_StaticFields*)il2cpp_codegen_static_fields_for(ExtensionRegistry_tAC8BBAEAD627B80DF852E93F941EF92FB4C8558E_il2cpp_TypeInfo_var))->get_empty_0();
		return L_0;
	}
}
// Google.ProtocolBuffers.ExtensionRegistry Google.ProtocolBuffers.ExtensionRegistry::CreateInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExtensionRegistry_tAC8BBAEAD627B80DF852E93F941EF92FB4C8558E * ExtensionRegistry_CreateInstance_mBE28073ABF59242395C31E9DFAC9B7FEA784BCB7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExtensionRegistry_CreateInstance_mBE28073ABF59242395C31E9DFAC9B7FEA784BCB7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t418F30137BF00E0E9EFF2A2DB75AB3A010190D9B * L_0 = (Dictionary_2_t418F30137BF00E0E9EFF2A2DB75AB3A010190D9B *)il2cpp_codegen_object_new(Dictionary_2_t418F30137BF00E0E9EFF2A2DB75AB3A010190D9B_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m6E310B3BE9BAB20C277774572444FC00E1BB76EC(L_0, /*hidden argument*/Dictionary_2__ctor_m6E310B3BE9BAB20C277774572444FC00E1BB76EC_RuntimeMethod_var);
		Dictionary_2_t36E2ECEC38081A5C8DF6DED6117C7CE5B2491886 * L_1 = (Dictionary_2_t36E2ECEC38081A5C8DF6DED6117C7CE5B2491886 *)il2cpp_codegen_object_new(Dictionary_2_t36E2ECEC38081A5C8DF6DED6117C7CE5B2491886_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mEB4C29112CBC2CF1E636806831A9972B0BE0A5F9(L_1, /*hidden argument*/Dictionary_2__ctor_mEB4C29112CBC2CF1E636806831A9972B0BE0A5F9_RuntimeMethod_var);
		ExtensionRegistry_tAC8BBAEAD627B80DF852E93F941EF92FB4C8558E * L_2 = (ExtensionRegistry_tAC8BBAEAD627B80DF852E93F941EF92FB4C8558E *)il2cpp_codegen_object_new(ExtensionRegistry_tAC8BBAEAD627B80DF852E93F941EF92FB4C8558E_il2cpp_TypeInfo_var);
		ExtensionRegistry__ctor_mF4099F865F601799805753719699B51A1F8BF699(L_2, L_0, L_1, (bool)0, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void Google.ProtocolBuffers.ExtensionRegistry::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtensionRegistry__cctor_mD36BBA297AACB67B5478C47FD5AFF2775B3CD987 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExtensionRegistry__cctor_mD36BBA297AACB67B5478C47FD5AFF2775B3CD987_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t418F30137BF00E0E9EFF2A2DB75AB3A010190D9B * L_0 = (Dictionary_2_t418F30137BF00E0E9EFF2A2DB75AB3A010190D9B *)il2cpp_codegen_object_new(Dictionary_2_t418F30137BF00E0E9EFF2A2DB75AB3A010190D9B_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m6E310B3BE9BAB20C277774572444FC00E1BB76EC(L_0, /*hidden argument*/Dictionary_2__ctor_m6E310B3BE9BAB20C277774572444FC00E1BB76EC_RuntimeMethod_var);
		Dictionary_2_t36E2ECEC38081A5C8DF6DED6117C7CE5B2491886 * L_1 = (Dictionary_2_t36E2ECEC38081A5C8DF6DED6117C7CE5B2491886 *)il2cpp_codegen_object_new(Dictionary_2_t36E2ECEC38081A5C8DF6DED6117C7CE5B2491886_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mEB4C29112CBC2CF1E636806831A9972B0BE0A5F9(L_1, /*hidden argument*/Dictionary_2__ctor_mEB4C29112CBC2CF1E636806831A9972B0BE0A5F9_RuntimeMethod_var);
		ExtensionRegistry_tAC8BBAEAD627B80DF852E93F941EF92FB4C8558E * L_2 = (ExtensionRegistry_tAC8BBAEAD627B80DF852E93F941EF92FB4C8558E *)il2cpp_codegen_object_new(ExtensionRegistry_tAC8BBAEAD627B80DF852E93F941EF92FB4C8558E_il2cpp_TypeInfo_var);
		ExtensionRegistry__ctor_mF4099F865F601799805753719699B51A1F8BF699(L_2, L_0, L_1, (bool)1, /*hidden argument*/NULL);
		((ExtensionRegistry_tAC8BBAEAD627B80DF852E93F941EF92FB4C8558E_StaticFields*)il2cpp_codegen_static_fields_for(ExtensionRegistry_tAC8BBAEAD627B80DF852E93F941EF92FB4C8558E_il2cpp_TypeInfo_var))->set_empty_0(L_2);
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
// Conversion methods for marshalling of: Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair
IL2CPP_EXTERN_C void ExtensionIntPair_tA731DCA4C288695BF78F3F71F1515142068CC5DB_marshal_pinvoke(const ExtensionIntPair_tA731DCA4C288695BF78F3F71F1515142068CC5DB& unmarshaled, ExtensionIntPair_tA731DCA4C288695BF78F3F71F1515142068CC5DB_marshaled_pinvoke& marshaled)
{
	if (unmarshaled.get_msgType_0() != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.get_msgType_0()))
		{
			marshaled.___msgType_0 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.get_msgType_0()));
			(marshaled.___msgType_0)->AddRef();
		}
		else
		{
			marshaled.___msgType_0 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.get_msgType_0());
		}
	}
	else
	{
		marshaled.___msgType_0 = NULL;
	}
	marshaled.___number_1 = unmarshaled.get_number_1();
}
IL2CPP_EXTERN_C void ExtensionIntPair_tA731DCA4C288695BF78F3F71F1515142068CC5DB_marshal_pinvoke_back(const ExtensionIntPair_tA731DCA4C288695BF78F3F71F1515142068CC5DB_marshaled_pinvoke& marshaled, ExtensionIntPair_tA731DCA4C288695BF78F3F71F1515142068CC5DB& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExtensionIntPair_tA731DCA4C288695BF78F3F71F1515142068CC5DB_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.___msgType_0 != NULL)
	{
		unmarshaled.set_msgType_0(il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___msgType_0, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.get_msgType_0()))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.get_msgType_0()), Il2CppIUnknown::IID, marshaled.___msgType_0);
		}
	}
	else
	{
		unmarshaled.set_msgType_0(NULL);
	}
	int32_t unmarshaled_number_temp_1 = 0;
	unmarshaled_number_temp_1 = marshaled.___number_1;
	unmarshaled.set_number_1(unmarshaled_number_temp_1);
}
// Conversion method for clean up from marshalling of: Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair
IL2CPP_EXTERN_C void ExtensionIntPair_tA731DCA4C288695BF78F3F71F1515142068CC5DB_marshal_pinvoke_cleanup(ExtensionIntPair_tA731DCA4C288695BF78F3F71F1515142068CC5DB_marshaled_pinvoke& marshaled)
{
	if (marshaled.___msgType_0 != NULL)
	{
		(marshaled.___msgType_0)->Release();
		marshaled.___msgType_0 = NULL;
	}
}
// Conversion methods for marshalling of: Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair
IL2CPP_EXTERN_C void ExtensionIntPair_tA731DCA4C288695BF78F3F71F1515142068CC5DB_marshal_com(const ExtensionIntPair_tA731DCA4C288695BF78F3F71F1515142068CC5DB& unmarshaled, ExtensionIntPair_tA731DCA4C288695BF78F3F71F1515142068CC5DB_marshaled_com& marshaled)
{
	if (unmarshaled.get_msgType_0() != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.get_msgType_0()))
		{
			marshaled.___msgType_0 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.get_msgType_0()));
			(marshaled.___msgType_0)->AddRef();
		}
		else
		{
			marshaled.___msgType_0 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.get_msgType_0());
		}
	}
	else
	{
		marshaled.___msgType_0 = NULL;
	}
	marshaled.___number_1 = unmarshaled.get_number_1();
}
IL2CPP_EXTERN_C void ExtensionIntPair_tA731DCA4C288695BF78F3F71F1515142068CC5DB_marshal_com_back(const ExtensionIntPair_tA731DCA4C288695BF78F3F71F1515142068CC5DB_marshaled_com& marshaled, ExtensionIntPair_tA731DCA4C288695BF78F3F71F1515142068CC5DB& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExtensionIntPair_tA731DCA4C288695BF78F3F71F1515142068CC5DB_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.___msgType_0 != NULL)
	{
		unmarshaled.set_msgType_0(il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___msgType_0, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.get_msgType_0()))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.get_msgType_0()), Il2CppIUnknown::IID, marshaled.___msgType_0);
		}
	}
	else
	{
		unmarshaled.set_msgType_0(NULL);
	}
	int32_t unmarshaled_number_temp_1 = 0;
	unmarshaled_number_temp_1 = marshaled.___number_1;
	unmarshaled.set_number_1(unmarshaled_number_temp_1);
}
// Conversion method for clean up from marshalling of: Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair
IL2CPP_EXTERN_C void ExtensionIntPair_tA731DCA4C288695BF78F3F71F1515142068CC5DB_marshal_com_cleanup(ExtensionIntPair_tA731DCA4C288695BF78F3F71F1515142068CC5DB_marshaled_com& marshaled)
{
	if (marshaled.___msgType_0 != NULL)
	{
		(marshaled.___msgType_0)->Release();
		marshaled.___msgType_0 = NULL;
	}
}
// System.Int32 Google.ProtocolBuffers.ExtensionRegistry_ExtensionIntPair::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExtensionIntPair_GetHashCode_m1D21D9A1D7D3E5A2ECEE9383AF118B4F3D82D299 (ExtensionIntPair_tA731DCA4C288695BF78F3F71F1515142068CC5DB * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_msgType_0();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		int32_t L_2 = __this->get_number_1();
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)((int32_t)65535))), (int32_t)L_2));
	}
}
IL2CPP_EXTERN_C  int32_t ExtensionIntPair_GetHashCode_m1D21D9A1D7D3E5A2ECEE9383AF118B4F3D82D299_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ExtensionIntPair_tA731DCA4C288695BF78F3F71F1515142068CC5DB * _thisAdjusted = reinterpret_cast<ExtensionIntPair_tA731DCA4C288695BF78F3F71F1515142068CC5DB *>(__this + _offset);
	return ExtensionIntPair_GetHashCode_m1D21D9A1D7D3E5A2ECEE9383AF118B4F3D82D299(_thisAdjusted, method);
}
// System.Boolean Google.ProtocolBuffers.ExtensionRegistry_ExtensionIntPair::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExtensionIntPair_Equals_m224294E7F9245BCED0B0DD828A59F136212F97C4 (ExtensionIntPair_tA731DCA4C288695BF78F3F71F1515142068CC5DB * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExtensionIntPair_Equals_m224294E7F9245BCED0B0DD828A59F136212F97C4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, ExtensionIntPair_tA731DCA4C288695BF78F3F71F1515142068CC5DB_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		RuntimeObject * L_1 = ___obj0;
		bool L_2 = ExtensionIntPair_Equals_m8276EEC0E6636D5526116D44148196AAC89AADB2((ExtensionIntPair_tA731DCA4C288695BF78F3F71F1515142068CC5DB *)__this, ((*(ExtensionIntPair_tA731DCA4C288695BF78F3F71F1515142068CC5DB *)((ExtensionIntPair_tA731DCA4C288695BF78F3F71F1515142068CC5DB *)UnBox(L_1, ExtensionIntPair_tA731DCA4C288695BF78F3F71F1515142068CC5DB_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool ExtensionIntPair_Equals_m224294E7F9245BCED0B0DD828A59F136212F97C4_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ExtensionIntPair_tA731DCA4C288695BF78F3F71F1515142068CC5DB * _thisAdjusted = reinterpret_cast<ExtensionIntPair_tA731DCA4C288695BF78F3F71F1515142068CC5DB *>(__this + _offset);
	return ExtensionIntPair_Equals_m224294E7F9245BCED0B0DD828A59F136212F97C4(_thisAdjusted, ___obj0, method);
}
// System.Boolean Google.ProtocolBuffers.ExtensionRegistry_ExtensionIntPair::Equals(Google.ProtocolBuffers.ExtensionRegistry_ExtensionIntPair)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExtensionIntPair_Equals_m8276EEC0E6636D5526116D44148196AAC89AADB2 (ExtensionIntPair_tA731DCA4C288695BF78F3F71F1515142068CC5DB * __this, ExtensionIntPair_tA731DCA4C288695BF78F3F71F1515142068CC5DB  ___other0, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		RuntimeObject * L_0 = __this->get_msgType_0();
		RuntimeObject * L_1 = (&___other0)->get_msgType_0();
		NullCheck(L_0);
		bool L_2 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_3 = __this->get_number_1();
		int32_t L_4 = (&___other0)->get_number_1();
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)L_4))? 1 : 0);
		goto IL_0029;
	}

IL_0028:
	{
		G_B3_0 = 0;
	}

IL_0029:
	{
		return (bool)G_B3_0;
	}
}
IL2CPP_EXTERN_C  bool ExtensionIntPair_Equals_m8276EEC0E6636D5526116D44148196AAC89AADB2_AdjustorThunk (RuntimeObject * __this, ExtensionIntPair_tA731DCA4C288695BF78F3F71F1515142068CC5DB  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ExtensionIntPair_tA731DCA4C288695BF78F3F71F1515142068CC5DB * _thisAdjusted = reinterpret_cast<ExtensionIntPair_tA731DCA4C288695BF78F3F71F1515142068CC5DB *>(__this + _offset);
	return ExtensionIntPair_Equals_m8276EEC0E6636D5526116D44148196AAC89AADB2(_thisAdjusted, ___other0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Globalization.CultureInfo Google.ProtocolBuffers.FrameworkPortability::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * FrameworkPortability_get_InvariantCulture_m88D300312A84CE7D244C8C22272D988912EA1A12 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FrameworkPortability_get_InvariantCulture_m88D300312A84CE7D244C8C22272D988912EA1A12_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_0 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Google.ProtocolBuffers.FrameworkPortability::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrameworkPortability__cctor_mDD51694847B6996EA1C3EA84C8B5CDE6141D65AE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FrameworkPortability__cctor_mDD51694847B6996EA1C3EA84C8B5CDE6141D65AE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = Environment_get_NewLine_m5D4F4667FA5D1E2DBDD4DF9696D0CE76C83EF318(/*hidden argument*/NULL);
		((FrameworkPortability_t267BF7312587491B107C4F014A1FB31FD1BD99BF_StaticFields*)il2cpp_codegen_static_fields_for(FrameworkPortability_t267BF7312587491B107C4F014A1FB31FD1BD99BF_il2cpp_TypeInfo_var))->set_NewLine_0(L_0);
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
// System.Void Google.ProtocolBuffers.InvalidProtocolBufferException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidProtocolBufferException__ctor_m82587930FDC7CF75A04B507E73E644DBF28BCF0E (InvalidProtocolBufferException_t33420AA524353DDC202DCBD0462457CC2AA7B4F9 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___message0;
		IOException__ctor_mB64DEFB376AA8E279A647A3770F913B20EF65175(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// Google.ProtocolBuffers.InvalidProtocolBufferException Google.ProtocolBuffers.InvalidProtocolBufferException::TruncatedMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InvalidProtocolBufferException_t33420AA524353DDC202DCBD0462457CC2AA7B4F9 * InvalidProtocolBufferException_TruncatedMessage_m0F1518DA8E834E0AA913C21046D14AE4F332A23F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvalidProtocolBufferException_TruncatedMessage_m0F1518DA8E834E0AA913C21046D14AE4F332A23F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		InvalidProtocolBufferException_t33420AA524353DDC202DCBD0462457CC2AA7B4F9 * L_0 = (InvalidProtocolBufferException_t33420AA524353DDC202DCBD0462457CC2AA7B4F9 *)il2cpp_codegen_object_new(InvalidProtocolBufferException_t33420AA524353DDC202DCBD0462457CC2AA7B4F9_il2cpp_TypeInfo_var);
		InvalidProtocolBufferException__ctor_m82587930FDC7CF75A04B507E73E644DBF28BCF0E(L_0, _stringLiteralE980AEDBE164B9AE86ECD01744E589611BF38881, /*hidden argument*/NULL);
		return L_0;
	}
}
// Google.ProtocolBuffers.InvalidProtocolBufferException Google.ProtocolBuffers.InvalidProtocolBufferException::NegativeSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InvalidProtocolBufferException_t33420AA524353DDC202DCBD0462457CC2AA7B4F9 * InvalidProtocolBufferException_NegativeSize_mE83794AAC7C961105F3DE44D5128635DD49D87E5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvalidProtocolBufferException_NegativeSize_mE83794AAC7C961105F3DE44D5128635DD49D87E5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		InvalidProtocolBufferException_t33420AA524353DDC202DCBD0462457CC2AA7B4F9 * L_0 = (InvalidProtocolBufferException_t33420AA524353DDC202DCBD0462457CC2AA7B4F9 *)il2cpp_codegen_object_new(InvalidProtocolBufferException_t33420AA524353DDC202DCBD0462457CC2AA7B4F9_il2cpp_TypeInfo_var);
		InvalidProtocolBufferException__ctor_m82587930FDC7CF75A04B507E73E644DBF28BCF0E(L_0, _stringLiteral416A0755E111EE94DA7039C12357812212ACA6AC, /*hidden argument*/NULL);
		return L_0;
	}
}
// Google.ProtocolBuffers.InvalidProtocolBufferException Google.ProtocolBuffers.InvalidProtocolBufferException::MalformedVarint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InvalidProtocolBufferException_t33420AA524353DDC202DCBD0462457CC2AA7B4F9 * InvalidProtocolBufferException_MalformedVarint_m0756001DC26E773821E1279F93937EBE65D39634 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvalidProtocolBufferException_MalformedVarint_m0756001DC26E773821E1279F93937EBE65D39634_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		InvalidProtocolBufferException_t33420AA524353DDC202DCBD0462457CC2AA7B4F9 * L_0 = (InvalidProtocolBufferException_t33420AA524353DDC202DCBD0462457CC2AA7B4F9 *)il2cpp_codegen_object_new(InvalidProtocolBufferException_t33420AA524353DDC202DCBD0462457CC2AA7B4F9_il2cpp_TypeInfo_var);
		InvalidProtocolBufferException__ctor_m82587930FDC7CF75A04B507E73E644DBF28BCF0E(L_0, _stringLiteralACEEF87BB04C3609A4B94E7CB5142DFB071EE6F6, /*hidden argument*/NULL);
		return L_0;
	}
}
// Google.ProtocolBuffers.InvalidProtocolBufferException Google.ProtocolBuffers.InvalidProtocolBufferException::InvalidTag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InvalidProtocolBufferException_t33420AA524353DDC202DCBD0462457CC2AA7B4F9 * InvalidProtocolBufferException_InvalidTag_m9DBE12CAA1E271794334B86D0BA59CBD5648B1E5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvalidProtocolBufferException_InvalidTag_m9DBE12CAA1E271794334B86D0BA59CBD5648B1E5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		InvalidProtocolBufferException_t33420AA524353DDC202DCBD0462457CC2AA7B4F9 * L_0 = (InvalidProtocolBufferException_t33420AA524353DDC202DCBD0462457CC2AA7B4F9 *)il2cpp_codegen_object_new(InvalidProtocolBufferException_t33420AA524353DDC202DCBD0462457CC2AA7B4F9_il2cpp_TypeInfo_var);
		InvalidProtocolBufferException__ctor_m82587930FDC7CF75A04B507E73E644DBF28BCF0E(L_0, _stringLiteral9C6C0377962A8ADD66F28FBDAFB336E0746FC119, /*hidden argument*/NULL);
		return L_0;
	}
}
// Google.ProtocolBuffers.InvalidProtocolBufferException Google.ProtocolBuffers.InvalidProtocolBufferException::InvalidEndTag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InvalidProtocolBufferException_t33420AA524353DDC202DCBD0462457CC2AA7B4F9 * InvalidProtocolBufferException_InvalidEndTag_m44C403DCD5ABF407C892941533DEA994CA3A0988 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvalidProtocolBufferException_InvalidEndTag_m44C403DCD5ABF407C892941533DEA994CA3A0988_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		InvalidProtocolBufferException_t33420AA524353DDC202DCBD0462457CC2AA7B4F9 * L_0 = (InvalidProtocolBufferException_t33420AA524353DDC202DCBD0462457CC2AA7B4F9 *)il2cpp_codegen_object_new(InvalidProtocolBufferException_t33420AA524353DDC202DCBD0462457CC2AA7B4F9_il2cpp_TypeInfo_var);
		InvalidProtocolBufferException__ctor_m82587930FDC7CF75A04B507E73E644DBF28BCF0E(L_0, _stringLiteral852B569DC2E0A0A57F15209CABF0EABF5648B748, /*hidden argument*/NULL);
		return L_0;
	}
}
// Google.ProtocolBuffers.InvalidProtocolBufferException Google.ProtocolBuffers.InvalidProtocolBufferException::InvalidWireType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InvalidProtocolBufferException_t33420AA524353DDC202DCBD0462457CC2AA7B4F9 * InvalidProtocolBufferException_InvalidWireType_m51F656A8F5AE76B6CD8ED343F712CFF4255D2F3F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvalidProtocolBufferException_InvalidWireType_m51F656A8F5AE76B6CD8ED343F712CFF4255D2F3F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		InvalidProtocolBufferException_t33420AA524353DDC202DCBD0462457CC2AA7B4F9 * L_0 = (InvalidProtocolBufferException_t33420AA524353DDC202DCBD0462457CC2AA7B4F9 *)il2cpp_codegen_object_new(InvalidProtocolBufferException_t33420AA524353DDC202DCBD0462457CC2AA7B4F9_il2cpp_TypeInfo_var);
		InvalidProtocolBufferException__ctor_m82587930FDC7CF75A04B507E73E644DBF28BCF0E(L_0, _stringLiteral285F3B15EA8780938A07FE9D4F6E133AB89106E3, /*hidden argument*/NULL);
		return L_0;
	}
}
// Google.ProtocolBuffers.InvalidProtocolBufferException Google.ProtocolBuffers.InvalidProtocolBufferException::RecursionLimitExceeded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InvalidProtocolBufferException_t33420AA524353DDC202DCBD0462457CC2AA7B4F9 * InvalidProtocolBufferException_RecursionLimitExceeded_m4D9BE2951461ECA65434439A0E1E12C878B16735 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvalidProtocolBufferException_RecursionLimitExceeded_m4D9BE2951461ECA65434439A0E1E12C878B16735_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		InvalidProtocolBufferException_t33420AA524353DDC202DCBD0462457CC2AA7B4F9 * L_0 = (InvalidProtocolBufferException_t33420AA524353DDC202DCBD0462457CC2AA7B4F9 *)il2cpp_codegen_object_new(InvalidProtocolBufferException_t33420AA524353DDC202DCBD0462457CC2AA7B4F9_il2cpp_TypeInfo_var);
		InvalidProtocolBufferException__ctor_m82587930FDC7CF75A04B507E73E644DBF28BCF0E(L_0, _stringLiteral39F9BE5FDE72EF40E0F01789CDC1C8AC80EC71E1, /*hidden argument*/NULL);
		return L_0;
	}
}
// Google.ProtocolBuffers.InvalidProtocolBufferException Google.ProtocolBuffers.InvalidProtocolBufferException::SizeLimitExceeded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InvalidProtocolBufferException_t33420AA524353DDC202DCBD0462457CC2AA7B4F9 * InvalidProtocolBufferException_SizeLimitExceeded_m3BEC675C6D09C08DED8EF7C8BA2FC3A015895B47 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvalidProtocolBufferException_SizeLimitExceeded_m3BEC675C6D09C08DED8EF7C8BA2FC3A015895B47_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		InvalidProtocolBufferException_t33420AA524353DDC202DCBD0462457CC2AA7B4F9 * L_0 = (InvalidProtocolBufferException_t33420AA524353DDC202DCBD0462457CC2AA7B4F9 *)il2cpp_codegen_object_new(InvalidProtocolBufferException_t33420AA524353DDC202DCBD0462457CC2AA7B4F9_il2cpp_TypeInfo_var);
		InvalidProtocolBufferException__ctor_m82587930FDC7CF75A04B507E73E644DBF28BCF0E(L_0, _stringLiteral68445AC719CEB240628DEFE2122D783E15A6272C, /*hidden argument*/NULL);
		return L_0;
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
// System.Void Google.ProtocolBuffers.ThrowHelper::ThrowIfNull(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIfNull_m2E4DC9108B27449ACAAF01C5218B752EAD31AE59 (RuntimeObject * ___value0, String_t* ___name1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ThrowHelper_ThrowIfNull_m2E4DC9108B27449ACAAF01C5218B752EAD31AE59_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		String_t* L_1 = ___name1;
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_2 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_2, L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ThrowHelper_ThrowIfNull_m2E4DC9108B27449ACAAF01C5218B752EAD31AE59_RuntimeMethod_var);
	}

IL_000d:
	{
		return;
	}
}
// System.Void Google.ProtocolBuffers.ThrowHelper::ThrowIfNull(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIfNull_mB8435B4F2F4DB53E02BD873006D61C1E9D826D0A (RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ThrowHelper_ThrowIfNull_mB8435B4F2F4DB53E02BD873006D61C1E9D826D0A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m682F47F1DE29EBE74F44F6478D3C17D176C63510(L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ThrowHelper_ThrowIfNull_mB8435B4F2F4DB53E02BD873006D61C1E9D826D0A_RuntimeMethod_var);
	}

IL_000c:
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
// System.Void Google.ProtocolBuffers.UninitializedMessageException::.ctor(Google.ProtocolBuffers.IMessageLite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UninitializedMessageException__ctor_m90F992B8FE15D9561ED07370C274A52EC43736BB (UninitializedMessageException_t1339F5C8F06420A91D3E15FC76A28F1A077AE516 * __this, RuntimeObject* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UninitializedMessageException__ctor_m90F992B8FE15D9561ED07370C274A52EC43736BB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___message0;
		NullCheck(L_0);
		Type_t * L_1 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60(L_0, /*hidden argument*/NULL);
		String_t* L_2 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteralEC85C56D556BB643A11CDCB7720612BE24EF4584, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(__this, L_2, /*hidden argument*/NULL);
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_3 = (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *)il2cpp_codegen_object_new(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_il2cpp_TypeInfo_var);
		List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06(L_3, /*hidden argument*/List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06_RuntimeMethod_var);
		__this->set_missingFields_17(L_3);
		return;
	}
}
// Google.ProtocolBuffers.InvalidProtocolBufferException Google.ProtocolBuffers.UninitializedMessageException::AsInvalidProtocolBufferException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InvalidProtocolBufferException_t33420AA524353DDC202DCBD0462457CC2AA7B4F9 * UninitializedMessageException_AsInvalidProtocolBufferException_m9731AF29AD15EF96286EC9A80AC4B2DF39C534A7 (UninitializedMessageException_t1339F5C8F06420A91D3E15FC76A28F1A077AE516 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UninitializedMessageException_AsInvalidProtocolBufferException_m9731AF29AD15EF96286EC9A80AC4B2DF39C534A7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, __this);
		InvalidProtocolBufferException_t33420AA524353DDC202DCBD0462457CC2AA7B4F9 * L_1 = (InvalidProtocolBufferException_t33420AA524353DDC202DCBD0462457CC2AA7B4F9 *)il2cpp_codegen_object_new(InvalidProtocolBufferException_t33420AA524353DDC202DCBD0462457CC2AA7B4F9_il2cpp_TypeInfo_var);
		InvalidProtocolBufferException__ctor_m82587930FDC7CF75A04B507E73E644DBF28BCF0E(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
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
// Google.ProtocolBuffers.WireFormat_WireType Google.ProtocolBuffers.WireFormat::GetTagWireType(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t WireFormat_GetTagWireType_mC2E691E0C75357305D00F3BB6AB2783764E86B1A (uint32_t ___tag0, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = ___tag0;
		return (uint32_t)(((int32_t)((int32_t)L_0&(int32_t)7)));
	}
}
// System.Boolean Google.ProtocolBuffers.WireFormat::IsEndGroupTag(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WireFormat_IsEndGroupTag_mC38F0DEA5E885A3523C4B63DA3CC0DBB83F00B35 (uint32_t ___tag0, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = ___tag0;
		return (bool)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)7))) == ((int32_t)4))? 1 : 0);
	}
}
// System.Int32 Google.ProtocolBuffers.WireFormat::GetTagFieldNumber(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WireFormat_GetTagFieldNumber_m8F294B6FC91FDE36C55F136E66FB73543C537018 (uint32_t ___tag0, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = ___tag0;
		return ((int32_t)((int32_t)L_0>>(int32_t)3));
	}
}
// System.UInt32 Google.ProtocolBuffers.WireFormat::MakeTag(System.Int32,Google.ProtocolBuffers.WireFormat_WireType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t WireFormat_MakeTag_m9BF62F1578FA7B2877A8D1458026E19AAFE3964F (int32_t ___fieldNumber0, uint32_t ___wireType1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___fieldNumber0;
		uint32_t L_1 = ___wireType1;
		return ((int32_t)((int32_t)((int32_t)((int32_t)L_0<<(int32_t)3))|(int32_t)L_1));
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
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return L_0;
	}
}
