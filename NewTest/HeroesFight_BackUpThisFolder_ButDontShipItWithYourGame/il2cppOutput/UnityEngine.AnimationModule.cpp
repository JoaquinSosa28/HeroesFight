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
// System.Attribute
struct Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.List`1<UnityEngine.AnimatorClipInfo>
struct List_1_t34BD75698B68DE47D684862A345F6F9797CE3F9B;
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
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.InvalidCastException
struct InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA;
// System.InvalidOperationException
struct InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1;
// System.NullReferenceException
struct NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC;
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
// UnityEngine.AnimationEvent
struct AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F;
// UnityEngine.AnimationState
struct AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386;
// UnityEngine.Animations.NotKeyableAttribute
struct NotKeyableAttribute_tC0F8DAA85C33BBE045EFE59BB65D9A060D4282BE;
// UnityEngine.Animator
struct Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A;
// UnityEngine.AnimatorClipInfo[]
struct AnimatorClipInfoU5BU5D_tCAC39F9AE6CEE1EA08285D9D5C44DB3ADD6C1ED6;
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
IL2CPP_EXTERN_C RuntimeClass* Enumerator_t6F97AECE1A160A668D8D8798607BE29B1D8CD92C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral04E4E32AA834F9BA9336C5388E9470F196EB0891;
IL2CPP_EXTERN_C String_t* _stringLiteral18639651DF88482897994EC0002E1C17DE83E618;
IL2CPP_EXTERN_C String_t* _stringLiteral35482DF98E7DEED2FC6BDE9BDD1E273E27CF1F2C;
IL2CPP_EXTERN_C String_t* _stringLiteral4518459D262696CF9B5DAB1E0A1BC3AC2F9BD9DF;
IL2CPP_EXTERN_C String_t* _stringLiteral59BDBA16999CF4EF3F7712740907B2C5E860459C;
IL2CPP_EXTERN_C String_t* _stringLiteral5AC41F120EF58DC422B6F6060FB07C551C74A8F2;
IL2CPP_EXTERN_C String_t* _stringLiteral5F731C5A8B77F4284645D8155A226267126EA04E;
IL2CPP_EXTERN_C String_t* _stringLiteral6502516F734DD885173E353D47AAEB82BC7070A9;
IL2CPP_EXTERN_C String_t* _stringLiteral78BE72B5118B8A09F539AD4D79E3196A5DF77143;
IL2CPP_EXTERN_C String_t* _stringLiteral7E3996230D9AF0349B43FF7B536FC25AF0C19C71;
IL2CPP_EXTERN_C String_t* _stringLiteral80D2415BC2E4698D32F893A6DD1DCE1ED526D87B;
IL2CPP_EXTERN_C String_t* _stringLiteral89A50E4F5CC89A3DCF37354A9F39B7C5D00DD0F2;
IL2CPP_EXTERN_C String_t* _stringLiteral8B1A2B1D94748B4FC439CD95EA363FD6C35E27E4;
IL2CPP_EXTERN_C String_t* _stringLiteral996AD407094C3C79A8573A3CE4DD1E6B04789ECF;
IL2CPP_EXTERN_C String_t* _stringLiteral9D4CCA1595C30E43D23F14AEDF815846F837956A;
IL2CPP_EXTERN_C String_t* _stringLiteralB056C23ABE13788D588C6581A110FC216C552664;
IL2CPP_EXTERN_C String_t* _stringLiteralB47C26932C83DD7E0C54FC87EDDE2F3B50E5104C;
IL2CPP_EXTERN_C String_t* _stringLiteralB9DF0CBB713EC6E9DFD70C9BFB0B820148433428;
IL2CPP_EXTERN_C String_t* _stringLiteralC2ACAB5E124D2B5E2EDF7FBA3930A0441C66BBD4;
IL2CPP_EXTERN_C String_t* _stringLiteralC9A6558D555900A9696F7A5A8557A0CF8FCAC592;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE84CF4E03BE4B80890666511595220B5EC9F1949;
IL2CPP_EXTERN_C String_t* _stringLiteralEB24B3CAE28FFEAC51CF41288F0271D05E92514B;
IL2CPP_EXTERN_C String_t* _stringLiteralFADFD955EE80AFF43A02AE13CE1819415FEC24FB;
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
IL2CPP_EXTERN_C const RuntimeMethod* AnimationSceneHandleUtility_ValidateAndGetArrayCount_TisPropertySceneHandle_t6B1D7AD914B0A03E6CCFE48F32F800E1633FCF83_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m07A3F67998586E85AFDA4181E452452096903207_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationSceneHandleUtility_ValidateAndGetArrayCount_TisPropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mBC035DDE51BE9B405143A7BD36107A63E654BF8E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationScriptPlayable__ctor_mDA5EA55852F0A1079954B2DCB90398C4D7FFC412_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationStream_CheckIsValid_m5ECBEAA0E34ECE5B4C436B0D1057D2D4325B730B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimatorControllerPlayable_SetHandle_m2CAE8DABC4B19AB6BD90249D0D7FC7A9E07C3A96_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Animator_GetCurrentAnimatorClipInfo_m8625554630FDFEC6AD60E38B2CFD4D5B1DC6036F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Animator_GetNextAnimatorClipInfo_mA7E644BD404E93AE54AA61BBF9C6925485895A49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_GetUnsafePtr_TisPropertySceneHandle_t6B1D7AD914B0A03E6CCFE48F32F800E1633FCF83_m9F9021E8B32496521A27D08993C15C5B40271454_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_GetUnsafePtr_TisPropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766_m2103573BC63EE4AB06B1254263A88F802C93935D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_GetUnsafePtr_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mD5C24BE23E8637A704ACD06B5761CE157DAD8D88_RuntimeMethod_var;
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
IL2CPP_EXTERN_C const RuntimeMethod* PropertyStreamHandle_CheckIsValidAndResolve_m919463663B81254766D8C66C75B8B96DCBA56118_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyStreamHandle_GetBool_m3A2B9270C62E208F6D1F34FCD3E1BA70D0FCC269_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyStreamHandle_GetFloat_mE73B914FCB03B8ED2EC0DEBCC7EDEEC938859E4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyStreamHandle_GetInt_m82E002D7B34F8831669A080DDE5A3D3FB7715645_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyStreamHandle_SetBool_m86625B10F52EDE3B2C3461DE7175DF514A0B164C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyStreamHandle_SetFloat_mFD0CA0EDE51E8165015875C5CB2756EE7A44DA25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyStreamHandle_SetInt_m0A71E544F478D0E521E97B5880685DA82C44650B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TransformSceneHandle_CheckIsValid_m4630986C8242A24F4708F4F0E811B80EB50DBC26_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TransformStreamHandle_CheckIsValidAndResolve_m7FC913FA851165BD369844188B42410E5165C734_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t AnimationClipPlayable_CreateHandle_m9C5091FC6B92141016021B8D79906F3382332E38_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimationClipPlayable_Equals_m06BA3E1C3AE0CC205C8531CCF6596C99C8D927EE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimationClipPlayable__ctor_mEC2D160DE94DA6B775063CA8977DB9E5E0F134DC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimationEvent__ctor_m6C228EB716B6B53DE2665091C056428EFB90897F_MetadataUsageId;
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
IL2CPP_EXTERN_C const uint32_t AnimationSceneHandleUtility_ReadFloats_m6E59681A99E04E3D20360EBE412E0FDB5F1E1015_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimationScriptPlayable_CreateHandleInternal_m46D84FF0FD7C874D926D33DAC520E59F97B1D6AE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimationScriptPlayable_Equals_m4995D1AD353F43FE3FA854A8384601F58156E69E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimationScriptPlayable__cctor_m3FA9E1E2E1EADACBC718598BEFECB25F867E454E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimationScriptPlayable__ctor_mDA5EA55852F0A1079954B2DCB90398C4D7FFC412_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimationStreamHandleUtility_ReadFloats_m5AFD31C3EA33694DF3522B2E4DF1307353893863_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimationStreamHandleUtility_WriteFloats_mCCDDE5D0A0F7057548514D1B1285461B86A471C7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimationStream_CheckIsValid_m5ECBEAA0E34ECE5B4C436B0D1057D2D4325B730B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimationStream_get_isValid_mD441A5CB1A65CFCCE18DA6A42105632DEF21FECA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Animation_GetEnumerator_m1AA556FBFDF08728D25984E9C3123C187DC76191_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimatorControllerParameter_Equals_m71402007E47A2C82599B74BE7E95476B89838682_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimatorControllerParameter__ctor_mCCC1C8C5E13550B5745B4F10D0FCF6F948517797_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimatorControllerPlayable_Equals_m04685CCA5A5FC388A0387D3453A677C0CB47D173_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimatorControllerPlayable_SetHandle_m2CAE8DABC4B19AB6BD90249D0D7FC7A9E07C3A96_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimatorControllerPlayable__cctor_m6FCC197F3BF33EAFC37D5217617FCDC64E8B304E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AnimatorControllerPlayable__ctor_m739B1BFC592B6C160410141057F1B2BA1B971897_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Animator_GetCurrentAnimatorClipInfo_m8625554630FDFEC6AD60E38B2CFD4D5B1DC6036F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Animator_GetNextAnimatorClipInfo_mA7E644BD404E93AE54AA61BBF9C6925485895A49_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Motion__ctor_mAED8097767A0FD4F3B5A8E687D569E33DB6F8443_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyStreamHandle_CheckIsValidAndResolve_m919463663B81254766D8C66C75B8B96DCBA56118_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyStreamHandle_GetBool_m3A2B9270C62E208F6D1F34FCD3E1BA70D0FCC269_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyStreamHandle_GetFloat_mE73B914FCB03B8ED2EC0DEBCC7EDEEC938859E4C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyStreamHandle_GetInt_m82E002D7B34F8831669A080DDE5A3D3FB7715645_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyStreamHandle_SetBool_m86625B10F52EDE3B2C3461DE7175DF514A0B164C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyStreamHandle_SetFloat_mFD0CA0EDE51E8165015875C5CB2756EE7A44DA25_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyStreamHandle_SetInt_m0A71E544F478D0E521E97B5880685DA82C44650B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RuntimeAnimatorController__ctor_mF55B0DDD5700D725CD4E59521E5A16BD774ABC32_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TransformSceneHandle_CheckIsValid_m4630986C8242A24F4708F4F0E811B80EB50DBC26_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TransformStreamHandle_CheckIsValidAndResolve_m7FC913FA851165BD369844188B42410E5165C734_MetadataUsageId;
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


// System.Collections.Generic.List`1<UnityEngine.AnimatorClipInfo>
struct  List_1_t34BD75698B68DE47D684862A345F6F9797CE3F9B  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	AnimatorClipInfoU5BU5D_tCAC39F9AE6CEE1EA08285D9D5C44DB3ADD6C1ED6* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t34BD75698B68DE47D684862A345F6F9797CE3F9B, ____items_1)); }
	inline AnimatorClipInfoU5BU5D_tCAC39F9AE6CEE1EA08285D9D5C44DB3ADD6C1ED6* get__items_1() const { return ____items_1; }
	inline AnimatorClipInfoU5BU5D_tCAC39F9AE6CEE1EA08285D9D5C44DB3ADD6C1ED6** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(AnimatorClipInfoU5BU5D_tCAC39F9AE6CEE1EA08285D9D5C44DB3ADD6C1ED6* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t34BD75698B68DE47D684862A345F6F9797CE3F9B, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t34BD75698B68DE47D684862A345F6F9797CE3F9B, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t34BD75698B68DE47D684862A345F6F9797CE3F9B, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t34BD75698B68DE47D684862A345F6F9797CE3F9B_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	AnimatorClipInfoU5BU5D_tCAC39F9AE6CEE1EA08285D9D5C44DB3ADD6C1ED6* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t34BD75698B68DE47D684862A345F6F9797CE3F9B_StaticFields, ____emptyArray_5)); }
	inline AnimatorClipInfoU5BU5D_tCAC39F9AE6CEE1EA08285D9D5C44DB3ADD6C1ED6* get__emptyArray_5() const { return ____emptyArray_5; }
	inline AnimatorClipInfoU5BU5D_tCAC39F9AE6CEE1EA08285D9D5C44DB3ADD6C1ED6** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(AnimatorClipInfoU5BU5D_tCAC39F9AE6CEE1EA08285D9D5C44DB3ADD6C1ED6* value)
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


// UnityEngine.Animations.AnimationSceneHandleUtility
struct  AnimationSceneHandleUtility_t6232E425CC68072B7DA12B407E1DD30ABC036644  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Animations.AnimationStreamHandleUtility
struct  AnimationStreamHandleUtility_t8B24346934E05296D54DFB277DA10B8A76BF7321  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Animations.AnimatorJobExtensions
struct  AnimatorJobExtensions_tFEFB71D962A1600B2C5681428EE543169B971D63  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Experimental.Animations.AnimationPlayableOutputExtensions
struct  AnimationPlayableOutputExtensions_t40F97CE98DCE205232A8DD2134F2FBFB667C04B3  : public RuntimeObject
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


// System.UInt16
struct  UInt16_tAE45CEF73BF720100519F6867F32145D075F928E 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_tAE45CEF73BF720100519F6867F32145D075F928E, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
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


// UnityEngine.Animations.NotKeyableAttribute
struct  NotKeyableAttribute_tC0F8DAA85C33BBE045EFE59BB65D9A060D4282BE  : public Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74
{
public:

public:
};


// UnityEngine.Animations.PropertySceneHandle
struct  PropertySceneHandle_t6B1D7AD914B0A03E6CCFE48F32F800E1633FCF83 
{
public:
	// System.UInt32 UnityEngine.Animations.PropertySceneHandle::valid
	uint32_t ___valid_0;
	// System.Int32 UnityEngine.Animations.PropertySceneHandle::handleIndex
	int32_t ___handleIndex_1;

public:
	inline static int32_t get_offset_of_valid_0() { return static_cast<int32_t>(offsetof(PropertySceneHandle_t6B1D7AD914B0A03E6CCFE48F32F800E1633FCF83, ___valid_0)); }
	inline uint32_t get_valid_0() const { return ___valid_0; }
	inline uint32_t* get_address_of_valid_0() { return &___valid_0; }
	inline void set_valid_0(uint32_t value)
	{
		___valid_0 = value;
	}

	inline static int32_t get_offset_of_handleIndex_1() { return static_cast<int32_t>(offsetof(PropertySceneHandle_t6B1D7AD914B0A03E6CCFE48F32F800E1633FCF83, ___handleIndex_1)); }
	inline int32_t get_handleIndex_1() const { return ___handleIndex_1; }
	inline int32_t* get_address_of_handleIndex_1() { return &___handleIndex_1; }
	inline void set_handleIndex_1(int32_t value)
	{
		___handleIndex_1 = value;
	}
};


// UnityEngine.Animations.PropertyStreamHandle
struct  PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 
{
public:
	// System.UInt32 UnityEngine.Animations.PropertyStreamHandle::m_AnimatorBindingsVersion
	uint32_t ___m_AnimatorBindingsVersion_0;
	// System.Int32 UnityEngine.Animations.PropertyStreamHandle::handleIndex
	int32_t ___handleIndex_1;
	// System.Int32 UnityEngine.Animations.PropertyStreamHandle::valueArrayIndex
	int32_t ___valueArrayIndex_2;
	// System.Int32 UnityEngine.Animations.PropertyStreamHandle::bindType
	int32_t ___bindType_3;

public:
	inline static int32_t get_offset_of_m_AnimatorBindingsVersion_0() { return static_cast<int32_t>(offsetof(PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766, ___m_AnimatorBindingsVersion_0)); }
	inline uint32_t get_m_AnimatorBindingsVersion_0() const { return ___m_AnimatorBindingsVersion_0; }
	inline uint32_t* get_address_of_m_AnimatorBindingsVersion_0() { return &___m_AnimatorBindingsVersion_0; }
	inline void set_m_AnimatorBindingsVersion_0(uint32_t value)
	{
		___m_AnimatorBindingsVersion_0 = value;
	}

	inline static int32_t get_offset_of_handleIndex_1() { return static_cast<int32_t>(offsetof(PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766, ___handleIndex_1)); }
	inline int32_t get_handleIndex_1() const { return ___handleIndex_1; }
	inline int32_t* get_address_of_handleIndex_1() { return &___handleIndex_1; }
	inline void set_handleIndex_1(int32_t value)
	{
		___handleIndex_1 = value;
	}

	inline static int32_t get_offset_of_valueArrayIndex_2() { return static_cast<int32_t>(offsetof(PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766, ___valueArrayIndex_2)); }
	inline int32_t get_valueArrayIndex_2() const { return ___valueArrayIndex_2; }
	inline int32_t* get_address_of_valueArrayIndex_2() { return &___valueArrayIndex_2; }
	inline void set_valueArrayIndex_2(int32_t value)
	{
		___valueArrayIndex_2 = value;
	}

	inline static int32_t get_offset_of_bindType_3() { return static_cast<int32_t>(offsetof(PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766, ___bindType_3)); }
	inline int32_t get_bindType_3() const { return ___bindType_3; }
	inline int32_t* get_address_of_bindType_3() { return &___bindType_3; }
	inline void set_bindType_3(int32_t value)
	{
		___bindType_3 = value;
	}
};


// UnityEngine.Animations.TransformSceneHandle
struct  TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE 
{
public:
	// System.UInt32 UnityEngine.Animations.TransformSceneHandle::valid
	uint32_t ___valid_0;
	// System.Int32 UnityEngine.Animations.TransformSceneHandle::transformSceneHandleDefinitionIndex
	int32_t ___transformSceneHandleDefinitionIndex_1;

public:
	inline static int32_t get_offset_of_valid_0() { return static_cast<int32_t>(offsetof(TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE, ___valid_0)); }
	inline uint32_t get_valid_0() const { return ___valid_0; }
	inline uint32_t* get_address_of_valid_0() { return &___valid_0; }
	inline void set_valid_0(uint32_t value)
	{
		___valid_0 = value;
	}

	inline static int32_t get_offset_of_transformSceneHandleDefinitionIndex_1() { return static_cast<int32_t>(offsetof(TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE, ___transformSceneHandleDefinitionIndex_1)); }
	inline int32_t get_transformSceneHandleDefinitionIndex_1() const { return ___transformSceneHandleDefinitionIndex_1; }
	inline int32_t* get_address_of_transformSceneHandleDefinitionIndex_1() { return &___transformSceneHandleDefinitionIndex_1; }
	inline void set_transformSceneHandleDefinitionIndex_1(int32_t value)
	{
		___transformSceneHandleDefinitionIndex_1 = value;
	}
};


// UnityEngine.Animations.TransformStreamHandle
struct  TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA 
{
public:
	// System.UInt32 UnityEngine.Animations.TransformStreamHandle::m_AnimatorBindingsVersion
	uint32_t ___m_AnimatorBindingsVersion_0;
	// System.Int32 UnityEngine.Animations.TransformStreamHandle::handleIndex
	int32_t ___handleIndex_1;
	// System.Int32 UnityEngine.Animations.TransformStreamHandle::skeletonIndex
	int32_t ___skeletonIndex_2;

public:
	inline static int32_t get_offset_of_m_AnimatorBindingsVersion_0() { return static_cast<int32_t>(offsetof(TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA, ___m_AnimatorBindingsVersion_0)); }
	inline uint32_t get_m_AnimatorBindingsVersion_0() const { return ___m_AnimatorBindingsVersion_0; }
	inline uint32_t* get_address_of_m_AnimatorBindingsVersion_0() { return &___m_AnimatorBindingsVersion_0; }
	inline void set_m_AnimatorBindingsVersion_0(uint32_t value)
	{
		___m_AnimatorBindingsVersion_0 = value;
	}

	inline static int32_t get_offset_of_handleIndex_1() { return static_cast<int32_t>(offsetof(TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA, ___handleIndex_1)); }
	inline int32_t get_handleIndex_1() const { return ___handleIndex_1; }
	inline int32_t* get_address_of_handleIndex_1() { return &___handleIndex_1; }
	inline void set_handleIndex_1(int32_t value)
	{
		___handleIndex_1 = value;
	}

	inline static int32_t get_offset_of_skeletonIndex_2() { return static_cast<int32_t>(offsetof(TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA, ___skeletonIndex_2)); }
	inline int32_t get_skeletonIndex_2() const { return ___skeletonIndex_2; }
	inline int32_t* get_address_of_skeletonIndex_2() { return &___skeletonIndex_2; }
	inline void set_skeletonIndex_2(int32_t value)
	{
		___skeletonIndex_2 = value;
	}
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


// Unity.Collections.Allocator
struct  Allocator_t62A091275262E7067EAAD565B67764FA877D58D6 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t62A091275262E7067EAAD565B67764FA877D58D6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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


// UnityEngine.Animations.CustomStreamPropertyType
struct  CustomStreamPropertyType_tC1E4E3082190A26DE48594208C4A722BAEDAC7E3 
{
public:
	// System.Int32 UnityEngine.Animations.CustomStreamPropertyType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CustomStreamPropertyType_tC1E4E3082190A26DE48594208C4A722BAEDAC7E3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Animations.JobMethodIndex
struct  JobMethodIndex_t021DD781372CF57E36FEBC6C0A7502AB5082438B 
{
public:
	// System.Int32 UnityEngine.Animations.JobMethodIndex::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(JobMethodIndex_t021DD781372CF57E36FEBC6C0A7502AB5082438B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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


// UnityEngine.AnimatorCullingMode
struct  AnimatorCullingMode_t9E72A730F46CAED8736352678469610F391D22C9 
{
public:
	// System.Int32 UnityEngine.AnimatorCullingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AnimatorCullingMode_t9E72A730F46CAED8736352678469610F391D22C9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.AnimatorUpdateMode
struct  AnimatorUpdateMode_tDD2D2D131F4E5D2D2A5AF9EFDE368B1C1548EEA0 
{
public:
	// System.Int32 UnityEngine.AnimatorUpdateMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AnimatorUpdateMode_tDD2D2D131F4E5D2D2A5AF9EFDE368B1C1548EEA0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Experimental.Animations.AnimationStreamSource
struct  AnimationStreamSource_t9FFD51AB01E442153A51C494142FEE8DC7AA8FFA 
{
public:
	// System.Int32 UnityEngine.Experimental.Animations.AnimationStreamSource::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AnimationStreamSource_t9FFD51AB01E442153A51C494142FEE8DC7AA8FFA, ___value___2)); }
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

// UnityEngine.StateInfoIndex
struct  StateInfoIndex_tB33643A51F1038D1AA318A291031162A6A79814E 
{
public:
	// System.Int32 UnityEngine.StateInfoIndex::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StateInfoIndex_tB33643A51F1038D1AA318A291031162A6A79814E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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


// Unity.Collections.NativeArray`1<System.Single>
struct  NativeArray_1_t2820B165A0B411ADAF2EF375ADAC9855FAC68101 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t2820B165A0B411ADAF2EF375ADAC9855FAC68101, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t2820B165A0B411ADAF2EF375ADAC9855FAC68101, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t2820B165A0B411ADAF2EF375ADAC9855FAC68101, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Animations.PropertySceneHandle>
struct  NativeArray_1_t46C2AF2D6F4B51DEAA0B20F7D3BF2AF9294CAD2B 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t46C2AF2D6F4B51DEAA0B20F7D3BF2AF9294CAD2B, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t46C2AF2D6F4B51DEAA0B20F7D3BF2AF9294CAD2B, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t46C2AF2D6F4B51DEAA0B20F7D3BF2AF9294CAD2B, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Animations.PropertyStreamHandle>
struct  NativeArray_1_t880E6579DB313D2D24988BC175E0DFBBE193D141 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t880E6579DB313D2D24988BC175E0DFBBE193D141, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t880E6579DB313D2D24988BC175E0DFBBE193D141, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t880E6579DB313D2D24988BC175E0DFBBE193D141, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
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


// System.NullReferenceException
struct  NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
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
// System.Int32 UnityEngine.Animations.AnimationSceneHandleUtility::ValidateAndGetArrayCount<UnityEngine.Animations.PropertySceneHandle,System.Single>(UnityEngine.Animations.AnimationStream&,Unity.Collections.NativeArray`1<T0>,Unity.Collections.NativeArray`1<T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimationSceneHandleUtility_ValidateAndGetArrayCount_TisPropertySceneHandle_t6B1D7AD914B0A03E6CCFE48F32F800E1633FCF83_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m07A3F67998586E85AFDA4181E452452096903207_gshared (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, NativeArray_1_t46C2AF2D6F4B51DEAA0B20F7D3BF2AF9294CAD2B  ___handles1, NativeArray_1_t2820B165A0B411ADAF2EF375ADAC9855FAC68101  ___buffer2, const RuntimeMethod* method);
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<UnityEngine.Animations.PropertySceneHandle>(Unity.Collections.NativeArray`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisPropertySceneHandle_t6B1D7AD914B0A03E6CCFE48F32F800E1633FCF83_m9F9021E8B32496521A27D08993C15C5B40271454_gshared (NativeArray_1_t46C2AF2D6F4B51DEAA0B20F7D3BF2AF9294CAD2B  ___nativeArray0, const RuntimeMethod* method);
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<System.Single>(Unity.Collections.NativeArray`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mD5C24BE23E8637A704ACD06B5761CE157DAD8D88_gshared (NativeArray_1_t2820B165A0B411ADAF2EF375ADAC9855FAC68101  ___nativeArray0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationScriptPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_t1EDF8E51A9ED180BB012656916323FA4F68CA27E_m1767ADED196AAA8B4D6FBB9313003E33A967E799_gshared (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Animations.AnimationSceneHandleUtility::ValidateAndGetArrayCount<UnityEngine.Animations.PropertyStreamHandle,System.Single>(UnityEngine.Animations.AnimationStream&,Unity.Collections.NativeArray`1<T0>,Unity.Collections.NativeArray`1<T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimationSceneHandleUtility_ValidateAndGetArrayCount_TisPropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mBC035DDE51BE9B405143A7BD36107A63E654BF8E_gshared (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, NativeArray_1_t880E6579DB313D2D24988BC175E0DFBBE193D141  ___handles1, NativeArray_1_t2820B165A0B411ADAF2EF375ADAC9855FAC68101  ___buffer2, const RuntimeMethod* method);
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<UnityEngine.Animations.PropertyStreamHandle>(Unity.Collections.NativeArray`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisPropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766_m2103573BC63EE4AB06B1254263A88F802C93935D_gshared (NativeArray_1_t880E6579DB313D2D24988BC175E0DFBBE193D141  ___nativeArray0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimatorControllerPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B_mC6A8CB67F39B0B39BF77ED6177B3C2DF1BC91533_gshared (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, const RuntimeMethod* method);

// System.Void UnityEngine.Animation::INTERNAL_CALL_Stop(UnityEngine.Animation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animation_INTERNAL_CALL_Stop_mB618F3753B63E9FF2CB6A664E4AF849F95964A66 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * ___self0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animation::Play(UnityEngine.PlayMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animation_Play_mD134EE8853844F098E4D1F3F734CBE4C47C9B8B4 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, int32_t ___mode0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animation::PlayDefaultAnimation(UnityEngine.PlayMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animation_PlayDefaultAnimation_m406A78CA23531AF46EA6DEA35C436DB3CCB9CFE2 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, int32_t ___mode0, const RuntimeMethod* method);
// System.Void UnityEngine.Animation/Enumerator::.ctor(UnityEngine.Animation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mE90274D68218FACBF1EC2BBB177244F49E446E11 (Enumerator_t6F97AECE1A160A668D8D8798607BE29B1D8CD92C * __this, Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * ___outer0, const RuntimeMethod* method);
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
// System.Int32 UnityEngine.Animations.AnimationSceneHandleUtility::ValidateAndGetArrayCount<UnityEngine.Animations.PropertySceneHandle,System.Single>(UnityEngine.Animations.AnimationStream&,Unity.Collections.NativeArray`1<T0>,Unity.Collections.NativeArray`1<T1>)
inline int32_t AnimationSceneHandleUtility_ValidateAndGetArrayCount_TisPropertySceneHandle_t6B1D7AD914B0A03E6CCFE48F32F800E1633FCF83_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m07A3F67998586E85AFDA4181E452452096903207 (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, NativeArray_1_t46C2AF2D6F4B51DEAA0B20F7D3BF2AF9294CAD2B  ___handles1, NativeArray_1_t2820B165A0B411ADAF2EF375ADAC9855FAC68101  ___buffer2, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *, NativeArray_1_t46C2AF2D6F4B51DEAA0B20F7D3BF2AF9294CAD2B , NativeArray_1_t2820B165A0B411ADAF2EF375ADAC9855FAC68101 , const RuntimeMethod*))AnimationSceneHandleUtility_ValidateAndGetArrayCount_TisPropertySceneHandle_t6B1D7AD914B0A03E6CCFE48F32F800E1633FCF83_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m07A3F67998586E85AFDA4181E452452096903207_gshared)(___stream0, ___handles1, ___buffer2, method);
}
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<UnityEngine.Animations.PropertySceneHandle>(Unity.Collections.NativeArray`1<!!0>)
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisPropertySceneHandle_t6B1D7AD914B0A03E6CCFE48F32F800E1633FCF83_m9F9021E8B32496521A27D08993C15C5B40271454 (NativeArray_1_t46C2AF2D6F4B51DEAA0B20F7D3BF2AF9294CAD2B  ___nativeArray0, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t46C2AF2D6F4B51DEAA0B20F7D3BF2AF9294CAD2B , const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisPropertySceneHandle_t6B1D7AD914B0A03E6CCFE48F32F800E1633FCF83_m9F9021E8B32496521A27D08993C15C5B40271454_gshared)(___nativeArray0, method);
}
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<System.Single>(Unity.Collections.NativeArray`1<!!0>)
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mD5C24BE23E8637A704ACD06B5761CE157DAD8D88 (NativeArray_1_t2820B165A0B411ADAF2EF375ADAC9855FAC68101  ___nativeArray0, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t2820B165A0B411ADAF2EF375ADAC9855FAC68101 , const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mD5C24BE23E8637A704ACD06B5761CE157DAD8D88_gshared)(___nativeArray0, method);
}
// System.Void UnityEngine.Animations.AnimationSceneHandleUtility::ReadSceneFloatsInternal(UnityEngine.Animations.AnimationStream&,System.Void*,System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationSceneHandleUtility_ReadSceneFloatsInternal_m7D9201EE23FBAE5B54BA3A1BB15C7B2C68AD42A8 (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, void* ___propertySceneHandles1, void* ___floatBuffer2, int32_t ___count3, const RuntimeMethod* method);
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
// System.Boolean UnityEngine.Animations.AnimationScriptPlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.Playables.PlayableHandle&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationScriptPlayable_CreateHandleInternal_Injected_m79AF2D050E6A2399B27E2E52C2B2F264D8DDFB56 (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA * ___graph0, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * ___handle1, intptr_t ___jobReflectionData2, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Animations.AnimationStream::get_animatorBindingsVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AnimationStream_get_animatorBindingsVersion_m671E6BF2312FF421B3975F1442A0AB048663867A (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * __this, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.AnimationStream::get_isValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationStream_get_isValid_mD441A5CB1A65CFCCE18DA6A42105632DEF21FECA (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * __this, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706 (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.AnimationStream::CheckIsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationStream_CheckIsValid_m5ECBEAA0E34ECE5B4C436B0D1057D2D4325B730B (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Animations.AnimationStream::GetDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationStream_GetDeltaTime_mA157FDE6CBB333CD5D648F1A2D782C825B5B8796 (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Animations.AnimationStream::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationStream_get_deltaTime_mB93F4C48E68EF779A70B7B9FB9EB30299105AAEB (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Animations.AnimationStream::GetDeltaTime_Injected(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationStream_GetDeltaTime_Injected_m25FD435A54EC7404FA8DA3C87825917A493A4E7E (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ____unity_self0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Animations.AnimationSceneHandleUtility::ValidateAndGetArrayCount<UnityEngine.Animations.PropertyStreamHandle,System.Single>(UnityEngine.Animations.AnimationStream&,Unity.Collections.NativeArray`1<T0>,Unity.Collections.NativeArray`1<T1>)
inline int32_t AnimationSceneHandleUtility_ValidateAndGetArrayCount_TisPropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mBC035DDE51BE9B405143A7BD36107A63E654BF8E (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, NativeArray_1_t880E6579DB313D2D24988BC175E0DFBBE193D141  ___handles1, NativeArray_1_t2820B165A0B411ADAF2EF375ADAC9855FAC68101  ___buffer2, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *, NativeArray_1_t880E6579DB313D2D24988BC175E0DFBBE193D141 , NativeArray_1_t2820B165A0B411ADAF2EF375ADAC9855FAC68101 , const RuntimeMethod*))AnimationSceneHandleUtility_ValidateAndGetArrayCount_TisPropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mBC035DDE51BE9B405143A7BD36107A63E654BF8E_gshared)(___stream0, ___handles1, ___buffer2, method);
}
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<UnityEngine.Animations.PropertyStreamHandle>(Unity.Collections.NativeArray`1<!!0>)
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisPropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766_m2103573BC63EE4AB06B1254263A88F802C93935D (NativeArray_1_t880E6579DB313D2D24988BC175E0DFBBE193D141  ___nativeArray0, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t880E6579DB313D2D24988BC175E0DFBBE193D141 , const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisPropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766_m2103573BC63EE4AB06B1254263A88F802C93935D_gshared)(___nativeArray0, method);
}
// System.Void UnityEngine.Animations.AnimationStreamHandleUtility::WriteStreamFloatsInternal(UnityEngine.Animations.AnimationStream&,System.Void*,System.Void*,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationStreamHandleUtility_WriteStreamFloatsInternal_mFB36C783D14467744880D98C1A7491025DA071DE (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, void* ___propertyStreamHandles1, void* ___floatBuffer2, int32_t ___count3, bool ___useMask4, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.AnimationStreamHandleUtility::ReadStreamFloatsInternal(UnityEngine.Animations.AnimationStream&,System.Void*,System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationStreamHandleUtility_ReadStreamFloatsInternal_mBD95A1343EC9E8709E7EEB98385B54D3C13D2453 (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, void* ___propertyStreamHandles1, void* ___floatBuffer2, int32_t ___count3, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.AnimatorControllerPlayable::SetHandle(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorControllerPlayable_SetHandle_m2CAE8DABC4B19AB6BD90249D0D7FC7A9E07C3A96 (AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.AnimatorControllerPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorControllerPlayable__ctor_m739B1BFC592B6C160410141057F1B2BA1B971897 (AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimatorControllerPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimatorControllerPlayable_GetHandle_mB83731910E1534BECA36F64BA22AA68A71D08CA8 (AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimatorControllerPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B_mC6A8CB67F39B0B39BF77ED6177B3C2DF1BC91533 (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B_mC6A8CB67F39B0B39BF77ED6177B3C2DF1BC91533_gshared)(__this, method);
}
// System.Boolean UnityEngine.Animations.AnimatorControllerPlayable::Equals(UnityEngine.Animations.AnimatorControllerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimatorControllerPlayable_Equals_m04685CCA5A5FC388A0387D3453A677C0CB47D173 (AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B * __this, AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B  ___other0, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.AnimatorJobExtensions::InternalBindStreamTransform(UnityEngine.Animator,UnityEngine.Transform,UnityEngine.Animations.TransformStreamHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorJobExtensions_InternalBindStreamTransform_m2F4908C1E2BE9D4613579DBCBB9BEE398099202D (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___animator0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___transform1, TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * ___transformStreamHandle2, const RuntimeMethod* method);
// UnityEngine.Animations.PropertyStreamHandle UnityEngine.Animations.AnimatorJobExtensions::BindStreamProperty(UnityEngine.Animator,UnityEngine.Transform,System.Type,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766  AnimatorJobExtensions_BindStreamProperty_m1FD3D51762610F5468ACC864E1D84B2504CA9B4B (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___animator0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___transform1, Type_t * ___type2, String_t* ___property3, bool ___isObjectReference4, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.AnimatorJobExtensions::InternalBindCustomStreamProperty(UnityEngine.Animator,System.String,UnityEngine.Animations.CustomStreamPropertyType,UnityEngine.Animations.PropertyStreamHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorJobExtensions_InternalBindCustomStreamProperty_mF8146C5EEEA29AFBE40EE6CE775310ECEAEA73C9 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___animator0, String_t* ___property1, int32_t ___propertyType2, PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * ___propertyStreamHandle3, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.AnimatorJobExtensions::InternalBindStreamProperty(UnityEngine.Animator,UnityEngine.Transform,System.Type,System.String,System.Boolean,UnityEngine.Animations.PropertyStreamHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorJobExtensions_InternalBindStreamProperty_m3FC1ABD89AE97DBDBCCC174119EF39C043B2448F (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___animator0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___transform1, Type_t * ___type2, String_t* ___property3, bool ___isObjectReference4, PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * ___propertyStreamHandle5, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.AnimatorJobExtensions::InternalBindSceneTransform(UnityEngine.Animator,UnityEngine.Transform,UnityEngine.Animations.TransformSceneHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorJobExtensions_InternalBindSceneTransform_mCAB04DE3439BBC33AB1F0A34BB713FCED2A82893 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___animator0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___transform1, TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE * ___transformSceneHandle2, const RuntimeMethod* method);
// UnityEngine.Animations.PropertySceneHandle UnityEngine.Animations.AnimatorJobExtensions::BindSceneProperty(UnityEngine.Animator,UnityEngine.Transform,System.Type,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertySceneHandle_t6B1D7AD914B0A03E6CCFE48F32F800E1633FCF83  AnimatorJobExtensions_BindSceneProperty_mCA7CED39146FCF5D5523B71D179AD4E05CF8D7D7 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___animator0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___transform1, Type_t * ___type2, String_t* ___property3, bool ___isObjectReference4, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.AnimatorJobExtensions::InternalBindSceneProperty(UnityEngine.Animator,UnityEngine.Transform,System.Type,System.String,System.Boolean,UnityEngine.Animations.PropertySceneHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorJobExtensions_InternalBindSceneProperty_m78EDF0867ACC2ABDB3D58CAB7BC3EFE431EB24C0 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___animator0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___transform1, Type_t * ___type2, String_t* ___property3, bool ___isObjectReference4, PropertySceneHandle_t6B1D7AD914B0A03E6CCFE48F32F800E1633FCF83 * ___propertySceneHandle5, const RuntimeMethod* method);
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m45CAD4B01265CC84CC5A84F62EE2DBE85DE89EC0 (Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.PropertyStreamHandle::get_createdByNative()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyStreamHandle_get_createdByNative_m4350248E3B26A678EA95D787EA9862D25FA3785B (PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.PropertyStreamHandle::get_hasHandleIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyStreamHandle_get_hasHandleIndex_m75B8591FCABD11452D02778F636F388D123FFE34 (PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.PropertyStreamHandle::get_hasBindType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyStreamHandle_get_hasBindType_m013C3762387881B9B40A3FBA3F55743A56C7FDAA (PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.PropertyStreamHandle::IsValidInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyStreamHandle_IsValidInternal_m70BC5339A78E2F05E8C3A8A49C2B8ADA6E001349 (PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Animations.PropertyStreamHandle::get_animatorBindingsVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t PropertyStreamHandle_get_animatorBindingsVersion_m6DA0E4178744BD9A04FB4A4D108E23E12DCB9CF7 (PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.PropertyStreamHandle::IsSameVersionAsStream(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyStreamHandle_IsSameVersionAsStream_m4A1AF74DFB6BB83C5CAB4F1967EB32ECC025B8D1 (PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.PropertyStreamHandle::get_hasValueArrayIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyStreamHandle_get_hasValueArrayIndex_mBE9AC61E6F56DFB7A66674E512A28CB938C82F01 (PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.PropertyStreamHandle::IsResolvedInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyStreamHandle_IsResolvedInternal_mAD062C6DAF25BEED2EE14E08DD74AC5690ECC197 (PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.PropertyStreamHandle::ResolveInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_ResolveInternal_m6145BDDFFF45BB390FC40B3A9A4D4C77EB1578E0 (PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.PropertyStreamHandle::CheckIsValidAndResolve(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_CheckIsValidAndResolve_m919463663B81254766D8C66C75B8B96DCBA56118 (PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, const RuntimeMethod* method);
// System.Single UnityEngine.Animations.PropertyStreamHandle::GetFloatInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PropertyStreamHandle_GetFloatInternal_m4CBC8A3BC8CFCF3B62EC34FBE6867B2C13767858 (PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, const RuntimeMethod* method);
// System.Single UnityEngine.Animations.PropertyStreamHandle::GetFloat(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PropertyStreamHandle_GetFloat_mE73B914FCB03B8ED2EC0DEBCC7EDEEC938859E4C (PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.PropertyStreamHandle::SetFloatInternal(UnityEngine.Animations.AnimationStream&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_SetFloatInternal_m8097225456AC17DECC7497A3CB8EE844C97A4F94 (PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, float ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.PropertyStreamHandle::SetFloat(UnityEngine.Animations.AnimationStream,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_SetFloat_mFD0CA0EDE51E8165015875C5CB2756EE7A44DA25 (PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, float ___value1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Animations.PropertyStreamHandle::GetIntInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyStreamHandle_GetIntInternal_mBD853933458A95DA7622FAA11F0CCD030C63211A (PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Animations.PropertyStreamHandle::GetInt(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyStreamHandle_GetInt_m82E002D7B34F8831669A080DDE5A3D3FB7715645 (PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.PropertyStreamHandle::SetIntInternal(UnityEngine.Animations.AnimationStream&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_SetIntInternal_m6C46CEB96A743D4C25D48F4653CD1DA3DE6751DC (PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, int32_t ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.PropertyStreamHandle::SetInt(UnityEngine.Animations.AnimationStream,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_SetInt_m0A71E544F478D0E521E97B5880685DA82C44650B (PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, int32_t ___value1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.PropertyStreamHandle::GetBoolInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyStreamHandle_GetBoolInternal_m0401B558561C53FB5429EE727CFED8E6EDC1E8E3 (PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.PropertyStreamHandle::GetBool(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyStreamHandle_GetBool_m3A2B9270C62E208F6D1F34FCD3E1BA70D0FCC269 (PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.PropertyStreamHandle::SetBoolInternal(UnityEngine.Animations.AnimationStream&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_SetBoolInternal_m2E50B5B1AF0B7680D5C070AB36C13F4F1F0411E4 (PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, bool ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.PropertyStreamHandle::SetBool(UnityEngine.Animations.AnimationStream,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_SetBool_m86625B10F52EDE3B2C3461DE7175DF514A0B164C (PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, bool ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.PropertyStreamHandle::ResolveInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_ResolveInternal_Injected_m6961B389EFEE33F0F3AD8D137C12A86299370665 (PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * ____unity_self0, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream1, const RuntimeMethod* method);
// System.Single UnityEngine.Animations.PropertyStreamHandle::GetFloatInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PropertyStreamHandle_GetFloatInternal_Injected_m83747162B311EC592A63630F7D1D5793BF8A7F32 (PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * ____unity_self0, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream1, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.PropertyStreamHandle::SetFloatInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_SetFloatInternal_Injected_m1BD1EF3E8B9DDE42F0AF16B837885DD11651573A (PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * ____unity_self0, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream1, float ___value2, const RuntimeMethod* method);
// System.Int32 UnityEngine.Animations.PropertyStreamHandle::GetIntInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyStreamHandle_GetIntInternal_Injected_m99DE9C4B7778C7700D34DBE3BD370AB81AAD5F7D (PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * ____unity_self0, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream1, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.PropertyStreamHandle::SetIntInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_SetIntInternal_Injected_mD80062D588EE1E4B9217CD113F3AEA60809A84E3 (PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * ____unity_self0, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream1, int32_t ___value2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.PropertyStreamHandle::GetBoolInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyStreamHandle_GetBoolInternal_Injected_m651D43B9A18BE6AA3984A8F75E7D348DC7D2153C (PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * ____unity_self0, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream1, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.PropertyStreamHandle::SetBoolInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_SetBoolInternal_Injected_m5DA658A7A77CB174EC50EA90AE3EBF0B4471CF9F (PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * ____unity_self0, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream1, bool ___value2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.TransformSceneHandle::get_createdByNative()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformSceneHandle_get_createdByNative_m40D002BC57896E3735D68398A49C001510414796 (TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.TransformSceneHandle::get_hasTransformSceneHandleDefinitionIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformSceneHandle_get_hasTransformSceneHandleDefinitionIndex_m68FB3EC5708E42E2972899D1B2E803890C4FBE5B (TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.TransformSceneHandle::HasValidTransform(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformSceneHandle_HasValidTransform_mFFE6E19E047C059E898FC48AE4E59D25C6F79E6D (TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.TransformSceneHandle::IsValid(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformSceneHandle_IsValid_m85DF904BB53A4E243B8948C5F3CD16AE414BD699 (TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, const RuntimeMethod* method);
// System.Void System.NullReferenceException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullReferenceException__ctor_mAD32CA6CD05808ED531D14BA18B7AA1E99B8D349 (NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformSceneHandle::CheckIsValid(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_CheckIsValid_m4630986C8242A24F4708F4F0E811B80EB50DBC26 (TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Animations.TransformSceneHandle::GetPositionInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  TransformSceneHandle_GetPositionInternal_mAB45980E3BCF8B6B8B550B26E3B38B732B4009D5 (TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Animations.TransformSceneHandle::GetPosition(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  TransformSceneHandle_GetPosition_m1330618F4051BF69582470316CD8C1EAD250A329 (TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Animations.TransformSceneHandle::GetLocalPositionInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  TransformSceneHandle_GetLocalPositionInternal_m723C68328E7D895C901455DB15306CC5986D6C9C (TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Animations.TransformSceneHandle::GetLocalPosition(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  TransformSceneHandle_GetLocalPosition_m43D05DB2FEFBEB226C7B0E223179E80FD8D38EB2 (TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Animations.TransformSceneHandle::GetRotationInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  TransformSceneHandle_GetRotationInternal_m106CECBCBDBF9B05A9C33F0E208660E8CD200FE8 (TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Animations.TransformSceneHandle::GetRotation(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  TransformSceneHandle_GetRotation_mEF5B642E2FAE2916CE2DEA8B5D8CA57FB2EFBE41 (TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Animations.TransformSceneHandle::GetLocalRotationInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  TransformSceneHandle_GetLocalRotationInternal_mE00F32759F7E416B2FAC6B4F895089557CA92FE4 (TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Animations.TransformSceneHandle::GetLocalRotation(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  TransformSceneHandle_GetLocalRotation_m3B6EF70B43083EE152BD1B5C9EBBC6C53FE38096 (TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Animations.TransformSceneHandle::GetLocalScaleInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  TransformSceneHandle_GetLocalScaleInternal_m70AFC90AC9785F5C8C412211D4ECE24A76A92642 (TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Animations.TransformSceneHandle::GetLocalScale(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  TransformSceneHandle_GetLocalScale_m8E549ED87B594023B05752AB7FE66EE34BE9FEC4 (TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformSceneHandle::GetLocalTRSInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetLocalTRSInternal_m178C48F5DC71A9F2A894BC0FDD57C2278B530FC4 (TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___position1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___rotation2, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___scale3, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformSceneHandle::GetLocalTRS(UnityEngine.Animations.AnimationStream,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetLocalTRS_m10041EF297EA0571A8BDC429F0C31E804CE633CA (TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___position1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___rotation2, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___scale3, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformSceneHandle::GetGlobalTRInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetGlobalTRInternal_m690276981DC17EE88CEAE1A79284AF961EFF0D6B (TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___position1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___rotation2, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformSceneHandle::GetGlobalTR(UnityEngine.Animations.AnimationStream,UnityEngine.Vector3&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetGlobalTR_mDBA97A371576D8688679DDB76DD4696DE89BDA50 (TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___position1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___rotation2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.TransformSceneHandle::HasValidTransform_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformSceneHandle_HasValidTransform_Injected_mC73F1E280F2436FCA568B629BCE3F524626AA1F8 (TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE * ____unity_self0, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream1, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformSceneHandle::GetPositionInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetPositionInternal_Injected_mF06ADF4C1EF38B19D80B3D69C363FA9F8AD8A25C (TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE * ____unity_self0, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___ret2, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformSceneHandle::GetLocalPositionInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetLocalPositionInternal_Injected_m0F51D182F868A4ED4257F09C9F23FC1FEFA8029E (TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE * ____unity_self0, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___ret2, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformSceneHandle::GetRotationInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetRotationInternal_Injected_m66B07925B8B62EE83AC7633B63092C5D246C4C3A (TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE * ____unity_self0, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___ret2, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformSceneHandle::GetLocalRotationInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetLocalRotationInternal_Injected_m33EE148CA5AA598F690C98FCF400C1B8299A4405 (TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE * ____unity_self0, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___ret2, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformSceneHandle::GetLocalScaleInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetLocalScaleInternal_Injected_m109FD5EE987E70C8806ACAC02833039983358C98 (TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE * ____unity_self0, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___ret2, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformSceneHandle::GetLocalTRSInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetLocalTRSInternal_Injected_m2099DC51343F4CBFE37978732554ACC71AB62A2E (TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE * ____unity_self0, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___position2, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___rotation3, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___scale4, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformSceneHandle::GetGlobalTRInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetGlobalTRInternal_Injected_mB9ED01B266796CB6E11A496BC925018CE19F96F0 (TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE * ____unity_self0, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___position2, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___rotation3, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.TransformStreamHandle::IsValidInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformStreamHandle_IsValidInternal_m86BF214CB36D6586E4758B5EA1C5C3E18DC88D94 (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.TransformStreamHandle::IsValid(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformStreamHandle_IsValid_m197853087E658469914090BD081A09DDC4343D83 (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.TransformStreamHandle::get_createdByNative()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformStreamHandle_get_createdByNative_m92EA541EF2ABF69A7DBFA81E5F9A5B673E1215FA (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.TransformStreamHandle::get_hasHandleIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformStreamHandle_get_hasHandleIndex_m1BCFBD3F829E42F39336ECAB5A3ED920D5AE5FCA (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * __this, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Animations.TransformStreamHandle::get_animatorBindingsVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t TransformStreamHandle_get_animatorBindingsVersion_m936CCC3D29FE696EC869E7C65096F6B3285DD4E8 (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.TransformStreamHandle::IsSameVersionAsStream(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformStreamHandle_IsSameVersionAsStream_m3F45426A3549EB8BA30F2EA7A0D4C793164375BD (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.TransformStreamHandle::get_hasSkeletonIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformStreamHandle_get_hasSkeletonIndex_m6B43EE3D9F39194A708CE38153B1FC5E598B61A2 (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformStreamHandle::CheckIsValidAndResolve(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_CheckIsValidAndResolve_m7FC913FA851165BD369844188B42410E5165C734 (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformStreamHandle::Resolve(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_Resolve_m19EEA74D49CF92C6F34A9B3ECECB3F09B4249455 (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.TransformStreamHandle::IsResolvedInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformStreamHandle_IsResolvedInternal_mA8690266E15DADAFD1DE398231612111A6805E64 (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.TransformStreamHandle::IsResolved(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformStreamHandle_IsResolved_mDEF1219D376D07A2BBC6C021150D43586E69A680 (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformStreamHandle::ResolveInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_ResolveInternal_m80FEC2C13F206825E3D571B9554EEB2523470117 (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Animations.TransformStreamHandle::GetPositionInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  TransformStreamHandle_GetPositionInternal_m767CCB2133393B7167F8795C664BF67CCC190134 (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Animations.TransformStreamHandle::GetPosition(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  TransformStreamHandle_GetPosition_m65653976ACE78E84E5D68B95F6DE91D99837C3EA (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformStreamHandle::SetPositionInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetPositionInternal_mA92449965FE3633C4AF6B8D19A119BEB1746E178 (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformStreamHandle::SetPosition(UnityEngine.Animations.AnimationStream,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetPosition_mFAB284FF7694DF476D841A7F2260D95E17314D64 (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Animations.TransformStreamHandle::GetRotationInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  TransformStreamHandle_GetRotationInternal_m297ED19ED6403950E77337F9E7532BFD22BF910D (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Animations.TransformStreamHandle::GetRotation(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  TransformStreamHandle_GetRotation_m5976F111DE80AFC48DBD0FC6DD297DB10D4AC25A (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformStreamHandle::SetRotationInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetRotationInternal_m13C0D03842A835DF0750F8BAF636A3662ABCF3FE (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation1, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformStreamHandle::SetRotation(UnityEngine.Animations.AnimationStream,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetRotation_m04EDC6E66454A8C941EE7A53E75A4845F836313E (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Animations.TransformStreamHandle::GetLocalPositionInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  TransformStreamHandle_GetLocalPositionInternal_mC4EC23B89E8885D406BAE0B316089BD4DDBC635A (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Animations.TransformStreamHandle::GetLocalPosition(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  TransformStreamHandle_GetLocalPosition_m1799B993B6C0F35C818315EFB6E2DD775BF6C146 (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalPositionInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalPositionInternal_m5CB9C9AB2029C6222F65B3C4FE7167C36800896B (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalPosition(UnityEngine.Animations.AnimationStream,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalPosition_mEEF9D7EB0E86C33BC5E03FC611DBBB315FC2836E (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Animations.TransformStreamHandle::GetLocalRotationInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  TransformStreamHandle_GetLocalRotationInternal_m4BD48243A380DD27B125AAAF39D5AC366136C1D8 (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Animations.TransformStreamHandle::GetLocalRotation(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  TransformStreamHandle_GetLocalRotation_mAD692608ED84005E40A648A866E8BDC57058FAB3 (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalRotationInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalRotationInternal_m5972DD13AFBA62D7F6A1171DF32FBD6FB789841C (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation1, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalRotation(UnityEngine.Animations.AnimationStream,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalRotation_mA019ABD301F482E01A8770AAFAEF56416CDE0761 (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Animations.TransformStreamHandle::GetLocalScaleInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  TransformStreamHandle_GetLocalScaleInternal_m7496EDA26D7DCFD46BD29818D6F68D58F2FF940C (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Animations.TransformStreamHandle::GetLocalScale(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  TransformStreamHandle_GetLocalScale_m224ABDF52759535984855422BBEB6F9FB8F5D2D0 (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalScaleInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalScaleInternal_m680AEFF67365AE1DAE89578E5597F351BFCF9DB4 (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___scale1, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalScale(UnityEngine.Animations.AnimationStream,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalScale_m34D7CE2FBF969BB24CAE074E2FA319B3A2173EAD (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___scale1, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformStreamHandle::GetLocalTRSInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetLocalTRSInternal_mAD84818081AED48C7D60C51E50E0DC85363B7E47 (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___position1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___rotation2, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___scale3, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformStreamHandle::GetLocalTRS(UnityEngine.Animations.AnimationStream,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetLocalTRS_mFAC7B8C4AFABCD590FE3D4EA3F02F58CE1632263 (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___position1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___rotation2, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___scale3, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalTRSInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalTRSInternal_mA924B588373C2D5B400DACF6C30717AA2234E4D7 (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation2, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___scale3, bool ___useMask4, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalTRS(UnityEngine.Animations.AnimationStream,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalTRS_mD54A61DA747246AD7B2A24C5D8235572D611CD39 (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation2, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___scale3, bool ___useMask4, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformStreamHandle::GetGlobalTRInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetGlobalTRInternal_mC2ED094F8C020E1C6427EBDA829C5BA6CEE11CF0 (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___position1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___rotation2, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformStreamHandle::GetGlobalTR(UnityEngine.Animations.AnimationStream,UnityEngine.Vector3&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetGlobalTR_m7BD9A91EB330790EA6BB97C72F7040B8035CB67E (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___position1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___rotation2, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformStreamHandle::SetGlobalTRInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3,UnityEngine.Quaternion,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetGlobalTRInternal_mC28851D8585AD13FA12C323B9B51F25D571F3A7D (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation2, bool ___useMask3, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformStreamHandle::SetGlobalTR(UnityEngine.Animations.AnimationStream,UnityEngine.Vector3,UnityEngine.Quaternion,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetGlobalTR_m893562659AD944C98A32FB77D8822D6D958B9939 (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation2, bool ___useMask3, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformStreamHandle::ResolveInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_ResolveInternal_Injected_mA98CC041BB10581D1F36A5BB8AE676F5B94593D1 (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * ____unity_self0, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream1, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformStreamHandle::GetPositionInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetPositionInternal_Injected_m7E48A379AF9595A4D2D6AFE91109B3E124F396C5 (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * ____unity_self0, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___ret2, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformStreamHandle::SetPositionInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetPositionInternal_Injected_m387B6BC02A71152323AF8FA58D3FFF54364C942B (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * ____unity_self0, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___position2, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformStreamHandle::GetRotationInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetRotationInternal_Injected_m04DF6C6E8C57F96DFDCC9097837ADEDE6ECC30F1 (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * ____unity_self0, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___ret2, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformStreamHandle::SetRotationInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetRotationInternal_Injected_m1BA831FB1CC3B4B46EA185DAD9B34284B5156AC2 (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * ____unity_self0, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___rotation2, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformStreamHandle::GetLocalPositionInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetLocalPositionInternal_Injected_m3DF28A9FF4593F5AD258EEA0115E6ECA6891639A (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * ____unity_self0, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___ret2, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalPositionInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalPositionInternal_Injected_m0301437010F551F56454CFA1F64FBAEF88F8089B (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * ____unity_self0, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___position2, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformStreamHandle::GetLocalRotationInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetLocalRotationInternal_Injected_m400A9FD7C522A7634E9E5AEB484C348DD5F7CB92 (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * ____unity_self0, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___ret2, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalRotationInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalRotationInternal_Injected_m8E93D9230C35B900C70174068FDB66BCD6F4B03D (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * ____unity_self0, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___rotation2, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformStreamHandle::GetLocalScaleInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetLocalScaleInternal_Injected_m85084C2D0BEFADC5DEF6A7F13BD373A5E1839EEF (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * ____unity_self0, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___ret2, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalScaleInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalScaleInternal_Injected_mD4DA073078515690EB367155999CC6EB370EE446 (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * ____unity_self0, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___scale2, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformStreamHandle::GetLocalTRSInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetLocalTRSInternal_Injected_m681DBDE7D667893C129DD2A92193CACDCD9F5F84 (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * ____unity_self0, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___position2, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___rotation3, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___scale4, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalTRSInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalTRSInternal_Injected_m0F25FB7FA6F9721003D35E22AD5E228D2BD8E7A7 (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * ____unity_self0, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___position2, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___rotation3, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___scale4, bool ___useMask5, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformStreamHandle::GetGlobalTRInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetGlobalTRInternal_Injected_m45561ACABDB7FCFCED9114B02B354E139052876F (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * ____unity_self0, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___position2, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___rotation3, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.TransformStreamHandle::SetGlobalTRInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetGlobalTRInternal_Injected_m1E129F2DAF01FB7827263EB8C52FE4B14A4919BA (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * ____unity_self0, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___position2, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___rotation3, bool ___useMask4, const RuntimeMethod* method);
// System.Single UnityEngine.Animator::GetFloatString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_GetFloatString_mB1518F1964EE15625814C558BB3565330491F3C2 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Single UnityEngine.Animator::GetFloatID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_GetFloatID_m651CA5557BCABC522FAC92CF89CFE39240E82BD8 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___id0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetFloatString(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloatString_mE425F554C50682E41D362D7593B3B069609B7091 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, float ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetFloatStringDamp(System.String,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloatStringDamp_m2DFC0ED89DB0DBF202DF6A1A20D6A91CA6C20B70 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, float ___value1, float ___dampTime2, float ___deltaTime3, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetFloatID(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloatID_mC8049D4DC5D19929FF51172902E35D496F9EB805 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___id0, float ___value1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animator::GetBoolString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_GetBoolString_m8A5CDC7098636F88CA4DADCA80CCBAAFABECE8EC (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animator::GetBoolID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_GetBoolID_m69B15F09CC6076D1778A729FD2CF360C30666C1E (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___id0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetBoolString(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBoolString_mA61F1A44D13EF82A7C2CAF466EBA81E65D054D46 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetBoolID(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBoolID_m03BC09B1F267F9B07FF9F8EDDBAA4D0AA8D61EF0 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___id0, bool ___value1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Animator::GetIntegerID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_GetIntegerID_m7BE46FDFA31412B2F0F604989D1074381158ACF8 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___id0, const RuntimeMethod* method);
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
// System.Void UnityEngine.Animator::ResetTriggerID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_ResetTriggerID_m2E7AD9D9943EC2B4CF5D571197DC84D64F4DDEEB (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___id0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animator::IsParameterControlledByCurveID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_IsParameterControlledByCurveID_mBA13406D9BC43297A366EB83E1BA4A3F906E3A16 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___id0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::get_deltaPosition_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_get_deltaPosition_Injected_mB3C1937C55150A4E113BB2D8D6FEC323268C7BBA (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___ret0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::get_velocity_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_get_velocity_Injected_m48D33C181B2B87A5CCAA25FEC5D70F97C547996B (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___ret0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::GetAnimatorStateInfo(System.Int32,UnityEngine.StateInfoIndex,UnityEngine.AnimatorStateInfo&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_GetAnimatorStateInfo_mBDC199173734AF60218E4727E74F689180BC8D8B (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___layerIndex0, int32_t ___stateInfoIndex1, AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 * ___info2, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::GetAnimatorTransitionInfo(System.Int32,UnityEngine.AnimatorTransitionInfo&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_GetAnimatorTransitionInfo_m729E8495EC0CEC63E0968BDCFC92D72392589F48 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___layerIndex0, AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B * ___info1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Animator::GetAnimatorClipInfoCount(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_GetAnimatorClipInfoCount_m0C22B3029680BA11CA78809ECCB8AED1249D8D8E (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___layerIndex0, bool ___current1, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::GetAnimatorClipInfoInternal(System.Int32,System.Boolean,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_GetAnimatorClipInfoInternal_mD1DD5AC22F4A108D72E26E9CBCCC4FF8379E757E (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___layerIndex0, bool ___isCurrent1, RuntimeObject * ___clips2, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::Play(System.String,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_Play_m1942D7FB37F84959D2C6A859E11F70791E95FA50 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___stateName0, int32_t ___layer1, float ___normalizedTime2, const RuntimeMethod* method);
// System.Int32 UnityEngine.Animator::StringToHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_StringToHash_m80E4CCCB84AAD032A5D84EF5832B7F35C1E5AE3F (String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::Play(System.Int32,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_Play_m20B525F785DA59888E645125DB2DDC071E924F3E (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___stateNameHash0, int32_t ___layer1, float ___normalizedTime2, const RuntimeMethod* method);
// UnityEngine.AnimationClip UnityEngine.AnimatorClipInfo::InstanceIDToAnimationClipPPtr(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * AnimatorClipInfo_InstanceIDToAnimationClipPPtr_m84ABBDE6B5906BC43660E9885278035907AAC7EE (int32_t ___instanceID0, const RuntimeMethod* method);
// UnityEngine.AnimationClip UnityEngine.AnimatorClipInfo::get_clip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * AnimatorClipInfo_get_clip_mF5A49B54502CBFE17327989ED0701EDC23F1B2A4 (AnimatorClipInfo_t78457ABBA83D388EDFF26F436F5E61A29CF4E180 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.AnimatorClipInfo::get_weight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimatorClipInfo_get_weight_m1A1275CE522B4691DA88D618E1C40E57074795C6 (AnimatorClipInfo_t78457ABBA83D388EDFF26F436F5E61A29CF4E180 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.String UnityEngine.AnimatorControllerParameter::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AnimatorControllerParameter_get_name_mBC6037CF46E647026CF3AD51E76B4003A181EB60 (AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnOverrideControllerDirtyCallback_Invoke_m002CFC2CE3C42A058380BE98F015E654D5F9F177 (OnOverrideControllerDirtyCallback_t73560E6E30067C09BC58A15F9D2726051B077E2E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.AnimatorStateInfo::IsName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimatorStateInfo_IsName_mD133471910C1ACE0979F3FD11462C9B8BB24CA96 (AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Int32 UnityEngine.AnimatorStateInfo::get_fullPathHash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimatorStateInfo_get_fullPathHash_m2865A5467A1201025DAD3E58E420D0870CDF90C2 (AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.AnimatorStateInfo::get_nameHash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimatorStateInfo_get_nameHash_m290E8D6A9EDE89FC1410E44E380F5AE4F4E3EEC2 (AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.AnimatorStateInfo::get_shortNameHash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimatorStateInfo_get_shortNameHash_m36C7DCCCB2E03A06180CFC077C5B6FE6FCF4E31B (AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.AnimatorStateInfo::get_normalizedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimatorStateInfo_get_normalizedTime_m3AB6A2DB592BB9CA0B9A4EF8A382C4DF3F5F6BBD (AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_fullPathHash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimatorTransitionInfo_get_fullPathHash_mCB00E82B499A9F4084FEFFE8757F352541EA055E (AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_nameHash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimatorTransitionInfo_get_nameHash_m128B8297723ED8268678A8F1342090FED08A5680 (AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.Animations.AnimationPlayableOutputExtensions::InternalSetAnimationStreamSource(UnityEngine.Playables.PlayableOutputHandle,UnityEngine.Experimental.Animations.AnimationStreamSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableOutputExtensions_InternalSetAnimationStreamSource_mFC98549A1DD778A9F9B46EDEF1826C935E94A682 (PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  ___output0, int32_t ___streamSource1, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.Animations.AnimationPlayableOutputExtensions::InternalSetSortingOrder(UnityEngine.Playables.PlayableOutputHandle,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableOutputExtensions_InternalSetSortingOrder_mDF5CF3765C40736461105442956CC995BA5827E6 (PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  ___output0, int32_t ___sortingOrder1, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.Animations.AnimationPlayableOutputExtensions::InternalSetAnimationStreamSource_Injected(UnityEngine.Playables.PlayableOutputHandle&,UnityEngine.Experimental.Animations.AnimationStreamSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableOutputExtensions_InternalSetAnimationStreamSource_Injected_mE7B77D2F8C6FEAF850F0F9B8A8F70B2EF552EF18 (PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 * ___output0, int32_t ___streamSource1, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.Animations.AnimationPlayableOutputExtensions::InternalSetSortingOrder_Injected(UnityEngine.Playables.PlayableOutputHandle&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableOutputExtensions_InternalSetSortingOrder_Injected_m0ADAE73D663E356FCE84FAFD5D17D8507644257E (PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 * ___output0, int32_t ___sortingOrder1, const RuntimeMethod* method);
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
// System.Void UnityEngine.Animations.AnimationSceneHandleUtility::ReadFloats(UnityEngine.Animations.AnimationStream,Unity.Collections.NativeArray`1<UnityEngine.Animations.PropertySceneHandle>,Unity.Collections.NativeArray`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationSceneHandleUtility_ReadFloats_m6E59681A99E04E3D20360EBE412E0FDB5F1E1015 (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, NativeArray_1_t46C2AF2D6F4B51DEAA0B20F7D3BF2AF9294CAD2B  ___handles1, NativeArray_1_t2820B165A0B411ADAF2EF375ADAC9855FAC68101  ___buffer2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationSceneHandleUtility_ReadFloats_m6E59681A99E04E3D20360EBE412E0FDB5F1E1015_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		NativeArray_1_t46C2AF2D6F4B51DEAA0B20F7D3BF2AF9294CAD2B  L_0 = ___handles1;
		NativeArray_1_t2820B165A0B411ADAF2EF375ADAC9855FAC68101  L_1 = ___buffer2;
		int32_t L_2 = AnimationSceneHandleUtility_ValidateAndGetArrayCount_TisPropertySceneHandle_t6B1D7AD914B0A03E6CCFE48F32F800E1633FCF83_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m07A3F67998586E85AFDA4181E452452096903207((AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)(&___stream0), L_0, L_1, /*hidden argument*/AnimationSceneHandleUtility_ValidateAndGetArrayCount_TisPropertySceneHandle_t6B1D7AD914B0A03E6CCFE48F32F800E1633FCF83_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m07A3F67998586E85AFDA4181E452452096903207_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = V_0;
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0015;
		}
	}
	{
		goto IL_002a;
	}

IL_0015:
	{
		NativeArray_1_t46C2AF2D6F4B51DEAA0B20F7D3BF2AF9294CAD2B  L_5 = ___handles1;
		void* L_6 = NativeArrayUnsafeUtility_GetUnsafePtr_TisPropertySceneHandle_t6B1D7AD914B0A03E6CCFE48F32F800E1633FCF83_m9F9021E8B32496521A27D08993C15C5B40271454(L_5, /*hidden argument*/NativeArrayUnsafeUtility_GetUnsafePtr_TisPropertySceneHandle_t6B1D7AD914B0A03E6CCFE48F32F800E1633FCF83_m9F9021E8B32496521A27D08993C15C5B40271454_RuntimeMethod_var);
		NativeArray_1_t2820B165A0B411ADAF2EF375ADAC9855FAC68101  L_7 = ___buffer2;
		void* L_8 = NativeArrayUnsafeUtility_GetUnsafePtr_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mD5C24BE23E8637A704ACD06B5761CE157DAD8D88(L_7, /*hidden argument*/NativeArrayUnsafeUtility_GetUnsafePtr_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mD5C24BE23E8637A704ACD06B5761CE157DAD8D88_RuntimeMethod_var);
		int32_t L_9 = V_0;
		AnimationSceneHandleUtility_ReadSceneFloatsInternal_m7D9201EE23FBAE5B54BA3A1BB15C7B2C68AD42A8((AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)(&___stream0), (void*)(void*)L_6, (void*)(void*)L_8, L_9, /*hidden argument*/NULL);
	}

IL_002a:
	{
		return;
	}
}
// System.Void UnityEngine.Animations.AnimationSceneHandleUtility::ReadSceneFloatsInternal(UnityEngine.Animations.AnimationStream&,System.Void*,System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationSceneHandleUtility_ReadSceneFloatsInternal_m7D9201EE23FBAE5B54BA3A1BB15C7B2C68AD42A8 (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, void* ___propertySceneHandles1, void* ___floatBuffer2, int32_t ___count3, const RuntimeMethod* method)
{
	typedef void (*AnimationSceneHandleUtility_ReadSceneFloatsInternal_m7D9201EE23FBAE5B54BA3A1BB15C7B2C68AD42A8_ftn) (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *, void*, void*, int32_t);
	static AnimationSceneHandleUtility_ReadSceneFloatsInternal_m7D9201EE23FBAE5B54BA3A1BB15C7B2C68AD42A8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationSceneHandleUtility_ReadSceneFloatsInternal_m7D9201EE23FBAE5B54BA3A1BB15C7B2C68AD42A8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationSceneHandleUtility::ReadSceneFloatsInternal(UnityEngine.Animations.AnimationStream&,System.Void*,System.Void*,System.Int32)");
	_il2cpp_icall_func(___stream0, ___propertySceneHandles1, ___floatBuffer2, ___count3);
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
// UnityEngine.Playables.Playable UnityEngine.Animations.AnimationScriptPlayable::op_Implicit(UnityEngine.Animations.AnimationScriptPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  AnimationScriptPlayable_op_Implicit_mF11CA47D4C3BF987F053B23909C5691470867A7E (AnimationScriptPlayable_t1EDF8E51A9ED180BB012656916323FA4F68CA27E  ___playable0, const RuntimeMethod* method)
{
	Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = AnimationScriptPlayable_GetHandle_m661730E4C17F10A8D3C46492A9AD1D61EF0F4315((AnimationScriptPlayable_t1EDF8E51A9ED180BB012656916323FA4F68CA27E *)(&___playable0), /*hidden argument*/NULL);
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
// System.Boolean UnityEngine.Animations.AnimationScriptPlayable::CreateHandleInternal(UnityEngine.Playables.PlayableGraph,UnityEngine.Playables.PlayableHandle&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationScriptPlayable_CreateHandleInternal_m46D84FF0FD7C874D926D33DAC520E59F97B1D6AE (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  ___graph0, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * ___handle1, intptr_t ___jobReflectionData2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationScriptPlayable_CreateHandleInternal_m46D84FF0FD7C874D926D33DAC520E59F97B1D6AE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * L_0 = ___handle1;
		intptr_t L_1 = ___jobReflectionData2;
		IL2CPP_RUNTIME_CLASS_INIT(AnimationScriptPlayable_t1EDF8E51A9ED180BB012656916323FA4F68CA27E_il2cpp_TypeInfo_var);
		bool L_2 = AnimationScriptPlayable_CreateHandleInternal_Injected_m79AF2D050E6A2399B27E2E52C2B2F264D8DDFB56((PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA *)(&___graph0), (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)L_0, (intptr_t)L_1, /*hidden argument*/NULL);
		return L_2;
	}
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
// System.Boolean UnityEngine.Animations.AnimationScriptPlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.Playables.PlayableHandle&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationScriptPlayable_CreateHandleInternal_Injected_m79AF2D050E6A2399B27E2E52C2B2F264D8DDFB56 (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA * ___graph0, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * ___handle1, intptr_t ___jobReflectionData2, const RuntimeMethod* method)
{
	typedef bool (*AnimationScriptPlayable_CreateHandleInternal_Injected_m79AF2D050E6A2399B27E2E52C2B2F264D8DDFB56_ftn) (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA *, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *, intptr_t);
	static AnimationScriptPlayable_CreateHandleInternal_Injected_m79AF2D050E6A2399B27E2E52C2B2F264D8DDFB56_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationScriptPlayable_CreateHandleInternal_Injected_m79AF2D050E6A2399B27E2E52C2B2F264D8DDFB56_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationScriptPlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.Playables.PlayableHandle&,System.IntPtr)");
	bool retVal = _il2cpp_icall_func(___graph0, ___handle1, ___jobReflectionData2);
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
// System.UInt32 UnityEngine.Animations.AnimationStream::get_animatorBindingsVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AnimationStream_get_animatorBindingsVersion_m671E6BF2312FF421B3975F1442A0AB048663867A (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->get_m_AnimatorBindingsVersion_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  uint32_t AnimationStream_get_animatorBindingsVersion_m671E6BF2312FF421B3975F1442A0AB048663867A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * _thisAdjusted = reinterpret_cast<AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *>(__this + _offset);
	return AnimationStream_get_animatorBindingsVersion_m671E6BF2312FF421B3975F1442A0AB048663867A(_thisAdjusted, method);
}
// System.Boolean UnityEngine.Animations.AnimationStream::get_isValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationStream_get_isValid_mD441A5CB1A65CFCCE18DA6A42105632DEF21FECA (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationStream_get_isValid_mD441A5CB1A65CFCCE18DA6A42105632DEF21FECA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B7_0 = 0;
	{
		uint32_t L_0 = __this->get_m_AnimatorBindingsVersion_0();
		if ((!(((uint32_t)L_0) >= ((uint32_t)2))))
		{
			goto IL_0064;
		}
	}
	{
		intptr_t L_1 = __this->get_constant_1();
		bool L_2 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_1, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0064;
		}
	}
	{
		intptr_t L_3 = __this->get_input_2();
		bool L_4 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_3, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0064;
		}
	}
	{
		intptr_t L_5 = __this->get_output_3();
		bool L_6 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_5, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0064;
		}
	}
	{
		intptr_t L_7 = __this->get_workspace_4();
		bool L_8 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_7, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0064;
		}
	}
	{
		intptr_t L_9 = __this->get_animationHandleBinder_6();
		bool L_10 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_9, (intptr_t)(0), /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_10));
		goto IL_0065;
	}

IL_0064:
	{
		G_B7_0 = 0;
	}

IL_0065:
	{
		V_0 = (bool)G_B7_0;
		goto IL_0068;
	}

IL_0068:
	{
		bool L_11 = V_0;
		return L_11;
	}
}
IL2CPP_EXTERN_C  bool AnimationStream_get_isValid_mD441A5CB1A65CFCCE18DA6A42105632DEF21FECA_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * _thisAdjusted = reinterpret_cast<AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *>(__this + _offset);
	return AnimationStream_get_isValid_mD441A5CB1A65CFCCE18DA6A42105632DEF21FECA(_thisAdjusted, method);
}
// System.Void UnityEngine.Animations.AnimationStream::CheckIsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationStream_CheckIsValid_m5ECBEAA0E34ECE5B4C436B0D1057D2D4325B730B (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationStream_CheckIsValid_m5ECBEAA0E34ECE5B4C436B0D1057D2D4325B730B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		bool L_0 = AnimationStream_get_isValid_mD441A5CB1A65CFCCE18DA6A42105632DEF21FECA((AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_2 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_2, _stringLiteralC9A6558D555900A9696F7A5A8557A0CF8FCAC592, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, AnimationStream_CheckIsValid_m5ECBEAA0E34ECE5B4C436B0D1057D2D4325B730B_RuntimeMethod_var);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationStream_CheckIsValid_m5ECBEAA0E34ECE5B4C436B0D1057D2D4325B730B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * _thisAdjusted = reinterpret_cast<AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *>(__this + _offset);
	AnimationStream_CheckIsValid_m5ECBEAA0E34ECE5B4C436B0D1057D2D4325B730B(_thisAdjusted, method);
}
// System.Single UnityEngine.Animations.AnimationStream::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationStream_get_deltaTime_mB93F4C48E68EF779A70B7B9FB9EB30299105AAEB (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		AnimationStream_CheckIsValid_m5ECBEAA0E34ECE5B4C436B0D1057D2D4325B730B((AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)__this, /*hidden argument*/NULL);
		float L_0 = AnimationStream_GetDeltaTime_mA157FDE6CBB333CD5D648F1A2D782C825B5B8796((AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0011;
	}

IL_0011:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  float AnimationStream_get_deltaTime_mB93F4C48E68EF779A70B7B9FB9EB30299105AAEB_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * _thisAdjusted = reinterpret_cast<AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *>(__this + _offset);
	return AnimationStream_get_deltaTime_mB93F4C48E68EF779A70B7B9FB9EB30299105AAEB(_thisAdjusted, method);
}
// System.Single UnityEngine.Animations.AnimationStream::GetDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationStream_GetDeltaTime_mA157FDE6CBB333CD5D648F1A2D782C825B5B8796 (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * __this, const RuntimeMethod* method)
{
	{
		float L_0 = AnimationStream_GetDeltaTime_Injected_m25FD435A54EC7404FA8DA3C87825917A493A4E7E((AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)__this, /*hidden argument*/NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  float AnimationStream_GetDeltaTime_mA157FDE6CBB333CD5D648F1A2D782C825B5B8796_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * _thisAdjusted = reinterpret_cast<AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *>(__this + _offset);
	return AnimationStream_GetDeltaTime_mA157FDE6CBB333CD5D648F1A2D782C825B5B8796(_thisAdjusted, method);
}
// System.Single UnityEngine.Animations.AnimationStream::GetDeltaTime_Injected(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationStream_GetDeltaTime_Injected_m25FD435A54EC7404FA8DA3C87825917A493A4E7E (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ____unity_self0, const RuntimeMethod* method)
{
	typedef float (*AnimationStream_GetDeltaTime_Injected_m25FD435A54EC7404FA8DA3C87825917A493A4E7E_ftn) (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *);
	static AnimationStream_GetDeltaTime_Injected_m25FD435A54EC7404FA8DA3C87825917A493A4E7E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationStream_GetDeltaTime_Injected_m25FD435A54EC7404FA8DA3C87825917A493A4E7E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationStream::GetDeltaTime_Injected(UnityEngine.Animations.AnimationStream&)");
	float retVal = _il2cpp_icall_func(____unity_self0);
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
// System.Void UnityEngine.Animations.AnimationStreamHandleUtility::WriteFloats(UnityEngine.Animations.AnimationStream,Unity.Collections.NativeArray`1<UnityEngine.Animations.PropertyStreamHandle>,Unity.Collections.NativeArray`1<System.Single>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationStreamHandleUtility_WriteFloats_mCCDDE5D0A0F7057548514D1B1285461B86A471C7 (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, NativeArray_1_t880E6579DB313D2D24988BC175E0DFBBE193D141  ___handles1, NativeArray_1_t2820B165A0B411ADAF2EF375ADAC9855FAC68101  ___buffer2, bool ___useMask3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationStreamHandleUtility_WriteFloats_mCCDDE5D0A0F7057548514D1B1285461B86A471C7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		AnimationStream_CheckIsValid_m5ECBEAA0E34ECE5B4C436B0D1057D2D4325B730B((AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)(&___stream0), /*hidden argument*/NULL);
		NativeArray_1_t880E6579DB313D2D24988BC175E0DFBBE193D141  L_0 = ___handles1;
		NativeArray_1_t2820B165A0B411ADAF2EF375ADAC9855FAC68101  L_1 = ___buffer2;
		int32_t L_2 = AnimationSceneHandleUtility_ValidateAndGetArrayCount_TisPropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mBC035DDE51BE9B405143A7BD36107A63E654BF8E((AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)(&___stream0), L_0, L_1, /*hidden argument*/AnimationSceneHandleUtility_ValidateAndGetArrayCount_TisPropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mBC035DDE51BE9B405143A7BD36107A63E654BF8E_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = V_0;
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_001d;
		}
	}
	{
		goto IL_0033;
	}

IL_001d:
	{
		NativeArray_1_t880E6579DB313D2D24988BC175E0DFBBE193D141  L_5 = ___handles1;
		void* L_6 = NativeArrayUnsafeUtility_GetUnsafePtr_TisPropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766_m2103573BC63EE4AB06B1254263A88F802C93935D(L_5, /*hidden argument*/NativeArrayUnsafeUtility_GetUnsafePtr_TisPropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766_m2103573BC63EE4AB06B1254263A88F802C93935D_RuntimeMethod_var);
		NativeArray_1_t2820B165A0B411ADAF2EF375ADAC9855FAC68101  L_7 = ___buffer2;
		void* L_8 = NativeArrayUnsafeUtility_GetUnsafePtr_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mD5C24BE23E8637A704ACD06B5761CE157DAD8D88(L_7, /*hidden argument*/NativeArrayUnsafeUtility_GetUnsafePtr_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mD5C24BE23E8637A704ACD06B5761CE157DAD8D88_RuntimeMethod_var);
		int32_t L_9 = V_0;
		bool L_10 = ___useMask3;
		AnimationStreamHandleUtility_WriteStreamFloatsInternal_mFB36C783D14467744880D98C1A7491025DA071DE((AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)(&___stream0), (void*)(void*)L_6, (void*)(void*)L_8, L_9, L_10, /*hidden argument*/NULL);
	}

IL_0033:
	{
		return;
	}
}
// System.Void UnityEngine.Animations.AnimationStreamHandleUtility::ReadFloats(UnityEngine.Animations.AnimationStream,Unity.Collections.NativeArray`1<UnityEngine.Animations.PropertyStreamHandle>,Unity.Collections.NativeArray`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationStreamHandleUtility_ReadFloats_m5AFD31C3EA33694DF3522B2E4DF1307353893863 (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, NativeArray_1_t880E6579DB313D2D24988BC175E0DFBBE193D141  ___handles1, NativeArray_1_t2820B165A0B411ADAF2EF375ADAC9855FAC68101  ___buffer2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationStreamHandleUtility_ReadFloats_m5AFD31C3EA33694DF3522B2E4DF1307353893863_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		AnimationStream_CheckIsValid_m5ECBEAA0E34ECE5B4C436B0D1057D2D4325B730B((AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)(&___stream0), /*hidden argument*/NULL);
		NativeArray_1_t880E6579DB313D2D24988BC175E0DFBBE193D141  L_0 = ___handles1;
		NativeArray_1_t2820B165A0B411ADAF2EF375ADAC9855FAC68101  L_1 = ___buffer2;
		int32_t L_2 = AnimationSceneHandleUtility_ValidateAndGetArrayCount_TisPropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mBC035DDE51BE9B405143A7BD36107A63E654BF8E((AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)(&___stream0), L_0, L_1, /*hidden argument*/AnimationSceneHandleUtility_ValidateAndGetArrayCount_TisPropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mBC035DDE51BE9B405143A7BD36107A63E654BF8E_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = V_0;
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_001d;
		}
	}
	{
		goto IL_0032;
	}

IL_001d:
	{
		NativeArray_1_t880E6579DB313D2D24988BC175E0DFBBE193D141  L_5 = ___handles1;
		void* L_6 = NativeArrayUnsafeUtility_GetUnsafePtr_TisPropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766_m2103573BC63EE4AB06B1254263A88F802C93935D(L_5, /*hidden argument*/NativeArrayUnsafeUtility_GetUnsafePtr_TisPropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766_m2103573BC63EE4AB06B1254263A88F802C93935D_RuntimeMethod_var);
		NativeArray_1_t2820B165A0B411ADAF2EF375ADAC9855FAC68101  L_7 = ___buffer2;
		void* L_8 = NativeArrayUnsafeUtility_GetUnsafePtr_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mD5C24BE23E8637A704ACD06B5761CE157DAD8D88(L_7, /*hidden argument*/NativeArrayUnsafeUtility_GetUnsafePtr_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mD5C24BE23E8637A704ACD06B5761CE157DAD8D88_RuntimeMethod_var);
		int32_t L_9 = V_0;
		AnimationStreamHandleUtility_ReadStreamFloatsInternal_mBD95A1343EC9E8709E7EEB98385B54D3C13D2453((AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)(&___stream0), (void*)(void*)L_6, (void*)(void*)L_8, L_9, /*hidden argument*/NULL);
	}

IL_0032:
	{
		return;
	}
}
// System.Void UnityEngine.Animations.AnimationStreamHandleUtility::ReadStreamFloatsInternal(UnityEngine.Animations.AnimationStream&,System.Void*,System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationStreamHandleUtility_ReadStreamFloatsInternal_mBD95A1343EC9E8709E7EEB98385B54D3C13D2453 (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, void* ___propertyStreamHandles1, void* ___floatBuffer2, int32_t ___count3, const RuntimeMethod* method)
{
	typedef void (*AnimationStreamHandleUtility_ReadStreamFloatsInternal_mBD95A1343EC9E8709E7EEB98385B54D3C13D2453_ftn) (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *, void*, void*, int32_t);
	static AnimationStreamHandleUtility_ReadStreamFloatsInternal_mBD95A1343EC9E8709E7EEB98385B54D3C13D2453_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationStreamHandleUtility_ReadStreamFloatsInternal_mBD95A1343EC9E8709E7EEB98385B54D3C13D2453_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationStreamHandleUtility::ReadStreamFloatsInternal(UnityEngine.Animations.AnimationStream&,System.Void*,System.Void*,System.Int32)");
	_il2cpp_icall_func(___stream0, ___propertyStreamHandles1, ___floatBuffer2, ___count3);
}
// System.Void UnityEngine.Animations.AnimationStreamHandleUtility::WriteStreamFloatsInternal(UnityEngine.Animations.AnimationStream&,System.Void*,System.Void*,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationStreamHandleUtility_WriteStreamFloatsInternal_mFB36C783D14467744880D98C1A7491025DA071DE (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, void* ___propertyStreamHandles1, void* ___floatBuffer2, int32_t ___count3, bool ___useMask4, const RuntimeMethod* method)
{
	typedef void (*AnimationStreamHandleUtility_WriteStreamFloatsInternal_mFB36C783D14467744880D98C1A7491025DA071DE_ftn) (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *, void*, void*, int32_t, bool);
	static AnimationStreamHandleUtility_WriteStreamFloatsInternal_mFB36C783D14467744880D98C1A7491025DA071DE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationStreamHandleUtility_WriteStreamFloatsInternal_mFB36C783D14467744880D98C1A7491025DA071DE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationStreamHandleUtility::WriteStreamFloatsInternal(UnityEngine.Animations.AnimationStream&,System.Void*,System.Void*,System.Int32,System.Boolean)");
	_il2cpp_icall_func(___stream0, ___propertyStreamHandles1, ___floatBuffer2, ___count3, ___useMask4);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Animations.TransformStreamHandle UnityEngine.Animations.AnimatorJobExtensions::BindStreamTransform(UnityEngine.Animator,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA  AnimatorJobExtensions_BindStreamTransform_mF8A19DC5CF960D3C484761F727CA67863D58EA61 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___animator0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___transform1, const RuntimeMethod* method)
{
	TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA ));
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_0 = ___animator0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = ___transform1;
		AnimatorJobExtensions_InternalBindStreamTransform_m2F4908C1E2BE9D4613579DBCBB9BEE398099202D(L_0, L_1, (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *)(&V_0), /*hidden argument*/NULL);
		TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA  L_2 = V_0;
		V_1 = L_2;
		goto IL_0017;
	}

IL_0017:
	{
		TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA  L_3 = V_1;
		return L_3;
	}
}
// UnityEngine.Animations.PropertyStreamHandle UnityEngine.Animations.AnimatorJobExtensions::BindStreamProperty(UnityEngine.Animator,UnityEngine.Transform,System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766  AnimatorJobExtensions_BindStreamProperty_m20DCF532AD269D571487BC7C115298EB95FDFE12 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___animator0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___transform1, Type_t * ___type2, String_t* ___property3, const RuntimeMethod* method)
{
	PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_0 = ___animator0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = ___transform1;
		Type_t * L_2 = ___type2;
		String_t* L_3 = ___property3;
		PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766  L_4 = AnimatorJobExtensions_BindStreamProperty_m1FD3D51762610F5468ACC864E1D84B2504CA9B4B(L_0, L_1, L_2, L_3, (bool)0, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_000e;
	}

IL_000e:
	{
		PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766  L_5 = V_0;
		return L_5;
	}
}
// UnityEngine.Animations.PropertyStreamHandle UnityEngine.Animations.AnimatorJobExtensions::BindCustomStreamProperty(UnityEngine.Animator,System.String,UnityEngine.Animations.CustomStreamPropertyType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766  AnimatorJobExtensions_BindCustomStreamProperty_m17CF0D00EA8EC40DE3572EC28DE8FEEBE84D998C (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___animator0, String_t* ___property1, int32_t ___type2, const RuntimeMethod* method)
{
	PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766  V_0;
	memset((&V_0), 0, sizeof(V_0));
	PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 ));
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_0 = ___animator0;
		String_t* L_1 = ___property1;
		int32_t L_2 = ___type2;
		AnimatorJobExtensions_InternalBindCustomStreamProperty_mF8146C5EEEA29AFBE40EE6CE775310ECEAEA73C9(L_0, L_1, L_2, (PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 *)(&V_0), /*hidden argument*/NULL);
		PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766  L_3 = V_0;
		V_1 = L_3;
		goto IL_0018;
	}

IL_0018:
	{
		PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766  L_4 = V_1;
		return L_4;
	}
}
// UnityEngine.Animations.PropertyStreamHandle UnityEngine.Animations.AnimatorJobExtensions::BindStreamProperty(UnityEngine.Animator,UnityEngine.Transform,System.Type,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766  AnimatorJobExtensions_BindStreamProperty_m1FD3D51762610F5468ACC864E1D84B2504CA9B4B (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___animator0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___transform1, Type_t * ___type2, String_t* ___property3, bool ___isObjectReference4, const RuntimeMethod* method)
{
	PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766  V_0;
	memset((&V_0), 0, sizeof(V_0));
	PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 ));
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_0 = ___animator0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = ___transform1;
		Type_t * L_2 = ___type2;
		String_t* L_3 = ___property3;
		bool L_4 = ___isObjectReference4;
		AnimatorJobExtensions_InternalBindStreamProperty_m3FC1ABD89AE97DBDBCCC174119EF39C043B2448F(L_0, L_1, L_2, L_3, L_4, (PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 *)(&V_0), /*hidden argument*/NULL);
		PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766  L_5 = V_0;
		V_1 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766  L_6 = V_1;
		return L_6;
	}
}
// UnityEngine.Animations.TransformSceneHandle UnityEngine.Animations.AnimatorJobExtensions::BindSceneTransform(UnityEngine.Animator,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE  AnimatorJobExtensions_BindSceneTransform_mA28D20A6C9AA8F54152F9DF8811DDA7CE6CD875A (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___animator0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___transform1, const RuntimeMethod* method)
{
	TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE ));
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_0 = ___animator0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = ___transform1;
		AnimatorJobExtensions_InternalBindSceneTransform_mCAB04DE3439BBC33AB1F0A34BB713FCED2A82893(L_0, L_1, (TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE *)(&V_0), /*hidden argument*/NULL);
		TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE  L_2 = V_0;
		V_1 = L_2;
		goto IL_0017;
	}

IL_0017:
	{
		TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE  L_3 = V_1;
		return L_3;
	}
}
// UnityEngine.Animations.PropertySceneHandle UnityEngine.Animations.AnimatorJobExtensions::BindSceneProperty(UnityEngine.Animator,UnityEngine.Transform,System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertySceneHandle_t6B1D7AD914B0A03E6CCFE48F32F800E1633FCF83  AnimatorJobExtensions_BindSceneProperty_m8AC72C5726C802C8D4E38551B2D5DE7D46FF001B (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___animator0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___transform1, Type_t * ___type2, String_t* ___property3, const RuntimeMethod* method)
{
	PropertySceneHandle_t6B1D7AD914B0A03E6CCFE48F32F800E1633FCF83  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_0 = ___animator0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = ___transform1;
		Type_t * L_2 = ___type2;
		String_t* L_3 = ___property3;
		PropertySceneHandle_t6B1D7AD914B0A03E6CCFE48F32F800E1633FCF83  L_4 = AnimatorJobExtensions_BindSceneProperty_mCA7CED39146FCF5D5523B71D179AD4E05CF8D7D7(L_0, L_1, L_2, L_3, (bool)0, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_000e;
	}

IL_000e:
	{
		PropertySceneHandle_t6B1D7AD914B0A03E6CCFE48F32F800E1633FCF83  L_5 = V_0;
		return L_5;
	}
}
// UnityEngine.Animations.PropertySceneHandle UnityEngine.Animations.AnimatorJobExtensions::BindSceneProperty(UnityEngine.Animator,UnityEngine.Transform,System.Type,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertySceneHandle_t6B1D7AD914B0A03E6CCFE48F32F800E1633FCF83  AnimatorJobExtensions_BindSceneProperty_mCA7CED39146FCF5D5523B71D179AD4E05CF8D7D7 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___animator0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___transform1, Type_t * ___type2, String_t* ___property3, bool ___isObjectReference4, const RuntimeMethod* method)
{
	PropertySceneHandle_t6B1D7AD914B0A03E6CCFE48F32F800E1633FCF83  V_0;
	memset((&V_0), 0, sizeof(V_0));
	PropertySceneHandle_t6B1D7AD914B0A03E6CCFE48F32F800E1633FCF83  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(PropertySceneHandle_t6B1D7AD914B0A03E6CCFE48F32F800E1633FCF83 ));
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_0 = ___animator0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = ___transform1;
		Type_t * L_2 = ___type2;
		String_t* L_3 = ___property3;
		bool L_4 = ___isObjectReference4;
		AnimatorJobExtensions_InternalBindSceneProperty_m78EDF0867ACC2ABDB3D58CAB7BC3EFE431EB24C0(L_0, L_1, L_2, L_3, L_4, (PropertySceneHandle_t6B1D7AD914B0A03E6CCFE48F32F800E1633FCF83 *)(&V_0), /*hidden argument*/NULL);
		PropertySceneHandle_t6B1D7AD914B0A03E6CCFE48F32F800E1633FCF83  L_5 = V_0;
		V_1 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		PropertySceneHandle_t6B1D7AD914B0A03E6CCFE48F32F800E1633FCF83  L_6 = V_1;
		return L_6;
	}
}
// System.Void UnityEngine.Animations.AnimatorJobExtensions::InternalBindStreamTransform(UnityEngine.Animator,UnityEngine.Transform,UnityEngine.Animations.TransformStreamHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorJobExtensions_InternalBindStreamTransform_m2F4908C1E2BE9D4613579DBCBB9BEE398099202D (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___animator0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___transform1, TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * ___transformStreamHandle2, const RuntimeMethod* method)
{
	typedef void (*AnimatorJobExtensions_InternalBindStreamTransform_m2F4908C1E2BE9D4613579DBCBB9BEE398099202D_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *, TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *);
	static AnimatorJobExtensions_InternalBindStreamTransform_m2F4908C1E2BE9D4613579DBCBB9BEE398099202D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimatorJobExtensions_InternalBindStreamTransform_m2F4908C1E2BE9D4613579DBCBB9BEE398099202D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimatorJobExtensions::InternalBindStreamTransform(UnityEngine.Animator,UnityEngine.Transform,UnityEngine.Animations.TransformStreamHandle&)");
	_il2cpp_icall_func(___animator0, ___transform1, ___transformStreamHandle2);
}
// System.Void UnityEngine.Animations.AnimatorJobExtensions::InternalBindStreamProperty(UnityEngine.Animator,UnityEngine.Transform,System.Type,System.String,System.Boolean,UnityEngine.Animations.PropertyStreamHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorJobExtensions_InternalBindStreamProperty_m3FC1ABD89AE97DBDBCCC174119EF39C043B2448F (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___animator0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___transform1, Type_t * ___type2, String_t* ___property3, bool ___isObjectReference4, PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * ___propertyStreamHandle5, const RuntimeMethod* method)
{
	typedef void (*AnimatorJobExtensions_InternalBindStreamProperty_m3FC1ABD89AE97DBDBCCC174119EF39C043B2448F_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *, Type_t *, String_t*, bool, PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 *);
	static AnimatorJobExtensions_InternalBindStreamProperty_m3FC1ABD89AE97DBDBCCC174119EF39C043B2448F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimatorJobExtensions_InternalBindStreamProperty_m3FC1ABD89AE97DBDBCCC174119EF39C043B2448F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimatorJobExtensions::InternalBindStreamProperty(UnityEngine.Animator,UnityEngine.Transform,System.Type,System.String,System.Boolean,UnityEngine.Animations.PropertyStreamHandle&)");
	_il2cpp_icall_func(___animator0, ___transform1, ___type2, ___property3, ___isObjectReference4, ___propertyStreamHandle5);
}
// System.Void UnityEngine.Animations.AnimatorJobExtensions::InternalBindCustomStreamProperty(UnityEngine.Animator,System.String,UnityEngine.Animations.CustomStreamPropertyType,UnityEngine.Animations.PropertyStreamHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorJobExtensions_InternalBindCustomStreamProperty_mF8146C5EEEA29AFBE40EE6CE775310ECEAEA73C9 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___animator0, String_t* ___property1, int32_t ___propertyType2, PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * ___propertyStreamHandle3, const RuntimeMethod* method)
{
	typedef void (*AnimatorJobExtensions_InternalBindCustomStreamProperty_mF8146C5EEEA29AFBE40EE6CE775310ECEAEA73C9_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, String_t*, int32_t, PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 *);
	static AnimatorJobExtensions_InternalBindCustomStreamProperty_mF8146C5EEEA29AFBE40EE6CE775310ECEAEA73C9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimatorJobExtensions_InternalBindCustomStreamProperty_mF8146C5EEEA29AFBE40EE6CE775310ECEAEA73C9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimatorJobExtensions::InternalBindCustomStreamProperty(UnityEngine.Animator,System.String,UnityEngine.Animations.CustomStreamPropertyType,UnityEngine.Animations.PropertyStreamHandle&)");
	_il2cpp_icall_func(___animator0, ___property1, ___propertyType2, ___propertyStreamHandle3);
}
// System.Void UnityEngine.Animations.AnimatorJobExtensions::InternalBindSceneTransform(UnityEngine.Animator,UnityEngine.Transform,UnityEngine.Animations.TransformSceneHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorJobExtensions_InternalBindSceneTransform_mCAB04DE3439BBC33AB1F0A34BB713FCED2A82893 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___animator0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___transform1, TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE * ___transformSceneHandle2, const RuntimeMethod* method)
{
	typedef void (*AnimatorJobExtensions_InternalBindSceneTransform_mCAB04DE3439BBC33AB1F0A34BB713FCED2A82893_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *, TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE *);
	static AnimatorJobExtensions_InternalBindSceneTransform_mCAB04DE3439BBC33AB1F0A34BB713FCED2A82893_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimatorJobExtensions_InternalBindSceneTransform_mCAB04DE3439BBC33AB1F0A34BB713FCED2A82893_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimatorJobExtensions::InternalBindSceneTransform(UnityEngine.Animator,UnityEngine.Transform,UnityEngine.Animations.TransformSceneHandle&)");
	_il2cpp_icall_func(___animator0, ___transform1, ___transformSceneHandle2);
}
// System.Void UnityEngine.Animations.AnimatorJobExtensions::InternalBindSceneProperty(UnityEngine.Animator,UnityEngine.Transform,System.Type,System.String,System.Boolean,UnityEngine.Animations.PropertySceneHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorJobExtensions_InternalBindSceneProperty_m78EDF0867ACC2ABDB3D58CAB7BC3EFE431EB24C0 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___animator0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___transform1, Type_t * ___type2, String_t* ___property3, bool ___isObjectReference4, PropertySceneHandle_t6B1D7AD914B0A03E6CCFE48F32F800E1633FCF83 * ___propertySceneHandle5, const RuntimeMethod* method)
{
	typedef void (*AnimatorJobExtensions_InternalBindSceneProperty_m78EDF0867ACC2ABDB3D58CAB7BC3EFE431EB24C0_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *, Type_t *, String_t*, bool, PropertySceneHandle_t6B1D7AD914B0A03E6CCFE48F32F800E1633FCF83 *);
	static AnimatorJobExtensions_InternalBindSceneProperty_m78EDF0867ACC2ABDB3D58CAB7BC3EFE431EB24C0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimatorJobExtensions_InternalBindSceneProperty_m78EDF0867ACC2ABDB3D58CAB7BC3EFE431EB24C0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimatorJobExtensions::InternalBindSceneProperty(UnityEngine.Animator,UnityEngine.Transform,System.Type,System.String,System.Boolean,UnityEngine.Animations.PropertySceneHandle&)");
	_il2cpp_icall_func(___animator0, ___transform1, ___type2, ___property3, ___isObjectReference4, ___propertySceneHandle5);
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
// System.Void UnityEngine.Animations.NotKeyableAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotKeyableAttribute__ctor_m22EC4E60A34691F7BB217BB16922BD63A9A9E4EA (NotKeyableAttribute_tC0F8DAA85C33BBE045EFE59BB65D9A060D4282BE * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m45CAD4B01265CC84CC5A84F62EE2DBE85DE89EC0(__this, /*hidden argument*/NULL);
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
// System.Boolean UnityEngine.Animations.PropertyStreamHandle::IsValidInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyStreamHandle_IsValidInternal_m70BC5339A78E2F05E8C3A8A49C2B8ADA6E001349 (PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * L_0 = ___stream0;
		bool L_1 = AnimationStream_get_isValid_mD441A5CB1A65CFCCE18DA6A42105632DEF21FECA((AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		bool L_2 = PropertyStreamHandle_get_createdByNative_m4350248E3B26A678EA95D787EA9862D25FA3785B((PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 *)__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		bool L_3 = PropertyStreamHandle_get_hasHandleIndex_m75B8591FCABD11452D02778F636F388D123FFE34((PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 *)__this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		bool L_4 = PropertyStreamHandle_get_hasBindType_m013C3762387881B9B40A3FBA3F55743A56C7FDAA((PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 *)__this, /*hidden argument*/NULL);
		G_B5_0 = ((int32_t)(L_4));
		goto IL_0022;
	}

IL_0021:
	{
		G_B5_0 = 0;
	}

IL_0022:
	{
		V_0 = (bool)G_B5_0;
		goto IL_0025;
	}

IL_0025:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool PropertyStreamHandle_IsValidInternal_m70BC5339A78E2F05E8C3A8A49C2B8ADA6E001349_AdjustorThunk (RuntimeObject * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * _thisAdjusted = reinterpret_cast<PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 *>(__this + _offset);
	return PropertyStreamHandle_IsValidInternal_m70BC5339A78E2F05E8C3A8A49C2B8ADA6E001349(_thisAdjusted, ___stream0, method);
}
// System.Boolean UnityEngine.Animations.PropertyStreamHandle::get_createdByNative()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyStreamHandle_get_createdByNative_m4350248E3B26A678EA95D787EA9862D25FA3785B (PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		uint32_t L_0 = PropertyStreamHandle_get_animatorBindingsVersion_m6DA0E4178744BD9A04FB4A4D108E23E12DCB9CF7((PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 *)__this, /*hidden argument*/NULL);
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool PropertyStreamHandle_get_createdByNative_m4350248E3B26A678EA95D787EA9862D25FA3785B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * _thisAdjusted = reinterpret_cast<PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 *>(__this + _offset);
	return PropertyStreamHandle_get_createdByNative_m4350248E3B26A678EA95D787EA9862D25FA3785B(_thisAdjusted, method);
}
// System.Boolean UnityEngine.Animations.PropertyStreamHandle::IsSameVersionAsStream(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyStreamHandle_IsSameVersionAsStream_m4A1AF74DFB6BB83C5CAB4F1967EB32ECC025B8D1 (PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		uint32_t L_0 = PropertyStreamHandle_get_animatorBindingsVersion_m6DA0E4178744BD9A04FB4A4D108E23E12DCB9CF7((PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 *)__this, /*hidden argument*/NULL);
		AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * L_1 = ___stream0;
		uint32_t L_2 = AnimationStream_get_animatorBindingsVersion_m671E6BF2312FF421B3975F1442A0AB048663867A((AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)L_1, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_2))? 1 : 0);
		goto IL_0012;
	}

IL_0012:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool PropertyStreamHandle_IsSameVersionAsStream_m4A1AF74DFB6BB83C5CAB4F1967EB32ECC025B8D1_AdjustorThunk (RuntimeObject * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * _thisAdjusted = reinterpret_cast<PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 *>(__this + _offset);
	return PropertyStreamHandle_IsSameVersionAsStream_m4A1AF74DFB6BB83C5CAB4F1967EB32ECC025B8D1(_thisAdjusted, ___stream0, method);
}
// System.Boolean UnityEngine.Animations.PropertyStreamHandle::get_hasHandleIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyStreamHandle_get_hasHandleIndex_m75B8591FCABD11452D02778F636F388D123FFE34 (PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->get_handleIndex_1();
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0010;
	}

IL_0010:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool PropertyStreamHandle_get_hasHandleIndex_m75B8591FCABD11452D02778F636F388D123FFE34_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * _thisAdjusted = reinterpret_cast<PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 *>(__this + _offset);
	return PropertyStreamHandle_get_hasHandleIndex_m75B8591FCABD11452D02778F636F388D123FFE34(_thisAdjusted, method);
}
// System.Boolean UnityEngine.Animations.PropertyStreamHandle::get_hasValueArrayIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyStreamHandle_get_hasValueArrayIndex_mBE9AC61E6F56DFB7A66674E512A28CB938C82F01 (PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->get_valueArrayIndex_2();
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0010;
	}

IL_0010:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool PropertyStreamHandle_get_hasValueArrayIndex_mBE9AC61E6F56DFB7A66674E512A28CB938C82F01_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * _thisAdjusted = reinterpret_cast<PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 *>(__this + _offset);
	return PropertyStreamHandle_get_hasValueArrayIndex_mBE9AC61E6F56DFB7A66674E512A28CB938C82F01(_thisAdjusted, method);
}
// System.Boolean UnityEngine.Animations.PropertyStreamHandle::get_hasBindType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyStreamHandle_get_hasBindType_m013C3762387881B9B40A3FBA3F55743A56C7FDAA (PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->get_bindType_3();
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool PropertyStreamHandle_get_hasBindType_m013C3762387881B9B40A3FBA3F55743A56C7FDAA_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * _thisAdjusted = reinterpret_cast<PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 *>(__this + _offset);
	return PropertyStreamHandle_get_hasBindType_m013C3762387881B9B40A3FBA3F55743A56C7FDAA(_thisAdjusted, method);
}
// System.UInt32 UnityEngine.Animations.PropertyStreamHandle::get_animatorBindingsVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t PropertyStreamHandle_get_animatorBindingsVersion_m6DA0E4178744BD9A04FB4A4D108E23E12DCB9CF7 (PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->get_m_AnimatorBindingsVersion_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  uint32_t PropertyStreamHandle_get_animatorBindingsVersion_m6DA0E4178744BD9A04FB4A4D108E23E12DCB9CF7_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * _thisAdjusted = reinterpret_cast<PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 *>(__this + _offset);
	return PropertyStreamHandle_get_animatorBindingsVersion_m6DA0E4178744BD9A04FB4A4D108E23E12DCB9CF7(_thisAdjusted, method);
}
// System.Boolean UnityEngine.Animations.PropertyStreamHandle::IsResolvedInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyStreamHandle_IsResolvedInternal_mAD062C6DAF25BEED2EE14E08DD74AC5690ECC197 (PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * L_0 = ___stream0;
		bool L_1 = PropertyStreamHandle_IsValidInternal_m70BC5339A78E2F05E8C3A8A49C2B8ADA6E001349((PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * L_2 = ___stream0;
		bool L_3 = PropertyStreamHandle_IsSameVersionAsStream_m4A1AF74DFB6BB83C5CAB4F1967EB32ECC025B8D1((PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		bool L_4 = PropertyStreamHandle_get_hasValueArrayIndex_mBE9AC61E6F56DFB7A66674E512A28CB938C82F01((PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 *)__this, /*hidden argument*/NULL);
		G_B4_0 = ((int32_t)(L_4));
		goto IL_001c;
	}

IL_001b:
	{
		G_B4_0 = 0;
	}

IL_001c:
	{
		V_0 = (bool)G_B4_0;
		goto IL_001f;
	}

IL_001f:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool PropertyStreamHandle_IsResolvedInternal_mAD062C6DAF25BEED2EE14E08DD74AC5690ECC197_AdjustorThunk (RuntimeObject * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * _thisAdjusted = reinterpret_cast<PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 *>(__this + _offset);
	return PropertyStreamHandle_IsResolvedInternal_mAD062C6DAF25BEED2EE14E08DD74AC5690ECC197(_thisAdjusted, ___stream0, method);
}
// System.Void UnityEngine.Animations.PropertyStreamHandle::CheckIsValidAndResolve(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_CheckIsValidAndResolve_m919463663B81254766D8C66C75B8B96DCBA56118 (PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyStreamHandle_CheckIsValidAndResolve_m919463663B81254766D8C66C75B8B96DCBA56118_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B6_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B19_0 = 0;
	{
		AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * L_0 = ___stream0;
		AnimationStream_CheckIsValid_m5ECBEAA0E34ECE5B4C436B0D1057D2D4325B730B((AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)L_0, /*hidden argument*/NULL);
		AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * L_1 = ___stream0;
		bool L_2 = PropertyStreamHandle_IsResolvedInternal_mAD062C6DAF25BEED2EE14E08DD74AC5690ECC197((PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0015;
		}
	}
	{
		goto IL_0091;
	}

IL_0015:
	{
		bool L_4 = PropertyStreamHandle_get_createdByNative_m4350248E3B26A678EA95D787EA9862D25FA3785B((PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 *)__this, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		bool L_5 = PropertyStreamHandle_get_hasHandleIndex_m75B8591FCABD11452D02778F636F388D123FFE34((PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 *)__this, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		bool L_6 = PropertyStreamHandle_get_hasBindType_m013C3762387881B9B40A3FBA3F55743A56C7FDAA((PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 *)__this, /*hidden argument*/NULL);
		G_B6_0 = ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		goto IL_0031;
	}

IL_0030:
	{
		G_B6_0 = 1;
	}

IL_0031:
	{
		V_1 = (bool)G_B6_0;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0040;
		}
	}
	{
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_8 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_8, _stringLiteral5AC41F120EF58DC422B6F6060FB07C551C74A8F2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, PropertyStreamHandle_CheckIsValidAndResolve_m919463663B81254766D8C66C75B8B96DCBA56118_RuntimeMethod_var);
	}

IL_0040:
	{
		AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * L_9 = ___stream0;
		bool L_10 = PropertyStreamHandle_IsSameVersionAsStream_m4A1AF74DFB6BB83C5CAB4F1967EB32ECC025B8D1((PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_005f;
		}
	}
	{
		bool L_11 = PropertyStreamHandle_get_hasHandleIndex_m75B8591FCABD11452D02778F636F388D123FFE34((PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 *)__this, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_005c;
		}
	}
	{
		bool L_12 = PropertyStreamHandle_get_hasValueArrayIndex_mBE9AC61E6F56DFB7A66674E512A28CB938C82F01((PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 *)__this, /*hidden argument*/NULL);
		G_B12_0 = ((((int32_t)L_12) == ((int32_t)0))? 1 : 0);
		goto IL_005d;
	}

IL_005c:
	{
		G_B12_0 = 0;
	}

IL_005d:
	{
		G_B14_0 = G_B12_0;
		goto IL_0060;
	}

IL_005f:
	{
		G_B14_0 = 1;
	}

IL_0060:
	{
		V_2 = (bool)G_B14_0;
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_006e;
		}
	}
	{
		AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * L_14 = ___stream0;
		PropertyStreamHandle_ResolveInternal_m6145BDDFFF45BB390FC40B3A9A4D4C77EB1578E0((PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)L_14, /*hidden argument*/NULL);
	}

IL_006e:
	{
		bool L_15 = PropertyStreamHandle_get_hasHandleIndex_m75B8591FCABD11452D02778F636F388D123FFE34((PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 *)__this, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0081;
		}
	}
	{
		bool L_16 = PropertyStreamHandle_get_hasValueArrayIndex_mBE9AC61E6F56DFB7A66674E512A28CB938C82F01((PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 *)__this, /*hidden argument*/NULL);
		G_B19_0 = ((((int32_t)L_16) == ((int32_t)0))? 1 : 0);
		goto IL_0082;
	}

IL_0081:
	{
		G_B19_0 = 0;
	}

IL_0082:
	{
		V_3 = (bool)G_B19_0;
		bool L_17 = V_3;
		if (!L_17)
		{
			goto IL_0091;
		}
	}
	{
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_18 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_18, _stringLiteral80D2415BC2E4698D32F893A6DD1DCE1ED526D87B, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, PropertyStreamHandle_CheckIsValidAndResolve_m919463663B81254766D8C66C75B8B96DCBA56118_RuntimeMethod_var);
	}

IL_0091:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void PropertyStreamHandle_CheckIsValidAndResolve_m919463663B81254766D8C66C75B8B96DCBA56118_AdjustorThunk (RuntimeObject * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * _thisAdjusted = reinterpret_cast<PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 *>(__this + _offset);
	PropertyStreamHandle_CheckIsValidAndResolve_m919463663B81254766D8C66C75B8B96DCBA56118(_thisAdjusted, ___stream0, method);
}
// System.Single UnityEngine.Animations.PropertyStreamHandle::GetFloat(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PropertyStreamHandle_GetFloat_mE73B914FCB03B8ED2EC0DEBCC7EDEEC938859E4C (PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyStreamHandle_GetFloat_mE73B914FCB03B8ED2EC0DEBCC7EDEEC938859E4C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	{
		PropertyStreamHandle_CheckIsValidAndResolve_m919463663B81254766D8C66C75B8B96DCBA56118((PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)(&___stream0), /*hidden argument*/NULL);
		int32_t L_0 = __this->get_bindType_3();
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_2 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_2, _stringLiteralB056C23ABE13788D588C6581A110FC216C552664, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, PropertyStreamHandle_GetFloat_mE73B914FCB03B8ED2EC0DEBCC7EDEEC938859E4C_RuntimeMethod_var);
	}

IL_0025:
	{
		float L_3 = PropertyStreamHandle_GetFloatInternal_m4CBC8A3BC8CFCF3B62EC34FBE6867B2C13767858((PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)(&___stream0), /*hidden argument*/NULL);
		V_1 = L_3;
		goto IL_0030;
	}

IL_0030:
	{
		float L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  float PropertyStreamHandle_GetFloat_mE73B914FCB03B8ED2EC0DEBCC7EDEEC938859E4C_AdjustorThunk (RuntimeObject * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * _thisAdjusted = reinterpret_cast<PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 *>(__this + _offset);
	return PropertyStreamHandle_GetFloat_mE73B914FCB03B8ED2EC0DEBCC7EDEEC938859E4C(_thisAdjusted, ___stream0, method);
}
// System.Void UnityEngine.Animations.PropertyStreamHandle::SetFloat(UnityEngine.Animations.AnimationStream,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_SetFloat_mFD0CA0EDE51E8165015875C5CB2756EE7A44DA25 (PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, float ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyStreamHandle_SetFloat_mFD0CA0EDE51E8165015875C5CB2756EE7A44DA25_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PropertyStreamHandle_CheckIsValidAndResolve_m919463663B81254766D8C66C75B8B96DCBA56118((PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)(&___stream0), /*hidden argument*/NULL);
		int32_t L_0 = __this->get_bindType_3();
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_2 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_2, _stringLiteralEB24B3CAE28FFEAC51CF41288F0271D05E92514B, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, PropertyStreamHandle_SetFloat_mFD0CA0EDE51E8165015875C5CB2756EE7A44DA25_RuntimeMethod_var);
	}

IL_0025:
	{
		float L_3 = ___value1;
		PropertyStreamHandle_SetFloatInternal_m8097225456AC17DECC7497A3CB8EE844C97A4F94((PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)(&___stream0), L_3, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void PropertyStreamHandle_SetFloat_mFD0CA0EDE51E8165015875C5CB2756EE7A44DA25_AdjustorThunk (RuntimeObject * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, float ___value1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * _thisAdjusted = reinterpret_cast<PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 *>(__this + _offset);
	PropertyStreamHandle_SetFloat_mFD0CA0EDE51E8165015875C5CB2756EE7A44DA25(_thisAdjusted, ___stream0, ___value1, method);
}
// System.Int32 UnityEngine.Animations.PropertyStreamHandle::GetInt(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyStreamHandle_GetInt_m82E002D7B34F8831669A080DDE5A3D3FB7715645 (PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyStreamHandle_GetInt_m82E002D7B34F8831669A080DDE5A3D3FB7715645_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t G_B4_0 = 0;
	{
		PropertyStreamHandle_CheckIsValidAndResolve_m919463663B81254766D8C66C75B8B96DCBA56118((PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)(&___stream0), /*hidden argument*/NULL);
		int32_t L_0 = __this->get_bindType_3();
		if ((((int32_t)L_0) == ((int32_t)((int32_t)10))))
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_1 = __this->get_bindType_3();
		if ((((int32_t)L_1) == ((int32_t)((int32_t)11))))
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_2 = __this->get_bindType_3();
		G_B4_0 = ((((int32_t)((((int32_t)L_2) == ((int32_t)((int32_t)9)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_002e;
	}

IL_002d:
	{
		G_B4_0 = 0;
	}

IL_002e:
	{
		V_0 = (bool)G_B4_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_003d;
		}
	}
	{
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_4 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_4, _stringLiteralB056C23ABE13788D588C6581A110FC216C552664, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, PropertyStreamHandle_GetInt_m82E002D7B34F8831669A080DDE5A3D3FB7715645_RuntimeMethod_var);
	}

IL_003d:
	{
		int32_t L_5 = PropertyStreamHandle_GetIntInternal_mBD853933458A95DA7622FAA11F0CCD030C63211A((PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)(&___stream0), /*hidden argument*/NULL);
		V_1 = L_5;
		goto IL_0048;
	}

IL_0048:
	{
		int32_t L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C  int32_t PropertyStreamHandle_GetInt_m82E002D7B34F8831669A080DDE5A3D3FB7715645_AdjustorThunk (RuntimeObject * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * _thisAdjusted = reinterpret_cast<PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 *>(__this + _offset);
	return PropertyStreamHandle_GetInt_m82E002D7B34F8831669A080DDE5A3D3FB7715645(_thisAdjusted, ___stream0, method);
}
// System.Void UnityEngine.Animations.PropertyStreamHandle::SetInt(UnityEngine.Animations.AnimationStream,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_SetInt_m0A71E544F478D0E521E97B5880685DA82C44650B (PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, int32_t ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyStreamHandle_SetInt_m0A71E544F478D0E521E97B5880685DA82C44650B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		PropertyStreamHandle_CheckIsValidAndResolve_m919463663B81254766D8C66C75B8B96DCBA56118((PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)(&___stream0), /*hidden argument*/NULL);
		int32_t L_0 = __this->get_bindType_3();
		if ((((int32_t)L_0) == ((int32_t)((int32_t)10))))
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_1 = __this->get_bindType_3();
		if ((((int32_t)L_1) == ((int32_t)((int32_t)11))))
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_2 = __this->get_bindType_3();
		G_B4_0 = ((((int32_t)((((int32_t)L_2) == ((int32_t)((int32_t)9)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_002e;
	}

IL_002d:
	{
		G_B4_0 = 0;
	}

IL_002e:
	{
		V_0 = (bool)G_B4_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_003d;
		}
	}
	{
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_4 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_4, _stringLiteralEB24B3CAE28FFEAC51CF41288F0271D05E92514B, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, PropertyStreamHandle_SetInt_m0A71E544F478D0E521E97B5880685DA82C44650B_RuntimeMethod_var);
	}

IL_003d:
	{
		int32_t L_5 = ___value1;
		PropertyStreamHandle_SetIntInternal_m6C46CEB96A743D4C25D48F4653CD1DA3DE6751DC((PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)(&___stream0), L_5, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void PropertyStreamHandle_SetInt_m0A71E544F478D0E521E97B5880685DA82C44650B_AdjustorThunk (RuntimeObject * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, int32_t ___value1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * _thisAdjusted = reinterpret_cast<PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 *>(__this + _offset);
	PropertyStreamHandle_SetInt_m0A71E544F478D0E521E97B5880685DA82C44650B(_thisAdjusted, ___stream0, ___value1, method);
}
// System.Boolean UnityEngine.Animations.PropertyStreamHandle::GetBool(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyStreamHandle_GetBool_m3A2B9270C62E208F6D1F34FCD3E1BA70D0FCC269 (PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyStreamHandle_GetBool_m3A2B9270C62E208F6D1F34FCD3E1BA70D0FCC269_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		PropertyStreamHandle_CheckIsValidAndResolve_m919463663B81254766D8C66C75B8B96DCBA56118((PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)(&___stream0), /*hidden argument*/NULL);
		int32_t L_0 = __this->get_bindType_3();
		if ((((int32_t)L_0) == ((int32_t)6)))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_1 = __this->get_bindType_3();
		G_B3_0 = ((((int32_t)((((int32_t)L_1) == ((int32_t)7))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_3 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_3, _stringLiteralB056C23ABE13788D588C6581A110FC216C552664, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, PropertyStreamHandle_GetBool_m3A2B9270C62E208F6D1F34FCD3E1BA70D0FCC269_RuntimeMethod_var);
	}

IL_0031:
	{
		bool L_4 = PropertyStreamHandle_GetBoolInternal_m0401B558561C53FB5429EE727CFED8E6EDC1E8E3((PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)(&___stream0), /*hidden argument*/NULL);
		V_1 = L_4;
		goto IL_003c;
	}

IL_003c:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool PropertyStreamHandle_GetBool_m3A2B9270C62E208F6D1F34FCD3E1BA70D0FCC269_AdjustorThunk (RuntimeObject * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * _thisAdjusted = reinterpret_cast<PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 *>(__this + _offset);
	return PropertyStreamHandle_GetBool_m3A2B9270C62E208F6D1F34FCD3E1BA70D0FCC269(_thisAdjusted, ___stream0, method);
}
// System.Void UnityEngine.Animations.PropertyStreamHandle::SetBool(UnityEngine.Animations.AnimationStream,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_SetBool_m86625B10F52EDE3B2C3461DE7175DF514A0B164C (PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, bool ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyStreamHandle_SetBool_m86625B10F52EDE3B2C3461DE7175DF514A0B164C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		PropertyStreamHandle_CheckIsValidAndResolve_m919463663B81254766D8C66C75B8B96DCBA56118((PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)(&___stream0), /*hidden argument*/NULL);
		int32_t L_0 = __this->get_bindType_3();
		if ((((int32_t)L_0) == ((int32_t)6)))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_1 = __this->get_bindType_3();
		G_B3_0 = ((((int32_t)((((int32_t)L_1) == ((int32_t)7))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_3 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_3, _stringLiteralEB24B3CAE28FFEAC51CF41288F0271D05E92514B, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, PropertyStreamHandle_SetBool_m86625B10F52EDE3B2C3461DE7175DF514A0B164C_RuntimeMethod_var);
	}

IL_0031:
	{
		bool L_4 = ___value1;
		PropertyStreamHandle_SetBoolInternal_m2E50B5B1AF0B7680D5C070AB36C13F4F1F0411E4((PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)(&___stream0), L_4, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void PropertyStreamHandle_SetBool_m86625B10F52EDE3B2C3461DE7175DF514A0B164C_AdjustorThunk (RuntimeObject * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, bool ___value1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * _thisAdjusted = reinterpret_cast<PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 *>(__this + _offset);
	PropertyStreamHandle_SetBool_m86625B10F52EDE3B2C3461DE7175DF514A0B164C(_thisAdjusted, ___stream0, ___value1, method);
}
// System.Void UnityEngine.Animations.PropertyStreamHandle::ResolveInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_ResolveInternal_m6145BDDFFF45BB390FC40B3A9A4D4C77EB1578E0 (PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, const RuntimeMethod* method)
{
	{
		AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * L_0 = ___stream0;
		PropertyStreamHandle_ResolveInternal_Injected_m6961B389EFEE33F0F3AD8D137C12A86299370665((PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)L_0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void PropertyStreamHandle_ResolveInternal_m6145BDDFFF45BB390FC40B3A9A4D4C77EB1578E0_AdjustorThunk (RuntimeObject * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * _thisAdjusted = reinterpret_cast<PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 *>(__this + _offset);
	PropertyStreamHandle_ResolveInternal_m6145BDDFFF45BB390FC40B3A9A4D4C77EB1578E0(_thisAdjusted, ___stream0, method);
}
// System.Single UnityEngine.Animations.PropertyStreamHandle::GetFloatInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PropertyStreamHandle_GetFloatInternal_m4CBC8A3BC8CFCF3B62EC34FBE6867B2C13767858 (PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, const RuntimeMethod* method)
{
	{
		AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * L_0 = ___stream0;
		float L_1 = PropertyStreamHandle_GetFloatInternal_Injected_m83747162B311EC592A63630F7D1D5793BF8A7F32((PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  float PropertyStreamHandle_GetFloatInternal_m4CBC8A3BC8CFCF3B62EC34FBE6867B2C13767858_AdjustorThunk (RuntimeObject * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * _thisAdjusted = reinterpret_cast<PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 *>(__this + _offset);
	return PropertyStreamHandle_GetFloatInternal_m4CBC8A3BC8CFCF3B62EC34FBE6867B2C13767858(_thisAdjusted, ___stream0, method);
}
// System.Void UnityEngine.Animations.PropertyStreamHandle::SetFloatInternal(UnityEngine.Animations.AnimationStream&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_SetFloatInternal_m8097225456AC17DECC7497A3CB8EE844C97A4F94 (PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, float ___value1, const RuntimeMethod* method)
{
	{
		AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * L_0 = ___stream0;
		float L_1 = ___value1;
		PropertyStreamHandle_SetFloatInternal_Injected_m1BD1EF3E8B9DDE42F0AF16B837885DD11651573A((PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void PropertyStreamHandle_SetFloatInternal_m8097225456AC17DECC7497A3CB8EE844C97A4F94_AdjustorThunk (RuntimeObject * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, float ___value1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * _thisAdjusted = reinterpret_cast<PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 *>(__this + _offset);
	PropertyStreamHandle_SetFloatInternal_m8097225456AC17DECC7497A3CB8EE844C97A4F94(_thisAdjusted, ___stream0, ___value1, method);
}
// System.Int32 UnityEngine.Animations.PropertyStreamHandle::GetIntInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyStreamHandle_GetIntInternal_mBD853933458A95DA7622FAA11F0CCD030C63211A (PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, const RuntimeMethod* method)
{
	{
		AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * L_0 = ___stream0;
		int32_t L_1 = PropertyStreamHandle_GetIntInternal_Injected_m99DE9C4B7778C7700D34DBE3BD370AB81AAD5F7D((PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t PropertyStreamHandle_GetIntInternal_mBD853933458A95DA7622FAA11F0CCD030C63211A_AdjustorThunk (RuntimeObject * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * _thisAdjusted = reinterpret_cast<PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 *>(__this + _offset);
	return PropertyStreamHandle_GetIntInternal_mBD853933458A95DA7622FAA11F0CCD030C63211A(_thisAdjusted, ___stream0, method);
}
// System.Void UnityEngine.Animations.PropertyStreamHandle::SetIntInternal(UnityEngine.Animations.AnimationStream&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_SetIntInternal_m6C46CEB96A743D4C25D48F4653CD1DA3DE6751DC (PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, int32_t ___value1, const RuntimeMethod* method)
{
	{
		AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * L_0 = ___stream0;
		int32_t L_1 = ___value1;
		PropertyStreamHandle_SetIntInternal_Injected_mD80062D588EE1E4B9217CD113F3AEA60809A84E3((PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void PropertyStreamHandle_SetIntInternal_m6C46CEB96A743D4C25D48F4653CD1DA3DE6751DC_AdjustorThunk (RuntimeObject * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, int32_t ___value1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * _thisAdjusted = reinterpret_cast<PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 *>(__this + _offset);
	PropertyStreamHandle_SetIntInternal_m6C46CEB96A743D4C25D48F4653CD1DA3DE6751DC(_thisAdjusted, ___stream0, ___value1, method);
}
// System.Boolean UnityEngine.Animations.PropertyStreamHandle::GetBoolInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyStreamHandle_GetBoolInternal_m0401B558561C53FB5429EE727CFED8E6EDC1E8E3 (PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, const RuntimeMethod* method)
{
	{
		AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * L_0 = ___stream0;
		bool L_1 = PropertyStreamHandle_GetBoolInternal_Injected_m651D43B9A18BE6AA3984A8F75E7D348DC7D2153C((PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool PropertyStreamHandle_GetBoolInternal_m0401B558561C53FB5429EE727CFED8E6EDC1E8E3_AdjustorThunk (RuntimeObject * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * _thisAdjusted = reinterpret_cast<PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 *>(__this + _offset);
	return PropertyStreamHandle_GetBoolInternal_m0401B558561C53FB5429EE727CFED8E6EDC1E8E3(_thisAdjusted, ___stream0, method);
}
// System.Void UnityEngine.Animations.PropertyStreamHandle::SetBoolInternal(UnityEngine.Animations.AnimationStream&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_SetBoolInternal_m2E50B5B1AF0B7680D5C070AB36C13F4F1F0411E4 (PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, bool ___value1, const RuntimeMethod* method)
{
	{
		AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * L_0 = ___stream0;
		bool L_1 = ___value1;
		PropertyStreamHandle_SetBoolInternal_Injected_m5DA658A7A77CB174EC50EA90AE3EBF0B4471CF9F((PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void PropertyStreamHandle_SetBoolInternal_m2E50B5B1AF0B7680D5C070AB36C13F4F1F0411E4_AdjustorThunk (RuntimeObject * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, bool ___value1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * _thisAdjusted = reinterpret_cast<PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 *>(__this + _offset);
	PropertyStreamHandle_SetBoolInternal_m2E50B5B1AF0B7680D5C070AB36C13F4F1F0411E4(_thisAdjusted, ___stream0, ___value1, method);
}
// System.Void UnityEngine.Animations.PropertyStreamHandle::ResolveInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_ResolveInternal_Injected_m6961B389EFEE33F0F3AD8D137C12A86299370665 (PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * ____unity_self0, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream1, const RuntimeMethod* method)
{
	typedef void (*PropertyStreamHandle_ResolveInternal_Injected_m6961B389EFEE33F0F3AD8D137C12A86299370665_ftn) (PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 *, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *);
	static PropertyStreamHandle_ResolveInternal_Injected_m6961B389EFEE33F0F3AD8D137C12A86299370665_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PropertyStreamHandle_ResolveInternal_Injected_m6961B389EFEE33F0F3AD8D137C12A86299370665_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.PropertyStreamHandle::ResolveInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&)");
	_il2cpp_icall_func(____unity_self0, ___stream1);
}
// System.Single UnityEngine.Animations.PropertyStreamHandle::GetFloatInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PropertyStreamHandle_GetFloatInternal_Injected_m83747162B311EC592A63630F7D1D5793BF8A7F32 (PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * ____unity_self0, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream1, const RuntimeMethod* method)
{
	typedef float (*PropertyStreamHandle_GetFloatInternal_Injected_m83747162B311EC592A63630F7D1D5793BF8A7F32_ftn) (PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 *, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *);
	static PropertyStreamHandle_GetFloatInternal_Injected_m83747162B311EC592A63630F7D1D5793BF8A7F32_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PropertyStreamHandle_GetFloatInternal_Injected_m83747162B311EC592A63630F7D1D5793BF8A7F32_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.PropertyStreamHandle::GetFloatInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&)");
	float retVal = _il2cpp_icall_func(____unity_self0, ___stream1);
	return retVal;
}
// System.Void UnityEngine.Animations.PropertyStreamHandle::SetFloatInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_SetFloatInternal_Injected_m1BD1EF3E8B9DDE42F0AF16B837885DD11651573A (PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * ____unity_self0, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream1, float ___value2, const RuntimeMethod* method)
{
	typedef void (*PropertyStreamHandle_SetFloatInternal_Injected_m1BD1EF3E8B9DDE42F0AF16B837885DD11651573A_ftn) (PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 *, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *, float);
	static PropertyStreamHandle_SetFloatInternal_Injected_m1BD1EF3E8B9DDE42F0AF16B837885DD11651573A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PropertyStreamHandle_SetFloatInternal_Injected_m1BD1EF3E8B9DDE42F0AF16B837885DD11651573A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.PropertyStreamHandle::SetFloatInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&,System.Single)");
	_il2cpp_icall_func(____unity_self0, ___stream1, ___value2);
}
// System.Int32 UnityEngine.Animations.PropertyStreamHandle::GetIntInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyStreamHandle_GetIntInternal_Injected_m99DE9C4B7778C7700D34DBE3BD370AB81AAD5F7D (PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * ____unity_self0, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream1, const RuntimeMethod* method)
{
	typedef int32_t (*PropertyStreamHandle_GetIntInternal_Injected_m99DE9C4B7778C7700D34DBE3BD370AB81AAD5F7D_ftn) (PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 *, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *);
	static PropertyStreamHandle_GetIntInternal_Injected_m99DE9C4B7778C7700D34DBE3BD370AB81AAD5F7D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PropertyStreamHandle_GetIntInternal_Injected_m99DE9C4B7778C7700D34DBE3BD370AB81AAD5F7D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.PropertyStreamHandle::GetIntInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&)");
	int32_t retVal = _il2cpp_icall_func(____unity_self0, ___stream1);
	return retVal;
}
// System.Void UnityEngine.Animations.PropertyStreamHandle::SetIntInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_SetIntInternal_Injected_mD80062D588EE1E4B9217CD113F3AEA60809A84E3 (PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * ____unity_self0, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream1, int32_t ___value2, const RuntimeMethod* method)
{
	typedef void (*PropertyStreamHandle_SetIntInternal_Injected_mD80062D588EE1E4B9217CD113F3AEA60809A84E3_ftn) (PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 *, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *, int32_t);
	static PropertyStreamHandle_SetIntInternal_Injected_mD80062D588EE1E4B9217CD113F3AEA60809A84E3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PropertyStreamHandle_SetIntInternal_Injected_mD80062D588EE1E4B9217CD113F3AEA60809A84E3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.PropertyStreamHandle::SetIntInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&,System.Int32)");
	_il2cpp_icall_func(____unity_self0, ___stream1, ___value2);
}
// System.Boolean UnityEngine.Animations.PropertyStreamHandle::GetBoolInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyStreamHandle_GetBoolInternal_Injected_m651D43B9A18BE6AA3984A8F75E7D348DC7D2153C (PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * ____unity_self0, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream1, const RuntimeMethod* method)
{
	typedef bool (*PropertyStreamHandle_GetBoolInternal_Injected_m651D43B9A18BE6AA3984A8F75E7D348DC7D2153C_ftn) (PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 *, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *);
	static PropertyStreamHandle_GetBoolInternal_Injected_m651D43B9A18BE6AA3984A8F75E7D348DC7D2153C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PropertyStreamHandle_GetBoolInternal_Injected_m651D43B9A18BE6AA3984A8F75E7D348DC7D2153C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.PropertyStreamHandle::GetBoolInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&)");
	bool retVal = _il2cpp_icall_func(____unity_self0, ___stream1);
	return retVal;
}
// System.Void UnityEngine.Animations.PropertyStreamHandle::SetBoolInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyStreamHandle_SetBoolInternal_Injected_m5DA658A7A77CB174EC50EA90AE3EBF0B4471CF9F (PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 * ____unity_self0, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream1, bool ___value2, const RuntimeMethod* method)
{
	typedef void (*PropertyStreamHandle_SetBoolInternal_Injected_m5DA658A7A77CB174EC50EA90AE3EBF0B4471CF9F_ftn) (PropertyStreamHandle_t87B8A3B61B743842A9246F267448D1F8AE1C5766 *, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *, bool);
	static PropertyStreamHandle_SetBoolInternal_Injected_m5DA658A7A77CB174EC50EA90AE3EBF0B4471CF9F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PropertyStreamHandle_SetBoolInternal_Injected_m5DA658A7A77CB174EC50EA90AE3EBF0B4471CF9F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.PropertyStreamHandle::SetBoolInternal_Injected(UnityEngine.Animations.PropertyStreamHandle&,UnityEngine.Animations.AnimationStream&,System.Boolean)");
	_il2cpp_icall_func(____unity_self0, ___stream1, ___value2);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.Animations.TransformSceneHandle::IsValid(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformSceneHandle_IsValid_m85DF904BB53A4E243B8948C5F3CD16AE414BD699 (TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		bool L_0 = AnimationStream_get_isValid_mD441A5CB1A65CFCCE18DA6A42105632DEF21FECA((AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)(&___stream0), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		bool L_1 = TransformSceneHandle_get_createdByNative_m40D002BC57896E3735D68398A49C001510414796((TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE *)__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		bool L_2 = TransformSceneHandle_get_hasTransformSceneHandleDefinitionIndex_m68FB3EC5708E42E2972899D1B2E803890C4FBE5B((TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE *)__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		bool L_3 = TransformSceneHandle_HasValidTransform_mFFE6E19E047C059E898FC48AE4E59D25C6F79E6D((TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)(&___stream0), /*hidden argument*/NULL);
		G_B5_0 = ((int32_t)(L_3));
		goto IL_0025;
	}

IL_0024:
	{
		G_B5_0 = 0;
	}

IL_0025:
	{
		V_0 = (bool)G_B5_0;
		goto IL_0028;
	}

IL_0028:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  bool TransformSceneHandle_IsValid_m85DF904BB53A4E243B8948C5F3CD16AE414BD699_AdjustorThunk (RuntimeObject * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE * _thisAdjusted = reinterpret_cast<TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE *>(__this + _offset);
	return TransformSceneHandle_IsValid_m85DF904BB53A4E243B8948C5F3CD16AE414BD699(_thisAdjusted, ___stream0, method);
}
// System.Boolean UnityEngine.Animations.TransformSceneHandle::get_createdByNative()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformSceneHandle_get_createdByNative_m40D002BC57896E3735D68398A49C001510414796 (TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		uint32_t L_0 = __this->get_valid_0();
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool TransformSceneHandle_get_createdByNative_m40D002BC57896E3735D68398A49C001510414796_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE * _thisAdjusted = reinterpret_cast<TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE *>(__this + _offset);
	return TransformSceneHandle_get_createdByNative_m40D002BC57896E3735D68398A49C001510414796(_thisAdjusted, method);
}
// System.Boolean UnityEngine.Animations.TransformSceneHandle::get_hasTransformSceneHandleDefinitionIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformSceneHandle_get_hasTransformSceneHandleDefinitionIndex_m68FB3EC5708E42E2972899D1B2E803890C4FBE5B (TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->get_transformSceneHandleDefinitionIndex_1();
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0010;
	}

IL_0010:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool TransformSceneHandle_get_hasTransformSceneHandleDefinitionIndex_m68FB3EC5708E42E2972899D1B2E803890C4FBE5B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE * _thisAdjusted = reinterpret_cast<TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE *>(__this + _offset);
	return TransformSceneHandle_get_hasTransformSceneHandleDefinitionIndex_m68FB3EC5708E42E2972899D1B2E803890C4FBE5B(_thisAdjusted, method);
}
// System.Void UnityEngine.Animations.TransformSceneHandle::CheckIsValid(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_CheckIsValid_m4630986C8242A24F4708F4F0E811B80EB50DBC26 (TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransformSceneHandle_CheckIsValid_m4630986C8242A24F4708F4F0E811B80EB50DBC26_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * L_0 = ___stream0;
		AnimationStream_CheckIsValid_m5ECBEAA0E34ECE5B4C436B0D1057D2D4325B730B((AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)L_0, /*hidden argument*/NULL);
		bool L_1 = TransformSceneHandle_get_createdByNative_m40D002BC57896E3735D68398A49C001510414796((TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE *)__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		bool L_2 = TransformSceneHandle_get_hasTransformSceneHandleDefinitionIndex_m68FB3EC5708E42E2972899D1B2E803890C4FBE5B((TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE *)__this, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 1;
	}

IL_001c:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_4 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_4, _stringLiteral8B1A2B1D94748B4FC439CD95EA363FD6C35E27E4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, TransformSceneHandle_CheckIsValid_m4630986C8242A24F4708F4F0E811B80EB50DBC26_RuntimeMethod_var);
	}

IL_002b:
	{
		AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * L_5 = ___stream0;
		bool L_6 = TransformSceneHandle_HasValidTransform_mFFE6E19E047C059E898FC48AE4E59D25C6F79E6D((TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)L_5, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0044;
		}
	}
	{
		NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC * L_8 = (NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC *)il2cpp_codegen_object_new(NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_mAD32CA6CD05808ED531D14BA18B7AA1E99B8D349(L_8, _stringLiteral18639651DF88482897994EC0002E1C17DE83E618, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, TransformSceneHandle_CheckIsValid_m4630986C8242A24F4708F4F0E811B80EB50DBC26_RuntimeMethod_var);
	}

IL_0044:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void TransformSceneHandle_CheckIsValid_m4630986C8242A24F4708F4F0E811B80EB50DBC26_AdjustorThunk (RuntimeObject * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE * _thisAdjusted = reinterpret_cast<TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE *>(__this + _offset);
	TransformSceneHandle_CheckIsValid_m4630986C8242A24F4708F4F0E811B80EB50DBC26(_thisAdjusted, ___stream0, method);
}
// UnityEngine.Vector3 UnityEngine.Animations.TransformSceneHandle::GetPosition(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  TransformSceneHandle_GetPosition_m1330618F4051BF69582470316CD8C1EAD250A329 (TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TransformSceneHandle_CheckIsValid_m4630986C8242A24F4708F4F0E811B80EB50DBC26((TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)(&___stream0), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = TransformSceneHandle_GetPositionInternal_mAB45980E3BCF8B6B8B550B26E3B38B732B4009D5((TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)(&___stream0), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0015;
	}

IL_0015:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  TransformSceneHandle_GetPosition_m1330618F4051BF69582470316CD8C1EAD250A329_AdjustorThunk (RuntimeObject * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE * _thisAdjusted = reinterpret_cast<TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE *>(__this + _offset);
	return TransformSceneHandle_GetPosition_m1330618F4051BF69582470316CD8C1EAD250A329(_thisAdjusted, ___stream0, method);
}
// UnityEngine.Vector3 UnityEngine.Animations.TransformSceneHandle::GetLocalPosition(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  TransformSceneHandle_GetLocalPosition_m43D05DB2FEFBEB226C7B0E223179E80FD8D38EB2 (TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TransformSceneHandle_CheckIsValid_m4630986C8242A24F4708F4F0E811B80EB50DBC26((TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)(&___stream0), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = TransformSceneHandle_GetLocalPositionInternal_m723C68328E7D895C901455DB15306CC5986D6C9C((TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)(&___stream0), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0015;
	}

IL_0015:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  TransformSceneHandle_GetLocalPosition_m43D05DB2FEFBEB226C7B0E223179E80FD8D38EB2_AdjustorThunk (RuntimeObject * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE * _thisAdjusted = reinterpret_cast<TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE *>(__this + _offset);
	return TransformSceneHandle_GetLocalPosition_m43D05DB2FEFBEB226C7B0E223179E80FD8D38EB2(_thisAdjusted, ___stream0, method);
}
// UnityEngine.Quaternion UnityEngine.Animations.TransformSceneHandle::GetRotation(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  TransformSceneHandle_GetRotation_mEF5B642E2FAE2916CE2DEA8B5D8CA57FB2EFBE41 (TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, const RuntimeMethod* method)
{
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TransformSceneHandle_CheckIsValid_m4630986C8242A24F4708F4F0E811B80EB50DBC26((TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)(&___stream0), /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = TransformSceneHandle_GetRotationInternal_m106CECBCBDBF9B05A9C33F0E208660E8CD200FE8((TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)(&___stream0), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0015;
	}

IL_0015:
	{
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  TransformSceneHandle_GetRotation_mEF5B642E2FAE2916CE2DEA8B5D8CA57FB2EFBE41_AdjustorThunk (RuntimeObject * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE * _thisAdjusted = reinterpret_cast<TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE *>(__this + _offset);
	return TransformSceneHandle_GetRotation_mEF5B642E2FAE2916CE2DEA8B5D8CA57FB2EFBE41(_thisAdjusted, ___stream0, method);
}
// UnityEngine.Quaternion UnityEngine.Animations.TransformSceneHandle::GetLocalRotation(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  TransformSceneHandle_GetLocalRotation_m3B6EF70B43083EE152BD1B5C9EBBC6C53FE38096 (TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, const RuntimeMethod* method)
{
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TransformSceneHandle_CheckIsValid_m4630986C8242A24F4708F4F0E811B80EB50DBC26((TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)(&___stream0), /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = TransformSceneHandle_GetLocalRotationInternal_mE00F32759F7E416B2FAC6B4F895089557CA92FE4((TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)(&___stream0), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0015;
	}

IL_0015:
	{
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  TransformSceneHandle_GetLocalRotation_m3B6EF70B43083EE152BD1B5C9EBBC6C53FE38096_AdjustorThunk (RuntimeObject * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE * _thisAdjusted = reinterpret_cast<TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE *>(__this + _offset);
	return TransformSceneHandle_GetLocalRotation_m3B6EF70B43083EE152BD1B5C9EBBC6C53FE38096(_thisAdjusted, ___stream0, method);
}
// UnityEngine.Vector3 UnityEngine.Animations.TransformSceneHandle::GetLocalScale(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  TransformSceneHandle_GetLocalScale_m8E549ED87B594023B05752AB7FE66EE34BE9FEC4 (TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TransformSceneHandle_CheckIsValid_m4630986C8242A24F4708F4F0E811B80EB50DBC26((TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)(&___stream0), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = TransformSceneHandle_GetLocalScaleInternal_m70AFC90AC9785F5C8C412211D4ECE24A76A92642((TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)(&___stream0), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0015;
	}

IL_0015:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  TransformSceneHandle_GetLocalScale_m8E549ED87B594023B05752AB7FE66EE34BE9FEC4_AdjustorThunk (RuntimeObject * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE * _thisAdjusted = reinterpret_cast<TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE *>(__this + _offset);
	return TransformSceneHandle_GetLocalScale_m8E549ED87B594023B05752AB7FE66EE34BE9FEC4(_thisAdjusted, ___stream0, method);
}
// System.Void UnityEngine.Animations.TransformSceneHandle::GetLocalTRS(UnityEngine.Animations.AnimationStream,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetLocalTRS_m10041EF297EA0571A8BDC429F0C31E804CE633CA (TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___position1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___rotation2, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___scale3, const RuntimeMethod* method)
{
	{
		TransformSceneHandle_CheckIsValid_m4630986C8242A24F4708F4F0E811B80EB50DBC26((TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)(&___stream0), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_0 = ___position1;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * L_1 = ___rotation2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_2 = ___scale3;
		TransformSceneHandle_GetLocalTRSInternal_m178C48F5DC71A9F2A894BC0FDD57C2278B530FC4((TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)(&___stream0), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_0, (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)L_1, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_2, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformSceneHandle_GetLocalTRS_m10041EF297EA0571A8BDC429F0C31E804CE633CA_AdjustorThunk (RuntimeObject * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___position1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___rotation2, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___scale3, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE * _thisAdjusted = reinterpret_cast<TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE *>(__this + _offset);
	TransformSceneHandle_GetLocalTRS_m10041EF297EA0571A8BDC429F0C31E804CE633CA(_thisAdjusted, ___stream0, ___position1, ___rotation2, ___scale3, method);
}
// System.Void UnityEngine.Animations.TransformSceneHandle::GetGlobalTR(UnityEngine.Animations.AnimationStream,UnityEngine.Vector3&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetGlobalTR_mDBA97A371576D8688679DDB76DD4696DE89BDA50 (TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___position1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___rotation2, const RuntimeMethod* method)
{
	{
		TransformSceneHandle_CheckIsValid_m4630986C8242A24F4708F4F0E811B80EB50DBC26((TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)(&___stream0), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_0 = ___position1;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * L_1 = ___rotation2;
		TransformSceneHandle_GetGlobalTRInternal_m690276981DC17EE88CEAE1A79284AF961EFF0D6B((TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)(&___stream0), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_0, (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformSceneHandle_GetGlobalTR_mDBA97A371576D8688679DDB76DD4696DE89BDA50_AdjustorThunk (RuntimeObject * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___position1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___rotation2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE * _thisAdjusted = reinterpret_cast<TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE *>(__this + _offset);
	TransformSceneHandle_GetGlobalTR_mDBA97A371576D8688679DDB76DD4696DE89BDA50(_thisAdjusted, ___stream0, ___position1, ___rotation2, method);
}
// System.Boolean UnityEngine.Animations.TransformSceneHandle::HasValidTransform(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformSceneHandle_HasValidTransform_mFFE6E19E047C059E898FC48AE4E59D25C6F79E6D (TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, const RuntimeMethod* method)
{
	{
		AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * L_0 = ___stream0;
		bool L_1 = TransformSceneHandle_HasValidTransform_Injected_mC73F1E280F2436FCA568B629BCE3F524626AA1F8((TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool TransformSceneHandle_HasValidTransform_mFFE6E19E047C059E898FC48AE4E59D25C6F79E6D_AdjustorThunk (RuntimeObject * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE * _thisAdjusted = reinterpret_cast<TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE *>(__this + _offset);
	return TransformSceneHandle_HasValidTransform_mFFE6E19E047C059E898FC48AE4E59D25C6F79E6D(_thisAdjusted, ___stream0, method);
}
// UnityEngine.Vector3 UnityEngine.Animations.TransformSceneHandle::GetPositionInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  TransformSceneHandle_GetPositionInternal_mAB45980E3BCF8B6B8B550B26E3B38B732B4009D5 (TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * L_0 = ___stream0;
		TransformSceneHandle_GetPositionInternal_Injected_mF06ADF4C1EF38B19D80B3D69C363FA9F8AD8A25C((TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)L_0, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  TransformSceneHandle_GetPositionInternal_mAB45980E3BCF8B6B8B550B26E3B38B732B4009D5_AdjustorThunk (RuntimeObject * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE * _thisAdjusted = reinterpret_cast<TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE *>(__this + _offset);
	return TransformSceneHandle_GetPositionInternal_mAB45980E3BCF8B6B8B550B26E3B38B732B4009D5(_thisAdjusted, ___stream0, method);
}
// UnityEngine.Vector3 UnityEngine.Animations.TransformSceneHandle::GetLocalPositionInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  TransformSceneHandle_GetLocalPositionInternal_m723C68328E7D895C901455DB15306CC5986D6C9C (TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * L_0 = ___stream0;
		TransformSceneHandle_GetLocalPositionInternal_Injected_m0F51D182F868A4ED4257F09C9F23FC1FEFA8029E((TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)L_0, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  TransformSceneHandle_GetLocalPositionInternal_m723C68328E7D895C901455DB15306CC5986D6C9C_AdjustorThunk (RuntimeObject * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE * _thisAdjusted = reinterpret_cast<TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE *>(__this + _offset);
	return TransformSceneHandle_GetLocalPositionInternal_m723C68328E7D895C901455DB15306CC5986D6C9C(_thisAdjusted, ___stream0, method);
}
// UnityEngine.Quaternion UnityEngine.Animations.TransformSceneHandle::GetRotationInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  TransformSceneHandle_GetRotationInternal_m106CECBCBDBF9B05A9C33F0E208660E8CD200FE8 (TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, const RuntimeMethod* method)
{
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * L_0 = ___stream0;
		TransformSceneHandle_GetRotationInternal_Injected_m66B07925B8B62EE83AC7633B63092C5D246C4C3A((TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)L_0, (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&V_0), /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  TransformSceneHandle_GetRotationInternal_m106CECBCBDBF9B05A9C33F0E208660E8CD200FE8_AdjustorThunk (RuntimeObject * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE * _thisAdjusted = reinterpret_cast<TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE *>(__this + _offset);
	return TransformSceneHandle_GetRotationInternal_m106CECBCBDBF9B05A9C33F0E208660E8CD200FE8(_thisAdjusted, ___stream0, method);
}
// UnityEngine.Quaternion UnityEngine.Animations.TransformSceneHandle::GetLocalRotationInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  TransformSceneHandle_GetLocalRotationInternal_mE00F32759F7E416B2FAC6B4F895089557CA92FE4 (TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, const RuntimeMethod* method)
{
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * L_0 = ___stream0;
		TransformSceneHandle_GetLocalRotationInternal_Injected_m33EE148CA5AA598F690C98FCF400C1B8299A4405((TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)L_0, (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&V_0), /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  TransformSceneHandle_GetLocalRotationInternal_mE00F32759F7E416B2FAC6B4F895089557CA92FE4_AdjustorThunk (RuntimeObject * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE * _thisAdjusted = reinterpret_cast<TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE *>(__this + _offset);
	return TransformSceneHandle_GetLocalRotationInternal_mE00F32759F7E416B2FAC6B4F895089557CA92FE4(_thisAdjusted, ___stream0, method);
}
// UnityEngine.Vector3 UnityEngine.Animations.TransformSceneHandle::GetLocalScaleInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  TransformSceneHandle_GetLocalScaleInternal_m70AFC90AC9785F5C8C412211D4ECE24A76A92642 (TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * L_0 = ___stream0;
		TransformSceneHandle_GetLocalScaleInternal_Injected_m109FD5EE987E70C8806ACAC02833039983358C98((TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)L_0, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  TransformSceneHandle_GetLocalScaleInternal_m70AFC90AC9785F5C8C412211D4ECE24A76A92642_AdjustorThunk (RuntimeObject * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE * _thisAdjusted = reinterpret_cast<TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE *>(__this + _offset);
	return TransformSceneHandle_GetLocalScaleInternal_m70AFC90AC9785F5C8C412211D4ECE24A76A92642(_thisAdjusted, ___stream0, method);
}
// System.Void UnityEngine.Animations.TransformSceneHandle::GetLocalTRSInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetLocalTRSInternal_m178C48F5DC71A9F2A894BC0FDD57C2278B530FC4 (TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___position1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___rotation2, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___scale3, const RuntimeMethod* method)
{
	{
		AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * L_0 = ___stream0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_1 = ___position1;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * L_2 = ___rotation2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_3 = ___scale3;
		TransformSceneHandle_GetLocalTRSInternal_Injected_m2099DC51343F4CBFE37978732554ACC71AB62A2E((TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)L_0, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_1, (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)L_2, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_3, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformSceneHandle_GetLocalTRSInternal_m178C48F5DC71A9F2A894BC0FDD57C2278B530FC4_AdjustorThunk (RuntimeObject * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___position1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___rotation2, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___scale3, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE * _thisAdjusted = reinterpret_cast<TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE *>(__this + _offset);
	TransformSceneHandle_GetLocalTRSInternal_m178C48F5DC71A9F2A894BC0FDD57C2278B530FC4(_thisAdjusted, ___stream0, ___position1, ___rotation2, ___scale3, method);
}
// System.Void UnityEngine.Animations.TransformSceneHandle::GetGlobalTRInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetGlobalTRInternal_m690276981DC17EE88CEAE1A79284AF961EFF0D6B (TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___position1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___rotation2, const RuntimeMethod* method)
{
	{
		AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * L_0 = ___stream0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_1 = ___position1;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * L_2 = ___rotation2;
		TransformSceneHandle_GetGlobalTRInternal_Injected_mB9ED01B266796CB6E11A496BC925018CE19F96F0((TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)L_0, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_1, (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)L_2, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformSceneHandle_GetGlobalTRInternal_m690276981DC17EE88CEAE1A79284AF961EFF0D6B_AdjustorThunk (RuntimeObject * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___position1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___rotation2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE * _thisAdjusted = reinterpret_cast<TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE *>(__this + _offset);
	TransformSceneHandle_GetGlobalTRInternal_m690276981DC17EE88CEAE1A79284AF961EFF0D6B(_thisAdjusted, ___stream0, ___position1, ___rotation2, method);
}
// System.Boolean UnityEngine.Animations.TransformSceneHandle::HasValidTransform_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformSceneHandle_HasValidTransform_Injected_mC73F1E280F2436FCA568B629BCE3F524626AA1F8 (TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE * ____unity_self0, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream1, const RuntimeMethod* method)
{
	typedef bool (*TransformSceneHandle_HasValidTransform_Injected_mC73F1E280F2436FCA568B629BCE3F524626AA1F8_ftn) (TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE *, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *);
	static TransformSceneHandle_HasValidTransform_Injected_mC73F1E280F2436FCA568B629BCE3F524626AA1F8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformSceneHandle_HasValidTransform_Injected_mC73F1E280F2436FCA568B629BCE3F524626AA1F8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformSceneHandle::HasValidTransform_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&)");
	bool retVal = _il2cpp_icall_func(____unity_self0, ___stream1);
	return retVal;
}
// System.Void UnityEngine.Animations.TransformSceneHandle::GetPositionInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetPositionInternal_Injected_mF06ADF4C1EF38B19D80B3D69C363FA9F8AD8A25C (TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE * ____unity_self0, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___ret2, const RuntimeMethod* method)
{
	typedef void (*TransformSceneHandle_GetPositionInternal_Injected_mF06ADF4C1EF38B19D80B3D69C363FA9F8AD8A25C_ftn) (TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE *, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *);
	static TransformSceneHandle_GetPositionInternal_Injected_mF06ADF4C1EF38B19D80B3D69C363FA9F8AD8A25C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformSceneHandle_GetPositionInternal_Injected_mF06ADF4C1EF38B19D80B3D69C363FA9F8AD8A25C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformSceneHandle::GetPositionInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)");
	_il2cpp_icall_func(____unity_self0, ___stream1, ___ret2);
}
// System.Void UnityEngine.Animations.TransformSceneHandle::GetLocalPositionInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetLocalPositionInternal_Injected_m0F51D182F868A4ED4257F09C9F23FC1FEFA8029E (TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE * ____unity_self0, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___ret2, const RuntimeMethod* method)
{
	typedef void (*TransformSceneHandle_GetLocalPositionInternal_Injected_m0F51D182F868A4ED4257F09C9F23FC1FEFA8029E_ftn) (TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE *, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *);
	static TransformSceneHandle_GetLocalPositionInternal_Injected_m0F51D182F868A4ED4257F09C9F23FC1FEFA8029E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformSceneHandle_GetLocalPositionInternal_Injected_m0F51D182F868A4ED4257F09C9F23FC1FEFA8029E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformSceneHandle::GetLocalPositionInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)");
	_il2cpp_icall_func(____unity_self0, ___stream1, ___ret2);
}
// System.Void UnityEngine.Animations.TransformSceneHandle::GetRotationInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetRotationInternal_Injected_m66B07925B8B62EE83AC7633B63092C5D246C4C3A (TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE * ____unity_self0, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___ret2, const RuntimeMethod* method)
{
	typedef void (*TransformSceneHandle_GetRotationInternal_Injected_m66B07925B8B62EE83AC7633B63092C5D246C4C3A_ftn) (TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE *, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *);
	static TransformSceneHandle_GetRotationInternal_Injected_m66B07925B8B62EE83AC7633B63092C5D246C4C3A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformSceneHandle_GetRotationInternal_Injected_m66B07925B8B62EE83AC7633B63092C5D246C4C3A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformSceneHandle::GetRotationInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion&)");
	_il2cpp_icall_func(____unity_self0, ___stream1, ___ret2);
}
// System.Void UnityEngine.Animations.TransformSceneHandle::GetLocalRotationInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetLocalRotationInternal_Injected_m33EE148CA5AA598F690C98FCF400C1B8299A4405 (TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE * ____unity_self0, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___ret2, const RuntimeMethod* method)
{
	typedef void (*TransformSceneHandle_GetLocalRotationInternal_Injected_m33EE148CA5AA598F690C98FCF400C1B8299A4405_ftn) (TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE *, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *);
	static TransformSceneHandle_GetLocalRotationInternal_Injected_m33EE148CA5AA598F690C98FCF400C1B8299A4405_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformSceneHandle_GetLocalRotationInternal_Injected_m33EE148CA5AA598F690C98FCF400C1B8299A4405_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformSceneHandle::GetLocalRotationInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion&)");
	_il2cpp_icall_func(____unity_self0, ___stream1, ___ret2);
}
// System.Void UnityEngine.Animations.TransformSceneHandle::GetLocalScaleInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetLocalScaleInternal_Injected_m109FD5EE987E70C8806ACAC02833039983358C98 (TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE * ____unity_self0, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___ret2, const RuntimeMethod* method)
{
	typedef void (*TransformSceneHandle_GetLocalScaleInternal_Injected_m109FD5EE987E70C8806ACAC02833039983358C98_ftn) (TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE *, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *);
	static TransformSceneHandle_GetLocalScaleInternal_Injected_m109FD5EE987E70C8806ACAC02833039983358C98_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformSceneHandle_GetLocalScaleInternal_Injected_m109FD5EE987E70C8806ACAC02833039983358C98_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformSceneHandle::GetLocalScaleInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)");
	_il2cpp_icall_func(____unity_self0, ___stream1, ___ret2);
}
// System.Void UnityEngine.Animations.TransformSceneHandle::GetLocalTRSInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetLocalTRSInternal_Injected_m2099DC51343F4CBFE37978732554ACC71AB62A2E (TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE * ____unity_self0, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___position2, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___rotation3, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___scale4, const RuntimeMethod* method)
{
	typedef void (*TransformSceneHandle_GetLocalTRSInternal_Injected_m2099DC51343F4CBFE37978732554ACC71AB62A2E_ftn) (TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE *, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *);
	static TransformSceneHandle_GetLocalTRSInternal_Injected_m2099DC51343F4CBFE37978732554ACC71AB62A2E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformSceneHandle_GetLocalTRSInternal_Injected_m2099DC51343F4CBFE37978732554ACC71AB62A2E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformSceneHandle::GetLocalTRSInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)");
	_il2cpp_icall_func(____unity_self0, ___stream1, ___position2, ___rotation3, ___scale4);
}
// System.Void UnityEngine.Animations.TransformSceneHandle::GetGlobalTRInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformSceneHandle_GetGlobalTRInternal_Injected_mB9ED01B266796CB6E11A496BC925018CE19F96F0 (TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE * ____unity_self0, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___position2, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___rotation3, const RuntimeMethod* method)
{
	typedef void (*TransformSceneHandle_GetGlobalTRInternal_Injected_mB9ED01B266796CB6E11A496BC925018CE19F96F0_ftn) (TransformSceneHandle_t21B8F62EBE4776C26BAEC4B5A597B374B44696AE *, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *);
	static TransformSceneHandle_GetGlobalTRInternal_Injected_mB9ED01B266796CB6E11A496BC925018CE19F96F0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformSceneHandle_GetGlobalTRInternal_Injected_mB9ED01B266796CB6E11A496BC925018CE19F96F0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformSceneHandle::GetGlobalTRInternal_Injected(UnityEngine.Animations.TransformSceneHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&)");
	_il2cpp_icall_func(____unity_self0, ___stream1, ___position2, ___rotation3);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.Animations.TransformStreamHandle::IsValid(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformStreamHandle_IsValid_m197853087E658469914090BD081A09DDC4343D83 (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = TransformStreamHandle_IsValidInternal_m86BF214CB36D6586E4758B5EA1C5C3E18DC88D94((TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)(&___stream0), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool TransformStreamHandle_IsValid_m197853087E658469914090BD081A09DDC4343D83_AdjustorThunk (RuntimeObject * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * _thisAdjusted = reinterpret_cast<TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *>(__this + _offset);
	return TransformStreamHandle_IsValid_m197853087E658469914090BD081A09DDC4343D83(_thisAdjusted, ___stream0, method);
}
// System.Boolean UnityEngine.Animations.TransformStreamHandle::IsValidInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformStreamHandle_IsValidInternal_m86BF214CB36D6586E4758B5EA1C5C3E18DC88D94 (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * L_0 = ___stream0;
		bool L_1 = AnimationStream_get_isValid_mD441A5CB1A65CFCCE18DA6A42105632DEF21FECA((AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		bool L_2 = TransformStreamHandle_get_createdByNative_m92EA541EF2ABF69A7DBFA81E5F9A5B673E1215FA((TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *)__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		bool L_3 = TransformStreamHandle_get_hasHandleIndex_m1BCFBD3F829E42F39336ECAB5A3ED920D5AE5FCA((TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *)__this, /*hidden argument*/NULL);
		G_B4_0 = ((int32_t)(L_3));
		goto IL_001a;
	}

IL_0019:
	{
		G_B4_0 = 0;
	}

IL_001a:
	{
		V_0 = (bool)G_B4_0;
		goto IL_001d;
	}

IL_001d:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  bool TransformStreamHandle_IsValidInternal_m86BF214CB36D6586E4758B5EA1C5C3E18DC88D94_AdjustorThunk (RuntimeObject * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * _thisAdjusted = reinterpret_cast<TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *>(__this + _offset);
	return TransformStreamHandle_IsValidInternal_m86BF214CB36D6586E4758B5EA1C5C3E18DC88D94(_thisAdjusted, ___stream0, method);
}
// System.Boolean UnityEngine.Animations.TransformStreamHandle::get_createdByNative()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformStreamHandle_get_createdByNative_m92EA541EF2ABF69A7DBFA81E5F9A5B673E1215FA (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		uint32_t L_0 = TransformStreamHandle_get_animatorBindingsVersion_m936CCC3D29FE696EC869E7C65096F6B3285DD4E8((TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *)__this, /*hidden argument*/NULL);
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool TransformStreamHandle_get_createdByNative_m92EA541EF2ABF69A7DBFA81E5F9A5B673E1215FA_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * _thisAdjusted = reinterpret_cast<TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *>(__this + _offset);
	return TransformStreamHandle_get_createdByNative_m92EA541EF2ABF69A7DBFA81E5F9A5B673E1215FA(_thisAdjusted, method);
}
// System.Boolean UnityEngine.Animations.TransformStreamHandle::IsSameVersionAsStream(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformStreamHandle_IsSameVersionAsStream_m3F45426A3549EB8BA30F2EA7A0D4C793164375BD (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		uint32_t L_0 = TransformStreamHandle_get_animatorBindingsVersion_m936CCC3D29FE696EC869E7C65096F6B3285DD4E8((TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *)__this, /*hidden argument*/NULL);
		AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * L_1 = ___stream0;
		uint32_t L_2 = AnimationStream_get_animatorBindingsVersion_m671E6BF2312FF421B3975F1442A0AB048663867A((AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)L_1, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_2))? 1 : 0);
		goto IL_0012;
	}

IL_0012:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool TransformStreamHandle_IsSameVersionAsStream_m3F45426A3549EB8BA30F2EA7A0D4C793164375BD_AdjustorThunk (RuntimeObject * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * _thisAdjusted = reinterpret_cast<TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *>(__this + _offset);
	return TransformStreamHandle_IsSameVersionAsStream_m3F45426A3549EB8BA30F2EA7A0D4C793164375BD(_thisAdjusted, ___stream0, method);
}
// System.Boolean UnityEngine.Animations.TransformStreamHandle::get_hasHandleIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformStreamHandle_get_hasHandleIndex_m1BCFBD3F829E42F39336ECAB5A3ED920D5AE5FCA (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->get_handleIndex_1();
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0010;
	}

IL_0010:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool TransformStreamHandle_get_hasHandleIndex_m1BCFBD3F829E42F39336ECAB5A3ED920D5AE5FCA_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * _thisAdjusted = reinterpret_cast<TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *>(__this + _offset);
	return TransformStreamHandle_get_hasHandleIndex_m1BCFBD3F829E42F39336ECAB5A3ED920D5AE5FCA(_thisAdjusted, method);
}
// System.Boolean UnityEngine.Animations.TransformStreamHandle::get_hasSkeletonIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformStreamHandle_get_hasSkeletonIndex_m6B43EE3D9F39194A708CE38153B1FC5E598B61A2 (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->get_skeletonIndex_2();
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0010;
	}

IL_0010:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool TransformStreamHandle_get_hasSkeletonIndex_m6B43EE3D9F39194A708CE38153B1FC5E598B61A2_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * _thisAdjusted = reinterpret_cast<TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *>(__this + _offset);
	return TransformStreamHandle_get_hasSkeletonIndex_m6B43EE3D9F39194A708CE38153B1FC5E598B61A2(_thisAdjusted, method);
}
// System.UInt32 UnityEngine.Animations.TransformStreamHandle::get_animatorBindingsVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t TransformStreamHandle_get_animatorBindingsVersion_m936CCC3D29FE696EC869E7C65096F6B3285DD4E8 (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->get_m_AnimatorBindingsVersion_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  uint32_t TransformStreamHandle_get_animatorBindingsVersion_m936CCC3D29FE696EC869E7C65096F6B3285DD4E8_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * _thisAdjusted = reinterpret_cast<TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *>(__this + _offset);
	return TransformStreamHandle_get_animatorBindingsVersion_m936CCC3D29FE696EC869E7C65096F6B3285DD4E8(_thisAdjusted, method);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::Resolve(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_Resolve_m19EEA74D49CF92C6F34A9B3ECECB3F09B4249455 (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, const RuntimeMethod* method)
{
	{
		TransformStreamHandle_CheckIsValidAndResolve_m7FC913FA851165BD369844188B42410E5165C734((TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)(&___stream0), /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_Resolve_m19EEA74D49CF92C6F34A9B3ECECB3F09B4249455_AdjustorThunk (RuntimeObject * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * _thisAdjusted = reinterpret_cast<TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *>(__this + _offset);
	TransformStreamHandle_Resolve_m19EEA74D49CF92C6F34A9B3ECECB3F09B4249455(_thisAdjusted, ___stream0, method);
}
// System.Boolean UnityEngine.Animations.TransformStreamHandle::IsResolved(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformStreamHandle_IsResolved_mDEF1219D376D07A2BBC6C021150D43586E69A680 (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = TransformStreamHandle_IsResolvedInternal_mA8690266E15DADAFD1DE398231612111A6805E64((TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)(&___stream0), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool TransformStreamHandle_IsResolved_mDEF1219D376D07A2BBC6C021150D43586E69A680_AdjustorThunk (RuntimeObject * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * _thisAdjusted = reinterpret_cast<TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *>(__this + _offset);
	return TransformStreamHandle_IsResolved_mDEF1219D376D07A2BBC6C021150D43586E69A680(_thisAdjusted, ___stream0, method);
}
// System.Boolean UnityEngine.Animations.TransformStreamHandle::IsResolvedInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformStreamHandle_IsResolvedInternal_mA8690266E15DADAFD1DE398231612111A6805E64 (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * L_0 = ___stream0;
		bool L_1 = TransformStreamHandle_IsValidInternal_m86BF214CB36D6586E4758B5EA1C5C3E18DC88D94((TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * L_2 = ___stream0;
		bool L_3 = TransformStreamHandle_IsSameVersionAsStream_m3F45426A3549EB8BA30F2EA7A0D4C793164375BD((TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		bool L_4 = TransformStreamHandle_get_hasSkeletonIndex_m6B43EE3D9F39194A708CE38153B1FC5E598B61A2((TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *)__this, /*hidden argument*/NULL);
		G_B4_0 = ((int32_t)(L_4));
		goto IL_001c;
	}

IL_001b:
	{
		G_B4_0 = 0;
	}

IL_001c:
	{
		V_0 = (bool)G_B4_0;
		goto IL_001f;
	}

IL_001f:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool TransformStreamHandle_IsResolvedInternal_mA8690266E15DADAFD1DE398231612111A6805E64_AdjustorThunk (RuntimeObject * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * _thisAdjusted = reinterpret_cast<TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *>(__this + _offset);
	return TransformStreamHandle_IsResolvedInternal_mA8690266E15DADAFD1DE398231612111A6805E64(_thisAdjusted, ___stream0, method);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::CheckIsValidAndResolve(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_CheckIsValidAndResolve_m7FC913FA851165BD369844188B42410E5165C734 (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransformStreamHandle_CheckIsValidAndResolve_m7FC913FA851165BD369844188B42410E5165C734_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B18_0 = 0;
	{
		AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * L_0 = ___stream0;
		AnimationStream_CheckIsValid_m5ECBEAA0E34ECE5B4C436B0D1057D2D4325B730B((AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)L_0, /*hidden argument*/NULL);
		AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * L_1 = ___stream0;
		bool L_2 = TransformStreamHandle_IsResolvedInternal_mA8690266E15DADAFD1DE398231612111A6805E64((TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0015;
		}
	}
	{
		goto IL_0089;
	}

IL_0015:
	{
		bool L_4 = TransformStreamHandle_get_createdByNative_m92EA541EF2ABF69A7DBFA81E5F9A5B673E1215FA((TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *)__this, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		bool L_5 = TransformStreamHandle_get_hasHandleIndex_m1BCFBD3F829E42F39336ECAB5A3ED920D5AE5FCA((TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *)__this, /*hidden argument*/NULL);
		G_B5_0 = ((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		goto IL_0029;
	}

IL_0028:
	{
		G_B5_0 = 1;
	}

IL_0029:
	{
		V_1 = (bool)G_B5_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_7 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_7, _stringLiteralFADFD955EE80AFF43A02AE13CE1819415FEC24FB, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, TransformStreamHandle_CheckIsValidAndResolve_m7FC913FA851165BD369844188B42410E5165C734_RuntimeMethod_var);
	}

IL_0038:
	{
		AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * L_8 = ___stream0;
		bool L_9 = TransformStreamHandle_IsSameVersionAsStream_m3F45426A3549EB8BA30F2EA7A0D4C793164375BD((TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0057;
		}
	}
	{
		bool L_10 = TransformStreamHandle_get_hasHandleIndex_m1BCFBD3F829E42F39336ECAB5A3ED920D5AE5FCA((TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *)__this, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0054;
		}
	}
	{
		bool L_11 = TransformStreamHandle_get_hasSkeletonIndex_m6B43EE3D9F39194A708CE38153B1FC5E598B61A2((TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *)__this, /*hidden argument*/NULL);
		G_B11_0 = ((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
		goto IL_0055;
	}

IL_0054:
	{
		G_B11_0 = 0;
	}

IL_0055:
	{
		G_B13_0 = G_B11_0;
		goto IL_0058;
	}

IL_0057:
	{
		G_B13_0 = 1;
	}

IL_0058:
	{
		V_2 = (bool)G_B13_0;
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_0066;
		}
	}
	{
		AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * L_13 = ___stream0;
		TransformStreamHandle_ResolveInternal_m80FEC2C13F206825E3D571B9554EEB2523470117((TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)L_13, /*hidden argument*/NULL);
	}

IL_0066:
	{
		bool L_14 = TransformStreamHandle_get_hasHandleIndex_m1BCFBD3F829E42F39336ECAB5A3ED920D5AE5FCA((TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *)__this, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0079;
		}
	}
	{
		bool L_15 = TransformStreamHandle_get_hasSkeletonIndex_m6B43EE3D9F39194A708CE38153B1FC5E598B61A2((TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *)__this, /*hidden argument*/NULL);
		G_B18_0 = ((((int32_t)L_15) == ((int32_t)0))? 1 : 0);
		goto IL_007a;
	}

IL_0079:
	{
		G_B18_0 = 0;
	}

IL_007a:
	{
		V_3 = (bool)G_B18_0;
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_0089;
		}
	}
	{
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_17 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_17, _stringLiteral996AD407094C3C79A8573A3CE4DD1E6B04789ECF, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, TransformStreamHandle_CheckIsValidAndResolve_m7FC913FA851165BD369844188B42410E5165C734_RuntimeMethod_var);
	}

IL_0089:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_CheckIsValidAndResolve_m7FC913FA851165BD369844188B42410E5165C734_AdjustorThunk (RuntimeObject * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * _thisAdjusted = reinterpret_cast<TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *>(__this + _offset);
	TransformStreamHandle_CheckIsValidAndResolve_m7FC913FA851165BD369844188B42410E5165C734(_thisAdjusted, ___stream0, method);
}
// UnityEngine.Vector3 UnityEngine.Animations.TransformStreamHandle::GetPosition(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  TransformStreamHandle_GetPosition_m65653976ACE78E84E5D68B95F6DE91D99837C3EA (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TransformStreamHandle_CheckIsValidAndResolve_m7FC913FA851165BD369844188B42410E5165C734((TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)(&___stream0), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = TransformStreamHandle_GetPositionInternal_m767CCB2133393B7167F8795C664BF67CCC190134((TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)(&___stream0), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0015;
	}

IL_0015:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  TransformStreamHandle_GetPosition_m65653976ACE78E84E5D68B95F6DE91D99837C3EA_AdjustorThunk (RuntimeObject * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * _thisAdjusted = reinterpret_cast<TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *>(__this + _offset);
	return TransformStreamHandle_GetPosition_m65653976ACE78E84E5D68B95F6DE91D99837C3EA(_thisAdjusted, ___stream0, method);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetPosition(UnityEngine.Animations.AnimationStream,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetPosition_mFAB284FF7694DF476D841A7F2260D95E17314D64 (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, const RuntimeMethod* method)
{
	{
		TransformStreamHandle_CheckIsValidAndResolve_m7FC913FA851165BD369844188B42410E5165C734((TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)(&___stream0), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___position1;
		TransformStreamHandle_SetPositionInternal_mA92449965FE3633C4AF6B8D19A119BEB1746E178((TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)(&___stream0), L_0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_SetPosition_mFAB284FF7694DF476D841A7F2260D95E17314D64_AdjustorThunk (RuntimeObject * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * _thisAdjusted = reinterpret_cast<TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *>(__this + _offset);
	TransformStreamHandle_SetPosition_mFAB284FF7694DF476D841A7F2260D95E17314D64(_thisAdjusted, ___stream0, ___position1, method);
}
// UnityEngine.Quaternion UnityEngine.Animations.TransformStreamHandle::GetRotation(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  TransformStreamHandle_GetRotation_m5976F111DE80AFC48DBD0FC6DD297DB10D4AC25A (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, const RuntimeMethod* method)
{
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TransformStreamHandle_CheckIsValidAndResolve_m7FC913FA851165BD369844188B42410E5165C734((TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)(&___stream0), /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = TransformStreamHandle_GetRotationInternal_m297ED19ED6403950E77337F9E7532BFD22BF910D((TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)(&___stream0), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0015;
	}

IL_0015:
	{
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  TransformStreamHandle_GetRotation_m5976F111DE80AFC48DBD0FC6DD297DB10D4AC25A_AdjustorThunk (RuntimeObject * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * _thisAdjusted = reinterpret_cast<TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *>(__this + _offset);
	return TransformStreamHandle_GetRotation_m5976F111DE80AFC48DBD0FC6DD297DB10D4AC25A(_thisAdjusted, ___stream0, method);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetRotation(UnityEngine.Animations.AnimationStream,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetRotation_m04EDC6E66454A8C941EE7A53E75A4845F836313E (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation1, const RuntimeMethod* method)
{
	{
		TransformStreamHandle_CheckIsValidAndResolve_m7FC913FA851165BD369844188B42410E5165C734((TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)(&___stream0), /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = ___rotation1;
		TransformStreamHandle_SetRotationInternal_m13C0D03842A835DF0750F8BAF636A3662ABCF3FE((TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)(&___stream0), L_0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_SetRotation_m04EDC6E66454A8C941EE7A53E75A4845F836313E_AdjustorThunk (RuntimeObject * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * _thisAdjusted = reinterpret_cast<TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *>(__this + _offset);
	TransformStreamHandle_SetRotation_m04EDC6E66454A8C941EE7A53E75A4845F836313E(_thisAdjusted, ___stream0, ___rotation1, method);
}
// UnityEngine.Vector3 UnityEngine.Animations.TransformStreamHandle::GetLocalPosition(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  TransformStreamHandle_GetLocalPosition_m1799B993B6C0F35C818315EFB6E2DD775BF6C146 (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TransformStreamHandle_CheckIsValidAndResolve_m7FC913FA851165BD369844188B42410E5165C734((TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)(&___stream0), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = TransformStreamHandle_GetLocalPositionInternal_mC4EC23B89E8885D406BAE0B316089BD4DDBC635A((TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)(&___stream0), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0015;
	}

IL_0015:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  TransformStreamHandle_GetLocalPosition_m1799B993B6C0F35C818315EFB6E2DD775BF6C146_AdjustorThunk (RuntimeObject * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * _thisAdjusted = reinterpret_cast<TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *>(__this + _offset);
	return TransformStreamHandle_GetLocalPosition_m1799B993B6C0F35C818315EFB6E2DD775BF6C146(_thisAdjusted, ___stream0, method);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalPosition(UnityEngine.Animations.AnimationStream,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalPosition_mEEF9D7EB0E86C33BC5E03FC611DBBB315FC2836E (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, const RuntimeMethod* method)
{
	{
		TransformStreamHandle_CheckIsValidAndResolve_m7FC913FA851165BD369844188B42410E5165C734((TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)(&___stream0), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___position1;
		TransformStreamHandle_SetLocalPositionInternal_m5CB9C9AB2029C6222F65B3C4FE7167C36800896B((TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)(&___stream0), L_0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_SetLocalPosition_mEEF9D7EB0E86C33BC5E03FC611DBBB315FC2836E_AdjustorThunk (RuntimeObject * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * _thisAdjusted = reinterpret_cast<TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *>(__this + _offset);
	TransformStreamHandle_SetLocalPosition_mEEF9D7EB0E86C33BC5E03FC611DBBB315FC2836E(_thisAdjusted, ___stream0, ___position1, method);
}
// UnityEngine.Quaternion UnityEngine.Animations.TransformStreamHandle::GetLocalRotation(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  TransformStreamHandle_GetLocalRotation_mAD692608ED84005E40A648A866E8BDC57058FAB3 (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, const RuntimeMethod* method)
{
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TransformStreamHandle_CheckIsValidAndResolve_m7FC913FA851165BD369844188B42410E5165C734((TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)(&___stream0), /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = TransformStreamHandle_GetLocalRotationInternal_m4BD48243A380DD27B125AAAF39D5AC366136C1D8((TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)(&___stream0), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0015;
	}

IL_0015:
	{
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  TransformStreamHandle_GetLocalRotation_mAD692608ED84005E40A648A866E8BDC57058FAB3_AdjustorThunk (RuntimeObject * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * _thisAdjusted = reinterpret_cast<TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *>(__this + _offset);
	return TransformStreamHandle_GetLocalRotation_mAD692608ED84005E40A648A866E8BDC57058FAB3(_thisAdjusted, ___stream0, method);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalRotation(UnityEngine.Animations.AnimationStream,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalRotation_mA019ABD301F482E01A8770AAFAEF56416CDE0761 (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation1, const RuntimeMethod* method)
{
	{
		TransformStreamHandle_CheckIsValidAndResolve_m7FC913FA851165BD369844188B42410E5165C734((TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)(&___stream0), /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = ___rotation1;
		TransformStreamHandle_SetLocalRotationInternal_m5972DD13AFBA62D7F6A1171DF32FBD6FB789841C((TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)(&___stream0), L_0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_SetLocalRotation_mA019ABD301F482E01A8770AAFAEF56416CDE0761_AdjustorThunk (RuntimeObject * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * _thisAdjusted = reinterpret_cast<TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *>(__this + _offset);
	TransformStreamHandle_SetLocalRotation_mA019ABD301F482E01A8770AAFAEF56416CDE0761(_thisAdjusted, ___stream0, ___rotation1, method);
}
// UnityEngine.Vector3 UnityEngine.Animations.TransformStreamHandle::GetLocalScale(UnityEngine.Animations.AnimationStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  TransformStreamHandle_GetLocalScale_m224ABDF52759535984855422BBEB6F9FB8F5D2D0 (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TransformStreamHandle_CheckIsValidAndResolve_m7FC913FA851165BD369844188B42410E5165C734((TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)(&___stream0), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = TransformStreamHandle_GetLocalScaleInternal_m7496EDA26D7DCFD46BD29818D6F68D58F2FF940C((TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)(&___stream0), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0015;
	}

IL_0015:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  TransformStreamHandle_GetLocalScale_m224ABDF52759535984855422BBEB6F9FB8F5D2D0_AdjustorThunk (RuntimeObject * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * _thisAdjusted = reinterpret_cast<TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *>(__this + _offset);
	return TransformStreamHandle_GetLocalScale_m224ABDF52759535984855422BBEB6F9FB8F5D2D0(_thisAdjusted, ___stream0, method);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalScale(UnityEngine.Animations.AnimationStream,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalScale_m34D7CE2FBF969BB24CAE074E2FA319B3A2173EAD (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___scale1, const RuntimeMethod* method)
{
	{
		TransformStreamHandle_CheckIsValidAndResolve_m7FC913FA851165BD369844188B42410E5165C734((TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)(&___stream0), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___scale1;
		TransformStreamHandle_SetLocalScaleInternal_m680AEFF67365AE1DAE89578E5597F351BFCF9DB4((TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)(&___stream0), L_0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_SetLocalScale_m34D7CE2FBF969BB24CAE074E2FA319B3A2173EAD_AdjustorThunk (RuntimeObject * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___scale1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * _thisAdjusted = reinterpret_cast<TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *>(__this + _offset);
	TransformStreamHandle_SetLocalScale_m34D7CE2FBF969BB24CAE074E2FA319B3A2173EAD(_thisAdjusted, ___stream0, ___scale1, method);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::GetLocalTRS(UnityEngine.Animations.AnimationStream,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetLocalTRS_mFAC7B8C4AFABCD590FE3D4EA3F02F58CE1632263 (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___position1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___rotation2, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___scale3, const RuntimeMethod* method)
{
	{
		TransformStreamHandle_CheckIsValidAndResolve_m7FC913FA851165BD369844188B42410E5165C734((TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)(&___stream0), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_0 = ___position1;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * L_1 = ___rotation2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_2 = ___scale3;
		TransformStreamHandle_GetLocalTRSInternal_mAD84818081AED48C7D60C51E50E0DC85363B7E47((TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)(&___stream0), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_0, (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)L_1, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_2, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_GetLocalTRS_mFAC7B8C4AFABCD590FE3D4EA3F02F58CE1632263_AdjustorThunk (RuntimeObject * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___position1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___rotation2, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___scale3, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * _thisAdjusted = reinterpret_cast<TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *>(__this + _offset);
	TransformStreamHandle_GetLocalTRS_mFAC7B8C4AFABCD590FE3D4EA3F02F58CE1632263(_thisAdjusted, ___stream0, ___position1, ___rotation2, ___scale3, method);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalTRS(UnityEngine.Animations.AnimationStream,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalTRS_mD54A61DA747246AD7B2A24C5D8235572D611CD39 (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation2, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___scale3, bool ___useMask4, const RuntimeMethod* method)
{
	{
		TransformStreamHandle_CheckIsValidAndResolve_m7FC913FA851165BD369844188B42410E5165C734((TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)(&___stream0), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___position1;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = ___rotation2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___scale3;
		bool L_3 = ___useMask4;
		TransformStreamHandle_SetLocalTRSInternal_mA924B588373C2D5B400DACF6C30717AA2234E4D7((TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)(&___stream0), L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_SetLocalTRS_mD54A61DA747246AD7B2A24C5D8235572D611CD39_AdjustorThunk (RuntimeObject * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation2, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___scale3, bool ___useMask4, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * _thisAdjusted = reinterpret_cast<TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *>(__this + _offset);
	TransformStreamHandle_SetLocalTRS_mD54A61DA747246AD7B2A24C5D8235572D611CD39(_thisAdjusted, ___stream0, ___position1, ___rotation2, ___scale3, ___useMask4, method);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::GetGlobalTR(UnityEngine.Animations.AnimationStream,UnityEngine.Vector3&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetGlobalTR_m7BD9A91EB330790EA6BB97C72F7040B8035CB67E (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___position1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___rotation2, const RuntimeMethod* method)
{
	{
		TransformStreamHandle_CheckIsValidAndResolve_m7FC913FA851165BD369844188B42410E5165C734((TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)(&___stream0), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_0 = ___position1;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * L_1 = ___rotation2;
		TransformStreamHandle_GetGlobalTRInternal_mC2ED094F8C020E1C6427EBDA829C5BA6CEE11CF0((TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)(&___stream0), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_0, (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_GetGlobalTR_m7BD9A91EB330790EA6BB97C72F7040B8035CB67E_AdjustorThunk (RuntimeObject * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___position1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___rotation2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * _thisAdjusted = reinterpret_cast<TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *>(__this + _offset);
	TransformStreamHandle_GetGlobalTR_m7BD9A91EB330790EA6BB97C72F7040B8035CB67E(_thisAdjusted, ___stream0, ___position1, ___rotation2, method);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetGlobalTR(UnityEngine.Animations.AnimationStream,UnityEngine.Vector3,UnityEngine.Quaternion,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetGlobalTR_m893562659AD944C98A32FB77D8822D6D958B9939 (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation2, bool ___useMask3, const RuntimeMethod* method)
{
	{
		TransformStreamHandle_CheckIsValidAndResolve_m7FC913FA851165BD369844188B42410E5165C734((TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)(&___stream0), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___position1;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = ___rotation2;
		bool L_2 = ___useMask3;
		TransformStreamHandle_SetGlobalTRInternal_mC28851D8585AD13FA12C323B9B51F25D571F3A7D((TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)(&___stream0), L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_SetGlobalTR_m893562659AD944C98A32FB77D8822D6D958B9939_AdjustorThunk (RuntimeObject * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E  ___stream0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation2, bool ___useMask3, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * _thisAdjusted = reinterpret_cast<TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *>(__this + _offset);
	TransformStreamHandle_SetGlobalTR_m893562659AD944C98A32FB77D8822D6D958B9939(_thisAdjusted, ___stream0, ___position1, ___rotation2, ___useMask3, method);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::ResolveInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_ResolveInternal_m80FEC2C13F206825E3D571B9554EEB2523470117 (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, const RuntimeMethod* method)
{
	{
		AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * L_0 = ___stream0;
		TransformStreamHandle_ResolveInternal_Injected_mA98CC041BB10581D1F36A5BB8AE676F5B94593D1((TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)L_0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_ResolveInternal_m80FEC2C13F206825E3D571B9554EEB2523470117_AdjustorThunk (RuntimeObject * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * _thisAdjusted = reinterpret_cast<TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *>(__this + _offset);
	TransformStreamHandle_ResolveInternal_m80FEC2C13F206825E3D571B9554EEB2523470117(_thisAdjusted, ___stream0, method);
}
// UnityEngine.Vector3 UnityEngine.Animations.TransformStreamHandle::GetPositionInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  TransformStreamHandle_GetPositionInternal_m767CCB2133393B7167F8795C664BF67CCC190134 (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * L_0 = ___stream0;
		TransformStreamHandle_GetPositionInternal_Injected_m7E48A379AF9595A4D2D6AFE91109B3E124F396C5((TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)L_0, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  TransformStreamHandle_GetPositionInternal_m767CCB2133393B7167F8795C664BF67CCC190134_AdjustorThunk (RuntimeObject * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * _thisAdjusted = reinterpret_cast<TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *>(__this + _offset);
	return TransformStreamHandle_GetPositionInternal_m767CCB2133393B7167F8795C664BF67CCC190134(_thisAdjusted, ___stream0, method);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetPositionInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetPositionInternal_mA92449965FE3633C4AF6B8D19A119BEB1746E178 (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, const RuntimeMethod* method)
{
	{
		AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * L_0 = ___stream0;
		TransformStreamHandle_SetPositionInternal_Injected_m387B6BC02A71152323AF8FA58D3FFF54364C942B((TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)L_0, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&___position1), /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_SetPositionInternal_mA92449965FE3633C4AF6B8D19A119BEB1746E178_AdjustorThunk (RuntimeObject * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * _thisAdjusted = reinterpret_cast<TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *>(__this + _offset);
	TransformStreamHandle_SetPositionInternal_mA92449965FE3633C4AF6B8D19A119BEB1746E178(_thisAdjusted, ___stream0, ___position1, method);
}
// UnityEngine.Quaternion UnityEngine.Animations.TransformStreamHandle::GetRotationInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  TransformStreamHandle_GetRotationInternal_m297ED19ED6403950E77337F9E7532BFD22BF910D (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, const RuntimeMethod* method)
{
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * L_0 = ___stream0;
		TransformStreamHandle_GetRotationInternal_Injected_m04DF6C6E8C57F96DFDCC9097837ADEDE6ECC30F1((TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)L_0, (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&V_0), /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  TransformStreamHandle_GetRotationInternal_m297ED19ED6403950E77337F9E7532BFD22BF910D_AdjustorThunk (RuntimeObject * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * _thisAdjusted = reinterpret_cast<TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *>(__this + _offset);
	return TransformStreamHandle_GetRotationInternal_m297ED19ED6403950E77337F9E7532BFD22BF910D(_thisAdjusted, ___stream0, method);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetRotationInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetRotationInternal_m13C0D03842A835DF0750F8BAF636A3662ABCF3FE (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation1, const RuntimeMethod* method)
{
	{
		AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * L_0 = ___stream0;
		TransformStreamHandle_SetRotationInternal_Injected_m1BA831FB1CC3B4B46EA185DAD9B34284B5156AC2((TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)L_0, (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&___rotation1), /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_SetRotationInternal_m13C0D03842A835DF0750F8BAF636A3662ABCF3FE_AdjustorThunk (RuntimeObject * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * _thisAdjusted = reinterpret_cast<TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *>(__this + _offset);
	TransformStreamHandle_SetRotationInternal_m13C0D03842A835DF0750F8BAF636A3662ABCF3FE(_thisAdjusted, ___stream0, ___rotation1, method);
}
// UnityEngine.Vector3 UnityEngine.Animations.TransformStreamHandle::GetLocalPositionInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  TransformStreamHandle_GetLocalPositionInternal_mC4EC23B89E8885D406BAE0B316089BD4DDBC635A (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * L_0 = ___stream0;
		TransformStreamHandle_GetLocalPositionInternal_Injected_m3DF28A9FF4593F5AD258EEA0115E6ECA6891639A((TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)L_0, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  TransformStreamHandle_GetLocalPositionInternal_mC4EC23B89E8885D406BAE0B316089BD4DDBC635A_AdjustorThunk (RuntimeObject * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * _thisAdjusted = reinterpret_cast<TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *>(__this + _offset);
	return TransformStreamHandle_GetLocalPositionInternal_mC4EC23B89E8885D406BAE0B316089BD4DDBC635A(_thisAdjusted, ___stream0, method);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalPositionInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalPositionInternal_m5CB9C9AB2029C6222F65B3C4FE7167C36800896B (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, const RuntimeMethod* method)
{
	{
		AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * L_0 = ___stream0;
		TransformStreamHandle_SetLocalPositionInternal_Injected_m0301437010F551F56454CFA1F64FBAEF88F8089B((TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)L_0, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&___position1), /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_SetLocalPositionInternal_m5CB9C9AB2029C6222F65B3C4FE7167C36800896B_AdjustorThunk (RuntimeObject * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * _thisAdjusted = reinterpret_cast<TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *>(__this + _offset);
	TransformStreamHandle_SetLocalPositionInternal_m5CB9C9AB2029C6222F65B3C4FE7167C36800896B(_thisAdjusted, ___stream0, ___position1, method);
}
// UnityEngine.Quaternion UnityEngine.Animations.TransformStreamHandle::GetLocalRotationInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  TransformStreamHandle_GetLocalRotationInternal_m4BD48243A380DD27B125AAAF39D5AC366136C1D8 (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, const RuntimeMethod* method)
{
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * L_0 = ___stream0;
		TransformStreamHandle_GetLocalRotationInternal_Injected_m400A9FD7C522A7634E9E5AEB484C348DD5F7CB92((TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)L_0, (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&V_0), /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  TransformStreamHandle_GetLocalRotationInternal_m4BD48243A380DD27B125AAAF39D5AC366136C1D8_AdjustorThunk (RuntimeObject * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * _thisAdjusted = reinterpret_cast<TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *>(__this + _offset);
	return TransformStreamHandle_GetLocalRotationInternal_m4BD48243A380DD27B125AAAF39D5AC366136C1D8(_thisAdjusted, ___stream0, method);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalRotationInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalRotationInternal_m5972DD13AFBA62D7F6A1171DF32FBD6FB789841C (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation1, const RuntimeMethod* method)
{
	{
		AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * L_0 = ___stream0;
		TransformStreamHandle_SetLocalRotationInternal_Injected_m8E93D9230C35B900C70174068FDB66BCD6F4B03D((TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)L_0, (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&___rotation1), /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_SetLocalRotationInternal_m5972DD13AFBA62D7F6A1171DF32FBD6FB789841C_AdjustorThunk (RuntimeObject * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * _thisAdjusted = reinterpret_cast<TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *>(__this + _offset);
	TransformStreamHandle_SetLocalRotationInternal_m5972DD13AFBA62D7F6A1171DF32FBD6FB789841C(_thisAdjusted, ___stream0, ___rotation1, method);
}
// UnityEngine.Vector3 UnityEngine.Animations.TransformStreamHandle::GetLocalScaleInternal(UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  TransformStreamHandle_GetLocalScaleInternal_m7496EDA26D7DCFD46BD29818D6F68D58F2FF940C (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * L_0 = ___stream0;
		TransformStreamHandle_GetLocalScaleInternal_Injected_m85084C2D0BEFADC5DEF6A7F13BD373A5E1839EEF((TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)L_0, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  TransformStreamHandle_GetLocalScaleInternal_m7496EDA26D7DCFD46BD29818D6F68D58F2FF940C_AdjustorThunk (RuntimeObject * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * _thisAdjusted = reinterpret_cast<TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *>(__this + _offset);
	return TransformStreamHandle_GetLocalScaleInternal_m7496EDA26D7DCFD46BD29818D6F68D58F2FF940C(_thisAdjusted, ___stream0, method);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalScaleInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalScaleInternal_m680AEFF67365AE1DAE89578E5597F351BFCF9DB4 (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___scale1, const RuntimeMethod* method)
{
	{
		AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * L_0 = ___stream0;
		TransformStreamHandle_SetLocalScaleInternal_Injected_mD4DA073078515690EB367155999CC6EB370EE446((TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)L_0, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&___scale1), /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_SetLocalScaleInternal_m680AEFF67365AE1DAE89578E5597F351BFCF9DB4_AdjustorThunk (RuntimeObject * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___scale1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * _thisAdjusted = reinterpret_cast<TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *>(__this + _offset);
	TransformStreamHandle_SetLocalScaleInternal_m680AEFF67365AE1DAE89578E5597F351BFCF9DB4(_thisAdjusted, ___stream0, ___scale1, method);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::GetLocalTRSInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetLocalTRSInternal_mAD84818081AED48C7D60C51E50E0DC85363B7E47 (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___position1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___rotation2, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___scale3, const RuntimeMethod* method)
{
	{
		AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * L_0 = ___stream0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_1 = ___position1;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * L_2 = ___rotation2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_3 = ___scale3;
		TransformStreamHandle_GetLocalTRSInternal_Injected_m681DBDE7D667893C129DD2A92193CACDCD9F5F84((TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)L_0, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_1, (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)L_2, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_3, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_GetLocalTRSInternal_mAD84818081AED48C7D60C51E50E0DC85363B7E47_AdjustorThunk (RuntimeObject * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___position1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___rotation2, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___scale3, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * _thisAdjusted = reinterpret_cast<TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *>(__this + _offset);
	TransformStreamHandle_GetLocalTRSInternal_mAD84818081AED48C7D60C51E50E0DC85363B7E47(_thisAdjusted, ___stream0, ___position1, ___rotation2, ___scale3, method);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalTRSInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalTRSInternal_mA924B588373C2D5B400DACF6C30717AA2234E4D7 (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation2, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___scale3, bool ___useMask4, const RuntimeMethod* method)
{
	{
		AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * L_0 = ___stream0;
		bool L_1 = ___useMask4;
		TransformStreamHandle_SetLocalTRSInternal_Injected_m0F25FB7FA6F9721003D35E22AD5E228D2BD8E7A7((TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)L_0, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&___position1), (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&___rotation2), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&___scale3), L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_SetLocalTRSInternal_mA924B588373C2D5B400DACF6C30717AA2234E4D7_AdjustorThunk (RuntimeObject * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation2, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___scale3, bool ___useMask4, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * _thisAdjusted = reinterpret_cast<TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *>(__this + _offset);
	TransformStreamHandle_SetLocalTRSInternal_mA924B588373C2D5B400DACF6C30717AA2234E4D7(_thisAdjusted, ___stream0, ___position1, ___rotation2, ___scale3, ___useMask4, method);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::GetGlobalTRInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetGlobalTRInternal_mC2ED094F8C020E1C6427EBDA829C5BA6CEE11CF0 (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___position1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___rotation2, const RuntimeMethod* method)
{
	{
		AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * L_0 = ___stream0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_1 = ___position1;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * L_2 = ___rotation2;
		TransformStreamHandle_GetGlobalTRInternal_Injected_m45561ACABDB7FCFCED9114B02B354E139052876F((TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)L_0, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_1, (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)L_2, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_GetGlobalTRInternal_mC2ED094F8C020E1C6427EBDA829C5BA6CEE11CF0_AdjustorThunk (RuntimeObject * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___position1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___rotation2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * _thisAdjusted = reinterpret_cast<TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *>(__this + _offset);
	TransformStreamHandle_GetGlobalTRInternal_mC2ED094F8C020E1C6427EBDA829C5BA6CEE11CF0(_thisAdjusted, ___stream0, ___position1, ___rotation2, method);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetGlobalTRInternal(UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3,UnityEngine.Quaternion,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetGlobalTRInternal_mC28851D8585AD13FA12C323B9B51F25D571F3A7D (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation2, bool ___useMask3, const RuntimeMethod* method)
{
	{
		AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * L_0 = ___stream0;
		bool L_1 = ___useMask3;
		TransformStreamHandle_SetGlobalTRInternal_Injected_m1E129F2DAF01FB7827263EB8C52FE4B14A4919BA((TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *)__this, (AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *)L_0, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&___position1), (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&___rotation2), L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformStreamHandle_SetGlobalTRInternal_mC28851D8585AD13FA12C323B9B51F25D571F3A7D_AdjustorThunk (RuntimeObject * __this, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation2, bool ___useMask3, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * _thisAdjusted = reinterpret_cast<TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *>(__this + _offset);
	TransformStreamHandle_SetGlobalTRInternal_mC28851D8585AD13FA12C323B9B51F25D571F3A7D(_thisAdjusted, ___stream0, ___position1, ___rotation2, ___useMask3, method);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::ResolveInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_ResolveInternal_Injected_mA98CC041BB10581D1F36A5BB8AE676F5B94593D1 (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * ____unity_self0, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream1, const RuntimeMethod* method)
{
	typedef void (*TransformStreamHandle_ResolveInternal_Injected_mA98CC041BB10581D1F36A5BB8AE676F5B94593D1_ftn) (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *);
	static TransformStreamHandle_ResolveInternal_Injected_mA98CC041BB10581D1F36A5BB8AE676F5B94593D1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformStreamHandle_ResolveInternal_Injected_mA98CC041BB10581D1F36A5BB8AE676F5B94593D1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformStreamHandle::ResolveInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&)");
	_il2cpp_icall_func(____unity_self0, ___stream1);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::GetPositionInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetPositionInternal_Injected_m7E48A379AF9595A4D2D6AFE91109B3E124F396C5 (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * ____unity_self0, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___ret2, const RuntimeMethod* method)
{
	typedef void (*TransformStreamHandle_GetPositionInternal_Injected_m7E48A379AF9595A4D2D6AFE91109B3E124F396C5_ftn) (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *);
	static TransformStreamHandle_GetPositionInternal_Injected_m7E48A379AF9595A4D2D6AFE91109B3E124F396C5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformStreamHandle_GetPositionInternal_Injected_m7E48A379AF9595A4D2D6AFE91109B3E124F396C5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformStreamHandle::GetPositionInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)");
	_il2cpp_icall_func(____unity_self0, ___stream1, ___ret2);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetPositionInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetPositionInternal_Injected_m387B6BC02A71152323AF8FA58D3FFF54364C942B (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * ____unity_self0, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___position2, const RuntimeMethod* method)
{
	typedef void (*TransformStreamHandle_SetPositionInternal_Injected_m387B6BC02A71152323AF8FA58D3FFF54364C942B_ftn) (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *);
	static TransformStreamHandle_SetPositionInternal_Injected_m387B6BC02A71152323AF8FA58D3FFF54364C942B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformStreamHandle_SetPositionInternal_Injected_m387B6BC02A71152323AF8FA58D3FFF54364C942B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformStreamHandle::SetPositionInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)");
	_il2cpp_icall_func(____unity_self0, ___stream1, ___position2);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::GetRotationInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetRotationInternal_Injected_m04DF6C6E8C57F96DFDCC9097837ADEDE6ECC30F1 (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * ____unity_self0, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___ret2, const RuntimeMethod* method)
{
	typedef void (*TransformStreamHandle_GetRotationInternal_Injected_m04DF6C6E8C57F96DFDCC9097837ADEDE6ECC30F1_ftn) (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *);
	static TransformStreamHandle_GetRotationInternal_Injected_m04DF6C6E8C57F96DFDCC9097837ADEDE6ECC30F1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformStreamHandle_GetRotationInternal_Injected_m04DF6C6E8C57F96DFDCC9097837ADEDE6ECC30F1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformStreamHandle::GetRotationInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion&)");
	_il2cpp_icall_func(____unity_self0, ___stream1, ___ret2);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetRotationInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetRotationInternal_Injected_m1BA831FB1CC3B4B46EA185DAD9B34284B5156AC2 (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * ____unity_self0, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___rotation2, const RuntimeMethod* method)
{
	typedef void (*TransformStreamHandle_SetRotationInternal_Injected_m1BA831FB1CC3B4B46EA185DAD9B34284B5156AC2_ftn) (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *);
	static TransformStreamHandle_SetRotationInternal_Injected_m1BA831FB1CC3B4B46EA185DAD9B34284B5156AC2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformStreamHandle_SetRotationInternal_Injected_m1BA831FB1CC3B4B46EA185DAD9B34284B5156AC2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformStreamHandle::SetRotationInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion&)");
	_il2cpp_icall_func(____unity_self0, ___stream1, ___rotation2);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::GetLocalPositionInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetLocalPositionInternal_Injected_m3DF28A9FF4593F5AD258EEA0115E6ECA6891639A (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * ____unity_self0, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___ret2, const RuntimeMethod* method)
{
	typedef void (*TransformStreamHandle_GetLocalPositionInternal_Injected_m3DF28A9FF4593F5AD258EEA0115E6ECA6891639A_ftn) (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *);
	static TransformStreamHandle_GetLocalPositionInternal_Injected_m3DF28A9FF4593F5AD258EEA0115E6ECA6891639A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformStreamHandle_GetLocalPositionInternal_Injected_m3DF28A9FF4593F5AD258EEA0115E6ECA6891639A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformStreamHandle::GetLocalPositionInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)");
	_il2cpp_icall_func(____unity_self0, ___stream1, ___ret2);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalPositionInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalPositionInternal_Injected_m0301437010F551F56454CFA1F64FBAEF88F8089B (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * ____unity_self0, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___position2, const RuntimeMethod* method)
{
	typedef void (*TransformStreamHandle_SetLocalPositionInternal_Injected_m0301437010F551F56454CFA1F64FBAEF88F8089B_ftn) (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *);
	static TransformStreamHandle_SetLocalPositionInternal_Injected_m0301437010F551F56454CFA1F64FBAEF88F8089B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformStreamHandle_SetLocalPositionInternal_Injected_m0301437010F551F56454CFA1F64FBAEF88F8089B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformStreamHandle::SetLocalPositionInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)");
	_il2cpp_icall_func(____unity_self0, ___stream1, ___position2);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::GetLocalRotationInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetLocalRotationInternal_Injected_m400A9FD7C522A7634E9E5AEB484C348DD5F7CB92 (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * ____unity_self0, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___ret2, const RuntimeMethod* method)
{
	typedef void (*TransformStreamHandle_GetLocalRotationInternal_Injected_m400A9FD7C522A7634E9E5AEB484C348DD5F7CB92_ftn) (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *);
	static TransformStreamHandle_GetLocalRotationInternal_Injected_m400A9FD7C522A7634E9E5AEB484C348DD5F7CB92_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformStreamHandle_GetLocalRotationInternal_Injected_m400A9FD7C522A7634E9E5AEB484C348DD5F7CB92_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformStreamHandle::GetLocalRotationInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion&)");
	_il2cpp_icall_func(____unity_self0, ___stream1, ___ret2);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalRotationInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalRotationInternal_Injected_m8E93D9230C35B900C70174068FDB66BCD6F4B03D (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * ____unity_self0, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___rotation2, const RuntimeMethod* method)
{
	typedef void (*TransformStreamHandle_SetLocalRotationInternal_Injected_m8E93D9230C35B900C70174068FDB66BCD6F4B03D_ftn) (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *);
	static TransformStreamHandle_SetLocalRotationInternal_Injected_m8E93D9230C35B900C70174068FDB66BCD6F4B03D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformStreamHandle_SetLocalRotationInternal_Injected_m8E93D9230C35B900C70174068FDB66BCD6F4B03D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformStreamHandle::SetLocalRotationInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Quaternion&)");
	_il2cpp_icall_func(____unity_self0, ___stream1, ___rotation2);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::GetLocalScaleInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetLocalScaleInternal_Injected_m85084C2D0BEFADC5DEF6A7F13BD373A5E1839EEF (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * ____unity_self0, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___ret2, const RuntimeMethod* method)
{
	typedef void (*TransformStreamHandle_GetLocalScaleInternal_Injected_m85084C2D0BEFADC5DEF6A7F13BD373A5E1839EEF_ftn) (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *);
	static TransformStreamHandle_GetLocalScaleInternal_Injected_m85084C2D0BEFADC5DEF6A7F13BD373A5E1839EEF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformStreamHandle_GetLocalScaleInternal_Injected_m85084C2D0BEFADC5DEF6A7F13BD373A5E1839EEF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformStreamHandle::GetLocalScaleInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)");
	_il2cpp_icall_func(____unity_self0, ___stream1, ___ret2);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalScaleInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalScaleInternal_Injected_mD4DA073078515690EB367155999CC6EB370EE446 (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * ____unity_self0, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___scale2, const RuntimeMethod* method)
{
	typedef void (*TransformStreamHandle_SetLocalScaleInternal_Injected_mD4DA073078515690EB367155999CC6EB370EE446_ftn) (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *);
	static TransformStreamHandle_SetLocalScaleInternal_Injected_mD4DA073078515690EB367155999CC6EB370EE446_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformStreamHandle_SetLocalScaleInternal_Injected_mD4DA073078515690EB367155999CC6EB370EE446_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformStreamHandle::SetLocalScaleInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&)");
	_il2cpp_icall_func(____unity_self0, ___stream1, ___scale2);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::GetLocalTRSInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetLocalTRSInternal_Injected_m681DBDE7D667893C129DD2A92193CACDCD9F5F84 (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * ____unity_self0, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___position2, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___rotation3, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___scale4, const RuntimeMethod* method)
{
	typedef void (*TransformStreamHandle_GetLocalTRSInternal_Injected_m681DBDE7D667893C129DD2A92193CACDCD9F5F84_ftn) (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *);
	static TransformStreamHandle_GetLocalTRSInternal_Injected_m681DBDE7D667893C129DD2A92193CACDCD9F5F84_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformStreamHandle_GetLocalTRSInternal_Injected_m681DBDE7D667893C129DD2A92193CACDCD9F5F84_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformStreamHandle::GetLocalTRSInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)");
	_il2cpp_icall_func(____unity_self0, ___stream1, ___position2, ___rotation3, ___scale4);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetLocalTRSInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetLocalTRSInternal_Injected_m0F25FB7FA6F9721003D35E22AD5E228D2BD8E7A7 (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * ____unity_self0, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___position2, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___rotation3, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___scale4, bool ___useMask5, const RuntimeMethod* method)
{
	typedef void (*TransformStreamHandle_SetLocalTRSInternal_Injected_m0F25FB7FA6F9721003D35E22AD5E228D2BD8E7A7_ftn) (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *, bool);
	static TransformStreamHandle_SetLocalTRSInternal_Injected_m0F25FB7FA6F9721003D35E22AD5E228D2BD8E7A7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformStreamHandle_SetLocalTRSInternal_Injected_m0F25FB7FA6F9721003D35E22AD5E228D2BD8E7A7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformStreamHandle::SetLocalTRSInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&,System.Boolean)");
	_il2cpp_icall_func(____unity_self0, ___stream1, ___position2, ___rotation3, ___scale4, ___useMask5);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::GetGlobalTRInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_GetGlobalTRInternal_Injected_m45561ACABDB7FCFCED9114B02B354E139052876F (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * ____unity_self0, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___position2, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___rotation3, const RuntimeMethod* method)
{
	typedef void (*TransformStreamHandle_GetGlobalTRInternal_Injected_m45561ACABDB7FCFCED9114B02B354E139052876F_ftn) (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *);
	static TransformStreamHandle_GetGlobalTRInternal_Injected_m45561ACABDB7FCFCED9114B02B354E139052876F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformStreamHandle_GetGlobalTRInternal_Injected_m45561ACABDB7FCFCED9114B02B354E139052876F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformStreamHandle::GetGlobalTRInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&)");
	_il2cpp_icall_func(____unity_self0, ___stream1, ___position2, ___rotation3);
}
// System.Void UnityEngine.Animations.TransformStreamHandle::SetGlobalTRInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformStreamHandle_SetGlobalTRInternal_Injected_m1E129F2DAF01FB7827263EB8C52FE4B14A4919BA (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA * ____unity_self0, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E * ___stream1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___position2, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___rotation3, bool ___useMask4, const RuntimeMethod* method)
{
	typedef void (*TransformStreamHandle_SetGlobalTRInternal_Injected_m1E129F2DAF01FB7827263EB8C52FE4B14A4919BA_ftn) (TransformStreamHandle_t8C5876B1532D3FC356DC6135EF7FE62B256D8FAA *, AnimationStream_t2104CE46F2C21C34F635E991A1BEE4B8924D188E *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *, bool);
	static TransformStreamHandle_SetGlobalTRInternal_Injected_m1E129F2DAF01FB7827263EB8C52FE4B14A4919BA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TransformStreamHandle_SetGlobalTRInternal_Injected_m1E129F2DAF01FB7827263EB8C52FE4B14A4919BA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.TransformStreamHandle::SetGlobalTRInternal_Injected(UnityEngine.Animations.TransformStreamHandle&,UnityEngine.Animations.AnimationStream&,UnityEngine.Vector3&,UnityEngine.Quaternion&,System.Boolean)");
	_il2cpp_icall_func(____unity_self0, ___stream1, ___position2, ___rotation3, ___useMask4);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
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
// System.Single UnityEngine.Animator::GetFloat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_GetFloat_m1C8B853CA82031CE4775FBDCDEDDB3C9E702695F (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		String_t* L_0 = ___name0;
		float L_1 = Animator_GetFloatString_mB1518F1964EE15625814C558BB3565330491F3C2(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		float L_2 = V_0;
		return L_2;
	}
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
// System.Boolean UnityEngine.Animator::GetBool(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_GetBool_mA8837B3CA5790D26D1FDB51DF5DD9B846B898717 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		String_t* L_0 = ___name0;
		bool L_1 = Animator_GetBoolString_m8A5CDC7098636F88CA4DADCA80CCBAAFABECE8EC(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.Animator::GetBool(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_GetBool_m3EF049B6FDEE9452A1F23A4B0710B49F43342A66 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___id0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = ___id0;
		bool L_1 = Animator_GetBoolID_m69B15F09CC6076D1778A729FD2CF360C30666C1E(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		bool L_2 = V_0;
		return L_2;
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
// System.Int32 UnityEngine.Animator::GetInteger(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_GetInteger_m1DDF7A3E992C16F0DB2FF02BF37A280181BE90BC (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___id0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___id0;
		int32_t L_1 = Animator_GetIntegerID_m7BE46FDFA31412B2F0F604989D1074381158ACF8(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		int32_t L_2 = V_0;
		return L_2;
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
// System.Void UnityEngine.Animator::ResetTrigger(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_ResetTrigger_mE0784AD15610BB61C5A59663BD9E11FF73ACDABC (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___id0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___id0;
		Animator_ResetTriggerID_m2E7AD9D9943EC2B4CF5D571197DC84D64F4DDEEB(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Animator::IsParameterControlledByCurve(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_IsParameterControlledByCurve_m9ED3A58307F5928EA276A460BC4EAC6543C5BB28 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___id0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = ___id0;
		bool L_1 = Animator_IsParameterControlledByCurveID_mBA13406D9BC43297A366EB83E1BA4A3F906E3A16(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		bool L_2 = V_0;
		return L_2;
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
// UnityEngine.Vector3 UnityEngine.Animator::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Animator_get_velocity_m9AD156A57EEBC07FEDF54DABE02115539DC4D3A7 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Animator_get_velocity_Injected_m48D33C181B2B87A5CCAA25FEC5D70F97C547996B(__this, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Animator::set_updateMode(UnityEngine.AnimatorUpdateMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_updateMode_mE9B6BEDF6F0684E86ED34A0C748A759C218EA96B (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*Animator_set_updateMode_mE9B6BEDF6F0684E86ED34A0C748A759C218EA96B_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t);
	static Animator_set_updateMode_mE9B6BEDF6F0684E86ED34A0C748A759C218EA96B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_updateMode_mE9B6BEDF6F0684E86ED34A0C748A759C218EA96B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_updateMode(UnityEngine.AnimatorUpdateMode)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Int32 UnityEngine.Animator::get_layerCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_get_layerCount_m2360A8B027C5DC4BC1CAE571A46929539C799B9B (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	typedef int32_t (*Animator_get_layerCount_m2360A8B027C5DC4BC1CAE571A46929539C799B9B_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *);
	static Animator_get_layerCount_m2360A8B027C5DC4BC1CAE571A46929539C799B9B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_layerCount_m2360A8B027C5DC4BC1CAE571A46929539C799B9B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_layerCount()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Animator::GetAnimatorStateInfo(System.Int32,UnityEngine.StateInfoIndex,UnityEngine.AnimatorStateInfo&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_GetAnimatorStateInfo_mBDC199173734AF60218E4727E74F689180BC8D8B (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___layerIndex0, int32_t ___stateInfoIndex1, AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 * ___info2, const RuntimeMethod* method)
{
	typedef void (*Animator_GetAnimatorStateInfo_mBDC199173734AF60218E4727E74F689180BC8D8B_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t, int32_t, AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 *);
	static Animator_GetAnimatorStateInfo_mBDC199173734AF60218E4727E74F689180BC8D8B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetAnimatorStateInfo_mBDC199173734AF60218E4727E74F689180BC8D8B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetAnimatorStateInfo(System.Int32,UnityEngine.StateInfoIndex,UnityEngine.AnimatorStateInfo&)");
	_il2cpp_icall_func(__this, ___layerIndex0, ___stateInfoIndex1, ___info2);
}
// UnityEngine.AnimatorStateInfo UnityEngine.Animator::GetCurrentAnimatorStateInfo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2  Animator_GetCurrentAnimatorStateInfo_mBE5ED0D60A6F5CD0EDD40AF1494098D4E7BF84F2 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___layerIndex0, const RuntimeMethod* method)
{
	AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ___layerIndex0;
		Animator_GetAnimatorStateInfo_mBDC199173734AF60218E4727E74F689180BC8D8B(__this, L_0, 0, (AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 *)(&V_0), /*hidden argument*/NULL);
		AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2  L_1 = V_0;
		V_1 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2  L_2 = V_1;
		return L_2;
	}
}
// UnityEngine.AnimatorStateInfo UnityEngine.Animator::GetNextAnimatorStateInfo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2  Animator_GetNextAnimatorStateInfo_m66A6A93E12C1AB63FDB255483B66A57A0E2D527D (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___layerIndex0, const RuntimeMethod* method)
{
	AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ___layerIndex0;
		Animator_GetAnimatorStateInfo_mBDC199173734AF60218E4727E74F689180BC8D8B(__this, L_0, 1, (AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 *)(&V_0), /*hidden argument*/NULL);
		AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2  L_1 = V_0;
		V_1 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2  L_2 = V_1;
		return L_2;
	}
}
// System.Void UnityEngine.Animator::GetAnimatorTransitionInfo(System.Int32,UnityEngine.AnimatorTransitionInfo&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_GetAnimatorTransitionInfo_m729E8495EC0CEC63E0968BDCFC92D72392589F48 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___layerIndex0, AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B * ___info1, const RuntimeMethod* method)
{
	typedef void (*Animator_GetAnimatorTransitionInfo_m729E8495EC0CEC63E0968BDCFC92D72392589F48_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t, AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B *);
	static Animator_GetAnimatorTransitionInfo_m729E8495EC0CEC63E0968BDCFC92D72392589F48_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetAnimatorTransitionInfo_m729E8495EC0CEC63E0968BDCFC92D72392589F48_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetAnimatorTransitionInfo(System.Int32,UnityEngine.AnimatorTransitionInfo&)");
	_il2cpp_icall_func(__this, ___layerIndex0, ___info1);
}
// UnityEngine.AnimatorTransitionInfo UnityEngine.Animator::GetAnimatorTransitionInfo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B  Animator_GetAnimatorTransitionInfo_mF4E216230B82075A0F27113CFD86AFC6290DE941 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___layerIndex0, const RuntimeMethod* method)
{
	AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ___layerIndex0;
		Animator_GetAnimatorTransitionInfo_m729E8495EC0CEC63E0968BDCFC92D72392589F48(__this, L_0, (AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B *)(&V_0), /*hidden argument*/NULL);
		AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B  L_1 = V_0;
		V_1 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B  L_2 = V_1;
		return L_2;
	}
}
// System.Int32 UnityEngine.Animator::GetAnimatorClipInfoCount(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_GetAnimatorClipInfoCount_m0C22B3029680BA11CA78809ECCB8AED1249D8D8E (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___layerIndex0, bool ___current1, const RuntimeMethod* method)
{
	typedef int32_t (*Animator_GetAnimatorClipInfoCount_m0C22B3029680BA11CA78809ECCB8AED1249D8D8E_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t, bool);
	static Animator_GetAnimatorClipInfoCount_m0C22B3029680BA11CA78809ECCB8AED1249D8D8E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetAnimatorClipInfoCount_m0C22B3029680BA11CA78809ECCB8AED1249D8D8E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetAnimatorClipInfoCount(System.Int32,System.Boolean)");
	int32_t retVal = _il2cpp_icall_func(__this, ___layerIndex0, ___current1);
	return retVal;
}
// System.Int32 UnityEngine.Animator::GetCurrentAnimatorClipInfoCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_GetCurrentAnimatorClipInfoCount_mB68F6F9521716016B3019FC67B7DA54F0A68507B (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___layerIndex0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___layerIndex0;
		int32_t L_1 = Animator_GetAnimatorClipInfoCount_m0C22B3029680BA11CA78809ECCB8AED1249D8D8E(__this, L_0, (bool)1, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 UnityEngine.Animator::GetNextAnimatorClipInfoCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_GetNextAnimatorClipInfoCount_mCD21740EE411DBC7B1C296D6B714A0D6939BF03A (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___layerIndex0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___layerIndex0;
		int32_t L_1 = Animator_GetAnimatorClipInfoCount_m0C22B3029680BA11CA78809ECCB8AED1249D8D8E(__this, L_0, (bool)0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Animator::GetCurrentAnimatorClipInfo(System.Int32,System.Collections.Generic.List`1<UnityEngine.AnimatorClipInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_GetCurrentAnimatorClipInfo_m8625554630FDFEC6AD60E38B2CFD4D5B1DC6036F (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___layerIndex0, List_1_t34BD75698B68DE47D684862A345F6F9797CE3F9B * ___clips1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Animator_GetCurrentAnimatorClipInfo_m8625554630FDFEC6AD60E38B2CFD4D5B1DC6036F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		List_1_t34BD75698B68DE47D684862A345F6F9797CE3F9B * L_0 = ___clips1;
		V_0 = (bool)((((RuntimeObject*)(List_1_t34BD75698B68DE47D684862A345F6F9797CE3F9B *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_2 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_2, _stringLiteralC2ACAB5E124D2B5E2EDF7FBA3930A0441C66BBD4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, Animator_GetCurrentAnimatorClipInfo_m8625554630FDFEC6AD60E38B2CFD4D5B1DC6036F_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___layerIndex0;
		List_1_t34BD75698B68DE47D684862A345F6F9797CE3F9B * L_4 = ___clips1;
		Animator_GetAnimatorClipInfoInternal_mD1DD5AC22F4A108D72E26E9CBCCC4FF8379E757E(__this, L_3, (bool)1, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::GetAnimatorClipInfoInternal(System.Int32,System.Boolean,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_GetAnimatorClipInfoInternal_mD1DD5AC22F4A108D72E26E9CBCCC4FF8379E757E (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___layerIndex0, bool ___isCurrent1, RuntimeObject * ___clips2, const RuntimeMethod* method)
{
	typedef void (*Animator_GetAnimatorClipInfoInternal_mD1DD5AC22F4A108D72E26E9CBCCC4FF8379E757E_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t, bool, RuntimeObject *);
	static Animator_GetAnimatorClipInfoInternal_mD1DD5AC22F4A108D72E26E9CBCCC4FF8379E757E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetAnimatorClipInfoInternal_mD1DD5AC22F4A108D72E26E9CBCCC4FF8379E757E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetAnimatorClipInfoInternal(System.Int32,System.Boolean,System.Object)");
	_il2cpp_icall_func(__this, ___layerIndex0, ___isCurrent1, ___clips2);
}
// System.Void UnityEngine.Animator::GetNextAnimatorClipInfo(System.Int32,System.Collections.Generic.List`1<UnityEngine.AnimatorClipInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_GetNextAnimatorClipInfo_mA7E644BD404E93AE54AA61BBF9C6925485895A49 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___layerIndex0, List_1_t34BD75698B68DE47D684862A345F6F9797CE3F9B * ___clips1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Animator_GetNextAnimatorClipInfo_mA7E644BD404E93AE54AA61BBF9C6925485895A49_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		List_1_t34BD75698B68DE47D684862A345F6F9797CE3F9B * L_0 = ___clips1;
		V_0 = (bool)((((RuntimeObject*)(List_1_t34BD75698B68DE47D684862A345F6F9797CE3F9B *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_2 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_2, _stringLiteralC2ACAB5E124D2B5E2EDF7FBA3930A0441C66BBD4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, Animator_GetNextAnimatorClipInfo_mA7E644BD404E93AE54AA61BBF9C6925485895A49_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___layerIndex0;
		List_1_t34BD75698B68DE47D684862A345F6F9797CE3F9B * L_4 = ___clips1;
		Animator_GetAnimatorClipInfoInternal_mD1DD5AC22F4A108D72E26E9CBCCC4FF8379E757E(__this, L_3, (bool)0, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Animator::IsInTransition(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_IsInTransition_m03E4399EA4D614A08F61AD5295CDFE5E4B43798C (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___layerIndex0, const RuntimeMethod* method)
{
	typedef bool (*Animator_IsInTransition_m03E4399EA4D614A08F61AD5295CDFE5E4B43798C_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t);
	static Animator_IsInTransition_m03E4399EA4D614A08F61AD5295CDFE5E4B43798C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_IsInTransition_m03E4399EA4D614A08F61AD5295CDFE5E4B43798C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::IsInTransition(System.Int32)");
	bool retVal = _il2cpp_icall_func(__this, ___layerIndex0);
	return retVal;
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
// System.Void UnityEngine.Animator::Play(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_Play_m254CA699DF64E86856EC8C54D1A739E3C0A49793 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___stateName0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	{
		V_0 = (-std::numeric_limits<float>::infinity());
		V_1 = (-1);
		String_t* L_0 = ___stateName0;
		int32_t L_1 = V_1;
		float L_2 = V_0;
		Animator_Play_m1942D7FB37F84959D2C6A859E11F70791E95FA50(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::Play(System.String,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_Play_m1942D7FB37F84959D2C6A859E11F70791E95FA50 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___stateName0, int32_t ___layer1, float ___normalizedTime2, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___stateName0;
		int32_t L_1 = Animator_StringToHash_m80E4CCCB84AAD032A5D84EF5832B7F35C1E5AE3F(L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___layer1;
		float L_3 = ___normalizedTime2;
		Animator_Play_m20B525F785DA59888E645125DB2DDC071E924F3E(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
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
// System.Void UnityEngine.Animator::set_cullingMode(UnityEngine.AnimatorCullingMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_cullingMode_mE863324107A9723E49D300D42847D2B8B2280D0C (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*Animator_set_cullingMode_mE863324107A9723E49D300D42847D2B8B2280D0C_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t);
	static Animator_set_cullingMode_mE863324107A9723E49D300D42847D2B8B2280D0C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_cullingMode_mE863324107A9723E49D300D42847D2B8B2280D0C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_cullingMode(UnityEngine.AnimatorCullingMode)");
	_il2cpp_icall_func(__this, ___value0);
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
// System.Single UnityEngine.Animator::GetFloatString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_GetFloatString_mB1518F1964EE15625814C558BB3565330491F3C2 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, const RuntimeMethod* method)
{
	typedef float (*Animator_GetFloatString_mB1518F1964EE15625814C558BB3565330491F3C2_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, String_t*);
	static Animator_GetFloatString_mB1518F1964EE15625814C558BB3565330491F3C2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetFloatString_mB1518F1964EE15625814C558BB3565330491F3C2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetFloatString(System.String)");
	float retVal = _il2cpp_icall_func(__this, ___name0);
	return retVal;
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
// System.Boolean UnityEngine.Animator::GetBoolString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_GetBoolString_m8A5CDC7098636F88CA4DADCA80CCBAAFABECE8EC (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, const RuntimeMethod* method)
{
	typedef bool (*Animator_GetBoolString_m8A5CDC7098636F88CA4DADCA80CCBAAFABECE8EC_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, String_t*);
	static Animator_GetBoolString_m8A5CDC7098636F88CA4DADCA80CCBAAFABECE8EC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetBoolString_m8A5CDC7098636F88CA4DADCA80CCBAAFABECE8EC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetBoolString(System.String)");
	bool retVal = _il2cpp_icall_func(__this, ___name0);
	return retVal;
}
// System.Boolean UnityEngine.Animator::GetBoolID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_GetBoolID_m69B15F09CC6076D1778A729FD2CF360C30666C1E (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___id0, const RuntimeMethod* method)
{
	typedef bool (*Animator_GetBoolID_m69B15F09CC6076D1778A729FD2CF360C30666C1E_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t);
	static Animator_GetBoolID_m69B15F09CC6076D1778A729FD2CF360C30666C1E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetBoolID_m69B15F09CC6076D1778A729FD2CF360C30666C1E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetBoolID(System.Int32)");
	bool retVal = _il2cpp_icall_func(__this, ___id0);
	return retVal;
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
// System.Int32 UnityEngine.Animator::GetIntegerID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_GetIntegerID_m7BE46FDFA31412B2F0F604989D1074381158ACF8 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___id0, const RuntimeMethod* method)
{
	typedef int32_t (*Animator_GetIntegerID_m7BE46FDFA31412B2F0F604989D1074381158ACF8_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t);
	static Animator_GetIntegerID_m7BE46FDFA31412B2F0F604989D1074381158ACF8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetIntegerID_m7BE46FDFA31412B2F0F604989D1074381158ACF8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetIntegerID(System.Int32)");
	int32_t retVal = _il2cpp_icall_func(__this, ___id0);
	return retVal;
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
// System.Void UnityEngine.Animator::ResetTriggerID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_ResetTriggerID_m2E7AD9D9943EC2B4CF5D571197DC84D64F4DDEEB (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___id0, const RuntimeMethod* method)
{
	typedef void (*Animator_ResetTriggerID_m2E7AD9D9943EC2B4CF5D571197DC84D64F4DDEEB_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t);
	static Animator_ResetTriggerID_m2E7AD9D9943EC2B4CF5D571197DC84D64F4DDEEB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_ResetTriggerID_m2E7AD9D9943EC2B4CF5D571197DC84D64F4DDEEB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::ResetTriggerID(System.Int32)");
	_il2cpp_icall_func(__this, ___id0);
}
// System.Boolean UnityEngine.Animator::IsParameterControlledByCurveID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_IsParameterControlledByCurveID_mBA13406D9BC43297A366EB83E1BA4A3F906E3A16 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___id0, const RuntimeMethod* method)
{
	typedef bool (*Animator_IsParameterControlledByCurveID_mBA13406D9BC43297A366EB83E1BA4A3F906E3A16_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t);
	static Animator_IsParameterControlledByCurveID_mBA13406D9BC43297A366EB83E1BA4A3F906E3A16_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_IsParameterControlledByCurveID_mBA13406D9BC43297A366EB83E1BA4A3F906E3A16_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::IsParameterControlledByCurveID(System.Int32)");
	bool retVal = _il2cpp_icall_func(__this, ___id0);
	return retVal;
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
// System.Void UnityEngine.Animator::get_deltaPosition_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_get_deltaPosition_Injected_mB3C1937C55150A4E113BB2D8D6FEC323268C7BBA (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___ret0, const RuntimeMethod* method)
{
	typedef void (*Animator_get_deltaPosition_Injected_mB3C1937C55150A4E113BB2D8D6FEC323268C7BBA_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *);
	static Animator_get_deltaPosition_Injected_mB3C1937C55150A4E113BB2D8D6FEC323268C7BBA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_deltaPosition_Injected_mB3C1937C55150A4E113BB2D8D6FEC323268C7BBA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_deltaPosition_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Void UnityEngine.Animator::get_velocity_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_get_velocity_Injected_m48D33C181B2B87A5CCAA25FEC5D70F97C547996B (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___ret0, const RuntimeMethod* method)
{
	typedef void (*Animator_get_velocity_Injected_m48D33C181B2B87A5CCAA25FEC5D70F97C547996B_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *);
	static Animator_get_velocity_Injected_m48D33C181B2B87A5CCAA25FEC5D70F97C547996B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_velocity_Injected_m48D33C181B2B87A5CCAA25FEC5D70F97C547996B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_velocity_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___ret0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.AnimationClip UnityEngine.AnimatorClipInfo::get_clip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * AnimatorClipInfo_get_clip_mF5A49B54502CBFE17327989ED0701EDC23F1B2A4 (AnimatorClipInfo_t78457ABBA83D388EDFF26F436F5E61A29CF4E180 * __this, const RuntimeMethod* method)
{
	AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * V_0 = NULL;
	AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * G_B3_0 = NULL;
	{
		int32_t L_0 = __this->get_m_ClipInstanceID_0();
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		G_B3_0 = ((AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE *)(NULL));
		goto IL_0017;
	}

IL_000c:
	{
		int32_t L_1 = __this->get_m_ClipInstanceID_0();
		AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * L_2 = AnimatorClipInfo_InstanceIDToAnimationClipPPtr_m84ABBDE6B5906BC43660E9885278035907AAC7EE(L_1, /*hidden argument*/NULL);
		G_B3_0 = L_2;
	}

IL_0017:
	{
		V_0 = G_B3_0;
		goto IL_001a;
	}

IL_001a:
	{
		AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * AnimatorClipInfo_get_clip_mF5A49B54502CBFE17327989ED0701EDC23F1B2A4_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimatorClipInfo_t78457ABBA83D388EDFF26F436F5E61A29CF4E180 * _thisAdjusted = reinterpret_cast<AnimatorClipInfo_t78457ABBA83D388EDFF26F436F5E61A29CF4E180 *>(__this + _offset);
	return AnimatorClipInfo_get_clip_mF5A49B54502CBFE17327989ED0701EDC23F1B2A4(_thisAdjusted, method);
}
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
// UnityEngine.AnimationClip UnityEngine.AnimatorClipInfo::InstanceIDToAnimationClipPPtr(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * AnimatorClipInfo_InstanceIDToAnimationClipPPtr_m84ABBDE6B5906BC43660E9885278035907AAC7EE (int32_t ___instanceID0, const RuntimeMethod* method)
{
	typedef AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * (*AnimatorClipInfo_InstanceIDToAnimationClipPPtr_m84ABBDE6B5906BC43660E9885278035907AAC7EE_ftn) (int32_t);
	static AnimatorClipInfo_InstanceIDToAnimationClipPPtr_m84ABBDE6B5906BC43660E9885278035907AAC7EE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimatorClipInfo_InstanceIDToAnimationClipPPtr_m84ABBDE6B5906BC43660E9885278035907AAC7EE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimatorClipInfo::InstanceIDToAnimationClipPPtr(System.Int32)");
	AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * retVal = _il2cpp_icall_func(___instanceID0);
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
// UnityEngine.AnimatorControllerParameterType UnityEngine.AnimatorControllerParameter::get_type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimatorControllerParameter_get_type_mA0A786BD2BA5886464351B355E59395F87B98F02 (AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_Type_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
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
// System.Boolean UnityEngine.AnimatorStateInfo::IsName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimatorStateInfo_IsName_mD133471910C1ACE0979F3FD11462C9B8BB24CA96 (AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t G_B4_0 = 0;
	{
		String_t* L_0 = ___name0;
		int32_t L_1 = Animator_StringToHash_m80E4CCCB84AAD032A5D84EF5832B7F35C1E5AE3F(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = __this->get_m_FullPath_2();
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_4 = V_0;
		int32_t L_5 = __this->get_m_Name_0();
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_6 = V_0;
		int32_t L_7 = __this->get_m_Path_1();
		G_B4_0 = ((((int32_t)L_6) == ((int32_t)L_7))? 1 : 0);
		goto IL_0026;
	}

IL_0025:
	{
		G_B4_0 = 1;
	}

IL_0026:
	{
		V_1 = (bool)G_B4_0;
		goto IL_0029;
	}

IL_0029:
	{
		bool L_8 = V_1;
		return L_8;
	}
}
IL2CPP_EXTERN_C  bool AnimatorStateInfo_IsName_mD133471910C1ACE0979F3FD11462C9B8BB24CA96_AdjustorThunk (RuntimeObject * __this, String_t* ___name0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 * _thisAdjusted = reinterpret_cast<AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 *>(__this + _offset);
	return AnimatorStateInfo_IsName_mD133471910C1ACE0979F3FD11462C9B8BB24CA96(_thisAdjusted, ___name0, method);
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_fullPathHash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimatorStateInfo_get_fullPathHash_m2865A5467A1201025DAD3E58E420D0870CDF90C2 (AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_FullPath_2();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t AnimatorStateInfo_get_fullPathHash_m2865A5467A1201025DAD3E58E420D0870CDF90C2_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 * _thisAdjusted = reinterpret_cast<AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 *>(__this + _offset);
	return AnimatorStateInfo_get_fullPathHash_m2865A5467A1201025DAD3E58E420D0870CDF90C2(_thisAdjusted, method);
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_nameHash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimatorStateInfo_get_nameHash_m290E8D6A9EDE89FC1410E44E380F5AE4F4E3EEC2 (AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_Path_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t AnimatorStateInfo_get_nameHash_m290E8D6A9EDE89FC1410E44E380F5AE4F4E3EEC2_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 * _thisAdjusted = reinterpret_cast<AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 *>(__this + _offset);
	return AnimatorStateInfo_get_nameHash_m290E8D6A9EDE89FC1410E44E380F5AE4F4E3EEC2(_thisAdjusted, method);
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_shortNameHash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimatorStateInfo_get_shortNameHash_m36C7DCCCB2E03A06180CFC077C5B6FE6FCF4E31B (AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_Name_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t AnimatorStateInfo_get_shortNameHash_m36C7DCCCB2E03A06180CFC077C5B6FE6FCF4E31B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 * _thisAdjusted = reinterpret_cast<AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 *>(__this + _offset);
	return AnimatorStateInfo_get_shortNameHash_m36C7DCCCB2E03A06180CFC077C5B6FE6FCF4E31B(_thisAdjusted, method);
}
// System.Single UnityEngine.AnimatorStateInfo::get_normalizedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimatorStateInfo_get_normalizedTime_m3AB6A2DB592BB9CA0B9A4EF8A382C4DF3F5F6BBD (AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_m_NormalizedTime_3();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  float AnimatorStateInfo_get_normalizedTime_m3AB6A2DB592BB9CA0B9A4EF8A382C4DF3F5F6BBD_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 * _thisAdjusted = reinterpret_cast<AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 *>(__this + _offset);
	return AnimatorStateInfo_get_normalizedTime_m3AB6A2DB592BB9CA0B9A4EF8A382C4DF3F5F6BBD(_thisAdjusted, method);
}
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
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_fullPathHash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimatorTransitionInfo_get_fullPathHash_mCB00E82B499A9F4084FEFFE8757F352541EA055E (AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_FullPath_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t AnimatorTransitionInfo_get_fullPathHash_mCB00E82B499A9F4084FEFFE8757F352541EA055E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B * _thisAdjusted = reinterpret_cast<AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B *>(__this + _offset);
	return AnimatorTransitionInfo_get_fullPathHash_mCB00E82B499A9F4084FEFFE8757F352541EA055E(_thisAdjusted, method);
}
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_nameHash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimatorTransitionInfo_get_nameHash_m128B8297723ED8268678A8F1342090FED08A5680 (AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_Name_2();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t AnimatorTransitionInfo_get_nameHash_m128B8297723ED8268678A8F1342090FED08A5680_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B * _thisAdjusted = reinterpret_cast<AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B *>(__this + _offset);
	return AnimatorTransitionInfo_get_nameHash_m128B8297723ED8268678A8F1342090FED08A5680(_thisAdjusted, method);
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
// System.Void UnityEngine.Experimental.Animations.AnimationPlayableOutputExtensions::SetAnimationStreamSource(UnityEngine.Animations.AnimationPlayableOutput,UnityEngine.Experimental.Animations.AnimationStreamSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableOutputExtensions_SetAnimationStreamSource_mEA93C6ED6A96EC4CF003751ECD5D70AA233B0A1F (AnimationPlayableOutput_tA10178429D6528BDB4516F6788CE680E349553E6  ___output0, int32_t ___streamSource1, const RuntimeMethod* method)
{
	{
		PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  L_0 = AnimationPlayableOutput_GetHandle_m7E849F774F2B3E233A115FFB63DF473AF88F95E0((AnimationPlayableOutput_tA10178429D6528BDB4516F6788CE680E349553E6 *)(&___output0), /*hidden argument*/NULL);
		int32_t L_1 = ___streamSource1;
		AnimationPlayableOutputExtensions_InternalSetAnimationStreamSource_mFC98549A1DD778A9F9B46EDEF1826C935E94A682(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Experimental.Animations.AnimationPlayableOutputExtensions::SetSortingOrder(UnityEngine.Animations.AnimationPlayableOutput,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableOutputExtensions_SetSortingOrder_mAE737C2F61B02092FCDBFC2BDD5A6C5FA18DE7FD (AnimationPlayableOutput_tA10178429D6528BDB4516F6788CE680E349553E6  ___output0, uint16_t ___sortingOrder1, const RuntimeMethod* method)
{
	{
		PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  L_0 = AnimationPlayableOutput_GetHandle_m7E849F774F2B3E233A115FFB63DF473AF88F95E0((AnimationPlayableOutput_tA10178429D6528BDB4516F6788CE680E349553E6 *)(&___output0), /*hidden argument*/NULL);
		uint16_t L_1 = ___sortingOrder1;
		AnimationPlayableOutputExtensions_InternalSetSortingOrder_mDF5CF3765C40736461105442956CC995BA5827E6(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Experimental.Animations.AnimationPlayableOutputExtensions::InternalSetAnimationStreamSource(UnityEngine.Playables.PlayableOutputHandle,UnityEngine.Experimental.Animations.AnimationStreamSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableOutputExtensions_InternalSetAnimationStreamSource_mFC98549A1DD778A9F9B46EDEF1826C935E94A682 (PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  ___output0, int32_t ___streamSource1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___streamSource1;
		AnimationPlayableOutputExtensions_InternalSetAnimationStreamSource_Injected_mE7B77D2F8C6FEAF850F0F9B8A8F70B2EF552EF18((PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 *)(&___output0), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Experimental.Animations.AnimationPlayableOutputExtensions::InternalSetSortingOrder(UnityEngine.Playables.PlayableOutputHandle,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableOutputExtensions_InternalSetSortingOrder_mDF5CF3765C40736461105442956CC995BA5827E6 (PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  ___output0, int32_t ___sortingOrder1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___sortingOrder1;
		AnimationPlayableOutputExtensions_InternalSetSortingOrder_Injected_m0ADAE73D663E356FCE84FAFD5D17D8507644257E((PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 *)(&___output0), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Experimental.Animations.AnimationPlayableOutputExtensions::InternalSetAnimationStreamSource_Injected(UnityEngine.Playables.PlayableOutputHandle&,UnityEngine.Experimental.Animations.AnimationStreamSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableOutputExtensions_InternalSetAnimationStreamSource_Injected_mE7B77D2F8C6FEAF850F0F9B8A8F70B2EF552EF18 (PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 * ___output0, int32_t ___streamSource1, const RuntimeMethod* method)
{
	typedef void (*AnimationPlayableOutputExtensions_InternalSetAnimationStreamSource_Injected_mE7B77D2F8C6FEAF850F0F9B8A8F70B2EF552EF18_ftn) (PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 *, int32_t);
	static AnimationPlayableOutputExtensions_InternalSetAnimationStreamSource_Injected_mE7B77D2F8C6FEAF850F0F9B8A8F70B2EF552EF18_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationPlayableOutputExtensions_InternalSetAnimationStreamSource_Injected_mE7B77D2F8C6FEAF850F0F9B8A8F70B2EF552EF18_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Animations.AnimationPlayableOutputExtensions::InternalSetAnimationStreamSource_Injected(UnityEngine.Playables.PlayableOutputHandle&,UnityEngine.Experimental.Animations.AnimationStreamSource)");
	_il2cpp_icall_func(___output0, ___streamSource1);
}
// System.Void UnityEngine.Experimental.Animations.AnimationPlayableOutputExtensions::InternalSetSortingOrder_Injected(UnityEngine.Playables.PlayableOutputHandle&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableOutputExtensions_InternalSetSortingOrder_Injected_m0ADAE73D663E356FCE84FAFD5D17D8507644257E (PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 * ___output0, int32_t ___sortingOrder1, const RuntimeMethod* method)
{
	typedef void (*AnimationPlayableOutputExtensions_InternalSetSortingOrder_Injected_m0ADAE73D663E356FCE84FAFD5D17D8507644257E_ftn) (PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 *, int32_t);
	static AnimationPlayableOutputExtensions_InternalSetSortingOrder_Injected_m0ADAE73D663E356FCE84FAFD5D17D8507644257E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationPlayableOutputExtensions_InternalSetSortingOrder_Injected_m0ADAE73D663E356FCE84FAFD5D17D8507644257E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Animations.AnimationPlayableOutputExtensions::InternalSetSortingOrder_Injected(UnityEngine.Playables.PlayableOutputHandle&,System.Int32)");
	_il2cpp_icall_func(___output0, ___sortingOrder1);
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
