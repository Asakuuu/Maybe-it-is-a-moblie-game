﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3 p3)
	{
		R ret;
		void* params[3] = { &p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2, T3, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4)
	{
		R ret;
		void* params[4] = { p1, &p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Collections.Generic.List`1<System.Collections.Hashtable>
struct List_1_t2A52E5C00B98CBC8D02BF94A380F75023D0D130B;
// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer>
struct UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E;
// UnityEngine.Behaviour[]
struct BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Rect[]
struct RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.Color[,]
struct ColorU5BU2CU5D_t3D6E7A083540AE9726FD6FD9693C85DFCDD8C89E;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// Fungus.Block
struct Block_t70E76A46EB06A0E6160F0AA45AA5BFB29FCEB65C;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Fungus.Examples.FPDemoPriorityRouter
struct FPDemoPriorityRouter_tF1545EC7B335005449809DB5BA24CE3E07B2FB06;
// Fungus.Examples.ForceCursorVisible
struct ForceCursorVisible_t8D6C7F47EE42DF641EABA5C5775353C9C44EB9DC;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// Fungus.Examples.LookingAtDoor
struct LookingAtDoor_t1C7EEC3EBEB9A4359DA0826B41BD86995ACBDF13;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Fungus.Examples.SimpleForceMovement
struct SimpleForceMovement_t446360AB3D40C1C52AC438942B3428327DABE47A;
// Fungus.Examples.SimpleMouseLook
struct SimpleMouseLook_t702EC407D24171F599C12B5366153E990021DF27;
// Fungus.Examples.SpriteColorChangeFromFungusMouseEvent
struct SpriteColorChangeFromFungusMouseEvent_t03CDE90637CD7519BF7004CEA25EFEA1EB82D2FD;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B;
// System.String
struct String_t;
// Fungus.Task
struct Task_t9406BF107B23EA5424DD76A6AD21F9F06813B30C;
// Fungus.TaskManager
struct TaskManager_t367024735EBEA906C190ABBACDAE097026A165FE;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// Fungus.Variable
struct Variable_t37CF0836CAB40CEF5FFE73CB0E0373A906933B63;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// Fungus.iTween
struct iTween_tF20BC5A2791EDB57F35E0DD8EA21F698A7096666;
// Fungus.FungusPrioritySignals/FungusPriorityEndHandler
struct FungusPriorityEndHandler_tD4464C9BB504FB669F4EB8F64962D2DBC16209CC;
// Fungus.FungusPrioritySignals/FungusPriorityStartHandler
struct FungusPriorityStartHandler_tAB020545CE74AD260CC69EF99E11C1FA871741ED;
// Fungus.Task/FinishedHandler
struct FinishedHandler_t58AA6CB698B0DB5487EA8D4F74820B605E994045;
// Fungus.TaskManager/TaskState
struct TaskState_t9C7D0CA031D3949FC3A512CD8A07975D5B736B0E;
// Fungus.iTween/<Start>d__237
struct U3CStartU3Ed__237_t30796C282C7F009FE6C7D904CFA28C6578C43D6A;
// Fungus.iTween/<TweenDelay>d__150
struct U3CTweenDelayU3Ed__150_tF09407B4D44C53DC341EEAE293ECEC2ACA8231D7;
// Fungus.iTween/<TweenRestart>d__152
struct U3CTweenRestartU3Ed__152_t1A38EE8F64C5D88F2899F8C370EFB6A5376EEBDE;
// Fungus.iTween/ApplyTween
struct ApplyTween_t0BA590794675975A37A9ECDFFE9EE85132655D3B;
// Fungus.iTween/CRSpline
struct CRSpline_t7781769718999B4B6DA8C0673FC639CA3B56027A;
// Fungus.iTween/EasingFunction
struct EasingFunction_t2F37547D507A0DCE1986E8631F8FEEAF34F16DCF;
// Fungus.TaskManager/TaskState/<CallWrapper>d__17
struct U3CCallWrapperU3Ed__17_tF6D1DB6F028D900D6318E29141EBD455FF0CB03F;
// Fungus.TaskManager/TaskState/FinishedHandler
struct FinishedHandler_tCD804764E46A1E8F97AAEB2CE2976D96A23CCE37;

IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Defaults_tBD6A2FEE38363860CE5591952F8D82EAB5C02EAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FinishedHandler_t58AA6CB698B0DB5487EA8D4F74820B605E994045_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FinishedHandler_tCD804764E46A1E8F97AAEB2CE2976D96A23CCE37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FungusPriorityEndHandler_tD4464C9BB504FB669F4EB8F64962D2DBC16209CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FungusPriorityStartHandler_tAB020545CE74AD260CC69EF99E11C1FA871741ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskManager_t367024735EBEA906C190ABBACDAE097026A165FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskState_t9C7D0CA031D3949FC3A512CD8A07975D5B736B0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCallWrapperU3Ed__17_tF6D1DB6F028D900D6318E29141EBD455FF0CB03F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7;
IL2CPP_EXTERN_C String_t* _stringLiteralB0658EBD7117F5F9DCFBFF0FBF0210D62373F387;
IL2CPP_EXTERN_C String_t* _stringLiteralC890A5EA2A6FB40BFE7B68447EF8CC371207C108;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FPDemoPriorityRouter_FungusPrioritySignals_OnFungusPriorityEnd_m0DB6E19C64729201D26136528DE7E25D40119792_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FPDemoPriorityRouter_FungusPrioritySignals_OnFungusPriorityStart_m88E657222178E5A39FCC6F14849BED5AB39C01A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisTaskManager_t367024735EBEA906C190ABBACDAE097026A165FE_mC910C35164B345E0AE9E223E13E9B3F3D86F6219_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_TaskFinished_mCE74D199E5387A5D2943125C37ADFA3E4A3CF00C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCallWrapperU3Ed__17_System_Collections_IEnumerator_Reset_m195522D3EF367BFB5D1CEC2255A129153F664895_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartU3Ed__237_System_Collections_IEnumerator_Reset_m63398636D7FD2DDB06190D7378C253EF37C2861A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTweenDelayU3Ed__150_System_Collections_IEnumerator_Reset_mC71CDAB6A577D43A6A81C8513FD3864315804923_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTweenRestartU3Ed__152_System_Collections_IEnumerator_Reset_mF56876C2989EAD290C19A2BE8C585C992489DCE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VariableReference_Set_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC32FA89D7DFCCBD4B43B29D25917345CB1F285D5_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Il2CppArrayBounds;

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// Fungus.Task
struct Task_t9406BF107B23EA5424DD76A6AD21F9F06813B30C  : public RuntimeObject
{
	// Fungus.Task/FinishedHandler Fungus.Task::Finished
	FinishedHandler_t58AA6CB698B0DB5487EA8D4F74820B605E994045* ___Finished_0;
	// Fungus.TaskManager/TaskState Fungus.Task::task
	TaskState_t9C7D0CA031D3949FC3A512CD8A07975D5B736B0E* ___task_1;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// Fungus.TaskManager/TaskState
struct TaskState_t9C7D0CA031D3949FC3A512CD8A07975D5B736B0E  : public RuntimeObject
{
	// Fungus.TaskManager/TaskState/FinishedHandler Fungus.TaskManager/TaskState::Finished
	FinishedHandler_tCD804764E46A1E8F97AAEB2CE2976D96A23CCE37* ___Finished_0;
	// System.Collections.IEnumerator Fungus.TaskManager/TaskState::coroutine
	RuntimeObject* ___coroutine_1;
	// System.Boolean Fungus.TaskManager/TaskState::running
	bool ___running_2;
	// System.Boolean Fungus.TaskManager/TaskState::paused
	bool ___paused_3;
	// System.Boolean Fungus.TaskManager/TaskState::stopped
	bool ___stopped_4;
};

// Fungus.iTween/<Start>d__237
struct U3CStartU3Ed__237_t30796C282C7F009FE6C7D904CFA28C6578C43D6A  : public RuntimeObject
{
	// System.Int32 Fungus.iTween/<Start>d__237::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Fungus.iTween/<Start>d__237::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Fungus.iTween Fungus.iTween/<Start>d__237::<>4__this
	iTween_tF20BC5A2791EDB57F35E0DD8EA21F698A7096666* ___U3CU3E4__this_2;
};

// Fungus.iTween/<TweenDelay>d__150
struct U3CTweenDelayU3Ed__150_tF09407B4D44C53DC341EEAE293ECEC2ACA8231D7  : public RuntimeObject
{
	// System.Int32 Fungus.iTween/<TweenDelay>d__150::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Fungus.iTween/<TweenDelay>d__150::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Fungus.iTween Fungus.iTween/<TweenDelay>d__150::<>4__this
	iTween_tF20BC5A2791EDB57F35E0DD8EA21F698A7096666* ___U3CU3E4__this_2;
};

// Fungus.iTween/<TweenRestart>d__152
struct U3CTweenRestartU3Ed__152_t1A38EE8F64C5D88F2899F8C370EFB6A5376EEBDE  : public RuntimeObject
{
	// System.Int32 Fungus.iTween/<TweenRestart>d__152::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Fungus.iTween/<TweenRestart>d__152::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Fungus.iTween Fungus.iTween/<TweenRestart>d__152::<>4__this
	iTween_tF20BC5A2791EDB57F35E0DD8EA21F698A7096666* ___U3CU3E4__this_2;
};

// Fungus.iTween/CRSpline
struct CRSpline_t7781769718999B4B6DA8C0673FC639CA3B56027A  : public RuntimeObject
{
	// UnityEngine.Vector3[] Fungus.iTween/CRSpline::pts
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___pts_0;
};

// Fungus.TaskManager/TaskState/<CallWrapper>d__17
struct U3CCallWrapperU3Ed__17_tF6D1DB6F028D900D6318E29141EBD455FF0CB03F  : public RuntimeObject
{
	// System.Int32 Fungus.TaskManager/TaskState/<CallWrapper>d__17::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Fungus.TaskManager/TaskState/<CallWrapper>d__17::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Fungus.TaskManager/TaskState Fungus.TaskManager/TaskState/<CallWrapper>d__17::<>4__this
	TaskState_t9C7D0CA031D3949FC3A512CD8A07975D5B736B0E* ___U3CU3E4__this_2;
	// System.Collections.IEnumerator Fungus.TaskManager/TaskState/<CallWrapper>d__17::<e>5__2
	RuntimeObject* ___U3CeU3E5__2_3;
};

// Fungus.BlockReference
struct BlockReference_tAE6E703708E9DB285FAF4F4FE0B117ED6494A2E9 
{
	// Fungus.Block Fungus.BlockReference::block
	Block_t70E76A46EB06A0E6160F0AA45AA5BFB29FCEB65C* ___block_0;
};
// Native definition for P/Invoke marshalling of Fungus.BlockReference
struct BlockReference_tAE6E703708E9DB285FAF4F4FE0B117ED6494A2E9_marshaled_pinvoke
{
	Block_t70E76A46EB06A0E6160F0AA45AA5BFB29FCEB65C* ___block_0;
};
// Native definition for COM marshalling of Fungus.BlockReference
struct BlockReference_tAE6E703708E9DB285FAF4F4FE0B117ED6494A2E9_marshaled_com
{
	Block_t70E76A46EB06A0E6160F0AA45AA5BFB29FCEB65C* ___block_0;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// Fungus.VariableReference
struct VariableReference_tAAFA74907030C6BDFD7750A0EEA16F6169FA6296 
{
	// Fungus.Variable Fungus.VariableReference::variable
	Variable_t37CF0836CAB40CEF5FFE73CB0E0373A906933B63* ___variable_0;
};
// Native definition for P/Invoke marshalling of Fungus.VariableReference
struct VariableReference_tAAFA74907030C6BDFD7750A0EEA16F6169FA6296_marshaled_pinvoke
{
	Variable_t37CF0836CAB40CEF5FFE73CB0E0373A906933B63* ___variable_0;
};
// Native definition for COM marshalling of Fungus.VariableReference
struct VariableReference_tAAFA74907030C6BDFD7750A0EEA16F6169FA6296_marshaled_com
{
	Variable_t37CF0836CAB40CEF5FFE73CB0E0373A906933B63* ___variable_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D12_t1BDD2193C3F925556BCD5FF35C0AC52DDB0CAB8F 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_t1BDD2193C3F925556BCD5FF35C0AC52DDB0CAB8F__padding[12];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D128_tF4DC60A802E7EAF26084A16B33B2CDCC817796AB 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D128_tF4DC60A802E7EAF26084A16B33B2CDCC817796AB__padding[128];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D16_tFB2D94E174C3DFBC336BBEE6AD92E07462831A23 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_tFB2D94E174C3DFBC336BBEE6AD92E07462831A23__padding[16];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D20_tA394C0A7DC4F4F05D2190B09E23BDE8536718D72 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D20_tA394C0A7DC4F4F05D2190B09E23BDE8536718D72__padding[20];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D24_t3464DA68B6CCAB9A0A43F94B3DB9AA7E7FDDB19A 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D24_t3464DA68B6CCAB9A0A43F94B3DB9AA7E7FDDB19A__padding[24];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=6
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D6_t38FD8BCE7DBF33FCFABA6823EC6C9368D958290D 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D6_t38FD8BCE7DBF33FCFABA6823EC6C9368D958290D__padding[6];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::05EF821DCEA36DF53B6D8C2C96ECEBF0066171F03CBC1C6E7C1A6F76D2991CFD
	__StaticArrayInitTypeSizeU3D20_tA394C0A7DC4F4F05D2190B09E23BDE8536718D72 ___05EF821DCEA36DF53B6D8C2C96ECEBF0066171F03CBC1C6E7C1A6F76D2991CFD_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::13BA99FB374DE24EB2656ACE253C54E2DA7EBAEDA4DD3DAB04852553EAF91EF6
	__StaticArrayInitTypeSizeU3D12_t1BDD2193C3F925556BCD5FF35C0AC52DDB0CAB8F ___13BA99FB374DE24EB2656ACE253C54E2DA7EBAEDA4DD3DAB04852553EAF91EF6_1;
	// System.Int64 <PrivateImplementationDetails>::67415B734689D5A34AC1E3CE466EA6FA2A8DAF2EF0F055B1F256639E84914265
	int64_t ___67415B734689D5A34AC1E3CE466EA6FA2A8DAF2EF0F055B1F256639E84914265_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::76B351CF70EE5EC7F1B83F392A5ECF88567129B80AC8399061D9BA3F1DB3DDD1
	__StaticArrayInitTypeSizeU3D20_tA394C0A7DC4F4F05D2190B09E23BDE8536718D72 ___76B351CF70EE5EC7F1B83F392A5ECF88567129B80AC8399061D9BA3F1DB3DDD1_3;
	// System.Int64 <PrivateImplementationDetails>::8F1A52EA427069AA8B6FC1D0A7BC426B2160A963E2DBFA59CE3E254462981A0B
	int64_t ___8F1A52EA427069AA8B6FC1D0A7BC426B2160A963E2DBFA59CE3E254462981A0B_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128 <PrivateImplementationDetails>::9C6D3221B6A2F3573A0F50BB8934E208DD38404B04EE793DD29202D37AD041A9
	__StaticArrayInitTypeSizeU3D128_tF4DC60A802E7EAF26084A16B33B2CDCC817796AB ___9C6D3221B6A2F3573A0F50BB8934E208DD38404B04EE793DD29202D37AD041A9_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::CD9A54ED1F18BF97DB08914E280EA7349E11CA2C4885A4D8052552CEBA84208D
	__StaticArrayInitTypeSizeU3D24_t3464DA68B6CCAB9A0A43F94B3DB9AA7E7FDDB19A ___CD9A54ED1F18BF97DB08914E280EA7349E11CA2C4885A4D8052552CEBA84208D_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=6 <PrivateImplementationDetails>::E4ADC6F67998BC92BA402D8A1450BAEDFCAE3F99F870FE71B1DDCFA4C625D41C
	__StaticArrayInitTypeSizeU3D6_t38FD8BCE7DBF33FCFABA6823EC6C9368D958290D ___E4ADC6F67998BC92BA402D8A1450BAEDFCAE3F99F870FE71B1DDCFA4C625D41C_7;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::E8845519DB154B41E620A98F949B9EDCEFB1F9060DC8290A9F7D2C3200ABD0CB
	__StaticArrayInitTypeSizeU3D16_tFB2D94E174C3DFBC336BBEE6AD92E07462831A23 ___E8845519DB154B41E620A98F949B9EDCEFB1F9060DC8290A9F7D2C3200ABD0CB_8;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// Fungus.iTween/Defaults
struct Defaults_tBD6A2FEE38363860CE5591952F8D82EAB5C02EAA  : public RuntimeObject
{
};

struct Defaults_tBD6A2FEE38363860CE5591952F8D82EAB5C02EAA_StaticFields
{
	// System.Single Fungus.iTween/Defaults::time
	float ___time_0;
	// System.Single Fungus.iTween/Defaults::delay
	float ___delay_1;
	// Fungus.iTween/NamedValueColor Fungus.iTween/Defaults::namedColorValue
	int32_t ___namedColorValue_2;
	// Fungus.iTween/LoopType Fungus.iTween/Defaults::loopType
	int32_t ___loopType_3;
	// Fungus.iTween/EaseType Fungus.iTween/Defaults::easeType
	int32_t ___easeType_4;
	// System.Single Fungus.iTween/Defaults::lookSpeed
	float ___lookSpeed_5;
	// System.Boolean Fungus.iTween/Defaults::isLocal
	bool ___isLocal_6;
	// UnityEngine.Space Fungus.iTween/Defaults::space
	int32_t ___space_7;
	// System.Boolean Fungus.iTween/Defaults::orientToPath
	bool ___orientToPath_8;
	// UnityEngine.Color Fungus.iTween/Defaults::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_9;
	// System.Single Fungus.iTween/Defaults::updateTimePercentage
	float ___updateTimePercentage_10;
	// System.Single Fungus.iTween/Defaults::updateTime
	float ___updateTime_11;
	// System.Int32 Fungus.iTween/Defaults::cameraFadeDepth
	int32_t ___cameraFadeDepth_12;
	// System.Single Fungus.iTween/Defaults::lookAhead
	float ___lookAhead_13;
	// System.Boolean Fungus.iTween/Defaults::useRealTime
	bool ___useRealTime_14;
	// UnityEngine.Vector3 Fungus.iTween/Defaults::up
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___up_15;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Fungus.FungusPrioritySignals/FungusPriorityEndHandler
struct FungusPriorityEndHandler_tD4464C9BB504FB669F4EB8F64962D2DBC16209CC  : public MulticastDelegate_t
{
};

// Fungus.FungusPrioritySignals/FungusPriorityStartHandler
struct FungusPriorityStartHandler_tAB020545CE74AD260CC69EF99E11C1FA871741ED  : public MulticastDelegate_t
{
};

// Fungus.Task/FinishedHandler
struct FinishedHandler_t58AA6CB698B0DB5487EA8D4F74820B605E994045  : public MulticastDelegate_t
{
};

// Fungus.iTween/ApplyTween
struct ApplyTween_t0BA590794675975A37A9ECDFFE9EE85132655D3B  : public MulticastDelegate_t
{
};

// Fungus.iTween/EasingFunction
struct EasingFunction_t2F37547D507A0DCE1986E8631F8FEEAF34F16DCF  : public MulticastDelegate_t
{
};

// Fungus.TaskManager/TaskState/FinishedHandler
struct FinishedHandler_tCD804764E46A1E8F97AAEB2CE2976D96A23CCE37  : public MulticastDelegate_t
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
	// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer> UnityEngine.SpriteRenderer::m_SpriteChangeEvent
	UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E* ___m_SpriteChangeEvent_4;
};

// Fungus.Examples.FPDemoPriorityRouter
struct FPDemoPriorityRouter_tF1545EC7B335005449809DB5BA24CE3E07B2FB06  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Behaviour[] Fungus.Examples.FPDemoPriorityRouter::componentEnabledOutsideFungusPriority
	BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA* ___componentEnabledOutsideFungusPriority_4;
	// UnityEngine.Behaviour[] Fungus.Examples.FPDemoPriorityRouter::componentEnabledInsideFungusPriority
	BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA* ___componentEnabledInsideFungusPriority_5;
};

// Fungus.Examples.ForceCursorVisible
struct ForceCursorVisible_t8D6C7F47EE42DF641EABA5C5775353C9C44EB9DC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Fungus.Examples.ForceCursorVisible::CursorLocked
	bool ___CursorLocked_4;
};

// Fungus.Examples.LookingAtDoor
struct LookingAtDoor_t1C7EEC3EBEB9A4359DA0826B41BD86995ACBDF13  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Collider Fungus.Examples.LookingAtDoor::doorCol
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___doorCol_4;
	// System.Single Fungus.Examples.LookingAtDoor::gazeTime
	float ___gazeTime_5;
	// System.Single Fungus.Examples.LookingAtDoor::gazeCounter
	float ___gazeCounter_6;
	// Fungus.BlockReference Fungus.Examples.LookingAtDoor::runBlockWhenGazed
	BlockReference_tAE6E703708E9DB285FAF4F4FE0B117ED6494A2E9 ___runBlockWhenGazed_7;
	// UnityEngine.Transform Fungus.Examples.LookingAtDoor::eye
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___eye_8;
	// Fungus.VariableReference Fungus.Examples.LookingAtDoor::fungusBoolHasGazed
	VariableReference_tAAFA74907030C6BDFD7750A0EEA16F6169FA6296 ___fungusBoolHasGazed_9;
};

// Fungus.Examples.SimpleForceMovement
struct SimpleForceMovement_t446360AB3D40C1C52AC438942B3428327DABE47A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Rigidbody Fungus.Examples.SimpleForceMovement::rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb_4;
	// UnityEngine.Transform Fungus.Examples.SimpleForceMovement::getForwardFrom
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___getForwardFrom_5;
	// System.Single Fungus.Examples.SimpleForceMovement::forceScale
	float ___forceScale_6;
};

// Fungus.Examples.SimpleMouseLook
struct SimpleMouseLook_t702EC407D24171F599C12B5366153E990021DF27  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Fungus.Examples.SimpleMouseLook::xsen
	float ___xsen_4;
	// System.Single Fungus.Examples.SimpleMouseLook::ysen
	float ___ysen_5;
	// System.Single Fungus.Examples.SimpleMouseLook::maxPitch
	float ___maxPitch_6;
	// UnityEngine.Transform Fungus.Examples.SimpleMouseLook::target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target_7;
	// System.Single Fungus.Examples.SimpleMouseLook::pitch
	float ___pitch_8;
};

// Fungus.Examples.SpriteColorChangeFromFungusMouseEvent
struct SpriteColorChangeFromFungusMouseEvent_t03CDE90637CD7519BF7004CEA25EFEA1EB82D2FD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.SpriteRenderer Fungus.Examples.SpriteColorChangeFromFungusMouseEvent::rend
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___rend_4;
};

// Fungus.TaskManager
struct TaskManager_t367024735EBEA906C190ABBACDAE097026A165FE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct TaskManager_t367024735EBEA906C190ABBACDAE097026A165FE_StaticFields
{
	// Fungus.TaskManager Fungus.TaskManager::singleton
	TaskManager_t367024735EBEA906C190ABBACDAE097026A165FE* ___singleton_4;
};

// Fungus.iTween
struct iTween_tF20BC5A2791EDB57F35E0DD8EA21F698A7096666  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String Fungus.iTween::id
	String_t* ___id_6;
	// System.String Fungus.iTween::type
	String_t* ___type_7;
	// System.String Fungus.iTween::method
	String_t* ___method_8;
	// Fungus.iTween/EaseType Fungus.iTween::easeType
	int32_t ___easeType_9;
	// System.Single Fungus.iTween::time
	float ___time_10;
	// System.Single Fungus.iTween::delay
	float ___delay_11;
	// Fungus.iTween/LoopType Fungus.iTween::loopType
	int32_t ___loopType_12;
	// System.Boolean Fungus.iTween::isRunning
	bool ___isRunning_13;
	// System.Boolean Fungus.iTween::isPaused
	bool ___isPaused_14;
	// System.String Fungus.iTween::_name
	String_t* ____name_15;
	// System.Single Fungus.iTween::runningTime
	float ___runningTime_16;
	// System.Single Fungus.iTween::percentage
	float ___percentage_17;
	// System.Single Fungus.iTween::delayStarted
	float ___delayStarted_18;
	// System.Boolean Fungus.iTween::kinematic
	bool ___kinematic_19;
	// System.Boolean Fungus.iTween::isLocal
	bool ___isLocal_20;
	// System.Boolean Fungus.iTween::loop
	bool ___loop_21;
	// System.Boolean Fungus.iTween::reverse
	bool ___reverse_22;
	// System.Boolean Fungus.iTween::wasPaused
	bool ___wasPaused_23;
	// System.Boolean Fungus.iTween::physics
	bool ___physics_24;
	// System.Collections.Hashtable Fungus.iTween::tweenArguments
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___tweenArguments_25;
	// UnityEngine.Space Fungus.iTween::space
	int32_t ___space_26;
	// Fungus.iTween/EasingFunction Fungus.iTween::ease
	EasingFunction_t2F37547D507A0DCE1986E8631F8FEEAF34F16DCF* ___ease_27;
	// Fungus.iTween/ApplyTween Fungus.iTween::apply
	ApplyTween_t0BA590794675975A37A9ECDFFE9EE85132655D3B* ___apply_28;
	// UnityEngine.AudioSource Fungus.iTween::audioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioSource_29;
	// UnityEngine.Vector3[] Fungus.iTween::vector3s
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___vector3s_30;
	// UnityEngine.Vector2[] Fungus.iTween::vector2s
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___vector2s_31;
	// UnityEngine.Color[,] Fungus.iTween::colors
	ColorU5BU2CU5D_t3D6E7A083540AE9726FD6FD9693C85DFCDD8C89E* ___colors_32;
	// System.Single[] Fungus.iTween::floats
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___floats_33;
	// UnityEngine.Rect[] Fungus.iTween::rects
	RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993* ___rects_34;
	// Fungus.iTween/CRSpline Fungus.iTween::path
	CRSpline_t7781769718999B4B6DA8C0673FC639CA3B56027A* ___path_35;
	// UnityEngine.Vector3 Fungus.iTween::preUpdate
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___preUpdate_36;
	// UnityEngine.Vector3 Fungus.iTween::postUpdate
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___postUpdate_37;
	// Fungus.iTween/NamedValueColor Fungus.iTween::namedcolorvalue
	int32_t ___namedcolorvalue_38;
	// System.Single Fungus.iTween::lastRealTime
	float ___lastRealTime_39;
	// System.Boolean Fungus.iTween::useRealTime
	bool ___useRealTime_40;
	// UnityEngine.Transform Fungus.iTween::thisTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___thisTransform_41;
};

struct iTween_tF20BC5A2791EDB57F35E0DD8EA21F698A7096666_StaticFields
{
	// System.Collections.Generic.List`1<System.Collections.Hashtable> Fungus.iTween::tweens
	List_1_t2A52E5C00B98CBC8D02BF94A380F75023D0D130B* ___tweens_4;
	// UnityEngine.GameObject Fungus.iTween::cameraFade
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___cameraFade_5;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Behaviour[]
struct BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA  : public RuntimeArray
{
	ALIGN_FIELD (8) Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* m_Items[1];

	inline Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void Fungus.VariableReference::Set<System.Boolean>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableReference_Set_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC32FA89D7DFCCBD4B43B29D25917345CB1F285D5_gshared (VariableReference_tAAFA74907030C6BDFD7750A0EEA16F6169FA6296* __this, bool ___val0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;

// System.Boolean Fungus.TaskManager/TaskState::get_Running()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TaskState_get_Running_m24E668075DB6EDF19B2111033B32AA1B7E752C6D_inline (TaskState_t9C7D0CA031D3949FC3A512CD8A07975D5B736B0E* __this, const RuntimeMethod* method) ;
// System.Boolean Fungus.TaskManager/TaskState::get_Paused()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TaskState_get_Paused_mAC316E5ED9EBD17440E0486EF9FA6E382DCA6685_inline (TaskState_t9C7D0CA031D3949FC3A512CD8A07975D5B736B0E* __this, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// Fungus.TaskManager/TaskState Fungus.TaskManager::CreateTask(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskState_t9C7D0CA031D3949FC3A512CD8A07975D5B736B0E* TaskManager_CreateTask_m5D5FF903E0407960250C7A5C8E688BDFFF0F7396 (RuntimeObject* ___coroutine0, const RuntimeMethod* method) ;
// System.Void Fungus.TaskManager/TaskState/FinishedHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinishedHandler__ctor_m7470C1DF08D7040F356506A0116FEA4001871694 (FinishedHandler_tCD804764E46A1E8F97AAEB2CE2976D96A23CCE37* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Fungus.TaskManager/TaskState::add_Finished(Fungus.TaskManager/TaskState/FinishedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskState_add_Finished_m214796F37D3350A6F39A30F9C3F6222CAE1DFB84 (TaskState_t9C7D0CA031D3949FC3A512CD8A07975D5B736B0E* __this, FinishedHandler_tCD804764E46A1E8F97AAEB2CE2976D96A23CCE37* ___value0, const RuntimeMethod* method) ;
// System.Void Fungus.Task::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_Start_mC685FED3719E7153E87FC442B12E6E6A2FD91C90 (Task_t9406BF107B23EA5424DD76A6AD21F9F06813B30C* __this, const RuntimeMethod* method) ;
// System.Void Fungus.TaskManager/TaskState::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskState_Start_mBC099B031162B27BE00365185E42B083A42BCD92 (TaskState_t9C7D0CA031D3949FC3A512CD8A07975D5B736B0E* __this, const RuntimeMethod* method) ;
// System.Void Fungus.TaskManager/TaskState::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskState_Stop_m1E166108D56E1DB158829BDA31EB8557DB78674C (TaskState_t9C7D0CA031D3949FC3A512CD8A07975D5B736B0E* __this, const RuntimeMethod* method) ;
// System.Void Fungus.TaskManager/TaskState::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskState_Pause_mECB980E337F45CF3014F80692841AB9773E56FFF (TaskState_t9C7D0CA031D3949FC3A512CD8A07975D5B736B0E* __this, const RuntimeMethod* method) ;
// System.Void Fungus.TaskManager/TaskState::Unpause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskState_Unpause_m054C39D5817652ABF36B566DDE4773F1D37CBB84 (TaskState_t9C7D0CA031D3949FC3A512CD8A07975D5B736B0E* __this, const RuntimeMethod* method) ;
// System.Void Fungus.Task/FinishedHandler::Invoke(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FinishedHandler_Invoke_m35697C6BE76B49B01707E04AF5064E1634812ED5_inline (FinishedHandler_t58AA6CB698B0DB5487EA8D4F74820B605E994045* __this, bool ___manual0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<Fungus.TaskManager>()
inline TaskManager_t367024735EBEA906C190ABBACDAE097026A165FE* GameObject_AddComponent_TisTaskManager_t367024735EBEA906C190ABBACDAE097026A165FE_mC910C35164B345E0AE9E223E13E9B3F3D86F6219 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TaskManager_t367024735EBEA906C190ABBACDAE097026A165FE* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void Fungus.TaskManager/TaskState::.ctor(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskState__ctor_m72549EDF6B32F9FEB64A27AF9494BB0231D44760 (TaskState_t9C7D0CA031D3949FC3A512CD8A07975D5B736B0E* __this, RuntimeObject* ___c0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Fungus.TaskManager/TaskState::CallWrapper()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TaskState_CallWrapper_m843874F9C2FE244EA237721AE2A3B76980DED652 (TaskState_t9C7D0CA031D3949FC3A512CD8A07975D5B736B0E* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void Fungus.TaskManager/TaskState/<CallWrapper>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCallWrapperU3Ed__17__ctor_m2E7421D7BBF2887FF69D1274493E9A0E48CD5455 (U3CCallWrapperU3Ed__17_tF6D1DB6F028D900D6318E29141EBD455FF0CB03F* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void Fungus.TaskManager/TaskState/FinishedHandler::Invoke(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FinishedHandler_Invoke_m7AF81046EE3C5A37385B2C3D99D6E79850288BF1_inline (FinishedHandler_tCD804764E46A1E8F97AAEB2CE2976D96A23CCE37* __this, bool ___manual0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900 (RuntimeArray* ___sourceArray0, RuntimeArray* ___destinationArray1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline (float ___f0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Min(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void Fungus.iTween::TweenStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iTween_TweenStart_mE43F4BE7F8A6BD14BC1792338EE0063966D51FAC (iTween_tF20BC5A2791EDB57F35E0DD8EA21F698A7096666* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Cursor::set_visible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_visible_m612FCB2E86C15F91CE2E6148D1B556667954A2B7 (bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Cursor::set_lockState(UnityEngine.CursorLockMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_lockState_mD81F6E5F3D86506FFB88567689A3A00A7AD242E9 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Fungus.FungusPrioritySignals/FungusPriorityStartHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FungusPriorityStartHandler__ctor_m3E8752B9CD8213B500A0B51C23B8B95D0BB1AF58 (FungusPriorityStartHandler_tAB020545CE74AD260CC69EF99E11C1FA871741ED* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Fungus.FungusPrioritySignals::add_OnFungusPriorityStart(Fungus.FungusPrioritySignals/FungusPriorityStartHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FungusPrioritySignals_add_OnFungusPriorityStart_mC7CD802C8A19544CEC32EACDC83099924D4DEB91 (FungusPriorityStartHandler_tAB020545CE74AD260CC69EF99E11C1FA871741ED* ___value0, const RuntimeMethod* method) ;
// System.Void Fungus.FungusPrioritySignals/FungusPriorityEndHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FungusPriorityEndHandler__ctor_m0F9AC837AE5858B395D9CBAF06A9018E9F031E7D (FungusPriorityEndHandler_tD4464C9BB504FB669F4EB8F64962D2DBC16209CC* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Fungus.FungusPrioritySignals::add_OnFungusPriorityEnd(Fungus.FungusPrioritySignals/FungusPriorityEndHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FungusPrioritySignals_add_OnFungusPriorityEnd_m53C89EC6E2E878CCDA205D0034C11CABDA5E2DFF (FungusPriorityEndHandler_tD4464C9BB504FB669F4EB8F64962D2DBC16209CC* ___value0, const RuntimeMethod* method) ;
// System.Void Fungus.FungusPrioritySignals::remove_OnFungusPriorityStart(Fungus.FungusPrioritySignals/FungusPriorityStartHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FungusPrioritySignals_remove_OnFungusPriorityStart_m9F0D534469D9D7C223328A1701655871584BB5B7 (FungusPriorityStartHandler_tAB020545CE74AD260CC69EF99E11C1FA871741ED* ___value0, const RuntimeMethod* method) ;
// System.Void Fungus.FungusPrioritySignals::remove_OnFungusPriorityEnd(Fungus.FungusPrioritySignals/FungusPriorityEndHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FungusPrioritySignals_remove_OnFungusPriorityEnd_mA3475C75BE0604C1DF6B2F58E7621BB85500B3AE (FungusPriorityEndHandler_tD4464C9BB504FB669F4EB8F64962D2DBC16209CC* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m1B27F500505FFB57D78548B9F5A540A2AD092903 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction1, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo2, const RuntimeMethod* method) ;
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Void Fungus.BlockReference::Execute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockReference_Execute_mD337D30B1BE2252FDE7792FF1EBF5B37EC532D9D (BlockReference_tAE6E703708E9DB285FAF4F4FE0B117ED6494A2E9* __this, const RuntimeMethod* method) ;
// System.Void Fungus.VariableReference::Set<System.Boolean>(T)
inline void VariableReference_Set_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC32FA89D7DFCCBD4B43B29D25917345CB1F285D5 (VariableReference_tAAFA74907030C6BDFD7750A0EEA16F6169FA6296* __this, bool ___val0, const RuntimeMethod* method)
{
	((  void (*) (VariableReference_tAAFA74907030C6BDFD7750A0EEA16F6169FA6296*, bool, const RuntimeMethod*))VariableReference_Set_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC32FA89D7DFCCBD4B43B29D25917345CB1F285D5_gshared)(__this, ___val0, method);
}
// System.Void UnityEngine.Vector3::Normalize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62 (String_t* ___axisName0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___force0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Single UnityEngine.Random::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B (const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::HSVToRGB(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_HSVToRGB_m1E66966AAB74D56DB4D339B65E60E2AF435C8105_inline (float ___H0, float ___S1, float ___V2, const RuntimeMethod* method) ;
// System.Void UnityEngine.SpriteRenderer::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_MakePositive(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::HSVToRGB(System.Single,System.Single,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_HSVToRGB_m8FA653F8C22366CB1AA90891822B889C59162AAF (float ___H0, float ___S1, float ___V2, bool ___hdr3, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Fungus.Task::get_Running()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_Running_mB21A7FA53A24DBF0AA1E70D326A8C88DA6204BF6 (Task_t9406BF107B23EA5424DD76A6AD21F9F06813B30C* __this, const RuntimeMethod* method) 
{
	{
		// return task.Running;
		TaskState_t9C7D0CA031D3949FC3A512CD8A07975D5B736B0E* L_0 = __this->___task_1;
		NullCheck(L_0);
		bool L_1;
		L_1 = TaskState_get_Running_m24E668075DB6EDF19B2111033B32AA1B7E752C6D_inline(L_0, NULL);
		return L_1;
	}
}
// System.Boolean Fungus.Task::get_Paused()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_Paused_m7CB66283C97B27A196EB32704F760BAA7B349819 (Task_t9406BF107B23EA5424DD76A6AD21F9F06813B30C* __this, const RuntimeMethod* method) 
{
	{
		// return task.Paused;
		TaskState_t9C7D0CA031D3949FC3A512CD8A07975D5B736B0E* L_0 = __this->___task_1;
		NullCheck(L_0);
		bool L_1;
		L_1 = TaskState_get_Paused_mAC316E5ED9EBD17440E0486EF9FA6E382DCA6685_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void Fungus.Task::add_Finished(Fungus.Task/FinishedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_add_Finished_m16C0D661CFE1C8E87FAF5A07177C26E45BAD7602 (Task_t9406BF107B23EA5424DD76A6AD21F9F06813B30C* __this, FinishedHandler_t58AA6CB698B0DB5487EA8D4F74820B605E994045* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FinishedHandler_t58AA6CB698B0DB5487EA8D4F74820B605E994045_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FinishedHandler_t58AA6CB698B0DB5487EA8D4F74820B605E994045* V_0 = NULL;
	FinishedHandler_t58AA6CB698B0DB5487EA8D4F74820B605E994045* V_1 = NULL;
	FinishedHandler_t58AA6CB698B0DB5487EA8D4F74820B605E994045* V_2 = NULL;
	{
		FinishedHandler_t58AA6CB698B0DB5487EA8D4F74820B605E994045* L_0 = __this->___Finished_0;
		V_0 = L_0;
	}

IL_0007:
	{
		FinishedHandler_t58AA6CB698B0DB5487EA8D4F74820B605E994045* L_1 = V_0;
		V_1 = L_1;
		FinishedHandler_t58AA6CB698B0DB5487EA8D4F74820B605E994045* L_2 = V_1;
		FinishedHandler_t58AA6CB698B0DB5487EA8D4F74820B605E994045* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((FinishedHandler_t58AA6CB698B0DB5487EA8D4F74820B605E994045*)CastclassSealed((RuntimeObject*)L_4, FinishedHandler_t58AA6CB698B0DB5487EA8D4F74820B605E994045_il2cpp_TypeInfo_var));
		FinishedHandler_t58AA6CB698B0DB5487EA8D4F74820B605E994045** L_5 = (&__this->___Finished_0);
		FinishedHandler_t58AA6CB698B0DB5487EA8D4F74820B605E994045* L_6 = V_2;
		FinishedHandler_t58AA6CB698B0DB5487EA8D4F74820B605E994045* L_7 = V_1;
		FinishedHandler_t58AA6CB698B0DB5487EA8D4F74820B605E994045* L_8;
		L_8 = InterlockedCompareExchangeImpl<FinishedHandler_t58AA6CB698B0DB5487EA8D4F74820B605E994045*>(L_5, L_6, L_7);
		V_0 = L_8;
		FinishedHandler_t58AA6CB698B0DB5487EA8D4F74820B605E994045* L_9 = V_0;
		FinishedHandler_t58AA6CB698B0DB5487EA8D4F74820B605E994045* L_10 = V_1;
		if ((!(((RuntimeObject*)(FinishedHandler_t58AA6CB698B0DB5487EA8D4F74820B605E994045*)L_9) == ((RuntimeObject*)(FinishedHandler_t58AA6CB698B0DB5487EA8D4F74820B605E994045*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Fungus.Task::remove_Finished(Fungus.Task/FinishedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_remove_Finished_m6E8CAF64215E891D0F9D67B8E2D0C792F227D566 (Task_t9406BF107B23EA5424DD76A6AD21F9F06813B30C* __this, FinishedHandler_t58AA6CB698B0DB5487EA8D4F74820B605E994045* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FinishedHandler_t58AA6CB698B0DB5487EA8D4F74820B605E994045_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FinishedHandler_t58AA6CB698B0DB5487EA8D4F74820B605E994045* V_0 = NULL;
	FinishedHandler_t58AA6CB698B0DB5487EA8D4F74820B605E994045* V_1 = NULL;
	FinishedHandler_t58AA6CB698B0DB5487EA8D4F74820B605E994045* V_2 = NULL;
	{
		FinishedHandler_t58AA6CB698B0DB5487EA8D4F74820B605E994045* L_0 = __this->___Finished_0;
		V_0 = L_0;
	}

IL_0007:
	{
		FinishedHandler_t58AA6CB698B0DB5487EA8D4F74820B605E994045* L_1 = V_0;
		V_1 = L_1;
		FinishedHandler_t58AA6CB698B0DB5487EA8D4F74820B605E994045* L_2 = V_1;
		FinishedHandler_t58AA6CB698B0DB5487EA8D4F74820B605E994045* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((FinishedHandler_t58AA6CB698B0DB5487EA8D4F74820B605E994045*)CastclassSealed((RuntimeObject*)L_4, FinishedHandler_t58AA6CB698B0DB5487EA8D4F74820B605E994045_il2cpp_TypeInfo_var));
		FinishedHandler_t58AA6CB698B0DB5487EA8D4F74820B605E994045** L_5 = (&__this->___Finished_0);
		FinishedHandler_t58AA6CB698B0DB5487EA8D4F74820B605E994045* L_6 = V_2;
		FinishedHandler_t58AA6CB698B0DB5487EA8D4F74820B605E994045* L_7 = V_1;
		FinishedHandler_t58AA6CB698B0DB5487EA8D4F74820B605E994045* L_8;
		L_8 = InterlockedCompareExchangeImpl<FinishedHandler_t58AA6CB698B0DB5487EA8D4F74820B605E994045*>(L_5, L_6, L_7);
		V_0 = L_8;
		FinishedHandler_t58AA6CB698B0DB5487EA8D4F74820B605E994045* L_9 = V_0;
		FinishedHandler_t58AA6CB698B0DB5487EA8D4F74820B605E994045* L_10 = V_1;
		if ((!(((RuntimeObject*)(FinishedHandler_t58AA6CB698B0DB5487EA8D4F74820B605E994045*)L_9) == ((RuntimeObject*)(FinishedHandler_t58AA6CB698B0DB5487EA8D4F74820B605E994045*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Fungus.Task::.ctor(System.Collections.IEnumerator,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task__ctor_mFE08F6B48968BAC5AB93189B705165169805D611 (Task_t9406BF107B23EA5424DD76A6AD21F9F06813B30C* __this, RuntimeObject* ___c0, bool ___autoStart1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FinishedHandler_tCD804764E46A1E8F97AAEB2CE2976D96A23CCE37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_TaskFinished_mCE74D199E5387A5D2943125C37ADFA3E4A3CF00C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Task(IEnumerator c, bool autoStart = true)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// task = TaskManager.CreateTask(c);
		RuntimeObject* L_0 = ___c0;
		TaskState_t9C7D0CA031D3949FC3A512CD8A07975D5B736B0E* L_1;
		L_1 = TaskManager_CreateTask_m5D5FF903E0407960250C7A5C8E688BDFFF0F7396(L_0, NULL);
		__this->___task_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___task_1), (void*)L_1);
		// task.Finished += TaskFinished;
		TaskState_t9C7D0CA031D3949FC3A512CD8A07975D5B736B0E* L_2 = __this->___task_1;
		FinishedHandler_tCD804764E46A1E8F97AAEB2CE2976D96A23CCE37* L_3 = (FinishedHandler_tCD804764E46A1E8F97AAEB2CE2976D96A23CCE37*)il2cpp_codegen_object_new(FinishedHandler_tCD804764E46A1E8F97AAEB2CE2976D96A23CCE37_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		FinishedHandler__ctor_m7470C1DF08D7040F356506A0116FEA4001871694(L_3, __this, (intptr_t)((void*)Task_TaskFinished_mCE74D199E5387A5D2943125C37ADFA3E4A3CF00C_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		TaskState_add_Finished_m214796F37D3350A6F39A30F9C3F6222CAE1DFB84(L_2, L_3, NULL);
		// if(autoStart)
		bool L_4 = ___autoStart1;
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		// Start();
		Task_Start_mC685FED3719E7153E87FC442B12E6E6A2FD91C90(__this, NULL);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void Fungus.Task::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_Start_mC685FED3719E7153E87FC442B12E6E6A2FD91C90 (Task_t9406BF107B23EA5424DD76A6AD21F9F06813B30C* __this, const RuntimeMethod* method) 
{
	{
		// task.Start();
		TaskState_t9C7D0CA031D3949FC3A512CD8A07975D5B736B0E* L_0 = __this->___task_1;
		NullCheck(L_0);
		TaskState_Start_mBC099B031162B27BE00365185E42B083A42BCD92(L_0, NULL);
		// }
		return;
	}
}
// System.Void Fungus.Task::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_Stop_mF2EAF9DD3598A52FBB4DF5BF32BDE66D5EF53182 (Task_t9406BF107B23EA5424DD76A6AD21F9F06813B30C* __this, const RuntimeMethod* method) 
{
	{
		// task.Stop();
		TaskState_t9C7D0CA031D3949FC3A512CD8A07975D5B736B0E* L_0 = __this->___task_1;
		NullCheck(L_0);
		TaskState_Stop_m1E166108D56E1DB158829BDA31EB8557DB78674C(L_0, NULL);
		// }
		return;
	}
}
// System.Void Fungus.Task::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_Pause_mC79A18B48805B1DF71A82D779ED59DD3B021E7F7 (Task_t9406BF107B23EA5424DD76A6AD21F9F06813B30C* __this, const RuntimeMethod* method) 
{
	{
		// task.Pause();
		TaskState_t9C7D0CA031D3949FC3A512CD8A07975D5B736B0E* L_0 = __this->___task_1;
		NullCheck(L_0);
		TaskState_Pause_mECB980E337F45CF3014F80692841AB9773E56FFF(L_0, NULL);
		// }
		return;
	}
}
// System.Void Fungus.Task::Unpause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_Unpause_mC6D24DFE4F332E09B413175F855758AF676FD175 (Task_t9406BF107B23EA5424DD76A6AD21F9F06813B30C* __this, const RuntimeMethod* method) 
{
	{
		// task.Unpause();
		TaskState_t9C7D0CA031D3949FC3A512CD8A07975D5B736B0E* L_0 = __this->___task_1;
		NullCheck(L_0);
		TaskState_Unpause_m054C39D5817652ABF36B566DDE4773F1D37CBB84(L_0, NULL);
		// }
		return;
	}
}
// System.Void Fungus.Task::TaskFinished(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_TaskFinished_mCE74D199E5387A5D2943125C37ADFA3E4A3CF00C (Task_t9406BF107B23EA5424DD76A6AD21F9F06813B30C* __this, bool ___manual0, const RuntimeMethod* method) 
{
	FinishedHandler_t58AA6CB698B0DB5487EA8D4F74820B605E994045* V_0 = NULL;
	{
		// FinishedHandler handler = Finished;
		FinishedHandler_t58AA6CB698B0DB5487EA8D4F74820B605E994045* L_0 = __this->___Finished_0;
		V_0 = L_0;
		// if(handler != null)
		FinishedHandler_t58AA6CB698B0DB5487EA8D4F74820B605E994045* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		// handler(manual);
		FinishedHandler_t58AA6CB698B0DB5487EA8D4F74820B605E994045* L_2 = V_0;
		bool L_3 = ___manual0;
		NullCheck(L_2);
		FinishedHandler_Invoke_m35697C6BE76B49B01707E04AF5064E1634812ED5_inline(L_2, L_3, NULL);
	}

IL_0011:
	{
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
void FinishedHandler_Invoke_m35697C6BE76B49B01707E04AF5064E1634812ED5_Multicast(FinishedHandler_t58AA6CB698B0DB5487EA8D4F74820B605E994045* __this, bool ___manual0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		FinishedHandler_t58AA6CB698B0DB5487EA8D4F74820B605E994045* currentDelegate = reinterpret_cast<FinishedHandler_t58AA6CB698B0DB5487EA8D4F74820B605E994045*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___manual0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void FinishedHandler_Invoke_m35697C6BE76B49B01707E04AF5064E1634812ED5_OpenInst(FinishedHandler_t58AA6CB698B0DB5487EA8D4F74820B605E994045* __this, bool ___manual0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___manual0, method);
}
void FinishedHandler_Invoke_m35697C6BE76B49B01707E04AF5064E1634812ED5_OpenStatic(FinishedHandler_t58AA6CB698B0DB5487EA8D4F74820B605E994045* __this, bool ___manual0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___manual0, method);
}
void FinishedHandler_Invoke_m35697C6BE76B49B01707E04AF5064E1634812ED5_OpenStaticInvoker(FinishedHandler_t58AA6CB698B0DB5487EA8D4F74820B605E994045* __this, bool ___manual0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< bool >::Invoke(__this->___method_ptr_0, method, NULL, ___manual0);
}
void FinishedHandler_Invoke_m35697C6BE76B49B01707E04AF5064E1634812ED5_ClosedStaticInvoker(FinishedHandler_t58AA6CB698B0DB5487EA8D4F74820B605E994045* __this, bool ___manual0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, bool >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___manual0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_FinishedHandler_t58AA6CB698B0DB5487EA8D4F74820B605E994045 (FinishedHandler_t58AA6CB698B0DB5487EA8D4F74820B605E994045* __this, bool ___manual0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(static_cast<int32_t>(___manual0));

}
// System.Void Fungus.Task/FinishedHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinishedHandler__ctor_m3DCB50D6DACE8DAD912DABAD162089290E6A099F (FinishedHandler_t58AA6CB698B0DB5487EA8D4F74820B605E994045* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&FinishedHandler_Invoke_m35697C6BE76B49B01707E04AF5064E1634812ED5_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&FinishedHandler_Invoke_m35697C6BE76B49B01707E04AF5064E1634812ED5_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&FinishedHandler_Invoke_m35697C6BE76B49B01707E04AF5064E1634812ED5_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&FinishedHandler_Invoke_m35697C6BE76B49B01707E04AF5064E1634812ED5_Multicast;
}
// System.Void Fungus.Task/FinishedHandler::Invoke(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinishedHandler_Invoke_m35697C6BE76B49B01707E04AF5064E1634812ED5 (FinishedHandler_t58AA6CB698B0DB5487EA8D4F74820B605E994045* __this, bool ___manual0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___manual0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Fungus.Task/FinishedHandler::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FinishedHandler_BeginInvoke_m6D5A5928994F7CC133886FCD0F54D2B89B0B54FB (FinishedHandler_t58AA6CB698B0DB5487EA8D4F74820B605E994045* __this, bool ___manual0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &___manual0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Fungus.Task/FinishedHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinishedHandler_EndInvoke_m260CAEFE9A6996BB3E43B28D2A5B040952B3730D (FinishedHandler_t58AA6CB698B0DB5487EA8D4F74820B605E994045* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
// Fungus.TaskManager/TaskState Fungus.TaskManager::CreateTask(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskState_t9C7D0CA031D3949FC3A512CD8A07975D5B736B0E* TaskManager_CreateTask_m5D5FF903E0407960250C7A5C8E688BDFFF0F7396 (RuntimeObject* ___coroutine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisTaskManager_t367024735EBEA906C190ABBACDAE097026A165FE_mC910C35164B345E0AE9E223E13E9B3F3D86F6219_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskManager_t367024735EBEA906C190ABBACDAE097026A165FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskState_t9C7D0CA031D3949FC3A512CD8A07975D5B736B0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC890A5EA2A6FB40BFE7B68447EF8CC371207C108);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(singleton == null) {
		TaskManager_t367024735EBEA906C190ABBACDAE097026A165FE* L_0 = ((TaskManager_t367024735EBEA906C190ABBACDAE097026A165FE_StaticFields*)il2cpp_codegen_static_fields_for(TaskManager_t367024735EBEA906C190ABBACDAE097026A165FE_il2cpp_TypeInfo_var))->___singleton_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// GameObject go = new GameObject("TaskManager");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_2, _stringLiteralC890A5EA2A6FB40BFE7B68447EF8CC371207C108, NULL);
		// singleton = go.AddComponent<TaskManager>();
		NullCheck(L_2);
		TaskManager_t367024735EBEA906C190ABBACDAE097026A165FE* L_3;
		L_3 = GameObject_AddComponent_TisTaskManager_t367024735EBEA906C190ABBACDAE097026A165FE_mC910C35164B345E0AE9E223E13E9B3F3D86F6219(L_2, GameObject_AddComponent_TisTaskManager_t367024735EBEA906C190ABBACDAE097026A165FE_mC910C35164B345E0AE9E223E13E9B3F3D86F6219_RuntimeMethod_var);
		((TaskManager_t367024735EBEA906C190ABBACDAE097026A165FE_StaticFields*)il2cpp_codegen_static_fields_for(TaskManager_t367024735EBEA906C190ABBACDAE097026A165FE_il2cpp_TypeInfo_var))->___singleton_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((TaskManager_t367024735EBEA906C190ABBACDAE097026A165FE_StaticFields*)il2cpp_codegen_static_fields_for(TaskManager_t367024735EBEA906C190ABBACDAE097026A165FE_il2cpp_TypeInfo_var))->___singleton_4), (void*)L_3);
	}

IL_0021:
	{
		// return new TaskState(coroutine);
		RuntimeObject* L_4 = ___coroutine0;
		TaskState_t9C7D0CA031D3949FC3A512CD8A07975D5B736B0E* L_5 = (TaskState_t9C7D0CA031D3949FC3A512CD8A07975D5B736B0E*)il2cpp_codegen_object_new(TaskState_t9C7D0CA031D3949FC3A512CD8A07975D5B736B0E_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		TaskState__ctor_m72549EDF6B32F9FEB64A27AF9494BB0231D44760(L_5, L_4, NULL);
		return L_5;
	}
}
// System.Void Fungus.TaskManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskManager__ctor_m861C5C3AD5327B596AC1A38BB609E322AF2B0EB5 (TaskManager_t367024735EBEA906C190ABBACDAE097026A165FE* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Boolean Fungus.TaskManager/TaskState::get_Running()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskState_get_Running_m24E668075DB6EDF19B2111033B32AA1B7E752C6D (TaskState_t9C7D0CA031D3949FC3A512CD8A07975D5B736B0E* __this, const RuntimeMethod* method) 
{
	{
		// return running;
		bool L_0 = __this->___running_2;
		return L_0;
	}
}
// System.Boolean Fungus.TaskManager/TaskState::get_Paused()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskState_get_Paused_mAC316E5ED9EBD17440E0486EF9FA6E382DCA6685 (TaskState_t9C7D0CA031D3949FC3A512CD8A07975D5B736B0E* __this, const RuntimeMethod* method) 
{
	{
		// return paused;
		bool L_0 = __this->___paused_3;
		return L_0;
	}
}
// System.Void Fungus.TaskManager/TaskState::add_Finished(Fungus.TaskManager/TaskState/FinishedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskState_add_Finished_m214796F37D3350A6F39A30F9C3F6222CAE1DFB84 (TaskState_t9C7D0CA031D3949FC3A512CD8A07975D5B736B0E* __this, FinishedHandler_tCD804764E46A1E8F97AAEB2CE2976D96A23CCE37* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FinishedHandler_tCD804764E46A1E8F97AAEB2CE2976D96A23CCE37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FinishedHandler_tCD804764E46A1E8F97AAEB2CE2976D96A23CCE37* V_0 = NULL;
	FinishedHandler_tCD804764E46A1E8F97AAEB2CE2976D96A23CCE37* V_1 = NULL;
	FinishedHandler_tCD804764E46A1E8F97AAEB2CE2976D96A23CCE37* V_2 = NULL;
	{
		FinishedHandler_tCD804764E46A1E8F97AAEB2CE2976D96A23CCE37* L_0 = __this->___Finished_0;
		V_0 = L_0;
	}

IL_0007:
	{
		FinishedHandler_tCD804764E46A1E8F97AAEB2CE2976D96A23CCE37* L_1 = V_0;
		V_1 = L_1;
		FinishedHandler_tCD804764E46A1E8F97AAEB2CE2976D96A23CCE37* L_2 = V_1;
		FinishedHandler_tCD804764E46A1E8F97AAEB2CE2976D96A23CCE37* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((FinishedHandler_tCD804764E46A1E8F97AAEB2CE2976D96A23CCE37*)CastclassSealed((RuntimeObject*)L_4, FinishedHandler_tCD804764E46A1E8F97AAEB2CE2976D96A23CCE37_il2cpp_TypeInfo_var));
		FinishedHandler_tCD804764E46A1E8F97AAEB2CE2976D96A23CCE37** L_5 = (&__this->___Finished_0);
		FinishedHandler_tCD804764E46A1E8F97AAEB2CE2976D96A23CCE37* L_6 = V_2;
		FinishedHandler_tCD804764E46A1E8F97AAEB2CE2976D96A23CCE37* L_7 = V_1;
		FinishedHandler_tCD804764E46A1E8F97AAEB2CE2976D96A23CCE37* L_8;
		L_8 = InterlockedCompareExchangeImpl<FinishedHandler_tCD804764E46A1E8F97AAEB2CE2976D96A23CCE37*>(L_5, L_6, L_7);
		V_0 = L_8;
		FinishedHandler_tCD804764E46A1E8F97AAEB2CE2976D96A23CCE37* L_9 = V_0;
		FinishedHandler_tCD804764E46A1E8F97AAEB2CE2976D96A23CCE37* L_10 = V_1;
		if ((!(((RuntimeObject*)(FinishedHandler_tCD804764E46A1E8F97AAEB2CE2976D96A23CCE37*)L_9) == ((RuntimeObject*)(FinishedHandler_tCD804764E46A1E8F97AAEB2CE2976D96A23CCE37*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Fungus.TaskManager/TaskState::remove_Finished(Fungus.TaskManager/TaskState/FinishedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskState_remove_Finished_m0949227A7FEE8D5543C31FC2B5C073CACDA28A44 (TaskState_t9C7D0CA031D3949FC3A512CD8A07975D5B736B0E* __this, FinishedHandler_tCD804764E46A1E8F97AAEB2CE2976D96A23CCE37* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FinishedHandler_tCD804764E46A1E8F97AAEB2CE2976D96A23CCE37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FinishedHandler_tCD804764E46A1E8F97AAEB2CE2976D96A23CCE37* V_0 = NULL;
	FinishedHandler_tCD804764E46A1E8F97AAEB2CE2976D96A23CCE37* V_1 = NULL;
	FinishedHandler_tCD804764E46A1E8F97AAEB2CE2976D96A23CCE37* V_2 = NULL;
	{
		FinishedHandler_tCD804764E46A1E8F97AAEB2CE2976D96A23CCE37* L_0 = __this->___Finished_0;
		V_0 = L_0;
	}

IL_0007:
	{
		FinishedHandler_tCD804764E46A1E8F97AAEB2CE2976D96A23CCE37* L_1 = V_0;
		V_1 = L_1;
		FinishedHandler_tCD804764E46A1E8F97AAEB2CE2976D96A23CCE37* L_2 = V_1;
		FinishedHandler_tCD804764E46A1E8F97AAEB2CE2976D96A23CCE37* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((FinishedHandler_tCD804764E46A1E8F97AAEB2CE2976D96A23CCE37*)CastclassSealed((RuntimeObject*)L_4, FinishedHandler_tCD804764E46A1E8F97AAEB2CE2976D96A23CCE37_il2cpp_TypeInfo_var));
		FinishedHandler_tCD804764E46A1E8F97AAEB2CE2976D96A23CCE37** L_5 = (&__this->___Finished_0);
		FinishedHandler_tCD804764E46A1E8F97AAEB2CE2976D96A23CCE37* L_6 = V_2;
		FinishedHandler_tCD804764E46A1E8F97AAEB2CE2976D96A23CCE37* L_7 = V_1;
		FinishedHandler_tCD804764E46A1E8F97AAEB2CE2976D96A23CCE37* L_8;
		L_8 = InterlockedCompareExchangeImpl<FinishedHandler_tCD804764E46A1E8F97AAEB2CE2976D96A23CCE37*>(L_5, L_6, L_7);
		V_0 = L_8;
		FinishedHandler_tCD804764E46A1E8F97AAEB2CE2976D96A23CCE37* L_9 = V_0;
		FinishedHandler_tCD804764E46A1E8F97AAEB2CE2976D96A23CCE37* L_10 = V_1;
		if ((!(((RuntimeObject*)(FinishedHandler_tCD804764E46A1E8F97AAEB2CE2976D96A23CCE37*)L_9) == ((RuntimeObject*)(FinishedHandler_tCD804764E46A1E8F97AAEB2CE2976D96A23CCE37*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Fungus.TaskManager/TaskState::.ctor(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskState__ctor_m72549EDF6B32F9FEB64A27AF9494BB0231D44760 (TaskState_t9C7D0CA031D3949FC3A512CD8A07975D5B736B0E* __this, RuntimeObject* ___c0, const RuntimeMethod* method) 
{
	{
		// public TaskState(IEnumerator c)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// coroutine = c;
		RuntimeObject* L_0 = ___c0;
		__this->___coroutine_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___coroutine_1), (void*)L_0);
		// }
		return;
	}
}
// System.Void Fungus.TaskManager/TaskState::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskState_Pause_mECB980E337F45CF3014F80692841AB9773E56FFF (TaskState_t9C7D0CA031D3949FC3A512CD8A07975D5B736B0E* __this, const RuntimeMethod* method) 
{
	{
		// paused = true;
		__this->___paused_3 = (bool)1;
		// }
		return;
	}
}
// System.Void Fungus.TaskManager/TaskState::Unpause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskState_Unpause_m054C39D5817652ABF36B566DDE4773F1D37CBB84 (TaskState_t9C7D0CA031D3949FC3A512CD8A07975D5B736B0E* __this, const RuntimeMethod* method) 
{
	{
		// paused = false;
		__this->___paused_3 = (bool)0;
		// }
		return;
	}
}
// System.Void Fungus.TaskManager/TaskState::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskState_Start_mBC099B031162B27BE00365185E42B083A42BCD92 (TaskState_t9C7D0CA031D3949FC3A512CD8A07975D5B736B0E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskManager_t367024735EBEA906C190ABBACDAE097026A165FE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// running = true;
		__this->___running_2 = (bool)1;
		// singleton.StartCoroutine(CallWrapper());
		TaskManager_t367024735EBEA906C190ABBACDAE097026A165FE* L_0 = ((TaskManager_t367024735EBEA906C190ABBACDAE097026A165FE_StaticFields*)il2cpp_codegen_static_fields_for(TaskManager_t367024735EBEA906C190ABBACDAE097026A165FE_il2cpp_TypeInfo_var))->___singleton_4;
		RuntimeObject* L_1;
		L_1 = TaskState_CallWrapper_m843874F9C2FE244EA237721AE2A3B76980DED652(__this, NULL);
		NullCheck(L_0);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Fungus.TaskManager/TaskState::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskState_Stop_m1E166108D56E1DB158829BDA31EB8557DB78674C (TaskState_t9C7D0CA031D3949FC3A512CD8A07975D5B736B0E* __this, const RuntimeMethod* method) 
{
	{
		// stopped = true;
		__this->___stopped_4 = (bool)1;
		// running = false;
		__this->___running_2 = (bool)0;
		// }
		return;
	}
}
// System.Collections.IEnumerator Fungus.TaskManager/TaskState::CallWrapper()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TaskState_CallWrapper_m843874F9C2FE244EA237721AE2A3B76980DED652 (TaskState_t9C7D0CA031D3949FC3A512CD8A07975D5B736B0E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCallWrapperU3Ed__17_tF6D1DB6F028D900D6318E29141EBD455FF0CB03F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCallWrapperU3Ed__17_tF6D1DB6F028D900D6318E29141EBD455FF0CB03F* L_0 = (U3CCallWrapperU3Ed__17_tF6D1DB6F028D900D6318E29141EBD455FF0CB03F*)il2cpp_codegen_object_new(U3CCallWrapperU3Ed__17_tF6D1DB6F028D900D6318E29141EBD455FF0CB03F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CCallWrapperU3Ed__17__ctor_m2E7421D7BBF2887FF69D1274493E9A0E48CD5455(L_0, 0, NULL);
		U3CCallWrapperU3Ed__17_tF6D1DB6F028D900D6318E29141EBD455FF0CB03F* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
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
void FinishedHandler_Invoke_m7AF81046EE3C5A37385B2C3D99D6E79850288BF1_Multicast(FinishedHandler_tCD804764E46A1E8F97AAEB2CE2976D96A23CCE37* __this, bool ___manual0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		FinishedHandler_tCD804764E46A1E8F97AAEB2CE2976D96A23CCE37* currentDelegate = reinterpret_cast<FinishedHandler_tCD804764E46A1E8F97AAEB2CE2976D96A23CCE37*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___manual0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void FinishedHandler_Invoke_m7AF81046EE3C5A37385B2C3D99D6E79850288BF1_OpenInst(FinishedHandler_tCD804764E46A1E8F97AAEB2CE2976D96A23CCE37* __this, bool ___manual0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___manual0, method);
}
void FinishedHandler_Invoke_m7AF81046EE3C5A37385B2C3D99D6E79850288BF1_OpenStatic(FinishedHandler_tCD804764E46A1E8F97AAEB2CE2976D96A23CCE37* __this, bool ___manual0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___manual0, method);
}
void FinishedHandler_Invoke_m7AF81046EE3C5A37385B2C3D99D6E79850288BF1_OpenStaticInvoker(FinishedHandler_tCD804764E46A1E8F97AAEB2CE2976D96A23CCE37* __this, bool ___manual0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< bool >::Invoke(__this->___method_ptr_0, method, NULL, ___manual0);
}
void FinishedHandler_Invoke_m7AF81046EE3C5A37385B2C3D99D6E79850288BF1_ClosedStaticInvoker(FinishedHandler_tCD804764E46A1E8F97AAEB2CE2976D96A23CCE37* __this, bool ___manual0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, bool >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___manual0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_FinishedHandler_tCD804764E46A1E8F97AAEB2CE2976D96A23CCE37 (FinishedHandler_tCD804764E46A1E8F97AAEB2CE2976D96A23CCE37* __this, bool ___manual0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(static_cast<int32_t>(___manual0));

}
// System.Void Fungus.TaskManager/TaskState/FinishedHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinishedHandler__ctor_m7470C1DF08D7040F356506A0116FEA4001871694 (FinishedHandler_tCD804764E46A1E8F97AAEB2CE2976D96A23CCE37* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&FinishedHandler_Invoke_m7AF81046EE3C5A37385B2C3D99D6E79850288BF1_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&FinishedHandler_Invoke_m7AF81046EE3C5A37385B2C3D99D6E79850288BF1_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&FinishedHandler_Invoke_m7AF81046EE3C5A37385B2C3D99D6E79850288BF1_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&FinishedHandler_Invoke_m7AF81046EE3C5A37385B2C3D99D6E79850288BF1_Multicast;
}
// System.Void Fungus.TaskManager/TaskState/FinishedHandler::Invoke(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinishedHandler_Invoke_m7AF81046EE3C5A37385B2C3D99D6E79850288BF1 (FinishedHandler_tCD804764E46A1E8F97AAEB2CE2976D96A23CCE37* __this, bool ___manual0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___manual0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Fungus.TaskManager/TaskState/FinishedHandler::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FinishedHandler_BeginInvoke_m151337EAB50ACE253936BDFBC20DDA4AAE6B404A (FinishedHandler_tCD804764E46A1E8F97AAEB2CE2976D96A23CCE37* __this, bool ___manual0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &___manual0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Fungus.TaskManager/TaskState/FinishedHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinishedHandler_EndInvoke_m51D5B9634EEB7DCA550BF7625286A984009E5267 (FinishedHandler_tCD804764E46A1E8F97AAEB2CE2976D96A23CCE37* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
// System.Void Fungus.TaskManager/TaskState/<CallWrapper>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCallWrapperU3Ed__17__ctor_m2E7421D7BBF2887FF69D1274493E9A0E48CD5455 (U3CCallWrapperU3Ed__17_tF6D1DB6F028D900D6318E29141EBD455FF0CB03F* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Fungus.TaskManager/TaskState/<CallWrapper>d__17::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCallWrapperU3Ed__17_System_IDisposable_Dispose_m47BE98723D619AC7187665E03300F9BE334280D4 (U3CCallWrapperU3Ed__17_tF6D1DB6F028D900D6318E29141EBD455FF0CB03F* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Fungus.TaskManager/TaskState/<CallWrapper>d__17::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCallWrapperU3Ed__17_MoveNext_m7E8D300E59C2D92291F3495F56F03D5898829BB3 (U3CCallWrapperU3Ed__17_tF6D1DB6F028D900D6318E29141EBD455FF0CB03F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TaskState_t9C7D0CA031D3949FC3A512CD8A07975D5B736B0E* V_1 = NULL;
	FinishedHandler_tCD804764E46A1E8F97AAEB2CE2976D96A23CCE37* V_2 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		TaskState_t9C7D0CA031D3949FC3A512CD8A07975D5B736B0E* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_003d;
			}
			case 2:
			{
				goto IL_006a;
			}
			case 3:
			{
				goto IL_00a2;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_003d:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// IEnumerator e = coroutine;
		TaskState_t9C7D0CA031D3949FC3A512CD8A07975D5B736B0E* L_3 = V_1;
		NullCheck(L_3);
		RuntimeObject* L_4 = L_3->___coroutine_1;
		__this->___U3CeU3E5__2_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_3), (void*)L_4);
		goto IL_00b2;
	}

IL_0052:
	{
		// if(paused)
		TaskState_t9C7D0CA031D3949FC3A512CD8A07975D5B736B0E* L_5 = V_1;
		NullCheck(L_5);
		bool L_6 = L_5->___paused_3;
		if (!L_6)
		{
			goto IL_0073;
		}
	}
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_006a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_00b2;
	}

IL_0073:
	{
		// if(e != null && e.MoveNext()) {
		RuntimeObject* L_7 = __this->___U3CeU3E5__2_3;
		if (!L_7)
		{
			goto IL_00ab;
		}
	}
	{
		RuntimeObject* L_8 = __this->___U3CeU3E5__2_3;
		NullCheck(L_8);
		bool L_9;
		L_9 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_8);
		if (!L_9)
		{
			goto IL_00ab;
		}
	}
	{
		// yield return e.Current;
		RuntimeObject* L_10 = __this->___U3CeU3E5__2_3;
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_10);
		__this->___U3CU3E2__current_1 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_11);
		__this->___U3CU3E1__state_0 = 3;
		return (bool)1;
	}

IL_00a2:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_00b2;
	}

IL_00ab:
	{
		// running = false;
		TaskState_t9C7D0CA031D3949FC3A512CD8A07975D5B736B0E* L_12 = V_1;
		NullCheck(L_12);
		L_12->___running_2 = (bool)0;
	}

IL_00b2:
	{
		// while(running) {
		TaskState_t9C7D0CA031D3949FC3A512CD8A07975D5B736B0E* L_13 = V_1;
		NullCheck(L_13);
		bool L_14 = L_13->___running_2;
		if (L_14)
		{
			goto IL_0052;
		}
	}
	{
		// FinishedHandler handler = Finished;
		TaskState_t9C7D0CA031D3949FC3A512CD8A07975D5B736B0E* L_15 = V_1;
		NullCheck(L_15);
		FinishedHandler_tCD804764E46A1E8F97AAEB2CE2976D96A23CCE37* L_16 = L_15->___Finished_0;
		V_2 = L_16;
		// if(handler != null)
		FinishedHandler_tCD804764E46A1E8F97AAEB2CE2976D96A23CCE37* L_17 = V_2;
		if (!L_17)
		{
			goto IL_00d0;
		}
	}
	{
		// handler(stopped);
		FinishedHandler_tCD804764E46A1E8F97AAEB2CE2976D96A23CCE37* L_18 = V_2;
		TaskState_t9C7D0CA031D3949FC3A512CD8A07975D5B736B0E* L_19 = V_1;
		NullCheck(L_19);
		bool L_20 = L_19->___stopped_4;
		NullCheck(L_18);
		FinishedHandler_Invoke_m7AF81046EE3C5A37385B2C3D99D6E79850288BF1_inline(L_18, L_20, NULL);
	}

IL_00d0:
	{
		// }
		return (bool)0;
	}
}
// System.Object Fungus.TaskManager/TaskState/<CallWrapper>d__17::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCallWrapperU3Ed__17_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m1CFAE1FC61FE199EB19F7B9EB8F87F0DD1FDADBD (U3CCallWrapperU3Ed__17_tF6D1DB6F028D900D6318E29141EBD455FF0CB03F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Fungus.TaskManager/TaskState/<CallWrapper>d__17::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCallWrapperU3Ed__17_System_Collections_IEnumerator_Reset_m195522D3EF367BFB5D1CEC2255A129153F664895 (U3CCallWrapperU3Ed__17_tF6D1DB6F028D900D6318E29141EBD455FF0CB03F* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCallWrapperU3Ed__17_System_Collections_IEnumerator_Reset_m195522D3EF367BFB5D1CEC2255A129153F664895_RuntimeMethod_var)));
	}
}
// System.Object Fungus.TaskManager/TaskState/<CallWrapper>d__17::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCallWrapperU3Ed__17_System_Collections_IEnumerator_get_Current_mE1CD10CD08D1E092A15A5815901938DF92816EA1 (U3CCallWrapperU3Ed__17_tF6D1DB6F028D900D6318E29141EBD455FF0CB03F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
float EasingFunction_Invoke_mD2A1A54E175250C6598B2C38302FDE487159AA07_Multicast(EasingFunction_t2F37547D507A0DCE1986E8631F8FEEAF34F16DCF* __this, float ___start0, float ___end1, float ___Value2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	float retVal = 0.0f;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		EasingFunction_t2F37547D507A0DCE1986E8631F8FEEAF34F16DCF* currentDelegate = reinterpret_cast<EasingFunction_t2F37547D507A0DCE1986E8631F8FEEAF34F16DCF*>(delegatesToInvoke[i]);
		typedef float (*FunctionPointerType) (RuntimeObject*, float, float, float, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___start0, ___end1, ___Value2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
float EasingFunction_Invoke_mD2A1A54E175250C6598B2C38302FDE487159AA07_OpenInst(EasingFunction_t2F37547D507A0DCE1986E8631F8FEEAF34F16DCF* __this, float ___start0, float ___end1, float ___Value2, const RuntimeMethod* method)
{
	typedef float (*FunctionPointerType) (float, float, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___start0, ___end1, ___Value2, method);
}
float EasingFunction_Invoke_mD2A1A54E175250C6598B2C38302FDE487159AA07_OpenStatic(EasingFunction_t2F37547D507A0DCE1986E8631F8FEEAF34F16DCF* __this, float ___start0, float ___end1, float ___Value2, const RuntimeMethod* method)
{
	typedef float (*FunctionPointerType) (float, float, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___start0, ___end1, ___Value2, method);
}
float EasingFunction_Invoke_mD2A1A54E175250C6598B2C38302FDE487159AA07_OpenStaticInvoker(EasingFunction_t2F37547D507A0DCE1986E8631F8FEEAF34F16DCF* __this, float ___start0, float ___end1, float ___Value2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< float, float, float, float >::Invoke(__this->___method_ptr_0, method, NULL, ___start0, ___end1, ___Value2);
}
float EasingFunction_Invoke_mD2A1A54E175250C6598B2C38302FDE487159AA07_ClosedStaticInvoker(EasingFunction_t2F37547D507A0DCE1986E8631F8FEEAF34F16DCF* __this, float ___start0, float ___end1, float ___Value2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< float, RuntimeObject*, float, float, float >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___start0, ___end1, ___Value2);
}
IL2CPP_EXTERN_C  float DelegatePInvokeWrapper_EasingFunction_t2F37547D507A0DCE1986E8631F8FEEAF34F16DCF (EasingFunction_t2F37547D507A0DCE1986E8631F8FEEAF34F16DCF* __this, float ___start0, float ___end1, float ___Value2, const RuntimeMethod* method)
{
	typedef float (DEFAULT_CALL *PInvokeFunc)(float, float, float);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	float returnValue = il2cppPInvokeFunc(___start0, ___end1, ___Value2);

	return returnValue;
}
// System.Void Fungus.iTween/EasingFunction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EasingFunction__ctor_mE1E97168C322B4EBEE871E16DCE370AB364C9906 (EasingFunction_t2F37547D507A0DCE1986E8631F8FEEAF34F16DCF* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&EasingFunction_Invoke_mD2A1A54E175250C6598B2C38302FDE487159AA07_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&EasingFunction_Invoke_mD2A1A54E175250C6598B2C38302FDE487159AA07_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&EasingFunction_Invoke_mD2A1A54E175250C6598B2C38302FDE487159AA07_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&EasingFunction_Invoke_mD2A1A54E175250C6598B2C38302FDE487159AA07_Multicast;
}
// System.Single Fungus.iTween/EasingFunction::Invoke(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EasingFunction_Invoke_mD2A1A54E175250C6598B2C38302FDE487159AA07 (EasingFunction_t2F37547D507A0DCE1986E8631F8FEEAF34F16DCF* __this, float ___start0, float ___end1, float ___Value2, const RuntimeMethod* method) 
{
	typedef float (*FunctionPointerType) (RuntimeObject*, float, float, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___start0, ___end1, ___Value2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Fungus.iTween/EasingFunction::BeginInvoke(System.Single,System.Single,System.Single,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EasingFunction_BeginInvoke_m72B2080A44A96555967659E6513DA0B2029DE69F (EasingFunction_t2F37547D507A0DCE1986E8631F8FEEAF34F16DCF* __this, float ___start0, float ___end1, float ___Value2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___start0);
	__d_args[1] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___end1);
	__d_args[2] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___Value2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Single Fungus.iTween/EasingFunction::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EasingFunction_EndInvoke_mD6738C34334419C1372F89C6B27B04F4AE5F9B43 (EasingFunction_t2F37547D507A0DCE1986E8631F8FEEAF34F16DCF* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(float*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void ApplyTween_Invoke_m491526D26DFE03E20ED74D522E898401A7F213B0_Multicast(ApplyTween_t0BA590794675975A37A9ECDFFE9EE85132655D3B* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ApplyTween_t0BA590794675975A37A9ECDFFE9EE85132655D3B* currentDelegate = reinterpret_cast<ApplyTween_t0BA590794675975A37A9ECDFFE9EE85132655D3B*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ApplyTween_Invoke_m491526D26DFE03E20ED74D522E898401A7F213B0_OpenInst(ApplyTween_t0BA590794675975A37A9ECDFFE9EE85132655D3B* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void ApplyTween_Invoke_m491526D26DFE03E20ED74D522E898401A7F213B0_OpenStatic(ApplyTween_t0BA590794675975A37A9ECDFFE9EE85132655D3B* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void ApplyTween_Invoke_m491526D26DFE03E20ED74D522E898401A7F213B0_OpenStaticInvoker(ApplyTween_t0BA590794675975A37A9ECDFFE9EE85132655D3B* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void ApplyTween_Invoke_m491526D26DFE03E20ED74D522E898401A7F213B0_ClosedStaticInvoker(ApplyTween_t0BA590794675975A37A9ECDFFE9EE85132655D3B* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ApplyTween_t0BA590794675975A37A9ECDFFE9EE85132655D3B (ApplyTween_t0BA590794675975A37A9ECDFFE9EE85132655D3B* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void Fungus.iTween/ApplyTween::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplyTween__ctor_m15187BBBCBA30F8AC34459993E63A7D7E4D34424 (ApplyTween_t0BA590794675975A37A9ECDFFE9EE85132655D3B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ApplyTween_Invoke_m491526D26DFE03E20ED74D522E898401A7F213B0_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ApplyTween_Invoke_m491526D26DFE03E20ED74D522E898401A7F213B0_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ApplyTween_Invoke_m491526D26DFE03E20ED74D522E898401A7F213B0_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&ApplyTween_Invoke_m491526D26DFE03E20ED74D522E898401A7F213B0_Multicast;
}
// System.Void Fungus.iTween/ApplyTween::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplyTween_Invoke_m491526D26DFE03E20ED74D522E898401A7F213B0 (ApplyTween_t0BA590794675975A37A9ECDFFE9EE85132655D3B* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Fungus.iTween/ApplyTween::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ApplyTween_BeginInvoke_mE1050059A7F1CD4E6309E370239A379DE0030273 (ApplyTween_t0BA590794675975A37A9ECDFFE9EE85132655D3B* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void Fungus.iTween/ApplyTween::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplyTween_EndInvoke_m31CE1716AC669DC805E2B7CFE72C1C3AF20A6CEF (ApplyTween_t0BA590794675975A37A9ECDFFE9EE85132655D3B* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
// System.Void Fungus.iTween/Defaults::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Defaults__cctor_mF4796485461707832E85D0C478DF8E62238077A1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Defaults_tBD6A2FEE38363860CE5591952F8D82EAB5C02EAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static float time = 1f;
		((Defaults_tBD6A2FEE38363860CE5591952F8D82EAB5C02EAA_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_tBD6A2FEE38363860CE5591952F8D82EAB5C02EAA_il2cpp_TypeInfo_var))->___time_0 = (1.0f);
		// public static float delay = 0f;
		((Defaults_tBD6A2FEE38363860CE5591952F8D82EAB5C02EAA_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_tBD6A2FEE38363860CE5591952F8D82EAB5C02EAA_il2cpp_TypeInfo_var))->___delay_1 = (0.0f);
		// public static NamedValueColor namedColorValue = NamedValueColor._Color;
		((Defaults_tBD6A2FEE38363860CE5591952F8D82EAB5C02EAA_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_tBD6A2FEE38363860CE5591952F8D82EAB5C02EAA_il2cpp_TypeInfo_var))->___namedColorValue_2 = 0;
		// public static LoopType loopType = LoopType.none;
		((Defaults_tBD6A2FEE38363860CE5591952F8D82EAB5C02EAA_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_tBD6A2FEE38363860CE5591952F8D82EAB5C02EAA_il2cpp_TypeInfo_var))->___loopType_3 = 0;
		// public static EaseType easeType = iTween.EaseType.easeOutExpo;
		((Defaults_tBD6A2FEE38363860CE5591952F8D82EAB5C02EAA_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_tBD6A2FEE38363860CE5591952F8D82EAB5C02EAA_il2cpp_TypeInfo_var))->___easeType_4 = ((int32_t)16);
		// public static float lookSpeed = 3f;
		((Defaults_tBD6A2FEE38363860CE5591952F8D82EAB5C02EAA_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_tBD6A2FEE38363860CE5591952F8D82EAB5C02EAA_il2cpp_TypeInfo_var))->___lookSpeed_5 = (3.0f);
		// public static bool isLocal = false;
		((Defaults_tBD6A2FEE38363860CE5591952F8D82EAB5C02EAA_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_tBD6A2FEE38363860CE5591952F8D82EAB5C02EAA_il2cpp_TypeInfo_var))->___isLocal_6 = (bool)0;
		// public static Space space = Space.Self;
		((Defaults_tBD6A2FEE38363860CE5591952F8D82EAB5C02EAA_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_tBD6A2FEE38363860CE5591952F8D82EAB5C02EAA_il2cpp_TypeInfo_var))->___space_7 = 1;
		// public static bool orientToPath = false;
		((Defaults_tBD6A2FEE38363860CE5591952F8D82EAB5C02EAA_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_tBD6A2FEE38363860CE5591952F8D82EAB5C02EAA_il2cpp_TypeInfo_var))->___orientToPath_8 = (bool)0;
		// public static Color color = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		((Defaults_tBD6A2FEE38363860CE5591952F8D82EAB5C02EAA_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_tBD6A2FEE38363860CE5591952F8D82EAB5C02EAA_il2cpp_TypeInfo_var))->___color_9 = L_0;
		// public static float updateTimePercentage = .05f;
		((Defaults_tBD6A2FEE38363860CE5591952F8D82EAB5C02EAA_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_tBD6A2FEE38363860CE5591952F8D82EAB5C02EAA_il2cpp_TypeInfo_var))->___updateTimePercentage_10 = (0.0500000007f);
		// public static float updateTime = 1f*updateTimePercentage;
		float L_1 = ((Defaults_tBD6A2FEE38363860CE5591952F8D82EAB5C02EAA_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_tBD6A2FEE38363860CE5591952F8D82EAB5C02EAA_il2cpp_TypeInfo_var))->___updateTimePercentage_10;
		((Defaults_tBD6A2FEE38363860CE5591952F8D82EAB5C02EAA_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_tBD6A2FEE38363860CE5591952F8D82EAB5C02EAA_il2cpp_TypeInfo_var))->___updateTime_11 = ((float)il2cpp_codegen_multiply((1.0f), L_1));
		// public static int cameraFadeDepth = 999999;
		((Defaults_tBD6A2FEE38363860CE5591952F8D82EAB5C02EAA_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_tBD6A2FEE38363860CE5591952F8D82EAB5C02EAA_il2cpp_TypeInfo_var))->___cameraFadeDepth_12 = ((int32_t)999999);
		// public static float lookAhead = .05f;
		((Defaults_tBD6A2FEE38363860CE5591952F8D82EAB5C02EAA_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_tBD6A2FEE38363860CE5591952F8D82EAB5C02EAA_il2cpp_TypeInfo_var))->___lookAhead_13 = (0.0500000007f);
		// public static bool useRealTime = false; // Added by PressPlay
		((Defaults_tBD6A2FEE38363860CE5591952F8D82EAB5C02EAA_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_tBD6A2FEE38363860CE5591952F8D82EAB5C02EAA_il2cpp_TypeInfo_var))->___useRealTime_14 = (bool)0;
		// public static Vector3 up = Vector3.up;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		((Defaults_tBD6A2FEE38363860CE5591952F8D82EAB5C02EAA_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_tBD6A2FEE38363860CE5591952F8D82EAB5C02EAA_il2cpp_TypeInfo_var))->___up_15 = L_2;
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
// System.Void Fungus.iTween/CRSpline::.ctor(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CRSpline__ctor_m0BE840E5E60549D77F7F435159CFACEB3575FAE8 (CRSpline_t7781769718999B4B6DA8C0673FC639CA3B56027A* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___pts0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public CRSpline(params Vector3[] pts) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.pts = new Vector3[pts.Length];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = ___pts0;
		NullCheck(L_0);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		__this->___pts_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pts_0), (void*)L_1);
		// Array.Copy(pts, this.pts, pts.Length);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2 = ___pts0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = __this->___pts_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = ___pts0;
		NullCheck(L_4);
		Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900((RuntimeArray*)L_2, (RuntimeArray*)L_3, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 Fungus.iTween/CRSpline::Interp(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CRSpline_Interp_m6C3AED8EF9196BE8E9F07189F720C1190743D170 (CRSpline_t7781769718999B4B6DA8C0673FC639CA3B56027A* __this, float ___t0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// int numSections = pts.Length - 3;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = __this->___pts_0;
		NullCheck(L_0);
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_0)->max_length)), 3));
		// int currPt = Mathf.Min(Mathf.FloorToInt(t * (float) numSections), numSections - 1);
		float L_1 = ___t0;
		int32_t L_2 = V_0;
		int32_t L_3;
		L_3 = Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline(((float)il2cpp_codegen_multiply(L_1, ((float)L_2))), NULL);
		int32_t L_4 = V_0;
		int32_t L_5;
		L_5 = Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline(L_3, ((int32_t)il2cpp_codegen_subtract(L_4, 1)), NULL);
		V_1 = L_5;
		// float u = t * (float) numSections - (float) currPt;
		float L_6 = ___t0;
		int32_t L_7 = V_0;
		int32_t L_8 = V_1;
		V_2 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_6, ((float)L_7))), ((float)L_8)));
		// Vector3 a = pts[currPt];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_9 = __this->___pts_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		// Vector3 b = pts[currPt + 1];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_13 = __this->___pts_0;
		int32_t L_14 = V_1;
		NullCheck(L_13);
		int32_t L_15 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_4 = L_16;
		// Vector3 c = pts[currPt + 2];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_17 = __this->___pts_0;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		int32_t L_19 = ((int32_t)il2cpp_codegen_add(L_18, 2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_5 = L_20;
		// Vector3 d = pts[currPt + 3];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_21 = __this->___pts_0;
		int32_t L_22 = V_1;
		NullCheck(L_21);
		int32_t L_23 = ((int32_t)il2cpp_codegen_add(L_22, 3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		V_6 = L_24;
		// return .5f*((-a+3f*b-3f*c+d)*(u*u*u)+(2f*a-5f*b+4f*c-d)*(u*u)+(-a+c)*u+2f*b);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_25, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((3.0f), L_27, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_26, L_28, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((3.0f), L_30, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_29, L_31, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_32, L_33, NULL);
		float L_35 = V_2;
		float L_36 = V_2;
		float L_37 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_34, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_35, L_36)), L_37)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((2.0f), L_39, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((5.0f), L_41, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_40, L_42, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((4.0f), L_44, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_43, L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_46, L_47, NULL);
		float L_49 = V_2;
		float L_50 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_48, ((float)il2cpp_codegen_multiply(L_49, L_50)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		L_52 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_38, L_51, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54;
		L_54 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_53, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56;
		L_56 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_54, L_55, NULL);
		float L_57 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		L_58 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_56, L_57, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59;
		L_59 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_52, L_58, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61;
		L_61 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((2.0f), L_60, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62;
		L_62 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_59, L_61, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63;
		L_63 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((0.5f), L_62, NULL);
		return L_63;
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
// System.Void Fungus.iTween/<TweenDelay>d__150::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTweenDelayU3Ed__150__ctor_mA5CA99647EC0021EF16A3100AD208F31F9F71B27 (U3CTweenDelayU3Ed__150_tF09407B4D44C53DC341EEAE293ECEC2ACA8231D7* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Fungus.iTween/<TweenDelay>d__150::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTweenDelayU3Ed__150_System_IDisposable_Dispose_mCEABB323B7BF6CC6952AA2FD94850AEFDF2B5755 (U3CTweenDelayU3Ed__150_tF09407B4D44C53DC341EEAE293ECEC2ACA8231D7* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Fungus.iTween/<TweenDelay>d__150::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTweenDelayU3Ed__150_MoveNext_mBF32ECC82BF7B86352D649F59487C8B5DD69DB3E (U3CTweenDelayU3Ed__150_tF09407B4D44C53DC341EEAE293ECEC2ACA8231D7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	iTween_tF20BC5A2791EDB57F35E0DD8EA21F698A7096666* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		iTween_tF20BC5A2791EDB57F35E0DD8EA21F698A7096666* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0043;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// delayStarted = Time.time;
		iTween_tF20BC5A2791EDB57F35E0DD8EA21F698A7096666* L_4 = V_1;
		float L_5;
		L_5 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		NullCheck(L_4);
		L_4->___delayStarted_18 = L_5;
		// yield return new WaitForSeconds (delay);
		iTween_tF20BC5A2791EDB57F35E0DD8EA21F698A7096666* L_6 = V_1;
		NullCheck(L_6);
		float L_7 = L_6->___delay_11;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_8 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_8, L_7, NULL);
		__this->___U3CU3E2__current_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_8);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0043:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if(wasPaused){
		iTween_tF20BC5A2791EDB57F35E0DD8EA21F698A7096666* L_9 = V_1;
		NullCheck(L_9);
		bool L_10 = L_9->___wasPaused_23;
		if (!L_10)
		{
			goto IL_005f;
		}
	}
	{
		// wasPaused=false;
		iTween_tF20BC5A2791EDB57F35E0DD8EA21F698A7096666* L_11 = V_1;
		NullCheck(L_11);
		L_11->___wasPaused_23 = (bool)0;
		// TweenStart();
		iTween_tF20BC5A2791EDB57F35E0DD8EA21F698A7096666* L_12 = V_1;
		NullCheck(L_12);
		iTween_TweenStart_mE43F4BE7F8A6BD14BC1792338EE0063966D51FAC(L_12, NULL);
	}

IL_005f:
	{
		// }
		return (bool)0;
	}
}
// System.Object Fungus.iTween/<TweenDelay>d__150::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTweenDelayU3Ed__150_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m7E7AED946D94EE18510FCAEBA28DBFA16E1A49E4 (U3CTweenDelayU3Ed__150_tF09407B4D44C53DC341EEAE293ECEC2ACA8231D7* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Fungus.iTween/<TweenDelay>d__150::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTweenDelayU3Ed__150_System_Collections_IEnumerator_Reset_mC71CDAB6A577D43A6A81C8513FD3864315804923 (U3CTweenDelayU3Ed__150_tF09407B4D44C53DC341EEAE293ECEC2ACA8231D7* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTweenDelayU3Ed__150_System_Collections_IEnumerator_Reset_mC71CDAB6A577D43A6A81C8513FD3864315804923_RuntimeMethod_var)));
	}
}
// System.Object Fungus.iTween/<TweenDelay>d__150::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTweenDelayU3Ed__150_System_Collections_IEnumerator_get_Current_m4A86AE4D800CDC7906576588B8B0D052A3766B2E (U3CTweenDelayU3Ed__150_tF09407B4D44C53DC341EEAE293ECEC2ACA8231D7* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void Fungus.iTween/<TweenRestart>d__152::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTweenRestartU3Ed__152__ctor_m0F37AB530BF0CB8B421950B402FC95A964696D94 (U3CTweenRestartU3Ed__152_t1A38EE8F64C5D88F2899F8C370EFB6A5376EEBDE* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Fungus.iTween/<TweenRestart>d__152::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTweenRestartU3Ed__152_System_IDisposable_Dispose_mEDDEC80DBCF3CD7942CCB1FB8005A8F9D215DC4C (U3CTweenRestartU3Ed__152_t1A38EE8F64C5D88F2899F8C370EFB6A5376EEBDE* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Fungus.iTween/<TweenRestart>d__152::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTweenRestartU3Ed__152_MoveNext_mA44BFD7196B7E5C3D62179090D7124EEB42062A7 (U3CTweenRestartU3Ed__152_t1A38EE8F64C5D88F2899F8C370EFB6A5376EEBDE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	iTween_tF20BC5A2791EDB57F35E0DD8EA21F698A7096666* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		iTween_tF20BC5A2791EDB57F35E0DD8EA21F698A7096666* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0050;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if(delay > 0){
		iTween_tF20BC5A2791EDB57F35E0DD8EA21F698A7096666* L_4 = V_1;
		NullCheck(L_4);
		float L_5 = L_4->___delay_11;
		if ((!(((float)L_5) > ((float)(0.0f)))))
		{
			goto IL_0057;
		}
	}
	{
		// delayStarted = Time.time;
		iTween_tF20BC5A2791EDB57F35E0DD8EA21F698A7096666* L_6 = V_1;
		float L_7;
		L_7 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		NullCheck(L_6);
		L_6->___delayStarted_18 = L_7;
		// yield return new WaitForSeconds (delay);
		iTween_tF20BC5A2791EDB57F35E0DD8EA21F698A7096666* L_8 = V_1;
		NullCheck(L_8);
		float L_9 = L_8->___delay_11;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_10 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_10, L_9, NULL);
		__this->___U3CU3E2__current_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_10);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0050:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0057:
	{
		// loop=true;
		iTween_tF20BC5A2791EDB57F35E0DD8EA21F698A7096666* L_11 = V_1;
		NullCheck(L_11);
		L_11->___loop_21 = (bool)1;
		// TweenStart();
		iTween_tF20BC5A2791EDB57F35E0DD8EA21F698A7096666* L_12 = V_1;
		NullCheck(L_12);
		iTween_TweenStart_mE43F4BE7F8A6BD14BC1792338EE0063966D51FAC(L_12, NULL);
		// }
		return (bool)0;
	}
}
// System.Object Fungus.iTween/<TweenRestart>d__152::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTweenRestartU3Ed__152_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB55F87EC35BDD866420924384AF421DB82883BAA (U3CTweenRestartU3Ed__152_t1A38EE8F64C5D88F2899F8C370EFB6A5376EEBDE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Fungus.iTween/<TweenRestart>d__152::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTweenRestartU3Ed__152_System_Collections_IEnumerator_Reset_mF56876C2989EAD290C19A2BE8C585C992489DCE5 (U3CTweenRestartU3Ed__152_t1A38EE8F64C5D88F2899F8C370EFB6A5376EEBDE* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTweenRestartU3Ed__152_System_Collections_IEnumerator_Reset_mF56876C2989EAD290C19A2BE8C585C992489DCE5_RuntimeMethod_var)));
	}
}
// System.Object Fungus.iTween/<TweenRestart>d__152::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTweenRestartU3Ed__152_System_Collections_IEnumerator_get_Current_mC9ADC415A9B30FF3B995D146F077432A7D9A29E8 (U3CTweenRestartU3Ed__152_t1A38EE8F64C5D88F2899F8C370EFB6A5376EEBDE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void Fungus.iTween/<Start>d__237::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__237__ctor_mBC981E653F2D1D12DF1699248F930F35A966C7E5 (U3CStartU3Ed__237_t30796C282C7F009FE6C7D904CFA28C6578C43D6A* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Fungus.iTween/<Start>d__237::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__237_System_IDisposable_Dispose_m81DD629099724EA738B02944670DB7428C813359 (U3CStartU3Ed__237_t30796C282C7F009FE6C7D904CFA28C6578C43D6A* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Fungus.iTween/<Start>d__237::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartU3Ed__237_MoveNext_m3604AC620E4DE7E1BF9123B0F25330223CD85F55 (U3CStartU3Ed__237_t30796C282C7F009FE6C7D904CFA28C6578C43D6A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0658EBD7117F5F9DCFBFF0FBF0210D62373F387);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	iTween_tF20BC5A2791EDB57F35E0DD8EA21F698A7096666* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		iTween_tF20BC5A2791EDB57F35E0DD8EA21F698A7096666* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0045;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if(delay > 0){
		iTween_tF20BC5A2791EDB57F35E0DD8EA21F698A7096666* L_4 = V_1;
		NullCheck(L_4);
		float L_5 = L_4->___delay_11;
		if ((!(((float)L_5) > ((float)(0.0f)))))
		{
			goto IL_004c;
		}
	}
	{
		// yield return StartCoroutine("TweenDelay");
		iTween_tF20BC5A2791EDB57F35E0DD8EA21F698A7096666* L_6 = V_1;
		NullCheck(L_6);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_7;
		L_7 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(L_6, _stringLiteralB0658EBD7117F5F9DCFBFF0FBF0210D62373F387, NULL);
		__this->___U3CU3E2__current_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_7);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0045:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_004c:
	{
		// TweenStart();
		iTween_tF20BC5A2791EDB57F35E0DD8EA21F698A7096666* L_8 = V_1;
		NullCheck(L_8);
		iTween_TweenStart_mE43F4BE7F8A6BD14BC1792338EE0063966D51FAC(L_8, NULL);
		// }
		return (bool)0;
	}
}
// System.Object Fungus.iTween/<Start>d__237::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartU3Ed__237_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m39C54EF94E45DF18BDD17B59A32C1466DEA4B836 (U3CStartU3Ed__237_t30796C282C7F009FE6C7D904CFA28C6578C43D6A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Fungus.iTween/<Start>d__237::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__237_System_Collections_IEnumerator_Reset_m63398636D7FD2DDB06190D7378C253EF37C2861A (U3CStartU3Ed__237_t30796C282C7F009FE6C7D904CFA28C6578C43D6A* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartU3Ed__237_System_Collections_IEnumerator_Reset_m63398636D7FD2DDB06190D7378C253EF37C2861A_RuntimeMethod_var)));
	}
}
// System.Object Fungus.iTween/<Start>d__237::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartU3Ed__237_System_Collections_IEnumerator_get_Current_m7530D5C2190DF0011881F1E025E3C80FFE3632C1 (U3CStartU3Ed__237_t30796C282C7F009FE6C7D904CFA28C6578C43D6A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void Fungus.Examples.ForceCursorVisible::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ForceCursorVisible_Update_m52EAC99532392E1BE84115901928C6B045EBC1D8 (ForceCursorVisible_t8D6C7F47EE42DF641EABA5C5775353C9C44EB9DC* __this, const RuntimeMethod* method) 
{
	int32_t G_B3_0 = 0;
	{
		// Cursor.visible = !CursorLocked;
		bool L_0 = __this->___CursorLocked_4;
		Cursor_set_visible_m612FCB2E86C15F91CE2E6148D1B556667954A2B7((bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0), NULL);
		// Cursor.lockState = CursorLocked ? CursorLockMode.Locked : CursorLockMode.None;
		bool L_1 = __this->___CursorLocked_4;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 1;
	}

IL_001a:
	{
		Cursor_set_lockState_mD81F6E5F3D86506FFB88567689A3A00A7AD242E9(G_B3_0, NULL);
		// }
		return;
	}
}
// System.Void Fungus.Examples.ForceCursorVisible::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ForceCursorVisible__ctor_mC939B5FFEC88BCFDB24D77B13F9B6572F2A9E837 (ForceCursorVisible_t8D6C7F47EE42DF641EABA5C5775353C9C44EB9DC* __this, const RuntimeMethod* method) 
{
	{
		// public bool CursorLocked = true;
		__this->___CursorLocked_4 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Fungus.Examples.FPDemoPriorityRouter::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FPDemoPriorityRouter_OnEnable_m8D9E83D73E405B6D3AFB932D1680250BBCD17644 (FPDemoPriorityRouter_tF1545EC7B335005449809DB5BA24CE3E07B2FB06* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FPDemoPriorityRouter_FungusPrioritySignals_OnFungusPriorityEnd_m0DB6E19C64729201D26136528DE7E25D40119792_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FPDemoPriorityRouter_FungusPrioritySignals_OnFungusPriorityStart_m88E657222178E5A39FCC6F14849BED5AB39C01A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FungusPriorityEndHandler_tD4464C9BB504FB669F4EB8F64962D2DBC16209CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FungusPriorityStartHandler_tAB020545CE74AD260CC69EF99E11C1FA871741ED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Fungus.FungusPrioritySignals.OnFungusPriorityStart += FungusPrioritySignals_OnFungusPriorityStart;
		FungusPriorityStartHandler_tAB020545CE74AD260CC69EF99E11C1FA871741ED* L_0 = (FungusPriorityStartHandler_tAB020545CE74AD260CC69EF99E11C1FA871741ED*)il2cpp_codegen_object_new(FungusPriorityStartHandler_tAB020545CE74AD260CC69EF99E11C1FA871741ED_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		FungusPriorityStartHandler__ctor_m3E8752B9CD8213B500A0B51C23B8B95D0BB1AF58(L_0, __this, (intptr_t)((void*)FPDemoPriorityRouter_FungusPrioritySignals_OnFungusPriorityStart_m88E657222178E5A39FCC6F14849BED5AB39C01A6_RuntimeMethod_var), NULL);
		FungusPrioritySignals_add_OnFungusPriorityStart_mC7CD802C8A19544CEC32EACDC83099924D4DEB91(L_0, NULL);
		// Fungus.FungusPrioritySignals.OnFungusPriorityEnd += FungusPrioritySignals_OnFungusPriorityEnd;
		FungusPriorityEndHandler_tD4464C9BB504FB669F4EB8F64962D2DBC16209CC* L_1 = (FungusPriorityEndHandler_tD4464C9BB504FB669F4EB8F64962D2DBC16209CC*)il2cpp_codegen_object_new(FungusPriorityEndHandler_tD4464C9BB504FB669F4EB8F64962D2DBC16209CC_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		FungusPriorityEndHandler__ctor_m0F9AC837AE5858B395D9CBAF06A9018E9F031E7D(L_1, __this, (intptr_t)((void*)FPDemoPriorityRouter_FungusPrioritySignals_OnFungusPriorityEnd_m0DB6E19C64729201D26136528DE7E25D40119792_RuntimeMethod_var), NULL);
		FungusPrioritySignals_add_OnFungusPriorityEnd_m53C89EC6E2E878CCDA205D0034C11CABDA5E2DFF(L_1, NULL);
		// }
		return;
	}
}
// System.Void Fungus.Examples.FPDemoPriorityRouter::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FPDemoPriorityRouter_OnDisable_mABA094B860B4408D21A71E3EF12AE4978B564728 (FPDemoPriorityRouter_tF1545EC7B335005449809DB5BA24CE3E07B2FB06* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FPDemoPriorityRouter_FungusPrioritySignals_OnFungusPriorityEnd_m0DB6E19C64729201D26136528DE7E25D40119792_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FPDemoPriorityRouter_FungusPrioritySignals_OnFungusPriorityStart_m88E657222178E5A39FCC6F14849BED5AB39C01A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FungusPriorityEndHandler_tD4464C9BB504FB669F4EB8F64962D2DBC16209CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FungusPriorityStartHandler_tAB020545CE74AD260CC69EF99E11C1FA871741ED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Fungus.FungusPrioritySignals.OnFungusPriorityStart -= FungusPrioritySignals_OnFungusPriorityStart;
		FungusPriorityStartHandler_tAB020545CE74AD260CC69EF99E11C1FA871741ED* L_0 = (FungusPriorityStartHandler_tAB020545CE74AD260CC69EF99E11C1FA871741ED*)il2cpp_codegen_object_new(FungusPriorityStartHandler_tAB020545CE74AD260CC69EF99E11C1FA871741ED_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		FungusPriorityStartHandler__ctor_m3E8752B9CD8213B500A0B51C23B8B95D0BB1AF58(L_0, __this, (intptr_t)((void*)FPDemoPriorityRouter_FungusPrioritySignals_OnFungusPriorityStart_m88E657222178E5A39FCC6F14849BED5AB39C01A6_RuntimeMethod_var), NULL);
		FungusPrioritySignals_remove_OnFungusPriorityStart_m9F0D534469D9D7C223328A1701655871584BB5B7(L_0, NULL);
		// Fungus.FungusPrioritySignals.OnFungusPriorityEnd -= FungusPrioritySignals_OnFungusPriorityEnd;
		FungusPriorityEndHandler_tD4464C9BB504FB669F4EB8F64962D2DBC16209CC* L_1 = (FungusPriorityEndHandler_tD4464C9BB504FB669F4EB8F64962D2DBC16209CC*)il2cpp_codegen_object_new(FungusPriorityEndHandler_tD4464C9BB504FB669F4EB8F64962D2DBC16209CC_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		FungusPriorityEndHandler__ctor_m0F9AC837AE5858B395D9CBAF06A9018E9F031E7D(L_1, __this, (intptr_t)((void*)FPDemoPriorityRouter_FungusPrioritySignals_OnFungusPriorityEnd_m0DB6E19C64729201D26136528DE7E25D40119792_RuntimeMethod_var), NULL);
		FungusPrioritySignals_remove_OnFungusPriorityEnd_mA3475C75BE0604C1DF6B2F58E7621BB85500B3AE(L_1, NULL);
		// }
		return;
	}
}
// System.Void Fungus.Examples.FPDemoPriorityRouter::FungusPrioritySignals_OnFungusPriorityEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FPDemoPriorityRouter_FungusPrioritySignals_OnFungusPriorityEnd_m0DB6E19C64729201D26136528DE7E25D40119792 (FPDemoPriorityRouter_tF1545EC7B335005449809DB5BA24CE3E07B2FB06* __this, const RuntimeMethod* method) 
{
	BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// foreach (var item in componentEnabledOutsideFungusPriority)
		BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA* L_0 = __this->___componentEnabledOutsideFungusPriority_4;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0018;
	}

IL_000b:
	{
		// foreach (var item in componentEnabledOutsideFungusPriority)
		BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// item.enabled = true;
		NullCheck(L_4);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_4, (bool)1, NULL);
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0018:
	{
		// foreach (var item in componentEnabledOutsideFungusPriority)
		int32_t L_6 = V_1;
		BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA* L_7 = V_0;
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// foreach (var item in componentEnabledInsideFungusPriority)
		BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA* L_8 = __this->___componentEnabledInsideFungusPriority_5;
		V_0 = L_8;
		V_1 = 0;
		goto IL_0036;
	}

IL_0029:
	{
		// foreach (var item in componentEnabledInsideFungusPriority)
		BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA* L_9 = V_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		// item.enabled = false;
		NullCheck(L_12);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_12, (bool)0, NULL);
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0036:
	{
		// foreach (var item in componentEnabledInsideFungusPriority)
		int32_t L_14 = V_1;
		BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA* L_15 = V_0;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))
		{
			goto IL_0029;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Fungus.Examples.FPDemoPriorityRouter::FungusPrioritySignals_OnFungusPriorityStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FPDemoPriorityRouter_FungusPrioritySignals_OnFungusPriorityStart_m88E657222178E5A39FCC6F14849BED5AB39C01A6 (FPDemoPriorityRouter_tF1545EC7B335005449809DB5BA24CE3E07B2FB06* __this, const RuntimeMethod* method) 
{
	BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// foreach (var item in componentEnabledOutsideFungusPriority)
		BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA* L_0 = __this->___componentEnabledOutsideFungusPriority_4;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0018;
	}

IL_000b:
	{
		// foreach (var item in componentEnabledOutsideFungusPriority)
		BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// item.enabled = false;
		NullCheck(L_4);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_4, (bool)0, NULL);
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0018:
	{
		// foreach (var item in componentEnabledOutsideFungusPriority)
		int32_t L_6 = V_1;
		BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA* L_7 = V_0;
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// foreach (var item in componentEnabledInsideFungusPriority)
		BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA* L_8 = __this->___componentEnabledInsideFungusPriority_5;
		V_0 = L_8;
		V_1 = 0;
		goto IL_0036;
	}

IL_0029:
	{
		// foreach (var item in componentEnabledInsideFungusPriority)
		BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA* L_9 = V_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		// item.enabled = true;
		NullCheck(L_12);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_12, (bool)1, NULL);
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0036:
	{
		// foreach (var item in componentEnabledInsideFungusPriority)
		int32_t L_14 = V_1;
		BehaviourU5BU5D_t18066727E4902C04B4FFBCEEAB25AAC13418F9AA* L_15 = V_0;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))
		{
			goto IL_0029;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Fungus.Examples.FPDemoPriorityRouter::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FPDemoPriorityRouter_Update_m78645650D3E4E92DE090D6477AF2906F36332015 (FPDemoPriorityRouter_tF1545EC7B335005449809DB5BA24CE3E07B2FB06* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Fungus.Examples.FPDemoPriorityRouter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FPDemoPriorityRouter__ctor_mC0ECEEEEF0B0C219142D2208AEEC335BCFF8AC50 (FPDemoPriorityRouter_tF1545EC7B335005449809DB5BA24CE3E07B2FB06* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Fungus.Examples.LookingAtDoor::ActivateNow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LookingAtDoor_ActivateNow_m306CF6C10502BB12E880732B17C72D5AD4904D96 (LookingAtDoor_t1C7EEC3EBEB9A4359DA0826B41BD86995ACBDF13* __this, const RuntimeMethod* method) 
{
	{
		// enabled = true;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Fungus.Examples.LookingAtDoor::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LookingAtDoor_Update_mC8EA010744FE10222FFCF83C8F574CE70E7C73C0 (LookingAtDoor_t1C7EEC3EBEB9A4359DA0826B41BD86995ACBDF13* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VariableReference_Set_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC32FA89D7DFCCBD4B43B29D25917345CB1F285D5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var curCounter = gazeCounter;
		float L_0 = __this->___gazeCounter_6;
		V_0 = L_0;
		// if (Physics.Raycast(eye.position, eye.forward, out hit))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___eye_8;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___eye_8;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_3, NULL);
		bool L_5;
		L_5 = Physics_Raycast_m1B27F500505FFB57D78548B9F5A540A2AD092903(L_2, L_4, (&V_1), NULL);
		if (!L_5)
		{
			goto IL_005b;
		}
	}
	{
		// if (hit.collider == doorCol)
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_6;
		L_6 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_1), NULL);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_7 = __this->___doorCol_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_6, L_7, NULL);
		if (!L_8)
		{
			goto IL_004e;
		}
	}
	{
		// gazeCounter += Time.deltaTime;
		float L_9 = __this->___gazeCounter_6;
		float L_10;
		L_10 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___gazeCounter_6 = ((float)il2cpp_codegen_add(L_9, L_10));
		goto IL_0066;
	}

IL_004e:
	{
		// gazeCounter = 0;
		__this->___gazeCounter_6 = (0.0f);
		goto IL_0066;
	}

IL_005b:
	{
		// gazeCounter = 0;
		__this->___gazeCounter_6 = (0.0f);
	}

IL_0066:
	{
		// if (gazeCounter >= gazeTime && curCounter <= gazeTime)
		float L_11 = __this->___gazeCounter_6;
		float L_12 = __this->___gazeTime_5;
		if ((!(((float)L_11) >= ((float)L_12))))
		{
			goto IL_0094;
		}
	}
	{
		float L_13 = V_0;
		float L_14 = __this->___gazeTime_5;
		if ((!(((float)L_13) <= ((float)L_14))))
		{
			goto IL_0094;
		}
	}
	{
		// runBlockWhenGazed.Execute();
		BlockReference_tAE6E703708E9DB285FAF4F4FE0B117ED6494A2E9* L_15 = (&__this->___runBlockWhenGazed_7);
		BlockReference_Execute_mD337D30B1BE2252FDE7792FF1EBF5B37EC532D9D(L_15, NULL);
		// fungusBoolHasGazed.Set(true);
		VariableReference_tAAFA74907030C6BDFD7750A0EEA16F6169FA6296* L_16 = (&__this->___fungusBoolHasGazed_9);
		VariableReference_Set_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC32FA89D7DFCCBD4B43B29D25917345CB1F285D5(L_16, (bool)1, VariableReference_Set_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC32FA89D7DFCCBD4B43B29D25917345CB1F285D5_RuntimeMethod_var);
	}

IL_0094:
	{
		// }
		return;
	}
}
// System.Void Fungus.Examples.LookingAtDoor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LookingAtDoor__ctor_m13B33539006515BA5C0047FEFBF32433CB069619 (LookingAtDoor_t1C7EEC3EBEB9A4359DA0826B41BD86995ACBDF13* __this, const RuntimeMethod* method) 
{
	{
		// public float gazeTime = 0.2f;
		__this->___gazeTime_5 = (0.200000003f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Fungus.Examples.SimpleForceMovement::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleForceMovement_FixedUpdate_m0F560FE2A1E259EB54F1185EF4BBC92534B7F83C (SimpleForceMovement_t446360AB3D40C1C52AC438942B3428327DABE47A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var forward = getForwardFrom.forward;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___getForwardFrom_5;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_0, NULL);
		V_0 = L_1;
		// forward.y = 0;
		(&V_0)->___y_3 = (0.0f);
		// forward.Normalize();
		Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline((&V_0), NULL);
		// var right = getForwardFrom.right;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___getForwardFrom_5;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_2, NULL);
		V_1 = L_3;
		// right.y = 0;
		(&V_1)->___y_3 = (0.0f);
		// right.Normalize();
		Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline((&V_1), NULL);
		// forward *= Input.GetAxis("Vertical");
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		float L_5;
		L_5 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_4, L_5, NULL);
		V_0 = L_6;
		// right *= Input.GetAxis("Horizontal");
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_1;
		float L_8;
		L_8 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_7, L_8, NULL);
		V_1 = L_9;
		// var movVec = forward + right;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_10, L_11, NULL);
		V_2 = L_12;
		// if (movVec.magnitude > 1)
		float L_13;
		L_13 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_2), NULL);
		if ((!(((float)L_13) > ((float)(1.0f)))))
		{
			goto IL_007e;
		}
	}
	{
		// movVec = movVec.normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_2), NULL);
		V_2 = L_14;
	}

IL_007e:
	{
		// rb.AddForce(movVec * forceScale);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_15 = __this->___rb_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_2;
		float L_17 = __this->___forceScale_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_16, L_17, NULL);
		NullCheck(L_15);
		Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198(L_15, L_18, NULL);
		// }
		return;
	}
}
// System.Void Fungus.Examples.SimpleForceMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleForceMovement__ctor_mE2FB285F41477198AD76C6F31A0CABD80FD304AA (SimpleForceMovement_t446360AB3D40C1C52AC438942B3428327DABE47A* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Fungus.Examples.SimpleMouseLook::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleMouseLook_Update_m644390D7716844F765D467F6E2783DC0972876B7 (SimpleMouseLook_t702EC407D24171F599C12B5366153E990021DF27* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var curEuler = target.localRotation.eulerAngles;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___target_7;
		NullCheck(L_0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_0, NULL);
		V_1 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_1), NULL);
		V_0 = L_2;
		// curEuler = new Vector3(pitch - Input.GetAxis("Mouse Y"), curEuler.y + Input.GetAxis("Mouse X"), 0);
		float L_3 = __this->___pitch_8;
		float L_4;
		L_4 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		float L_6 = L_5.___y_3;
		float L_7;
		L_7 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, NULL);
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), ((float)il2cpp_codegen_subtract(L_3, L_4)), ((float)il2cpp_codegen_add(L_6, L_7)), (0.0f), NULL);
		// curEuler.z = 0;
		(&V_0)->___z_4 = (0.0f);
		// curEuler.x = Mathf.Clamp(curEuler.x, -maxPitch, maxPitch);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_0;
		float L_9 = L_8.___x_2;
		float L_10 = __this->___maxPitch_6;
		float L_11 = __this->___maxPitch_6;
		float L_12;
		L_12 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_9, ((-L_10)), L_11, NULL);
		(&V_0)->___x_2 = L_12;
		// pitch = curEuler.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		float L_14 = L_13.___x_2;
		__this->___pitch_8 = L_14;
		// target.localRotation = Quaternion.Euler(curEuler);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = __this->___target_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17;
		L_17 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_16, NULL);
		NullCheck(L_15);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_15, L_17, NULL);
		// }
		return;
	}
}
// System.Void Fungus.Examples.SimpleMouseLook::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleMouseLook__ctor_mEEE687AD841FF6E0B09523A78423276737C79DF3 (SimpleMouseLook_t702EC407D24171F599C12B5366153E990021DF27* __this, const RuntimeMethod* method) 
{
	{
		// public float xsen = 1, ysen = 1;
		__this->___xsen_4 = (1.0f);
		// public float xsen = 1, ysen = 1;
		__this->___ysen_5 = (1.0f);
		// public float maxPitch = 60;
		__this->___maxPitch_6 = (60.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Fungus.Examples.SpriteColorChangeFromFungusMouseEvent::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteColorChangeFromFungusMouseEvent_Start_mA99983DAB297DFF37F36E0769A3D1655B24D96C8 (SpriteColorChangeFromFungusMouseEvent_t03CDE90637CD7519BF7004CEA25EFEA1EB82D2FD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rend = GetComponent<SpriteRenderer>();
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0;
		L_0 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		__this->___rend_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rend_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void Fungus.Examples.SpriteColorChangeFromFungusMouseEvent::OnMouseEventFromFungus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteColorChangeFromFungusMouseEvent_OnMouseEventFromFungus_m8B7DBEFA37797CB528314CB00181993D7254FB05 (SpriteColorChangeFromFungusMouseEvent_t03CDE90637CD7519BF7004CEA25EFEA1EB82D2FD* __this, const RuntimeMethod* method) 
{
	{
		// rend.color = Color.HSVToRGB(Random.value, Random.Range(0.7f, 0.9f), Random.Range(0.7f, 0.9f));
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___rend_4;
		float L_1;
		L_1 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		float L_2;
		L_2 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.699999988f), (0.899999976f), NULL);
		float L_3;
		L_3 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.699999988f), (0.899999976f), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = Color_HSVToRGB_m1E66966AAB74D56DB4D339B65E60E2AF435C8105_inline(L_1, L_2, L_3, NULL);
		NullCheck(L_0);
		SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546(L_0, L_4, NULL);
		// }
		return;
	}
}
// System.Void Fungus.Examples.SpriteColorChangeFromFungusMouseEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteColorChangeFromFungusMouseEvent__ctor_m28FC182742379A650E9EB2153707A6066BC72E3A (SpriteColorChangeFromFungusMouseEvent_t03CDE90637CD7519BF7004CEA25EFEA1EB82D2FD* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876 (String_t* ___s0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___s0;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		String_t* L_1 = ___s0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)((int32_t)L_3^(int32_t)L_4)), ((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___s0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_000d;
		}
	}

IL_002a:
	{
		uint32_t L_9 = V_0;
		return L_9;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TaskState_get_Running_m24E668075DB6EDF19B2111033B32AA1B7E752C6D_inline (TaskState_t9C7D0CA031D3949FC3A512CD8A07975D5B736B0E* __this, const RuntimeMethod* method) 
{
	{
		// return running;
		bool L_0 = __this->___running_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TaskState_get_Paused_mAC316E5ED9EBD17440E0486EF9FA6E382DCA6685_inline (TaskState_t9C7D0CA031D3949FC3A512CD8A07975D5B736B0E* __this, const RuntimeMethod* method) 
{
	{
		// return paused;
		bool L_0 = __this->___paused_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FinishedHandler_Invoke_m35697C6BE76B49B01707E04AF5064E1634812ED5_inline (FinishedHandler_t58AA6CB698B0DB5487EA8D4F74820B605E994045* __this, bool ___manual0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___manual0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FinishedHandler_Invoke_m7AF81046EE3C5A37385B2C3D99D6E79850288BF1_inline (FinishedHandler_tCD804764E46A1E8F97AAEB2CE2976D96A23CCE37* __this, bool ___manual0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___manual0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___f0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = floor(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___a0;
		int32_t L_1 = ___b1;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		int32_t L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a1;
		float L_1 = L_0.___x_2;
		float L_2 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a1;
		float L_4 = L_3.___y_3;
		float L_5 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a1;
		float L_7 = L_6.___z_4;
		float L_8 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this = L_6;
		goto IL_0038;
	}

IL_002d:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this = L_7;
	}

IL_0038:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, (57.2957802f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8(L_2, NULL);
		V_0 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___euler0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_HSVToRGB_m1E66966AAB74D56DB4D339B65E60E2AF435C8105_inline (float ___H0, float ___S1, float ___V2, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___H0;
		float L_1 = ___S1;
		float L_2 = ___V2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = Color_HSVToRGB_m8FA653F8C22366CB1AA90891822B889C59162AAF(L_0, L_1, L_2, (bool)1, NULL);
		V_0 = L_3;
		goto IL_000d;
	}

IL_000d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
