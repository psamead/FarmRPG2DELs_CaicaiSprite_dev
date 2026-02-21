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
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// Cinemachine.CinemachineBlend
struct CinemachineBlend_t7A2A71833A7E2C44AB1D7874B3D076EF46A56298;
// Cinemachine.CinemachineBlenderSettings
struct CinemachineBlenderSettings_tCD488C84B252394D8CDD7D0DB623D991BE77F3F0;
// Cinemachine.CinemachineBrain
struct CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB;
// Cinemachine.CinemachineBrain/BrainEvent
struct BrainEvent_tCB30E3A5C9244915F355517663D4E440A54F79C0;
// Cinemachine.CinemachineBrain/VcamActivatedEvent
struct VcamActivatedEvent_tD6FFF8FCC883ABD7CC27619CD451E6FE56DB4A3B;
// Cinemachine.CinemachineCore/AxisInputDelegate
struct AxisInputDelegate_t5352DB1BE196BC488C6BBD6FE1F0541CA8A887CE;
// Cinemachine.CinemachineCore/GetBlendOverrideDelegate
struct GetBlendOverrideDelegate_t26D8778A313C528295CC34D776A57119AE7F1EB8;
// Cinemachine.CinemachineCore/Stage[]
struct StageU5BU5D_tC107E846F8ED5DBF4CEF77B4AFCC26D9DBE723A2;
// Cinemachine.CinemachineExtension
struct CinemachineExtension_t397048E40D5EB90A0A06031DCF9E1B52306D06AE;
// Cinemachine.CinemachineVirtualCameraBase
struct CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD;
// Cinemachine.ICinemachineCamera
struct ICinemachineCamera_t89A591897FD47A23EAD91D2B3DA94B7EB3B322FD;
// Cinemachine.VcamTargetPropertyAttribute
struct VcamTargetPropertyAttribute_t7DF91AEFF1BD2B83D640D6D39F1720CB57798B1F;
// CinemachineCameraOffset
struct CinemachineCameraOffset_t2D656B9D964F68E61A5168495C2666BE6B8AD693;
// CinemachineMixer
struct CinemachineMixer_t8EFE2E6576C85DDC174244459CC647BF68D75EC2;
// CinemachineMixer/MasterDirectorDelegate
struct MasterDirectorDelegate_t3B919084EAF5EA2C88943445B34713394E0C4AD6;
// CinemachineRecomposer
struct CinemachineRecomposer_tF064BE416E48B7EF8577A863C748B35C1A0E48FD;
// CinemachineShot
struct CinemachineShot_tD3D7C77FC8883876C78322509579E70D4ABFE1D5;
// CinemachineShotPlayable
struct CinemachineShotPlayable_t518787FCEF1470A6B42A2A6A72E4AD8D34D8C0CE;
// CinemachineTouchInputMapper
struct CinemachineTouchInputMapper_tFBE56B48653FF45E533FC1C63DDB5FB930192815;
// CinemachineTrack
struct CinemachineTrack_t6B531D379A33136302768D59460F3E8B1AC6D79D;
// System.Action`1<UnityEngine.Playables.PlayableDirector>
struct Action_1_t25E50453F931760A3FC110C4EC79B73BBC203021;
// System.Action`3<UnityEngine.Timeline.TimelineClip,UnityEngine.GameObject,UnityEngine.Playables.Playable>
struct Action_3_t3DEF6B983A6FD251CA5E86CED7441D9CF0A26209;
// System.Action`3<UnityEngine.Timeline.TrackAsset,UnityEngine.GameObject,UnityEngine.Playables.Playable>
struct Action_3_t08E03FF5D8187DCF3A2B450F10E005618E1956C1;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<Cinemachine.CinemachineVirtualCameraBase,Cinemachine.CinemachineCore/UpdateStatus>
struct Dictionary_2_tACB39FA2E62BA2EA60CEBEAE83D5AB8B14A1D280;
// System.Collections.Generic.Dictionary`2<Cinemachine.ICinemachineCamera,System.Object>
struct Dictionary_2_tA752E1EEBD2A0EF17F6A4C0262D35070B38CE8A2;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.Timeline.TrackBindingTypeAttribute>
struct Dictionary_2_t1B7E37FEB7F10BFB6B7320EF2FEC7B2CDE25C7E4;
// System.Collections.Generic.Dictionary`2<UnityEngine.Transform,Cinemachine.TargetPositionCache/CacheEntry>
struct Dictionary_2_tC828B62C23DF118F79F73B89C024ABBCCE87873B;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Timeline.TrackAsset>
struct IEnumerable_1_t5E4794B9C0140D35E865840CCDBFC9FEF5E3EFB9;
// System.Collections.Generic.List`1<Cinemachine.CameraState/CustomBlendable>
struct List_1_t9754DDC645F03421B1583C8773EB2797AB4B96B5;
// System.Collections.Generic.List`1<Cinemachine.CinemachineBrain/BrainFrame>
struct List_1_tACCC6306B7B7555D17ED9223157499B6CEDAA0F7;
// System.Collections.Generic.List`1<Cinemachine.CinemachineBrain>
struct List_1_tC0D9EEE4F50880325C33F6FABD6B0EB876E7FB3D;
// System.Collections.Generic.List`1<Cinemachine.CinemachineExtension>
struct List_1_t368EDCAA9D752F3C679EB61F998F2B839F58843E;
// System.Collections.Generic.List`1<Cinemachine.CinemachineVirtualCameraBase>
struct List_1_t2A7D1450D916CAA44FEB79B0E5C2E4EF5A02CECF;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<Cinemachine.CinemachineVirtualCameraBase>>
struct List_1_tBDF194622D0C56020E8C4DD7B5145B2988CA19A4;
// System.Collections.Generic.List`1<UnityEngine.ScriptableObject>
struct List_1_t41ED65DE2CE5065D598F08F2FA793FD1FF75A8AF;
// System.Collections.Generic.List`1<UnityEngine.Timeline.IMarker>
struct List_1_t1AED215F7BB55B002913F379B2D00119A92B8FBC;
// System.Collections.Generic.List`1<UnityEngine.Timeline.TimelineClip>
struct List_1_t6E4584A39B7BEEB659D9A568195C253D69ABAAEA;
// System.Collections.Generic.List`1<UnityEngine.Timeline.TrackAsset>
struct List_1_t9EFBDDF9C4ED217F9B47075B2659634AF4988704;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.AnimationClip
struct AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE;
// UnityEngine.AnimationCurve
struct AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C;
// UnityEngine.AnimationCurve[]
struct AnimationCurveU5BU5D_tAB8BA6D5F8B505DDDA61F8065F6E870AA1F560E1;
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.IExposedPropertyTable
struct IExposedPropertyTable_tBA6A5A41F6283C34744CA6EE8B7BE2F0679CF885;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Playables.PlayableAsset
struct PlayableAsset_t28B670EFE526C0D383A1C5A5AE2A150424E989AD;
// UnityEngine.Playables.PlayableBehaviour
struct PlayableBehaviour_t5F4AA32E735199182CC5F57D426D27BE8ABA8F01;
// UnityEngine.Playables.PlayableDirector
struct PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2;
// UnityEngine.PropertyAttribute
struct PropertyAttribute_t25BFFC093C9C96E3CCF4EAB36F5DC6F937B1FA54;
// UnityEngine.Timeline.IPropertyCollector
struct IPropertyCollector_t716BB6257535844909D08C5849BF25BEFAB51AC1;
// UnityEngine.Timeline.TimelineClip[]
struct TimelineClipU5BU5D_tF91A3D5ECF00F61AAD13F3FCFE125B4F7FA5982E;
// UnityEngine.Timeline.TrackAsset
struct TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D;
// UnityEngine.Timeline.TrackAsset[]
struct TrackAssetU5BU5D_t064A662B3D4A13A5BAAB5D4CAD343DB1D2171EF5;
// UnityEngine.Touch[]
struct TouchU5BU5D_t0207B72FD95EF1F56E7A6C9F0A42896B03D2BD5D;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.WaitForFixedUpdate
struct WaitForFixedUpdate_t8801328F075019AF6B6150B20EC343935A29FF97;

IL2CPP_EXTERN_C RuntimeClass* AxisInputDelegate_t5352DB1BE196BC488C6BBD6FE1F0541CA8A887CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TargetPositionCache_tA9799E434495CE93B39D6A5D6A34BF1604875E42_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1E88AB05D76FF253F292B74866D32460BB3836E2;
IL2CPP_EXTERN_C String_t* _stringLiteral20B7AF975FE61D31242708B325C2EBE54C427D42;
IL2CPP_EXTERN_C String_t* _stringLiteral25A7D94AE338306D36C6374758F830F411BC7709;
IL2CPP_EXTERN_C String_t* _stringLiteral294D359ECE148A430F19981912277E5154CA19E0;
IL2CPP_EXTERN_C String_t* _stringLiteral76F5995D7A1D434E1D7C4046772BDE3F81E26ADA;
IL2CPP_EXTERN_C String_t* _stringLiteral7DE47ED25C8CD4D0D230E6261B3C1BE71F746BD6;
IL2CPP_EXTERN_C String_t* _stringLiteral9975DAF0085BA0D080E112D87C20E40CD439A2CC;
IL2CPP_EXTERN_C String_t* _stringLiteral9A785CD4972BE86C50E73451FBD17C50E9A61609;
IL2CPP_EXTERN_C String_t* _stringLiteralAEEEC79135C627C521C9AF016C69BE1561778B7C;
IL2CPP_EXTERN_C String_t* _stringLiteralCC357B8329982D47F9D2DAC70F02E7F8E8217DD0;
IL2CPP_EXTERN_C String_t* _stringLiteralD0BDB1A683AF21C4D3907C91B62158B7170DC94B;
IL2CPP_EXTERN_C String_t* _stringLiteralD8EE6A18D5B371A364BE13F498C76E11E321DECB;
IL2CPP_EXTERN_C const RuntimeMethod* CinemachineTouchInputMapper_GetInputAxis_m7A2342D7913F4BF3711C35E69AD6F61FBCD37A37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExposedReference_1_Resolve_m97A5CBAEBA1062ED36BF724510A76204AF114E74_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB_mBD916E48F072E85917A54BADF9B02330C838FEA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPropertyCollector_AddFromName_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_m947A59E8BC6D05E58F58A13170DEAE422D5EE674_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPropertyCollector_AddFromName_TisTransform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_mDFC2D7B7B2E4DA5F6BDB273CCEE651714E599468_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableExtensions_GetDuration_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m3557C19B4048EF5C9E875572F0E47D5EFB8E8E75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableExtensions_GetDuration_TisScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A_m5311B48AA1AC40CCC1C7E5F416C71CB0D5C2F77D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableExtensions_GetInputCount_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_mD04A716A5F8BF194F20D8AA2CEC2388233504F33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableExtensions_GetInputWeight_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_mBAE3A98FEA61C11C997238263E219EEE147E0F2B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableExtensions_GetInput_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m458E510D241640A39A9FFD46A4094623CB6B2D92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableExtensions_GetPlayState_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m2449EED62648E08ED363284EEFF1080E562C7981_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableExtensions_GetTime_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m2B7F64DD20E0D9B18A3E60B1B0BB0056B7C6747D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableExtensions_GetTime_TisScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A_m0EC69EBE63C5C7E96133DEBDAB0CEBCFA5A74BDB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableExtensions_SetInputCount_TisScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B_m847F542F39A4F6792F586FE306664FB4E37E649F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptPlayable_1_Create_mDE5946292E4A4165D00B39EACF469071ADA73189_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptPlayable_1_Create_mF1204C0279C018CD6130BBFFA0F9D3E5CFA026D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptPlayable_1_GetBehaviour_mCF976DA4F09705321BC4E47673AAB78F09B913F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptPlayable_1_op_Explicit_m8AFDFB2071A6323A8AF5A938EBF5547C28F01652_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptPlayable_1_op_Implicit_m6F1FE1C8EFB32C6564EAB7C8E44FB9DF276102D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptPlayable_1_op_Implicit_m9388F54AB0598505CA6ED126475CB8DC2172407B_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t CinemachineCameraOffset_PostPipelineStageCallback_m12777380D2DCFC115C2A8AE6F07304C62B88C049_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CinemachineCameraOffset__ctor_m98184CA5AE9FE91AB824BB023B17ECF5BD1019BF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CinemachineMixer_GetDeltaTime_mEA6473C55C1D43106E7F6EF9B15E58955D418A2D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CinemachineMixer_OnPlayableDestroy_m34D62485682D21923664DF61BEBD71E1A1EF44CB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CinemachineMixer_ProcessFrame_mF8767A07041ADA879C57F56736DE89454E9BDF09_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CinemachineRecomposer_OnValidate_m22401285E4DCB06E90E12410C7F4ACB30A81EF73_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CinemachineRecomposer_PostPipelineStageCallback_m6571EAB849AE1FB94A5019D2E766C088073D98D7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CinemachineShotPlayable_get_IsValid_mB1F51FF9816FBC56D680EB7F47919C5C69C35331_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CinemachineShot_CreatePlayable_m9FF5653D04CAFD839568D784D68DDE4F63C1A04F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CinemachineShot_GatherProperties_m503ED5DE1E71FCCCAACE2E6DE385B1179CBA66EB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CinemachineTouchInputMapper_Start_m15388C86B79D1CA2833E5408D1CA2151519F5424_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CinemachineTouchInputMapper__ctor_mD73B04A8718E3A899F4359C9CD4ACA08E9D1305E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CinemachineTrack_CreateTrackMixer_m879E9C56FBCAE3C28F1BAD6CF247A904BBDAC1A7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CinemachineTrack__ctor_m0C7D2958AD95C45518C9BEAB9418AEB192B0DBAE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TargetPositionCache_get_CacheMode_m7C4D3FC799E34E324A56B695AC9D6E6844B8725CCinemachine3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityVectorExtensions_Abs_m306CBBA7519A685B4A409FA92A75A450A7A03E82_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityVectorExtensions_Abs_m511D6D40B4EB81D3CFF86A41EAB952606DD5D1D3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityVectorExtensions_Angle_m51BB9FF2F18CF2F2B7CCCFDF4B22F6061B487FD3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityVectorExtensions_ClosestPointOnSegment_m85309B3AC8DD44D081FFA53A2A9D844BCB7046FF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityVectorExtensions_ClosestPointOnSegment_mB4297DD213BAA7738E173F1B6A8AE7295812EF5A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityVectorExtensions_FindIntersection_mAB1160D1AAF54D69D9416C5C7EC70466CB262D92_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityVectorExtensions_IsUniform_m1C39B97EB4C2C8D0A09FFFF53BC4C4C47CFD98A3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityVectorExtensions_IsUniform_m9BCD19800BF008AAB1CA923C626A0ACEFCBB1DC9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityVectorExtensions_ProjectOntoPlane_m4011502AB317965F1142F74D9B5F17C1EBB639EA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityVectorExtensions_SafeFromToRotation_mD8833A51B691738B2F6EFB46750C92380AC0B6BC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityVectorExtensions_SignedAngle_mACC4C418DBAC81BF1F719AAFCF2EE55364AE908D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityVectorExtensions_SlerpWithReferenceUp_m2C4005C18D79C50E3DD198E7C067AC46D4FFEAEF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityVectorExtensions_SquareNormalize_mF37F0A57F428858728BBDB3E1C12D28BA2148BD0_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com;

struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct TouchU5BU5D_t0207B72FD95EF1F56E7A6C9F0A42896B03D2BD5D;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// Cinemachine.Utility.UnityRectExtensions
struct  UnityRectExtensions_tD2D2C115AA54BE180CE78EF2BB37D1EC18A36847  : public RuntimeObject
{
public:

public:
};


// Cinemachine.Utility.UnityVectorExtensions
struct  UnityVectorExtensions_t8B7D79BD392965E48AEA9B91EE25FD09244E69B3  : public RuntimeObject
{
public:

public:
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct  Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74  : public RuntimeObject
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

// UnityEngine.Playables.PlayableBehaviour
struct  PlayableBehaviour_t5F4AA32E735199182CC5F57D426D27BE8ABA8F01  : public RuntimeObject
{
public:

public:
};


// Cinemachine.CameraState_CustomBlendable
struct  CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253 
{
public:
	// UnityEngine.Object Cinemachine.CameraState_CustomBlendable::m_Custom
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___m_Custom_0;
	// System.Single Cinemachine.CameraState_CustomBlendable::m_Weight
	float ___m_Weight_1;

public:
	inline static int32_t get_offset_of_m_Custom_0() { return static_cast<int32_t>(offsetof(CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253, ___m_Custom_0)); }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * get_m_Custom_0() const { return ___m_Custom_0; }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 ** get_address_of_m_Custom_0() { return &___m_Custom_0; }
	inline void set_m_Custom_0(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * value)
	{
		___m_Custom_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Custom_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Weight_1() { return static_cast<int32_t>(offsetof(CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253, ___m_Weight_1)); }
	inline float get_m_Weight_1() const { return ___m_Weight_1; }
	inline float* get_address_of_m_Weight_1() { return &___m_Weight_1; }
	inline void set_m_Weight_1(float value)
	{
		___m_Weight_1 = value;
	}
};


// Cinemachine.TargetPositionCache_TimeRange
struct  TimeRange_tF70DD4C14BC9F99833857B0743DC3302FABAF276 
{
public:
	// System.Single Cinemachine.TargetPositionCache_TimeRange::Start
	float ___Start_0;
	// System.Single Cinemachine.TargetPositionCache_TimeRange::End
	float ___End_1;

public:
	inline static int32_t get_offset_of_Start_0() { return static_cast<int32_t>(offsetof(TimeRange_tF70DD4C14BC9F99833857B0743DC3302FABAF276, ___Start_0)); }
	inline float get_Start_0() const { return ___Start_0; }
	inline float* get_address_of_Start_0() { return &___Start_0; }
	inline void set_Start_0(float value)
	{
		___Start_0 = value;
	}

	inline static int32_t get_offset_of_End_1() { return static_cast<int32_t>(offsetof(TimeRange_tF70DD4C14BC9F99833857B0743DC3302FABAF276, ___End_1)); }
	inline float get_End_1() const { return ___End_1; }
	inline float* get_address_of_End_1() { return &___End_1; }
	inline void set_End_1(float value)
	{
		___End_1 = value;
	}
};


// CinemachineMixer
struct  CinemachineMixer_t8EFE2E6576C85DDC174244459CC647BF68D75EC2  : public PlayableBehaviour_t5F4AA32E735199182CC5F57D426D27BE8ABA8F01
{
public:
	// Cinemachine.CinemachineBrain CinemachineMixer::mBrain
	CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB * ___mBrain_1;
	// System.Int32 CinemachineMixer::mBrainOverrideId
	int32_t ___mBrainOverrideId_2;
	// System.Boolean CinemachineMixer::mPreviewPlay
	bool ___mPreviewPlay_3;

public:
	inline static int32_t get_offset_of_mBrain_1() { return static_cast<int32_t>(offsetof(CinemachineMixer_t8EFE2E6576C85DDC174244459CC647BF68D75EC2, ___mBrain_1)); }
	inline CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB * get_mBrain_1() const { return ___mBrain_1; }
	inline CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB ** get_address_of_mBrain_1() { return &___mBrain_1; }
	inline void set_mBrain_1(CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB * value)
	{
		___mBrain_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mBrain_1), (void*)value);
	}

	inline static int32_t get_offset_of_mBrainOverrideId_2() { return static_cast<int32_t>(offsetof(CinemachineMixer_t8EFE2E6576C85DDC174244459CC647BF68D75EC2, ___mBrainOverrideId_2)); }
	inline int32_t get_mBrainOverrideId_2() const { return ___mBrainOverrideId_2; }
	inline int32_t* get_address_of_mBrainOverrideId_2() { return &___mBrainOverrideId_2; }
	inline void set_mBrainOverrideId_2(int32_t value)
	{
		___mBrainOverrideId_2 = value;
	}

	inline static int32_t get_offset_of_mPreviewPlay_3() { return static_cast<int32_t>(offsetof(CinemachineMixer_t8EFE2E6576C85DDC174244459CC647BF68D75EC2, ___mPreviewPlay_3)); }
	inline bool get_mPreviewPlay_3() const { return ___mPreviewPlay_3; }
	inline bool* get_address_of_mPreviewPlay_3() { return &___mPreviewPlay_3; }
	inline void set_mPreviewPlay_3(bool value)
	{
		___mPreviewPlay_3 = value;
	}
};

struct CinemachineMixer_t8EFE2E6576C85DDC174244459CC647BF68D75EC2_StaticFields
{
public:
	// CinemachineMixer_MasterDirectorDelegate CinemachineMixer::GetMasterPlayableDirector
	MasterDirectorDelegate_t3B919084EAF5EA2C88943445B34713394E0C4AD6 * ___GetMasterPlayableDirector_0;

public:
	inline static int32_t get_offset_of_GetMasterPlayableDirector_0() { return static_cast<int32_t>(offsetof(CinemachineMixer_t8EFE2E6576C85DDC174244459CC647BF68D75EC2_StaticFields, ___GetMasterPlayableDirector_0)); }
	inline MasterDirectorDelegate_t3B919084EAF5EA2C88943445B34713394E0C4AD6 * get_GetMasterPlayableDirector_0() const { return ___GetMasterPlayableDirector_0; }
	inline MasterDirectorDelegate_t3B919084EAF5EA2C88943445B34713394E0C4AD6 ** get_address_of_GetMasterPlayableDirector_0() { return &___GetMasterPlayableDirector_0; }
	inline void set_GetMasterPlayableDirector_0(MasterDirectorDelegate_t3B919084EAF5EA2C88943445B34713394E0C4AD6 * value)
	{
		___GetMasterPlayableDirector_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetMasterPlayableDirector_0), (void*)value);
	}
};


// CinemachineShotPlayable
struct  CinemachineShotPlayable_t518787FCEF1470A6B42A2A6A72E4AD8D34D8C0CE  : public PlayableBehaviour_t5F4AA32E735199182CC5F57D426D27BE8ABA8F01
{
public:
	// Cinemachine.CinemachineVirtualCameraBase CinemachineShotPlayable::VirtualCamera
	CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * ___VirtualCamera_0;

public:
	inline static int32_t get_offset_of_VirtualCamera_0() { return static_cast<int32_t>(offsetof(CinemachineShotPlayable_t518787FCEF1470A6B42A2A6A72E4AD8D34D8C0CE, ___VirtualCamera_0)); }
	inline CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * get_VirtualCamera_0() const { return ___VirtualCamera_0; }
	inline CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD ** get_address_of_VirtualCamera_0() { return &___VirtualCamera_0; }
	inline void set_VirtualCamera_0(CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * value)
	{
		___VirtualCamera_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___VirtualCamera_0), (void*)value);
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


// System.Double
struct  Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
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


// System.Nullable`1<System.Boolean>
struct  Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
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


// UnityEngine.PropertyAttribute
struct  PropertyAttribute_t25BFFC093C9C96E3CCF4EAB36F5DC6F937B1FA54  : public Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74
{
public:

public:
};


// UnityEngine.PropertyName
struct  PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529 
{
public:
	// System.Int32 UnityEngine.PropertyName::id
	int32_t ___id_0;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}
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


// UnityEngine.Rect
struct  Rect_t35B976DE901B5423C11705E156938EA27AB402CE 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// UnityEngine.Timeline.DiscreteTime
struct  DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047 
{
public:
	// System.Int64 UnityEngine.Timeline.DiscreteTime::m_DiscreteTime
	int64_t ___m_DiscreteTime_2;

public:
	inline static int32_t get_offset_of_m_DiscreteTime_2() { return static_cast<int32_t>(offsetof(DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047, ___m_DiscreteTime_2)); }
	inline int64_t get_m_DiscreteTime_2() const { return ___m_DiscreteTime_2; }
	inline int64_t* get_address_of_m_DiscreteTime_2() { return &___m_DiscreteTime_2; }
	inline void set_m_DiscreteTime_2(int64_t value)
	{
		___m_DiscreteTime_2 = value;
	}
};

struct DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047_StaticFields
{
public:
	// UnityEngine.Timeline.DiscreteTime UnityEngine.Timeline.DiscreteTime::kMaxTime
	DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047  ___kMaxTime_1;

public:
	inline static int32_t get_offset_of_kMaxTime_1() { return static_cast<int32_t>(offsetof(DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047_StaticFields, ___kMaxTime_1)); }
	inline DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047  get_kMaxTime_1() const { return ___kMaxTime_1; }
	inline DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047 * get_address_of_kMaxTime_1() { return &___kMaxTime_1; }
	inline void set_kMaxTime_1(DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047  value)
	{
		___kMaxTime_1 = value;
	}
};


// UnityEngine.Timeline.MarkerList
struct  MarkerList_t5DDEACDD8C5942DE4C9778F1CC77E5AB685832DC 
{
public:
	// System.Collections.Generic.List`1<UnityEngine.ScriptableObject> UnityEngine.Timeline.MarkerList::m_Objects
	List_1_t41ED65DE2CE5065D598F08F2FA793FD1FF75A8AF * ___m_Objects_0;
	// System.Collections.Generic.List`1<UnityEngine.Timeline.IMarker> UnityEngine.Timeline.MarkerList::m_Cache
	List_1_t1AED215F7BB55B002913F379B2D00119A92B8FBC * ___m_Cache_1;
	// System.Boolean UnityEngine.Timeline.MarkerList::m_CacheDirty
	bool ___m_CacheDirty_2;
	// System.Boolean UnityEngine.Timeline.MarkerList::m_HasNotifications
	bool ___m_HasNotifications_3;

public:
	inline static int32_t get_offset_of_m_Objects_0() { return static_cast<int32_t>(offsetof(MarkerList_t5DDEACDD8C5942DE4C9778F1CC77E5AB685832DC, ___m_Objects_0)); }
	inline List_1_t41ED65DE2CE5065D598F08F2FA793FD1FF75A8AF * get_m_Objects_0() const { return ___m_Objects_0; }
	inline List_1_t41ED65DE2CE5065D598F08F2FA793FD1FF75A8AF ** get_address_of_m_Objects_0() { return &___m_Objects_0; }
	inline void set_m_Objects_0(List_1_t41ED65DE2CE5065D598F08F2FA793FD1FF75A8AF * value)
	{
		___m_Objects_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Objects_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Cache_1() { return static_cast<int32_t>(offsetof(MarkerList_t5DDEACDD8C5942DE4C9778F1CC77E5AB685832DC, ___m_Cache_1)); }
	inline List_1_t1AED215F7BB55B002913F379B2D00119A92B8FBC * get_m_Cache_1() const { return ___m_Cache_1; }
	inline List_1_t1AED215F7BB55B002913F379B2D00119A92B8FBC ** get_address_of_m_Cache_1() { return &___m_Cache_1; }
	inline void set_m_Cache_1(List_1_t1AED215F7BB55B002913F379B2D00119A92B8FBC * value)
	{
		___m_Cache_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Cache_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CacheDirty_2() { return static_cast<int32_t>(offsetof(MarkerList_t5DDEACDD8C5942DE4C9778F1CC77E5AB685832DC, ___m_CacheDirty_2)); }
	inline bool get_m_CacheDirty_2() const { return ___m_CacheDirty_2; }
	inline bool* get_address_of_m_CacheDirty_2() { return &___m_CacheDirty_2; }
	inline void set_m_CacheDirty_2(bool value)
	{
		___m_CacheDirty_2 = value;
	}

	inline static int32_t get_offset_of_m_HasNotifications_3() { return static_cast<int32_t>(offsetof(MarkerList_t5DDEACDD8C5942DE4C9778F1CC77E5AB685832DC, ___m_HasNotifications_3)); }
	inline bool get_m_HasNotifications_3() const { return ___m_HasNotifications_3; }
	inline bool* get_address_of_m_HasNotifications_3() { return &___m_HasNotifications_3; }
	inline void set_m_HasNotifications_3(bool value)
	{
		___m_HasNotifications_3 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Timeline.MarkerList
struct MarkerList_t5DDEACDD8C5942DE4C9778F1CC77E5AB685832DC_marshaled_pinvoke
{
	List_1_t41ED65DE2CE5065D598F08F2FA793FD1FF75A8AF * ___m_Objects_0;
	List_1_t1AED215F7BB55B002913F379B2D00119A92B8FBC * ___m_Cache_1;
	int32_t ___m_CacheDirty_2;
	int32_t ___m_HasNotifications_3;
};
// Native definition for COM marshalling of UnityEngine.Timeline.MarkerList
struct MarkerList_t5DDEACDD8C5942DE4C9778F1CC77E5AB685832DC_marshaled_com
{
	List_1_t41ED65DE2CE5065D598F08F2FA793FD1FF75A8AF * ___m_Objects_0;
	List_1_t1AED215F7BB55B002913F379B2D00119A92B8FBC * ___m_Cache_1;
	int32_t ___m_CacheDirty_2;
	int32_t ___m_HasNotifications_3;
};

// UnityEngine.Timeline.TrackAsset_TransientBuildData
struct  TransientBuildData_t2CDF71634041677EC226311F30665780C2026744 
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Timeline.TrackAsset> UnityEngine.Timeline.TrackAsset_TransientBuildData::trackList
	List_1_t9EFBDDF9C4ED217F9B47075B2659634AF4988704 * ___trackList_0;
	// System.Collections.Generic.List`1<UnityEngine.Timeline.TimelineClip> UnityEngine.Timeline.TrackAsset_TransientBuildData::clipList
	List_1_t6E4584A39B7BEEB659D9A568195C253D69ABAAEA * ___clipList_1;
	// System.Collections.Generic.List`1<UnityEngine.Timeline.IMarker> UnityEngine.Timeline.TrackAsset_TransientBuildData::markerList
	List_1_t1AED215F7BB55B002913F379B2D00119A92B8FBC * ___markerList_2;

public:
	inline static int32_t get_offset_of_trackList_0() { return static_cast<int32_t>(offsetof(TransientBuildData_t2CDF71634041677EC226311F30665780C2026744, ___trackList_0)); }
	inline List_1_t9EFBDDF9C4ED217F9B47075B2659634AF4988704 * get_trackList_0() const { return ___trackList_0; }
	inline List_1_t9EFBDDF9C4ED217F9B47075B2659634AF4988704 ** get_address_of_trackList_0() { return &___trackList_0; }
	inline void set_trackList_0(List_1_t9EFBDDF9C4ED217F9B47075B2659634AF4988704 * value)
	{
		___trackList_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackList_0), (void*)value);
	}

	inline static int32_t get_offset_of_clipList_1() { return static_cast<int32_t>(offsetof(TransientBuildData_t2CDF71634041677EC226311F30665780C2026744, ___clipList_1)); }
	inline List_1_t6E4584A39B7BEEB659D9A568195C253D69ABAAEA * get_clipList_1() const { return ___clipList_1; }
	inline List_1_t6E4584A39B7BEEB659D9A568195C253D69ABAAEA ** get_address_of_clipList_1() { return &___clipList_1; }
	inline void set_clipList_1(List_1_t6E4584A39B7BEEB659D9A568195C253D69ABAAEA * value)
	{
		___clipList_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clipList_1), (void*)value);
	}

	inline static int32_t get_offset_of_markerList_2() { return static_cast<int32_t>(offsetof(TransientBuildData_t2CDF71634041677EC226311F30665780C2026744, ___markerList_2)); }
	inline List_1_t1AED215F7BB55B002913F379B2D00119A92B8FBC * get_markerList_2() const { return ___markerList_2; }
	inline List_1_t1AED215F7BB55B002913F379B2D00119A92B8FBC ** get_address_of_markerList_2() { return &___markerList_2; }
	inline void set_markerList_2(List_1_t1AED215F7BB55B002913F379B2D00119A92B8FBC * value)
	{
		___markerList_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___markerList_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Timeline.TrackAsset/TransientBuildData
struct TransientBuildData_t2CDF71634041677EC226311F30665780C2026744_marshaled_pinvoke
{
	List_1_t9EFBDDF9C4ED217F9B47075B2659634AF4988704 * ___trackList_0;
	List_1_t6E4584A39B7BEEB659D9A568195C253D69ABAAEA * ___clipList_1;
	List_1_t1AED215F7BB55B002913F379B2D00119A92B8FBC * ___markerList_2;
};
// Native definition for COM marshalling of UnityEngine.Timeline.TrackAsset/TransientBuildData
struct TransientBuildData_t2CDF71634041677EC226311F30665780C2026744_marshaled_com
{
	List_1_t9EFBDDF9C4ED217F9B47075B2659634AF4988704 * ___trackList_0;
	List_1_t6E4584A39B7BEEB659D9A568195C253D69ABAAEA * ___clipList_1;
	List_1_t1AED215F7BB55B002913F379B2D00119A92B8FBC * ___markerList_2;
};

// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
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


// Cinemachine.CameraState_BlendHintValue
struct  BlendHintValue_tCF9A24D7B4477067080DB09C7E1BAD86C14B4B52 
{
public:
	// System.Int32 Cinemachine.CameraState_BlendHintValue::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BlendHintValue_tCF9A24D7B4477067080DB09C7E1BAD86C14B4B52, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineBlendDefinition_Style
struct  Style_t709ACC1BF602ECD71DBFC58A23673543021BBF0F 
{
public:
	// System.Int32 Cinemachine.CinemachineBlendDefinition_Style::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Style_t709ACC1BF602ECD71DBFC58A23673543021BBF0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineBrain_BrainUpdateMethod
struct  BrainUpdateMethod_t0563DEDF54EDDA6F830CB1426DE00AA27B3D3A5E 
{
public:
	// System.Int32 Cinemachine.CinemachineBrain_BrainUpdateMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BrainUpdateMethod_t0563DEDF54EDDA6F830CB1426DE00AA27B3D3A5E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineBrain_UpdateMethod
struct  UpdateMethod_t24F3391B8C1CB67A2AF181A8EF51E994224C9FA2 
{
public:
	// System.Int32 Cinemachine.CinemachineBrain_UpdateMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UpdateMethod_t24F3391B8C1CB67A2AF181A8EF51E994224C9FA2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineCore_Stage
struct  Stage_t0E42746EC0AE99362E618F1D42126DCA0F62C4FF 
{
public:
	// System.Int32 Cinemachine.CinemachineCore_Stage::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Stage_t0E42746EC0AE99362E618F1D42126DCA0F62C4FF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineCore_UpdateFilter
struct  UpdateFilter_t9309B9175AFFA45140CE56FD5C229947C9CC19D2 
{
public:
	// System.Int32 Cinemachine.CinemachineCore_UpdateFilter::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UpdateFilter_t9309B9175AFFA45140CE56FD5C229947C9CC19D2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineVirtualCameraBase_StandbyUpdateMode
struct  StandbyUpdateMode_tDD387031AFF8EB8516338BC71517029CB6F1BE18 
{
public:
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase_StandbyUpdateMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StandbyUpdateMode_tDD387031AFF8EB8516338BC71517029CB6F1BE18, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.LensSettings_OverrideModes
struct  OverrideModes_t80E3E9024DE6376CC31D649E353DB99EFC45AA9D 
{
public:
	// System.Int32 Cinemachine.LensSettings_OverrideModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OverrideModes_t80E3E9024DE6376CC31D649E353DB99EFC45AA9D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.TargetPositionCache_Mode
struct  Mode_tBD240FF3EF9461B3B93FFC3AB5F2036120F5EB96 
{
public:
	// System.Int32 Cinemachine.TargetPositionCache_Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_tBD240FF3EF9461B3B93FFC3AB5F2036120F5EB96, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.VcamTargetPropertyAttribute
struct  VcamTargetPropertyAttribute_t7DF91AEFF1BD2B83D640D6D39F1720CB57798B1F  : public PropertyAttribute_t25BFFC093C9C96E3CCF4EAB36F5DC6F937B1FA54
{
public:

public:
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

// UnityEngine.Camera_GateFitMode
struct  GateFitMode_tB6297A6394E8D409AB76FB3A9A89DFA170B8839F 
{
public:
	// System.Int32 UnityEngine.Camera_GateFitMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GateFitMode_tB6297A6394E8D409AB76FB3A9A89DFA170B8839F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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

// UnityEngine.Playables.FrameData_Flags
struct  Flags_tC705783C7BC90E0953FD3B996C7900B58A452D69 
{
public:
	// System.Int32 UnityEngine.Playables.FrameData_Flags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_tC705783C7BC90E0953FD3B996C7900B58A452D69, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Playables.PlayState
struct  PlayState_tC3BC5843A80D4DEC4D5E79417CBBAD10BB0BEC91 
{
public:
	// System.Int32 UnityEngine.Playables.PlayState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlayState_tC3BC5843A80D4DEC4D5E79417CBBAD10BB0BEC91, ___value___2)); }
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


// UnityEngine.TouchPhase
struct  TouchPhase_t7E9CEC3DD059E32F847242513BD6CE30866AB2A6 
{
public:
	// System.Int32 UnityEngine.TouchPhase::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchPhase_t7E9CEC3DD059E32F847242513BD6CE30866AB2A6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TouchType
struct  TouchType_tBBD83025576FC017B10484014B5C396613A02B8E 
{
public:
	// System.Int32 UnityEngine.TouchType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchType_tBBD83025576FC017B10484014B5C396613A02B8E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineBlendDefinition
struct  CinemachineBlendDefinition_t2AC0334955F853560C7F95D4B43BE701F099EF04 
{
public:
	// Cinemachine.CinemachineBlendDefinition_Style Cinemachine.CinemachineBlendDefinition::m_Style
	int32_t ___m_Style_0;
	// System.Single Cinemachine.CinemachineBlendDefinition::m_Time
	float ___m_Time_1;
	// UnityEngine.AnimationCurve Cinemachine.CinemachineBlendDefinition::m_CustomCurve
	AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___m_CustomCurve_2;

public:
	inline static int32_t get_offset_of_m_Style_0() { return static_cast<int32_t>(offsetof(CinemachineBlendDefinition_t2AC0334955F853560C7F95D4B43BE701F099EF04, ___m_Style_0)); }
	inline int32_t get_m_Style_0() const { return ___m_Style_0; }
	inline int32_t* get_address_of_m_Style_0() { return &___m_Style_0; }
	inline void set_m_Style_0(int32_t value)
	{
		___m_Style_0 = value;
	}

	inline static int32_t get_offset_of_m_Time_1() { return static_cast<int32_t>(offsetof(CinemachineBlendDefinition_t2AC0334955F853560C7F95D4B43BE701F099EF04, ___m_Time_1)); }
	inline float get_m_Time_1() const { return ___m_Time_1; }
	inline float* get_address_of_m_Time_1() { return &___m_Time_1; }
	inline void set_m_Time_1(float value)
	{
		___m_Time_1 = value;
	}

	inline static int32_t get_offset_of_m_CustomCurve_2() { return static_cast<int32_t>(offsetof(CinemachineBlendDefinition_t2AC0334955F853560C7F95D4B43BE701F099EF04, ___m_CustomCurve_2)); }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * get_m_CustomCurve_2() const { return ___m_CustomCurve_2; }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C ** get_address_of_m_CustomCurve_2() { return &___m_CustomCurve_2; }
	inline void set_m_CustomCurve_2(AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * value)
	{
		___m_CustomCurve_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CustomCurve_2), (void*)value);
	}
};

struct CinemachineBlendDefinition_t2AC0334955F853560C7F95D4B43BE701F099EF04_StaticFields
{
public:
	// UnityEngine.AnimationCurve[] Cinemachine.CinemachineBlendDefinition::sStandardCurves
	AnimationCurveU5BU5D_tAB8BA6D5F8B505DDDA61F8065F6E870AA1F560E1* ___sStandardCurves_3;

public:
	inline static int32_t get_offset_of_sStandardCurves_3() { return static_cast<int32_t>(offsetof(CinemachineBlendDefinition_t2AC0334955F853560C7F95D4B43BE701F099EF04_StaticFields, ___sStandardCurves_3)); }
	inline AnimationCurveU5BU5D_tAB8BA6D5F8B505DDDA61F8065F6E870AA1F560E1* get_sStandardCurves_3() const { return ___sStandardCurves_3; }
	inline AnimationCurveU5BU5D_tAB8BA6D5F8B505DDDA61F8065F6E870AA1F560E1** get_address_of_sStandardCurves_3() { return &___sStandardCurves_3; }
	inline void set_sStandardCurves_3(AnimationCurveU5BU5D_tAB8BA6D5F8B505DDDA61F8065F6E870AA1F560E1* value)
	{
		___sStandardCurves_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sStandardCurves_3), (void*)value);
	}
};


// Cinemachine.CinemachineCore
struct  CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<Cinemachine.CinemachineBrain> Cinemachine.CinemachineCore::mActiveBrains
	List_1_tC0D9EEE4F50880325C33F6FABD6B0EB876E7FB3D * ___mActiveBrains_10;
	// System.Collections.Generic.List`1<Cinemachine.CinemachineVirtualCameraBase> Cinemachine.CinemachineCore::mActiveCameras
	List_1_t2A7D1450D916CAA44FEB79B0E5C2E4EF5A02CECF * ___mActiveCameras_11;
	// System.Boolean Cinemachine.CinemachineCore::m_ActiveCamerasAreSorted
	bool ___m_ActiveCamerasAreSorted_12;
	// System.Int32 Cinemachine.CinemachineCore::m_ActivationSequence
	int32_t ___m_ActivationSequence_13;
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<Cinemachine.CinemachineVirtualCameraBase>> Cinemachine.CinemachineCore::mAllCameras
	List_1_tBDF194622D0C56020E8C4DD7B5145B2988CA19A4 * ___mAllCameras_14;
	// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineCore::mRoundRobinVcamLastFrame
	CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * ___mRoundRobinVcamLastFrame_15;
	// System.Collections.Generic.Dictionary`2<Cinemachine.CinemachineVirtualCameraBase,Cinemachine.CinemachineCore_UpdateStatus> Cinemachine.CinemachineCore::mUpdateStatus
	Dictionary_2_tACB39FA2E62BA2EA60CEBEAE83D5AB8B14A1D280 * ___mUpdateStatus_18;
	// Cinemachine.CinemachineCore_UpdateFilter Cinemachine.CinemachineCore::<CurrentUpdateFilter>k__BackingField
	int32_t ___U3CCurrentUpdateFilterU3Ek__BackingField_19;

public:
	inline static int32_t get_offset_of_mActiveBrains_10() { return static_cast<int32_t>(offsetof(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C, ___mActiveBrains_10)); }
	inline List_1_tC0D9EEE4F50880325C33F6FABD6B0EB876E7FB3D * get_mActiveBrains_10() const { return ___mActiveBrains_10; }
	inline List_1_tC0D9EEE4F50880325C33F6FABD6B0EB876E7FB3D ** get_address_of_mActiveBrains_10() { return &___mActiveBrains_10; }
	inline void set_mActiveBrains_10(List_1_tC0D9EEE4F50880325C33F6FABD6B0EB876E7FB3D * value)
	{
		___mActiveBrains_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mActiveBrains_10), (void*)value);
	}

	inline static int32_t get_offset_of_mActiveCameras_11() { return static_cast<int32_t>(offsetof(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C, ___mActiveCameras_11)); }
	inline List_1_t2A7D1450D916CAA44FEB79B0E5C2E4EF5A02CECF * get_mActiveCameras_11() const { return ___mActiveCameras_11; }
	inline List_1_t2A7D1450D916CAA44FEB79B0E5C2E4EF5A02CECF ** get_address_of_mActiveCameras_11() { return &___mActiveCameras_11; }
	inline void set_mActiveCameras_11(List_1_t2A7D1450D916CAA44FEB79B0E5C2E4EF5A02CECF * value)
	{
		___mActiveCameras_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mActiveCameras_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActiveCamerasAreSorted_12() { return static_cast<int32_t>(offsetof(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C, ___m_ActiveCamerasAreSorted_12)); }
	inline bool get_m_ActiveCamerasAreSorted_12() const { return ___m_ActiveCamerasAreSorted_12; }
	inline bool* get_address_of_m_ActiveCamerasAreSorted_12() { return &___m_ActiveCamerasAreSorted_12; }
	inline void set_m_ActiveCamerasAreSorted_12(bool value)
	{
		___m_ActiveCamerasAreSorted_12 = value;
	}

	inline static int32_t get_offset_of_m_ActivationSequence_13() { return static_cast<int32_t>(offsetof(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C, ___m_ActivationSequence_13)); }
	inline int32_t get_m_ActivationSequence_13() const { return ___m_ActivationSequence_13; }
	inline int32_t* get_address_of_m_ActivationSequence_13() { return &___m_ActivationSequence_13; }
	inline void set_m_ActivationSequence_13(int32_t value)
	{
		___m_ActivationSequence_13 = value;
	}

	inline static int32_t get_offset_of_mAllCameras_14() { return static_cast<int32_t>(offsetof(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C, ___mAllCameras_14)); }
	inline List_1_tBDF194622D0C56020E8C4DD7B5145B2988CA19A4 * get_mAllCameras_14() const { return ___mAllCameras_14; }
	inline List_1_tBDF194622D0C56020E8C4DD7B5145B2988CA19A4 ** get_address_of_mAllCameras_14() { return &___mAllCameras_14; }
	inline void set_mAllCameras_14(List_1_tBDF194622D0C56020E8C4DD7B5145B2988CA19A4 * value)
	{
		___mAllCameras_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mAllCameras_14), (void*)value);
	}

	inline static int32_t get_offset_of_mRoundRobinVcamLastFrame_15() { return static_cast<int32_t>(offsetof(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C, ___mRoundRobinVcamLastFrame_15)); }
	inline CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * get_mRoundRobinVcamLastFrame_15() const { return ___mRoundRobinVcamLastFrame_15; }
	inline CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD ** get_address_of_mRoundRobinVcamLastFrame_15() { return &___mRoundRobinVcamLastFrame_15; }
	inline void set_mRoundRobinVcamLastFrame_15(CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * value)
	{
		___mRoundRobinVcamLastFrame_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mRoundRobinVcamLastFrame_15), (void*)value);
	}

	inline static int32_t get_offset_of_mUpdateStatus_18() { return static_cast<int32_t>(offsetof(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C, ___mUpdateStatus_18)); }
	inline Dictionary_2_tACB39FA2E62BA2EA60CEBEAE83D5AB8B14A1D280 * get_mUpdateStatus_18() const { return ___mUpdateStatus_18; }
	inline Dictionary_2_tACB39FA2E62BA2EA60CEBEAE83D5AB8B14A1D280 ** get_address_of_mUpdateStatus_18() { return &___mUpdateStatus_18; }
	inline void set_mUpdateStatus_18(Dictionary_2_tACB39FA2E62BA2EA60CEBEAE83D5AB8B14A1D280 * value)
	{
		___mUpdateStatus_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mUpdateStatus_18), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCurrentUpdateFilterU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C, ___U3CCurrentUpdateFilterU3Ek__BackingField_19)); }
	inline int32_t get_U3CCurrentUpdateFilterU3Ek__BackingField_19() const { return ___U3CCurrentUpdateFilterU3Ek__BackingField_19; }
	inline int32_t* get_address_of_U3CCurrentUpdateFilterU3Ek__BackingField_19() { return &___U3CCurrentUpdateFilterU3Ek__BackingField_19; }
	inline void set_U3CCurrentUpdateFilterU3Ek__BackingField_19(int32_t value)
	{
		___U3CCurrentUpdateFilterU3Ek__BackingField_19 = value;
	}
};

struct CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C_StaticFields
{
public:
	// System.Int32 Cinemachine.CinemachineCore::kStreamingVersion
	int32_t ___kStreamingVersion_0;
	// System.String Cinemachine.CinemachineCore::kVersionString
	String_t* ___kVersionString_1;
	// Cinemachine.CinemachineCore Cinemachine.CinemachineCore::sInstance
	CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C * ___sInstance_2;
	// System.Boolean Cinemachine.CinemachineCore::sShowHiddenObjects
	bool ___sShowHiddenObjects_3;
	// Cinemachine.CinemachineCore_AxisInputDelegate Cinemachine.CinemachineCore::GetInputAxis
	AxisInputDelegate_t5352DB1BE196BC488C6BBD6FE1F0541CA8A887CE * ___GetInputAxis_4;
	// System.Single Cinemachine.CinemachineCore::UniformDeltaTimeOverride
	float ___UniformDeltaTimeOverride_5;
	// System.Single Cinemachine.CinemachineCore::CurrentTimeOverride
	float ___CurrentTimeOverride_6;
	// Cinemachine.CinemachineCore_GetBlendOverrideDelegate Cinemachine.CinemachineCore::GetBlendOverride
	GetBlendOverrideDelegate_t26D8778A313C528295CC34D776A57119AE7F1EB8 * ___GetBlendOverride_7;
	// Cinemachine.CinemachineBrain_BrainEvent Cinemachine.CinemachineCore::CameraUpdatedEvent
	BrainEvent_tCB30E3A5C9244915F355517663D4E440A54F79C0 * ___CameraUpdatedEvent_8;
	// Cinemachine.CinemachineBrain_BrainEvent Cinemachine.CinemachineCore::CameraCutEvent
	BrainEvent_tCB30E3A5C9244915F355517663D4E440A54F79C0 * ___CameraCutEvent_9;
	// System.Single Cinemachine.CinemachineCore::mLastUpdateTime
	float ___mLastUpdateTime_16;
	// System.Int32 Cinemachine.CinemachineCore::<FixedFrameCount>k__BackingField
	int32_t ___U3CFixedFrameCountU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_kStreamingVersion_0() { return static_cast<int32_t>(offsetof(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C_StaticFields, ___kStreamingVersion_0)); }
	inline int32_t get_kStreamingVersion_0() const { return ___kStreamingVersion_0; }
	inline int32_t* get_address_of_kStreamingVersion_0() { return &___kStreamingVersion_0; }
	inline void set_kStreamingVersion_0(int32_t value)
	{
		___kStreamingVersion_0 = value;
	}

	inline static int32_t get_offset_of_kVersionString_1() { return static_cast<int32_t>(offsetof(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C_StaticFields, ___kVersionString_1)); }
	inline String_t* get_kVersionString_1() const { return ___kVersionString_1; }
	inline String_t** get_address_of_kVersionString_1() { return &___kVersionString_1; }
	inline void set_kVersionString_1(String_t* value)
	{
		___kVersionString_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___kVersionString_1), (void*)value);
	}

	inline static int32_t get_offset_of_sInstance_2() { return static_cast<int32_t>(offsetof(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C_StaticFields, ___sInstance_2)); }
	inline CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C * get_sInstance_2() const { return ___sInstance_2; }
	inline CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C ** get_address_of_sInstance_2() { return &___sInstance_2; }
	inline void set_sInstance_2(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C * value)
	{
		___sInstance_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sInstance_2), (void*)value);
	}

	inline static int32_t get_offset_of_sShowHiddenObjects_3() { return static_cast<int32_t>(offsetof(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C_StaticFields, ___sShowHiddenObjects_3)); }
	inline bool get_sShowHiddenObjects_3() const { return ___sShowHiddenObjects_3; }
	inline bool* get_address_of_sShowHiddenObjects_3() { return &___sShowHiddenObjects_3; }
	inline void set_sShowHiddenObjects_3(bool value)
	{
		___sShowHiddenObjects_3 = value;
	}

	inline static int32_t get_offset_of_GetInputAxis_4() { return static_cast<int32_t>(offsetof(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C_StaticFields, ___GetInputAxis_4)); }
	inline AxisInputDelegate_t5352DB1BE196BC488C6BBD6FE1F0541CA8A887CE * get_GetInputAxis_4() const { return ___GetInputAxis_4; }
	inline AxisInputDelegate_t5352DB1BE196BC488C6BBD6FE1F0541CA8A887CE ** get_address_of_GetInputAxis_4() { return &___GetInputAxis_4; }
	inline void set_GetInputAxis_4(AxisInputDelegate_t5352DB1BE196BC488C6BBD6FE1F0541CA8A887CE * value)
	{
		___GetInputAxis_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetInputAxis_4), (void*)value);
	}

	inline static int32_t get_offset_of_UniformDeltaTimeOverride_5() { return static_cast<int32_t>(offsetof(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C_StaticFields, ___UniformDeltaTimeOverride_5)); }
	inline float get_UniformDeltaTimeOverride_5() const { return ___UniformDeltaTimeOverride_5; }
	inline float* get_address_of_UniformDeltaTimeOverride_5() { return &___UniformDeltaTimeOverride_5; }
	inline void set_UniformDeltaTimeOverride_5(float value)
	{
		___UniformDeltaTimeOverride_5 = value;
	}

	inline static int32_t get_offset_of_CurrentTimeOverride_6() { return static_cast<int32_t>(offsetof(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C_StaticFields, ___CurrentTimeOverride_6)); }
	inline float get_CurrentTimeOverride_6() const { return ___CurrentTimeOverride_6; }
	inline float* get_address_of_CurrentTimeOverride_6() { return &___CurrentTimeOverride_6; }
	inline void set_CurrentTimeOverride_6(float value)
	{
		___CurrentTimeOverride_6 = value;
	}

	inline static int32_t get_offset_of_GetBlendOverride_7() { return static_cast<int32_t>(offsetof(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C_StaticFields, ___GetBlendOverride_7)); }
	inline GetBlendOverrideDelegate_t26D8778A313C528295CC34D776A57119AE7F1EB8 * get_GetBlendOverride_7() const { return ___GetBlendOverride_7; }
	inline GetBlendOverrideDelegate_t26D8778A313C528295CC34D776A57119AE7F1EB8 ** get_address_of_GetBlendOverride_7() { return &___GetBlendOverride_7; }
	inline void set_GetBlendOverride_7(GetBlendOverrideDelegate_t26D8778A313C528295CC34D776A57119AE7F1EB8 * value)
	{
		___GetBlendOverride_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetBlendOverride_7), (void*)value);
	}

	inline static int32_t get_offset_of_CameraUpdatedEvent_8() { return static_cast<int32_t>(offsetof(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C_StaticFields, ___CameraUpdatedEvent_8)); }
	inline BrainEvent_tCB30E3A5C9244915F355517663D4E440A54F79C0 * get_CameraUpdatedEvent_8() const { return ___CameraUpdatedEvent_8; }
	inline BrainEvent_tCB30E3A5C9244915F355517663D4E440A54F79C0 ** get_address_of_CameraUpdatedEvent_8() { return &___CameraUpdatedEvent_8; }
	inline void set_CameraUpdatedEvent_8(BrainEvent_tCB30E3A5C9244915F355517663D4E440A54F79C0 * value)
	{
		___CameraUpdatedEvent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CameraUpdatedEvent_8), (void*)value);
	}

	inline static int32_t get_offset_of_CameraCutEvent_9() { return static_cast<int32_t>(offsetof(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C_StaticFields, ___CameraCutEvent_9)); }
	inline BrainEvent_tCB30E3A5C9244915F355517663D4E440A54F79C0 * get_CameraCutEvent_9() const { return ___CameraCutEvent_9; }
	inline BrainEvent_tCB30E3A5C9244915F355517663D4E440A54F79C0 ** get_address_of_CameraCutEvent_9() { return &___CameraCutEvent_9; }
	inline void set_CameraCutEvent_9(BrainEvent_tCB30E3A5C9244915F355517663D4E440A54F79C0 * value)
	{
		___CameraCutEvent_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CameraCutEvent_9), (void*)value);
	}

	inline static int32_t get_offset_of_mLastUpdateTime_16() { return static_cast<int32_t>(offsetof(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C_StaticFields, ___mLastUpdateTime_16)); }
	inline float get_mLastUpdateTime_16() const { return ___mLastUpdateTime_16; }
	inline float* get_address_of_mLastUpdateTime_16() { return &___mLastUpdateTime_16; }
	inline void set_mLastUpdateTime_16(float value)
	{
		___mLastUpdateTime_16 = value;
	}

	inline static int32_t get_offset_of_U3CFixedFrameCountU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C_StaticFields, ___U3CFixedFrameCountU3Ek__BackingField_17)); }
	inline int32_t get_U3CFixedFrameCountU3Ek__BackingField_17() const { return ___U3CFixedFrameCountU3Ek__BackingField_17; }
	inline int32_t* get_address_of_U3CFixedFrameCountU3Ek__BackingField_17() { return &___U3CFixedFrameCountU3Ek__BackingField_17; }
	inline void set_U3CFixedFrameCountU3Ek__BackingField_17(int32_t value)
	{
		___U3CFixedFrameCountU3Ek__BackingField_17 = value;
	}
};


// Cinemachine.LensSettings
struct  LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC 
{
public:
	// System.Single Cinemachine.LensSettings::FieldOfView
	float ___FieldOfView_1;
	// System.Single Cinemachine.LensSettings::OrthographicSize
	float ___OrthographicSize_2;
	// System.Single Cinemachine.LensSettings::NearClipPlane
	float ___NearClipPlane_3;
	// System.Single Cinemachine.LensSettings::FarClipPlane
	float ___FarClipPlane_4;
	// System.Single Cinemachine.LensSettings::Dutch
	float ___Dutch_5;
	// Cinemachine.LensSettings_OverrideModes Cinemachine.LensSettings::ModeOverride
	int32_t ___ModeOverride_6;
	// UnityEngine.Vector2 Cinemachine.LensSettings::LensShift
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___LensShift_7;
	// UnityEngine.Camera_GateFitMode Cinemachine.LensSettings::GateFit
	int32_t ___GateFit_8;
	// UnityEngine.Vector2 Cinemachine.LensSettings::m_SensorSize
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_SensorSize_9;
	// System.Boolean Cinemachine.LensSettings::m_OrthoFromCamera
	bool ___m_OrthoFromCamera_10;
	// System.Boolean Cinemachine.LensSettings::m_PhysicalFromCamera
	bool ___m_PhysicalFromCamera_11;

public:
	inline static int32_t get_offset_of_FieldOfView_1() { return static_cast<int32_t>(offsetof(LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC, ___FieldOfView_1)); }
	inline float get_FieldOfView_1() const { return ___FieldOfView_1; }
	inline float* get_address_of_FieldOfView_1() { return &___FieldOfView_1; }
	inline void set_FieldOfView_1(float value)
	{
		___FieldOfView_1 = value;
	}

	inline static int32_t get_offset_of_OrthographicSize_2() { return static_cast<int32_t>(offsetof(LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC, ___OrthographicSize_2)); }
	inline float get_OrthographicSize_2() const { return ___OrthographicSize_2; }
	inline float* get_address_of_OrthographicSize_2() { return &___OrthographicSize_2; }
	inline void set_OrthographicSize_2(float value)
	{
		___OrthographicSize_2 = value;
	}

	inline static int32_t get_offset_of_NearClipPlane_3() { return static_cast<int32_t>(offsetof(LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC, ___NearClipPlane_3)); }
	inline float get_NearClipPlane_3() const { return ___NearClipPlane_3; }
	inline float* get_address_of_NearClipPlane_3() { return &___NearClipPlane_3; }
	inline void set_NearClipPlane_3(float value)
	{
		___NearClipPlane_3 = value;
	}

	inline static int32_t get_offset_of_FarClipPlane_4() { return static_cast<int32_t>(offsetof(LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC, ___FarClipPlane_4)); }
	inline float get_FarClipPlane_4() const { return ___FarClipPlane_4; }
	inline float* get_address_of_FarClipPlane_4() { return &___FarClipPlane_4; }
	inline void set_FarClipPlane_4(float value)
	{
		___FarClipPlane_4 = value;
	}

	inline static int32_t get_offset_of_Dutch_5() { return static_cast<int32_t>(offsetof(LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC, ___Dutch_5)); }
	inline float get_Dutch_5() const { return ___Dutch_5; }
	inline float* get_address_of_Dutch_5() { return &___Dutch_5; }
	inline void set_Dutch_5(float value)
	{
		___Dutch_5 = value;
	}

	inline static int32_t get_offset_of_ModeOverride_6() { return static_cast<int32_t>(offsetof(LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC, ___ModeOverride_6)); }
	inline int32_t get_ModeOverride_6() const { return ___ModeOverride_6; }
	inline int32_t* get_address_of_ModeOverride_6() { return &___ModeOverride_6; }
	inline void set_ModeOverride_6(int32_t value)
	{
		___ModeOverride_6 = value;
	}

	inline static int32_t get_offset_of_LensShift_7() { return static_cast<int32_t>(offsetof(LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC, ___LensShift_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_LensShift_7() const { return ___LensShift_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_LensShift_7() { return &___LensShift_7; }
	inline void set_LensShift_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___LensShift_7 = value;
	}

	inline static int32_t get_offset_of_GateFit_8() { return static_cast<int32_t>(offsetof(LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC, ___GateFit_8)); }
	inline int32_t get_GateFit_8() const { return ___GateFit_8; }
	inline int32_t* get_address_of_GateFit_8() { return &___GateFit_8; }
	inline void set_GateFit_8(int32_t value)
	{
		___GateFit_8 = value;
	}

	inline static int32_t get_offset_of_m_SensorSize_9() { return static_cast<int32_t>(offsetof(LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC, ___m_SensorSize_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_SensorSize_9() const { return ___m_SensorSize_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_SensorSize_9() { return &___m_SensorSize_9; }
	inline void set_m_SensorSize_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_SensorSize_9 = value;
	}

	inline static int32_t get_offset_of_m_OrthoFromCamera_10() { return static_cast<int32_t>(offsetof(LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC, ___m_OrthoFromCamera_10)); }
	inline bool get_m_OrthoFromCamera_10() const { return ___m_OrthoFromCamera_10; }
	inline bool* get_address_of_m_OrthoFromCamera_10() { return &___m_OrthoFromCamera_10; }
	inline void set_m_OrthoFromCamera_10(bool value)
	{
		___m_OrthoFromCamera_10 = value;
	}

	inline static int32_t get_offset_of_m_PhysicalFromCamera_11() { return static_cast<int32_t>(offsetof(LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC, ___m_PhysicalFromCamera_11)); }
	inline bool get_m_PhysicalFromCamera_11() const { return ___m_PhysicalFromCamera_11; }
	inline bool* get_address_of_m_PhysicalFromCamera_11() { return &___m_PhysicalFromCamera_11; }
	inline void set_m_PhysicalFromCamera_11(bool value)
	{
		___m_PhysicalFromCamera_11 = value;
	}
};

struct LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC_StaticFields
{
public:
	// Cinemachine.LensSettings Cinemachine.LensSettings::Default
	LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC  ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC_StaticFields, ___Default_0)); }
	inline LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC  get_Default_0() const { return ___Default_0; }
	inline LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC * get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC  value)
	{
		___Default_0 = value;
	}
};

// Native definition for P/Invoke marshalling of Cinemachine.LensSettings
struct LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC_marshaled_pinvoke
{
	float ___FieldOfView_1;
	float ___OrthographicSize_2;
	float ___NearClipPlane_3;
	float ___FarClipPlane_4;
	float ___Dutch_5;
	int32_t ___ModeOverride_6;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___LensShift_7;
	int32_t ___GateFit_8;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_SensorSize_9;
	int32_t ___m_OrthoFromCamera_10;
	int32_t ___m_PhysicalFromCamera_11;
};
// Native definition for COM marshalling of Cinemachine.LensSettings
struct LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC_marshaled_com
{
	float ___FieldOfView_1;
	float ___OrthographicSize_2;
	float ___NearClipPlane_3;
	float ___FarClipPlane_4;
	float ___Dutch_5;
	int32_t ___ModeOverride_6;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___LensShift_7;
	int32_t ___GateFit_8;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_SensorSize_9;
	int32_t ___m_OrthoFromCamera_10;
	int32_t ___m_PhysicalFromCamera_11;
};

// Cinemachine.TargetPositionCache
struct  TargetPositionCache_tA9799E434495CE93B39D6A5D6A34BF1604875E42  : public RuntimeObject
{
public:

public:
};

struct TargetPositionCache_tA9799E434495CE93B39D6A5D6A34BF1604875E42_StaticFields
{
public:
	// System.Boolean Cinemachine.TargetPositionCache::<UseCache>k__BackingField
	bool ___U3CUseCacheU3Ek__BackingField_0;
	// Cinemachine.TargetPositionCache_Mode Cinemachine.TargetPositionCache::m_CacheMode
	int32_t ___m_CacheMode_2;
	// System.Single Cinemachine.TargetPositionCache::<CurrentTime>k__BackingField
	float ___U3CCurrentTimeU3Ek__BackingField_3;
	// System.Int32 Cinemachine.TargetPositionCache::<CurrentFrame>k__BackingField
	int32_t ___U3CCurrentFrameU3Ek__BackingField_4;
	// System.Boolean Cinemachine.TargetPositionCache::<IsCameraCut>k__BackingField
	bool ___U3CIsCameraCutU3Ek__BackingField_5;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Transform,Cinemachine.TargetPositionCache_CacheEntry> Cinemachine.TargetPositionCache::m_Cache
	Dictionary_2_tC828B62C23DF118F79F73B89C024ABBCCE87873B * ___m_Cache_6;
	// Cinemachine.TargetPositionCache_TimeRange Cinemachine.TargetPositionCache::m_CacheTimeRange
	TimeRange_tF70DD4C14BC9F99833857B0743DC3302FABAF276  ___m_CacheTimeRange_7;

public:
	inline static int32_t get_offset_of_U3CUseCacheU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TargetPositionCache_tA9799E434495CE93B39D6A5D6A34BF1604875E42_StaticFields, ___U3CUseCacheU3Ek__BackingField_0)); }
	inline bool get_U3CUseCacheU3Ek__BackingField_0() const { return ___U3CUseCacheU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CUseCacheU3Ek__BackingField_0() { return &___U3CUseCacheU3Ek__BackingField_0; }
	inline void set_U3CUseCacheU3Ek__BackingField_0(bool value)
	{
		___U3CUseCacheU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_CacheMode_2() { return static_cast<int32_t>(offsetof(TargetPositionCache_tA9799E434495CE93B39D6A5D6A34BF1604875E42_StaticFields, ___m_CacheMode_2)); }
	inline int32_t get_m_CacheMode_2() const { return ___m_CacheMode_2; }
	inline int32_t* get_address_of_m_CacheMode_2() { return &___m_CacheMode_2; }
	inline void set_m_CacheMode_2(int32_t value)
	{
		___m_CacheMode_2 = value;
	}

	inline static int32_t get_offset_of_U3CCurrentTimeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(TargetPositionCache_tA9799E434495CE93B39D6A5D6A34BF1604875E42_StaticFields, ___U3CCurrentTimeU3Ek__BackingField_3)); }
	inline float get_U3CCurrentTimeU3Ek__BackingField_3() const { return ___U3CCurrentTimeU3Ek__BackingField_3; }
	inline float* get_address_of_U3CCurrentTimeU3Ek__BackingField_3() { return &___U3CCurrentTimeU3Ek__BackingField_3; }
	inline void set_U3CCurrentTimeU3Ek__BackingField_3(float value)
	{
		___U3CCurrentTimeU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CCurrentFrameU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(TargetPositionCache_tA9799E434495CE93B39D6A5D6A34BF1604875E42_StaticFields, ___U3CCurrentFrameU3Ek__BackingField_4)); }
	inline int32_t get_U3CCurrentFrameU3Ek__BackingField_4() const { return ___U3CCurrentFrameU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CCurrentFrameU3Ek__BackingField_4() { return &___U3CCurrentFrameU3Ek__BackingField_4; }
	inline void set_U3CCurrentFrameU3Ek__BackingField_4(int32_t value)
	{
		___U3CCurrentFrameU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CIsCameraCutU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(TargetPositionCache_tA9799E434495CE93B39D6A5D6A34BF1604875E42_StaticFields, ___U3CIsCameraCutU3Ek__BackingField_5)); }
	inline bool get_U3CIsCameraCutU3Ek__BackingField_5() const { return ___U3CIsCameraCutU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CIsCameraCutU3Ek__BackingField_5() { return &___U3CIsCameraCutU3Ek__BackingField_5; }
	inline void set_U3CIsCameraCutU3Ek__BackingField_5(bool value)
	{
		___U3CIsCameraCutU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_m_Cache_6() { return static_cast<int32_t>(offsetof(TargetPositionCache_tA9799E434495CE93B39D6A5D6A34BF1604875E42_StaticFields, ___m_Cache_6)); }
	inline Dictionary_2_tC828B62C23DF118F79F73B89C024ABBCCE87873B * get_m_Cache_6() const { return ___m_Cache_6; }
	inline Dictionary_2_tC828B62C23DF118F79F73B89C024ABBCCE87873B ** get_address_of_m_Cache_6() { return &___m_Cache_6; }
	inline void set_m_Cache_6(Dictionary_2_tC828B62C23DF118F79F73B89C024ABBCCE87873B * value)
	{
		___m_Cache_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Cache_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_CacheTimeRange_7() { return static_cast<int32_t>(offsetof(TargetPositionCache_tA9799E434495CE93B39D6A5D6A34BF1604875E42_StaticFields, ___m_CacheTimeRange_7)); }
	inline TimeRange_tF70DD4C14BC9F99833857B0743DC3302FABAF276  get_m_CacheTimeRange_7() const { return ___m_CacheTimeRange_7; }
	inline TimeRange_tF70DD4C14BC9F99833857B0743DC3302FABAF276 * get_address_of_m_CacheTimeRange_7() { return &___m_CacheTimeRange_7; }
	inline void set_m_CacheTimeRange_7(TimeRange_tF70DD4C14BC9F99833857B0743DC3302FABAF276  value)
	{
		___m_CacheTimeRange_7 = value;
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

// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.ExposedReference`1<Cinemachine.CinemachineVirtualCameraBase>
struct  ExposedReference_1_t5B2C0E7B1795AC60AFEAC5228425E7234124855F 
{
public:
	// UnityEngine.PropertyName UnityEngine.ExposedReference`1::exposedName
	PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  ___exposedName_0;
	// UnityEngine.Object UnityEngine.ExposedReference`1::defaultValue
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___defaultValue_1;

public:
	inline static int32_t get_offset_of_exposedName_0() { return static_cast<int32_t>(offsetof(ExposedReference_1_t5B2C0E7B1795AC60AFEAC5228425E7234124855F, ___exposedName_0)); }
	inline PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  get_exposedName_0() const { return ___exposedName_0; }
	inline PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529 * get_address_of_exposedName_0() { return &___exposedName_0; }
	inline void set_exposedName_0(PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  value)
	{
		___exposedName_0 = value;
	}

	inline static int32_t get_offset_of_defaultValue_1() { return static_cast<int32_t>(offsetof(ExposedReference_1_t5B2C0E7B1795AC60AFEAC5228425E7234124855F, ___defaultValue_1)); }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * get_defaultValue_1() const { return ___defaultValue_1; }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 ** get_address_of_defaultValue_1() { return &___defaultValue_1; }
	inline void set_defaultValue_1(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * value)
	{
		___defaultValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultValue_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.ExposedReference`1
#ifndef ExposedReference_1_tDE76909D901EFA3B702C9472E5616C20297CEBE1_marshaled_pinvoke_define
#define ExposedReference_1_tDE76909D901EFA3B702C9472E5616C20297CEBE1_marshaled_pinvoke_define
struct ExposedReference_1_tDE76909D901EFA3B702C9472E5616C20297CEBE1_marshaled_pinvoke
{
	PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  ___exposedName_0;
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke ___defaultValue_1;
};
#endif
// Native definition for COM marshalling of UnityEngine.ExposedReference`1
#ifndef ExposedReference_1_tDE76909D901EFA3B702C9472E5616C20297CEBE1_marshaled_com_define
#define ExposedReference_1_tDE76909D901EFA3B702C9472E5616C20297CEBE1_marshaled_com_define
struct ExposedReference_1_tDE76909D901EFA3B702C9472E5616C20297CEBE1_marshaled_com
{
	PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  ___exposedName_0;
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com* ___defaultValue_1;
};
#endif

// UnityEngine.ExposedReference`1<System.Object>
struct  ExposedReference_1_t6A54AB83F72FCC7CB479D3F39F3CFC074284DF86 
{
public:
	// UnityEngine.PropertyName UnityEngine.ExposedReference`1::exposedName
	PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  ___exposedName_0;
	// UnityEngine.Object UnityEngine.ExposedReference`1::defaultValue
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___defaultValue_1;

public:
	inline static int32_t get_offset_of_exposedName_0() { return static_cast<int32_t>(offsetof(ExposedReference_1_t6A54AB83F72FCC7CB479D3F39F3CFC074284DF86, ___exposedName_0)); }
	inline PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  get_exposedName_0() const { return ___exposedName_0; }
	inline PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529 * get_address_of_exposedName_0() { return &___exposedName_0; }
	inline void set_exposedName_0(PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  value)
	{
		___exposedName_0 = value;
	}

	inline static int32_t get_offset_of_defaultValue_1() { return static_cast<int32_t>(offsetof(ExposedReference_1_t6A54AB83F72FCC7CB479D3F39F3CFC074284DF86, ___defaultValue_1)); }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * get_defaultValue_1() const { return ___defaultValue_1; }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 ** get_address_of_defaultValue_1() { return &___defaultValue_1; }
	inline void set_defaultValue_1(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * value)
	{
		___defaultValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultValue_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.ExposedReference`1
#ifndef ExposedReference_1_tDE76909D901EFA3B702C9472E5616C20297CEBE1_marshaled_pinvoke_define
#define ExposedReference_1_tDE76909D901EFA3B702C9472E5616C20297CEBE1_marshaled_pinvoke_define
struct ExposedReference_1_tDE76909D901EFA3B702C9472E5616C20297CEBE1_marshaled_pinvoke
{
	PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  ___exposedName_0;
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke ___defaultValue_1;
};
#endif
// Native definition for COM marshalling of UnityEngine.ExposedReference`1
#ifndef ExposedReference_1_tDE76909D901EFA3B702C9472E5616C20297CEBE1_marshaled_com_define
#define ExposedReference_1_tDE76909D901EFA3B702C9472E5616C20297CEBE1_marshaled_com_define
struct ExposedReference_1_tDE76909D901EFA3B702C9472E5616C20297CEBE1_marshaled_com
{
	PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  ___exposedName_0;
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com* ___defaultValue_1;
};
#endif

// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
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


// UnityEngine.Playables.ScriptPlayable`1<CinemachineMixer>
struct  ScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.ScriptPlayable`1::m_Handle
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(ScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B, ___m_Handle_0)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Handle_0 = value;
	}
};

struct ScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B_StaticFields
{
public:
	// UnityEngine.Playables.ScriptPlayable`1<T> UnityEngine.Playables.ScriptPlayable`1::m_NullPlayable
	ScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(ScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B_StaticFields, ___m_NullPlayable_1)); }
	inline ScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline ScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(ScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B  value)
	{
		___m_NullPlayable_1 = value;
	}
};


// UnityEngine.Playables.ScriptPlayable`1<CinemachineShotPlayable>
struct  ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.ScriptPlayable`1::m_Handle
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A, ___m_Handle_0)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Handle_0 = value;
	}
};

struct ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A_StaticFields
{
public:
	// UnityEngine.Playables.ScriptPlayable`1<T> UnityEngine.Playables.ScriptPlayable`1::m_NullPlayable
	ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A_StaticFields, ___m_NullPlayable_1)); }
	inline ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A  value)
	{
		___m_NullPlayable_1 = value;
	}
};


// UnityEngine.Playables.ScriptPlayable`1<System.Object>
struct  ScriptPlayable_1_t63661AF0CAE2B3B155608EFD5C3E712F0446136C 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.ScriptPlayable`1::m_Handle
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(ScriptPlayable_1_t63661AF0CAE2B3B155608EFD5C3E712F0446136C, ___m_Handle_0)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Handle_0 = value;
	}
};

struct ScriptPlayable_1_t63661AF0CAE2B3B155608EFD5C3E712F0446136C_StaticFields
{
public:
	// UnityEngine.Playables.ScriptPlayable`1<T> UnityEngine.Playables.ScriptPlayable`1::m_NullPlayable
	ScriptPlayable_1_t63661AF0CAE2B3B155608EFD5C3E712F0446136C  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(ScriptPlayable_1_t63661AF0CAE2B3B155608EFD5C3E712F0446136C_StaticFields, ___m_NullPlayable_1)); }
	inline ScriptPlayable_1_t63661AF0CAE2B3B155608EFD5C3E712F0446136C  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline ScriptPlayable_1_t63661AF0CAE2B3B155608EFD5C3E712F0446136C * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(ScriptPlayable_1_t63661AF0CAE2B3B155608EFD5C3E712F0446136C  value)
	{
		___m_NullPlayable_1 = value;
	}
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

// UnityEngine.Touch
struct  Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8 
{
public:
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;

public:
	inline static int32_t get_offset_of_m_FingerId_0() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_FingerId_0)); }
	inline int32_t get_m_FingerId_0() const { return ___m_FingerId_0; }
	inline int32_t* get_address_of_m_FingerId_0() { return &___m_FingerId_0; }
	inline void set_m_FingerId_0(int32_t value)
	{
		___m_FingerId_0 = value;
	}

	inline static int32_t get_offset_of_m_Position_1() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_Position_1)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_Position_1() const { return ___m_Position_1; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_Position_1() { return &___m_Position_1; }
	inline void set_m_Position_1(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_Position_1 = value;
	}

	inline static int32_t get_offset_of_m_RawPosition_2() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_RawPosition_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_RawPosition_2() const { return ___m_RawPosition_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_RawPosition_2() { return &___m_RawPosition_2; }
	inline void set_m_RawPosition_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_RawPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_PositionDelta_3() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_PositionDelta_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_PositionDelta_3() const { return ___m_PositionDelta_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_PositionDelta_3() { return &___m_PositionDelta_3; }
	inline void set_m_PositionDelta_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_PositionDelta_3 = value;
	}

	inline static int32_t get_offset_of_m_TimeDelta_4() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_TimeDelta_4)); }
	inline float get_m_TimeDelta_4() const { return ___m_TimeDelta_4; }
	inline float* get_address_of_m_TimeDelta_4() { return &___m_TimeDelta_4; }
	inline void set_m_TimeDelta_4(float value)
	{
		___m_TimeDelta_4 = value;
	}

	inline static int32_t get_offset_of_m_TapCount_5() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_TapCount_5)); }
	inline int32_t get_m_TapCount_5() const { return ___m_TapCount_5; }
	inline int32_t* get_address_of_m_TapCount_5() { return &___m_TapCount_5; }
	inline void set_m_TapCount_5(int32_t value)
	{
		___m_TapCount_5 = value;
	}

	inline static int32_t get_offset_of_m_Phase_6() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_Phase_6)); }
	inline int32_t get_m_Phase_6() const { return ___m_Phase_6; }
	inline int32_t* get_address_of_m_Phase_6() { return &___m_Phase_6; }
	inline void set_m_Phase_6(int32_t value)
	{
		___m_Phase_6 = value;
	}

	inline static int32_t get_offset_of_m_Type_7() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_Type_7)); }
	inline int32_t get_m_Type_7() const { return ___m_Type_7; }
	inline int32_t* get_address_of_m_Type_7() { return &___m_Type_7; }
	inline void set_m_Type_7(int32_t value)
	{
		___m_Type_7 = value;
	}

	inline static int32_t get_offset_of_m_Pressure_8() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_Pressure_8)); }
	inline float get_m_Pressure_8() const { return ___m_Pressure_8; }
	inline float* get_address_of_m_Pressure_8() { return &___m_Pressure_8; }
	inline void set_m_Pressure_8(float value)
	{
		___m_Pressure_8 = value;
	}

	inline static int32_t get_offset_of_m_maximumPossiblePressure_9() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_maximumPossiblePressure_9)); }
	inline float get_m_maximumPossiblePressure_9() const { return ___m_maximumPossiblePressure_9; }
	inline float* get_address_of_m_maximumPossiblePressure_9() { return &___m_maximumPossiblePressure_9; }
	inline void set_m_maximumPossiblePressure_9(float value)
	{
		___m_maximumPossiblePressure_9 = value;
	}

	inline static int32_t get_offset_of_m_Radius_10() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_Radius_10)); }
	inline float get_m_Radius_10() const { return ___m_Radius_10; }
	inline float* get_address_of_m_Radius_10() { return &___m_Radius_10; }
	inline void set_m_Radius_10(float value)
	{
		___m_Radius_10 = value;
	}

	inline static int32_t get_offset_of_m_RadiusVariance_11() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_RadiusVariance_11)); }
	inline float get_m_RadiusVariance_11() const { return ___m_RadiusVariance_11; }
	inline float* get_address_of_m_RadiusVariance_11() { return &___m_RadiusVariance_11; }
	inline void set_m_RadiusVariance_11(float value)
	{
		___m_RadiusVariance_11 = value;
	}

	inline static int32_t get_offset_of_m_AltitudeAngle_12() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_AltitudeAngle_12)); }
	inline float get_m_AltitudeAngle_12() const { return ___m_AltitudeAngle_12; }
	inline float* get_address_of_m_AltitudeAngle_12() { return &___m_AltitudeAngle_12; }
	inline void set_m_AltitudeAngle_12(float value)
	{
		___m_AltitudeAngle_12 = value;
	}

	inline static int32_t get_offset_of_m_AzimuthAngle_13() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_AzimuthAngle_13)); }
	inline float get_m_AzimuthAngle_13() const { return ___m_AzimuthAngle_13; }
	inline float* get_address_of_m_AzimuthAngle_13() { return &___m_AzimuthAngle_13; }
	inline void set_m_AzimuthAngle_13(float value)
	{
		___m_AzimuthAngle_13 = value;
	}
};


// Cinemachine.CameraState
struct  CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 
{
public:
	// Cinemachine.LensSettings Cinemachine.CameraState::<Lens>k__BackingField
	LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC  ___U3CLensU3Ek__BackingField_0;
	// UnityEngine.Vector3 Cinemachine.CameraState::<ReferenceUp>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CReferenceUpU3Ek__BackingField_1;
	// UnityEngine.Vector3 Cinemachine.CameraState::<ReferenceLookAt>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CReferenceLookAtU3Ek__BackingField_2;
	// UnityEngine.Vector3 Cinemachine.CameraState::<RawPosition>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CRawPositionU3Ek__BackingField_4;
	// UnityEngine.Quaternion Cinemachine.CameraState::<RawOrientation>k__BackingField
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___U3CRawOrientationU3Ek__BackingField_5;
	// UnityEngine.Vector3 Cinemachine.CameraState::<PositionDampingBypass>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CPositionDampingBypassU3Ek__BackingField_6;
	// System.Single Cinemachine.CameraState::<ShotQuality>k__BackingField
	float ___U3CShotQualityU3Ek__BackingField_7;
	// UnityEngine.Vector3 Cinemachine.CameraState::<PositionCorrection>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CPositionCorrectionU3Ek__BackingField_8;
	// UnityEngine.Quaternion Cinemachine.CameraState::<OrientationCorrection>k__BackingField
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___U3COrientationCorrectionU3Ek__BackingField_9;
	// Cinemachine.CameraState_BlendHintValue Cinemachine.CameraState::<BlendHint>k__BackingField
	int32_t ___U3CBlendHintU3Ek__BackingField_10;
	// Cinemachine.CameraState_CustomBlendable Cinemachine.CameraState::mCustom0
	CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253  ___mCustom0_11;
	// Cinemachine.CameraState_CustomBlendable Cinemachine.CameraState::mCustom1
	CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253  ___mCustom1_12;
	// Cinemachine.CameraState_CustomBlendable Cinemachine.CameraState::mCustom2
	CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253  ___mCustom2_13;
	// Cinemachine.CameraState_CustomBlendable Cinemachine.CameraState::mCustom3
	CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253  ___mCustom3_14;
	// System.Collections.Generic.List`1<Cinemachine.CameraState_CustomBlendable> Cinemachine.CameraState::m_CustomOverflow
	List_1_t9754DDC645F03421B1583C8773EB2797AB4B96B5 * ___m_CustomOverflow_15;
	// System.Int32 Cinemachine.CameraState::<NumCustomBlendables>k__BackingField
	int32_t ___U3CNumCustomBlendablesU3Ek__BackingField_16;

public:
	inline static int32_t get_offset_of_U3CLensU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(CameraState_t308F3A442112B7464D2B21A417D325662E3399B1, ___U3CLensU3Ek__BackingField_0)); }
	inline LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC  get_U3CLensU3Ek__BackingField_0() const { return ___U3CLensU3Ek__BackingField_0; }
	inline LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC * get_address_of_U3CLensU3Ek__BackingField_0() { return &___U3CLensU3Ek__BackingField_0; }
	inline void set_U3CLensU3Ek__BackingField_0(LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC  value)
	{
		___U3CLensU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CReferenceUpU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(CameraState_t308F3A442112B7464D2B21A417D325662E3399B1, ___U3CReferenceUpU3Ek__BackingField_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CReferenceUpU3Ek__BackingField_1() const { return ___U3CReferenceUpU3Ek__BackingField_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CReferenceUpU3Ek__BackingField_1() { return &___U3CReferenceUpU3Ek__BackingField_1; }
	inline void set_U3CReferenceUpU3Ek__BackingField_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CReferenceUpU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CReferenceLookAtU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(CameraState_t308F3A442112B7464D2B21A417D325662E3399B1, ___U3CReferenceLookAtU3Ek__BackingField_2)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CReferenceLookAtU3Ek__BackingField_2() const { return ___U3CReferenceLookAtU3Ek__BackingField_2; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CReferenceLookAtU3Ek__BackingField_2() { return &___U3CReferenceLookAtU3Ek__BackingField_2; }
	inline void set_U3CReferenceLookAtU3Ek__BackingField_2(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CReferenceLookAtU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CRawPositionU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(CameraState_t308F3A442112B7464D2B21A417D325662E3399B1, ___U3CRawPositionU3Ek__BackingField_4)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CRawPositionU3Ek__BackingField_4() const { return ___U3CRawPositionU3Ek__BackingField_4; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CRawPositionU3Ek__BackingField_4() { return &___U3CRawPositionU3Ek__BackingField_4; }
	inline void set_U3CRawPositionU3Ek__BackingField_4(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CRawPositionU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CRawOrientationU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(CameraState_t308F3A442112B7464D2B21A417D325662E3399B1, ___U3CRawOrientationU3Ek__BackingField_5)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_U3CRawOrientationU3Ek__BackingField_5() const { return ___U3CRawOrientationU3Ek__BackingField_5; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_U3CRawOrientationU3Ek__BackingField_5() { return &___U3CRawOrientationU3Ek__BackingField_5; }
	inline void set_U3CRawOrientationU3Ek__BackingField_5(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___U3CRawOrientationU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CPositionDampingBypassU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(CameraState_t308F3A442112B7464D2B21A417D325662E3399B1, ___U3CPositionDampingBypassU3Ek__BackingField_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CPositionDampingBypassU3Ek__BackingField_6() const { return ___U3CPositionDampingBypassU3Ek__BackingField_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CPositionDampingBypassU3Ek__BackingField_6() { return &___U3CPositionDampingBypassU3Ek__BackingField_6; }
	inline void set_U3CPositionDampingBypassU3Ek__BackingField_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CPositionDampingBypassU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CShotQualityU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(CameraState_t308F3A442112B7464D2B21A417D325662E3399B1, ___U3CShotQualityU3Ek__BackingField_7)); }
	inline float get_U3CShotQualityU3Ek__BackingField_7() const { return ___U3CShotQualityU3Ek__BackingField_7; }
	inline float* get_address_of_U3CShotQualityU3Ek__BackingField_7() { return &___U3CShotQualityU3Ek__BackingField_7; }
	inline void set_U3CShotQualityU3Ek__BackingField_7(float value)
	{
		___U3CShotQualityU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CPositionCorrectionU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(CameraState_t308F3A442112B7464D2B21A417D325662E3399B1, ___U3CPositionCorrectionU3Ek__BackingField_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CPositionCorrectionU3Ek__BackingField_8() const { return ___U3CPositionCorrectionU3Ek__BackingField_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CPositionCorrectionU3Ek__BackingField_8() { return &___U3CPositionCorrectionU3Ek__BackingField_8; }
	inline void set_U3CPositionCorrectionU3Ek__BackingField_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CPositionCorrectionU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3COrientationCorrectionU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(CameraState_t308F3A442112B7464D2B21A417D325662E3399B1, ___U3COrientationCorrectionU3Ek__BackingField_9)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_U3COrientationCorrectionU3Ek__BackingField_9() const { return ___U3COrientationCorrectionU3Ek__BackingField_9; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_U3COrientationCorrectionU3Ek__BackingField_9() { return &___U3COrientationCorrectionU3Ek__BackingField_9; }
	inline void set_U3COrientationCorrectionU3Ek__BackingField_9(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___U3COrientationCorrectionU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CBlendHintU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(CameraState_t308F3A442112B7464D2B21A417D325662E3399B1, ___U3CBlendHintU3Ek__BackingField_10)); }
	inline int32_t get_U3CBlendHintU3Ek__BackingField_10() const { return ___U3CBlendHintU3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3CBlendHintU3Ek__BackingField_10() { return &___U3CBlendHintU3Ek__BackingField_10; }
	inline void set_U3CBlendHintU3Ek__BackingField_10(int32_t value)
	{
		___U3CBlendHintU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_mCustom0_11() { return static_cast<int32_t>(offsetof(CameraState_t308F3A442112B7464D2B21A417D325662E3399B1, ___mCustom0_11)); }
	inline CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253  get_mCustom0_11() const { return ___mCustom0_11; }
	inline CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253 * get_address_of_mCustom0_11() { return &___mCustom0_11; }
	inline void set_mCustom0_11(CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253  value)
	{
		___mCustom0_11 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___mCustom0_11))->___m_Custom_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_mCustom1_12() { return static_cast<int32_t>(offsetof(CameraState_t308F3A442112B7464D2B21A417D325662E3399B1, ___mCustom1_12)); }
	inline CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253  get_mCustom1_12() const { return ___mCustom1_12; }
	inline CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253 * get_address_of_mCustom1_12() { return &___mCustom1_12; }
	inline void set_mCustom1_12(CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253  value)
	{
		___mCustom1_12 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___mCustom1_12))->___m_Custom_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_mCustom2_13() { return static_cast<int32_t>(offsetof(CameraState_t308F3A442112B7464D2B21A417D325662E3399B1, ___mCustom2_13)); }
	inline CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253  get_mCustom2_13() const { return ___mCustom2_13; }
	inline CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253 * get_address_of_mCustom2_13() { return &___mCustom2_13; }
	inline void set_mCustom2_13(CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253  value)
	{
		___mCustom2_13 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___mCustom2_13))->___m_Custom_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_mCustom3_14() { return static_cast<int32_t>(offsetof(CameraState_t308F3A442112B7464D2B21A417D325662E3399B1, ___mCustom3_14)); }
	inline CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253  get_mCustom3_14() const { return ___mCustom3_14; }
	inline CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253 * get_address_of_mCustom3_14() { return &___mCustom3_14; }
	inline void set_mCustom3_14(CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253  value)
	{
		___mCustom3_14 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___mCustom3_14))->___m_Custom_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_CustomOverflow_15() { return static_cast<int32_t>(offsetof(CameraState_t308F3A442112B7464D2B21A417D325662E3399B1, ___m_CustomOverflow_15)); }
	inline List_1_t9754DDC645F03421B1583C8773EB2797AB4B96B5 * get_m_CustomOverflow_15() const { return ___m_CustomOverflow_15; }
	inline List_1_t9754DDC645F03421B1583C8773EB2797AB4B96B5 ** get_address_of_m_CustomOverflow_15() { return &___m_CustomOverflow_15; }
	inline void set_m_CustomOverflow_15(List_1_t9754DDC645F03421B1583C8773EB2797AB4B96B5 * value)
	{
		___m_CustomOverflow_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CustomOverflow_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNumCustomBlendablesU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(CameraState_t308F3A442112B7464D2B21A417D325662E3399B1, ___U3CNumCustomBlendablesU3Ek__BackingField_16)); }
	inline int32_t get_U3CNumCustomBlendablesU3Ek__BackingField_16() const { return ___U3CNumCustomBlendablesU3Ek__BackingField_16; }
	inline int32_t* get_address_of_U3CNumCustomBlendablesU3Ek__BackingField_16() { return &___U3CNumCustomBlendablesU3Ek__BackingField_16; }
	inline void set_U3CNumCustomBlendablesU3Ek__BackingField_16(int32_t value)
	{
		___U3CNumCustomBlendablesU3Ek__BackingField_16 = value;
	}
};

struct CameraState_t308F3A442112B7464D2B21A417D325662E3399B1_StaticFields
{
public:
	// UnityEngine.Vector3 Cinemachine.CameraState::kNoPoint
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___kNoPoint_3;

public:
	inline static int32_t get_offset_of_kNoPoint_3() { return static_cast<int32_t>(offsetof(CameraState_t308F3A442112B7464D2B21A417D325662E3399B1_StaticFields, ___kNoPoint_3)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_kNoPoint_3() const { return ___kNoPoint_3; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_kNoPoint_3() { return &___kNoPoint_3; }
	inline void set_kNoPoint_3(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___kNoPoint_3 = value;
	}
};

// Native definition for P/Invoke marshalling of Cinemachine.CameraState
struct CameraState_t308F3A442112B7464D2B21A417D325662E3399B1_marshaled_pinvoke
{
	LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC_marshaled_pinvoke ___U3CLensU3Ek__BackingField_0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CReferenceUpU3Ek__BackingField_1;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CReferenceLookAtU3Ek__BackingField_2;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CRawPositionU3Ek__BackingField_4;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___U3CRawOrientationU3Ek__BackingField_5;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CPositionDampingBypassU3Ek__BackingField_6;
	float ___U3CShotQualityU3Ek__BackingField_7;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CPositionCorrectionU3Ek__BackingField_8;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___U3COrientationCorrectionU3Ek__BackingField_9;
	int32_t ___U3CBlendHintU3Ek__BackingField_10;
	CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253  ___mCustom0_11;
	CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253  ___mCustom1_12;
	CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253  ___mCustom2_13;
	CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253  ___mCustom3_14;
	List_1_t9754DDC645F03421B1583C8773EB2797AB4B96B5 * ___m_CustomOverflow_15;
	int32_t ___U3CNumCustomBlendablesU3Ek__BackingField_16;
};
// Native definition for COM marshalling of Cinemachine.CameraState
struct CameraState_t308F3A442112B7464D2B21A417D325662E3399B1_marshaled_com
{
	LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC_marshaled_com ___U3CLensU3Ek__BackingField_0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CReferenceUpU3Ek__BackingField_1;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CReferenceLookAtU3Ek__BackingField_2;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CRawPositionU3Ek__BackingField_4;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___U3CRawOrientationU3Ek__BackingField_5;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CPositionDampingBypassU3Ek__BackingField_6;
	float ___U3CShotQualityU3Ek__BackingField_7;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CPositionCorrectionU3Ek__BackingField_8;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___U3COrientationCorrectionU3Ek__BackingField_9;
	int32_t ___U3CBlendHintU3Ek__BackingField_10;
	CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253  ___mCustom0_11;
	CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253  ___mCustom1_12;
	CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253  ___mCustom2_13;
	CustomBlendable_tC203F291B1DBDDF7E40E2CEE984F4755BDF6D253  ___mCustom3_14;
	List_1_t9754DDC645F03421B1583C8773EB2797AB4B96B5 * ___m_CustomOverflow_15;
	int32_t ___U3CNumCustomBlendablesU3Ek__BackingField_16;
};

// Cinemachine.CinemachineCore_AxisInputDelegate
struct  AxisInputDelegate_t5352DB1BE196BC488C6BBD6FE1F0541CA8A887CE  : public MulticastDelegate_t
{
public:

public:
};


// CinemachineMixer_MasterDirectorDelegate
struct  MasterDirectorDelegate_t3B919084EAF5EA2C88943445B34713394E0C4AD6  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
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


// UnityEngine.Playables.FrameData
struct  FrameData_t7CF1DA259799AC04363C4CA88947D4EB7E28B38E 
{
public:
	// System.UInt64 UnityEngine.Playables.FrameData::m_FrameID
	uint64_t ___m_FrameID_0;
	// System.Double UnityEngine.Playables.FrameData::m_DeltaTime
	double ___m_DeltaTime_1;
	// System.Single UnityEngine.Playables.FrameData::m_Weight
	float ___m_Weight_2;
	// System.Single UnityEngine.Playables.FrameData::m_EffectiveWeight
	float ___m_EffectiveWeight_3;
	// System.Double UnityEngine.Playables.FrameData::m_EffectiveParentDelay
	double ___m_EffectiveParentDelay_4;
	// System.Single UnityEngine.Playables.FrameData::m_EffectiveParentSpeed
	float ___m_EffectiveParentSpeed_5;
	// System.Single UnityEngine.Playables.FrameData::m_EffectiveSpeed
	float ___m_EffectiveSpeed_6;
	// UnityEngine.Playables.FrameData_Flags UnityEngine.Playables.FrameData::m_Flags
	int32_t ___m_Flags_7;
	// UnityEngine.Playables.PlayableOutput UnityEngine.Playables.FrameData::m_Output
	PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345  ___m_Output_8;

public:
	inline static int32_t get_offset_of_m_FrameID_0() { return static_cast<int32_t>(offsetof(FrameData_t7CF1DA259799AC04363C4CA88947D4EB7E28B38E, ___m_FrameID_0)); }
	inline uint64_t get_m_FrameID_0() const { return ___m_FrameID_0; }
	inline uint64_t* get_address_of_m_FrameID_0() { return &___m_FrameID_0; }
	inline void set_m_FrameID_0(uint64_t value)
	{
		___m_FrameID_0 = value;
	}

	inline static int32_t get_offset_of_m_DeltaTime_1() { return static_cast<int32_t>(offsetof(FrameData_t7CF1DA259799AC04363C4CA88947D4EB7E28B38E, ___m_DeltaTime_1)); }
	inline double get_m_DeltaTime_1() const { return ___m_DeltaTime_1; }
	inline double* get_address_of_m_DeltaTime_1() { return &___m_DeltaTime_1; }
	inline void set_m_DeltaTime_1(double value)
	{
		___m_DeltaTime_1 = value;
	}

	inline static int32_t get_offset_of_m_Weight_2() { return static_cast<int32_t>(offsetof(FrameData_t7CF1DA259799AC04363C4CA88947D4EB7E28B38E, ___m_Weight_2)); }
	inline float get_m_Weight_2() const { return ___m_Weight_2; }
	inline float* get_address_of_m_Weight_2() { return &___m_Weight_2; }
	inline void set_m_Weight_2(float value)
	{
		___m_Weight_2 = value;
	}

	inline static int32_t get_offset_of_m_EffectiveWeight_3() { return static_cast<int32_t>(offsetof(FrameData_t7CF1DA259799AC04363C4CA88947D4EB7E28B38E, ___m_EffectiveWeight_3)); }
	inline float get_m_EffectiveWeight_3() const { return ___m_EffectiveWeight_3; }
	inline float* get_address_of_m_EffectiveWeight_3() { return &___m_EffectiveWeight_3; }
	inline void set_m_EffectiveWeight_3(float value)
	{
		___m_EffectiveWeight_3 = value;
	}

	inline static int32_t get_offset_of_m_EffectiveParentDelay_4() { return static_cast<int32_t>(offsetof(FrameData_t7CF1DA259799AC04363C4CA88947D4EB7E28B38E, ___m_EffectiveParentDelay_4)); }
	inline double get_m_EffectiveParentDelay_4() const { return ___m_EffectiveParentDelay_4; }
	inline double* get_address_of_m_EffectiveParentDelay_4() { return &___m_EffectiveParentDelay_4; }
	inline void set_m_EffectiveParentDelay_4(double value)
	{
		___m_EffectiveParentDelay_4 = value;
	}

	inline static int32_t get_offset_of_m_EffectiveParentSpeed_5() { return static_cast<int32_t>(offsetof(FrameData_t7CF1DA259799AC04363C4CA88947D4EB7E28B38E, ___m_EffectiveParentSpeed_5)); }
	inline float get_m_EffectiveParentSpeed_5() const { return ___m_EffectiveParentSpeed_5; }
	inline float* get_address_of_m_EffectiveParentSpeed_5() { return &___m_EffectiveParentSpeed_5; }
	inline void set_m_EffectiveParentSpeed_5(float value)
	{
		___m_EffectiveParentSpeed_5 = value;
	}

	inline static int32_t get_offset_of_m_EffectiveSpeed_6() { return static_cast<int32_t>(offsetof(FrameData_t7CF1DA259799AC04363C4CA88947D4EB7E28B38E, ___m_EffectiveSpeed_6)); }
	inline float get_m_EffectiveSpeed_6() const { return ___m_EffectiveSpeed_6; }
	inline float* get_address_of_m_EffectiveSpeed_6() { return &___m_EffectiveSpeed_6; }
	inline void set_m_EffectiveSpeed_6(float value)
	{
		___m_EffectiveSpeed_6 = value;
	}

	inline static int32_t get_offset_of_m_Flags_7() { return static_cast<int32_t>(offsetof(FrameData_t7CF1DA259799AC04363C4CA88947D4EB7E28B38E, ___m_Flags_7)); }
	inline int32_t get_m_Flags_7() const { return ___m_Flags_7; }
	inline int32_t* get_address_of_m_Flags_7() { return &___m_Flags_7; }
	inline void set_m_Flags_7(int32_t value)
	{
		___m_Flags_7 = value;
	}

	inline static int32_t get_offset_of_m_Output_8() { return static_cast<int32_t>(offsetof(FrameData_t7CF1DA259799AC04363C4CA88947D4EB7E28B38E, ___m_Output_8)); }
	inline PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345  get_m_Output_8() const { return ___m_Output_8; }
	inline PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345 * get_address_of_m_Output_8() { return &___m_Output_8; }
	inline void set_m_Output_8(PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345  value)
	{
		___m_Output_8 = value;
	}
};


// UnityEngine.Playables.PlayableAsset
struct  PlayableAsset_t28B670EFE526C0D383A1C5A5AE2A150424E989AD  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:

public:
};


// CinemachineShot
struct  CinemachineShot_tD3D7C77FC8883876C78322509579E70D4ABFE1D5  : public PlayableAsset_t28B670EFE526C0D383A1C5A5AE2A150424E989AD
{
public:
	// System.String CinemachineShot::DisplayName
	String_t* ___DisplayName_4;
	// UnityEngine.ExposedReference`1<Cinemachine.CinemachineVirtualCameraBase> CinemachineShot::VirtualCamera
	ExposedReference_1_t5B2C0E7B1795AC60AFEAC5228425E7234124855F  ___VirtualCamera_5;

public:
	inline static int32_t get_offset_of_DisplayName_4() { return static_cast<int32_t>(offsetof(CinemachineShot_tD3D7C77FC8883876C78322509579E70D4ABFE1D5, ___DisplayName_4)); }
	inline String_t* get_DisplayName_4() const { return ___DisplayName_4; }
	inline String_t** get_address_of_DisplayName_4() { return &___DisplayName_4; }
	inline void set_DisplayName_4(String_t* value)
	{
		___DisplayName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DisplayName_4), (void*)value);
	}

	inline static int32_t get_offset_of_VirtualCamera_5() { return static_cast<int32_t>(offsetof(CinemachineShot_tD3D7C77FC8883876C78322509579E70D4ABFE1D5, ___VirtualCamera_5)); }
	inline ExposedReference_1_t5B2C0E7B1795AC60AFEAC5228425E7234124855F  get_VirtualCamera_5() const { return ___VirtualCamera_5; }
	inline ExposedReference_1_t5B2C0E7B1795AC60AFEAC5228425E7234124855F * get_address_of_VirtualCamera_5() { return &___VirtualCamera_5; }
	inline void set_VirtualCamera_5(ExposedReference_1_t5B2C0E7B1795AC60AFEAC5228425E7234124855F  value)
	{
		___VirtualCamera_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___VirtualCamera_5))->___defaultValue_1), (void*)NULL);
	}
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.Playables.PlayableDirector
struct  PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:
	// System.Action`1<UnityEngine.Playables.PlayableDirector> UnityEngine.Playables.PlayableDirector::played
	Action_1_t25E50453F931760A3FC110C4EC79B73BBC203021 * ___played_4;
	// System.Action`1<UnityEngine.Playables.PlayableDirector> UnityEngine.Playables.PlayableDirector::paused
	Action_1_t25E50453F931760A3FC110C4EC79B73BBC203021 * ___paused_5;
	// System.Action`1<UnityEngine.Playables.PlayableDirector> UnityEngine.Playables.PlayableDirector::stopped
	Action_1_t25E50453F931760A3FC110C4EC79B73BBC203021 * ___stopped_6;

public:
	inline static int32_t get_offset_of_played_4() { return static_cast<int32_t>(offsetof(PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2, ___played_4)); }
	inline Action_1_t25E50453F931760A3FC110C4EC79B73BBC203021 * get_played_4() const { return ___played_4; }
	inline Action_1_t25E50453F931760A3FC110C4EC79B73BBC203021 ** get_address_of_played_4() { return &___played_4; }
	inline void set_played_4(Action_1_t25E50453F931760A3FC110C4EC79B73BBC203021 * value)
	{
		___played_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___played_4), (void*)value);
	}

	inline static int32_t get_offset_of_paused_5() { return static_cast<int32_t>(offsetof(PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2, ___paused_5)); }
	inline Action_1_t25E50453F931760A3FC110C4EC79B73BBC203021 * get_paused_5() const { return ___paused_5; }
	inline Action_1_t25E50453F931760A3FC110C4EC79B73BBC203021 ** get_address_of_paused_5() { return &___paused_5; }
	inline void set_paused_5(Action_1_t25E50453F931760A3FC110C4EC79B73BBC203021 * value)
	{
		___paused_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___paused_5), (void*)value);
	}

	inline static int32_t get_offset_of_stopped_6() { return static_cast<int32_t>(offsetof(PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2, ___stopped_6)); }
	inline Action_1_t25E50453F931760A3FC110C4EC79B73BBC203021 * get_stopped_6() const { return ___stopped_6; }
	inline Action_1_t25E50453F931760A3FC110C4EC79B73BBC203021 ** get_address_of_stopped_6() { return &___stopped_6; }
	inline void set_stopped_6(Action_1_t25E50453F931760A3FC110C4EC79B73BBC203021 * value)
	{
		___stopped_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stopped_6), (void*)value);
	}
};


// UnityEngine.Timeline.TrackAsset
struct  TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D  : public PlayableAsset_t28B670EFE526C0D383A1C5A5AE2A150424E989AD
{
public:
	// System.Int32 UnityEngine.Timeline.TrackAsset::m_Version
	int32_t ___m_Version_5;
	// UnityEngine.AnimationClip UnityEngine.Timeline.TrackAsset::m_AnimClip
	AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * ___m_AnimClip_6;
	// System.Boolean UnityEngine.Timeline.TrackAsset::m_Locked
	bool ___m_Locked_11;
	// System.Boolean UnityEngine.Timeline.TrackAsset::m_Muted
	bool ___m_Muted_12;
	// System.String UnityEngine.Timeline.TrackAsset::m_CustomPlayableFullTypename
	String_t* ___m_CustomPlayableFullTypename_13;
	// UnityEngine.AnimationClip UnityEngine.Timeline.TrackAsset::m_Curves
	AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * ___m_Curves_14;
	// UnityEngine.Playables.PlayableAsset UnityEngine.Timeline.TrackAsset::m_Parent
	PlayableAsset_t28B670EFE526C0D383A1C5A5AE2A150424E989AD * ___m_Parent_15;
	// System.Collections.Generic.List`1<UnityEngine.ScriptableObject> UnityEngine.Timeline.TrackAsset::m_Children
	List_1_t41ED65DE2CE5065D598F08F2FA793FD1FF75A8AF * ___m_Children_16;
	// System.Int32 UnityEngine.Timeline.TrackAsset::m_ItemsHash
	int32_t ___m_ItemsHash_17;
	// UnityEngine.Timeline.TimelineClip[] UnityEngine.Timeline.TrackAsset::m_ClipsCache
	TimelineClipU5BU5D_tF91A3D5ECF00F61AAD13F3FCFE125B4F7FA5982E* ___m_ClipsCache_18;
	// UnityEngine.Timeline.DiscreteTime UnityEngine.Timeline.TrackAsset::m_Start
	DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047  ___m_Start_19;
	// UnityEngine.Timeline.DiscreteTime UnityEngine.Timeline.TrackAsset::m_End
	DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047  ___m_End_20;
	// System.Boolean UnityEngine.Timeline.TrackAsset::m_CacheSorted
	bool ___m_CacheSorted_21;
	// System.Nullable`1<System.Boolean> UnityEngine.Timeline.TrackAsset::m_SupportsNotifications
	Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  ___m_SupportsNotifications_22;
	// System.Collections.Generic.IEnumerable`1<UnityEngine.Timeline.TrackAsset> UnityEngine.Timeline.TrackAsset::m_ChildTrackCache
	RuntimeObject* ___m_ChildTrackCache_24;
	// System.Collections.Generic.List`1<UnityEngine.Timeline.TimelineClip> UnityEngine.Timeline.TrackAsset::m_Clips
	List_1_t6E4584A39B7BEEB659D9A568195C253D69ABAAEA * ___m_Clips_26;
	// UnityEngine.Timeline.MarkerList UnityEngine.Timeline.TrackAsset::m_Markers
	MarkerList_t5DDEACDD8C5942DE4C9778F1CC77E5AB685832DC  ___m_Markers_27;

public:
	inline static int32_t get_offset_of_m_Version_5() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_Version_5)); }
	inline int32_t get_m_Version_5() const { return ___m_Version_5; }
	inline int32_t* get_address_of_m_Version_5() { return &___m_Version_5; }
	inline void set_m_Version_5(int32_t value)
	{
		___m_Version_5 = value;
	}

	inline static int32_t get_offset_of_m_AnimClip_6() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_AnimClip_6)); }
	inline AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * get_m_AnimClip_6() const { return ___m_AnimClip_6; }
	inline AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE ** get_address_of_m_AnimClip_6() { return &___m_AnimClip_6; }
	inline void set_m_AnimClip_6(AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * value)
	{
		___m_AnimClip_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimClip_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Locked_11() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_Locked_11)); }
	inline bool get_m_Locked_11() const { return ___m_Locked_11; }
	inline bool* get_address_of_m_Locked_11() { return &___m_Locked_11; }
	inline void set_m_Locked_11(bool value)
	{
		___m_Locked_11 = value;
	}

	inline static int32_t get_offset_of_m_Muted_12() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_Muted_12)); }
	inline bool get_m_Muted_12() const { return ___m_Muted_12; }
	inline bool* get_address_of_m_Muted_12() { return &___m_Muted_12; }
	inline void set_m_Muted_12(bool value)
	{
		___m_Muted_12 = value;
	}

	inline static int32_t get_offset_of_m_CustomPlayableFullTypename_13() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_CustomPlayableFullTypename_13)); }
	inline String_t* get_m_CustomPlayableFullTypename_13() const { return ___m_CustomPlayableFullTypename_13; }
	inline String_t** get_address_of_m_CustomPlayableFullTypename_13() { return &___m_CustomPlayableFullTypename_13; }
	inline void set_m_CustomPlayableFullTypename_13(String_t* value)
	{
		___m_CustomPlayableFullTypename_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CustomPlayableFullTypename_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Curves_14() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_Curves_14)); }
	inline AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * get_m_Curves_14() const { return ___m_Curves_14; }
	inline AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE ** get_address_of_m_Curves_14() { return &___m_Curves_14; }
	inline void set_m_Curves_14(AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * value)
	{
		___m_Curves_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Curves_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_Parent_15() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_Parent_15)); }
	inline PlayableAsset_t28B670EFE526C0D383A1C5A5AE2A150424E989AD * get_m_Parent_15() const { return ___m_Parent_15; }
	inline PlayableAsset_t28B670EFE526C0D383A1C5A5AE2A150424E989AD ** get_address_of_m_Parent_15() { return &___m_Parent_15; }
	inline void set_m_Parent_15(PlayableAsset_t28B670EFE526C0D383A1C5A5AE2A150424E989AD * value)
	{
		___m_Parent_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Parent_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_Children_16() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_Children_16)); }
	inline List_1_t41ED65DE2CE5065D598F08F2FA793FD1FF75A8AF * get_m_Children_16() const { return ___m_Children_16; }
	inline List_1_t41ED65DE2CE5065D598F08F2FA793FD1FF75A8AF ** get_address_of_m_Children_16() { return &___m_Children_16; }
	inline void set_m_Children_16(List_1_t41ED65DE2CE5065D598F08F2FA793FD1FF75A8AF * value)
	{
		___m_Children_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Children_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_ItemsHash_17() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_ItemsHash_17)); }
	inline int32_t get_m_ItemsHash_17() const { return ___m_ItemsHash_17; }
	inline int32_t* get_address_of_m_ItemsHash_17() { return &___m_ItemsHash_17; }
	inline void set_m_ItemsHash_17(int32_t value)
	{
		___m_ItemsHash_17 = value;
	}

	inline static int32_t get_offset_of_m_ClipsCache_18() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_ClipsCache_18)); }
	inline TimelineClipU5BU5D_tF91A3D5ECF00F61AAD13F3FCFE125B4F7FA5982E* get_m_ClipsCache_18() const { return ___m_ClipsCache_18; }
	inline TimelineClipU5BU5D_tF91A3D5ECF00F61AAD13F3FCFE125B4F7FA5982E** get_address_of_m_ClipsCache_18() { return &___m_ClipsCache_18; }
	inline void set_m_ClipsCache_18(TimelineClipU5BU5D_tF91A3D5ECF00F61AAD13F3FCFE125B4F7FA5982E* value)
	{
		___m_ClipsCache_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ClipsCache_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_Start_19() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_Start_19)); }
	inline DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047  get_m_Start_19() const { return ___m_Start_19; }
	inline DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047 * get_address_of_m_Start_19() { return &___m_Start_19; }
	inline void set_m_Start_19(DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047  value)
	{
		___m_Start_19 = value;
	}

	inline static int32_t get_offset_of_m_End_20() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_End_20)); }
	inline DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047  get_m_End_20() const { return ___m_End_20; }
	inline DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047 * get_address_of_m_End_20() { return &___m_End_20; }
	inline void set_m_End_20(DiscreteTime_t5CEF520F9662493C6516748140D71CE69D64B047  value)
	{
		___m_End_20 = value;
	}

	inline static int32_t get_offset_of_m_CacheSorted_21() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_CacheSorted_21)); }
	inline bool get_m_CacheSorted_21() const { return ___m_CacheSorted_21; }
	inline bool* get_address_of_m_CacheSorted_21() { return &___m_CacheSorted_21; }
	inline void set_m_CacheSorted_21(bool value)
	{
		___m_CacheSorted_21 = value;
	}

	inline static int32_t get_offset_of_m_SupportsNotifications_22() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_SupportsNotifications_22)); }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  get_m_SupportsNotifications_22() const { return ___m_SupportsNotifications_22; }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 * get_address_of_m_SupportsNotifications_22() { return &___m_SupportsNotifications_22; }
	inline void set_m_SupportsNotifications_22(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  value)
	{
		___m_SupportsNotifications_22 = value;
	}

	inline static int32_t get_offset_of_m_ChildTrackCache_24() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_ChildTrackCache_24)); }
	inline RuntimeObject* get_m_ChildTrackCache_24() const { return ___m_ChildTrackCache_24; }
	inline RuntimeObject** get_address_of_m_ChildTrackCache_24() { return &___m_ChildTrackCache_24; }
	inline void set_m_ChildTrackCache_24(RuntimeObject* value)
	{
		___m_ChildTrackCache_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChildTrackCache_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_Clips_26() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_Clips_26)); }
	inline List_1_t6E4584A39B7BEEB659D9A568195C253D69ABAAEA * get_m_Clips_26() const { return ___m_Clips_26; }
	inline List_1_t6E4584A39B7BEEB659D9A568195C253D69ABAAEA ** get_address_of_m_Clips_26() { return &___m_Clips_26; }
	inline void set_m_Clips_26(List_1_t6E4584A39B7BEEB659D9A568195C253D69ABAAEA * value)
	{
		___m_Clips_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Clips_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_Markers_27() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D, ___m_Markers_27)); }
	inline MarkerList_t5DDEACDD8C5942DE4C9778F1CC77E5AB685832DC  get_m_Markers_27() const { return ___m_Markers_27; }
	inline MarkerList_t5DDEACDD8C5942DE4C9778F1CC77E5AB685832DC * get_address_of_m_Markers_27() { return &___m_Markers_27; }
	inline void set_m_Markers_27(MarkerList_t5DDEACDD8C5942DE4C9778F1CC77E5AB685832DC  value)
	{
		___m_Markers_27 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Markers_27))->___m_Objects_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Markers_27))->___m_Cache_1), (void*)NULL);
		#endif
	}
};

struct TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D_StaticFields
{
public:
	// UnityEngine.Timeline.TrackAsset_TransientBuildData UnityEngine.Timeline.TrackAsset::s_BuildData
	TransientBuildData_t2CDF71634041677EC226311F30665780C2026744  ___s_BuildData_7;
	// System.Action`3<UnityEngine.Timeline.TimelineClip,UnityEngine.GameObject,UnityEngine.Playables.Playable> UnityEngine.Timeline.TrackAsset::OnClipPlayableCreate
	Action_3_t3DEF6B983A6FD251CA5E86CED7441D9CF0A26209 * ___OnClipPlayableCreate_9;
	// System.Action`3<UnityEngine.Timeline.TrackAsset,UnityEngine.GameObject,UnityEngine.Playables.Playable> UnityEngine.Timeline.TrackAsset::OnTrackAnimationPlayableCreate
	Action_3_t08E03FF5D8187DCF3A2B450F10E005618E1956C1 * ___OnTrackAnimationPlayableCreate_10;
	// UnityEngine.Timeline.TrackAsset[] UnityEngine.Timeline.TrackAsset::s_EmptyCache
	TrackAssetU5BU5D_t064A662B3D4A13A5BAAB5D4CAD343DB1D2171EF5* ___s_EmptyCache_23;
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.Timeline.TrackBindingTypeAttribute> UnityEngine.Timeline.TrackAsset::s_TrackBindingTypeAttributeCache
	Dictionary_2_t1B7E37FEB7F10BFB6B7320EF2FEC7B2CDE25C7E4 * ___s_TrackBindingTypeAttributeCache_25;

public:
	inline static int32_t get_offset_of_s_BuildData_7() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D_StaticFields, ___s_BuildData_7)); }
	inline TransientBuildData_t2CDF71634041677EC226311F30665780C2026744  get_s_BuildData_7() const { return ___s_BuildData_7; }
	inline TransientBuildData_t2CDF71634041677EC226311F30665780C2026744 * get_address_of_s_BuildData_7() { return &___s_BuildData_7; }
	inline void set_s_BuildData_7(TransientBuildData_t2CDF71634041677EC226311F30665780C2026744  value)
	{
		___s_BuildData_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_BuildData_7))->___trackList_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_BuildData_7))->___clipList_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_BuildData_7))->___markerList_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_OnClipPlayableCreate_9() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D_StaticFields, ___OnClipPlayableCreate_9)); }
	inline Action_3_t3DEF6B983A6FD251CA5E86CED7441D9CF0A26209 * get_OnClipPlayableCreate_9() const { return ___OnClipPlayableCreate_9; }
	inline Action_3_t3DEF6B983A6FD251CA5E86CED7441D9CF0A26209 ** get_address_of_OnClipPlayableCreate_9() { return &___OnClipPlayableCreate_9; }
	inline void set_OnClipPlayableCreate_9(Action_3_t3DEF6B983A6FD251CA5E86CED7441D9CF0A26209 * value)
	{
		___OnClipPlayableCreate_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnClipPlayableCreate_9), (void*)value);
	}

	inline static int32_t get_offset_of_OnTrackAnimationPlayableCreate_10() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D_StaticFields, ___OnTrackAnimationPlayableCreate_10)); }
	inline Action_3_t08E03FF5D8187DCF3A2B450F10E005618E1956C1 * get_OnTrackAnimationPlayableCreate_10() const { return ___OnTrackAnimationPlayableCreate_10; }
	inline Action_3_t08E03FF5D8187DCF3A2B450F10E005618E1956C1 ** get_address_of_OnTrackAnimationPlayableCreate_10() { return &___OnTrackAnimationPlayableCreate_10; }
	inline void set_OnTrackAnimationPlayableCreate_10(Action_3_t08E03FF5D8187DCF3A2B450F10E005618E1956C1 * value)
	{
		___OnTrackAnimationPlayableCreate_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTrackAnimationPlayableCreate_10), (void*)value);
	}

	inline static int32_t get_offset_of_s_EmptyCache_23() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D_StaticFields, ___s_EmptyCache_23)); }
	inline TrackAssetU5BU5D_t064A662B3D4A13A5BAAB5D4CAD343DB1D2171EF5* get_s_EmptyCache_23() const { return ___s_EmptyCache_23; }
	inline TrackAssetU5BU5D_t064A662B3D4A13A5BAAB5D4CAD343DB1D2171EF5** get_address_of_s_EmptyCache_23() { return &___s_EmptyCache_23; }
	inline void set_s_EmptyCache_23(TrackAssetU5BU5D_t064A662B3D4A13A5BAAB5D4CAD343DB1D2171EF5* value)
	{
		___s_EmptyCache_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EmptyCache_23), (void*)value);
	}

	inline static int32_t get_offset_of_s_TrackBindingTypeAttributeCache_25() { return static_cast<int32_t>(offsetof(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D_StaticFields, ___s_TrackBindingTypeAttributeCache_25)); }
	inline Dictionary_2_t1B7E37FEB7F10BFB6B7320EF2FEC7B2CDE25C7E4 * get_s_TrackBindingTypeAttributeCache_25() const { return ___s_TrackBindingTypeAttributeCache_25; }
	inline Dictionary_2_t1B7E37FEB7F10BFB6B7320EF2FEC7B2CDE25C7E4 ** get_address_of_s_TrackBindingTypeAttributeCache_25() { return &___s_TrackBindingTypeAttributeCache_25; }
	inline void set_s_TrackBindingTypeAttributeCache_25(Dictionary_2_t1B7E37FEB7F10BFB6B7320EF2FEC7B2CDE25C7E4 * value)
	{
		___s_TrackBindingTypeAttributeCache_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_TrackBindingTypeAttributeCache_25), (void*)value);
	}
};


// Cinemachine.CinemachineBrain
struct  CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Boolean Cinemachine.CinemachineBrain::m_ShowDebugText
	bool ___m_ShowDebugText_4;
	// System.Boolean Cinemachine.CinemachineBrain::m_ShowCameraFrustum
	bool ___m_ShowCameraFrustum_5;
	// System.Boolean Cinemachine.CinemachineBrain::m_IgnoreTimeScale
	bool ___m_IgnoreTimeScale_6;
	// UnityEngine.Transform Cinemachine.CinemachineBrain::m_WorldUpOverride
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___m_WorldUpOverride_7;
	// Cinemachine.CinemachineBrain_UpdateMethod Cinemachine.CinemachineBrain::m_UpdateMethod
	int32_t ___m_UpdateMethod_8;
	// Cinemachine.CinemachineBrain_BrainUpdateMethod Cinemachine.CinemachineBrain::m_BlendUpdateMethod
	int32_t ___m_BlendUpdateMethod_9;
	// Cinemachine.CinemachineBlendDefinition Cinemachine.CinemachineBrain::m_DefaultBlend
	CinemachineBlendDefinition_t2AC0334955F853560C7F95D4B43BE701F099EF04  ___m_DefaultBlend_10;
	// Cinemachine.CinemachineBlenderSettings Cinemachine.CinemachineBrain::m_CustomBlends
	CinemachineBlenderSettings_tCD488C84B252394D8CDD7D0DB623D991BE77F3F0 * ___m_CustomBlends_11;
	// UnityEngine.Camera Cinemachine.CinemachineBrain::m_OutputCamera
	Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___m_OutputCamera_12;
	// Cinemachine.CinemachineBrain_BrainEvent Cinemachine.CinemachineBrain::m_CameraCutEvent
	BrainEvent_tCB30E3A5C9244915F355517663D4E440A54F79C0 * ___m_CameraCutEvent_13;
	// Cinemachine.CinemachineBrain_VcamActivatedEvent Cinemachine.CinemachineBrain::m_CameraActivatedEvent
	VcamActivatedEvent_tD6FFF8FCC883ABD7CC27619CD451E6FE56DB4A3B * ___m_CameraActivatedEvent_14;
	// UnityEngine.Coroutine Cinemachine.CinemachineBrain::mPhysicsCoroutine
	Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * ___mPhysicsCoroutine_16;
	// System.Int32 Cinemachine.CinemachineBrain::m_LastFrameUpdated
	int32_t ___m_LastFrameUpdated_17;
	// UnityEngine.WaitForFixedUpdate Cinemachine.CinemachineBrain::mWaitForFixedUpdate
	WaitForFixedUpdate_t8801328F075019AF6B6150B20EC343935A29FF97 * ___mWaitForFixedUpdate_18;
	// System.Collections.Generic.List`1<Cinemachine.CinemachineBrain_BrainFrame> Cinemachine.CinemachineBrain::mFrameStack
	List_1_tACCC6306B7B7555D17ED9223157499B6CEDAA0F7 * ___mFrameStack_19;
	// System.Int32 Cinemachine.CinemachineBrain::mNextFrameId
	int32_t ___mNextFrameId_20;
	// Cinemachine.CinemachineBlend Cinemachine.CinemachineBrain::mCurrentLiveCameras
	CinemachineBlend_t7A2A71833A7E2C44AB1D7874B3D076EF46A56298 * ___mCurrentLiveCameras_21;
	// Cinemachine.ICinemachineCamera Cinemachine.CinemachineBrain::mActiveCameraPreviousFrame
	RuntimeObject* ___mActiveCameraPreviousFrame_23;
	// UnityEngine.GameObject Cinemachine.CinemachineBrain::mActiveCameraPreviousFrameGameObject
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___mActiveCameraPreviousFrameGameObject_24;
	// Cinemachine.CameraState Cinemachine.CinemachineBrain::<CurrentCameraState>k__BackingField
	CameraState_t308F3A442112B7464D2B21A417D325662E3399B1  ___U3CCurrentCameraStateU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_ShowDebugText_4() { return static_cast<int32_t>(offsetof(CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB, ___m_ShowDebugText_4)); }
	inline bool get_m_ShowDebugText_4() const { return ___m_ShowDebugText_4; }
	inline bool* get_address_of_m_ShowDebugText_4() { return &___m_ShowDebugText_4; }
	inline void set_m_ShowDebugText_4(bool value)
	{
		___m_ShowDebugText_4 = value;
	}

	inline static int32_t get_offset_of_m_ShowCameraFrustum_5() { return static_cast<int32_t>(offsetof(CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB, ___m_ShowCameraFrustum_5)); }
	inline bool get_m_ShowCameraFrustum_5() const { return ___m_ShowCameraFrustum_5; }
	inline bool* get_address_of_m_ShowCameraFrustum_5() { return &___m_ShowCameraFrustum_5; }
	inline void set_m_ShowCameraFrustum_5(bool value)
	{
		___m_ShowCameraFrustum_5 = value;
	}

	inline static int32_t get_offset_of_m_IgnoreTimeScale_6() { return static_cast<int32_t>(offsetof(CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB, ___m_IgnoreTimeScale_6)); }
	inline bool get_m_IgnoreTimeScale_6() const { return ___m_IgnoreTimeScale_6; }
	inline bool* get_address_of_m_IgnoreTimeScale_6() { return &___m_IgnoreTimeScale_6; }
	inline void set_m_IgnoreTimeScale_6(bool value)
	{
		___m_IgnoreTimeScale_6 = value;
	}

	inline static int32_t get_offset_of_m_WorldUpOverride_7() { return static_cast<int32_t>(offsetof(CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB, ___m_WorldUpOverride_7)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_m_WorldUpOverride_7() const { return ___m_WorldUpOverride_7; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_m_WorldUpOverride_7() { return &___m_WorldUpOverride_7; }
	inline void set_m_WorldUpOverride_7(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___m_WorldUpOverride_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_WorldUpOverride_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_UpdateMethod_8() { return static_cast<int32_t>(offsetof(CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB, ___m_UpdateMethod_8)); }
	inline int32_t get_m_UpdateMethod_8() const { return ___m_UpdateMethod_8; }
	inline int32_t* get_address_of_m_UpdateMethod_8() { return &___m_UpdateMethod_8; }
	inline void set_m_UpdateMethod_8(int32_t value)
	{
		___m_UpdateMethod_8 = value;
	}

	inline static int32_t get_offset_of_m_BlendUpdateMethod_9() { return static_cast<int32_t>(offsetof(CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB, ___m_BlendUpdateMethod_9)); }
	inline int32_t get_m_BlendUpdateMethod_9() const { return ___m_BlendUpdateMethod_9; }
	inline int32_t* get_address_of_m_BlendUpdateMethod_9() { return &___m_BlendUpdateMethod_9; }
	inline void set_m_BlendUpdateMethod_9(int32_t value)
	{
		___m_BlendUpdateMethod_9 = value;
	}

	inline static int32_t get_offset_of_m_DefaultBlend_10() { return static_cast<int32_t>(offsetof(CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB, ___m_DefaultBlend_10)); }
	inline CinemachineBlendDefinition_t2AC0334955F853560C7F95D4B43BE701F099EF04  get_m_DefaultBlend_10() const { return ___m_DefaultBlend_10; }
	inline CinemachineBlendDefinition_t2AC0334955F853560C7F95D4B43BE701F099EF04 * get_address_of_m_DefaultBlend_10() { return &___m_DefaultBlend_10; }
	inline void set_m_DefaultBlend_10(CinemachineBlendDefinition_t2AC0334955F853560C7F95D4B43BE701F099EF04  value)
	{
		___m_DefaultBlend_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultBlend_10))->___m_CustomCurve_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_CustomBlends_11() { return static_cast<int32_t>(offsetof(CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB, ___m_CustomBlends_11)); }
	inline CinemachineBlenderSettings_tCD488C84B252394D8CDD7D0DB623D991BE77F3F0 * get_m_CustomBlends_11() const { return ___m_CustomBlends_11; }
	inline CinemachineBlenderSettings_tCD488C84B252394D8CDD7D0DB623D991BE77F3F0 ** get_address_of_m_CustomBlends_11() { return &___m_CustomBlends_11; }
	inline void set_m_CustomBlends_11(CinemachineBlenderSettings_tCD488C84B252394D8CDD7D0DB623D991BE77F3F0 * value)
	{
		___m_CustomBlends_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CustomBlends_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_OutputCamera_12() { return static_cast<int32_t>(offsetof(CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB, ___m_OutputCamera_12)); }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * get_m_OutputCamera_12() const { return ___m_OutputCamera_12; }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 ** get_address_of_m_OutputCamera_12() { return &___m_OutputCamera_12; }
	inline void set_m_OutputCamera_12(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * value)
	{
		___m_OutputCamera_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OutputCamera_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CameraCutEvent_13() { return static_cast<int32_t>(offsetof(CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB, ___m_CameraCutEvent_13)); }
	inline BrainEvent_tCB30E3A5C9244915F355517663D4E440A54F79C0 * get_m_CameraCutEvent_13() const { return ___m_CameraCutEvent_13; }
	inline BrainEvent_tCB30E3A5C9244915F355517663D4E440A54F79C0 ** get_address_of_m_CameraCutEvent_13() { return &___m_CameraCutEvent_13; }
	inline void set_m_CameraCutEvent_13(BrainEvent_tCB30E3A5C9244915F355517663D4E440A54F79C0 * value)
	{
		___m_CameraCutEvent_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CameraCutEvent_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_CameraActivatedEvent_14() { return static_cast<int32_t>(offsetof(CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB, ___m_CameraActivatedEvent_14)); }
	inline VcamActivatedEvent_tD6FFF8FCC883ABD7CC27619CD451E6FE56DB4A3B * get_m_CameraActivatedEvent_14() const { return ___m_CameraActivatedEvent_14; }
	inline VcamActivatedEvent_tD6FFF8FCC883ABD7CC27619CD451E6FE56DB4A3B ** get_address_of_m_CameraActivatedEvent_14() { return &___m_CameraActivatedEvent_14; }
	inline void set_m_CameraActivatedEvent_14(VcamActivatedEvent_tD6FFF8FCC883ABD7CC27619CD451E6FE56DB4A3B * value)
	{
		___m_CameraActivatedEvent_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CameraActivatedEvent_14), (void*)value);
	}

	inline static int32_t get_offset_of_mPhysicsCoroutine_16() { return static_cast<int32_t>(offsetof(CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB, ___mPhysicsCoroutine_16)); }
	inline Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * get_mPhysicsCoroutine_16() const { return ___mPhysicsCoroutine_16; }
	inline Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC ** get_address_of_mPhysicsCoroutine_16() { return &___mPhysicsCoroutine_16; }
	inline void set_mPhysicsCoroutine_16(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * value)
	{
		___mPhysicsCoroutine_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mPhysicsCoroutine_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_LastFrameUpdated_17() { return static_cast<int32_t>(offsetof(CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB, ___m_LastFrameUpdated_17)); }
	inline int32_t get_m_LastFrameUpdated_17() const { return ___m_LastFrameUpdated_17; }
	inline int32_t* get_address_of_m_LastFrameUpdated_17() { return &___m_LastFrameUpdated_17; }
	inline void set_m_LastFrameUpdated_17(int32_t value)
	{
		___m_LastFrameUpdated_17 = value;
	}

	inline static int32_t get_offset_of_mWaitForFixedUpdate_18() { return static_cast<int32_t>(offsetof(CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB, ___mWaitForFixedUpdate_18)); }
	inline WaitForFixedUpdate_t8801328F075019AF6B6150B20EC343935A29FF97 * get_mWaitForFixedUpdate_18() const { return ___mWaitForFixedUpdate_18; }
	inline WaitForFixedUpdate_t8801328F075019AF6B6150B20EC343935A29FF97 ** get_address_of_mWaitForFixedUpdate_18() { return &___mWaitForFixedUpdate_18; }
	inline void set_mWaitForFixedUpdate_18(WaitForFixedUpdate_t8801328F075019AF6B6150B20EC343935A29FF97 * value)
	{
		___mWaitForFixedUpdate_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mWaitForFixedUpdate_18), (void*)value);
	}

	inline static int32_t get_offset_of_mFrameStack_19() { return static_cast<int32_t>(offsetof(CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB, ___mFrameStack_19)); }
	inline List_1_tACCC6306B7B7555D17ED9223157499B6CEDAA0F7 * get_mFrameStack_19() const { return ___mFrameStack_19; }
	inline List_1_tACCC6306B7B7555D17ED9223157499B6CEDAA0F7 ** get_address_of_mFrameStack_19() { return &___mFrameStack_19; }
	inline void set_mFrameStack_19(List_1_tACCC6306B7B7555D17ED9223157499B6CEDAA0F7 * value)
	{
		___mFrameStack_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mFrameStack_19), (void*)value);
	}

	inline static int32_t get_offset_of_mNextFrameId_20() { return static_cast<int32_t>(offsetof(CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB, ___mNextFrameId_20)); }
	inline int32_t get_mNextFrameId_20() const { return ___mNextFrameId_20; }
	inline int32_t* get_address_of_mNextFrameId_20() { return &___mNextFrameId_20; }
	inline void set_mNextFrameId_20(int32_t value)
	{
		___mNextFrameId_20 = value;
	}

	inline static int32_t get_offset_of_mCurrentLiveCameras_21() { return static_cast<int32_t>(offsetof(CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB, ___mCurrentLiveCameras_21)); }
	inline CinemachineBlend_t7A2A71833A7E2C44AB1D7874B3D076EF46A56298 * get_mCurrentLiveCameras_21() const { return ___mCurrentLiveCameras_21; }
	inline CinemachineBlend_t7A2A71833A7E2C44AB1D7874B3D076EF46A56298 ** get_address_of_mCurrentLiveCameras_21() { return &___mCurrentLiveCameras_21; }
	inline void set_mCurrentLiveCameras_21(CinemachineBlend_t7A2A71833A7E2C44AB1D7874B3D076EF46A56298 * value)
	{
		___mCurrentLiveCameras_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mCurrentLiveCameras_21), (void*)value);
	}

	inline static int32_t get_offset_of_mActiveCameraPreviousFrame_23() { return static_cast<int32_t>(offsetof(CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB, ___mActiveCameraPreviousFrame_23)); }
	inline RuntimeObject* get_mActiveCameraPreviousFrame_23() const { return ___mActiveCameraPreviousFrame_23; }
	inline RuntimeObject** get_address_of_mActiveCameraPreviousFrame_23() { return &___mActiveCameraPreviousFrame_23; }
	inline void set_mActiveCameraPreviousFrame_23(RuntimeObject* value)
	{
		___mActiveCameraPreviousFrame_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mActiveCameraPreviousFrame_23), (void*)value);
	}

	inline static int32_t get_offset_of_mActiveCameraPreviousFrameGameObject_24() { return static_cast<int32_t>(offsetof(CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB, ___mActiveCameraPreviousFrameGameObject_24)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_mActiveCameraPreviousFrameGameObject_24() const { return ___mActiveCameraPreviousFrameGameObject_24; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_mActiveCameraPreviousFrameGameObject_24() { return &___mActiveCameraPreviousFrameGameObject_24; }
	inline void set_mActiveCameraPreviousFrameGameObject_24(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___mActiveCameraPreviousFrameGameObject_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mActiveCameraPreviousFrameGameObject_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCurrentCameraStateU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB, ___U3CCurrentCameraStateU3Ek__BackingField_25)); }
	inline CameraState_t308F3A442112B7464D2B21A417D325662E3399B1  get_U3CCurrentCameraStateU3Ek__BackingField_25() const { return ___U3CCurrentCameraStateU3Ek__BackingField_25; }
	inline CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * get_address_of_U3CCurrentCameraStateU3Ek__BackingField_25() { return &___U3CCurrentCameraStateU3Ek__BackingField_25; }
	inline void set_U3CCurrentCameraStateU3Ek__BackingField_25(CameraState_t308F3A442112B7464D2B21A417D325662E3399B1  value)
	{
		___U3CCurrentCameraStateU3Ek__BackingField_25 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CCurrentCameraStateU3Ek__BackingField_25))->___mCustom0_11))->___m_Custom_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CCurrentCameraStateU3Ek__BackingField_25))->___mCustom1_12))->___m_Custom_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CCurrentCameraStateU3Ek__BackingField_25))->___mCustom2_13))->___m_Custom_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CCurrentCameraStateU3Ek__BackingField_25))->___mCustom3_14))->___m_Custom_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CCurrentCameraStateU3Ek__BackingField_25))->___m_CustomOverflow_15), (void*)NULL);
		#endif
	}
};

struct CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB_StaticFields
{
public:
	// Cinemachine.ICinemachineCamera Cinemachine.CinemachineBrain::mSoloCamera
	RuntimeObject* ___mSoloCamera_15;
	// UnityEngine.AnimationCurve Cinemachine.CinemachineBrain::mDefaultLinearAnimationCurve
	AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___mDefaultLinearAnimationCurve_22;

public:
	inline static int32_t get_offset_of_mSoloCamera_15() { return static_cast<int32_t>(offsetof(CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB_StaticFields, ___mSoloCamera_15)); }
	inline RuntimeObject* get_mSoloCamera_15() const { return ___mSoloCamera_15; }
	inline RuntimeObject** get_address_of_mSoloCamera_15() { return &___mSoloCamera_15; }
	inline void set_mSoloCamera_15(RuntimeObject* value)
	{
		___mSoloCamera_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mSoloCamera_15), (void*)value);
	}

	inline static int32_t get_offset_of_mDefaultLinearAnimationCurve_22() { return static_cast<int32_t>(offsetof(CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB_StaticFields, ___mDefaultLinearAnimationCurve_22)); }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * get_mDefaultLinearAnimationCurve_22() const { return ___mDefaultLinearAnimationCurve_22; }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C ** get_address_of_mDefaultLinearAnimationCurve_22() { return &___mDefaultLinearAnimationCurve_22; }
	inline void set_mDefaultLinearAnimationCurve_22(AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * value)
	{
		___mDefaultLinearAnimationCurve_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mDefaultLinearAnimationCurve_22), (void*)value);
	}
};


// Cinemachine.CinemachineExtension
struct  CinemachineExtension_t397048E40D5EB90A0A06031DCF9E1B52306D06AE  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineExtension::m_vcamOwner
	CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * ___m_vcamOwner_5;
	// System.Collections.Generic.Dictionary`2<Cinemachine.ICinemachineCamera,System.Object> Cinemachine.CinemachineExtension::mExtraState
	Dictionary_2_tA752E1EEBD2A0EF17F6A4C0262D35070B38CE8A2 * ___mExtraState_6;

public:
	inline static int32_t get_offset_of_m_vcamOwner_5() { return static_cast<int32_t>(offsetof(CinemachineExtension_t397048E40D5EB90A0A06031DCF9E1B52306D06AE, ___m_vcamOwner_5)); }
	inline CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * get_m_vcamOwner_5() const { return ___m_vcamOwner_5; }
	inline CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD ** get_address_of_m_vcamOwner_5() { return &___m_vcamOwner_5; }
	inline void set_m_vcamOwner_5(CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * value)
	{
		___m_vcamOwner_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_vcamOwner_5), (void*)value);
	}

	inline static int32_t get_offset_of_mExtraState_6() { return static_cast<int32_t>(offsetof(CinemachineExtension_t397048E40D5EB90A0A06031DCF9E1B52306D06AE, ___mExtraState_6)); }
	inline Dictionary_2_tA752E1EEBD2A0EF17F6A4C0262D35070B38CE8A2 * get_mExtraState_6() const { return ___mExtraState_6; }
	inline Dictionary_2_tA752E1EEBD2A0EF17F6A4C0262D35070B38CE8A2 ** get_address_of_mExtraState_6() { return &___mExtraState_6; }
	inline void set_mExtraState_6(Dictionary_2_tA752E1EEBD2A0EF17F6A4C0262D35070B38CE8A2 * value)
	{
		___mExtraState_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mExtraState_6), (void*)value);
	}
};


// Cinemachine.CinemachineVirtualCameraBase
struct  CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.String[] Cinemachine.CinemachineVirtualCameraBase::m_ExcludedPropertiesInInspector
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___m_ExcludedPropertiesInInspector_4;
	// Cinemachine.CinemachineCore_Stage[] Cinemachine.CinemachineVirtualCameraBase::m_LockStageInInspector
	StageU5BU5D_tC107E846F8ED5DBF4CEF77B4AFCC26D9DBE723A2* ___m_LockStageInInspector_5;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_ValidatingStreamVersion
	int32_t ___m_ValidatingStreamVersion_6;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::m_OnValidateCalled
	bool ___m_OnValidateCalled_7;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_StreamingVersion
	int32_t ___m_StreamingVersion_8;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_Priority
	int32_t ___m_Priority_9;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_ActivationId
	int32_t ___m_ActivationId_10;
	// System.Single Cinemachine.CinemachineVirtualCameraBase::<FollowTargetAttachment>k__BackingField
	float ___U3CFollowTargetAttachmentU3Ek__BackingField_11;
	// System.Single Cinemachine.CinemachineVirtualCameraBase::<LookAtTargetAttachment>k__BackingField
	float ___U3CLookAtTargetAttachmentU3Ek__BackingField_12;
	// Cinemachine.CinemachineVirtualCameraBase_StandbyUpdateMode Cinemachine.CinemachineVirtualCameraBase::m_StandbyUpdate
	int32_t ___m_StandbyUpdate_13;
	// System.Collections.Generic.List`1<Cinemachine.CinemachineExtension> Cinemachine.CinemachineVirtualCameraBase::<mExtensions>k__BackingField
	List_1_t368EDCAA9D752F3C679EB61F998F2B839F58843E * ___U3CmExtensionsU3Ek__BackingField_14;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::<PreviousStateIsValid>k__BackingField
	bool ___U3CPreviousStateIsValidU3Ek__BackingField_15;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::m_WasStarted
	bool ___m_WasStarted_16;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::mSlaveStatusUpdated
	bool ___mSlaveStatusUpdated_17;
	// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineVirtualCameraBase::m_parentVcam
	CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * ___m_parentVcam_18;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_QueuePriority
	int32_t ___m_QueuePriority_19;

public:
	inline static int32_t get_offset_of_m_ExcludedPropertiesInInspector_4() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD, ___m_ExcludedPropertiesInInspector_4)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_m_ExcludedPropertiesInInspector_4() const { return ___m_ExcludedPropertiesInInspector_4; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_m_ExcludedPropertiesInInspector_4() { return &___m_ExcludedPropertiesInInspector_4; }
	inline void set_m_ExcludedPropertiesInInspector_4(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___m_ExcludedPropertiesInInspector_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExcludedPropertiesInInspector_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_LockStageInInspector_5() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD, ___m_LockStageInInspector_5)); }
	inline StageU5BU5D_tC107E846F8ED5DBF4CEF77B4AFCC26D9DBE723A2* get_m_LockStageInInspector_5() const { return ___m_LockStageInInspector_5; }
	inline StageU5BU5D_tC107E846F8ED5DBF4CEF77B4AFCC26D9DBE723A2** get_address_of_m_LockStageInInspector_5() { return &___m_LockStageInInspector_5; }
	inline void set_m_LockStageInInspector_5(StageU5BU5D_tC107E846F8ED5DBF4CEF77B4AFCC26D9DBE723A2* value)
	{
		___m_LockStageInInspector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LockStageInInspector_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_ValidatingStreamVersion_6() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD, ___m_ValidatingStreamVersion_6)); }
	inline int32_t get_m_ValidatingStreamVersion_6() const { return ___m_ValidatingStreamVersion_6; }
	inline int32_t* get_address_of_m_ValidatingStreamVersion_6() { return &___m_ValidatingStreamVersion_6; }
	inline void set_m_ValidatingStreamVersion_6(int32_t value)
	{
		___m_ValidatingStreamVersion_6 = value;
	}

	inline static int32_t get_offset_of_m_OnValidateCalled_7() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD, ___m_OnValidateCalled_7)); }
	inline bool get_m_OnValidateCalled_7() const { return ___m_OnValidateCalled_7; }
	inline bool* get_address_of_m_OnValidateCalled_7() { return &___m_OnValidateCalled_7; }
	inline void set_m_OnValidateCalled_7(bool value)
	{
		___m_OnValidateCalled_7 = value;
	}

	inline static int32_t get_offset_of_m_StreamingVersion_8() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD, ___m_StreamingVersion_8)); }
	inline int32_t get_m_StreamingVersion_8() const { return ___m_StreamingVersion_8; }
	inline int32_t* get_address_of_m_StreamingVersion_8() { return &___m_StreamingVersion_8; }
	inline void set_m_StreamingVersion_8(int32_t value)
	{
		___m_StreamingVersion_8 = value;
	}

	inline static int32_t get_offset_of_m_Priority_9() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD, ___m_Priority_9)); }
	inline int32_t get_m_Priority_9() const { return ___m_Priority_9; }
	inline int32_t* get_address_of_m_Priority_9() { return &___m_Priority_9; }
	inline void set_m_Priority_9(int32_t value)
	{
		___m_Priority_9 = value;
	}

	inline static int32_t get_offset_of_m_ActivationId_10() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD, ___m_ActivationId_10)); }
	inline int32_t get_m_ActivationId_10() const { return ___m_ActivationId_10; }
	inline int32_t* get_address_of_m_ActivationId_10() { return &___m_ActivationId_10; }
	inline void set_m_ActivationId_10(int32_t value)
	{
		___m_ActivationId_10 = value;
	}

	inline static int32_t get_offset_of_U3CFollowTargetAttachmentU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD, ___U3CFollowTargetAttachmentU3Ek__BackingField_11)); }
	inline float get_U3CFollowTargetAttachmentU3Ek__BackingField_11() const { return ___U3CFollowTargetAttachmentU3Ek__BackingField_11; }
	inline float* get_address_of_U3CFollowTargetAttachmentU3Ek__BackingField_11() { return &___U3CFollowTargetAttachmentU3Ek__BackingField_11; }
	inline void set_U3CFollowTargetAttachmentU3Ek__BackingField_11(float value)
	{
		___U3CFollowTargetAttachmentU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CLookAtTargetAttachmentU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD, ___U3CLookAtTargetAttachmentU3Ek__BackingField_12)); }
	inline float get_U3CLookAtTargetAttachmentU3Ek__BackingField_12() const { return ___U3CLookAtTargetAttachmentU3Ek__BackingField_12; }
	inline float* get_address_of_U3CLookAtTargetAttachmentU3Ek__BackingField_12() { return &___U3CLookAtTargetAttachmentU3Ek__BackingField_12; }
	inline void set_U3CLookAtTargetAttachmentU3Ek__BackingField_12(float value)
	{
		___U3CLookAtTargetAttachmentU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_m_StandbyUpdate_13() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD, ___m_StandbyUpdate_13)); }
	inline int32_t get_m_StandbyUpdate_13() const { return ___m_StandbyUpdate_13; }
	inline int32_t* get_address_of_m_StandbyUpdate_13() { return &___m_StandbyUpdate_13; }
	inline void set_m_StandbyUpdate_13(int32_t value)
	{
		___m_StandbyUpdate_13 = value;
	}

	inline static int32_t get_offset_of_U3CmExtensionsU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD, ___U3CmExtensionsU3Ek__BackingField_14)); }
	inline List_1_t368EDCAA9D752F3C679EB61F998F2B839F58843E * get_U3CmExtensionsU3Ek__BackingField_14() const { return ___U3CmExtensionsU3Ek__BackingField_14; }
	inline List_1_t368EDCAA9D752F3C679EB61F998F2B839F58843E ** get_address_of_U3CmExtensionsU3Ek__BackingField_14() { return &___U3CmExtensionsU3Ek__BackingField_14; }
	inline void set_U3CmExtensionsU3Ek__BackingField_14(List_1_t368EDCAA9D752F3C679EB61F998F2B839F58843E * value)
	{
		___U3CmExtensionsU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CmExtensionsU3Ek__BackingField_14), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPreviousStateIsValidU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD, ___U3CPreviousStateIsValidU3Ek__BackingField_15)); }
	inline bool get_U3CPreviousStateIsValidU3Ek__BackingField_15() const { return ___U3CPreviousStateIsValidU3Ek__BackingField_15; }
	inline bool* get_address_of_U3CPreviousStateIsValidU3Ek__BackingField_15() { return &___U3CPreviousStateIsValidU3Ek__BackingField_15; }
	inline void set_U3CPreviousStateIsValidU3Ek__BackingField_15(bool value)
	{
		___U3CPreviousStateIsValidU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_m_WasStarted_16() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD, ___m_WasStarted_16)); }
	inline bool get_m_WasStarted_16() const { return ___m_WasStarted_16; }
	inline bool* get_address_of_m_WasStarted_16() { return &___m_WasStarted_16; }
	inline void set_m_WasStarted_16(bool value)
	{
		___m_WasStarted_16 = value;
	}

	inline static int32_t get_offset_of_mSlaveStatusUpdated_17() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD, ___mSlaveStatusUpdated_17)); }
	inline bool get_mSlaveStatusUpdated_17() const { return ___mSlaveStatusUpdated_17; }
	inline bool* get_address_of_mSlaveStatusUpdated_17() { return &___mSlaveStatusUpdated_17; }
	inline void set_mSlaveStatusUpdated_17(bool value)
	{
		___mSlaveStatusUpdated_17 = value;
	}

	inline static int32_t get_offset_of_m_parentVcam_18() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD, ___m_parentVcam_18)); }
	inline CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * get_m_parentVcam_18() const { return ___m_parentVcam_18; }
	inline CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD ** get_address_of_m_parentVcam_18() { return &___m_parentVcam_18; }
	inline void set_m_parentVcam_18(CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * value)
	{
		___m_parentVcam_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parentVcam_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_QueuePriority_19() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD, ___m_QueuePriority_19)); }
	inline int32_t get_m_QueuePriority_19() const { return ___m_QueuePriority_19; }
	inline int32_t* get_address_of_m_QueuePriority_19() { return &___m_QueuePriority_19; }
	inline void set_m_QueuePriority_19(int32_t value)
	{
		___m_QueuePriority_19 = value;
	}
};


// CinemachineTouchInputMapper
struct  CinemachineTouchInputMapper_tFBE56B48653FF45E533FC1C63DDB5FB930192815  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Single CinemachineTouchInputMapper::TouchSensitivityX
	float ___TouchSensitivityX_4;
	// System.Single CinemachineTouchInputMapper::TouchSensitivityY
	float ___TouchSensitivityY_5;
	// System.String CinemachineTouchInputMapper::TouchXInputMapTo
	String_t* ___TouchXInputMapTo_6;
	// System.String CinemachineTouchInputMapper::TouchYInputMapTo
	String_t* ___TouchYInputMapTo_7;

public:
	inline static int32_t get_offset_of_TouchSensitivityX_4() { return static_cast<int32_t>(offsetof(CinemachineTouchInputMapper_tFBE56B48653FF45E533FC1C63DDB5FB930192815, ___TouchSensitivityX_4)); }
	inline float get_TouchSensitivityX_4() const { return ___TouchSensitivityX_4; }
	inline float* get_address_of_TouchSensitivityX_4() { return &___TouchSensitivityX_4; }
	inline void set_TouchSensitivityX_4(float value)
	{
		___TouchSensitivityX_4 = value;
	}

	inline static int32_t get_offset_of_TouchSensitivityY_5() { return static_cast<int32_t>(offsetof(CinemachineTouchInputMapper_tFBE56B48653FF45E533FC1C63DDB5FB930192815, ___TouchSensitivityY_5)); }
	inline float get_TouchSensitivityY_5() const { return ___TouchSensitivityY_5; }
	inline float* get_address_of_TouchSensitivityY_5() { return &___TouchSensitivityY_5; }
	inline void set_TouchSensitivityY_5(float value)
	{
		___TouchSensitivityY_5 = value;
	}

	inline static int32_t get_offset_of_TouchXInputMapTo_6() { return static_cast<int32_t>(offsetof(CinemachineTouchInputMapper_tFBE56B48653FF45E533FC1C63DDB5FB930192815, ___TouchXInputMapTo_6)); }
	inline String_t* get_TouchXInputMapTo_6() const { return ___TouchXInputMapTo_6; }
	inline String_t** get_address_of_TouchXInputMapTo_6() { return &___TouchXInputMapTo_6; }
	inline void set_TouchXInputMapTo_6(String_t* value)
	{
		___TouchXInputMapTo_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TouchXInputMapTo_6), (void*)value);
	}

	inline static int32_t get_offset_of_TouchYInputMapTo_7() { return static_cast<int32_t>(offsetof(CinemachineTouchInputMapper_tFBE56B48653FF45E533FC1C63DDB5FB930192815, ___TouchYInputMapTo_7)); }
	inline String_t* get_TouchYInputMapTo_7() const { return ___TouchYInputMapTo_7; }
	inline String_t** get_address_of_TouchYInputMapTo_7() { return &___TouchYInputMapTo_7; }
	inline void set_TouchYInputMapTo_7(String_t* value)
	{
		___TouchYInputMapTo_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TouchYInputMapTo_7), (void*)value);
	}
};


// CinemachineTrack
struct  CinemachineTrack_t6B531D379A33136302768D59460F3E8B1AC6D79D  : public TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D
{
public:

public:
};


// CinemachineCameraOffset
struct  CinemachineCameraOffset_t2D656B9D964F68E61A5168495C2666BE6B8AD693  : public CinemachineExtension_t397048E40D5EB90A0A06031DCF9E1B52306D06AE
{
public:
	// UnityEngine.Vector3 CinemachineCameraOffset::m_Offset
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Offset_7;
	// Cinemachine.CinemachineCore_Stage CinemachineCameraOffset::m_ApplyAfter
	int32_t ___m_ApplyAfter_8;
	// System.Boolean CinemachineCameraOffset::m_PreserveComposition
	bool ___m_PreserveComposition_9;

public:
	inline static int32_t get_offset_of_m_Offset_7() { return static_cast<int32_t>(offsetof(CinemachineCameraOffset_t2D656B9D964F68E61A5168495C2666BE6B8AD693, ___m_Offset_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Offset_7() const { return ___m_Offset_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Offset_7() { return &___m_Offset_7; }
	inline void set_m_Offset_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Offset_7 = value;
	}

	inline static int32_t get_offset_of_m_ApplyAfter_8() { return static_cast<int32_t>(offsetof(CinemachineCameraOffset_t2D656B9D964F68E61A5168495C2666BE6B8AD693, ___m_ApplyAfter_8)); }
	inline int32_t get_m_ApplyAfter_8() const { return ___m_ApplyAfter_8; }
	inline int32_t* get_address_of_m_ApplyAfter_8() { return &___m_ApplyAfter_8; }
	inline void set_m_ApplyAfter_8(int32_t value)
	{
		___m_ApplyAfter_8 = value;
	}

	inline static int32_t get_offset_of_m_PreserveComposition_9() { return static_cast<int32_t>(offsetof(CinemachineCameraOffset_t2D656B9D964F68E61A5168495C2666BE6B8AD693, ___m_PreserveComposition_9)); }
	inline bool get_m_PreserveComposition_9() const { return ___m_PreserveComposition_9; }
	inline bool* get_address_of_m_PreserveComposition_9() { return &___m_PreserveComposition_9; }
	inline void set_m_PreserveComposition_9(bool value)
	{
		___m_PreserveComposition_9 = value;
	}
};


// CinemachineRecomposer
struct  CinemachineRecomposer_tF064BE416E48B7EF8577A863C748B35C1A0E48FD  : public CinemachineExtension_t397048E40D5EB90A0A06031DCF9E1B52306D06AE
{
public:
	// Cinemachine.CinemachineCore_Stage CinemachineRecomposer::m_ApplyAfter
	int32_t ___m_ApplyAfter_7;
	// System.Single CinemachineRecomposer::m_Tilt
	float ___m_Tilt_8;
	// System.Single CinemachineRecomposer::m_Pan
	float ___m_Pan_9;
	// System.Single CinemachineRecomposer::m_Dutch
	float ___m_Dutch_10;
	// System.Single CinemachineRecomposer::m_ZoomScale
	float ___m_ZoomScale_11;
	// System.Single CinemachineRecomposer::m_FollowAttachment
	float ___m_FollowAttachment_12;
	// System.Single CinemachineRecomposer::m_LookAtAttachment
	float ___m_LookAtAttachment_13;

public:
	inline static int32_t get_offset_of_m_ApplyAfter_7() { return static_cast<int32_t>(offsetof(CinemachineRecomposer_tF064BE416E48B7EF8577A863C748B35C1A0E48FD, ___m_ApplyAfter_7)); }
	inline int32_t get_m_ApplyAfter_7() const { return ___m_ApplyAfter_7; }
	inline int32_t* get_address_of_m_ApplyAfter_7() { return &___m_ApplyAfter_7; }
	inline void set_m_ApplyAfter_7(int32_t value)
	{
		___m_ApplyAfter_7 = value;
	}

	inline static int32_t get_offset_of_m_Tilt_8() { return static_cast<int32_t>(offsetof(CinemachineRecomposer_tF064BE416E48B7EF8577A863C748B35C1A0E48FD, ___m_Tilt_8)); }
	inline float get_m_Tilt_8() const { return ___m_Tilt_8; }
	inline float* get_address_of_m_Tilt_8() { return &___m_Tilt_8; }
	inline void set_m_Tilt_8(float value)
	{
		___m_Tilt_8 = value;
	}

	inline static int32_t get_offset_of_m_Pan_9() { return static_cast<int32_t>(offsetof(CinemachineRecomposer_tF064BE416E48B7EF8577A863C748B35C1A0E48FD, ___m_Pan_9)); }
	inline float get_m_Pan_9() const { return ___m_Pan_9; }
	inline float* get_address_of_m_Pan_9() { return &___m_Pan_9; }
	inline void set_m_Pan_9(float value)
	{
		___m_Pan_9 = value;
	}

	inline static int32_t get_offset_of_m_Dutch_10() { return static_cast<int32_t>(offsetof(CinemachineRecomposer_tF064BE416E48B7EF8577A863C748B35C1A0E48FD, ___m_Dutch_10)); }
	inline float get_m_Dutch_10() const { return ___m_Dutch_10; }
	inline float* get_address_of_m_Dutch_10() { return &___m_Dutch_10; }
	inline void set_m_Dutch_10(float value)
	{
		___m_Dutch_10 = value;
	}

	inline static int32_t get_offset_of_m_ZoomScale_11() { return static_cast<int32_t>(offsetof(CinemachineRecomposer_tF064BE416E48B7EF8577A863C748B35C1A0E48FD, ___m_ZoomScale_11)); }
	inline float get_m_ZoomScale_11() const { return ___m_ZoomScale_11; }
	inline float* get_address_of_m_ZoomScale_11() { return &___m_ZoomScale_11; }
	inline void set_m_ZoomScale_11(float value)
	{
		___m_ZoomScale_11 = value;
	}

	inline static int32_t get_offset_of_m_FollowAttachment_12() { return static_cast<int32_t>(offsetof(CinemachineRecomposer_tF064BE416E48B7EF8577A863C748B35C1A0E48FD, ___m_FollowAttachment_12)); }
	inline float get_m_FollowAttachment_12() const { return ___m_FollowAttachment_12; }
	inline float* get_address_of_m_FollowAttachment_12() { return &___m_FollowAttachment_12; }
	inline void set_m_FollowAttachment_12(float value)
	{
		___m_FollowAttachment_12 = value;
	}

	inline static int32_t get_offset_of_m_LookAtAttachment_13() { return static_cast<int32_t>(offsetof(CinemachineRecomposer_tF064BE416E48B7EF8577A863C748B35C1A0E48FD, ___m_LookAtAttachment_13)); }
	inline float get_m_LookAtAttachment_13() const { return ___m_LookAtAttachment_13; }
	inline float* get_address_of_m_LookAtAttachment_13() { return &___m_LookAtAttachment_13; }
	inline void set_m_LookAtAttachment_13(float value)
	{
		___m_LookAtAttachment_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// UnityEngine.Touch[]
struct TouchU5BU5D_t0207B72FD95EF1F56E7A6C9F0A42896B03D2BD5D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8  m_Items[1];

public:
	inline Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8  value)
	{
		m_Items[index] = value;
	}
};


// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Playables.PlayableExtensions::GetInputWeight<UnityEngine.Playables.Playable>(!!0,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayableExtensions_GetInputWeight_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_mBAE3A98FEA61C11C997238263E219EEE147E0F2B_gshared (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  ___playable0, int32_t ___inputIndex1, const RuntimeMethod* method);
// UnityEngine.Playables.Playable UnityEngine.Playables.PlayableExtensions::GetInput<UnityEngine.Playables.Playable>(!!0,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  PlayableExtensions_GetInput_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m458E510D241640A39A9FFD46A4094623CB6B2D92_gshared (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  ___playable0, int32_t ___inputPort1, const RuntimeMethod* method);
// UnityEngine.Playables.ScriptPlayable`1<!0> UnityEngine.Playables.ScriptPlayable`1<System.Object>::op_Explicit(UnityEngine.Playables.Playable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScriptPlayable_1_t63661AF0CAE2B3B155608EFD5C3E712F0446136C  ScriptPlayable_1_op_Explicit_m9FAFC5C19371356B29F026EED2AFB2633FA6CF80_gshared (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  ___playable0, const RuntimeMethod* method);
// !0 UnityEngine.Playables.ScriptPlayable`1<System.Object>::GetBehaviour()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ScriptPlayable_1_GetBehaviour_m18F5C11A92B96501B55054208E95985D5C72F9B4_gshared (ScriptPlayable_1_t63661AF0CAE2B3B155608EFD5C3E712F0446136C * __this, const RuntimeMethod* method);
// UnityEngine.Playables.PlayState UnityEngine.Playables.PlayableExtensions::GetPlayState<UnityEngine.Playables.Playable>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayableExtensions_GetPlayState_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m2449EED62648E08ED363284EEFF1080E562C7981_gshared (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  ___playable0, const RuntimeMethod* method);
// System.Double UnityEngine.Playables.PlayableExtensions::GetTime<UnityEngine.Playables.ScriptPlayable`1<System.Object>>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double PlayableExtensions_GetTime_TisScriptPlayable_1_t63661AF0CAE2B3B155608EFD5C3E712F0446136C_mF37B29E1D48DE1EEBEDA7E65483A25EAAD93C8C6_gshared (ScriptPlayable_1_t63661AF0CAE2B3B155608EFD5C3E712F0446136C  ___playable0, const RuntimeMethod* method);
// System.Double UnityEngine.Playables.PlayableExtensions::GetTime<UnityEngine.Playables.Playable>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double PlayableExtensions_GetTime_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m2B7F64DD20E0D9B18A3E60B1B0BB0056B7C6747D_gshared (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  ___playable0, const RuntimeMethod* method);
// System.Double UnityEngine.Playables.PlayableExtensions::GetDuration<UnityEngine.Playables.ScriptPlayable`1<System.Object>>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double PlayableExtensions_GetDuration_TisScriptPlayable_1_t63661AF0CAE2B3B155608EFD5C3E712F0446136C_m330D7A83A89A48B269C4EEB6A5FA84AAE568D315_gshared (ScriptPlayable_1_t63661AF0CAE2B3B155608EFD5C3E712F0446136C  ___playable0, const RuntimeMethod* method);
// System.Double UnityEngine.Playables.PlayableExtensions::GetDuration<UnityEngine.Playables.Playable>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double PlayableExtensions_GetDuration_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m3557C19B4048EF5C9E875572F0E47D5EFB8E8E75_gshared (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  ___playable0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Playables.PlayableExtensions::GetInputCount<UnityEngine.Playables.Playable>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayableExtensions_GetInputCount_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_mD04A716A5F8BF194F20D8AA2CEC2388233504F33_gshared (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  ___playable0, const RuntimeMethod* method);
// UnityEngine.Playables.ScriptPlayable`1<!0> UnityEngine.Playables.ScriptPlayable`1<System.Object>::Create(UnityEngine.Playables.PlayableGraph,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScriptPlayable_1_t63661AF0CAE2B3B155608EFD5C3E712F0446136C  ScriptPlayable_1_Create_mBE8425D4AF7A0A82F7EE4705CFA90D78548797A8_gshared (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  ___graph0, int32_t ___inputCount1, const RuntimeMethod* method);
// !0 UnityEngine.ExposedReference`1<System.Object>::Resolve(UnityEngine.IExposedPropertyTable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ExposedReference_1_Resolve_mBBA492F672C2CF69CFA8999F11C1FBD967AFFD1F_gshared (ExposedReference_1_t6A54AB83F72FCC7CB479D3F39F3CFC074284DF86 * __this, RuntimeObject* ___resolver0, const RuntimeMethod* method);
// UnityEngine.Playables.Playable UnityEngine.Playables.ScriptPlayable`1<System.Object>::op_Implicit(UnityEngine.Playables.ScriptPlayable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  ScriptPlayable_1_op_Implicit_mCAFBDEC4F98B94A0A6045DE2FBAE38B2707D7973_gshared (ScriptPlayable_1_t63661AF0CAE2B3B155608EFD5C3E712F0446136C  ___playable0, const RuntimeMethod* method);
// System.Void UnityEngine.Playables.PlayableExtensions::SetInputCount<UnityEngine.Playables.ScriptPlayable`1<System.Object>>(!!0,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableExtensions_SetInputCount_TisScriptPlayable_1_t63661AF0CAE2B3B155608EFD5C3E712F0446136C_m2774559EFF46341FD237D613631323E3DEC292C4_gshared (ScriptPlayable_1_t63661AF0CAE2B3B155608EFD5C3E712F0446136C  ___playable0, int32_t ___value1, const RuntimeMethod* method);

// System.Single UnityEngine.Rect::get_xMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_xMin_mFDFA74F66595FD2B8CE360183D1A92B575F0A76E (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_yMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_yMin_m31EDC3262BE39D2F6464B15397F882237E6158C3 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m54FF69FC2C086E2DC349ED091FD0D6576BFB1484 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_m088C36990E0A255C5D7DCE36575DCE23ABB364B5 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m50B92C75005C9C5A0D05E6E0EBB43AFAF7C66280 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method);
// System.Boolean System.Single::IsNaN(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_IsNaN_m1ACB82FA5DC805F0F5015A1DA6B3DC447C963AFB (float ___f0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::SqrMagnitude(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_SqrMagnitude_mBE7ED92F28BBE09310975CDF329913C04EA9500E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___vector0, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lhs0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rhs1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m1E5F736941A7E6DC4DBCA88A1E38FE9FBFE0C42B (float ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Subtraction_m2B347E4311EDBBBF27573E34899D2492E6B063C0 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___a0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::SqrMagnitude(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_SqrMagnitude_m1095C695F57FB6A2C440F3FEA6876ABB87F0C696 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___a0, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::Dot(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_Dot_m34F6A75BE3FC6F728233811943AC4406C7D905BA (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___lhs0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839 (float ___d0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Max_m670AE0EC1B09ED1A56FF9606B0F954670319CB65 (float ___a0, float ___b1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Division_m0961A935168EE6701E098E2B37013DFFF46A5077 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8 (const RuntimeMethod* method);
// System.Single Cinemachine.Utility.UnityVectorExtensions::Cross(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnityVectorExtensions_Cross_mB246FD9E35576B768CD4DF3674DE7BE532EA3A22 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___v10, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___v21, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_positiveInfinity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_get_positiveInfinity_m99CE1600871424C0F2A8D0477F30DCD878668465 (const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mAEE10A8ECE7D5754E10727BA8C9068A759AD7002 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(System.Single,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Multiply_m2E30A54E315810911DFC2E25C700757A68AC1F38 (float ___d0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___a1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Addition_m81A4D928B8E399DA3A4E3ACD8937EDFDCB014682 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___a0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m1C6E190B4A933A183B308736DEC0DD64B0588968 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::Normalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3_Normalize_m174460238EC6322B9095A378AA8624B1DD9000F3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// System.Single Cinemachine.Utility.UnityVectorExtensions::Angle(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnityVectorExtensions_Angle_m51BB9FF2F18CF2F2B7CCCFDF4B22F6061B487FD3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___v10, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___v21, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Cross(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_Cross_m3E9DBC445228FDB850BDBB4B01D6F61AC0111887 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lhs0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rhs1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Sign(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Sign_m6FA1D12786BEE0419D4B9426E5E4955F286BC8D3 (float ___f0, const RuntimeMethod* method);
// System.Boolean Cinemachine.Utility.UnityVectorExtensions::AlmostZero(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityVectorExtensions_AlmostZero_m09DAF0093FD15B42729EC01B5017049E2C2602DF (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___v0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_AngleAxis_m07DACF59F0403451DABB9BC991C53EE3301E88B0 (float ___angle0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___axis1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, float ___t2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forward0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upwards1, const RuntimeMethod* method);
// UnityEngine.Quaternion Cinemachine.Utility.UnityQuaternionExtensions::SlerpWithReferenceUp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  UnityQuaternionExtensions_SlerpWithReferenceUp_mA5EA8034D99CAD536ED015E57007A82B346EB834 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___qA0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___qB1, float ___t2, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___up3, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___point1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364 (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.PropertyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAttribute__ctor_m7F5C473F39D5601486C1127DA0D52F2DC293FC35 (PropertyAttribute_t25BFFC093C9C96E3CCF4EAB36F5DC6F937B1FA54 * __this, const RuntimeMethod* method);
// System.Boolean Cinemachine.CameraState::get_HasLookAt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraState_get_HasLookAt_mAD63C086CB17D6AF1F4462AB0F21F3DD52AC582B (CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___v0, const RuntimeMethod* method);
// UnityEngine.Quaternion Cinemachine.CameraState::get_RawOrientation()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  CameraState_get_RawOrientation_mEB165F5AB11D2EE2BCD0D9797103539EEA297623_inline (CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Cinemachine.CameraState::get_ReferenceLookAt()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  CameraState_get_ReferenceLookAt_m3FCCFB59361130B202C526D5F88FA11E1CC796EC_inline (CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Cinemachine.CameraState::get_CorrectedPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  CameraState_get_CorrectedPosition_mB0BA158101511615DB798168E64D3AFC0228B9AA (CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Cinemachine.CameraState::get_ReferenceUp()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  CameraState_get_ReferenceUp_mC19FC2F8C4846C140CC7EBE45C16DD07DEA9809B_inline (CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 Cinemachine.Utility.UnityQuaternionExtensions::GetCameraRotationToTarget(UnityEngine.Quaternion,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  UnityQuaternionExtensions_GetCameraRotationToTarget_m2FC346D5CDC3FA3E81B1D35B4667D72034572B67 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___orient0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lookAtDir1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldUp2, const RuntimeMethod* method);
// UnityEngine.Vector3 Cinemachine.CameraState::get_PositionCorrection()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  CameraState_get_PositionCorrection_m81476CD9BBC93E1AE8A47E6BA8D6E08F112D1CFD_inline (CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * __this, const RuntimeMethod* method);
// System.Void Cinemachine.CameraState::set_PositionCorrection(UnityEngine.Vector3)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void CameraState_set_PositionCorrection_m2CEDE7298CE80A5E020285AD21C2F39353563CB8_inline (CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Void Cinemachine.CameraState::set_ReferenceLookAt(UnityEngine.Vector3)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void CameraState_set_ReferenceLookAt_m33C644687C407C4208346D59D6DCFA911E2B5588_inline (CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_UnaryNegation_m2AFBBF22801F9BCA5A4EBE642A29F433FE1339C2 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___v0, const RuntimeMethod* method);
// UnityEngine.Quaternion Cinemachine.Utility.UnityQuaternionExtensions::ApplyCameraRotation(UnityEngine.Quaternion,UnityEngine.Vector2,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  UnityQuaternionExtensions_ApplyCameraRotation_m3E5594FA8D22EECF7DD709A26493DE5FAD7B0814 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___orient0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rot1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldUp2, const RuntimeMethod* method);
// System.Void Cinemachine.CameraState::set_RawOrientation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void CameraState_set_RawOrientation_m366411C5A4E24AAB88BAF5DDC5174397F099B976_inline (CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2 (const RuntimeMethod* method);
// System.Void Cinemachine.CinemachineExtension::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineExtension__ctor_mF3457052C6CEDAB03B20CFBDF3C9760307CC68DC (CinemachineExtension_t397048E40D5EB90A0A06031DCF9E1B52306D06AE * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Void Cinemachine.CinemachineBrain::ReleaseCameraOverride(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineBrain_ReleaseCameraOverride_m77A2D0A792D692E4DDC383539DD7A6BFB6001847 (CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB * __this, int32_t ___overrideId0, const RuntimeMethod* method);
// System.Void UnityEngine.Playables.PlayableBehaviour::ProcessFrame(UnityEngine.Playables.Playable,UnityEngine.Playables.FrameData,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableBehaviour_ProcessFrame_m32F9B265BB54D1A3A290E2709FDD0B873360B25A (PlayableBehaviour_t5F4AA32E735199182CC5F57D426D27BE8ABA8F01 * __this, Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  ___playable0, FrameData_t7CF1DA259799AC04363C4CA88947D4EB7E28B38E  ___info1, RuntimeObject * ___playerData2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Cinemachine.CinemachineBrain>()
inline CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB * GameObject_GetComponent_TisCinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB_mBD916E48F072E85917A54BADF9B02330C838FEA0 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared)(__this, method);
}
// System.Single UnityEngine.Playables.PlayableExtensions::GetInputWeight<UnityEngine.Playables.Playable>(!!0,System.Int32)
inline float PlayableExtensions_GetInputWeight_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_mBAE3A98FEA61C11C997238263E219EEE147E0F2B (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  ___playable0, int32_t ___inputIndex1, const RuntimeMethod* method)
{
	return ((  float (*) (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 , int32_t, const RuntimeMethod*))PlayableExtensions_GetInputWeight_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_mBAE3A98FEA61C11C997238263E219EEE147E0F2B_gshared)(___playable0, ___inputIndex1, method);
}
// UnityEngine.Playables.Playable UnityEngine.Playables.PlayableExtensions::GetInput<UnityEngine.Playables.Playable>(!!0,System.Int32)
inline Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  PlayableExtensions_GetInput_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m458E510D241640A39A9FFD46A4094623CB6B2D92 (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  ___playable0, int32_t ___inputPort1, const RuntimeMethod* method)
{
	return ((  Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  (*) (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 , int32_t, const RuntimeMethod*))PlayableExtensions_GetInput_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m458E510D241640A39A9FFD46A4094623CB6B2D92_gshared)(___playable0, ___inputPort1, method);
}
// UnityEngine.Playables.ScriptPlayable`1<!0> UnityEngine.Playables.ScriptPlayable`1<CinemachineShotPlayable>::op_Explicit(UnityEngine.Playables.Playable)
inline ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A  ScriptPlayable_1_op_Explicit_m8AFDFB2071A6323A8AF5A938EBF5547C28F01652 (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  ___playable0, const RuntimeMethod* method)
{
	return ((  ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A  (*) (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 , const RuntimeMethod*))ScriptPlayable_1_op_Explicit_m9FAFC5C19371356B29F026EED2AFB2633FA6CF80_gshared)(___playable0, method);
}
// !0 UnityEngine.Playables.ScriptPlayable`1<CinemachineShotPlayable>::GetBehaviour()
inline CinemachineShotPlayable_t518787FCEF1470A6B42A2A6A72E4AD8D34D8C0CE * ScriptPlayable_1_GetBehaviour_mCF976DA4F09705321BC4E47673AAB78F09B913F8 (ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A * __this, const RuntimeMethod* method)
{
	return ((  CinemachineShotPlayable_t518787FCEF1470A6B42A2A6A72E4AD8D34D8C0CE * (*) (ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A *, const RuntimeMethod*))ScriptPlayable_1_GetBehaviour_m18F5C11A92B96501B55054208E95985D5C72F9B4_gshared)(__this, method);
}
// System.Boolean CinemachineShotPlayable::get_IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CinemachineShotPlayable_get_IsValid_mB1F51FF9816FBC56D680EB7F47919C5C69C35331 (CinemachineShotPlayable_t518787FCEF1470A6B42A2A6A72E4AD8D34D8C0CE * __this, const RuntimeMethod* method);
// UnityEngine.Playables.PlayState UnityEngine.Playables.PlayableExtensions::GetPlayState<UnityEngine.Playables.Playable>(!!0)
inline int32_t PlayableExtensions_GetPlayState_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m2449EED62648E08ED363284EEFF1080E562C7981 (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  ___playable0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 , const RuntimeMethod*))PlayableExtensions_GetPlayState_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m2449EED62648E08ED363284EEFF1080E562C7981_gshared)(___playable0, method);
}
// System.Double UnityEngine.Playables.PlayableExtensions::GetTime<UnityEngine.Playables.ScriptPlayable`1<CinemachineShotPlayable>>(!!0)
inline double PlayableExtensions_GetTime_TisScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A_m0EC69EBE63C5C7E96133DEBDAB0CEBCFA5A74BDB (ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A  ___playable0, const RuntimeMethod* method)
{
	return ((  double (*) (ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A , const RuntimeMethod*))PlayableExtensions_GetTime_TisScriptPlayable_1_t63661AF0CAE2B3B155608EFD5C3E712F0446136C_mF37B29E1D48DE1EEBEDA7E65483A25EAAD93C8C6_gshared)(___playable0, method);
}
// System.Double UnityEngine.Playables.PlayableExtensions::GetTime<UnityEngine.Playables.Playable>(!!0)
inline double PlayableExtensions_GetTime_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m2B7F64DD20E0D9B18A3E60B1B0BB0056B7C6747D (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  ___playable0, const RuntimeMethod* method)
{
	return ((  double (*) (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 , const RuntimeMethod*))PlayableExtensions_GetTime_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m2B7F64DD20E0D9B18A3E60B1B0BB0056B7C6747D_gshared)(___playable0, method);
}
// System.Double UnityEngine.Playables.PlayableExtensions::GetDuration<UnityEngine.Playables.ScriptPlayable`1<CinemachineShotPlayable>>(!!0)
inline double PlayableExtensions_GetDuration_TisScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A_m5311B48AA1AC40CCC1C7E5F416C71CB0D5C2F77D (ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A  ___playable0, const RuntimeMethod* method)
{
	return ((  double (*) (ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A , const RuntimeMethod*))PlayableExtensions_GetDuration_TisScriptPlayable_1_t63661AF0CAE2B3B155608EFD5C3E712F0446136C_m330D7A83A89A48B269C4EEB6A5FA84AAE568D315_gshared)(___playable0, method);
}
// System.Double UnityEngine.Playables.PlayableExtensions::GetDuration<UnityEngine.Playables.Playable>(!!0)
inline double PlayableExtensions_GetDuration_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m3557C19B4048EF5C9E875572F0E47D5EFB8E8E75 (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  ___playable0, const RuntimeMethod* method)
{
	return ((  double (*) (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 , const RuntimeMethod*))PlayableExtensions_GetDuration_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m3557C19B4048EF5C9E875572F0E47D5EFB8E8E75_gshared)(___playable0, method);
}
// System.Int32 UnityEngine.Playables.PlayableExtensions::GetInputCount<UnityEngine.Playables.Playable>(!!0)
inline int32_t PlayableExtensions_GetInputCount_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_mD04A716A5F8BF194F20D8AA2CEC2388233504F33 (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  ___playable0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 , const RuntimeMethod*))PlayableExtensions_GetInputCount_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_mD04A716A5F8BF194F20D8AA2CEC2388233504F33_gshared)(___playable0, method);
}
// System.Single UnityEngine.Playables.FrameData::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FrameData_get_deltaTime_m819B2E98971747205F7B8A66044C537FB79C719A (FrameData_t7CF1DA259799AC04363C4CA88947D4EB7E28B38E * __this, const RuntimeMethod* method);
// System.Single CinemachineMixer::GetDeltaTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CinemachineMixer_GetDeltaTime_mEA6473C55C1D43106E7F6EF9B15E58955D418A2D (CinemachineMixer_t8EFE2E6576C85DDC174244459CC647BF68D75EC2 * __this, float ___deltaTime0, const RuntimeMethod* method);
// System.Int32 Cinemachine.CinemachineBrain::SetCameraOverride(System.Int32,Cinemachine.ICinemachineCamera,Cinemachine.ICinemachineCamera,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CinemachineBrain_SetCameraOverride_m77B47E9D9567F4143E21EFE789D9AFDF8167283C (CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB * __this, int32_t ___overrideId0, RuntimeObject* ___camA1, RuntimeObject* ___camB2, float ___weightB3, float ___deltaTime4, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5 (const RuntimeMethod* method);
// Cinemachine.TargetPositionCache/Mode Cinemachine.TargetPositionCache::get_CacheMode()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t TargetPositionCache_get_CacheMode_m7C4D3FC799E34E324A56B695AC9D6E6844B8725C_inline (const RuntimeMethod* method);
// System.Boolean Cinemachine.TargetPositionCache::get_HasHurrentTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TargetPositionCache_get_HasHurrentTime_m594606DB4749A8EA02668BD3C5E13514C07A15E4 (const RuntimeMethod* method);
// System.Void UnityEngine.Playables.PlayableBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableBehaviour__ctor_mE96A877D927BEEC8C9368A0673FEAD77A78C35EE (PlayableBehaviour_t5F4AA32E735199182CC5F57D426D27BE8ABA8F01 * __this, const RuntimeMethod* method);
// System.Void Cinemachine.CinemachineVirtualCameraBase::set_FollowTargetAttachment(System.Single)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void CinemachineVirtualCameraBase_set_FollowTargetAttachment_mF7DCDD0C1EAD8B1ADCFA58DA84C140C304E3C937_inline (CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * __this, float ___value0, const RuntimeMethod* method);
// System.Void Cinemachine.CinemachineVirtualCameraBase::set_LookAtTargetAttachment(System.Single)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void CinemachineVirtualCameraBase_set_LookAtTargetAttachment_mF4C1319B7CFCB69F54DC8FA1114A17C704EB7F12_inline (CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * __this, float ___value0, const RuntimeMethod* method);
// Cinemachine.LensSettings Cinemachine.CameraState::get_Lens()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC  CameraState_get_Lens_m87EB12E38DA5AD3B2DB3C55E727E58C7D3162AF6_inline (CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_right_m6DD9559CA0C75BBA42D9140021C4C2A9AAA9B3F5 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___lhs0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Quaternion Cinemachine.CameraState::get_CorrectedOrientation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  CameraState_get_CorrectedOrientation_m34E9DD430137D2B017C560027AF7B3632B2A3DAC (CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Inverse_mC3A78571A826F05CE179637E675BD25F8B203E0C (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation0, const RuntimeMethod* method);
// System.Void Cinemachine.CameraState::set_OrientationCorrection(UnityEngine.Quaternion)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void CameraState_set_OrientationCorrection_m1D4C1A494488F9877416DC7246575D2FA62B75F9_inline (CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// System.Void Cinemachine.CameraState::set_Lens(Cinemachine.LensSettings)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void CameraState_set_Lens_m5425E9638FC8D57DBBABBC48D48266C482F8ABF8_inline (CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * __this, LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC  ___value0, const RuntimeMethod* method);
// UnityEngine.Playables.ScriptPlayable`1<!0> UnityEngine.Playables.ScriptPlayable`1<CinemachineShotPlayable>::Create(UnityEngine.Playables.PlayableGraph,System.Int32)
inline ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A  ScriptPlayable_1_Create_mF1204C0279C018CD6130BBFFA0F9D3E5CFA026D3 (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  ___graph0, int32_t ___inputCount1, const RuntimeMethod* method)
{
	return ((  ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A  (*) (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA , int32_t, const RuntimeMethod*))ScriptPlayable_1_Create_mBE8425D4AF7A0A82F7EE4705CFA90D78548797A8_gshared)(___graph0, ___inputCount1, method);
}
// UnityEngine.IExposedPropertyTable UnityEngine.Playables.PlayableGraph::GetResolver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayableGraph_GetResolver_m52F92B131B65F7412D220BB853C562C5983E884E (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA * __this, const RuntimeMethod* method);
// !0 UnityEngine.ExposedReference`1<Cinemachine.CinemachineVirtualCameraBase>::Resolve(UnityEngine.IExposedPropertyTable)
inline CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * ExposedReference_1_Resolve_m97A5CBAEBA1062ED36BF724510A76204AF114E74 (ExposedReference_1_t5B2C0E7B1795AC60AFEAC5228425E7234124855F * __this, RuntimeObject* ___resolver0, const RuntimeMethod* method)
{
	return ((  CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * (*) (ExposedReference_1_t5B2C0E7B1795AC60AFEAC5228425E7234124855F *, RuntimeObject*, const RuntimeMethod*))ExposedReference_1_Resolve_mBBA492F672C2CF69CFA8999F11C1FBD967AFFD1F_gshared)(__this, ___resolver0, method);
}
// UnityEngine.Playables.Playable UnityEngine.Playables.ScriptPlayable`1<CinemachineShotPlayable>::op_Implicit(UnityEngine.Playables.ScriptPlayable`1<!0>)
inline Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  ScriptPlayable_1_op_Implicit_m9388F54AB0598505CA6ED126475CB8DC2172407B (ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A  ___playable0, const RuntimeMethod* method)
{
	return ((  Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  (*) (ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A , const RuntimeMethod*))ScriptPlayable_1_op_Implicit_mCAFBDEC4F98B94A0A6045DE2FBAE38B2707D7973_gshared)(___playable0, method);
}
// System.Void UnityEngine.Playables.PlayableAsset::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableAsset__ctor_m669F459CFACFE65873346E428F206C457B488167 (PlayableAsset_t28B670EFE526C0D383A1C5A5AE2A150424E989AD * __this, const RuntimeMethod* method);
// System.Void Cinemachine.CinemachineCore/AxisInputDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxisInputDelegate__ctor_m78B42AB90C54B8EF03079E7FBE1A1D8E56DD86A2 (AxisInputDelegate_t5352DB1BE196BC488C6BBD6FE1F0541CA8A887CE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m497E19AA4FA22DB659F631B20FAEF65572D1B44E (const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// UnityEngine.Touch[] UnityEngine.Input::get_touches()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TouchU5BU5D_t0207B72FD95EF1F56E7A6C9F0A42896B03D2BD5D* Input_get_touches_mD31418E8B2487DBC9641A15677B41B459859011A (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Touch::get_deltaPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Touch_get_deltaPosition_m4AAD6521D88FE10B3786039892B1BB9438ED2D64 (Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387 (String_t* ___axisName0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// UnityEngine.Playables.ScriptPlayable`1<!0> UnityEngine.Playables.ScriptPlayable`1<CinemachineMixer>::Create(UnityEngine.Playables.PlayableGraph,System.Int32)
inline ScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B  ScriptPlayable_1_Create_mDE5946292E4A4165D00B39EACF469071ADA73189 (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  ___graph0, int32_t ___inputCount1, const RuntimeMethod* method)
{
	return ((  ScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B  (*) (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA , int32_t, const RuntimeMethod*))ScriptPlayable_1_Create_mBE8425D4AF7A0A82F7EE4705CFA90D78548797A8_gshared)(___graph0, ___inputCount1, method);
}
// System.Void UnityEngine.Playables.PlayableExtensions::SetInputCount<UnityEngine.Playables.ScriptPlayable`1<CinemachineMixer>>(!!0,System.Int32)
inline void PlayableExtensions_SetInputCount_TisScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B_m847F542F39A4F6792F586FE306664FB4E37E649F (ScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B  ___playable0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (ScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B , int32_t, const RuntimeMethod*))PlayableExtensions_SetInputCount_TisScriptPlayable_1_t63661AF0CAE2B3B155608EFD5C3E712F0446136C_m2774559EFF46341FD237D613631323E3DEC292C4_gshared)(___playable0, ___value1, method);
}
// UnityEngine.Playables.Playable UnityEngine.Playables.ScriptPlayable`1<CinemachineMixer>::op_Implicit(UnityEngine.Playables.ScriptPlayable`1<!0>)
inline Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  ScriptPlayable_1_op_Implicit_m6F1FE1C8EFB32C6564EAB7C8E44FB9DF276102D8 (ScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B  ___playable0, const RuntimeMethod* method)
{
	return ((  Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  (*) (ScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B , const RuntimeMethod*))ScriptPlayable_1_op_Implicit_mCAFBDEC4F98B94A0A6045DE2FBAE38B2707D7973_gshared)(___playable0, method);
}
// System.Void UnityEngine.Timeline.TrackAsset::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackAsset__ctor_mB57EE24087931D858028EE79112A1FABDC95E5C6 (TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Rect Cinemachine.Utility.UnityRectExtensions::Inflated(UnityEngine.Rect,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t35B976DE901B5423C11705E156938EA27AB402CE  UnityRectExtensions_Inflated_m5AA81D3FFB2CECE0523B2D03025E3448B82353D7 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___r0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___delta1, const RuntimeMethod* method)
{
	{
		// return new Rect(
		//     r.xMin - delta.x, r.yMin - delta.y,
		//     r.width + delta.x * 2, r.height + delta.y * 2);
		float L_0 = Rect_get_xMin_mFDFA74F66595FD2B8CE360183D1A92B575F0A76E((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&___r0), /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = ___delta1;
		float L_2 = L_1.get_x_0();
		float L_3 = Rect_get_yMin_m31EDC3262BE39D2F6464B15397F882237E6158C3((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&___r0), /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_4 = ___delta1;
		float L_5 = L_4.get_y_1();
		float L_6 = Rect_get_width_m54FF69FC2C086E2DC349ED091FD0D6576BFB1484((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&___r0), /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_7 = ___delta1;
		float L_8 = L_7.get_x_0();
		float L_9 = Rect_get_height_m088C36990E0A255C5D7DCE36575DCE23ABB364B5((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&___r0), /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_10 = ___delta1;
		float L_11 = L_10.get_y_1();
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Rect__ctor_m50B92C75005C9C5A0D05E6E0EBB43AFAF7C66280((&L_12), ((float)il2cpp_codegen_subtract((float)L_0, (float)L_2)), ((float)il2cpp_codegen_subtract((float)L_3, (float)L_5)), ((float)il2cpp_codegen_add((float)L_6, (float)((float)il2cpp_codegen_multiply((float)L_8, (float)(2.0f))))), ((float)il2cpp_codegen_add((float)L_9, (float)((float)il2cpp_codegen_multiply((float)L_11, (float)(2.0f))))), /*hidden argument*/NULL);
		return L_12;
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
// System.Boolean Cinemachine.Utility.UnityVectorExtensions::IsNaN(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityVectorExtensions_IsNaN_m90E153AECF3D79683B1FE6920D6F6AA58FCAAD6F (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___v0, const RuntimeMethod* method)
{
	{
		// return float.IsNaN(v.x) || float.IsNaN(v.y);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		bool L_2 = Single_IsNaN_m1ACB82FA5DC805F0F5015A1DA6B3DC447C963AFB(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = ___v0;
		float L_4 = L_3.get_y_1();
		bool L_5 = Single_IsNaN_m1ACB82FA5DC805F0F5015A1DA6B3DC447C963AFB(L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0019:
	{
		return (bool)1;
	}
}
// System.Boolean Cinemachine.Utility.UnityVectorExtensions::IsNaN(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityVectorExtensions_IsNaN_m00CBA12142414424E67D00AE67E34755869A95B2 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___v0, const RuntimeMethod* method)
{
	{
		// return float.IsNaN(v.x) || float.IsNaN(v.y) || float.IsNaN(v.z);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		bool L_2 = Single_IsNaN_m1ACB82FA5DC805F0F5015A1DA6B3DC447C963AFB(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0026;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = ___v0;
		float L_4 = L_3.get_y_3();
		bool L_5 = Single_IsNaN_m1ACB82FA5DC805F0F5015A1DA6B3DC447C963AFB(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0026;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = ___v0;
		float L_7 = L_6.get_z_4();
		bool L_8 = Single_IsNaN_m1ACB82FA5DC805F0F5015A1DA6B3DC447C963AFB(L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_0026:
	{
		return (bool)1;
	}
}
// System.Single Cinemachine.Utility.UnityVectorExtensions::ClosestPointOnSegment(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnityVectorExtensions_ClosestPointOnSegment_mB4297DD213BAA7738E173F1B6A8AE7295812EF5A (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___s01, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___s12, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityVectorExtensions_ClosestPointOnSegment_mB4297DD213BAA7738E173F1B6A8AE7295812EF5A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		// Vector3 s = s1 - s0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___s12;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___s01;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// float len2 = Vector3.SqrMagnitude(s);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = V_0;
		float L_4 = Vector3_SqrMagnitude_mBE7ED92F28BBE09310975CDF329913C04EA9500E(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// if (len2 < Epsilon)
		float L_5 = V_1;
		if ((!(((float)L_5) < ((float)(0.0001f)))))
		{
			goto IL_001d;
		}
	}
	{
		// return 0; // degenrate segment
		return (0.0f);
	}

IL_001d:
	{
		// return Mathf.Clamp01(Vector3.Dot(p - s0, s) / len2);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = ___p0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = ___s01;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_6, L_7, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = V_0;
		float L_10 = Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1(L_8, L_9, /*hidden argument*/NULL);
		float L_11 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_12 = Mathf_Clamp01_m1E5F736941A7E6DC4DBCA88A1E38FE9FBFE0C42B(((float)((float)L_10/(float)L_11)), /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Single Cinemachine.Utility.UnityVectorExtensions::ClosestPointOnSegment(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnityVectorExtensions_ClosestPointOnSegment_m85309B3AC8DD44D081FFA53A2A9D844BCB7046FF (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___p0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___s01, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___s12, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityVectorExtensions_ClosestPointOnSegment_m85309B3AC8DD44D081FFA53A2A9D844BCB7046FF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		// Vector2 s = s1 - s0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = ___s12;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = ___s01;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2 = Vector2_op_Subtraction_m2B347E4311EDBBBF27573E34899D2492E6B063C0(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// float len2 = Vector2.SqrMagnitude(s);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = V_0;
		float L_4 = Vector2_SqrMagnitude_m1095C695F57FB6A2C440F3FEA6876ABB87F0C696(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// if (len2 < Epsilon)
		float L_5 = V_1;
		if ((!(((float)L_5) < ((float)(0.0001f)))))
		{
			goto IL_001d;
		}
	}
	{
		// return 0; // degenrate segment
		return (0.0f);
	}

IL_001d:
	{
		// return Mathf.Clamp01(Vector2.Dot(p - s0, s) / len2);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_6 = ___p0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_7 = ___s01;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_8 = Vector2_op_Subtraction_m2B347E4311EDBBBF27573E34899D2492E6B063C0(L_6, L_7, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_9 = V_0;
		float L_10 = Vector2_Dot_m34F6A75BE3FC6F728233811943AC4406C7D905BA(L_8, L_9, /*hidden argument*/NULL);
		float L_11 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_12 = Mathf_Clamp01_m1E5F736941A7E6DC4DBCA88A1E38FE9FBFE0C42B(((float)((float)L_10/(float)L_11)), /*hidden argument*/NULL);
		return L_12;
	}
}
// UnityEngine.Vector3 Cinemachine.Utility.UnityVectorExtensions::ProjectOntoPlane(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  UnityVectorExtensions_ProjectOntoPlane_m4011502AB317965F1142F74D9B5F17C1EBB639EA (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___vector0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___planeNormal1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityVectorExtensions_ProjectOntoPlane_m4011502AB317965F1142F74D9B5F17C1EBB639EA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (vector - Vector3.Dot(vector, planeNormal) * planeNormal);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___vector0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___vector0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___planeNormal1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		float L_3 = Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1(L_1, L_2, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = ___planeNormal1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839(L_3, L_4, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_0, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Vector2 Cinemachine.Utility.UnityVectorExtensions::SquareNormalize(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  UnityVectorExtensions_SquareNormalize_mF37F0A57F428858728BBDB3E1C12D28BA2148BD0 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___v0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityVectorExtensions_SquareNormalize_mF37F0A57F428858728BBDB3E1C12D28BA2148BD0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// var d = Mathf.Max(Mathf.Abs(v.x), Mathf.Abs(v.y));
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_2 = fabsf(L_1);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = ___v0;
		float L_4 = L_3.get_y_1();
		float L_5 = fabsf(L_4);
		float L_6 = Mathf_Max_m670AE0EC1B09ED1A56FF9606B0F954670319CB65(L_2, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		// return d < Epsilon ? Vector2.zero : v / d;
		float L_7 = V_0;
		if ((((float)L_7) < ((float)(0.0001f))))
		{
			goto IL_002c;
		}
	}
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_8 = ___v0;
		float L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_10 = Vector2_op_Division_m0961A935168EE6701E098E2B37013DFFF46A5077(L_8, L_9, /*hidden argument*/NULL);
		return L_10;
	}

IL_002c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_11 = Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8(/*hidden argument*/NULL);
		return L_11;
	}
}
// System.Int32 Cinemachine.Utility.UnityVectorExtensions::FindIntersection(UnityEngine.Vector2&,UnityEngine.Vector2&,UnityEngine.Vector2&,UnityEngine.Vector2&,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityVectorExtensions_FindIntersection_mAB1160D1AAF54D69D9416C5C7EC70466CB262D92 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * ___p10, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * ___p21, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * ___q12, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * ___q23, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * ___intersection4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityVectorExtensions_FindIntersection_mAB1160D1AAF54D69D9416C5C7EC70466CB262D92_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_8;
	memset((&V_8), 0, sizeof(V_8));
	{
		// var p = p2 - p1;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_0 = ___p21;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = (*(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)L_0);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_2 = ___p10;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = (*(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)L_2);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_4 = Vector2_op_Subtraction_m2B347E4311EDBBBF27573E34899D2492E6B063C0(L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// var q = q2 - q1;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_5 = ___q23;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_6 = (*(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)L_5);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_7 = ___q12;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_8 = (*(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)L_7);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_9 = Vector2_op_Subtraction_m2B347E4311EDBBBF27573E34899D2492E6B063C0(L_6, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		// var pq = q1 - p1;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_10 = ___q12;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_11 = (*(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)L_10);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_12 = ___p10;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_13 = (*(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)L_12);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_14 = Vector2_op_Subtraction_m2B347E4311EDBBBF27573E34899D2492E6B063C0(L_11, L_13, /*hidden argument*/NULL);
		V_2 = L_14;
		// var pXq = p.Cross(q);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_15 = V_0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_16 = V_1;
		float L_17 = UnityVectorExtensions_Cross_mB246FD9E35576B768CD4DF3674DE7BE532EA3A22(L_15, L_16, /*hidden argument*/NULL);
		V_3 = L_17;
		// if (Mathf.Abs(pXq) < 0.00001f)
		float L_18 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_19 = fabsf(L_18);
		if ((!(((float)L_19) < ((float)(1.0E-05f)))))
		{
			goto IL_01b9;
		}
	}
	{
		// intersection = Vector2.positiveInfinity;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_20 = ___intersection4;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_21 = Vector2_get_positiveInfinity_m99CE1600871424C0F2A8D0477F30DCD878668465(/*hidden argument*/NULL);
		*(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)L_20 = L_21;
		// if (Mathf.Abs(pq.Cross(p)) < 0.00001f)
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_22 = V_2;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_23 = V_0;
		float L_24 = UnityVectorExtensions_Cross_mB246FD9E35576B768CD4DF3674DE7BE532EA3A22(L_22, L_23, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_25 = fabsf(L_24);
		if ((!(((float)L_25) < ((float)(1.0E-05f)))))
		{
			goto IL_01b7;
		}
	}
	{
		// var dotPQ = Vector2.Dot(q, p);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_26 = V_1;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_27 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		float L_28 = Vector2_Dot_m34F6A75BE3FC6F728233811943AC4406C7D905BA(L_26, L_27, /*hidden argument*/NULL);
		V_6 = L_28;
		// if (dotPQ > 0 && (p1 - q2).sqrMagnitude < 0.001f)
		float L_29 = V_6;
		if ((!(((float)L_29) > ((float)(0.0f)))))
		{
			goto IL_00b2;
		}
	}
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_30 = ___p10;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_31 = (*(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)L_30);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_32 = ___q23;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_33 = (*(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)L_32);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_34 = Vector2_op_Subtraction_m2B347E4311EDBBBF27573E34899D2492E6B063C0(L_31, L_33, /*hidden argument*/NULL);
		V_8 = L_34;
		float L_35 = Vector2_get_sqrMagnitude_mAEE10A8ECE7D5754E10727BA8C9068A759AD7002((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_8), /*hidden argument*/NULL);
		if ((!(((float)L_35) < ((float)(0.001f)))))
		{
			goto IL_00b2;
		}
	}
	{
		// intersection = q2;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_36 = ___intersection4;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_37 = ___q23;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_38 = (*(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)L_37);
		*(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)L_36 = L_38;
		// return 4;
		return 4;
	}

IL_00b2:
	{
		// if (dotPQ < 0 && (p2 - q2).sqrMagnitude < 0.001f)
		float L_39 = V_6;
		if ((!(((float)L_39) < ((float)(0.0f)))))
		{
			goto IL_00eb;
		}
	}
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_40 = ___p21;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_41 = (*(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)L_40);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_42 = ___q23;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_43 = (*(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)L_42);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_44 = Vector2_op_Subtraction_m2B347E4311EDBBBF27573E34899D2492E6B063C0(L_41, L_43, /*hidden argument*/NULL);
		V_8 = L_44;
		float L_45 = Vector2_get_sqrMagnitude_mAEE10A8ECE7D5754E10727BA8C9068A759AD7002((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_8), /*hidden argument*/NULL);
		if ((!(((float)L_45) < ((float)(0.001f)))))
		{
			goto IL_00eb;
		}
	}
	{
		// intersection = p2;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_46 = ___intersection4;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_47 = ___p21;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_48 = (*(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)L_47);
		*(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)L_46 = L_48;
		// return 4;
		return 4;
	}

IL_00eb:
	{
		// var dot = Vector2.Dot(pq, p);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_49 = V_2;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_50 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		float L_51 = Vector2_Dot_m34F6A75BE3FC6F728233811943AC4406C7D905BA(L_49, L_50, /*hidden argument*/NULL);
		V_7 = L_51;
		// if (0 <= dot && dot <= Vector2.Dot(p, p))
		float L_52 = V_7;
		if ((!(((float)(0.0f)) <= ((float)L_52))))
		{
			goto IL_0186;
		}
	}
	{
		float L_53 = V_7;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_54 = V_0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_55 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		float L_56 = Vector2_Dot_m34F6A75BE3FC6F728233811943AC4406C7D905BA(L_54, L_55, /*hidden argument*/NULL);
		if ((!(((float)L_53) <= ((float)L_56))))
		{
			goto IL_0186;
		}
	}
	{
		// if (dot < 0.0001f)
		float L_57 = V_7;
		if ((!(((float)L_57) < ((float)(0.0001f)))))
		{
			goto IL_014d;
		}
	}
	{
		// if (dotPQ <= 0 && (p1 - q1).sqrMagnitude < 0.001f)
		float L_58 = V_6;
		if ((!(((float)L_58) <= ((float)(0.0f)))))
		{
			goto IL_0184;
		}
	}
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_59 = ___p10;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_60 = (*(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)L_59);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_61 = ___q12;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_62 = (*(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)L_61);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_63 = Vector2_op_Subtraction_m2B347E4311EDBBBF27573E34899D2492E6B063C0(L_60, L_62, /*hidden argument*/NULL);
		V_8 = L_63;
		float L_64 = Vector2_get_sqrMagnitude_mAEE10A8ECE7D5754E10727BA8C9068A759AD7002((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_8), /*hidden argument*/NULL);
		if ((!(((float)L_64) < ((float)(0.001f)))))
		{
			goto IL_0184;
		}
	}
	{
		// intersection = p1; // p and q start at the same point and point away
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_65 = ___intersection4;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_66 = ___p10;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_67 = (*(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)L_66);
		*(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)L_65 = L_67;
		// }
		goto IL_0184;
	}

IL_014d:
	{
		// else if (dotPQ > 0 && (p2 - q1).sqrMagnitude < 0.001f)
		float L_68 = V_6;
		if ((!(((float)L_68) > ((float)(0.0f)))))
		{
			goto IL_0184;
		}
	}
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_69 = ___p21;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_70 = (*(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)L_69);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_71 = ___q12;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_72 = (*(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)L_71);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_73 = Vector2_op_Subtraction_m2B347E4311EDBBBF27573E34899D2492E6B063C0(L_70, L_72, /*hidden argument*/NULL);
		V_8 = L_73;
		float L_74 = Vector2_get_sqrMagnitude_mAEE10A8ECE7D5754E10727BA8C9068A759AD7002((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_8), /*hidden argument*/NULL);
		if ((!(((float)L_74) < ((float)(0.001f)))))
		{
			goto IL_0184;
		}
	}
	{
		// intersection = p2; // p points at start of q
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_75 = ___intersection4;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_76 = ___p21;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_77 = (*(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)L_76);
		*(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)L_75 = L_77;
	}

IL_0184:
	{
		// return 4;   // colinear segments touch
		return 4;
	}

IL_0186:
	{
		// dot = Vector2.Dot(p1 - q1, q);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_78 = ___p10;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_79 = (*(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)L_78);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_80 = ___q12;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_81 = (*(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)L_80);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_82 = Vector2_op_Subtraction_m2B347E4311EDBBBF27573E34899D2492E6B063C0(L_79, L_81, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_83 = V_1;
		float L_84 = Vector2_Dot_m34F6A75BE3FC6F728233811943AC4406C7D905BA(L_82, L_83, /*hidden argument*/NULL);
		V_7 = L_84;
		// if (0 <= dot && dot <= Vector2.Dot(q, q))
		float L_85 = V_7;
		if ((!(((float)(0.0f)) <= ((float)L_85))))
		{
			goto IL_01b5;
		}
	}
	{
		float L_86 = V_7;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_87 = V_1;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_88 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		float L_89 = Vector2_Dot_m34F6A75BE3FC6F728233811943AC4406C7D905BA(L_87, L_88, /*hidden argument*/NULL);
		if ((!(((float)L_86) <= ((float)L_89))))
		{
			goto IL_01b5;
		}
	}
	{
		// return 4;   // colinear segments overlap
		return 4;
	}

IL_01b5:
	{
		// return 3;   // colinear segments don't touch
		return 3;
	}

IL_01b7:
	{
		// return 0; // the lines are parallel and not colinear
		return 0;
	}

IL_01b9:
	{
		// var t = pq.Cross(q) / pXq;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_90 = V_2;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_91 = V_1;
		float L_92 = UnityVectorExtensions_Cross_mB246FD9E35576B768CD4DF3674DE7BE532EA3A22(L_90, L_91, /*hidden argument*/NULL);
		float L_93 = V_3;
		V_4 = ((float)((float)L_92/(float)L_93));
		// intersection = p1 + t * p;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_94 = ___intersection4;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_95 = ___p10;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_96 = (*(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)L_95);
		float L_97 = V_4;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_98 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_99 = Vector2_op_Multiply_m2E30A54E315810911DFC2E25C700757A68AC1F38(L_97, L_98, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_100 = Vector2_op_Addition_m81A4D928B8E399DA3A4E3ACD8937EDFDCB014682(L_96, L_99, /*hidden argument*/NULL);
		*(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)L_94 = L_100;
		// var u = pq.Cross(p) / pXq;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_101 = V_2;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_102 = V_0;
		float L_103 = UnityVectorExtensions_Cross_mB246FD9E35576B768CD4DF3674DE7BE532EA3A22(L_101, L_102, /*hidden argument*/NULL);
		float L_104 = V_3;
		V_5 = ((float)((float)L_103/(float)L_104));
		// if (0 <= t && t <= 1 && 0 <= u && u <= 1)
		float L_105 = V_4;
		if ((!(((float)(0.0f)) <= ((float)L_105))))
		{
			goto IL_020f;
		}
	}
	{
		float L_106 = V_4;
		if ((!(((float)L_106) <= ((float)(1.0f)))))
		{
			goto IL_020f;
		}
	}
	{
		float L_107 = V_5;
		if ((!(((float)(0.0f)) <= ((float)L_107))))
		{
			goto IL_020f;
		}
	}
	{
		float L_108 = V_5;
		if ((!(((float)L_108) <= ((float)(1.0f)))))
		{
			goto IL_020f;
		}
	}
	{
		// return 2;   // segments touch
		return 2;
	}

IL_020f:
	{
		// return 1;   // segments don't touch but lines intersect
		return 1;
	}
}
// System.Single Cinemachine.Utility.UnityVectorExtensions::Cross(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnityVectorExtensions_Cross_mB246FD9E35576B768CD4DF3674DE7BE532EA3A22 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___v10, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___v21, const RuntimeMethod* method)
{
	{
		// private static float Cross(this Vector2 v1, Vector2 v2) { return (v1.x * v2.y) - (v1.y * v2.x); }
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = ___v10;
		float L_1 = L_0.get_x_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2 = ___v21;
		float L_3 = L_2.get_y_1();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_4 = ___v10;
		float L_5 = L_4.get_y_1();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_6 = ___v21;
		float L_7 = L_6.get_x_0();
		return ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_1, (float)L_3)), (float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_7))));
	}
}
// UnityEngine.Vector2 Cinemachine.Utility.UnityVectorExtensions::Abs(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  UnityVectorExtensions_Abs_m511D6D40B4EB81D3CFF86A41EAB952606DD5D1D3 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___v0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityVectorExtensions_Abs_m511D6D40B4EB81D3CFF86A41EAB952606DD5D1D3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Vector2(Mathf.Abs(v.x), Mathf.Abs(v.y));
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_2 = fabsf(L_1);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = ___v0;
		float L_4 = L_3.get_y_1();
		float L_5 = fabsf(L_4);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_6), L_2, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Vector3 Cinemachine.Utility.UnityVectorExtensions::Abs(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  UnityVectorExtensions_Abs_m306CBBA7519A685B4A409FA92A75A450A7A03E82 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___v0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityVectorExtensions_Abs_m306CBBA7519A685B4A409FA92A75A450A7A03E82_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Vector3(Mathf.Abs(v.x), Mathf.Abs(v.y), Mathf.Abs(v.z));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_2 = fabsf(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = ___v0;
		float L_4 = L_3.get_y_3();
		float L_5 = fabsf(L_4);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = ___v0;
		float L_7 = L_6.get_z_4();
		float L_8 = fabsf(L_7);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_9), L_2, L_5, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Boolean Cinemachine.Utility.UnityVectorExtensions::IsUniform(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityVectorExtensions_IsUniform_m1C39B97EB4C2C8D0A09FFFF53BC4C4C47CFD98A3 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___v0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityVectorExtensions_IsUniform_m1C39B97EB4C2C8D0A09FFFF53BC4C4C47CFD98A3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Math.Abs(v.x - v.y) < Epsilon;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		float L_4 = fabsf(((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)));
		return (bool)((((float)L_4) < ((float)(0.0001f)))? 1 : 0);
	}
}
// System.Boolean Cinemachine.Utility.UnityVectorExtensions::IsUniform(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityVectorExtensions_IsUniform_m9BCD19800BF008AAB1CA923C626A0ACEFCBB1DC9 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___v0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityVectorExtensions_IsUniform_m9BCD19800BF008AAB1CA923C626A0ACEFCBB1DC9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Math.Abs(v.x - v.y) < Epsilon && Math.Abs(v.x - v.z) < Epsilon;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		float L_4 = fabsf(((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)));
		if ((!(((float)L_4) < ((float)(0.0001f)))))
		{
			goto IL_0033;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = ___v0;
		float L_6 = L_5.get_x_2();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = ___v0;
		float L_8 = L_7.get_z_4();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		float L_9 = fabsf(((float)il2cpp_codegen_subtract((float)L_6, (float)L_8)));
		return (bool)((((float)L_9) < ((float)(0.0001f)))? 1 : 0);
	}

IL_0033:
	{
		return (bool)0;
	}
}
// System.Boolean Cinemachine.Utility.UnityVectorExtensions::AlmostZero(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityVectorExtensions_AlmostZero_m09DAF0093FD15B42729EC01B5017049E2C2602DF (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___v0, const RuntimeMethod* method)
{
	{
		// return v.sqrMagnitude < (Epsilon * Epsilon);
		float L_0 = Vector3_get_sqrMagnitude_m1C6E190B4A933A183B308736DEC0DD64B0588968((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&___v0), /*hidden argument*/NULL);
		return (bool)((((float)L_0) < ((float)(9.999999E-09f)))? 1 : 0);
	}
}
// System.Single Cinemachine.Utility.UnityVectorExtensions::Angle(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnityVectorExtensions_Angle_m51BB9FF2F18CF2F2B7CCCFDF4B22F6061B487FD3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___v10, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___v21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityVectorExtensions_Angle_m51BB9FF2F18CF2F2B7CCCFDF4B22F6061B487FD3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// v1.Normalize();
		Vector3_Normalize_m174460238EC6322B9095A378AA8624B1DD9000F3((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&___v10), /*hidden argument*/NULL);
		// v2.Normalize();
		Vector3_Normalize_m174460238EC6322B9095A378AA8624B1DD9000F3((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&___v21), /*hidden argument*/NULL);
		// return Mathf.Atan2((v1 - v2).magnitude, (v1 + v2).magnitude) * Mathf.Rad2Deg * 2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___v10;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___v21;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = ___v10;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = ___v21;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_4, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		float L_7 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_8 = atan2f(L_3, L_7);
		return ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_8, (float)(57.29578f))), (float)(2.0f)));
	}
}
// System.Single Cinemachine.Utility.UnityVectorExtensions::SignedAngle(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnityVectorExtensions_SignedAngle_mACC4C418DBAC81BF1F719AAFCF2EE55364AE908D (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___v10, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___v21, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___up2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityVectorExtensions_SignedAngle_mACC4C418DBAC81BF1F719AAFCF2EE55364AE908D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// float angle = Angle(v1, v2);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___v10;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___v21;
		float L_2 = UnityVectorExtensions_Angle_m51BB9FF2F18CF2F2B7CCCFDF4B22F6061B487FD3(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// if (Mathf.Sign(Vector3.Dot(up, Vector3.Cross(v1, v2))) < 0)
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = ___up2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = ___v10;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = ___v21;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_Cross_m3E9DBC445228FDB850BDBB4B01D6F61AC0111887(L_4, L_5, /*hidden argument*/NULL);
		float L_7 = Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1(L_3, L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_8 = Mathf_Sign_m6FA1D12786BEE0419D4B9426E5E4955F286BC8D3(L_7, /*hidden argument*/NULL);
		if ((!(((float)L_8) < ((float)(0.0f)))))
		{
			goto IL_0024;
		}
	}
	{
		// return -angle;
		float L_9 = V_0;
		return ((-L_9));
	}

IL_0024:
	{
		// return angle;
		float L_10 = V_0;
		return L_10;
	}
}
// UnityEngine.Quaternion Cinemachine.Utility.UnityVectorExtensions::SafeFromToRotation(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  UnityVectorExtensions_SafeFromToRotation_mD8833A51B691738B2F6EFB46750C92380AC0B6BC (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___v10, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___v21, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___up2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityVectorExtensions_SafeFromToRotation_mD8833A51B691738B2F6EFB46750C92380AC0B6BC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var axis = Vector3.Cross(v1, v2);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___v10;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___v21;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Vector3_Cross_m3E9DBC445228FDB850BDBB4B01D6F61AC0111887(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// if (axis.AlmostZero())
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = V_0;
		bool L_4 = UnityVectorExtensions_AlmostZero_m09DAF0093FD15B42729EC01B5017049E2C2602DF(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0012;
		}
	}
	{
		// axis = up; // in case they are pointing in opposite directions
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = ___up2;
		V_0 = L_5;
	}

IL_0012:
	{
		// return Quaternion.AngleAxis(Angle(v1, v2), axis);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = ___v10;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = ___v21;
		float L_8 = UnityVectorExtensions_Angle_m51BB9FF2F18CF2F2B7CCCFDF4B22F6061B487FD3(L_6, L_7, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_10 = Quaternion_AngleAxis_m07DACF59F0403451DABB9BC991C53EE3301E88B0(L_8, L_9, /*hidden argument*/NULL);
		return L_10;
	}
}
// UnityEngine.Vector3 Cinemachine.Utility.UnityVectorExtensions::SlerpWithReferenceUp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  UnityVectorExtensions_SlerpWithReferenceUp_m2C4005C18D79C50E3DD198E7C067AC46D4FFEAEF (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___vA0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___vB1, float ___t2, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___up3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityVectorExtensions_SlerpWithReferenceUp_m2C4005C18D79C50E3DD198E7C067AC46D4FFEAEF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// float dA = vA.magnitude;
		float L_0 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&___vA0), /*hidden argument*/NULL);
		V_0 = L_0;
		// float dB = vB.magnitude;
		float L_1 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&___vB1), /*hidden argument*/NULL);
		V_1 = L_1;
		// if (dA < Epsilon || dB < Epsilon)
		float L_2 = V_0;
		if ((((float)L_2) < ((float)(0.0001f))))
		{
			goto IL_0020;
		}
	}
	{
		float L_3 = V_1;
		if ((!(((float)L_3) < ((float)(0.0001f)))))
		{
			goto IL_0029;
		}
	}

IL_0020:
	{
		// return Vector3.Lerp(vA, vB, t);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = ___vA0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = ___vB1;
		float L_6 = ___t2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1(L_4, L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_0029:
	{
		// Vector3 dirA = vA / dA;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = ___vA0;
		float L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624(L_8, L_9, /*hidden argument*/NULL);
		// Vector3 dirB = vB / dB;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = ___vB1;
		float L_12 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624(L_11, L_12, /*hidden argument*/NULL);
		V_2 = L_13;
		// Quaternion qA = Quaternion.LookRotation(dirA, up);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = ___up3;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_15 = Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672(L_10, L_14, /*hidden argument*/NULL);
		// Quaternion qB = Quaternion.LookRotation(dirB, up);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = V_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = ___up3;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_18 = Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672(L_16, L_17, /*hidden argument*/NULL);
		V_3 = L_18;
		// Quaternion q = UnityQuaternionExtensions.SlerpWithReferenceUp(qA, qB, t, up);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_19 = V_3;
		float L_20 = ___t2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = ___up3;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_22 = UnityQuaternionExtensions_SlerpWithReferenceUp_mA5EA8034D99CAD536ED015E57007A82B346EB834(L_15, L_19, L_20, L_21, /*hidden argument*/NULL);
		// Vector3 dir = q * Vector3.forward;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_22, L_23, /*hidden argument*/NULL);
		// return dir * Mathf.Lerp(dA, dB, t);
		float L_25 = V_0;
		float L_26 = V_1;
		float L_27 = ___t2;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_28 = Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364(L_25, L_26, L_27, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_24, L_28, /*hidden argument*/NULL);
		return L_29;
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
// System.Void Cinemachine.VcamTargetPropertyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VcamTargetPropertyAttribute__ctor_m96B4DF52A5F34FE5968B19EB62FE32535997E456 (VcamTargetPropertyAttribute_t7DF91AEFF1BD2B83D640D6D39F1720CB57798B1F * __this, const RuntimeMethod* method)
{
	{
		PropertyAttribute__ctor_m7F5C473F39D5601486C1127DA0D52F2DC293FC35(__this, /*hidden argument*/NULL);
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
// System.Void CinemachineCameraOffset::PostPipelineStageCallback(Cinemachine.CinemachineVirtualCameraBase,Cinemachine.CinemachineCore_Stage,Cinemachine.CameraState&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineCameraOffset_PostPipelineStageCallback_m12777380D2DCFC115C2A8AE6F07304C62B88C049 (CinemachineCameraOffset_t2D656B9D964F68E61A5168495C2666BE6B8AD693 * __this, CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * ___vcam0, int32_t ___stage1, CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * ___state2, float ___deltaTime3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CinemachineCameraOffset_PostPipelineStageCallback_m12777380D2DCFC115C2A8AE6F07304C62B88C049_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t G_B5_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B6_0 = 0;
	{
		// if (stage == m_ApplyAfter)
		int32_t L_0 = ___stage1;
		int32_t L_1 = __this->get_m_ApplyAfter_8();
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_00ce;
		}
	}
	{
		// bool preserveAim = m_PreserveComposition
		//     && state.HasLookAt && stage > CinemachineCore.Stage.Body;
		bool L_2 = __this->get_m_PreserveComposition_9();
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * L_3 = ___state2;
		bool L_4 = CameraState_get_HasLookAt_mAD63C086CB17D6AF1F4462AB0F21F3DD52AC582B((CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 *)L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_5 = ___stage1;
		G_B5_0 = ((((int32_t)L_5) > ((int32_t)0))? 1 : 0);
		goto IL_0023;
	}

IL_0022:
	{
		G_B5_0 = 0;
	}

IL_0023:
	{
		// Vector3 screenOffset = Vector2.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_6 = Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		// if (preserveAim)
		int32_t L_8 = G_B5_0;
		G_B6_0 = L_8;
		if (!L_8)
		{
			G_B7_0 = L_8;
			goto IL_0059;
		}
	}
	{
		// screenOffset = state.RawOrientation.GetCameraRotationToTarget(
		//     state.ReferenceLookAt - state.CorrectedPosition, state.ReferenceUp);
		CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * L_9 = ___state2;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_10 = CameraState_get_RawOrientation_mEB165F5AB11D2EE2BCD0D9797103539EEA297623_inline((CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 *)L_9, /*hidden argument*/NULL);
		CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * L_11 = ___state2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = CameraState_get_ReferenceLookAt_m3FCCFB59361130B202C526D5F88FA11E1CC796EC_inline((CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 *)L_11, /*hidden argument*/NULL);
		CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * L_13 = ___state2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = CameraState_get_CorrectedPosition_mB0BA158101511615DB798168E64D3AFC0228B9AA((CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 *)L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_12, L_14, /*hidden argument*/NULL);
		CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * L_16 = ___state2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = CameraState_get_ReferenceUp_mC19FC2F8C4846C140CC7EBE45C16DD07DEA9809B_inline((CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 *)L_16, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_18 = UnityQuaternionExtensions_GetCameraRotationToTarget_m2FC346D5CDC3FA3E81B1D35B4667D72034572B67(L_10, L_15, L_17, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_18, /*hidden argument*/NULL);
		V_0 = L_19;
		G_B7_0 = G_B6_0;
	}

IL_0059:
	{
		// Vector3 offset = state.RawOrientation * m_Offset;
		CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * L_20 = ___state2;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_21 = CameraState_get_RawOrientation_mEB165F5AB11D2EE2BCD0D9797103539EEA297623_inline((CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 *)L_20, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = __this->get_m_Offset_7();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_21, L_22, /*hidden argument*/NULL);
		V_1 = L_23;
		// state.PositionCorrection += offset;
		CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * L_24 = ___state2;
		CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * L_25 = L_24;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = CameraState_get_PositionCorrection_m81476CD9BBC93E1AE8A47E6BA8D6E08F112D1CFD_inline((CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 *)L_25, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_26, L_27, /*hidden argument*/NULL);
		CameraState_set_PositionCorrection_m2CEDE7298CE80A5E020285AD21C2F39353563CB8_inline((CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 *)L_25, L_28, /*hidden argument*/NULL);
		// if (!preserveAim)
		if (G_B7_0)
		{
			goto IL_0092;
		}
	}
	{
		// state.ReferenceLookAt += offset;
		CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * L_29 = ___state2;
		CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * L_30 = L_29;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = CameraState_get_ReferenceLookAt_m3FCCFB59361130B202C526D5F88FA11E1CC796EC_inline((CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 *)L_30, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_33 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_31, L_32, /*hidden argument*/NULL);
		CameraState_set_ReferenceLookAt_m33C644687C407C4208346D59D6DCFA911E2B5588_inline((CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 *)L_30, L_33, /*hidden argument*/NULL);
		return;
	}

IL_0092:
	{
		// var q = Quaternion.LookRotation(
		//     state.ReferenceLookAt - state.CorrectedPosition, state.ReferenceUp);
		CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * L_34 = ___state2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_35 = CameraState_get_ReferenceLookAt_m3FCCFB59361130B202C526D5F88FA11E1CC796EC_inline((CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 *)L_34, /*hidden argument*/NULL);
		CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * L_36 = ___state2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_37 = CameraState_get_CorrectedPosition_mB0BA158101511615DB798168E64D3AFC0228B9AA((CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 *)L_36, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_38 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_35, L_37, /*hidden argument*/NULL);
		CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * L_39 = ___state2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_40 = CameraState_get_ReferenceUp_mC19FC2F8C4846C140CC7EBE45C16DD07DEA9809B_inline((CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 *)L_39, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_41 = Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672(L_38, L_40, /*hidden argument*/NULL);
		V_2 = L_41;
		// q = q.ApplyCameraRotation(-screenOffset, state.ReferenceUp);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_42 = V_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_43 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_44 = Vector3_op_UnaryNegation_m2AFBBF22801F9BCA5A4EBE642A29F433FE1339C2(L_43, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_45 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_44, /*hidden argument*/NULL);
		CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * L_46 = ___state2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_47 = CameraState_get_ReferenceUp_mC19FC2F8C4846C140CC7EBE45C16DD07DEA9809B_inline((CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 *)L_46, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_48 = UnityQuaternionExtensions_ApplyCameraRotation_m3E5594FA8D22EECF7DD709A26493DE5FAD7B0814(L_42, L_45, L_47, /*hidden argument*/NULL);
		V_2 = L_48;
		// state.RawOrientation = q;
		CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * L_49 = ___state2;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_50 = V_2;
		CameraState_set_RawOrientation_m366411C5A4E24AAB88BAF5DDC5174397F099B976_inline((CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 *)L_49, L_50, /*hidden argument*/NULL);
	}

IL_00ce:
	{
		// }
		return;
	}
}
// System.Void CinemachineCameraOffset::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineCameraOffset__ctor_m98184CA5AE9FE91AB824BB023B17ECF5BD1019BF (CinemachineCameraOffset_t2D656B9D964F68E61A5168495C2666BE6B8AD693 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CinemachineCameraOffset__ctor_m98184CA5AE9FE91AB824BB023B17ECF5BD1019BF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Vector3 m_Offset = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_m_Offset_7(L_0);
		// public CinemachineCore.Stage m_ApplyAfter = CinemachineCore.Stage.Aim;
		__this->set_m_ApplyAfter_8(1);
		CinemachineExtension__ctor_mF3457052C6CEDAB03B20CFBDF3C9760307CC68DC(__this, /*hidden argument*/NULL);
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
// System.Void CinemachineMixer::OnPlayableDestroy(UnityEngine.Playables.Playable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineMixer_OnPlayableDestroy_m34D62485682D21923664DF61BEBD71E1A1EF44CB (CinemachineMixer_t8EFE2E6576C85DDC174244459CC647BF68D75EC2 * __this, Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  ___playable0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CinemachineMixer_OnPlayableDestroy_m34D62485682D21923664DF61BEBD71E1A1EF44CB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (mBrain != null)
		CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB * L_0 = __this->get_mBrain_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// mBrain.ReleaseCameraOverride(mBrainOverrideId); // clean up
		CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB * L_2 = __this->get_mBrain_1();
		int32_t L_3 = __this->get_mBrainOverrideId_2();
		NullCheck(L_2);
		CinemachineBrain_ReleaseCameraOverride_m77A2D0A792D692E4DDC383539DD7A6BFB6001847(L_2, L_3, /*hidden argument*/NULL);
	}

IL_001f:
	{
		// mBrainOverrideId = -1;
		__this->set_mBrainOverrideId_2((-1));
		// }
		return;
	}
}
// System.Void CinemachineMixer::PrepareFrame(UnityEngine.Playables.Playable,UnityEngine.Playables.FrameData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineMixer_PrepareFrame_m8EB46CE26F50B8D8EA6228CC40722EC7848B1697 (CinemachineMixer_t8EFE2E6576C85DDC174244459CC647BF68D75EC2 * __this, Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  ___playable0, FrameData_t7CF1DA259799AC04363C4CA88947D4EB7E28B38E  ___info1, const RuntimeMethod* method)
{
	{
		// mPreviewPlay = false;
		__this->set_mPreviewPlay_3((bool)0);
		// }
		return;
	}
}
// System.Void CinemachineMixer::ProcessFrame(UnityEngine.Playables.Playable,UnityEngine.Playables.FrameData,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineMixer_ProcessFrame_mF8767A07041ADA879C57F56736DE89454E9BDF09 (CinemachineMixer_t8EFE2E6576C85DDC174244459CC647BF68D75EC2 * __this, Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  ___playable0, FrameData_t7CF1DA259799AC04363C4CA88947D4EB7E28B38E  ___info1, RuntimeObject * ___playerData2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CinemachineMixer_ProcessFrame_mF8767A07041ADA879C57F56736DE89454E9BDF09_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	float V_5 = 0.0f;
	RuntimeObject* V_6 = NULL;
	RuntimeObject* V_7 = NULL;
	int32_t V_8 = 0;
	float V_9 = 0.0f;
	ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A  V_10;
	memset((&V_10), 0, sizeof(V_10));
	CinemachineShotPlayable_t518787FCEF1470A6B42A2A6A72E4AD8D34D8C0CE * V_11 = NULL;
	Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  V_12;
	memset((&V_12), 0, sizeof(V_12));
	int32_t V_13 = 0;
	ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A  V_14;
	memset((&V_14), 0, sizeof(V_14));
	{
		// base.ProcessFrame(playable, info, playerData);
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_0 = ___playable0;
		FrameData_t7CF1DA259799AC04363C4CA88947D4EB7E28B38E  L_1 = ___info1;
		RuntimeObject * L_2 = ___playerData2;
		PlayableBehaviour_ProcessFrame_m32F9B265BB54D1A3A290E2709FDD0B873360B25A(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		// GameObject go = playerData as GameObject;
		RuntimeObject * L_3 = ___playerData2;
		V_0 = ((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)IsInstSealed((RuntimeObject*)L_3, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var));
		// if (go == null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0027;
		}
	}
	{
		// mBrain = (CinemachineBrain)playerData;
		RuntimeObject * L_6 = ___playerData2;
		__this->set_mBrain_1(((CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB *)CastclassClass((RuntimeObject*)L_6, CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB_il2cpp_TypeInfo_var)));
		goto IL_0033;
	}

IL_0027:
	{
		// mBrain = go.GetComponent<CinemachineBrain>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = V_0;
		NullCheck(L_7);
		CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB * L_8 = GameObject_GetComponent_TisCinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB_mBD916E48F072E85917A54BADF9B02330C838FEA0(L_7, /*hidden argument*/GameObject_GetComponent_TisCinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB_mBD916E48F072E85917A54BADF9B02330C838FEA0_RuntimeMethod_var);
		__this->set_mBrain_1(L_8);
	}

IL_0033:
	{
		// if (mBrain == null)
		CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB * L_9 = __this->get_mBrain_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_10 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_9, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0042;
		}
	}
	{
		// return;
		return;
	}

IL_0042:
	{
		// int activeInputs = 0;
		V_1 = 0;
		// int clipIndexA = -1;
		V_2 = (-1);
		// int clipIndexB = -1;
		V_3 = (-1);
		// bool incomingIsA = false; // Assume that incoming clip is clip B
		V_4 = (bool)0;
		// float weightB = 1;
		V_5 = (1.0f);
		// for (int i = 0; i < playable.GetInputCount(); ++i)
		V_8 = 0;
		goto IL_00f4;
	}

IL_005a:
	{
		// float weight = playable.GetInputWeight(i);
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_11 = ___playable0;
		int32_t L_12 = V_8;
		float L_13 = PlayableExtensions_GetInputWeight_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_mBAE3A98FEA61C11C997238263E219EEE147E0F2B(L_11, L_12, /*hidden argument*/PlayableExtensions_GetInputWeight_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_mBAE3A98FEA61C11C997238263E219EEE147E0F2B_RuntimeMethod_var);
		V_9 = L_13;
		// var clip = (ScriptPlayable<CinemachineShotPlayable>)playable.GetInput(i);
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_14 = ___playable0;
		int32_t L_15 = V_8;
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_16 = PlayableExtensions_GetInput_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m458E510D241640A39A9FFD46A4094623CB6B2D92(L_14, L_15, /*hidden argument*/PlayableExtensions_GetInput_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m458E510D241640A39A9FFD46A4094623CB6B2D92_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A_il2cpp_TypeInfo_var);
		ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A  L_17 = ScriptPlayable_1_op_Explicit_m8AFDFB2071A6323A8AF5A938EBF5547C28F01652(L_16, /*hidden argument*/ScriptPlayable_1_op_Explicit_m8AFDFB2071A6323A8AF5A938EBF5547C28F01652_RuntimeMethod_var);
		V_10 = L_17;
		// CinemachineShotPlayable shot = clip.GetBehaviour();
		CinemachineShotPlayable_t518787FCEF1470A6B42A2A6A72E4AD8D34D8C0CE * L_18 = ScriptPlayable_1_GetBehaviour_mCF976DA4F09705321BC4E47673AAB78F09B913F8((ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A *)(&V_10), /*hidden argument*/ScriptPlayable_1_GetBehaviour_mCF976DA4F09705321BC4E47673AAB78F09B913F8_RuntimeMethod_var);
		V_11 = L_18;
		// if (shot != null && shot.IsValid
		//     && playable.GetPlayState() == PlayState.Playing
		//     && weight > 0)
		CinemachineShotPlayable_t518787FCEF1470A6B42A2A6A72E4AD8D34D8C0CE * L_19 = V_11;
		if (!L_19)
		{
			goto IL_00ee;
		}
	}
	{
		CinemachineShotPlayable_t518787FCEF1470A6B42A2A6A72E4AD8D34D8C0CE * L_20 = V_11;
		NullCheck(L_20);
		bool L_21 = CinemachineShotPlayable_get_IsValid_mB1F51FF9816FBC56D680EB7F47919C5C69C35331(L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_00ee;
		}
	}
	{
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_22 = ___playable0;
		int32_t L_23 = PlayableExtensions_GetPlayState_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m2449EED62648E08ED363284EEFF1080E562C7981(L_22, /*hidden argument*/PlayableExtensions_GetPlayState_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m2449EED62648E08ED363284EEFF1080E562C7981_RuntimeMethod_var);
		if ((!(((uint32_t)L_23) == ((uint32_t)1))))
		{
			goto IL_00ee;
		}
	}
	{
		float L_24 = V_9;
		if ((!(((float)L_24) > ((float)(0.0f)))))
		{
			goto IL_00ee;
		}
	}
	{
		// clipIndexA = clipIndexB;
		int32_t L_25 = V_3;
		V_2 = L_25;
		// clipIndexB = i;
		int32_t L_26 = V_8;
		V_3 = L_26;
		// weightB = weight;
		float L_27 = V_9;
		V_5 = L_27;
		// if (++activeInputs == 2)
		int32_t L_28 = V_1;
		int32_t L_29 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
		V_1 = L_29;
		if ((!(((uint32_t)L_29) == ((uint32_t)2))))
		{
			goto IL_00ee;
		}
	}
	{
		// var clipA = playable.GetInput(clipIndexA);
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_30 = ___playable0;
		int32_t L_31 = V_2;
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_32 = PlayableExtensions_GetInput_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m458E510D241640A39A9FFD46A4094623CB6B2D92(L_30, L_31, /*hidden argument*/PlayableExtensions_GetInput_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m458E510D241640A39A9FFD46A4094623CB6B2D92_RuntimeMethod_var);
		V_12 = L_32;
		// incomingIsA = clip.GetTime() >= clipA.GetTime();
		ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A  L_33 = V_10;
		double L_34 = PlayableExtensions_GetTime_TisScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A_m0EC69EBE63C5C7E96133DEBDAB0CEBCFA5A74BDB(L_33, /*hidden argument*/PlayableExtensions_GetTime_TisScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A_m0EC69EBE63C5C7E96133DEBDAB0CEBCFA5A74BDB_RuntimeMethod_var);
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_35 = V_12;
		double L_36 = PlayableExtensions_GetTime_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m2B7F64DD20E0D9B18A3E60B1B0BB0056B7C6747D(L_35, /*hidden argument*/PlayableExtensions_GetTime_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m2B7F64DD20E0D9B18A3E60B1B0BB0056B7C6747D_RuntimeMethod_var);
		V_4 = (bool)((((int32_t)((!(((double)L_34) >= ((double)L_36)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		// if (clip.GetTime() == clipA.GetTime())
		ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A  L_37 = V_10;
		double L_38 = PlayableExtensions_GetTime_TisScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A_m0EC69EBE63C5C7E96133DEBDAB0CEBCFA5A74BDB(L_37, /*hidden argument*/PlayableExtensions_GetTime_TisScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A_m0EC69EBE63C5C7E96133DEBDAB0CEBCFA5A74BDB_RuntimeMethod_var);
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_39 = V_12;
		double L_40 = PlayableExtensions_GetTime_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m2B7F64DD20E0D9B18A3E60B1B0BB0056B7C6747D(L_39, /*hidden argument*/PlayableExtensions_GetTime_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m2B7F64DD20E0D9B18A3E60B1B0BB0056B7C6747D_RuntimeMethod_var);
		if ((!(((double)L_38) == ((double)L_40))))
		{
			goto IL_0101;
		}
	}
	{
		// incomingIsA = clip.GetDuration() < clipA.GetDuration();
		ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A  L_41 = V_10;
		double L_42 = PlayableExtensions_GetDuration_TisScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A_m5311B48AA1AC40CCC1C7E5F416C71CB0D5C2F77D(L_41, /*hidden argument*/PlayableExtensions_GetDuration_TisScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A_m5311B48AA1AC40CCC1C7E5F416C71CB0D5C2F77D_RuntimeMethod_var);
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_43 = V_12;
		double L_44 = PlayableExtensions_GetDuration_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m3557C19B4048EF5C9E875572F0E47D5EFB8E8E75(L_43, /*hidden argument*/PlayableExtensions_GetDuration_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m3557C19B4048EF5C9E875572F0E47D5EFB8E8E75_RuntimeMethod_var);
		V_4 = (bool)((((double)L_42) < ((double)L_44))? 1 : 0);
		// break;
		goto IL_0101;
	}

IL_00ee:
	{
		// for (int i = 0; i < playable.GetInputCount(); ++i)
		int32_t L_45 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)1));
	}

IL_00f4:
	{
		// for (int i = 0; i < playable.GetInputCount(); ++i)
		int32_t L_46 = V_8;
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_47 = ___playable0;
		int32_t L_48 = PlayableExtensions_GetInputCount_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_mD04A716A5F8BF194F20D8AA2CEC2388233504F33(L_47, /*hidden argument*/PlayableExtensions_GetInputCount_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_mD04A716A5F8BF194F20D8AA2CEC2388233504F33_RuntimeMethod_var);
		if ((((int32_t)L_46) < ((int32_t)L_48)))
		{
			goto IL_005a;
		}
	}

IL_0101:
	{
		// if (activeInputs == 1 && weightB < 1
		//         && playable.GetInput(clipIndexB).GetTime() > playable.GetInput(clipIndexB).GetDuration() / 2)
		int32_t L_49 = V_1;
		if ((!(((uint32_t)L_49) == ((uint32_t)1))))
		{
			goto IL_0135;
		}
	}
	{
		float L_50 = V_5;
		if ((!(((float)L_50) < ((float)(1.0f)))))
		{
			goto IL_0135;
		}
	}
	{
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_51 = ___playable0;
		int32_t L_52 = V_3;
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_53 = PlayableExtensions_GetInput_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m458E510D241640A39A9FFD46A4094623CB6B2D92(L_51, L_52, /*hidden argument*/PlayableExtensions_GetInput_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m458E510D241640A39A9FFD46A4094623CB6B2D92_RuntimeMethod_var);
		double L_54 = PlayableExtensions_GetTime_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m2B7F64DD20E0D9B18A3E60B1B0BB0056B7C6747D(L_53, /*hidden argument*/PlayableExtensions_GetTime_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m2B7F64DD20E0D9B18A3E60B1B0BB0056B7C6747D_RuntimeMethod_var);
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_55 = ___playable0;
		int32_t L_56 = V_3;
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_57 = PlayableExtensions_GetInput_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m458E510D241640A39A9FFD46A4094623CB6B2D92(L_55, L_56, /*hidden argument*/PlayableExtensions_GetInput_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m458E510D241640A39A9FFD46A4094623CB6B2D92_RuntimeMethod_var);
		double L_58 = PlayableExtensions_GetDuration_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m3557C19B4048EF5C9E875572F0E47D5EFB8E8E75(L_57, /*hidden argument*/PlayableExtensions_GetDuration_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m3557C19B4048EF5C9E875572F0E47D5EFB8E8E75_RuntimeMethod_var);
		if ((!(((double)L_54) > ((double)((double)((double)L_58/(double)(2.0)))))))
		{
			goto IL_0135;
		}
	}
	{
		// incomingIsA = true;
		V_4 = (bool)1;
	}

IL_0135:
	{
		// if (incomingIsA)
		bool L_59 = V_4;
		if (!L_59)
		{
			goto IL_014b;
		}
	}
	{
		// (clipIndexA, clipIndexB) = (clipIndexB, clipIndexA);
		int32_t L_60 = V_3;
		int32_t L_61 = V_2;
		V_13 = L_61;
		V_2 = L_60;
		int32_t L_62 = V_13;
		V_3 = L_62;
		// weightB = 1 - weightB;
		float L_63 = V_5;
		V_5 = ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_63));
	}

IL_014b:
	{
		// ICinemachineCamera camA = null;
		V_6 = (RuntimeObject*)NULL;
		// if (clipIndexA >= 0)
		int32_t L_64 = V_2;
		if ((((int32_t)L_64) < ((int32_t)0)))
		{
			goto IL_016e;
		}
	}
	{
		// CinemachineShotPlayable shot
		//     = ((ScriptPlayable<CinemachineShotPlayable>)playable.GetInput(clipIndexA)).GetBehaviour();
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_65 = ___playable0;
		int32_t L_66 = V_2;
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_67 = PlayableExtensions_GetInput_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m458E510D241640A39A9FFD46A4094623CB6B2D92(L_65, L_66, /*hidden argument*/PlayableExtensions_GetInput_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m458E510D241640A39A9FFD46A4094623CB6B2D92_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A_il2cpp_TypeInfo_var);
		ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A  L_68 = ScriptPlayable_1_op_Explicit_m8AFDFB2071A6323A8AF5A938EBF5547C28F01652(L_67, /*hidden argument*/ScriptPlayable_1_op_Explicit_m8AFDFB2071A6323A8AF5A938EBF5547C28F01652_RuntimeMethod_var);
		V_14 = L_68;
		CinemachineShotPlayable_t518787FCEF1470A6B42A2A6A72E4AD8D34D8C0CE * L_69 = ScriptPlayable_1_GetBehaviour_mCF976DA4F09705321BC4E47673AAB78F09B913F8((ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A *)(&V_14), /*hidden argument*/ScriptPlayable_1_GetBehaviour_mCF976DA4F09705321BC4E47673AAB78F09B913F8_RuntimeMethod_var);
		// camA = shot.VirtualCamera;
		NullCheck(L_69);
		CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * L_70 = L_69->get_VirtualCamera_0();
		V_6 = L_70;
	}

IL_016e:
	{
		// ICinemachineCamera camB = null;
		V_7 = (RuntimeObject*)NULL;
		// if (clipIndexB >= 0)
		int32_t L_71 = V_3;
		if ((((int32_t)L_71) < ((int32_t)0)))
		{
			goto IL_0191;
		}
	}
	{
		// CinemachineShotPlayable shot
		//     = ((ScriptPlayable<CinemachineShotPlayable>)playable.GetInput(clipIndexB)).GetBehaviour();
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_72 = ___playable0;
		int32_t L_73 = V_3;
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_74 = PlayableExtensions_GetInput_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m458E510D241640A39A9FFD46A4094623CB6B2D92(L_72, L_73, /*hidden argument*/PlayableExtensions_GetInput_TisPlayable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_m458E510D241640A39A9FFD46A4094623CB6B2D92_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A_il2cpp_TypeInfo_var);
		ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A  L_75 = ScriptPlayable_1_op_Explicit_m8AFDFB2071A6323A8AF5A938EBF5547C28F01652(L_74, /*hidden argument*/ScriptPlayable_1_op_Explicit_m8AFDFB2071A6323A8AF5A938EBF5547C28F01652_RuntimeMethod_var);
		V_14 = L_75;
		CinemachineShotPlayable_t518787FCEF1470A6B42A2A6A72E4AD8D34D8C0CE * L_76 = ScriptPlayable_1_GetBehaviour_mCF976DA4F09705321BC4E47673AAB78F09B913F8((ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A *)(&V_14), /*hidden argument*/ScriptPlayable_1_GetBehaviour_mCF976DA4F09705321BC4E47673AAB78F09B913F8_RuntimeMethod_var);
		// camB = shot.VirtualCamera;
		NullCheck(L_76);
		CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * L_77 = L_76->get_VirtualCamera_0();
		V_7 = L_77;
	}

IL_0191:
	{
		// mBrainOverrideId = mBrain.SetCameraOverride(
		//     mBrainOverrideId, camA, camB, weightB, GetDeltaTime(info.deltaTime));
		CinemachineBrain_t5996EACC2FD39294A21090F0FDF2D87257BE54EB * L_78 = __this->get_mBrain_1();
		int32_t L_79 = __this->get_mBrainOverrideId_2();
		RuntimeObject* L_80 = V_6;
		RuntimeObject* L_81 = V_7;
		float L_82 = V_5;
		float L_83 = FrameData_get_deltaTime_m819B2E98971747205F7B8A66044C537FB79C719A((FrameData_t7CF1DA259799AC04363C4CA88947D4EB7E28B38E *)(&___info1), /*hidden argument*/NULL);
		float L_84 = CinemachineMixer_GetDeltaTime_mEA6473C55C1D43106E7F6EF9B15E58955D418A2D(__this, L_83, /*hidden argument*/NULL);
		NullCheck(L_78);
		int32_t L_85 = CinemachineBrain_SetCameraOverride_m77B47E9D9567F4143E21EFE789D9AFDF8167283C(L_78, L_79, L_80, L_81, L_82, L_84, /*hidden argument*/NULL);
		__this->set_mBrainOverrideId_2(L_85);
		// }
		return;
	}
}
// System.Single CinemachineMixer::GetDeltaTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CinemachineMixer_GetDeltaTime_mEA6473C55C1D43106E7F6EF9B15E58955D418A2D (CinemachineMixer_t8EFE2E6576C85DDC174244459CC647BF68D75EC2 * __this, float ___deltaTime0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CinemachineMixer_GetDeltaTime_mEA6473C55C1D43106E7F6EF9B15E58955D418A2D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (mPreviewPlay || Application.isPlaying)
		bool L_0 = __this->get_mPreviewPlay_3();
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		bool L_1 = Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0011;
		}
	}

IL_000f:
	{
		// return deltaTime;
		float L_2 = ___deltaTime0;
		return L_2;
	}

IL_0011:
	{
		// if (TargetPositionCache.CacheMode == TargetPositionCache.Mode.Playback
		//     && TargetPositionCache.HasHurrentTime)
		IL2CPP_RUNTIME_CLASS_INIT(TargetPositionCache_tA9799E434495CE93B39D6A5D6A34BF1604875E42_il2cpp_TypeInfo_var);
		int32_t L_3 = TargetPositionCache_get_CacheMode_m7C4D3FC799E34E324A56B695AC9D6E6844B8725C_inline(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_0026;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TargetPositionCache_tA9799E434495CE93B39D6A5D6A34BF1604875E42_il2cpp_TypeInfo_var);
		bool L_4 = TargetPositionCache_get_HasHurrentTime_m594606DB4749A8EA02668BD3C5E13514C07A15E4(/*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		// return 0;
		return (0.0f);
	}

IL_0026:
	{
		// return -1;
		return (-1.0f);
	}
}
// System.Void CinemachineMixer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineMixer__ctor_m6D2650596B2C17AA89A120A5405F730F795C6286 (CinemachineMixer_t8EFE2E6576C85DDC174244459CC647BF68D75EC2 * __this, const RuntimeMethod* method)
{
	{
		// private int mBrainOverrideId = -1;
		__this->set_mBrainOverrideId_2((-1));
		PlayableBehaviour__ctor_mE96A877D927BEEC8C9368A0673FEAD77A78C35EE(__this, /*hidden argument*/NULL);
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
// System.Void CinemachineMixer_MasterDirectorDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MasterDirectorDelegate__ctor_mAC425F6E2BACE4CC0CB895CD7D1D7B1A18FA8021 (MasterDirectorDelegate_t3B919084EAF5EA2C88943445B34713394E0C4AD6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// UnityEngine.Playables.PlayableDirector CinemachineMixer_MasterDirectorDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2 * MasterDirectorDelegate_Invoke_mCF74487E3728A2208F2D3B6FF93103E0654D5E3E (MasterDirectorDelegate_t3B919084EAF5EA2C88943445B34713394E0C4AD6 * __this, const RuntimeMethod* method)
{
	PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2 * result = NULL;
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
				typedef PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2 * (*FunctionPointerType) (const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2 * (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
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
						result = GenericInterfaceFuncInvoker0< PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2 * >::Invoke(targetMethod, targetThis);
					else
						result = GenericVirtFuncInvoker0< PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2 * >::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						result = VirtFuncInvoker0< PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2 * (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult CinemachineMixer_MasterDirectorDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MasterDirectorDelegate_BeginInvoke_m1603727B115FDA229ECBA49CF54F74DDDA463A36 (MasterDirectorDelegate_t3B919084EAF5EA2C88943445B34713394E0C4AD6 * __this, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// UnityEngine.Playables.PlayableDirector CinemachineMixer_MasterDirectorDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2 * MasterDirectorDelegate_EndInvoke_m5AC97662C1EFCC5BD15E4CE9C8805C1123C2450C (MasterDirectorDelegate_t3B919084EAF5EA2C88943445B34713394E0C4AD6 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2 *)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CinemachineRecomposer::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineRecomposer_Reset_m0BCA3AA5476D013AFD2D89A153642CCFE0D27E3B (CinemachineRecomposer_tF064BE416E48B7EF8577A863C748B35C1A0E48FD * __this, const RuntimeMethod* method)
{
	{
		// m_ApplyAfter = CinemachineCore.Stage.Finalize;
		__this->set_m_ApplyAfter_7(3);
		// m_Tilt = 0;
		__this->set_m_Tilt_8((0.0f));
		// m_Pan = 0;
		__this->set_m_Pan_9((0.0f));
		// m_Dutch = 0;
		__this->set_m_Dutch_10((0.0f));
		// m_ZoomScale = 1;
		__this->set_m_ZoomScale_11((1.0f));
		// m_FollowAttachment = 1;
		__this->set_m_FollowAttachment_12((1.0f));
		// m_LookAtAttachment = 1;
		__this->set_m_LookAtAttachment_13((1.0f));
		// }
		return;
	}
}
// System.Void CinemachineRecomposer::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineRecomposer_OnValidate_m22401285E4DCB06E90E12410C7F4ACB30A81EF73 (CinemachineRecomposer_tF064BE416E48B7EF8577A863C748B35C1A0E48FD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CinemachineRecomposer_OnValidate_m22401285E4DCB06E90E12410C7F4ACB30A81EF73_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_ZoomScale = Mathf.Max(0.01f, m_ZoomScale);
		float L_0 = __this->get_m_ZoomScale_11();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_1 = Mathf_Max_m670AE0EC1B09ED1A56FF9606B0F954670319CB65((0.01f), L_0, /*hidden argument*/NULL);
		__this->set_m_ZoomScale_11(L_1);
		// m_FollowAttachment = Mathf.Clamp01(m_FollowAttachment);
		float L_2 = __this->get_m_FollowAttachment_12();
		float L_3 = Mathf_Clamp01_m1E5F736941A7E6DC4DBCA88A1E38FE9FBFE0C42B(L_2, /*hidden argument*/NULL);
		__this->set_m_FollowAttachment_12(L_3);
		// m_LookAtAttachment = Mathf.Clamp01(m_LookAtAttachment);
		float L_4 = __this->get_m_LookAtAttachment_13();
		float L_5 = Mathf_Clamp01_m1E5F736941A7E6DC4DBCA88A1E38FE9FBFE0C42B(L_4, /*hidden argument*/NULL);
		__this->set_m_LookAtAttachment_13(L_5);
		// }
		return;
	}
}
// System.Void CinemachineRecomposer::PrePipelineMutateCameraStateCallback(Cinemachine.CinemachineVirtualCameraBase,Cinemachine.CameraState&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineRecomposer_PrePipelineMutateCameraStateCallback_mA5E2B2DEEA117854554E6A4B31F2ADB010CBDC97 (CinemachineRecomposer_tF064BE416E48B7EF8577A863C748B35C1A0E48FD * __this, CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * ___vcam0, CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * ___curState1, float ___deltaTime2, const RuntimeMethod* method)
{
	{
		// vcam.FollowTargetAttachment = m_FollowAttachment;
		CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * L_0 = ___vcam0;
		float L_1 = __this->get_m_FollowAttachment_12();
		NullCheck(L_0);
		CinemachineVirtualCameraBase_set_FollowTargetAttachment_mF7DCDD0C1EAD8B1ADCFA58DA84C140C304E3C937_inline(L_0, L_1, /*hidden argument*/NULL);
		// vcam.LookAtTargetAttachment = m_LookAtAttachment;
		CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * L_2 = ___vcam0;
		float L_3 = __this->get_m_LookAtAttachment_13();
		NullCheck(L_2);
		CinemachineVirtualCameraBase_set_LookAtTargetAttachment_mF4C1319B7CFCB69F54DC8FA1114A17C704EB7F12_inline(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CinemachineRecomposer::PostPipelineStageCallback(Cinemachine.CinemachineVirtualCameraBase,Cinemachine.CinemachineCore_Stage,Cinemachine.CameraState&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineRecomposer_PostPipelineStageCallback_m6571EAB849AE1FB94A5019D2E766C088073D98D7 (CinemachineRecomposer_tF064BE416E48B7EF8577A863C748B35C1A0E48FD * __this, CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * ___vcam0, int32_t ___stage1, CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * ___state2, float ___deltaTime3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CinemachineRecomposer_PostPipelineStageCallback_m6571EAB849AE1FB94A5019D2E766C088073D98D7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (stage == m_ApplyAfter)
		int32_t L_0 = ___stage1;
		int32_t L_1 = __this->get_m_ApplyAfter_7();
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_00a5;
		}
	}
	{
		// var lens = state.Lens;
		CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * L_2 = ___state2;
		LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC  L_3 = CameraState_get_Lens_m87EB12E38DA5AD3B2DB3C55E727E58C7D3162AF6_inline((CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 *)L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// var qTilted = state.RawOrientation * Quaternion.AngleAxis(m_Tilt, Vector3.right);
		CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * L_4 = ___state2;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_5 = CameraState_get_RawOrientation_mEB165F5AB11D2EE2BCD0D9797103539EEA297623_inline((CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 *)L_4, /*hidden argument*/NULL);
		float L_6 = __this->get_m_Tilt_8();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_get_right_m6DD9559CA0C75BBA42D9140021C4C2A9AAA9B3F5(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_8 = Quaternion_AngleAxis_m07DACF59F0403451DABB9BC991C53EE3301E88B0(L_6, L_7, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_9 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_5, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		// var qDesired = Quaternion.AngleAxis(m_Pan, state.ReferenceUp) * qTilted;
		float L_10 = __this->get_m_Pan_9();
		CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * L_11 = ___state2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = CameraState_get_ReferenceUp_mC19FC2F8C4846C140CC7EBE45C16DD07DEA9809B_inline((CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 *)L_11, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_13 = Quaternion_AngleAxis_m07DACF59F0403451DABB9BC991C53EE3301E88B0(L_10, L_12, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_14 = V_1;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_15 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_13, L_14, /*hidden argument*/NULL);
		V_2 = L_15;
		// state.OrientationCorrection = Quaternion.Inverse(state.CorrectedOrientation) * qDesired;
		CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * L_16 = ___state2;
		CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * L_17 = ___state2;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_18 = CameraState_get_CorrectedOrientation_m34E9DD430137D2B017C560027AF7B3632B2A3DAC((CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 *)L_17, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_19 = Quaternion_Inverse_mC3A78571A826F05CE179637E675BD25F8B203E0C(L_18, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_20 = V_2;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_21 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_19, L_20, /*hidden argument*/NULL);
		CameraState_set_OrientationCorrection_m1D4C1A494488F9877416DC7246575D2FA62B75F9_inline((CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 *)L_16, L_21, /*hidden argument*/NULL);
		// lens.Dutch += m_Dutch;
		float* L_22 = (&V_0)->get_address_of_Dutch_5();
		float* L_23 = L_22;
		float L_24 = *((float*)L_23);
		float L_25 = __this->get_m_Dutch_10();
		*((float*)L_23) = (float)((float)il2cpp_codegen_add((float)L_24, (float)L_25));
		// if (m_ZoomScale != 1)
		float L_26 = __this->get_m_ZoomScale_11();
		if ((((float)L_26) == ((float)(1.0f))))
		{
			goto IL_009e;
		}
	}
	{
		// lens.OrthographicSize *= m_ZoomScale;
		float* L_27 = (&V_0)->get_address_of_OrthographicSize_2();
		float* L_28 = L_27;
		float L_29 = *((float*)L_28);
		float L_30 = __this->get_m_ZoomScale_11();
		*((float*)L_28) = (float)((float)il2cpp_codegen_multiply((float)L_29, (float)L_30));
		// lens.FieldOfView *= m_ZoomScale;
		float* L_31 = (&V_0)->get_address_of_FieldOfView_1();
		float* L_32 = L_31;
		float L_33 = *((float*)L_32);
		float L_34 = __this->get_m_ZoomScale_11();
		*((float*)L_32) = (float)((float)il2cpp_codegen_multiply((float)L_33, (float)L_34));
	}

IL_009e:
	{
		// state.Lens = lens;
		CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * L_35 = ___state2;
		LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC  L_36 = V_0;
		CameraState_set_Lens_m5425E9638FC8D57DBBABBC48D48266C482F8ABF8_inline((CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 *)L_35, L_36, /*hidden argument*/NULL);
	}

IL_00a5:
	{
		// }
		return;
	}
}
// System.Void CinemachineRecomposer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineRecomposer__ctor_m967AA6CF0D901DC5E535633751C9ED84D2C2B351 (CinemachineRecomposer_tF064BE416E48B7EF8577A863C748B35C1A0E48FD * __this, const RuntimeMethod* method)
{
	{
		CinemachineExtension__ctor_mF3457052C6CEDAB03B20CFBDF3C9760307CC68DC(__this, /*hidden argument*/NULL);
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
// UnityEngine.Playables.Playable CinemachineShot::CreatePlayable(UnityEngine.Playables.PlayableGraph,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  CinemachineShot_CreatePlayable_m9FF5653D04CAFD839568D784D68DDE4F63C1A04F (CinemachineShot_tD3D7C77FC8883876C78322509579E70D4ABFE1D5 * __this, PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  ___graph0, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___owner1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CinemachineShot_CreatePlayable_m9FF5653D04CAFD839568D784D68DDE4F63C1A04F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var playable = ScriptPlayable<CinemachineShotPlayable>.Create(graph);
		PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  L_0 = ___graph0;
		IL2CPP_RUNTIME_CLASS_INIT(ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A_il2cpp_TypeInfo_var);
		ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A  L_1 = ScriptPlayable_1_Create_mF1204C0279C018CD6130BBFFA0F9D3E5CFA026D3(L_0, 0, /*hidden argument*/ScriptPlayable_1_Create_mF1204C0279C018CD6130BBFFA0F9D3E5CFA026D3_RuntimeMethod_var);
		V_0 = L_1;
		// playable.GetBehaviour().VirtualCamera = VirtualCamera.Resolve(graph.GetResolver());
		CinemachineShotPlayable_t518787FCEF1470A6B42A2A6A72E4AD8D34D8C0CE * L_2 = ScriptPlayable_1_GetBehaviour_mCF976DA4F09705321BC4E47673AAB78F09B913F8((ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A *)(&V_0), /*hidden argument*/ScriptPlayable_1_GetBehaviour_mCF976DA4F09705321BC4E47673AAB78F09B913F8_RuntimeMethod_var);
		ExposedReference_1_t5B2C0E7B1795AC60AFEAC5228425E7234124855F * L_3 = __this->get_address_of_VirtualCamera_5();
		RuntimeObject* L_4 = PlayableGraph_GetResolver_m52F92B131B65F7412D220BB853C562C5983E884E((PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA *)(&___graph0), /*hidden argument*/NULL);
		CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * L_5 = ExposedReference_1_Resolve_m97A5CBAEBA1062ED36BF724510A76204AF114E74((ExposedReference_1_t5B2C0E7B1795AC60AFEAC5228425E7234124855F *)L_3, L_4, /*hidden argument*/ExposedReference_1_Resolve_m97A5CBAEBA1062ED36BF724510A76204AF114E74_RuntimeMethod_var);
		NullCheck(L_2);
		L_2->set_VirtualCamera_0(L_5);
		// return playable;
		ScriptPlayable_1_t4D888B14B92C91697121492D9FA08254C5F4E54A  L_6 = V_0;
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_7 = ScriptPlayable_1_op_Implicit_m9388F54AB0598505CA6ED126475CB8DC2172407B(L_6, /*hidden argument*/ScriptPlayable_1_op_Implicit_m9388F54AB0598505CA6ED126475CB8DC2172407B_RuntimeMethod_var);
		return L_7;
	}
}
// System.Void CinemachineShot::GatherProperties(UnityEngine.Playables.PlayableDirector,UnityEngine.Timeline.IPropertyCollector)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineShot_GatherProperties_m503ED5DE1E71FCCCAACE2E6DE385B1179CBA66EB (CinemachineShot_tD3D7C77FC8883876C78322509579E70D4ABFE1D5 * __this, PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2 * ___director0, RuntimeObject* ___driver1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CinemachineShot_GatherProperties_m503ED5DE1E71FCCCAACE2E6DE385B1179CBA66EB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// driver.AddFromName<Transform>("m_LocalPosition.x");
		RuntimeObject* L_0 = ___driver1;
		NullCheck(L_0);
		GenericInterfaceActionInvoker1< String_t* >::Invoke(IPropertyCollector_AddFromName_TisTransform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_mDFC2D7B7B2E4DA5F6BDB273CCEE651714E599468_RuntimeMethod_var, L_0, _stringLiteral76F5995D7A1D434E1D7C4046772BDE3F81E26ADA);
		// driver.AddFromName<Transform>("m_LocalPosition.y");
		RuntimeObject* L_1 = ___driver1;
		NullCheck(L_1);
		GenericInterfaceActionInvoker1< String_t* >::Invoke(IPropertyCollector_AddFromName_TisTransform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_mDFC2D7B7B2E4DA5F6BDB273CCEE651714E599468_RuntimeMethod_var, L_1, _stringLiteral20B7AF975FE61D31242708B325C2EBE54C427D42);
		// driver.AddFromName<Transform>("m_LocalPosition.z");
		RuntimeObject* L_2 = ___driver1;
		NullCheck(L_2);
		GenericInterfaceActionInvoker1< String_t* >::Invoke(IPropertyCollector_AddFromName_TisTransform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_mDFC2D7B7B2E4DA5F6BDB273CCEE651714E599468_RuntimeMethod_var, L_2, _stringLiteralCC357B8329982D47F9D2DAC70F02E7F8E8217DD0);
		// driver.AddFromName<Transform>("m_LocalRotation.x");
		RuntimeObject* L_3 = ___driver1;
		NullCheck(L_3);
		GenericInterfaceActionInvoker1< String_t* >::Invoke(IPropertyCollector_AddFromName_TisTransform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_mDFC2D7B7B2E4DA5F6BDB273CCEE651714E599468_RuntimeMethod_var, L_3, _stringLiteral25A7D94AE338306D36C6374758F830F411BC7709);
		// driver.AddFromName<Transform>("m_LocalRotation.y");
		RuntimeObject* L_4 = ___driver1;
		NullCheck(L_4);
		GenericInterfaceActionInvoker1< String_t* >::Invoke(IPropertyCollector_AddFromName_TisTransform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_mDFC2D7B7B2E4DA5F6BDB273CCEE651714E599468_RuntimeMethod_var, L_4, _stringLiteralD0BDB1A683AF21C4D3907C91B62158B7170DC94B);
		// driver.AddFromName<Transform>("m_LocalRotation.z");
		RuntimeObject* L_5 = ___driver1;
		NullCheck(L_5);
		GenericInterfaceActionInvoker1< String_t* >::Invoke(IPropertyCollector_AddFromName_TisTransform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_mDFC2D7B7B2E4DA5F6BDB273CCEE651714E599468_RuntimeMethod_var, L_5, _stringLiteral7DE47ED25C8CD4D0D230E6261B3C1BE71F746BD6);
		// driver.AddFromName<Transform>("m_LocalRotation.w");
		RuntimeObject* L_6 = ___driver1;
		NullCheck(L_6);
		GenericInterfaceActionInvoker1< String_t* >::Invoke(IPropertyCollector_AddFromName_TisTransform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_mDFC2D7B7B2E4DA5F6BDB273CCEE651714E599468_RuntimeMethod_var, L_6, _stringLiteral9A785CD4972BE86C50E73451FBD17C50E9A61609);
		// driver.AddFromName<Camera>("field of view");
		RuntimeObject* L_7 = ___driver1;
		NullCheck(L_7);
		GenericInterfaceActionInvoker1< String_t* >::Invoke(IPropertyCollector_AddFromName_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_m947A59E8BC6D05E58F58A13170DEAE422D5EE674_RuntimeMethod_var, L_7, _stringLiteralD8EE6A18D5B371A364BE13F498C76E11E321DECB);
		// driver.AddFromName<Camera>("near clip plane");
		RuntimeObject* L_8 = ___driver1;
		NullCheck(L_8);
		GenericInterfaceActionInvoker1< String_t* >::Invoke(IPropertyCollector_AddFromName_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_m947A59E8BC6D05E58F58A13170DEAE422D5EE674_RuntimeMethod_var, L_8, _stringLiteral9975DAF0085BA0D080E112D87C20E40CD439A2CC);
		// driver.AddFromName<Camera>("far clip plane");
		RuntimeObject* L_9 = ___driver1;
		NullCheck(L_9);
		GenericInterfaceActionInvoker1< String_t* >::Invoke(IPropertyCollector_AddFromName_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_m947A59E8BC6D05E58F58A13170DEAE422D5EE674_RuntimeMethod_var, L_9, _stringLiteralAEEEC79135C627C521C9AF016C69BE1561778B7C);
		// }
		return;
	}
}
// System.Void CinemachineShot::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineShot__ctor_mE8034DC1F44E98008686FE5F5B9B09B0EF40E574 (CinemachineShot_tD3D7C77FC8883876C78322509579E70D4ABFE1D5 * __this, const RuntimeMethod* method)
{
	{
		PlayableAsset__ctor_m669F459CFACFE65873346E428F206C457B488167(__this, /*hidden argument*/NULL);
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
// System.Boolean CinemachineShotPlayable::get_IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CinemachineShotPlayable_get_IsValid_mB1F51FF9816FBC56D680EB7F47919C5C69C35331 (CinemachineShotPlayable_t518787FCEF1470A6B42A2A6A72E4AD8D34D8C0CE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CinemachineShotPlayable_get_IsValid_mB1F51FF9816FBC56D680EB7F47919C5C69C35331_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool IsValid { get { return VirtualCamera != null; } }
		CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * L_0 = __this->get_VirtualCamera_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void CinemachineShotPlayable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineShotPlayable__ctor_mA942BB3C8DF3156FCB5C7E7BB8F82B3719336D5B (CinemachineShotPlayable_t518787FCEF1470A6B42A2A6A72E4AD8D34D8C0CE * __this, const RuntimeMethod* method)
{
	{
		PlayableBehaviour__ctor_mE96A877D927BEEC8C9368A0673FEAD77A78C35EE(__this, /*hidden argument*/NULL);
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
// System.Void CinemachineTouchInputMapper::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineTouchInputMapper_Start_m15388C86B79D1CA2833E5408D1CA2151519F5424 (CinemachineTouchInputMapper_tFBE56B48653FF45E533FC1C63DDB5FB930192815 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CinemachineTouchInputMapper_Start_m15388C86B79D1CA2833E5408D1CA2151519F5424_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CinemachineCore.GetInputAxis = GetInputAxis;
		AxisInputDelegate_t5352DB1BE196BC488C6BBD6FE1F0541CA8A887CE * L_0 = (AxisInputDelegate_t5352DB1BE196BC488C6BBD6FE1F0541CA8A887CE *)il2cpp_codegen_object_new(AxisInputDelegate_t5352DB1BE196BC488C6BBD6FE1F0541CA8A887CE_il2cpp_TypeInfo_var);
		AxisInputDelegate__ctor_m78B42AB90C54B8EF03079E7FBE1A1D8E56DD86A2(L_0, __this, (intptr_t)((intptr_t)CinemachineTouchInputMapper_GetInputAxis_m7A2342D7913F4BF3711C35E69AD6F61FBCD37A37_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C_il2cpp_TypeInfo_var);
		((CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C_StaticFields*)il2cpp_codegen_static_fields_for(CinemachineCore_tF9998487B8A4666E930D90EA142C9C46A04E996C_il2cpp_TypeInfo_var))->set_GetInputAxis_4(L_0);
		// }
		return;
	}
}
// System.Single CinemachineTouchInputMapper::GetInputAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CinemachineTouchInputMapper_GetInputAxis_m7A2342D7913F4BF3711C35E69AD6F61FBCD37A37 (CinemachineTouchInputMapper_tFBE56B48653FF45E533FC1C63DDB5FB930192815 * __this, String_t* ___axisName0, const RuntimeMethod* method)
{
	{
		// if (Input.touchCount > 0)
		int32_t L_0 = Input_get_touchCount_m497E19AA4FA22DB659F631B20FAEF65572D1B44E(/*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		// if (axisName == TouchXInputMapTo)
		String_t* L_1 = ___axisName0;
		String_t* L_2 = __this->get_TouchXInputMapTo_6();
		bool L_3 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		// return Input.touches[0].deltaPosition.x / TouchSensitivityX;
		TouchU5BU5D_t0207B72FD95EF1F56E7A6C9F0A42896B03D2BD5D* L_4 = Input_get_touches_mD31418E8B2487DBC9641A15677B41B459859011A(/*hidden argument*/NULL);
		NullCheck(L_4);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_5 = Touch_get_deltaPosition_m4AAD6521D88FE10B3786039892B1BB9438ED2D64((Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8 *)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), /*hidden argument*/NULL);
		float L_6 = L_5.get_x_0();
		float L_7 = __this->get_TouchSensitivityX_4();
		return ((float)((float)L_6/(float)L_7));
	}

IL_0033:
	{
		// if (axisName == TouchYInputMapTo)
		String_t* L_8 = ___axisName0;
		String_t* L_9 = __this->get_TouchYInputMapTo_7();
		bool L_10 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_005e;
		}
	}
	{
		// return Input.touches[0].deltaPosition.y / TouchSensitivityY;
		TouchU5BU5D_t0207B72FD95EF1F56E7A6C9F0A42896B03D2BD5D* L_11 = Input_get_touches_mD31418E8B2487DBC9641A15677B41B459859011A(/*hidden argument*/NULL);
		NullCheck(L_11);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_12 = Touch_get_deltaPosition_m4AAD6521D88FE10B3786039892B1BB9438ED2D64((Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8 *)((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), /*hidden argument*/NULL);
		float L_13 = L_12.get_y_1();
		float L_14 = __this->get_TouchSensitivityY_5();
		return ((float)((float)L_13/(float)L_14));
	}

IL_005e:
	{
		// return Input.GetAxis(axisName);
		String_t* L_15 = ___axisName0;
		float L_16 = Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387(L_15, /*hidden argument*/NULL);
		return L_16;
	}
}
// System.Void CinemachineTouchInputMapper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineTouchInputMapper__ctor_mD73B04A8718E3A899F4359C9CD4ACA08E9D1305E (CinemachineTouchInputMapper_tFBE56B48653FF45E533FC1C63DDB5FB930192815 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CinemachineTouchInputMapper__ctor_mD73B04A8718E3A899F4359C9CD4ACA08E9D1305E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float TouchSensitivityX = 10f;
		__this->set_TouchSensitivityX_4((10.0f));
		// public float TouchSensitivityY = 10f;
		__this->set_TouchSensitivityY_5((10.0f));
		// public string TouchXInputMapTo = "Mouse X";
		__this->set_TouchXInputMapTo_6(_stringLiteral294D359ECE148A430F19981912277E5154CA19E0);
		// public string TouchYInputMapTo = "Mouse Y";
		__this->set_TouchYInputMapTo_7(_stringLiteral1E88AB05D76FF253F292B74866D32460BB3836E2);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// UnityEngine.Playables.Playable CinemachineTrack::CreateTrackMixer(UnityEngine.Playables.PlayableGraph,UnityEngine.GameObject,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  CinemachineTrack_CreateTrackMixer_m879E9C56FBCAE3C28F1BAD6CF247A904BBDAC1A7 (CinemachineTrack_t6B531D379A33136302768D59460F3E8B1AC6D79D * __this, PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  ___graph0, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___go1, int32_t ___inputCount2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CinemachineTrack_CreateTrackMixer_m879E9C56FBCAE3C28F1BAD6CF247A904BBDAC1A7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var mixer = ScriptPlayable<CinemachineMixer>.Create(graph);
		PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  L_0 = ___graph0;
		IL2CPP_RUNTIME_CLASS_INIT(ScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B_il2cpp_TypeInfo_var);
		ScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B  L_1 = ScriptPlayable_1_Create_mDE5946292E4A4165D00B39EACF469071ADA73189(L_0, 0, /*hidden argument*/ScriptPlayable_1_Create_mDE5946292E4A4165D00B39EACF469071ADA73189_RuntimeMethod_var);
		// mixer.SetInputCount(inputCount);
		ScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B  L_2 = L_1;
		int32_t L_3 = ___inputCount2;
		PlayableExtensions_SetInputCount_TisScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B_m847F542F39A4F6792F586FE306664FB4E37E649F(L_2, L_3, /*hidden argument*/PlayableExtensions_SetInputCount_TisScriptPlayable_1_t2B535982C31F4E2F36EDFD3D664C82AB0A50037B_m847F542F39A4F6792F586FE306664FB4E37E649F_RuntimeMethod_var);
		// return mixer;
		Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  L_4 = ScriptPlayable_1_op_Implicit_m6F1FE1C8EFB32C6564EAB7C8E44FB9DF276102D8(L_2, /*hidden argument*/ScriptPlayable_1_op_Implicit_m6F1FE1C8EFB32C6564EAB7C8E44FB9DF276102D8_RuntimeMethod_var);
		return L_4;
	}
}
// System.Void CinemachineTrack::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineTrack__ctor_m0C7D2958AD95C45518C9BEAB9418AEB192B0DBAE (CinemachineTrack_t6B531D379A33136302768D59460F3E8B1AC6D79D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CinemachineTrack__ctor_m0C7D2958AD95C45518C9BEAB9418AEB192B0DBAE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TrackAsset_tEC3A0C099449162C983BFF3C1A64084B2D3CDA9D_il2cpp_TypeInfo_var);
		TrackAsset__ctor_mB57EE24087931D858028EE79112A1FABDC95E5C6(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  CameraState_get_RawOrientation_mEB165F5AB11D2EE2BCD0D9797103539EEA297623_inline (CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * __this, const RuntimeMethod* method)
{
	{
		// public Quaternion RawOrientation { get; set; }
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = __this->get_U3CRawOrientationU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  CameraState_get_ReferenceLookAt_m3FCCFB59361130B202C526D5F88FA11E1CC796EC_inline (CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 ReferenceLookAt { get; set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_U3CReferenceLookAtU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  CameraState_get_ReferenceUp_mC19FC2F8C4846C140CC7EBE45C16DD07DEA9809B_inline (CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 ReferenceUp { get; set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_U3CReferenceUpU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  CameraState_get_PositionCorrection_m81476CD9BBC93E1AE8A47E6BA8D6E08F112D1CFD_inline (CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 PositionCorrection { get; set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_U3CPositionCorrectionU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void CameraState_set_PositionCorrection_m2CEDE7298CE80A5E020285AD21C2F39353563CB8_inline (CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 PositionCorrection { get; set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		__this->set_U3CPositionCorrectionU3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void CameraState_set_ReferenceLookAt_m33C644687C407C4208346D59D6DCFA911E2B5588_inline (CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 ReferenceLookAt { get; set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		__this->set_U3CReferenceLookAtU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void CameraState_set_RawOrientation_m366411C5A4E24AAB88BAF5DDC5174397F099B976_inline (CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method)
{
	{
		// public Quaternion RawOrientation { get; set; }
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = ___value0;
		__this->set_U3CRawOrientationU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t TargetPositionCache_get_CacheMode_m7C4D3FC799E34E324A56B695AC9D6E6844B8725C_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TargetPositionCache_get_CacheMode_m7C4D3FC799E34E324A56B695AC9D6E6844B8725CCinemachine3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => m_CacheMode;
		IL2CPP_RUNTIME_CLASS_INIT(TargetPositionCache_tA9799E434495CE93B39D6A5D6A34BF1604875E42_il2cpp_TypeInfo_var);
		int32_t L_0 = ((TargetPositionCache_tA9799E434495CE93B39D6A5D6A34BF1604875E42_StaticFields*)il2cpp_codegen_static_fields_for(TargetPositionCache_tA9799E434495CE93B39D6A5D6A34BF1604875E42_il2cpp_TypeInfo_var))->get_m_CacheMode_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void CinemachineVirtualCameraBase_set_FollowTargetAttachment_mF7DCDD0C1EAD8B1ADCFA58DA84C140C304E3C937_inline (CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float FollowTargetAttachment { get; set; }
		float L_0 = ___value0;
		__this->set_U3CFollowTargetAttachmentU3Ek__BackingField_11(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void CinemachineVirtualCameraBase_set_LookAtTargetAttachment_mF4C1319B7CFCB69F54DC8FA1114A17C704EB7F12_inline (CinemachineVirtualCameraBase_t654338913BD33E53DE4B401067876DFD098B93FD * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float LookAtTargetAttachment { get; set; }
		float L_0 = ___value0;
		__this->set_U3CLookAtTargetAttachmentU3Ek__BackingField_12(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC  CameraState_get_Lens_m87EB12E38DA5AD3B2DB3C55E727E58C7D3162AF6_inline (CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * __this, const RuntimeMethod* method)
{
	{
		// public LensSettings Lens { get; set; }
		LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC  L_0 = __this->get_U3CLensU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void CameraState_set_OrientationCorrection_m1D4C1A494488F9877416DC7246575D2FA62B75F9_inline (CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method)
{
	{
		// public Quaternion OrientationCorrection { get; set; }
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = ___value0;
		__this->set_U3COrientationCorrectionU3Ek__BackingField_9(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void CameraState_set_Lens_m5425E9638FC8D57DBBABBC48D48266C482F8ABF8_inline (CameraState_t308F3A442112B7464D2B21A417D325662E3399B1 * __this, LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC  ___value0, const RuntimeMethod* method)
{
	{
		// public LensSettings Lens { get; set; }
		LensSettings_tB9EF0C940E2889C6750565CEAA61CD62A81811AC  L_0 = ___value0;
		__this->set_U3CLensU3Ek__BackingField_0(L_0);
		return;
	}
}
