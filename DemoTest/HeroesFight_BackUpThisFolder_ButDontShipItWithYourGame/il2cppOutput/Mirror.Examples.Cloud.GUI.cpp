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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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

// Mirror.ClientDataReceivedEvent
struct ClientDataReceivedEvent_tE88A959A61C017E5020AEE7F285778FC107B1F6C;
// Mirror.Cloud.ApiConnector
struct ApiConnector_tE4CB8EB0B23BE8F251872D03EE1992BE6A024E94;
// Mirror.Cloud.Example.ApiUpdater
struct ApiUpdater_t9987332E5573470366A2872D477C072EB184A669;
// Mirror.Cloud.Example.NetworkManagerListServer
struct NetworkManagerListServer_t8B70D286CD2A4E966CDE10203D4720993CFBFCF7;
// Mirror.Cloud.Example.NetworkManagerListServer/OnPlayerListChanged
struct OnPlayerListChanged_tA8004710D81957B7920259B79EE6014994A802BA;
// Mirror.Cloud.Example.QuickListServerDebug
struct QuickListServerDebug_tE4832885D98C21B438A332BBF58DCF9195C55DBC;
// Mirror.Cloud.Example.ServerListManager
struct ServerListManager_t83F3E1EE92996F8AF498DFCE86D03CE081379BC0;
// Mirror.Cloud.Example.ServerListUI
struct ServerListUI_t5DDE2460D1DB2D06CEC56B428B5850C9C363C7D7;
// Mirror.Cloud.Example.ServerListUIItem
struct ServerListUIItem_t7741F4958B2713690D4DC1B33E90664EA0563D68;
// Mirror.Cloud.Example.ServerListUIItem[]
struct ServerListUIItemU5BU5D_tBF8D221B45AE241E490F322CC68C3A2195720AD5;
// Mirror.Cloud.Examples.InstantiateNetworkManager
struct InstantiateNetworkManager_tE4DCAE0812FCF13BCFF8368590862847B8352B24;
// Mirror.Cloud.IRequestCreator
struct IRequestCreator_tC007F9CFC0B706C48CE2E2EB0AC1B1D72865910C;
// Mirror.Cloud.ListServerService.IListServerClientApi
struct IListServerClientApi_tE68BFA505AFCB5825CAFE0770947AE84FF406732;
// Mirror.Cloud.ListServerService.IListServerServerApi
struct IListServerServerApi_tB249373A4DA2D8820B7DB77B262589E0A64B2148;
// Mirror.Cloud.ListServerService.KeyValue[]
struct KeyValueU5BU5D_t8A54586A8E8123CB597B3B236AD57B074B80568C;
// Mirror.Cloud.ListServerService.ListServer
struct ListServer_t9A599385F738F9714121265D8EC5245E5FE842D4;
// Mirror.Cloud.ListServerService.ServerJson[]
struct ServerJsonU5BU5D_t3A4F7B269FEF3032ADD60A1DDB7A19EC7715BE77;
// Mirror.Cloud.ServerListEvent
struct ServerListEvent_tF79EB2913B403BB0E9E756BE618A32BC1BE2856F;
// Mirror.Examples.Pong.QuitButtonHUD
struct QuitButtonHUD_tBD87B119A1CFECA7513AC24D2C7C04A145E81C38;
// Mirror.NetworkAuthenticator
struct NetworkAuthenticator_t11F7D6E69CFAFD18F3EDDEEC342024139A97E80D;
// Mirror.NetworkConnection
struct NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553;
// Mirror.NetworkConnectionToClient
struct NetworkConnectionToClient_tE916DCEABAD1E8B9B9CF24EC005ABC619FD07CBD;
// Mirror.NetworkIdentity
struct NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870;
// Mirror.NetworkManager
struct NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE;
// Mirror.ServerDataReceivedEvent
struct ServerDataReceivedEvent_t9D74CC04C46DACC20B0D2618566B03B4E92A4B15;
// Mirror.Transport
struct Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195;
// Mirror.UnityEventException
struct UnityEventException_tC51123DDAD93C3B3E6F3C32395828A4FEA1CAC74;
// Mirror.UnityEventInt
struct UnityEventInt_t25605BA0F5D789946A94CBAF118716E9FF3EE69A;
// Mirror.UnityEventIntException
struct UnityEventIntException_t4C17526221B8BEEAA11C8D30DB004ACE4F1BEFF4;
// System.Action
struct Action_t591D2A86165F896B4B800BB5C25CE18672A55579;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,Mirror.NetworkConnectionToClient>[]
struct EntryU5BU5D_tEA668192B4AABBB57806DB2EDB9C444F27CDC4C9;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Mirror.NetworkConnectionToClient>
struct KeyCollection_t7D1DE9740CA58C025849B0598C657303F3D66003;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Mirror.NetworkConnectionToClient>
struct ValueCollection_t9A37AF389AD15FCFFC6633CB331565C269AD5B22;
// System.Collections.Generic.Dictionary`2<System.Int32,Mirror.NetworkConnectionToClient>
struct Dictionary_2_t659A787707DACEAC76CC514E3D5615A24BB43F04;
// System.Collections.Generic.Dictionary`2<System.Int32,Mirror.NetworkMessageDelegate>
struct Dictionary_2_tBE6918CF0F8B42DF6058DADEA9BB7E06185B90A8;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884;
// System.Collections.Generic.HashSet`1<Mirror.NetworkIdentity>
struct HashSet_1_t624AF8F41B938DF2E604818B3C143AA3701821DE;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t7B82AA0F8B96BAAA21E36DDF7A1FE4348BDDBE95;
// System.Collections.Generic.List`1<Mirror.Cloud.Example.ServerListUIItem>
struct List_1_t848A769EBD33E8829AB5D9648E68B9AD338DDF37;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_tE7746C234F913BA0579DAC892E7288A1C7664A0A;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Uri
struct Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E;
// System.Uri/UriInfo
struct UriInfo_t9FCC6BD4EC1EA14D75209E6A35417057BF6EDC5E;
// System.UriParser
struct UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.AsyncOperation
struct AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D;
// UnityEngine.Canvas
struct Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F;
// UnityEngine.Events.UnityAction
struct UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4;
// UnityEngine.Events.UnityAction`1<Mirror.Cloud.ListServerService.ServerCollectionJson>
struct UnityAction_1_tAF5A6E9E11FEBAB4E729286D7A1A127E2F23D283;
// UnityEngine.Events.UnityEvent
struct UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F;
// UnityEngine.GUILayoutOption
struct GUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_tAB2AD0A365DBD2277A04E397AE8E1430A022AF1B;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.ILogger
struct ILogger_t572B66532D8EB6E76240476A788384A26D70866F;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.RectTransform
struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20;
// UnityEngine.Sprite
struct Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198;
// UnityEngine.TextGenerator
struct TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5;
// UnityEngine.UI.Button
struct Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172;
// UnityEngine.UI.FontData
struct FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494;
// UnityEngine.UI.Graphic
struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B;
// UnityEngine.UI.Selectable
struct Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02;
// UnityEngine.UI.Text
struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;

IL2CPP_EXTERN_C RuntimeClass* Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ApiUpdater_t9987332E5573470366A2872D477C072EB184A669_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IListServerClientApi_tE68BFA505AFCB5825CAFE0770947AE84FF406732_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IListServerServerApi_tB249373A4DA2D8820B7DB77B262589E0A64B2148_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILogger_t572B66532D8EB6E76240476A788384A26D70866F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t848A769EBD33E8829AB5D9648E68B9AD338DDF37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogFactory_t12E9885C618CCA261D73F0C152E1923A0942EAF5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkManagerListServer_t8B70D286CD2A4E966CDE10203D4720993CFBFCF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkServer_t8410142130F495DC2B99625046908CE7CDEF5D6A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnPlayerListChanged_tA8004710D81957B7920259B79EE6014994A802BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tAF5A6E9E11FEBAB4E729286D7A1A127E2F23D283_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral178C8304D97FAAA500545453CFA76AA4098DC1F7;
IL2CPP_EXTERN_C String_t* _stringLiteral1A90F6134A15D8079A96DD873A903C3E1224EEAD;
IL2CPP_EXTERN_C String_t* _stringLiteral2A62ABB49FFE4003C0949BDA5BA8493662A104F9;
IL2CPP_EXTERN_C String_t* _stringLiteral2D7DBBDDCEB5C9931F85D11F4A7102A26CBAA36F;
IL2CPP_EXTERN_C String_t* _stringLiteral2E79A8A332B8E1D1EC9E1E7C4F2E6FDD899E5328;
IL2CPP_EXTERN_C String_t* _stringLiteral56E3BADC4E6C5CC95E0EA5A9A878B9BD09F319D4;
IL2CPP_EXTERN_C String_t* _stringLiteral5A3692D6123F48209A6C806541ABE9540AE0B325;
IL2CPP_EXTERN_C String_t* _stringLiteral6D8C956639EA9E418D20983B9E0318D72FB3C15D;
IL2CPP_EXTERN_C String_t* _stringLiteral7D355AAF4AAEC3984FC19677D4229933C9CE8AE4;
IL2CPP_EXTERN_C String_t* _stringLiteralB1A3349612474350DF6690913F1555D784D7BBAA;
IL2CPP_EXTERN_C String_t* _stringLiteralB6589FC6AB0DC82CF12099D1C2D40AB994E8410C;
IL2CPP_EXTERN_C String_t* _stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6;
IL2CPP_EXTERN_C String_t* _stringLiteralE3E82846C32567811615378F30240185871E08E5;
IL2CPP_EXTERN_C String_t* _stringLiteralFF7B5CB14FF264A8234585D866C7A328670ED3E8;
IL2CPP_EXTERN_C const RuntimeMethod* ApiUpdater_ServerStartedHandler_mC1B004475E7A48847A085472D4BE447B0C1466E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ApiUpdater_ServerStoppedHandler_mC627AE023E4BEB774C0D34D5978D05C07BA8D865_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ApiUpdater_onPlayerListChanged_m0AA06B51B25D0A4047348A63A74552251B3CF31D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisGUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6_m2B34681B50F2E0013941920FD3AEB407A6DF659E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisApiConnector_tE4CB8EB0B23BE8F251872D03EE1992BE6A024E94_mBC22125086BC6CBCBEC13F6216D12E2795857026_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_m6FDD246F5EE780619F0E194BBC0FCA724666256D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m64631EDF2A573617D98DA8C6D67962BBD6457E89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mC48ECCEA52C17541020268F6BB73E412B7849A42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m8F370AA128DB8AE4B27495F050CCCDC9AB92FDD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mE20EE28D5065DFBE90C3F213DFF30ABB9201EA55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m0633EDA09BAC80F7D27EE90CDBFBDD3E0221DBA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m40A91E5400DA207B28377172E1F0EC488A42812C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m096DD19D6D329559D0A0EF66753BAC1D92983148_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LogFactory_GetLogger_TisApiUpdater_t9987332E5573470366A2872D477C072EB184A669_m654BFAF73F151FADCAAF2E9081718CF0E5F8BD87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_mE73D9C07E5959C6171ED269C8BF7155572F3DE0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m80F65E1119BB30A5C2E77356F2358CFB972F8DF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mA449173BFED02D33F480D1AE9E5329DAB8C687B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_mC4AB712D7F18E0991E1542CE53F11385E21E7B90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisServerListUIItem_t7741F4958B2713690D4DC1B33E90664EA0563D68_m5DEF0CA0EA63323F4B8DCA62EF1EBBB9168789E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* QuickListServerDebug_ClientApi_onServerListUpdated_mB555B64EE8D8577C449BD5C572968DCEB26DA4D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServerListManager_RefreshButtonHandler_m704E754E0B4DEB378DBBDCD455F28B4EA0EAF64E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServerListManager_StartServerButtonHandler_mE381D46EC363110B54672601E4ADCC7C3000EFCA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServerListUIItem_OnJoinClicked_m6FDA0A5A641BED48446D87D3D3E3436703FAE6B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServerListUI_UpdateList_mB1DF8852C1B42AC05C369CF76956D1DB2F960831_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityAction_1__ctor_m817B292DAD9C8E89F6F6580B20F8C10EAA04491D_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t ApiUpdater_AddServer_m477E8B253ED49C564A0B716BDF9979C0E928CD2B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ApiUpdater_OnDestroy_mF58AEEC46656A255029CC62042355EF86D32BE0F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ApiUpdater_ServerStoppedHandler_mC627AE023E4BEB774C0D34D5978D05C07BA8D865_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ApiUpdater_Start_m206DCB812CE1A7E3C6C628B000280D78EDE6602C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ApiUpdater__cctor_m7F3490CA33CA886C7D350B3EC70D7784252D9111_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ApiUpdater__ctor_m8B4EF74A6441F16D4E6FA398696568C31D0DEC43_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ApiUpdater_onPlayerListChanged_m0AA06B51B25D0A4047348A63A74552251B3CF31D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InstantiateNetworkManager_Awake_mD33550269C8B76C7CDF4A1D0DE56E34C391979ED_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkManagerListServer__ctor_m27F7417919B9E78166EABBA90022821870612195_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkManagerListServer_add_onPlayerListChanged_m6D82ECD3AA231B3558ECCFD7AB8AD6876BC0A29A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkManagerListServer_add_onServerStarted_m83F59AAC09BAF9A2840D99C00006D40C6058C905_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkManagerListServer_add_onServerStopped_m9A3A23F5E7097B6763BFAD7BAD94517D3395B612_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkManagerListServer_get_connectionCount_mCBF495FDFEF70A398E8C10DDB2AE943779A8C730_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkManagerListServer_remove_onPlayerListChanged_m27C03C19DD3AC6DAD2DE6779BE105F0286A5C2B0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkManagerListServer_remove_onServerStarted_m114F99E7562369CB48148D53EF51A6E8FB227EEC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkManagerListServer_remove_onServerStopped_m78811E0A16B5E8719A73415825E60952DAD8F534_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NetworkManager_get_singleton_mF6B934FE2F4D47585A4FC9C60D97B8C0FC641D6AMirror_Examples_Cloud_GUI_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OnPlayerListChanged_BeginInvoke_m3405C94369A88EA9BE1BE2702DE2374296842F4C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t QuickListServerDebug_ClientApi_onServerListUpdated_mB555B64EE8D8577C449BD5C572968DCEB26DA4D7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t QuickListServerDebug_OnGUI_m3B40458C2FB4C0F411A59A604E30E40E9E915D6C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t QuickListServerDebug_Start_m6AD54694D59C3C6D432D053B6E87D13BF8A5E382_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t QuitButtonHUD_OnGUI_m22508BD86C971C2E4AFF5860A337C510D1414F89_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ServerListManager_AddButtonHandlers_mA3B273DFCEE07BB02AFC960BADBCBFC9865F0C21_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ServerListManager_OnDestroy_m1BAD24FBF43B302BB0C727F803B142135699673B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ServerListManager_RefreshButtonHandler_m704E754E0B4DEB378DBBDCD455F28B4EA0EAF64E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ServerListManager_StartServerButtonHandler_mE381D46EC363110B54672601E4ADCC7C3000EFCA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ServerListManager_Start_m3016CEADD5927D2DB39E885325FB0D59C39CF7DD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ServerListUIItem_OnJoinClicked_m6FDA0A5A641BED48446D87D3D3E3436703FAE6B4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ServerListUIItem_Setup_mA6B8A5435909E6883F3A01BDF27C89294154159A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ServerListUIItem__ctor_mC7361D2BEF142977DC5180A330A7B253BE2CF222_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ServerListUI_CreateNewItems_m8D2CDFEF32440CD6F87DE808F44E5F8CA1298F25_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ServerListUI_DeleteOldItems_mC2FDB7ED7184CCD09AF44757ECA0E058570BC505_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ServerListUI_OnValidate_m3B72F1C1CD3948A6AC832CE858D8B9C839C19591_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ServerListUI__ctor_m1AD08EF358E4BD3B1126348B214670E29AF7EBF4_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct KeyValue_t3726E0BF74240F5D98A984D6ED24489F16D77C36_marshaled_com;
struct KeyValue_t3726E0BF74240F5D98A984D6ED24489F16D77C36_marshaled_pinvoke;
struct ServerJson_t0E3B764038B2CAACD0A933F586BE88F112B8EFAB_marshaled_com;
struct ServerJson_t0E3B764038B2CAACD0A933F586BE88F112B8EFAB_marshaled_pinvoke;

struct ServerJsonU5BU5D_t3A4F7B269FEF3032ADD60A1DDB7A19EC7715BE77;
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct GUILayoutOptionU5BU5D_tAB2AD0A365DBD2277A04E397AE8E1430A022AF1B;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t2D8F9E649FD3862CF802F4A66E161178F5E1AF07 
{
public:

public:
};


// System.Object


// Mirror.Cloud.ListServerService.ListServer
struct  ListServer_t9A599385F738F9714121265D8EC5245E5FE842D4  : public RuntimeObject
{
public:
	// Mirror.Cloud.ListServerService.IListServerServerApi Mirror.Cloud.ListServerService.ListServer::ServerApi
	RuntimeObject* ___ServerApi_0;
	// Mirror.Cloud.ListServerService.IListServerClientApi Mirror.Cloud.ListServerService.ListServer::ClientApi
	RuntimeObject* ___ClientApi_1;

public:
	inline static int32_t get_offset_of_ServerApi_0() { return static_cast<int32_t>(offsetof(ListServer_t9A599385F738F9714121265D8EC5245E5FE842D4, ___ServerApi_0)); }
	inline RuntimeObject* get_ServerApi_0() const { return ___ServerApi_0; }
	inline RuntimeObject** get_address_of_ServerApi_0() { return &___ServerApi_0; }
	inline void set_ServerApi_0(RuntimeObject* value)
	{
		___ServerApi_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ServerApi_0), (void*)value);
	}

	inline static int32_t get_offset_of_ClientApi_1() { return static_cast<int32_t>(offsetof(ListServer_t9A599385F738F9714121265D8EC5245E5FE842D4, ___ClientApi_1)); }
	inline RuntimeObject* get_ClientApi_1() const { return ___ClientApi_1; }
	inline RuntimeObject** get_address_of_ClientApi_1() { return &___ClientApi_1; }
	inline void set_ClientApi_1(RuntimeObject* value)
	{
		___ClientApi_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ClientApi_1), (void*)value);
	}
};


// Mirror.NetworkConnection
struct  NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553  : public RuntimeObject
{
public:
	// System.Collections.Generic.HashSet`1<Mirror.NetworkIdentity> Mirror.NetworkConnection::visList
	HashSet_1_t624AF8F41B938DF2E604818B3C143AA3701821DE * ___visList_2;
	// System.Collections.Generic.Dictionary`2<System.Int32,Mirror.NetworkMessageDelegate> Mirror.NetworkConnection::messageHandlers
	Dictionary_2_tBE6918CF0F8B42DF6058DADEA9BB7E06185B90A8 * ___messageHandlers_3;
	// System.Int32 Mirror.NetworkConnection::connectionId
	int32_t ___connectionId_4;
	// System.Boolean Mirror.NetworkConnection::isAuthenticated
	bool ___isAuthenticated_5;
	// System.Object Mirror.NetworkConnection::authenticationData
	RuntimeObject * ___authenticationData_6;
	// System.Boolean Mirror.NetworkConnection::isReady
	bool ___isReady_7;
	// System.Single Mirror.NetworkConnection::lastMessageTime
	float ___lastMessageTime_8;
	// Mirror.NetworkIdentity Mirror.NetworkConnection::<identity>k__BackingField
	NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870 * ___U3CidentityU3Ek__BackingField_9;
	// System.Collections.Generic.HashSet`1<Mirror.NetworkIdentity> Mirror.NetworkConnection::clientOwnedObjects
	HashSet_1_t624AF8F41B938DF2E604818B3C143AA3701821DE * ___clientOwnedObjects_10;
	// System.Boolean Mirror.NetworkConnection::logNetworkMessages
	bool ___logNetworkMessages_11;

public:
	inline static int32_t get_offset_of_visList_2() { return static_cast<int32_t>(offsetof(NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553, ___visList_2)); }
	inline HashSet_1_t624AF8F41B938DF2E604818B3C143AA3701821DE * get_visList_2() const { return ___visList_2; }
	inline HashSet_1_t624AF8F41B938DF2E604818B3C143AA3701821DE ** get_address_of_visList_2() { return &___visList_2; }
	inline void set_visList_2(HashSet_1_t624AF8F41B938DF2E604818B3C143AA3701821DE * value)
	{
		___visList_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___visList_2), (void*)value);
	}

	inline static int32_t get_offset_of_messageHandlers_3() { return static_cast<int32_t>(offsetof(NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553, ___messageHandlers_3)); }
	inline Dictionary_2_tBE6918CF0F8B42DF6058DADEA9BB7E06185B90A8 * get_messageHandlers_3() const { return ___messageHandlers_3; }
	inline Dictionary_2_tBE6918CF0F8B42DF6058DADEA9BB7E06185B90A8 ** get_address_of_messageHandlers_3() { return &___messageHandlers_3; }
	inline void set_messageHandlers_3(Dictionary_2_tBE6918CF0F8B42DF6058DADEA9BB7E06185B90A8 * value)
	{
		___messageHandlers_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___messageHandlers_3), (void*)value);
	}

	inline static int32_t get_offset_of_connectionId_4() { return static_cast<int32_t>(offsetof(NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553, ___connectionId_4)); }
	inline int32_t get_connectionId_4() const { return ___connectionId_4; }
	inline int32_t* get_address_of_connectionId_4() { return &___connectionId_4; }
	inline void set_connectionId_4(int32_t value)
	{
		___connectionId_4 = value;
	}

	inline static int32_t get_offset_of_isAuthenticated_5() { return static_cast<int32_t>(offsetof(NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553, ___isAuthenticated_5)); }
	inline bool get_isAuthenticated_5() const { return ___isAuthenticated_5; }
	inline bool* get_address_of_isAuthenticated_5() { return &___isAuthenticated_5; }
	inline void set_isAuthenticated_5(bool value)
	{
		___isAuthenticated_5 = value;
	}

	inline static int32_t get_offset_of_authenticationData_6() { return static_cast<int32_t>(offsetof(NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553, ___authenticationData_6)); }
	inline RuntimeObject * get_authenticationData_6() const { return ___authenticationData_6; }
	inline RuntimeObject ** get_address_of_authenticationData_6() { return &___authenticationData_6; }
	inline void set_authenticationData_6(RuntimeObject * value)
	{
		___authenticationData_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___authenticationData_6), (void*)value);
	}

	inline static int32_t get_offset_of_isReady_7() { return static_cast<int32_t>(offsetof(NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553, ___isReady_7)); }
	inline bool get_isReady_7() const { return ___isReady_7; }
	inline bool* get_address_of_isReady_7() { return &___isReady_7; }
	inline void set_isReady_7(bool value)
	{
		___isReady_7 = value;
	}

	inline static int32_t get_offset_of_lastMessageTime_8() { return static_cast<int32_t>(offsetof(NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553, ___lastMessageTime_8)); }
	inline float get_lastMessageTime_8() const { return ___lastMessageTime_8; }
	inline float* get_address_of_lastMessageTime_8() { return &___lastMessageTime_8; }
	inline void set_lastMessageTime_8(float value)
	{
		___lastMessageTime_8 = value;
	}

	inline static int32_t get_offset_of_U3CidentityU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553, ___U3CidentityU3Ek__BackingField_9)); }
	inline NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870 * get_U3CidentityU3Ek__BackingField_9() const { return ___U3CidentityU3Ek__BackingField_9; }
	inline NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870 ** get_address_of_U3CidentityU3Ek__BackingField_9() { return &___U3CidentityU3Ek__BackingField_9; }
	inline void set_U3CidentityU3Ek__BackingField_9(NetworkIdentity_tAF8DC51F786E46BE4D50547D2ED10741673A7870 * value)
	{
		___U3CidentityU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidentityU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of_clientOwnedObjects_10() { return static_cast<int32_t>(offsetof(NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553, ___clientOwnedObjects_10)); }
	inline HashSet_1_t624AF8F41B938DF2E604818B3C143AA3701821DE * get_clientOwnedObjects_10() const { return ___clientOwnedObjects_10; }
	inline HashSet_1_t624AF8F41B938DF2E604818B3C143AA3701821DE ** get_address_of_clientOwnedObjects_10() { return &___clientOwnedObjects_10; }
	inline void set_clientOwnedObjects_10(HashSet_1_t624AF8F41B938DF2E604818B3C143AA3701821DE * value)
	{
		___clientOwnedObjects_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clientOwnedObjects_10), (void*)value);
	}

	inline static int32_t get_offset_of_logNetworkMessages_11() { return static_cast<int32_t>(offsetof(NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553, ___logNetworkMessages_11)); }
	inline bool get_logNetworkMessages_11() const { return ___logNetworkMessages_11; }
	inline bool* get_address_of_logNetworkMessages_11() { return &___logNetworkMessages_11; }
	inline void set_logNetworkMessages_11(bool value)
	{
		___logNetworkMessages_11 = value;
	}
};

struct NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553_StaticFields
{
public:
	// UnityEngine.ILogger Mirror.NetworkConnection::logger
	RuntimeObject* ___logger_1;

public:
	inline static int32_t get_offset_of_logger_1() { return static_cast<int32_t>(offsetof(NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553_StaticFields, ___logger_1)); }
	inline RuntimeObject* get_logger_1() const { return ___logger_1; }
	inline RuntimeObject** get_address_of_logger_1() { return &___logger_1; }
	inline void set_logger_1(RuntimeObject* value)
	{
		___logger_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___logger_1), (void*)value);
	}
};


// Mirror.NetworkServer
struct  NetworkServer_t8410142130F495DC2B99625046908CE7CDEF5D6A  : public RuntimeObject
{
public:

public:
};

struct NetworkServer_t8410142130F495DC2B99625046908CE7CDEF5D6A_StaticFields
{
public:
	// UnityEngine.ILogger Mirror.NetworkServer::logger
	RuntimeObject* ___logger_0;
	// System.Boolean Mirror.NetworkServer::initialized
	bool ___initialized_1;
	// System.Int32 Mirror.NetworkServer::maxConnections
	int32_t ___maxConnections_2;
	// Mirror.NetworkConnectionToClient Mirror.NetworkServer::<localConnection>k__BackingField
	NetworkConnectionToClient_tE916DCEABAD1E8B9B9CF24EC005ABC619FD07CBD * ___U3ClocalConnectionU3Ek__BackingField_3;
	// System.Collections.Generic.Dictionary`2<System.Int32,Mirror.NetworkConnectionToClient> Mirror.NetworkServer::connections
	Dictionary_2_t659A787707DACEAC76CC514E3D5615A24BB43F04 * ___connections_4;
	// System.Collections.Generic.Dictionary`2<System.Int32,Mirror.NetworkMessageDelegate> Mirror.NetworkServer::handlers
	Dictionary_2_tBE6918CF0F8B42DF6058DADEA9BB7E06185B90A8 * ___handlers_5;
	// System.Boolean Mirror.NetworkServer::dontListen
	bool ___dontListen_6;
	// System.Boolean Mirror.NetworkServer::<active>k__BackingField
	bool ___U3CactiveU3Ek__BackingField_7;
	// System.Boolean Mirror.NetworkServer::disconnectInactiveConnections
	bool ___disconnectInactiveConnections_8;
	// System.Single Mirror.NetworkServer::disconnectInactiveTimeout
	float ___disconnectInactiveTimeout_9;
	// System.Collections.Generic.List`1<System.Int32> Mirror.NetworkServer::connectionIdsCache
	List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___connectionIdsCache_10;

public:
	inline static int32_t get_offset_of_logger_0() { return static_cast<int32_t>(offsetof(NetworkServer_t8410142130F495DC2B99625046908CE7CDEF5D6A_StaticFields, ___logger_0)); }
	inline RuntimeObject* get_logger_0() const { return ___logger_0; }
	inline RuntimeObject** get_address_of_logger_0() { return &___logger_0; }
	inline void set_logger_0(RuntimeObject* value)
	{
		___logger_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___logger_0), (void*)value);
	}

	inline static int32_t get_offset_of_initialized_1() { return static_cast<int32_t>(offsetof(NetworkServer_t8410142130F495DC2B99625046908CE7CDEF5D6A_StaticFields, ___initialized_1)); }
	inline bool get_initialized_1() const { return ___initialized_1; }
	inline bool* get_address_of_initialized_1() { return &___initialized_1; }
	inline void set_initialized_1(bool value)
	{
		___initialized_1 = value;
	}

	inline static int32_t get_offset_of_maxConnections_2() { return static_cast<int32_t>(offsetof(NetworkServer_t8410142130F495DC2B99625046908CE7CDEF5D6A_StaticFields, ___maxConnections_2)); }
	inline int32_t get_maxConnections_2() const { return ___maxConnections_2; }
	inline int32_t* get_address_of_maxConnections_2() { return &___maxConnections_2; }
	inline void set_maxConnections_2(int32_t value)
	{
		___maxConnections_2 = value;
	}

	inline static int32_t get_offset_of_U3ClocalConnectionU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(NetworkServer_t8410142130F495DC2B99625046908CE7CDEF5D6A_StaticFields, ___U3ClocalConnectionU3Ek__BackingField_3)); }
	inline NetworkConnectionToClient_tE916DCEABAD1E8B9B9CF24EC005ABC619FD07CBD * get_U3ClocalConnectionU3Ek__BackingField_3() const { return ___U3ClocalConnectionU3Ek__BackingField_3; }
	inline NetworkConnectionToClient_tE916DCEABAD1E8B9B9CF24EC005ABC619FD07CBD ** get_address_of_U3ClocalConnectionU3Ek__BackingField_3() { return &___U3ClocalConnectionU3Ek__BackingField_3; }
	inline void set_U3ClocalConnectionU3Ek__BackingField_3(NetworkConnectionToClient_tE916DCEABAD1E8B9B9CF24EC005ABC619FD07CBD * value)
	{
		___U3ClocalConnectionU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClocalConnectionU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_connections_4() { return static_cast<int32_t>(offsetof(NetworkServer_t8410142130F495DC2B99625046908CE7CDEF5D6A_StaticFields, ___connections_4)); }
	inline Dictionary_2_t659A787707DACEAC76CC514E3D5615A24BB43F04 * get_connections_4() const { return ___connections_4; }
	inline Dictionary_2_t659A787707DACEAC76CC514E3D5615A24BB43F04 ** get_address_of_connections_4() { return &___connections_4; }
	inline void set_connections_4(Dictionary_2_t659A787707DACEAC76CC514E3D5615A24BB43F04 * value)
	{
		___connections_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___connections_4), (void*)value);
	}

	inline static int32_t get_offset_of_handlers_5() { return static_cast<int32_t>(offsetof(NetworkServer_t8410142130F495DC2B99625046908CE7CDEF5D6A_StaticFields, ___handlers_5)); }
	inline Dictionary_2_tBE6918CF0F8B42DF6058DADEA9BB7E06185B90A8 * get_handlers_5() const { return ___handlers_5; }
	inline Dictionary_2_tBE6918CF0F8B42DF6058DADEA9BB7E06185B90A8 ** get_address_of_handlers_5() { return &___handlers_5; }
	inline void set_handlers_5(Dictionary_2_tBE6918CF0F8B42DF6058DADEA9BB7E06185B90A8 * value)
	{
		___handlers_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handlers_5), (void*)value);
	}

	inline static int32_t get_offset_of_dontListen_6() { return static_cast<int32_t>(offsetof(NetworkServer_t8410142130F495DC2B99625046908CE7CDEF5D6A_StaticFields, ___dontListen_6)); }
	inline bool get_dontListen_6() const { return ___dontListen_6; }
	inline bool* get_address_of_dontListen_6() { return &___dontListen_6; }
	inline void set_dontListen_6(bool value)
	{
		___dontListen_6 = value;
	}

	inline static int32_t get_offset_of_U3CactiveU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(NetworkServer_t8410142130F495DC2B99625046908CE7CDEF5D6A_StaticFields, ___U3CactiveU3Ek__BackingField_7)); }
	inline bool get_U3CactiveU3Ek__BackingField_7() const { return ___U3CactiveU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CactiveU3Ek__BackingField_7() { return &___U3CactiveU3Ek__BackingField_7; }
	inline void set_U3CactiveU3Ek__BackingField_7(bool value)
	{
		___U3CactiveU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_disconnectInactiveConnections_8() { return static_cast<int32_t>(offsetof(NetworkServer_t8410142130F495DC2B99625046908CE7CDEF5D6A_StaticFields, ___disconnectInactiveConnections_8)); }
	inline bool get_disconnectInactiveConnections_8() const { return ___disconnectInactiveConnections_8; }
	inline bool* get_address_of_disconnectInactiveConnections_8() { return &___disconnectInactiveConnections_8; }
	inline void set_disconnectInactiveConnections_8(bool value)
	{
		___disconnectInactiveConnections_8 = value;
	}

	inline static int32_t get_offset_of_disconnectInactiveTimeout_9() { return static_cast<int32_t>(offsetof(NetworkServer_t8410142130F495DC2B99625046908CE7CDEF5D6A_StaticFields, ___disconnectInactiveTimeout_9)); }
	inline float get_disconnectInactiveTimeout_9() const { return ___disconnectInactiveTimeout_9; }
	inline float* get_address_of_disconnectInactiveTimeout_9() { return &___disconnectInactiveTimeout_9; }
	inline void set_disconnectInactiveTimeout_9(float value)
	{
		___disconnectInactiveTimeout_9 = value;
	}

	inline static int32_t get_offset_of_connectionIdsCache_10() { return static_cast<int32_t>(offsetof(NetworkServer_t8410142130F495DC2B99625046908CE7CDEF5D6A_StaticFields, ___connectionIdsCache_10)); }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * get_connectionIdsCache_10() const { return ___connectionIdsCache_10; }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 ** get_address_of_connectionIdsCache_10() { return &___connectionIdsCache_10; }
	inline void set_connectionIdsCache_10(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * value)
	{
		___connectionIdsCache_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___connectionIdsCache_10), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2<System.Int32,Mirror.NetworkConnectionToClient>
struct  Dictionary_2_t659A787707DACEAC76CC514E3D5615A24BB43F04  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tEA668192B4AABBB57806DB2EDB9C444F27CDC4C9* ___entries_1;
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
	KeyCollection_t7D1DE9740CA58C025849B0598C657303F3D66003 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t9A37AF389AD15FCFFC6633CB331565C269AD5B22 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t659A787707DACEAC76CC514E3D5615A24BB43F04, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t659A787707DACEAC76CC514E3D5615A24BB43F04, ___entries_1)); }
	inline EntryU5BU5D_tEA668192B4AABBB57806DB2EDB9C444F27CDC4C9* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tEA668192B4AABBB57806DB2EDB9C444F27CDC4C9** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tEA668192B4AABBB57806DB2EDB9C444F27CDC4C9* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t659A787707DACEAC76CC514E3D5615A24BB43F04, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t659A787707DACEAC76CC514E3D5615A24BB43F04, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t659A787707DACEAC76CC514E3D5615A24BB43F04, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t659A787707DACEAC76CC514E3D5615A24BB43F04, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t659A787707DACEAC76CC514E3D5615A24BB43F04, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t659A787707DACEAC76CC514E3D5615A24BB43F04, ___keys_7)); }
	inline KeyCollection_t7D1DE9740CA58C025849B0598C657303F3D66003 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t7D1DE9740CA58C025849B0598C657303F3D66003 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t7D1DE9740CA58C025849B0598C657303F3D66003 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t659A787707DACEAC76CC514E3D5615A24BB43F04, ___values_8)); }
	inline ValueCollection_t9A37AF389AD15FCFFC6633CB331565C269AD5B22 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t9A37AF389AD15FCFFC6633CB331565C269AD5B22 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t9A37AF389AD15FCFFC6633CB331565C269AD5B22 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t659A787707DACEAC76CC514E3D5615A24BB43F04, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<Mirror.Cloud.Example.ServerListUIItem>
struct  List_1_t848A769EBD33E8829AB5D9648E68B9AD338DDF37  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ServerListUIItemU5BU5D_tBF8D221B45AE241E490F322CC68C3A2195720AD5* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t848A769EBD33E8829AB5D9648E68B9AD338DDF37, ____items_1)); }
	inline ServerListUIItemU5BU5D_tBF8D221B45AE241E490F322CC68C3A2195720AD5* get__items_1() const { return ____items_1; }
	inline ServerListUIItemU5BU5D_tBF8D221B45AE241E490F322CC68C3A2195720AD5** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ServerListUIItemU5BU5D_tBF8D221B45AE241E490F322CC68C3A2195720AD5* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t848A769EBD33E8829AB5D9648E68B9AD338DDF37, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t848A769EBD33E8829AB5D9648E68B9AD338DDF37, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t848A769EBD33E8829AB5D9648E68B9AD338DDF37, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t848A769EBD33E8829AB5D9648E68B9AD338DDF37_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ServerListUIItemU5BU5D_tBF8D221B45AE241E490F322CC68C3A2195720AD5* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t848A769EBD33E8829AB5D9648E68B9AD338DDF37_StaticFields, ____emptyArray_5)); }
	inline ServerListUIItemU5BU5D_tBF8D221B45AE241E490F322CC68C3A2195720AD5* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ServerListUIItemU5BU5D_tBF8D221B45AE241E490F322CC68C3A2195720AD5** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ServerListUIItemU5BU5D_tBF8D221B45AE241E490F322CC68C3A2195720AD5* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.EmptyArray`1<System.Object>
struct  EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
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


// Mirror.Cloud.ListServerService.ServerCollectionJson
struct  ServerCollectionJson_t927BBBC6ABE4C66FA3B2DC69AB9105D035971960 
{
public:
	// Mirror.Cloud.ListServerService.ServerJson[] Mirror.Cloud.ListServerService.ServerCollectionJson::servers
	ServerJsonU5BU5D_t3A4F7B269FEF3032ADD60A1DDB7A19EC7715BE77* ___servers_0;

public:
	inline static int32_t get_offset_of_servers_0() { return static_cast<int32_t>(offsetof(ServerCollectionJson_t927BBBC6ABE4C66FA3B2DC69AB9105D035971960, ___servers_0)); }
	inline ServerJsonU5BU5D_t3A4F7B269FEF3032ADD60A1DDB7A19EC7715BE77* get_servers_0() const { return ___servers_0; }
	inline ServerJsonU5BU5D_t3A4F7B269FEF3032ADD60A1DDB7A19EC7715BE77** get_address_of_servers_0() { return &___servers_0; }
	inline void set_servers_0(ServerJsonU5BU5D_t3A4F7B269FEF3032ADD60A1DDB7A19EC7715BE77* value)
	{
		___servers_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___servers_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Mirror.Cloud.ListServerService.ServerCollectionJson
struct ServerCollectionJson_t927BBBC6ABE4C66FA3B2DC69AB9105D035971960_marshaled_pinvoke
{
	ServerJson_t0E3B764038B2CAACD0A933F586BE88F112B8EFAB_marshaled_pinvoke* ___servers_0;
};
// Native definition for COM marshalling of Mirror.Cloud.ListServerService.ServerCollectionJson
struct ServerCollectionJson_t927BBBC6ABE4C66FA3B2DC69AB9105D035971960_marshaled_com
{
	ServerJson_t0E3B764038B2CAACD0A933F586BE88F112B8EFAB_marshaled_com* ___servers_0;
};

// Mirror.Cloud.ListServerService.ServerJson
struct  ServerJson_t0E3B764038B2CAACD0A933F586BE88F112B8EFAB 
{
public:
	// System.String Mirror.Cloud.ListServerService.ServerJson::protocol
	String_t* ___protocol_0;
	// System.Int32 Mirror.Cloud.ListServerService.ServerJson::port
	int32_t ___port_1;
	// System.Int32 Mirror.Cloud.ListServerService.ServerJson::playerCount
	int32_t ___playerCount_2;
	// System.Int32 Mirror.Cloud.ListServerService.ServerJson::maxPlayerCount
	int32_t ___maxPlayerCount_3;
	// System.String Mirror.Cloud.ListServerService.ServerJson::displayName
	String_t* ___displayName_4;
	// System.String Mirror.Cloud.ListServerService.ServerJson::address
	String_t* ___address_5;
	// System.String Mirror.Cloud.ListServerService.ServerJson::customAddress
	String_t* ___customAddress_6;
	// Mirror.Cloud.ListServerService.KeyValue[] Mirror.Cloud.ListServerService.ServerJson::customData
	KeyValueU5BU5D_t8A54586A8E8123CB597B3B236AD57B074B80568C* ___customData_7;

public:
	inline static int32_t get_offset_of_protocol_0() { return static_cast<int32_t>(offsetof(ServerJson_t0E3B764038B2CAACD0A933F586BE88F112B8EFAB, ___protocol_0)); }
	inline String_t* get_protocol_0() const { return ___protocol_0; }
	inline String_t** get_address_of_protocol_0() { return &___protocol_0; }
	inline void set_protocol_0(String_t* value)
	{
		___protocol_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___protocol_0), (void*)value);
	}

	inline static int32_t get_offset_of_port_1() { return static_cast<int32_t>(offsetof(ServerJson_t0E3B764038B2CAACD0A933F586BE88F112B8EFAB, ___port_1)); }
	inline int32_t get_port_1() const { return ___port_1; }
	inline int32_t* get_address_of_port_1() { return &___port_1; }
	inline void set_port_1(int32_t value)
	{
		___port_1 = value;
	}

	inline static int32_t get_offset_of_playerCount_2() { return static_cast<int32_t>(offsetof(ServerJson_t0E3B764038B2CAACD0A933F586BE88F112B8EFAB, ___playerCount_2)); }
	inline int32_t get_playerCount_2() const { return ___playerCount_2; }
	inline int32_t* get_address_of_playerCount_2() { return &___playerCount_2; }
	inline void set_playerCount_2(int32_t value)
	{
		___playerCount_2 = value;
	}

	inline static int32_t get_offset_of_maxPlayerCount_3() { return static_cast<int32_t>(offsetof(ServerJson_t0E3B764038B2CAACD0A933F586BE88F112B8EFAB, ___maxPlayerCount_3)); }
	inline int32_t get_maxPlayerCount_3() const { return ___maxPlayerCount_3; }
	inline int32_t* get_address_of_maxPlayerCount_3() { return &___maxPlayerCount_3; }
	inline void set_maxPlayerCount_3(int32_t value)
	{
		___maxPlayerCount_3 = value;
	}

	inline static int32_t get_offset_of_displayName_4() { return static_cast<int32_t>(offsetof(ServerJson_t0E3B764038B2CAACD0A933F586BE88F112B8EFAB, ___displayName_4)); }
	inline String_t* get_displayName_4() const { return ___displayName_4; }
	inline String_t** get_address_of_displayName_4() { return &___displayName_4; }
	inline void set_displayName_4(String_t* value)
	{
		___displayName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___displayName_4), (void*)value);
	}

	inline static int32_t get_offset_of_address_5() { return static_cast<int32_t>(offsetof(ServerJson_t0E3B764038B2CAACD0A933F586BE88F112B8EFAB, ___address_5)); }
	inline String_t* get_address_5() const { return ___address_5; }
	inline String_t** get_address_of_address_5() { return &___address_5; }
	inline void set_address_5(String_t* value)
	{
		___address_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___address_5), (void*)value);
	}

	inline static int32_t get_offset_of_customAddress_6() { return static_cast<int32_t>(offsetof(ServerJson_t0E3B764038B2CAACD0A933F586BE88F112B8EFAB, ___customAddress_6)); }
	inline String_t* get_customAddress_6() const { return ___customAddress_6; }
	inline String_t** get_address_of_customAddress_6() { return &___customAddress_6; }
	inline void set_customAddress_6(String_t* value)
	{
		___customAddress_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customAddress_6), (void*)value);
	}

	inline static int32_t get_offset_of_customData_7() { return static_cast<int32_t>(offsetof(ServerJson_t0E3B764038B2CAACD0A933F586BE88F112B8EFAB, ___customData_7)); }
	inline KeyValueU5BU5D_t8A54586A8E8123CB597B3B236AD57B074B80568C* get_customData_7() const { return ___customData_7; }
	inline KeyValueU5BU5D_t8A54586A8E8123CB597B3B236AD57B074B80568C** get_address_of_customData_7() { return &___customData_7; }
	inline void set_customData_7(KeyValueU5BU5D_t8A54586A8E8123CB597B3B236AD57B074B80568C* value)
	{
		___customData_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customData_7), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Mirror.Cloud.ListServerService.ServerJson
struct ServerJson_t0E3B764038B2CAACD0A933F586BE88F112B8EFAB_marshaled_pinvoke
{
	char* ___protocol_0;
	int32_t ___port_1;
	int32_t ___playerCount_2;
	int32_t ___maxPlayerCount_3;
	char* ___displayName_4;
	char* ___address_5;
	char* ___customAddress_6;
	KeyValue_t3726E0BF74240F5D98A984D6ED24489F16D77C36_marshaled_pinvoke* ___customData_7;
};
// Native definition for COM marshalling of Mirror.Cloud.ListServerService.ServerJson
struct ServerJson_t0E3B764038B2CAACD0A933F586BE88F112B8EFAB_marshaled_com
{
	Il2CppChar* ___protocol_0;
	int32_t ___port_1;
	int32_t ___playerCount_2;
	int32_t ___maxPlayerCount_3;
	Il2CppChar* ___displayName_4;
	Il2CppChar* ___address_5;
	Il2CppChar* ___customAddress_6;
	KeyValue_t3726E0BF74240F5D98A984D6ED24489F16D77C36_marshaled_com* ___customData_7;
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


// System.Collections.Generic.List`1_Enumerator<Mirror.Cloud.Example.ServerListUIItem>
struct  Enumerator_t7EC365BCC01F2EA78EE33D72F3DB5340E60B3C21 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t848A769EBD33E8829AB5D9648E68B9AD338DDF37 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	ServerListUIItem_t7741F4958B2713690D4DC1B33E90664EA0563D68 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t7EC365BCC01F2EA78EE33D72F3DB5340E60B3C21, ___list_0)); }
	inline List_1_t848A769EBD33E8829AB5D9648E68B9AD338DDF37 * get_list_0() const { return ___list_0; }
	inline List_1_t848A769EBD33E8829AB5D9648E68B9AD338DDF37 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t848A769EBD33E8829AB5D9648E68B9AD338DDF37 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t7EC365BCC01F2EA78EE33D72F3DB5340E60B3C21, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t7EC365BCC01F2EA78EE33D72F3DB5340E60B3C21, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t7EC365BCC01F2EA78EE33D72F3DB5340E60B3C21, ___current_3)); }
	inline ServerListUIItem_t7741F4958B2713690D4DC1B33E90664EA0563D68 * get_current_3() const { return ___current_3; }
	inline ServerListUIItem_t7741F4958B2713690D4DC1B33E90664EA0563D68 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(ServerListUIItem_t7741F4958B2713690D4DC1B33E90664EA0563D68 * value)
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


// UnityEngine.Events.UnityEvent
struct  UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.UI.SpriteState
struct  SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_HighlightedSprite_0)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_PressedSprite_1)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_SelectedSprite_2)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_DisabledSprite_3)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_marshaled_pinvoke
{
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_HighlightedSprite_0;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_PressedSprite_1;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_SelectedSprite_2;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_marshaled_com
{
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_HighlightedSprite_0;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_PressedSprite_1;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_SelectedSprite_2;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_DisabledSprite_3;
};

// Mirror.NetworkManagerMode
struct  NetworkManagerMode_t6D4862473AB8CC0DC036448133B620E8A41C627B 
{
public:
	// System.Int32 Mirror.NetworkManagerMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NetworkManagerMode_t6D4862473AB8CC0DC036448133B620E8A41C627B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Mirror.PlayerSpawnMethod
struct  PlayerSpawnMethod_t8BE4047C7B06208D54ABDF1B7F75DCDE600B4F8E 
{
public:
	// System.Int32 Mirror.PlayerSpawnMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlayerSpawnMethod_t8BE4047C7B06208D54ABDF1B7F75DCDE600B4F8E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Mirror.SceneOperation
struct  SceneOperation_tA100027114736D4678F7D3ECE988E79E7D9091D7 
{
public:
	// System.Byte Mirror.SceneOperation::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SceneOperation_tA100027114736D4678F7D3ECE988E79E7D9091D7, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
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

// System.Nullable`1<Mirror.Cloud.ListServerService.ServerCollectionJson>
struct  Nullable_1_tAE6CD8652049A5B989144D2465FE5629A969A986 
{
public:
	// T System.Nullable`1::value
	ServerCollectionJson_t927BBBC6ABE4C66FA3B2DC69AB9105D035971960  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tAE6CD8652049A5B989144D2465FE5629A969A986, ___value_0)); }
	inline ServerCollectionJson_t927BBBC6ABE4C66FA3B2DC69AB9105D035971960  get_value_0() const { return ___value_0; }
	inline ServerCollectionJson_t927BBBC6ABE4C66FA3B2DC69AB9105D035971960 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(ServerCollectionJson_t927BBBC6ABE4C66FA3B2DC69AB9105D035971960  value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___servers_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tAE6CD8652049A5B989144D2465FE5629A969A986, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Uri_Flags
struct  Flags_tEBE7CABEBD13F16920D6950B384EB8F988250A2A 
{
public:
	// System.UInt64 System.Uri_Flags::value__
	uint64_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_tEBE7CABEBD13F16920D6950B384EB8F988250A2A, ___value___2)); }
	inline uint64_t get_value___2() const { return ___value___2; }
	inline uint64_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint64_t value)
	{
		___value___2 = value;
	}
};


// System.UriFormat
struct  UriFormat_t4355763D39FF6F0FAA2B43E3A209BA8500730992 
{
public:
	// System.Int32 System.UriFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriFormat_t4355763D39FF6F0FAA2B43E3A209BA8500730992, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.UriIdnScope
struct  UriIdnScope_tE1574B39C7492C761EFE2FC12DDE82DE013AC9D1 
{
public:
	// System.Int32 System.UriIdnScope::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriIdnScope_tE1574B39C7492C761EFE2FC12DDE82DE013AC9D1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.UriKind
struct  UriKind_t26D0760DDF148ADC939FECD934C0B9FF5C71EA08 
{
public:
	// System.Int32 System.UriKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriKind_t26D0760DDF148ADC939FECD934C0B9FF5C71EA08, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.GUILayoutOption_Type
struct  Type_t1060D19522CDA0F7C9A26733BE1E8C8E20AC1278 
{
public:
	// System.Int32 UnityEngine.GUILayoutOption_Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_t1060D19522CDA0F7C9A26733BE1E8C8E20AC1278, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.LogType
struct  LogType_t6B6C6234E8B44B73937581ACFBE15DE28227849D 
{
public:
	// System.Int32 UnityEngine.LogType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LogType_t6B6C6234E8B44B73937581ACFBE15DE28227849D, ___value___2)); }
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

// UnityEngine.UI.Button_ButtonClickedEvent
struct  ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB  : public UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F
{
public:

public:
};


// UnityEngine.UI.ColorBlock
struct  ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_NormalColor_0)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_HighlightedColor_1)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_PressedColor_2)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_SelectedColor_3)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_DisabledColor_4)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};


// UnityEngine.UI.Navigation_Mode
struct  Mode_t93F92BD50B147AE38D82BA33FA77FD247A59FE26 
{
public:
	// System.Int32 UnityEngine.UI.Navigation_Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t93F92BD50B147AE38D82BA33FA77FD247A59FE26, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable_Transition
struct  Transition_tA9261C608B54C52324084A0B080E7A3E0548A181 
{
public:
	// System.Int32 UnityEngine.UI.Selectable_Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_tA9261C608B54C52324084A0B080E7A3E0548A181, ___value___2)); }
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

// System.Uri
struct  Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E  : public RuntimeObject
{
public:
	// System.String System.Uri::m_String
	String_t* ___m_String_16;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_17;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * ___m_Syntax_18;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_19;
	// System.Uri_Flags System.Uri::m_Flags
	uint64_t ___m_Flags_20;
	// System.Uri_UriInfo System.Uri::m_Info
	UriInfo_t9FCC6BD4EC1EA14D75209E6A35417057BF6EDC5E * ___m_Info_21;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_22;

public:
	inline static int32_t get_offset_of_m_String_16() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_String_16)); }
	inline String_t* get_m_String_16() const { return ___m_String_16; }
	inline String_t** get_address_of_m_String_16() { return &___m_String_16; }
	inline void set_m_String_16(String_t* value)
	{
		___m_String_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_String_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_originalUnicodeString_17() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_originalUnicodeString_17)); }
	inline String_t* get_m_originalUnicodeString_17() const { return ___m_originalUnicodeString_17; }
	inline String_t** get_address_of_m_originalUnicodeString_17() { return &___m_originalUnicodeString_17; }
	inline void set_m_originalUnicodeString_17(String_t* value)
	{
		___m_originalUnicodeString_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_originalUnicodeString_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_Syntax_18() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_Syntax_18)); }
	inline UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * get_m_Syntax_18() const { return ___m_Syntax_18; }
	inline UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC ** get_address_of_m_Syntax_18() { return &___m_Syntax_18; }
	inline void set_m_Syntax_18(UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * value)
	{
		___m_Syntax_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Syntax_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_DnsSafeHost_19() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_DnsSafeHost_19)); }
	inline String_t* get_m_DnsSafeHost_19() const { return ___m_DnsSafeHost_19; }
	inline String_t** get_address_of_m_DnsSafeHost_19() { return &___m_DnsSafeHost_19; }
	inline void set_m_DnsSafeHost_19(String_t* value)
	{
		___m_DnsSafeHost_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DnsSafeHost_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_20() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_Flags_20)); }
	inline uint64_t get_m_Flags_20() const { return ___m_Flags_20; }
	inline uint64_t* get_address_of_m_Flags_20() { return &___m_Flags_20; }
	inline void set_m_Flags_20(uint64_t value)
	{
		___m_Flags_20 = value;
	}

	inline static int32_t get_offset_of_m_Info_21() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_Info_21)); }
	inline UriInfo_t9FCC6BD4EC1EA14D75209E6A35417057BF6EDC5E * get_m_Info_21() const { return ___m_Info_21; }
	inline UriInfo_t9FCC6BD4EC1EA14D75209E6A35417057BF6EDC5E ** get_address_of_m_Info_21() { return &___m_Info_21; }
	inline void set_m_Info_21(UriInfo_t9FCC6BD4EC1EA14D75209E6A35417057BF6EDC5E * value)
	{
		___m_Info_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Info_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_iriParsing_22() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_iriParsing_22)); }
	inline bool get_m_iriParsing_22() const { return ___m_iriParsing_22; }
	inline bool* get_address_of_m_iriParsing_22() { return &___m_iriParsing_22; }
	inline void set_m_iriParsing_22(bool value)
	{
		___m_iriParsing_22 = value;
	}
};

struct Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields
{
public:
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_24;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_25;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_26;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_27;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_29;
	// System.Object System.Uri::s_initLock
	RuntimeObject * ___s_initLock_30;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___HexLowerChars_34;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ____WSchars_35;

public:
	inline static int32_t get_offset_of_UriSchemeFile_0() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeFile_0)); }
	inline String_t* get_UriSchemeFile_0() const { return ___UriSchemeFile_0; }
	inline String_t** get_address_of_UriSchemeFile_0() { return &___UriSchemeFile_0; }
	inline void set_UriSchemeFile_0(String_t* value)
	{
		___UriSchemeFile_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFile_0), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeFtp_1() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeFtp_1)); }
	inline String_t* get_UriSchemeFtp_1() const { return ___UriSchemeFtp_1; }
	inline String_t** get_address_of_UriSchemeFtp_1() { return &___UriSchemeFtp_1; }
	inline void set_UriSchemeFtp_1(String_t* value)
	{
		___UriSchemeFtp_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFtp_1), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeGopher_2() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeGopher_2)); }
	inline String_t* get_UriSchemeGopher_2() const { return ___UriSchemeGopher_2; }
	inline String_t** get_address_of_UriSchemeGopher_2() { return &___UriSchemeGopher_2; }
	inline void set_UriSchemeGopher_2(String_t* value)
	{
		___UriSchemeGopher_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeGopher_2), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttp_3() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeHttp_3)); }
	inline String_t* get_UriSchemeHttp_3() const { return ___UriSchemeHttp_3; }
	inline String_t** get_address_of_UriSchemeHttp_3() { return &___UriSchemeHttp_3; }
	inline void set_UriSchemeHttp_3(String_t* value)
	{
		___UriSchemeHttp_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttp_3), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttps_4() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeHttps_4)); }
	inline String_t* get_UriSchemeHttps_4() const { return ___UriSchemeHttps_4; }
	inline String_t** get_address_of_UriSchemeHttps_4() { return &___UriSchemeHttps_4; }
	inline void set_UriSchemeHttps_4(String_t* value)
	{
		___UriSchemeHttps_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttps_4), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWs_5() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeWs_5)); }
	inline String_t* get_UriSchemeWs_5() const { return ___UriSchemeWs_5; }
	inline String_t** get_address_of_UriSchemeWs_5() { return &___UriSchemeWs_5; }
	inline void set_UriSchemeWs_5(String_t* value)
	{
		___UriSchemeWs_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWs_5), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWss_6() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeWss_6)); }
	inline String_t* get_UriSchemeWss_6() const { return ___UriSchemeWss_6; }
	inline String_t** get_address_of_UriSchemeWss_6() { return &___UriSchemeWss_6; }
	inline void set_UriSchemeWss_6(String_t* value)
	{
		___UriSchemeWss_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWss_6), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeMailto_7() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeMailto_7)); }
	inline String_t* get_UriSchemeMailto_7() const { return ___UriSchemeMailto_7; }
	inline String_t** get_address_of_UriSchemeMailto_7() { return &___UriSchemeMailto_7; }
	inline void set_UriSchemeMailto_7(String_t* value)
	{
		___UriSchemeMailto_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeMailto_7), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNews_8() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeNews_8)); }
	inline String_t* get_UriSchemeNews_8() const { return ___UriSchemeNews_8; }
	inline String_t** get_address_of_UriSchemeNews_8() { return &___UriSchemeNews_8; }
	inline void set_UriSchemeNews_8(String_t* value)
	{
		___UriSchemeNews_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNews_8), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNntp_9() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeNntp_9)); }
	inline String_t* get_UriSchemeNntp_9() const { return ___UriSchemeNntp_9; }
	inline String_t** get_address_of_UriSchemeNntp_9() { return &___UriSchemeNntp_9; }
	inline void set_UriSchemeNntp_9(String_t* value)
	{
		___UriSchemeNntp_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNntp_9), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetTcp_10() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeNetTcp_10)); }
	inline String_t* get_UriSchemeNetTcp_10() const { return ___UriSchemeNetTcp_10; }
	inline String_t** get_address_of_UriSchemeNetTcp_10() { return &___UriSchemeNetTcp_10; }
	inline void set_UriSchemeNetTcp_10(String_t* value)
	{
		___UriSchemeNetTcp_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetTcp_10), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetPipe_11() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeNetPipe_11)); }
	inline String_t* get_UriSchemeNetPipe_11() const { return ___UriSchemeNetPipe_11; }
	inline String_t** get_address_of_UriSchemeNetPipe_11() { return &___UriSchemeNetPipe_11; }
	inline void set_UriSchemeNetPipe_11(String_t* value)
	{
		___UriSchemeNetPipe_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetPipe_11), (void*)value);
	}

	inline static int32_t get_offset_of_SchemeDelimiter_12() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___SchemeDelimiter_12)); }
	inline String_t* get_SchemeDelimiter_12() const { return ___SchemeDelimiter_12; }
	inline String_t** get_address_of_SchemeDelimiter_12() { return &___SchemeDelimiter_12; }
	inline void set_SchemeDelimiter_12(String_t* value)
	{
		___SchemeDelimiter_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SchemeDelimiter_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_ConfigInitialized_23() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___s_ConfigInitialized_23)); }
	inline bool get_s_ConfigInitialized_23() const { return ___s_ConfigInitialized_23; }
	inline bool* get_address_of_s_ConfigInitialized_23() { return &___s_ConfigInitialized_23; }
	inline void set_s_ConfigInitialized_23(bool value)
	{
		___s_ConfigInitialized_23 = value;
	}

	inline static int32_t get_offset_of_s_ConfigInitializing_24() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___s_ConfigInitializing_24)); }
	inline bool get_s_ConfigInitializing_24() const { return ___s_ConfigInitializing_24; }
	inline bool* get_address_of_s_ConfigInitializing_24() { return &___s_ConfigInitializing_24; }
	inline void set_s_ConfigInitializing_24(bool value)
	{
		___s_ConfigInitializing_24 = value;
	}

	inline static int32_t get_offset_of_s_IdnScope_25() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___s_IdnScope_25)); }
	inline int32_t get_s_IdnScope_25() const { return ___s_IdnScope_25; }
	inline int32_t* get_address_of_s_IdnScope_25() { return &___s_IdnScope_25; }
	inline void set_s_IdnScope_25(int32_t value)
	{
		___s_IdnScope_25 = value;
	}

	inline static int32_t get_offset_of_s_IriParsing_26() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___s_IriParsing_26)); }
	inline bool get_s_IriParsing_26() const { return ___s_IriParsing_26; }
	inline bool* get_address_of_s_IriParsing_26() { return &___s_IriParsing_26; }
	inline void set_s_IriParsing_26(bool value)
	{
		___s_IriParsing_26 = value;
	}

	inline static int32_t get_offset_of_useDotNetRelativeOrAbsolute_27() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___useDotNetRelativeOrAbsolute_27)); }
	inline bool get_useDotNetRelativeOrAbsolute_27() const { return ___useDotNetRelativeOrAbsolute_27; }
	inline bool* get_address_of_useDotNetRelativeOrAbsolute_27() { return &___useDotNetRelativeOrAbsolute_27; }
	inline void set_useDotNetRelativeOrAbsolute_27(bool value)
	{
		___useDotNetRelativeOrAbsolute_27 = value;
	}

	inline static int32_t get_offset_of_IsWindowsFileSystem_29() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___IsWindowsFileSystem_29)); }
	inline bool get_IsWindowsFileSystem_29() const { return ___IsWindowsFileSystem_29; }
	inline bool* get_address_of_IsWindowsFileSystem_29() { return &___IsWindowsFileSystem_29; }
	inline void set_IsWindowsFileSystem_29(bool value)
	{
		___IsWindowsFileSystem_29 = value;
	}

	inline static int32_t get_offset_of_s_initLock_30() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___s_initLock_30)); }
	inline RuntimeObject * get_s_initLock_30() const { return ___s_initLock_30; }
	inline RuntimeObject ** get_address_of_s_initLock_30() { return &___s_initLock_30; }
	inline void set_s_initLock_30(RuntimeObject * value)
	{
		___s_initLock_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_initLock_30), (void*)value);
	}

	inline static int32_t get_offset_of_HexLowerChars_34() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___HexLowerChars_34)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_HexLowerChars_34() const { return ___HexLowerChars_34; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_HexLowerChars_34() { return &___HexLowerChars_34; }
	inline void set_HexLowerChars_34(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___HexLowerChars_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HexLowerChars_34), (void*)value);
	}

	inline static int32_t get_offset_of__WSchars_35() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ____WSchars_35)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get__WSchars_35() const { return ____WSchars_35; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of__WSchars_35() { return &____WSchars_35; }
	inline void set__WSchars_35(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		____WSchars_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WSchars_35), (void*)value);
	}
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GUILayoutOption
struct  GUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6  : public RuntimeObject
{
public:
	// UnityEngine.GUILayoutOption_Type UnityEngine.GUILayoutOption::type
	int32_t ___type_0;
	// System.Object UnityEngine.GUILayoutOption::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(GUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(GUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.UI.Navigation
struct  Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07 
{
public:
	// UnityEngine.UI.Navigation_Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnUp_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnDown_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnLeft_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnRight_4;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_1() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnUp_1)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnUp_1() const { return ___m_SelectOnUp_1; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnUp_1() { return &___m_SelectOnUp_1; }
	inline void set_m_SelectOnUp_1(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnUp_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_2() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnDown_2)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnDown_2() const { return ___m_SelectOnDown_2; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnDown_2() { return &___m_SelectOnDown_2; }
	inline void set_m_SelectOnDown_2(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnDown_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_3() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnLeft_3)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnLeft_3() const { return ___m_SelectOnLeft_3; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnLeft_3() { return &___m_SelectOnLeft_3; }
	inline void set_m_SelectOnLeft_3(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnLeft_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_4() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnRight_4)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnRight_4() const { return ___m_SelectOnRight_4; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnRight_4() { return &___m_SelectOnRight_4; }
	inline void set_m_SelectOnRight_4(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnRight_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_4), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnUp_1;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnDown_2;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnLeft_3;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnRight_4;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07_marshaled_com
{
	int32_t ___m_Mode_0;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnUp_1;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnDown_2;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnLeft_3;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnRight_4;
};

// Mirror.Cloud.Example.NetworkManagerListServer_OnPlayerListChanged
struct  OnPlayerListChanged_tA8004710D81957B7920259B79EE6014994A802BA  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct  Action_t591D2A86165F896B4B800BB5C25CE18672A55579  : public MulticastDelegate_t
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


// UnityEngine.Events.UnityAction
struct  UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<Mirror.Cloud.ListServerService.ServerCollectionJson>
struct  UnityAction_1_tAF5A6E9E11FEBAB4E729286D7A1A127E2F23D283  : public MulticastDelegate_t
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


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// Mirror.Cloud.ApiConnector
struct  ApiConnector_tE4CB8EB0B23BE8F251872D03EE1992BE6A024E94  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.String Mirror.Cloud.ApiConnector::ApiAddress
	String_t* ___ApiAddress_4;
	// System.String Mirror.Cloud.ApiConnector::ApiKey
	String_t* ___ApiKey_5;
	// Mirror.Cloud.ServerListEvent Mirror.Cloud.ApiConnector::_onServerListUpdated
	ServerListEvent_tF79EB2913B403BB0E9E756BE618A32BC1BE2856F * ____onServerListUpdated_6;
	// Mirror.Cloud.IRequestCreator Mirror.Cloud.ApiConnector::requestCreator
	RuntimeObject* ___requestCreator_7;
	// Mirror.Cloud.ListServerService.ListServer Mirror.Cloud.ApiConnector::<ListServer>k__BackingField
	ListServer_t9A599385F738F9714121265D8EC5245E5FE842D4 * ___U3CListServerU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_ApiAddress_4() { return static_cast<int32_t>(offsetof(ApiConnector_tE4CB8EB0B23BE8F251872D03EE1992BE6A024E94, ___ApiAddress_4)); }
	inline String_t* get_ApiAddress_4() const { return ___ApiAddress_4; }
	inline String_t** get_address_of_ApiAddress_4() { return &___ApiAddress_4; }
	inline void set_ApiAddress_4(String_t* value)
	{
		___ApiAddress_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ApiAddress_4), (void*)value);
	}

	inline static int32_t get_offset_of_ApiKey_5() { return static_cast<int32_t>(offsetof(ApiConnector_tE4CB8EB0B23BE8F251872D03EE1992BE6A024E94, ___ApiKey_5)); }
	inline String_t* get_ApiKey_5() const { return ___ApiKey_5; }
	inline String_t** get_address_of_ApiKey_5() { return &___ApiKey_5; }
	inline void set_ApiKey_5(String_t* value)
	{
		___ApiKey_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ApiKey_5), (void*)value);
	}

	inline static int32_t get_offset_of__onServerListUpdated_6() { return static_cast<int32_t>(offsetof(ApiConnector_tE4CB8EB0B23BE8F251872D03EE1992BE6A024E94, ____onServerListUpdated_6)); }
	inline ServerListEvent_tF79EB2913B403BB0E9E756BE618A32BC1BE2856F * get__onServerListUpdated_6() const { return ____onServerListUpdated_6; }
	inline ServerListEvent_tF79EB2913B403BB0E9E756BE618A32BC1BE2856F ** get_address_of__onServerListUpdated_6() { return &____onServerListUpdated_6; }
	inline void set__onServerListUpdated_6(ServerListEvent_tF79EB2913B403BB0E9E756BE618A32BC1BE2856F * value)
	{
		____onServerListUpdated_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onServerListUpdated_6), (void*)value);
	}

	inline static int32_t get_offset_of_requestCreator_7() { return static_cast<int32_t>(offsetof(ApiConnector_tE4CB8EB0B23BE8F251872D03EE1992BE6A024E94, ___requestCreator_7)); }
	inline RuntimeObject* get_requestCreator_7() const { return ___requestCreator_7; }
	inline RuntimeObject** get_address_of_requestCreator_7() { return &___requestCreator_7; }
	inline void set_requestCreator_7(RuntimeObject* value)
	{
		___requestCreator_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___requestCreator_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CListServerU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(ApiConnector_tE4CB8EB0B23BE8F251872D03EE1992BE6A024E94, ___U3CListServerU3Ek__BackingField_8)); }
	inline ListServer_t9A599385F738F9714121265D8EC5245E5FE842D4 * get_U3CListServerU3Ek__BackingField_8() const { return ___U3CListServerU3Ek__BackingField_8; }
	inline ListServer_t9A599385F738F9714121265D8EC5245E5FE842D4 ** get_address_of_U3CListServerU3Ek__BackingField_8() { return &___U3CListServerU3Ek__BackingField_8; }
	inline void set_U3CListServerU3Ek__BackingField_8(ListServer_t9A599385F738F9714121265D8EC5245E5FE842D4 * value)
	{
		___U3CListServerU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CListServerU3Ek__BackingField_8), (void*)value);
	}
};


// Mirror.Cloud.Example.ApiUpdater
struct  ApiUpdater_t9987332E5573470366A2872D477C072EB184A669  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Mirror.Cloud.Example.NetworkManagerListServer Mirror.Cloud.Example.ApiUpdater::manager
	NetworkManagerListServer_t8B70D286CD2A4E966CDE10203D4720993CFBFCF7 * ___manager_5;
	// Mirror.Cloud.ApiConnector Mirror.Cloud.Example.ApiUpdater::connector
	ApiConnector_tE4CB8EB0B23BE8F251872D03EE1992BE6A024E94 * ___connector_6;
	// System.String Mirror.Cloud.Example.ApiUpdater::gameName
	String_t* ___gameName_7;

public:
	inline static int32_t get_offset_of_manager_5() { return static_cast<int32_t>(offsetof(ApiUpdater_t9987332E5573470366A2872D477C072EB184A669, ___manager_5)); }
	inline NetworkManagerListServer_t8B70D286CD2A4E966CDE10203D4720993CFBFCF7 * get_manager_5() const { return ___manager_5; }
	inline NetworkManagerListServer_t8B70D286CD2A4E966CDE10203D4720993CFBFCF7 ** get_address_of_manager_5() { return &___manager_5; }
	inline void set_manager_5(NetworkManagerListServer_t8B70D286CD2A4E966CDE10203D4720993CFBFCF7 * value)
	{
		___manager_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___manager_5), (void*)value);
	}

	inline static int32_t get_offset_of_connector_6() { return static_cast<int32_t>(offsetof(ApiUpdater_t9987332E5573470366A2872D477C072EB184A669, ___connector_6)); }
	inline ApiConnector_tE4CB8EB0B23BE8F251872D03EE1992BE6A024E94 * get_connector_6() const { return ___connector_6; }
	inline ApiConnector_tE4CB8EB0B23BE8F251872D03EE1992BE6A024E94 ** get_address_of_connector_6() { return &___connector_6; }
	inline void set_connector_6(ApiConnector_tE4CB8EB0B23BE8F251872D03EE1992BE6A024E94 * value)
	{
		___connector_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___connector_6), (void*)value);
	}

	inline static int32_t get_offset_of_gameName_7() { return static_cast<int32_t>(offsetof(ApiUpdater_t9987332E5573470366A2872D477C072EB184A669, ___gameName_7)); }
	inline String_t* get_gameName_7() const { return ___gameName_7; }
	inline String_t** get_address_of_gameName_7() { return &___gameName_7; }
	inline void set_gameName_7(String_t* value)
	{
		___gameName_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameName_7), (void*)value);
	}
};

struct ApiUpdater_t9987332E5573470366A2872D477C072EB184A669_StaticFields
{
public:
	// UnityEngine.ILogger Mirror.Cloud.Example.ApiUpdater::logger
	RuntimeObject* ___logger_4;

public:
	inline static int32_t get_offset_of_logger_4() { return static_cast<int32_t>(offsetof(ApiUpdater_t9987332E5573470366A2872D477C072EB184A669_StaticFields, ___logger_4)); }
	inline RuntimeObject* get_logger_4() const { return ___logger_4; }
	inline RuntimeObject** get_address_of_logger_4() { return &___logger_4; }
	inline void set_logger_4(RuntimeObject* value)
	{
		___logger_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___logger_4), (void*)value);
	}
};


// Mirror.Cloud.Example.QuickListServerDebug
struct  QuickListServerDebug_tE4832885D98C21B438A332BBF58DCF9195C55DBC  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Mirror.Cloud.ApiConnector Mirror.Cloud.Example.QuickListServerDebug::connector
	ApiConnector_tE4CB8EB0B23BE8F251872D03EE1992BE6A024E94 * ___connector_4;
	// System.Nullable`1<Mirror.Cloud.ListServerService.ServerCollectionJson> Mirror.Cloud.Example.QuickListServerDebug::collection
	Nullable_1_tAE6CD8652049A5B989144D2465FE5629A969A986  ___collection_5;

public:
	inline static int32_t get_offset_of_connector_4() { return static_cast<int32_t>(offsetof(QuickListServerDebug_tE4832885D98C21B438A332BBF58DCF9195C55DBC, ___connector_4)); }
	inline ApiConnector_tE4CB8EB0B23BE8F251872D03EE1992BE6A024E94 * get_connector_4() const { return ___connector_4; }
	inline ApiConnector_tE4CB8EB0B23BE8F251872D03EE1992BE6A024E94 ** get_address_of_connector_4() { return &___connector_4; }
	inline void set_connector_4(ApiConnector_tE4CB8EB0B23BE8F251872D03EE1992BE6A024E94 * value)
	{
		___connector_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___connector_4), (void*)value);
	}

	inline static int32_t get_offset_of_collection_5() { return static_cast<int32_t>(offsetof(QuickListServerDebug_tE4832885D98C21B438A332BBF58DCF9195C55DBC, ___collection_5)); }
	inline Nullable_1_tAE6CD8652049A5B989144D2465FE5629A969A986  get_collection_5() const { return ___collection_5; }
	inline Nullable_1_tAE6CD8652049A5B989144D2465FE5629A969A986 * get_address_of_collection_5() { return &___collection_5; }
	inline void set_collection_5(Nullable_1_tAE6CD8652049A5B989144D2465FE5629A969A986  value)
	{
		___collection_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___collection_5))->___value_0))->___servers_0), (void*)NULL);
	}
};


// Mirror.Cloud.Example.ServerListManager
struct  ServerListManager_t83F3E1EE92996F8AF498DFCE86D03CE081379BC0  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Mirror.Cloud.Example.ServerListUI Mirror.Cloud.Example.ServerListManager::listUI
	ServerListUI_t5DDE2460D1DB2D06CEC56B428B5850C9C363C7D7 * ___listUI_4;
	// UnityEngine.UI.Button Mirror.Cloud.Example.ServerListManager::refreshButton
	Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * ___refreshButton_5;
	// UnityEngine.UI.Button Mirror.Cloud.Example.ServerListManager::startServerButton
	Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * ___startServerButton_6;
	// System.Boolean Mirror.Cloud.Example.ServerListManager::autoRefreshServerlist
	bool ___autoRefreshServerlist_7;
	// System.Int32 Mirror.Cloud.Example.ServerListManager::refreshinterval
	int32_t ___refreshinterval_8;
	// Mirror.Cloud.ApiConnector Mirror.Cloud.Example.ServerListManager::connector
	ApiConnector_tE4CB8EB0B23BE8F251872D03EE1992BE6A024E94 * ___connector_9;

public:
	inline static int32_t get_offset_of_listUI_4() { return static_cast<int32_t>(offsetof(ServerListManager_t83F3E1EE92996F8AF498DFCE86D03CE081379BC0, ___listUI_4)); }
	inline ServerListUI_t5DDE2460D1DB2D06CEC56B428B5850C9C363C7D7 * get_listUI_4() const { return ___listUI_4; }
	inline ServerListUI_t5DDE2460D1DB2D06CEC56B428B5850C9C363C7D7 ** get_address_of_listUI_4() { return &___listUI_4; }
	inline void set_listUI_4(ServerListUI_t5DDE2460D1DB2D06CEC56B428B5850C9C363C7D7 * value)
	{
		___listUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___listUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_refreshButton_5() { return static_cast<int32_t>(offsetof(ServerListManager_t83F3E1EE92996F8AF498DFCE86D03CE081379BC0, ___refreshButton_5)); }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * get_refreshButton_5() const { return ___refreshButton_5; }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B ** get_address_of_refreshButton_5() { return &___refreshButton_5; }
	inline void set_refreshButton_5(Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * value)
	{
		___refreshButton_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___refreshButton_5), (void*)value);
	}

	inline static int32_t get_offset_of_startServerButton_6() { return static_cast<int32_t>(offsetof(ServerListManager_t83F3E1EE92996F8AF498DFCE86D03CE081379BC0, ___startServerButton_6)); }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * get_startServerButton_6() const { return ___startServerButton_6; }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B ** get_address_of_startServerButton_6() { return &___startServerButton_6; }
	inline void set_startServerButton_6(Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * value)
	{
		___startServerButton_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___startServerButton_6), (void*)value);
	}

	inline static int32_t get_offset_of_autoRefreshServerlist_7() { return static_cast<int32_t>(offsetof(ServerListManager_t83F3E1EE92996F8AF498DFCE86D03CE081379BC0, ___autoRefreshServerlist_7)); }
	inline bool get_autoRefreshServerlist_7() const { return ___autoRefreshServerlist_7; }
	inline bool* get_address_of_autoRefreshServerlist_7() { return &___autoRefreshServerlist_7; }
	inline void set_autoRefreshServerlist_7(bool value)
	{
		___autoRefreshServerlist_7 = value;
	}

	inline static int32_t get_offset_of_refreshinterval_8() { return static_cast<int32_t>(offsetof(ServerListManager_t83F3E1EE92996F8AF498DFCE86D03CE081379BC0, ___refreshinterval_8)); }
	inline int32_t get_refreshinterval_8() const { return ___refreshinterval_8; }
	inline int32_t* get_address_of_refreshinterval_8() { return &___refreshinterval_8; }
	inline void set_refreshinterval_8(int32_t value)
	{
		___refreshinterval_8 = value;
	}

	inline static int32_t get_offset_of_connector_9() { return static_cast<int32_t>(offsetof(ServerListManager_t83F3E1EE92996F8AF498DFCE86D03CE081379BC0, ___connector_9)); }
	inline ApiConnector_tE4CB8EB0B23BE8F251872D03EE1992BE6A024E94 * get_connector_9() const { return ___connector_9; }
	inline ApiConnector_tE4CB8EB0B23BE8F251872D03EE1992BE6A024E94 ** get_address_of_connector_9() { return &___connector_9; }
	inline void set_connector_9(ApiConnector_tE4CB8EB0B23BE8F251872D03EE1992BE6A024E94 * value)
	{
		___connector_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___connector_9), (void*)value);
	}
};


// Mirror.Cloud.Example.ServerListUI
struct  ServerListUI_t5DDE2460D1DB2D06CEC56B428B5850C9C363C7D7  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Mirror.Cloud.Example.ServerListUIItem Mirror.Cloud.Example.ServerListUI::itemPrefab
	ServerListUIItem_t7741F4958B2713690D4DC1B33E90664EA0563D68 * ___itemPrefab_4;
	// UnityEngine.Transform Mirror.Cloud.Example.ServerListUI::parent
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___parent_5;
	// System.Collections.Generic.List`1<Mirror.Cloud.Example.ServerListUIItem> Mirror.Cloud.Example.ServerListUI::items
	List_1_t848A769EBD33E8829AB5D9648E68B9AD338DDF37 * ___items_6;

public:
	inline static int32_t get_offset_of_itemPrefab_4() { return static_cast<int32_t>(offsetof(ServerListUI_t5DDE2460D1DB2D06CEC56B428B5850C9C363C7D7, ___itemPrefab_4)); }
	inline ServerListUIItem_t7741F4958B2713690D4DC1B33E90664EA0563D68 * get_itemPrefab_4() const { return ___itemPrefab_4; }
	inline ServerListUIItem_t7741F4958B2713690D4DC1B33E90664EA0563D68 ** get_address_of_itemPrefab_4() { return &___itemPrefab_4; }
	inline void set_itemPrefab_4(ServerListUIItem_t7741F4958B2713690D4DC1B33E90664EA0563D68 * value)
	{
		___itemPrefab_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemPrefab_4), (void*)value);
	}

	inline static int32_t get_offset_of_parent_5() { return static_cast<int32_t>(offsetof(ServerListUI_t5DDE2460D1DB2D06CEC56B428B5850C9C363C7D7, ___parent_5)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_parent_5() const { return ___parent_5; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_parent_5() { return &___parent_5; }
	inline void set_parent_5(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___parent_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_5), (void*)value);
	}

	inline static int32_t get_offset_of_items_6() { return static_cast<int32_t>(offsetof(ServerListUI_t5DDE2460D1DB2D06CEC56B428B5850C9C363C7D7, ___items_6)); }
	inline List_1_t848A769EBD33E8829AB5D9648E68B9AD338DDF37 * get_items_6() const { return ___items_6; }
	inline List_1_t848A769EBD33E8829AB5D9648E68B9AD338DDF37 ** get_address_of_items_6() { return &___items_6; }
	inline void set_items_6(List_1_t848A769EBD33E8829AB5D9648E68B9AD338DDF37 * value)
	{
		___items_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___items_6), (void*)value);
	}
};


// Mirror.Cloud.Example.ServerListUIItem
struct  ServerListUIItem_t7741F4958B2713690D4DC1B33E90664EA0563D68  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.UI.Text Mirror.Cloud.Example.ServerListUIItem::nameText
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___nameText_4;
	// UnityEngine.UI.Text Mirror.Cloud.Example.ServerListUIItem::namePlayers
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___namePlayers_5;
	// System.String Mirror.Cloud.Example.ServerListUIItem::playersFormat
	String_t* ___playersFormat_6;
	// UnityEngine.UI.Text Mirror.Cloud.Example.ServerListUIItem::addressText
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___addressText_7;
	// UnityEngine.UI.Button Mirror.Cloud.Example.ServerListUIItem::joinButton
	Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * ___joinButton_8;
	// Mirror.Cloud.ListServerService.ServerJson Mirror.Cloud.Example.ServerListUIItem::server
	ServerJson_t0E3B764038B2CAACD0A933F586BE88F112B8EFAB  ___server_9;

public:
	inline static int32_t get_offset_of_nameText_4() { return static_cast<int32_t>(offsetof(ServerListUIItem_t7741F4958B2713690D4DC1B33E90664EA0563D68, ___nameText_4)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_nameText_4() const { return ___nameText_4; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_nameText_4() { return &___nameText_4; }
	inline void set_nameText_4(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___nameText_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nameText_4), (void*)value);
	}

	inline static int32_t get_offset_of_namePlayers_5() { return static_cast<int32_t>(offsetof(ServerListUIItem_t7741F4958B2713690D4DC1B33E90664EA0563D68, ___namePlayers_5)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_namePlayers_5() const { return ___namePlayers_5; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_namePlayers_5() { return &___namePlayers_5; }
	inline void set_namePlayers_5(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___namePlayers_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___namePlayers_5), (void*)value);
	}

	inline static int32_t get_offset_of_playersFormat_6() { return static_cast<int32_t>(offsetof(ServerListUIItem_t7741F4958B2713690D4DC1B33E90664EA0563D68, ___playersFormat_6)); }
	inline String_t* get_playersFormat_6() const { return ___playersFormat_6; }
	inline String_t** get_address_of_playersFormat_6() { return &___playersFormat_6; }
	inline void set_playersFormat_6(String_t* value)
	{
		___playersFormat_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playersFormat_6), (void*)value);
	}

	inline static int32_t get_offset_of_addressText_7() { return static_cast<int32_t>(offsetof(ServerListUIItem_t7741F4958B2713690D4DC1B33E90664EA0563D68, ___addressText_7)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_addressText_7() const { return ___addressText_7; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_addressText_7() { return &___addressText_7; }
	inline void set_addressText_7(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___addressText_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___addressText_7), (void*)value);
	}

	inline static int32_t get_offset_of_joinButton_8() { return static_cast<int32_t>(offsetof(ServerListUIItem_t7741F4958B2713690D4DC1B33E90664EA0563D68, ___joinButton_8)); }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * get_joinButton_8() const { return ___joinButton_8; }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B ** get_address_of_joinButton_8() { return &___joinButton_8; }
	inline void set_joinButton_8(Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * value)
	{
		___joinButton_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___joinButton_8), (void*)value);
	}

	inline static int32_t get_offset_of_server_9() { return static_cast<int32_t>(offsetof(ServerListUIItem_t7741F4958B2713690D4DC1B33E90664EA0563D68, ___server_9)); }
	inline ServerJson_t0E3B764038B2CAACD0A933F586BE88F112B8EFAB  get_server_9() const { return ___server_9; }
	inline ServerJson_t0E3B764038B2CAACD0A933F586BE88F112B8EFAB * get_address_of_server_9() { return &___server_9; }
	inline void set_server_9(ServerJson_t0E3B764038B2CAACD0A933F586BE88F112B8EFAB  value)
	{
		___server_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___server_9))->___protocol_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___server_9))->___displayName_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___server_9))->___address_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___server_9))->___customAddress_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___server_9))->___customData_7), (void*)NULL);
		#endif
	}
};


// Mirror.Cloud.Examples.InstantiateNetworkManager
struct  InstantiateNetworkManager_tE4DCAE0812FCF13BCFF8368590862847B8352B24  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject Mirror.Cloud.Examples.InstantiateNetworkManager::prefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___prefab_4;

public:
	inline static int32_t get_offset_of_prefab_4() { return static_cast<int32_t>(offsetof(InstantiateNetworkManager_tE4DCAE0812FCF13BCFF8368590862847B8352B24, ___prefab_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_prefab_4() const { return ___prefab_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_prefab_4() { return &___prefab_4; }
	inline void set_prefab_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___prefab_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prefab_4), (void*)value);
	}
};


// Mirror.Examples.Pong.QuitButtonHUD
struct  QuitButtonHUD_tBD87B119A1CFECA7513AC24D2C7C04A145E81C38  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// Mirror.NetworkManager
struct  NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Boolean Mirror.NetworkManager::dontDestroyOnLoad
	bool ___dontDestroyOnLoad_5;
	// System.Boolean Mirror.NetworkManager::runInBackground
	bool ___runInBackground_6;
	// System.Boolean Mirror.NetworkManager::autoStartServerBuild
	bool ___autoStartServerBuild_7;
	// System.Boolean Mirror.NetworkManager::showDebugMessages
	bool ___showDebugMessages_8;
	// System.Int32 Mirror.NetworkManager::serverTickRate
	int32_t ___serverTickRate_9;
	// System.String Mirror.NetworkManager::offlineScene
	String_t* ___offlineScene_10;
	// System.String Mirror.NetworkManager::onlineScene
	String_t* ___onlineScene_11;
	// Mirror.Transport Mirror.NetworkManager::transport
	Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * ___transport_12;
	// System.String Mirror.NetworkManager::networkAddress
	String_t* ___networkAddress_13;
	// System.Int32 Mirror.NetworkManager::maxConnections
	int32_t ___maxConnections_14;
	// System.Boolean Mirror.NetworkManager::disconnectInactiveConnections
	bool ___disconnectInactiveConnections_15;
	// System.Single Mirror.NetworkManager::disconnectInactiveTimeout
	float ___disconnectInactiveTimeout_16;
	// Mirror.NetworkAuthenticator Mirror.NetworkManager::authenticator
	NetworkAuthenticator_t11F7D6E69CFAFD18F3EDDEEC342024139A97E80D * ___authenticator_17;
	// UnityEngine.GameObject Mirror.NetworkManager::playerPrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___playerPrefab_18;
	// System.Boolean Mirror.NetworkManager::autoCreatePlayer
	bool ___autoCreatePlayer_19;
	// Mirror.PlayerSpawnMethod Mirror.NetworkManager::playerSpawnMethod
	int32_t ___playerSpawnMethod_20;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Mirror.NetworkManager::spawnPrefabs
	List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B * ___spawnPrefabs_21;
	// System.Boolean Mirror.NetworkManager::isNetworkActive
	bool ___isNetworkActive_23;
	// System.Boolean Mirror.NetworkManager::clientLoadedScene
	bool ___clientLoadedScene_25;
	// Mirror.NetworkManagerMode Mirror.NetworkManager::<mode>k__BackingField
	int32_t ___U3CmodeU3Ek__BackingField_26;
	// System.Boolean Mirror.NetworkManager::finishStartHostPending
	bool ___finishStartHostPending_27;
	// Mirror.SceneOperation Mirror.NetworkManager::clientSceneOperation
	uint8_t ___clientSceneOperation_30;

public:
	inline static int32_t get_offset_of_dontDestroyOnLoad_5() { return static_cast<int32_t>(offsetof(NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE, ___dontDestroyOnLoad_5)); }
	inline bool get_dontDestroyOnLoad_5() const { return ___dontDestroyOnLoad_5; }
	inline bool* get_address_of_dontDestroyOnLoad_5() { return &___dontDestroyOnLoad_5; }
	inline void set_dontDestroyOnLoad_5(bool value)
	{
		___dontDestroyOnLoad_5 = value;
	}

	inline static int32_t get_offset_of_runInBackground_6() { return static_cast<int32_t>(offsetof(NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE, ___runInBackground_6)); }
	inline bool get_runInBackground_6() const { return ___runInBackground_6; }
	inline bool* get_address_of_runInBackground_6() { return &___runInBackground_6; }
	inline void set_runInBackground_6(bool value)
	{
		___runInBackground_6 = value;
	}

	inline static int32_t get_offset_of_autoStartServerBuild_7() { return static_cast<int32_t>(offsetof(NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE, ___autoStartServerBuild_7)); }
	inline bool get_autoStartServerBuild_7() const { return ___autoStartServerBuild_7; }
	inline bool* get_address_of_autoStartServerBuild_7() { return &___autoStartServerBuild_7; }
	inline void set_autoStartServerBuild_7(bool value)
	{
		___autoStartServerBuild_7 = value;
	}

	inline static int32_t get_offset_of_showDebugMessages_8() { return static_cast<int32_t>(offsetof(NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE, ___showDebugMessages_8)); }
	inline bool get_showDebugMessages_8() const { return ___showDebugMessages_8; }
	inline bool* get_address_of_showDebugMessages_8() { return &___showDebugMessages_8; }
	inline void set_showDebugMessages_8(bool value)
	{
		___showDebugMessages_8 = value;
	}

	inline static int32_t get_offset_of_serverTickRate_9() { return static_cast<int32_t>(offsetof(NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE, ___serverTickRate_9)); }
	inline int32_t get_serverTickRate_9() const { return ___serverTickRate_9; }
	inline int32_t* get_address_of_serverTickRate_9() { return &___serverTickRate_9; }
	inline void set_serverTickRate_9(int32_t value)
	{
		___serverTickRate_9 = value;
	}

	inline static int32_t get_offset_of_offlineScene_10() { return static_cast<int32_t>(offsetof(NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE, ___offlineScene_10)); }
	inline String_t* get_offlineScene_10() const { return ___offlineScene_10; }
	inline String_t** get_address_of_offlineScene_10() { return &___offlineScene_10; }
	inline void set_offlineScene_10(String_t* value)
	{
		___offlineScene_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___offlineScene_10), (void*)value);
	}

	inline static int32_t get_offset_of_onlineScene_11() { return static_cast<int32_t>(offsetof(NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE, ___onlineScene_11)); }
	inline String_t* get_onlineScene_11() const { return ___onlineScene_11; }
	inline String_t** get_address_of_onlineScene_11() { return &___onlineScene_11; }
	inline void set_onlineScene_11(String_t* value)
	{
		___onlineScene_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onlineScene_11), (void*)value);
	}

	inline static int32_t get_offset_of_transport_12() { return static_cast<int32_t>(offsetof(NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE, ___transport_12)); }
	inline Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * get_transport_12() const { return ___transport_12; }
	inline Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 ** get_address_of_transport_12() { return &___transport_12; }
	inline void set_transport_12(Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * value)
	{
		___transport_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transport_12), (void*)value);
	}

	inline static int32_t get_offset_of_networkAddress_13() { return static_cast<int32_t>(offsetof(NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE, ___networkAddress_13)); }
	inline String_t* get_networkAddress_13() const { return ___networkAddress_13; }
	inline String_t** get_address_of_networkAddress_13() { return &___networkAddress_13; }
	inline void set_networkAddress_13(String_t* value)
	{
		___networkAddress_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___networkAddress_13), (void*)value);
	}

	inline static int32_t get_offset_of_maxConnections_14() { return static_cast<int32_t>(offsetof(NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE, ___maxConnections_14)); }
	inline int32_t get_maxConnections_14() const { return ___maxConnections_14; }
	inline int32_t* get_address_of_maxConnections_14() { return &___maxConnections_14; }
	inline void set_maxConnections_14(int32_t value)
	{
		___maxConnections_14 = value;
	}

	inline static int32_t get_offset_of_disconnectInactiveConnections_15() { return static_cast<int32_t>(offsetof(NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE, ___disconnectInactiveConnections_15)); }
	inline bool get_disconnectInactiveConnections_15() const { return ___disconnectInactiveConnections_15; }
	inline bool* get_address_of_disconnectInactiveConnections_15() { return &___disconnectInactiveConnections_15; }
	inline void set_disconnectInactiveConnections_15(bool value)
	{
		___disconnectInactiveConnections_15 = value;
	}

	inline static int32_t get_offset_of_disconnectInactiveTimeout_16() { return static_cast<int32_t>(offsetof(NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE, ___disconnectInactiveTimeout_16)); }
	inline float get_disconnectInactiveTimeout_16() const { return ___disconnectInactiveTimeout_16; }
	inline float* get_address_of_disconnectInactiveTimeout_16() { return &___disconnectInactiveTimeout_16; }
	inline void set_disconnectInactiveTimeout_16(float value)
	{
		___disconnectInactiveTimeout_16 = value;
	}

	inline static int32_t get_offset_of_authenticator_17() { return static_cast<int32_t>(offsetof(NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE, ___authenticator_17)); }
	inline NetworkAuthenticator_t11F7D6E69CFAFD18F3EDDEEC342024139A97E80D * get_authenticator_17() const { return ___authenticator_17; }
	inline NetworkAuthenticator_t11F7D6E69CFAFD18F3EDDEEC342024139A97E80D ** get_address_of_authenticator_17() { return &___authenticator_17; }
	inline void set_authenticator_17(NetworkAuthenticator_t11F7D6E69CFAFD18F3EDDEEC342024139A97E80D * value)
	{
		___authenticator_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___authenticator_17), (void*)value);
	}

	inline static int32_t get_offset_of_playerPrefab_18() { return static_cast<int32_t>(offsetof(NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE, ___playerPrefab_18)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_playerPrefab_18() const { return ___playerPrefab_18; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_playerPrefab_18() { return &___playerPrefab_18; }
	inline void set_playerPrefab_18(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___playerPrefab_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerPrefab_18), (void*)value);
	}

	inline static int32_t get_offset_of_autoCreatePlayer_19() { return static_cast<int32_t>(offsetof(NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE, ___autoCreatePlayer_19)); }
	inline bool get_autoCreatePlayer_19() const { return ___autoCreatePlayer_19; }
	inline bool* get_address_of_autoCreatePlayer_19() { return &___autoCreatePlayer_19; }
	inline void set_autoCreatePlayer_19(bool value)
	{
		___autoCreatePlayer_19 = value;
	}

	inline static int32_t get_offset_of_playerSpawnMethod_20() { return static_cast<int32_t>(offsetof(NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE, ___playerSpawnMethod_20)); }
	inline int32_t get_playerSpawnMethod_20() const { return ___playerSpawnMethod_20; }
	inline int32_t* get_address_of_playerSpawnMethod_20() { return &___playerSpawnMethod_20; }
	inline void set_playerSpawnMethod_20(int32_t value)
	{
		___playerSpawnMethod_20 = value;
	}

	inline static int32_t get_offset_of_spawnPrefabs_21() { return static_cast<int32_t>(offsetof(NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE, ___spawnPrefabs_21)); }
	inline List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B * get_spawnPrefabs_21() const { return ___spawnPrefabs_21; }
	inline List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B ** get_address_of_spawnPrefabs_21() { return &___spawnPrefabs_21; }
	inline void set_spawnPrefabs_21(List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B * value)
	{
		___spawnPrefabs_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spawnPrefabs_21), (void*)value);
	}

	inline static int32_t get_offset_of_isNetworkActive_23() { return static_cast<int32_t>(offsetof(NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE, ___isNetworkActive_23)); }
	inline bool get_isNetworkActive_23() const { return ___isNetworkActive_23; }
	inline bool* get_address_of_isNetworkActive_23() { return &___isNetworkActive_23; }
	inline void set_isNetworkActive_23(bool value)
	{
		___isNetworkActive_23 = value;
	}

	inline static int32_t get_offset_of_clientLoadedScene_25() { return static_cast<int32_t>(offsetof(NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE, ___clientLoadedScene_25)); }
	inline bool get_clientLoadedScene_25() const { return ___clientLoadedScene_25; }
	inline bool* get_address_of_clientLoadedScene_25() { return &___clientLoadedScene_25; }
	inline void set_clientLoadedScene_25(bool value)
	{
		___clientLoadedScene_25 = value;
	}

	inline static int32_t get_offset_of_U3CmodeU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE, ___U3CmodeU3Ek__BackingField_26)); }
	inline int32_t get_U3CmodeU3Ek__BackingField_26() const { return ___U3CmodeU3Ek__BackingField_26; }
	inline int32_t* get_address_of_U3CmodeU3Ek__BackingField_26() { return &___U3CmodeU3Ek__BackingField_26; }
	inline void set_U3CmodeU3Ek__BackingField_26(int32_t value)
	{
		___U3CmodeU3Ek__BackingField_26 = value;
	}

	inline static int32_t get_offset_of_finishStartHostPending_27() { return static_cast<int32_t>(offsetof(NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE, ___finishStartHostPending_27)); }
	inline bool get_finishStartHostPending_27() const { return ___finishStartHostPending_27; }
	inline bool* get_address_of_finishStartHostPending_27() { return &___finishStartHostPending_27; }
	inline void set_finishStartHostPending_27(bool value)
	{
		___finishStartHostPending_27 = value;
	}

	inline static int32_t get_offset_of_clientSceneOperation_30() { return static_cast<int32_t>(offsetof(NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE, ___clientSceneOperation_30)); }
	inline uint8_t get_clientSceneOperation_30() const { return ___clientSceneOperation_30; }
	inline uint8_t* get_address_of_clientSceneOperation_30() { return &___clientSceneOperation_30; }
	inline void set_clientSceneOperation_30(uint8_t value)
	{
		___clientSceneOperation_30 = value;
	}
};

struct NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE_StaticFields
{
public:
	// UnityEngine.ILogger Mirror.NetworkManager::logger
	RuntimeObject* ___logger_4;
	// Mirror.NetworkManager Mirror.NetworkManager::<singleton>k__BackingField
	NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE * ___U3CsingletonU3Ek__BackingField_22;
	// Mirror.NetworkConnection Mirror.NetworkManager::clientReadyConnection
	NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * ___clientReadyConnection_24;
	// System.String Mirror.NetworkManager::<networkSceneName>k__BackingField
	String_t* ___U3CnetworkSceneNameU3Ek__BackingField_28;
	// UnityEngine.AsyncOperation Mirror.NetworkManager::loadingSceneAsync
	AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D * ___loadingSceneAsync_29;
	// System.Int32 Mirror.NetworkManager::startPositionIndex
	int32_t ___startPositionIndex_31;
	// System.Collections.Generic.List`1<UnityEngine.Transform> Mirror.NetworkManager::startPositions
	List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 * ___startPositions_32;

public:
	inline static int32_t get_offset_of_logger_4() { return static_cast<int32_t>(offsetof(NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE_StaticFields, ___logger_4)); }
	inline RuntimeObject* get_logger_4() const { return ___logger_4; }
	inline RuntimeObject** get_address_of_logger_4() { return &___logger_4; }
	inline void set_logger_4(RuntimeObject* value)
	{
		___logger_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___logger_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsingletonU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE_StaticFields, ___U3CsingletonU3Ek__BackingField_22)); }
	inline NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE * get_U3CsingletonU3Ek__BackingField_22() const { return ___U3CsingletonU3Ek__BackingField_22; }
	inline NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE ** get_address_of_U3CsingletonU3Ek__BackingField_22() { return &___U3CsingletonU3Ek__BackingField_22; }
	inline void set_U3CsingletonU3Ek__BackingField_22(NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE * value)
	{
		___U3CsingletonU3Ek__BackingField_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsingletonU3Ek__BackingField_22), (void*)value);
	}

	inline static int32_t get_offset_of_clientReadyConnection_24() { return static_cast<int32_t>(offsetof(NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE_StaticFields, ___clientReadyConnection_24)); }
	inline NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * get_clientReadyConnection_24() const { return ___clientReadyConnection_24; }
	inline NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 ** get_address_of_clientReadyConnection_24() { return &___clientReadyConnection_24; }
	inline void set_clientReadyConnection_24(NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * value)
	{
		___clientReadyConnection_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clientReadyConnection_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CnetworkSceneNameU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE_StaticFields, ___U3CnetworkSceneNameU3Ek__BackingField_28)); }
	inline String_t* get_U3CnetworkSceneNameU3Ek__BackingField_28() const { return ___U3CnetworkSceneNameU3Ek__BackingField_28; }
	inline String_t** get_address_of_U3CnetworkSceneNameU3Ek__BackingField_28() { return &___U3CnetworkSceneNameU3Ek__BackingField_28; }
	inline void set_U3CnetworkSceneNameU3Ek__BackingField_28(String_t* value)
	{
		___U3CnetworkSceneNameU3Ek__BackingField_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnetworkSceneNameU3Ek__BackingField_28), (void*)value);
	}

	inline static int32_t get_offset_of_loadingSceneAsync_29() { return static_cast<int32_t>(offsetof(NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE_StaticFields, ___loadingSceneAsync_29)); }
	inline AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D * get_loadingSceneAsync_29() const { return ___loadingSceneAsync_29; }
	inline AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D ** get_address_of_loadingSceneAsync_29() { return &___loadingSceneAsync_29; }
	inline void set_loadingSceneAsync_29(AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D * value)
	{
		___loadingSceneAsync_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___loadingSceneAsync_29), (void*)value);
	}

	inline static int32_t get_offset_of_startPositionIndex_31() { return static_cast<int32_t>(offsetof(NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE_StaticFields, ___startPositionIndex_31)); }
	inline int32_t get_startPositionIndex_31() const { return ___startPositionIndex_31; }
	inline int32_t* get_address_of_startPositionIndex_31() { return &___startPositionIndex_31; }
	inline void set_startPositionIndex_31(int32_t value)
	{
		___startPositionIndex_31 = value;
	}

	inline static int32_t get_offset_of_startPositions_32() { return static_cast<int32_t>(offsetof(NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE_StaticFields, ___startPositions_32)); }
	inline List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 * get_startPositions_32() const { return ___startPositions_32; }
	inline List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 ** get_address_of_startPositions_32() { return &___startPositions_32; }
	inline void set_startPositions_32(List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 * value)
	{
		___startPositions_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___startPositions_32), (void*)value);
	}
};


// Mirror.Transport
struct  Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Events.UnityEvent Mirror.Transport::OnClientConnected
	UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * ___OnClientConnected_5;
	// Mirror.ClientDataReceivedEvent Mirror.Transport::OnClientDataReceived
	ClientDataReceivedEvent_tE88A959A61C017E5020AEE7F285778FC107B1F6C * ___OnClientDataReceived_6;
	// Mirror.UnityEventException Mirror.Transport::OnClientError
	UnityEventException_tC51123DDAD93C3B3E6F3C32395828A4FEA1CAC74 * ___OnClientError_7;
	// UnityEngine.Events.UnityEvent Mirror.Transport::OnClientDisconnected
	UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * ___OnClientDisconnected_8;
	// Mirror.UnityEventInt Mirror.Transport::OnServerConnected
	UnityEventInt_t25605BA0F5D789946A94CBAF118716E9FF3EE69A * ___OnServerConnected_9;
	// Mirror.ServerDataReceivedEvent Mirror.Transport::OnServerDataReceived
	ServerDataReceivedEvent_t9D74CC04C46DACC20B0D2618566B03B4E92A4B15 * ___OnServerDataReceived_10;
	// Mirror.UnityEventIntException Mirror.Transport::OnServerError
	UnityEventIntException_t4C17526221B8BEEAA11C8D30DB004ACE4F1BEFF4 * ___OnServerError_11;
	// Mirror.UnityEventInt Mirror.Transport::OnServerDisconnected
	UnityEventInt_t25605BA0F5D789946A94CBAF118716E9FF3EE69A * ___OnServerDisconnected_12;

public:
	inline static int32_t get_offset_of_OnClientConnected_5() { return static_cast<int32_t>(offsetof(Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195, ___OnClientConnected_5)); }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * get_OnClientConnected_5() const { return ___OnClientConnected_5; }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F ** get_address_of_OnClientConnected_5() { return &___OnClientConnected_5; }
	inline void set_OnClientConnected_5(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * value)
	{
		___OnClientConnected_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnClientConnected_5), (void*)value);
	}

	inline static int32_t get_offset_of_OnClientDataReceived_6() { return static_cast<int32_t>(offsetof(Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195, ___OnClientDataReceived_6)); }
	inline ClientDataReceivedEvent_tE88A959A61C017E5020AEE7F285778FC107B1F6C * get_OnClientDataReceived_6() const { return ___OnClientDataReceived_6; }
	inline ClientDataReceivedEvent_tE88A959A61C017E5020AEE7F285778FC107B1F6C ** get_address_of_OnClientDataReceived_6() { return &___OnClientDataReceived_6; }
	inline void set_OnClientDataReceived_6(ClientDataReceivedEvent_tE88A959A61C017E5020AEE7F285778FC107B1F6C * value)
	{
		___OnClientDataReceived_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnClientDataReceived_6), (void*)value);
	}

	inline static int32_t get_offset_of_OnClientError_7() { return static_cast<int32_t>(offsetof(Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195, ___OnClientError_7)); }
	inline UnityEventException_tC51123DDAD93C3B3E6F3C32395828A4FEA1CAC74 * get_OnClientError_7() const { return ___OnClientError_7; }
	inline UnityEventException_tC51123DDAD93C3B3E6F3C32395828A4FEA1CAC74 ** get_address_of_OnClientError_7() { return &___OnClientError_7; }
	inline void set_OnClientError_7(UnityEventException_tC51123DDAD93C3B3E6F3C32395828A4FEA1CAC74 * value)
	{
		___OnClientError_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnClientError_7), (void*)value);
	}

	inline static int32_t get_offset_of_OnClientDisconnected_8() { return static_cast<int32_t>(offsetof(Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195, ___OnClientDisconnected_8)); }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * get_OnClientDisconnected_8() const { return ___OnClientDisconnected_8; }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F ** get_address_of_OnClientDisconnected_8() { return &___OnClientDisconnected_8; }
	inline void set_OnClientDisconnected_8(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * value)
	{
		___OnClientDisconnected_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnClientDisconnected_8), (void*)value);
	}

	inline static int32_t get_offset_of_OnServerConnected_9() { return static_cast<int32_t>(offsetof(Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195, ___OnServerConnected_9)); }
	inline UnityEventInt_t25605BA0F5D789946A94CBAF118716E9FF3EE69A * get_OnServerConnected_9() const { return ___OnServerConnected_9; }
	inline UnityEventInt_t25605BA0F5D789946A94CBAF118716E9FF3EE69A ** get_address_of_OnServerConnected_9() { return &___OnServerConnected_9; }
	inline void set_OnServerConnected_9(UnityEventInt_t25605BA0F5D789946A94CBAF118716E9FF3EE69A * value)
	{
		___OnServerConnected_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnServerConnected_9), (void*)value);
	}

	inline static int32_t get_offset_of_OnServerDataReceived_10() { return static_cast<int32_t>(offsetof(Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195, ___OnServerDataReceived_10)); }
	inline ServerDataReceivedEvent_t9D74CC04C46DACC20B0D2618566B03B4E92A4B15 * get_OnServerDataReceived_10() const { return ___OnServerDataReceived_10; }
	inline ServerDataReceivedEvent_t9D74CC04C46DACC20B0D2618566B03B4E92A4B15 ** get_address_of_OnServerDataReceived_10() { return &___OnServerDataReceived_10; }
	inline void set_OnServerDataReceived_10(ServerDataReceivedEvent_t9D74CC04C46DACC20B0D2618566B03B4E92A4B15 * value)
	{
		___OnServerDataReceived_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnServerDataReceived_10), (void*)value);
	}

	inline static int32_t get_offset_of_OnServerError_11() { return static_cast<int32_t>(offsetof(Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195, ___OnServerError_11)); }
	inline UnityEventIntException_t4C17526221B8BEEAA11C8D30DB004ACE4F1BEFF4 * get_OnServerError_11() const { return ___OnServerError_11; }
	inline UnityEventIntException_t4C17526221B8BEEAA11C8D30DB004ACE4F1BEFF4 ** get_address_of_OnServerError_11() { return &___OnServerError_11; }
	inline void set_OnServerError_11(UnityEventIntException_t4C17526221B8BEEAA11C8D30DB004ACE4F1BEFF4 * value)
	{
		___OnServerError_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnServerError_11), (void*)value);
	}

	inline static int32_t get_offset_of_OnServerDisconnected_12() { return static_cast<int32_t>(offsetof(Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195, ___OnServerDisconnected_12)); }
	inline UnityEventInt_t25605BA0F5D789946A94CBAF118716E9FF3EE69A * get_OnServerDisconnected_12() const { return ___OnServerDisconnected_12; }
	inline UnityEventInt_t25605BA0F5D789946A94CBAF118716E9FF3EE69A ** get_address_of_OnServerDisconnected_12() { return &___OnServerDisconnected_12; }
	inline void set_OnServerDisconnected_12(UnityEventInt_t25605BA0F5D789946A94CBAF118716E9FF3EE69A * value)
	{
		___OnServerDisconnected_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnServerDisconnected_12), (void*)value);
	}
};

struct Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195_StaticFields
{
public:
	// Mirror.Transport Mirror.Transport::activeTransport
	Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * ___activeTransport_4;

public:
	inline static int32_t get_offset_of_activeTransport_4() { return static_cast<int32_t>(offsetof(Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195_StaticFields, ___activeTransport_4)); }
	inline Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * get_activeTransport_4() const { return ___activeTransport_4; }
	inline Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 ** get_address_of_activeTransport_4() { return &___activeTransport_4; }
	inline void set_activeTransport_4(Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * value)
	{
		___activeTransport_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activeTransport_4), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// Mirror.Cloud.Example.NetworkManagerListServer
struct  NetworkManagerListServer_t8B70D286CD2A4E966CDE10203D4720993CFBFCF7  : public NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE
{
public:
	// System.Action Mirror.Cloud.Example.NetworkManagerListServer::onServerStarted
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___onServerStarted_33;
	// System.Action Mirror.Cloud.Example.NetworkManagerListServer::onServerStopped
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___onServerStopped_34;
	// Mirror.Cloud.Example.NetworkManagerListServer_OnPlayerListChanged Mirror.Cloud.Example.NetworkManagerListServer::onPlayerListChanged
	OnPlayerListChanged_tA8004710D81957B7920259B79EE6014994A802BA * ___onPlayerListChanged_35;

public:
	inline static int32_t get_offset_of_onServerStarted_33() { return static_cast<int32_t>(offsetof(NetworkManagerListServer_t8B70D286CD2A4E966CDE10203D4720993CFBFCF7, ___onServerStarted_33)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_onServerStarted_33() const { return ___onServerStarted_33; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_onServerStarted_33() { return &___onServerStarted_33; }
	inline void set_onServerStarted_33(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___onServerStarted_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onServerStarted_33), (void*)value);
	}

	inline static int32_t get_offset_of_onServerStopped_34() { return static_cast<int32_t>(offsetof(NetworkManagerListServer_t8B70D286CD2A4E966CDE10203D4720993CFBFCF7, ___onServerStopped_34)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_onServerStopped_34() const { return ___onServerStopped_34; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_onServerStopped_34() { return &___onServerStopped_34; }
	inline void set_onServerStopped_34(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___onServerStopped_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onServerStopped_34), (void*)value);
	}

	inline static int32_t get_offset_of_onPlayerListChanged_35() { return static_cast<int32_t>(offsetof(NetworkManagerListServer_t8B70D286CD2A4E966CDE10203D4720993CFBFCF7, ___onPlayerListChanged_35)); }
	inline OnPlayerListChanged_tA8004710D81957B7920259B79EE6014994A802BA * get_onPlayerListChanged_35() const { return ___onPlayerListChanged_35; }
	inline OnPlayerListChanged_tA8004710D81957B7920259B79EE6014994A802BA ** get_address_of_onPlayerListChanged_35() { return &___onPlayerListChanged_35; }
	inline void set_onPlayerListChanged_35(OnPlayerListChanged_tA8004710D81957B7920259B79EE6014994A802BA * value)
	{
		___onPlayerListChanged_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPlayerListChanged_35), (void*)value);
	}
};


// UnityEngine.UI.Graphic
struct  Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_RectTransform_11;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * ___m_CanvasRenderer_12;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___m_Canvas_13;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_14;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_15;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyLayoutCallback_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyVertsCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyMaterialCallback_18;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___m_CachedMesh_21;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___m_CachedUvs_22;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * ___m_ColorTweenRunner_23;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Material_6)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Color_7)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_11() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RectTransform_11)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_RectTransform_11() const { return ___m_RectTransform_11; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_RectTransform_11() { return &___m_RectTransform_11; }
	inline void set_m_RectTransform_11(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_RectTransform_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_12() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CanvasRenderer_12)); }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * get_m_CanvasRenderer_12() const { return ___m_CanvasRenderer_12; }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 ** get_address_of_m_CanvasRenderer_12() { return &___m_CanvasRenderer_12; }
	inline void set_m_CanvasRenderer_12(CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * value)
	{
		___m_CanvasRenderer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_13() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Canvas_13)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_m_Canvas_13() const { return ___m_Canvas_13; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_m_Canvas_13() { return &___m_Canvas_13; }
	inline void set_m_Canvas_13(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___m_Canvas_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_14() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_VertsDirty_14)); }
	inline bool get_m_VertsDirty_14() const { return ___m_VertsDirty_14; }
	inline bool* get_address_of_m_VertsDirty_14() { return &___m_VertsDirty_14; }
	inline void set_m_VertsDirty_14(bool value)
	{
		___m_VertsDirty_14 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_MaterialDirty_15)); }
	inline bool get_m_MaterialDirty_15() const { return ___m_MaterialDirty_15; }
	inline bool* get_address_of_m_MaterialDirty_15() { return &___m_MaterialDirty_15; }
	inline void set_m_MaterialDirty_15(bool value)
	{
		___m_MaterialDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_16() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyLayoutCallback_16)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyLayoutCallback_16() const { return ___m_OnDirtyLayoutCallback_16; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyLayoutCallback_16() { return &___m_OnDirtyLayoutCallback_16; }
	inline void set_m_OnDirtyLayoutCallback_16(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyLayoutCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyVertsCallback_17)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyVertsCallback_17() const { return ___m_OnDirtyVertsCallback_17; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyVertsCallback_17() { return &___m_OnDirtyVertsCallback_17; }
	inline void set_m_OnDirtyVertsCallback_17(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyVertsCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyMaterialCallback_18)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyMaterialCallback_18() const { return ___m_OnDirtyMaterialCallback_18; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyMaterialCallback_18() { return &___m_OnDirtyMaterialCallback_18; }
	inline void set_m_OnDirtyMaterialCallback_18(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyMaterialCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_21() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedMesh_21)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_m_CachedMesh_21() const { return ___m_CachedMesh_21; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_m_CachedMesh_21() { return &___m_CachedMesh_21; }
	inline void set_m_CachedMesh_21(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___m_CachedMesh_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_22() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedUvs_22)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_m_CachedUvs_22() const { return ___m_CachedUvs_22; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_m_CachedUvs_22() { return &___m_CachedUvs_22; }
	inline void set_m_CachedUvs_22(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___m_CachedUvs_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_23() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_ColorTweenRunner_23)); }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * get_m_ColorTweenRunner_23() const { return ___m_ColorTweenRunner_23; }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 ** get_address_of_m_ColorTweenRunner_23() { return &___m_ColorTweenRunner_23; }
	inline void set_m_ColorTweenRunner_23(TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * value)
	{
		___m_ColorTweenRunner_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_24(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_24 = value;
	}
};

struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___s_Mesh_19;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * ___s_VertexHelper_20;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_DefaultUI_4)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_19() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_Mesh_19)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_s_Mesh_19() const { return ___s_Mesh_19; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_s_Mesh_19() { return &___s_Mesh_19; }
	inline void set_s_Mesh_19(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___s_Mesh_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_20() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_VertexHelper_20)); }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * get_s_VertexHelper_20() const { return ___s_VertexHelper_20; }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F ** get_address_of_s_VertexHelper_20() { return &___s_VertexHelper_20; }
	inline void set_s_VertexHelper_20(VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * value)
	{
		___s_VertexHelper_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_20), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct  Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07  ___m_Navigation_6;
	// UnityEngine.UI.Selectable_Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_7;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA  ___m_Colors_8;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A  ___m_SpriteState_9;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 * ___m_AnimationTriggers_10;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_11;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * ___m_TargetGraphic_12;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_13;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_14;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_17;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_tE7746C234F913BA0579DAC892E7288A1C7664A0A * ___m_CanvasGroupCache_18;

public:
	inline static int32_t get_offset_of_m_Navigation_6() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Navigation_6)); }
	inline Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07  get_m_Navigation_6() const { return ___m_Navigation_6; }
	inline Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07 * get_address_of_m_Navigation_6() { return &___m_Navigation_6; }
	inline void set_m_Navigation_6(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07  value)
	{
		___m_Navigation_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_6))->___m_SelectOnUp_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_6))->___m_SelectOnDown_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_6))->___m_SelectOnLeft_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_6))->___m_SelectOnRight_4), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_7() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Transition_7)); }
	inline int32_t get_m_Transition_7() const { return ___m_Transition_7; }
	inline int32_t* get_address_of_m_Transition_7() { return &___m_Transition_7; }
	inline void set_m_Transition_7(int32_t value)
	{
		___m_Transition_7 = value;
	}

	inline static int32_t get_offset_of_m_Colors_8() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Colors_8)); }
	inline ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA  get_m_Colors_8() const { return ___m_Colors_8; }
	inline ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA * get_address_of_m_Colors_8() { return &___m_Colors_8; }
	inline void set_m_Colors_8(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA  value)
	{
		___m_Colors_8 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_9() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_SpriteState_9)); }
	inline SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A  get_m_SpriteState_9() const { return ___m_SpriteState_9; }
	inline SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A * get_address_of_m_SpriteState_9() { return &___m_SpriteState_9; }
	inline void set_m_SpriteState_9(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A  value)
	{
		___m_SpriteState_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_9))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_9))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_9))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_9))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_10() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_AnimationTriggers_10)); }
	inline AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 * get_m_AnimationTriggers_10() const { return ___m_AnimationTriggers_10; }
	inline AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 ** get_address_of_m_AnimationTriggers_10() { return &___m_AnimationTriggers_10; }
	inline void set_m_AnimationTriggers_10(AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 * value)
	{
		___m_AnimationTriggers_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_11() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Interactable_11)); }
	inline bool get_m_Interactable_11() const { return ___m_Interactable_11; }
	inline bool* get_address_of_m_Interactable_11() { return &___m_Interactable_11; }
	inline void set_m_Interactable_11(bool value)
	{
		___m_Interactable_11 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_12() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_TargetGraphic_12)); }
	inline Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * get_m_TargetGraphic_12() const { return ___m_TargetGraphic_12; }
	inline Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 ** get_address_of_m_TargetGraphic_12() { return &___m_TargetGraphic_12; }
	inline void set_m_TargetGraphic_12(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * value)
	{
		___m_TargetGraphic_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_13() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_GroupsAllowInteraction_13)); }
	inline bool get_m_GroupsAllowInteraction_13() const { return ___m_GroupsAllowInteraction_13; }
	inline bool* get_address_of_m_GroupsAllowInteraction_13() { return &___m_GroupsAllowInteraction_13; }
	inline void set_m_GroupsAllowInteraction_13(bool value)
	{
		___m_GroupsAllowInteraction_13 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_14() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_CurrentIndex_14)); }
	inline int32_t get_m_CurrentIndex_14() const { return ___m_CurrentIndex_14; }
	inline int32_t* get_address_of_m_CurrentIndex_14() { return &___m_CurrentIndex_14; }
	inline void set_m_CurrentIndex_14(int32_t value)
	{
		___m_CurrentIndex_14 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___U3CisPointerInsideU3Ek__BackingField_15)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_15() const { return ___U3CisPointerInsideU3Ek__BackingField_15; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_15() { return &___U3CisPointerInsideU3Ek__BackingField_15; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_15(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___U3CisPointerDownU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_16() const { return ___U3CisPointerDownU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_16() { return &___U3CisPointerDownU3Ek__BackingField_16; }
	inline void set_U3CisPointerDownU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___U3ChasSelectionU3Ek__BackingField_17)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_17() const { return ___U3ChasSelectionU3Ek__BackingField_17; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_17() { return &___U3ChasSelectionU3Ek__BackingField_17; }
	inline void set_U3ChasSelectionU3Ek__BackingField_17(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_18() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_CanvasGroupCache_18)); }
	inline List_1_tE7746C234F913BA0579DAC892E7288A1C7664A0A * get_m_CanvasGroupCache_18() const { return ___m_CanvasGroupCache_18; }
	inline List_1_tE7746C234F913BA0579DAC892E7288A1C7664A0A ** get_address_of_m_CanvasGroupCache_18() { return &___m_CanvasGroupCache_18; }
	inline void set_m_CanvasGroupCache_18(List_1_tE7746C234F913BA0579DAC892E7288A1C7664A0A * value)
	{
		___m_CanvasGroupCache_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_18), (void*)value);
	}
};

struct Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.UI.Button
struct  Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B  : public Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A
{
public:
	// UnityEngine.UI.Button_ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * ___m_OnClick_19;

public:
	inline static int32_t get_offset_of_m_OnClick_19() { return static_cast<int32_t>(offsetof(Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B, ___m_OnClick_19)); }
	inline ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * get_m_OnClick_19() const { return ___m_OnClick_19; }
	inline ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB ** get_address_of_m_OnClick_19() { return &___m_OnClick_19; }
	inline void set_m_OnClick_19(ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * value)
	{
		___m_OnClick_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnClick_19), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F  : public Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_25;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_MaskMaterial_26;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * ___m_ParentMask_27;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_30;
	// UnityEngine.UI.MaskableGraphic_CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * ___m_OnCullStateChanged_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_32;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_33;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_Corners_34;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculateStencil_25)); }
	inline bool get_m_ShouldRecalculateStencil_25() const { return ___m_ShouldRecalculateStencil_25; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_25() { return &___m_ShouldRecalculateStencil_25; }
	inline void set_m_ShouldRecalculateStencil_25(bool value)
	{
		___m_ShouldRecalculateStencil_25 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_MaskMaterial_26)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_MaskMaterial_26() const { return ___m_MaskMaterial_26; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_MaskMaterial_26() { return &___m_MaskMaterial_26; }
	inline void set_m_MaskMaterial_26(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_MaskMaterial_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ParentMask_27)); }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * get_m_ParentMask_27() const { return ___m_ParentMask_27; }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B ** get_address_of_m_ParentMask_27() { return &___m_ParentMask_27; }
	inline void set_m_ParentMask_27(RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * value)
	{
		___m_ParentMask_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Maskable_28)); }
	inline bool get_m_Maskable_28() const { return ___m_Maskable_28; }
	inline bool* get_address_of_m_Maskable_28() { return &___m_Maskable_28; }
	inline void set_m_Maskable_28(bool value)
	{
		___m_Maskable_28 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_IsMaskingGraphic_29)); }
	inline bool get_m_IsMaskingGraphic_29() const { return ___m_IsMaskingGraphic_29; }
	inline bool* get_address_of_m_IsMaskingGraphic_29() { return &___m_IsMaskingGraphic_29; }
	inline void set_m_IsMaskingGraphic_29(bool value)
	{
		___m_IsMaskingGraphic_29 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_IncludeForMasking_30)); }
	inline bool get_m_IncludeForMasking_30() const { return ___m_IncludeForMasking_30; }
	inline bool* get_address_of_m_IncludeForMasking_30() { return &___m_IncludeForMasking_30; }
	inline void set_m_IncludeForMasking_30(bool value)
	{
		___m_IncludeForMasking_30 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_OnCullStateChanged_31)); }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * get_m_OnCullStateChanged_31() const { return ___m_OnCullStateChanged_31; }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 ** get_address_of_m_OnCullStateChanged_31() { return &___m_OnCullStateChanged_31; }
	inline void set_m_OnCullStateChanged_31(CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * value)
	{
		___m_OnCullStateChanged_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculate_32)); }
	inline bool get_m_ShouldRecalculate_32() const { return ___m_ShouldRecalculate_32; }
	inline bool* get_address_of_m_ShouldRecalculate_32() { return &___m_ShouldRecalculate_32; }
	inline void set_m_ShouldRecalculate_32(bool value)
	{
		___m_ShouldRecalculate_32 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_StencilValue_33)); }
	inline int32_t get_m_StencilValue_33() const { return ___m_StencilValue_33; }
	inline int32_t* get_address_of_m_StencilValue_33() { return &___m_StencilValue_33; }
	inline void set_m_StencilValue_33(int32_t value)
	{
		___m_StencilValue_33 = value;
	}

	inline static int32_t get_offset_of_m_Corners_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Corners_34)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_Corners_34() const { return ___m_Corners_34; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_Corners_34() { return &___m_Corners_34; }
	inline void set_m_Corners_34(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_Corners_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_34), (void*)value);
	}
};


// UnityEngine.UI.Text
struct  Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030  : public MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * ___m_FontData_35;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_36;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_TextCache_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_TextCacheForLayout_38;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_40;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* ___m_TempVerts_41;

public:
	inline static int32_t get_offset_of_m_FontData_35() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_FontData_35)); }
	inline FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * get_m_FontData_35() const { return ___m_FontData_35; }
	inline FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 ** get_address_of_m_FontData_35() { return &___m_FontData_35; }
	inline void set_m_FontData_35(FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * value)
	{
		___m_FontData_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_35), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_36() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_Text_36)); }
	inline String_t* get_m_Text_36() const { return ___m_Text_36; }
	inline String_t** get_address_of_m_Text_36() { return &___m_Text_36; }
	inline void set_m_Text_36(String_t* value)
	{
		___m_Text_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_37() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TextCache_37)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_TextCache_37() const { return ___m_TextCache_37; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_TextCache_37() { return &___m_TextCache_37; }
	inline void set_m_TextCache_37(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_TextCache_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_38() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TextCacheForLayout_38)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_TextCacheForLayout_38() const { return ___m_TextCacheForLayout_38; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_TextCacheForLayout_38() { return &___m_TextCacheForLayout_38; }
	inline void set_m_TextCacheForLayout_38(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_TextCacheForLayout_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_40() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_DisableFontTextureRebuiltCallback_40)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_40() const { return ___m_DisableFontTextureRebuiltCallback_40; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_40() { return &___m_DisableFontTextureRebuiltCallback_40; }
	inline void set_m_DisableFontTextureRebuiltCallback_40(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_40 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_41() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TempVerts_41)); }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* get_m_TempVerts_41() const { return ___m_TempVerts_41; }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A** get_address_of_m_TempVerts_41() { return &___m_TempVerts_41; }
	inline void set_m_TempVerts_41(UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* value)
	{
		___m_TempVerts_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_41), (void*)value);
	}
};

struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultText_39;

public:
	inline static int32_t get_offset_of_s_DefaultText_39() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_StaticFields, ___s_DefaultText_39)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultText_39() const { return ___s_DefaultText_39; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultText_39() { return &___s_DefaultText_39; }
	inline void set_s_DefaultText_39(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultText_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_39), (void*)value);
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
// Mirror.Cloud.ListServerService.ServerJson[]
struct ServerJsonU5BU5D_t3A4F7B269FEF3032ADD60A1DDB7A19EC7715BE77  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ServerJson_t0E3B764038B2CAACD0A933F586BE88F112B8EFAB  m_Items[1];

public:
	inline ServerJson_t0E3B764038B2CAACD0A933F586BE88F112B8EFAB  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ServerJson_t0E3B764038B2CAACD0A933F586BE88F112B8EFAB * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ServerJson_t0E3B764038B2CAACD0A933F586BE88F112B8EFAB  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___protocol_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___displayName_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___address_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___customAddress_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___customData_7), (void*)NULL);
		#endif
	}
	inline ServerJson_t0E3B764038B2CAACD0A933F586BE88F112B8EFAB  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ServerJson_t0E3B764038B2CAACD0A933F586BE88F112B8EFAB * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ServerJson_t0E3B764038B2CAACD0A933F586BE88F112B8EFAB  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___protocol_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___displayName_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___address_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___customAddress_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___customData_7), (void*)NULL);
		#endif
	}
};
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_tAB2AD0A365DBD2277A04E397AE8E1430A022AF1B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6 * m_Items[1];

public:
	inline GUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m233A1E6EF90A3BA46CD83BFC568F4E4DB4D93CC9_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// UnityEngine.ILogger Mirror.LogFactory::GetLogger<System.Object>(UnityEngine.LogType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LogFactory_GetLogger_TisRuntimeObject_m14316AB8F9CCD7B5CFBF45489342948226B6F615_gshared (int32_t ___defaultLogLevel0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m69345D9DEE55AA0CE574D19CB7C430AC638C01A9_gshared (Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<Mirror.Cloud.ListServerService.ServerCollectionJson>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m817B292DAD9C8E89F6F6580B20F8C10EAA04491D_gshared (UnityAction_1_tAF5A6E9E11FEBAB4E729286D7A1A127E2F23D283 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Nullable`1<Mirror.Cloud.ListServerService.ServerCollectionJson>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_mE73D9C07E5959C6171ED269C8BF7155572F3DE0A_gshared (Nullable_1_tAE6CD8652049A5B989144D2465FE5629A969A986 * __this, ServerCollectionJson_t927BBBC6ABE4C66FA3B2DC69AB9105D035971960  ___value0, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_gshared_inline (const RuntimeMethod* method);
// System.Boolean System.Nullable`1<Mirror.Cloud.ListServerService.ServerCollectionJson>::get_HasValue()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m80F65E1119BB30A5C2E77356F2358CFB972F8DF6_gshared_inline (Nullable_1_tAE6CD8652049A5B989144D2465FE5629A969A986 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<Mirror.Cloud.ListServerService.ServerCollectionJson>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ServerCollectionJson_t927BBBC6ABE4C66FA3B2DC69AB9105D035971960  Nullable_1_get_Value_mA449173BFED02D33F480D1AE9E5329DAB8C687B0_gshared (Nullable_1_tAE6CD8652049A5B989144D2465FE5629A969A986 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m73EEBB28CACDFA6979C3B74E0EE960684825A5DD_gshared (RuntimeObject * ___original0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___parent1, const RuntimeMethod* method);
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
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m4566F033303F52A6D430A06E5FA2D29E2A8D6ED3_gshared (RuntimeObject * ___original0, const RuntimeMethod* method);

// Mirror.NetworkManager Mirror.NetworkManager::get_singleton()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE * NetworkManager_get_singleton_mF6B934FE2F4D47585A4FC9C60D97B8C0FC641D6A_inline (const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Mirror.Cloud.ApiConnector>()
inline ApiConnector_tE4CB8EB0B23BE8F251872D03EE1992BE6A024E94 * Component_GetComponent_TisApiConnector_tE4CB8EB0B23BE8F251872D03EE1992BE6A024E94_mBC22125086BC6CBCBEC13F6216D12E2795857026 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  ApiConnector_tE4CB8EB0B23BE8F251872D03EE1992BE6A024E94 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m233A1E6EF90A3BA46CD83BFC568F4E4DB4D93CC9_gshared)(__this, method);
}
// System.Void Mirror.Cloud.Example.NetworkManagerListServer/OnPlayerListChanged::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPlayerListChanged__ctor_mAEE54429A0CC4B643B85318C0C1CDC5C7391AC14 (OnPlayerListChanged_tA8004710D81957B7920259B79EE6014994A802BA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Mirror.Cloud.Example.NetworkManagerListServer::add_onPlayerListChanged(Mirror.Cloud.Example.NetworkManagerListServer/OnPlayerListChanged)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManagerListServer_add_onPlayerListChanged_m6D82ECD3AA231B3558ECCFD7AB8AD6876BC0A29A (NetworkManagerListServer_t8B70D286CD2A4E966CDE10203D4720993CFBFCF7 * __this, OnPlayerListChanged_tA8004710D81957B7920259B79EE6014994A802BA * ___value0, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760 (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Mirror.Cloud.Example.NetworkManagerListServer::add_onServerStarted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManagerListServer_add_onServerStarted_m83F59AAC09BAF9A2840D99C00006D40C6058C905 (NetworkManagerListServer_t8B70D286CD2A4E966CDE10203D4720993CFBFCF7 * __this, Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___value0, const RuntimeMethod* method);
// System.Void Mirror.Cloud.Example.NetworkManagerListServer::add_onServerStopped(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManagerListServer_add_onServerStopped_m9A3A23F5E7097B6763BFAD7BAD94517D3395B612 (NetworkManagerListServer_t8B70D286CD2A4E966CDE10203D4720993CFBFCF7 * __this, Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___value0, const RuntimeMethod* method);
// System.Void Mirror.Cloud.Example.NetworkManagerListServer::remove_onPlayerListChanged(Mirror.Cloud.Example.NetworkManagerListServer/OnPlayerListChanged)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManagerListServer_remove_onPlayerListChanged_m27C03C19DD3AC6DAD2DE6779BE105F0286A5C2B0 (NetworkManagerListServer_t8B70D286CD2A4E966CDE10203D4720993CFBFCF7 * __this, OnPlayerListChanged_tA8004710D81957B7920259B79EE6014994A802BA * ___value0, const RuntimeMethod* method);
// System.Void Mirror.Cloud.Example.NetworkManagerListServer::remove_onServerStarted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManagerListServer_remove_onServerStarted_m114F99E7562369CB48148D53EF51A6E8FB227EEC (NetworkManagerListServer_t8B70D286CD2A4E966CDE10203D4720993CFBFCF7 * __this, Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___value0, const RuntimeMethod* method);
// System.Void Mirror.Cloud.Example.NetworkManagerListServer::remove_onServerStopped(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManagerListServer_remove_onServerStopped_m78811E0A16B5E8719A73415825E60952DAD8F534 (NetworkManagerListServer_t8B70D286CD2A4E966CDE10203D4720993CFBFCF7 * __this, Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___value0, const RuntimeMethod* method);
// Mirror.Cloud.ListServerService.ListServer Mirror.Cloud.ApiConnector::get_ListServer()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR ListServer_t9A599385F738F9714121265D8EC5245E5FE842D4 * ApiConnector_get_ListServer_m007F45B343290BC08559792F7C7BE7BCD8A1EFAF_inline (ApiConnector_tE4CB8EB0B23BE8F251872D03EE1992BE6A024E94 * __this, const RuntimeMethod* method);
// System.Boolean Mirror.ILoggerExtensions::LogEnabled(UnityEngine.ILogger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ILoggerExtensions_LogEnabled_mB40A763AD4817966BFC62937FB3DDB7F9DF43C56 (RuntimeObject* ___logger0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void Mirror.Cloud.Example.ApiUpdater::AddServer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApiUpdater_AddServer_m477E8B253ED49C564A0B716BDF9979C0E928CD2B (ApiUpdater_t9987332E5573470366A2872D477C072EB184A669 * __this, int32_t ___playerCount0, const RuntimeMethod* method);
// System.Int32 System.Uri::get_Port()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Uri_get_Port_m4E64AB9B50CCC50E7B1F139D7AF1403FAF97147C (Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * __this, const RuntimeMethod* method);
// System.String System.Uri::get_Scheme()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_get_Scheme_m14A8F0018D8AACADBEF39600A59944F33EE39187 (Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Random::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_get_value_mC998749E08291DD42CF31C026FAC4F14F746831C (const RuntimeMethod* method);
// System.String System.Single::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m211B5E14B0C60667C56838D5C3788CFA58670DDE (float* __this, String_t* ___format0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// UnityEngine.ILogger Mirror.LogFactory::GetLogger<Mirror.Cloud.Example.ApiUpdater>(UnityEngine.LogType)
inline RuntimeObject* LogFactory_GetLogger_TisApiUpdater_t9987332E5573470366A2872D477C072EB184A669_m654BFAF73F151FADCAAF2E9081718CF0E5F8BD87 (int32_t ___defaultLogLevel0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (int32_t, const RuntimeMethod*))LogFactory_GetLogger_TisRuntimeObject_m14316AB8F9CCD7B5CFBF45489342948226B6F615_gshared)(___defaultLogLevel0, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Mirror.NetworkConnectionToClient>::get_Count()
inline int32_t Dictionary_2_get_Count_m6FDD246F5EE780619F0E194BBC0FCA724666256D (Dictionary_2_t659A787707DACEAC76CC514E3D5615A24BB43F04 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t659A787707DACEAC76CC514E3D5615A24BB43F04 *, const RuntimeMethod*))Dictionary_2_get_Count_m69345D9DEE55AA0CE574D19CB7C430AC638C01A9_gshared)(__this, method);
}
// System.Int32 Mirror.Cloud.Example.NetworkManagerListServer::get_connectionCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkManagerListServer_get_connectionCount_mCBF495FDFEF70A398E8C10DDB2AE943779A8C730 (NetworkManagerListServer_t8B70D286CD2A4E966CDE10203D4720993CFBFCF7 * __this, const RuntimeMethod* method);
// System.Void Mirror.Cloud.Example.NetworkManagerListServer/OnPlayerListChanged::Invoke(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPlayerListChanged_Invoke_m901D33A4034705DD5764073013C2823D7E794BB9 (OnPlayerListChanged_tA8004710D81957B7920259B79EE6014994A802BA * __this, int32_t ___playerCount0, const RuntimeMethod* method);
// System.Void Mirror.NetworkManager::OnServerDisconnect(Mirror.NetworkConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManager_OnServerDisconnect_m06BB6CE446E0CD282C54CC0DEA299D03F40A2042 (NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE * __this, NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * ___conn0, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_mC8D676E5DDF967EC5D23DD0E96FB52AA499817FD (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * __this, const RuntimeMethod* method);
// System.Void Mirror.NetworkManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManager__ctor_m462D358AE01ED7F8CCCDFE8E99A88BC8B768F60E (NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<Mirror.Cloud.ListServerService.ServerCollectionJson>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m817B292DAD9C8E89F6F6580B20F8C10EAA04491D (UnityAction_1_tAF5A6E9E11FEBAB4E729286D7A1A127E2F23D283 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tAF5A6E9E11FEBAB4E729286D7A1A127E2F23D283 *, RuntimeObject *, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m817B292DAD9C8E89F6F6580B20F8C10EAA04491D_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Nullable`1<Mirror.Cloud.ListServerService.ServerCollectionJson>::.ctor(!0)
inline void Nullable_1__ctor_mE73D9C07E5959C6171ED269C8BF7155572F3DE0A (Nullable_1_tAE6CD8652049A5B989144D2465FE5629A969A986 * __this, ServerCollectionJson_t927BBBC6ABE4C66FA3B2DC69AB9105D035971960  ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tAE6CD8652049A5B989144D2465FE5629A969A986 *, ServerCollectionJson_t927BBBC6ABE4C66FA3B2DC69AB9105D035971960 , const RuntimeMethod*))Nullable_1__ctor_mE73D9C07E5959C6171ED269C8BF7155572F3DE0A_gshared)(__this, ___value0, method);
}
// !!0[] System.Array::Empty<UnityEngine.GUILayoutOption>()
inline GUILayoutOptionU5BU5D_tAB2AD0A365DBD2277A04E397AE8E1430A022AF1B* Array_Empty_TisGUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6_m2B34681B50F2E0013941920FD3AEB407A6DF659E_inline (const RuntimeMethod* method)
{
	return ((  GUILayoutOptionU5BU5D_tAB2AD0A365DBD2277A04E397AE8E1430A022AF1B* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_gshared_inline)(method);
}
// System.Void UnityEngine.GUILayout::Label(System.String,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_Label_m0DD571F45BDDDCB45E9D195AB77F3D7050A2A030 (String_t* ___text0, GUILayoutOptionU5BU5D_tAB2AD0A365DBD2277A04E397AE8E1430A022AF1B* ___options1, const RuntimeMethod* method);
// System.Boolean UnityEngine.GUILayout::Button(System.String,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUILayout_Button_mACAF3D25298F91F12A312DB687F53258DB0B9918 (String_t* ___text0, GUILayoutOptionU5BU5D_tAB2AD0A365DBD2277A04E397AE8E1430A022AF1B* ___options1, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayout::Space(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_Space_m3D3D0635EA7BAC83A9A0563005678319FCCED87E (float ___pixels0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<Mirror.Cloud.ListServerService.ServerCollectionJson>::get_HasValue()
inline bool Nullable_1_get_HasValue_m80F65E1119BB30A5C2E77356F2358CFB972F8DF6_inline (Nullable_1_tAE6CD8652049A5B989144D2465FE5629A969A986 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tAE6CD8652049A5B989144D2465FE5629A969A986 *, const RuntimeMethod*))Nullable_1_get_HasValue_m80F65E1119BB30A5C2E77356F2358CFB972F8DF6_gshared_inline)(__this, method);
}
// !0 System.Nullable`1<Mirror.Cloud.ListServerService.ServerCollectionJson>::get_Value()
inline ServerCollectionJson_t927BBBC6ABE4C66FA3B2DC69AB9105D035971960  Nullable_1_get_Value_mA449173BFED02D33F480D1AE9E5329DAB8C687B0 (Nullable_1_tAE6CD8652049A5B989144D2465FE5629A969A986 * __this, const RuntimeMethod* method)
{
	return ((  ServerCollectionJson_t927BBBC6ABE4C66FA3B2DC69AB9105D035971960  (*) (Nullable_1_tAE6CD8652049A5B989144D2465FE5629A969A986 *, const RuntimeMethod*))Nullable_1_get_Value_mA449173BFED02D33F480D1AE9E5329DAB8C687B0_gshared)(__this, method);
}
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA3AC3FE7B23D97F3A5BAA082D25B0E01B341A865 (String_t* ___format0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// System.Void Mirror.Cloud.Example.ServerListManager::AddButtonHandlers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerListManager_AddButtonHandlers_mA3B273DFCEE07BB02AFC960BADBCBFC9865F0C21 (ServerListManager_t83F3E1EE92996F8AF498DFCE86D03CE081379BC0 * __this, const RuntimeMethod* method);
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * Button_get_onClick_m77E8CA6917881760CC7900930F4C789F3E2F8817_inline (Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mEFC4B92529CE83DF72501F92E07EC5598C54BDAC (UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m31973FDDC5BB0B2828AB6EF519EC4FD6563499C9 (UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * __this, UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___call0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Void Mirror.NetworkManager::StartServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManager_StartServer_mBA9F75FA845970F774BF118D314B88A9B1F85B67 (NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void Mirror.Cloud.Example.ServerListUI::DeleteOldItems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerListUI_DeleteOldItems_mC2FDB7ED7184CCD09AF44757ECA0E058570BC505 (ServerListUI_t5DDE2460D1DB2D06CEC56B428B5850C9C363C7D7 * __this, const RuntimeMethod* method);
// System.Void Mirror.Cloud.Example.ServerListUI::CreateNewItems(Mirror.Cloud.ListServerService.ServerJson[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerListUI_CreateNewItems_m8D2CDFEF32440CD6F87DE808F44E5F8CA1298F25 (ServerListUI_t5DDE2460D1DB2D06CEC56B428B5850C9C363C7D7 * __this, ServerJsonU5BU5D_t3A4F7B269FEF3032ADD60A1DDB7A19EC7715BE77* ___servers0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<Mirror.Cloud.Example.ServerListUIItem>(!!0,UnityEngine.Transform)
inline ServerListUIItem_t7741F4958B2713690D4DC1B33E90664EA0563D68 * Object_Instantiate_TisServerListUIItem_t7741F4958B2713690D4DC1B33E90664EA0563D68_m5DEF0CA0EA63323F4B8DCA62EF1EBBB9168789E9 (ServerListUIItem_t7741F4958B2713690D4DC1B33E90664EA0563D68 * ___original0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___parent1, const RuntimeMethod* method)
{
	return ((  ServerListUIItem_t7741F4958B2713690D4DC1B33E90664EA0563D68 * (*) (ServerListUIItem_t7741F4958B2713690D4DC1B33E90664EA0563D68 *, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m73EEBB28CACDFA6979C3B74E0EE960684825A5DD_gshared)(___original0, ___parent1, method);
}
// System.Void Mirror.Cloud.Example.ServerListUIItem::Setup(Mirror.Cloud.ListServerService.ServerJson)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerListUIItem_Setup_mA6B8A5435909E6883F3A01BDF27C89294154159A (ServerListUIItem_t7741F4958B2713690D4DC1B33E90664EA0563D68 * __this, ServerJson_t0E3B764038B2CAACD0A933F586BE88F112B8EFAB  ___server0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Mirror.Cloud.Example.ServerListUIItem>::Add(!0)
inline void List_1_Add_mE20EE28D5065DFBE90C3F213DFF30ABB9201EA55 (List_1_t848A769EBD33E8829AB5D9648E68B9AD338DDF37 * __this, ServerListUIItem_t7741F4958B2713690D4DC1B33E90664EA0563D68 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t848A769EBD33E8829AB5D9648E68B9AD338DDF37 *, ServerListUIItem_t7741F4958B2713690D4DC1B33E90664EA0563D68 *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Mirror.Cloud.Example.ServerListUIItem>::GetEnumerator()
inline Enumerator_t7EC365BCC01F2EA78EE33D72F3DB5340E60B3C21  List_1_GetEnumerator_m40A91E5400DA207B28377172E1F0EC488A42812C (List_1_t848A769EBD33E8829AB5D9648E68B9AD338DDF37 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t7EC365BCC01F2EA78EE33D72F3DB5340E60B3C21  (*) (List_1_t848A769EBD33E8829AB5D9648E68B9AD338DDF37 *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Mirror.Cloud.Example.ServerListUIItem>::get_Current()
inline ServerListUIItem_t7741F4958B2713690D4DC1B33E90664EA0563D68 * Enumerator_get_Current_m8F370AA128DB8AE4B27495F050CCCDC9AB92FDD3_inline (Enumerator_t7EC365BCC01F2EA78EE33D72F3DB5340E60B3C21 * __this, const RuntimeMethod* method)
{
	return ((  ServerListUIItem_t7741F4958B2713690D4DC1B33E90664EA0563D68 * (*) (Enumerator_t7EC365BCC01F2EA78EE33D72F3DB5340E60B3C21 *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___obj0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<Mirror.Cloud.Example.ServerListUIItem>::MoveNext()
inline bool Enumerator_MoveNext_mC48ECCEA52C17541020268F6BB73E412B7849A42 (Enumerator_t7EC365BCC01F2EA78EE33D72F3DB5340E60B3C21 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t7EC365BCC01F2EA78EE33D72F3DB5340E60B3C21 *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Mirror.Cloud.Example.ServerListUIItem>::Dispose()
inline void Enumerator_Dispose_m64631EDF2A573617D98DA8C6D67962BBD6457E89 (Enumerator_t7EC365BCC01F2EA78EE33D72F3DB5340E60B3C21 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t7EC365BCC01F2EA78EE33D72F3DB5340E60B3C21 *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Mirror.Cloud.Example.ServerListUIItem>::Clear()
inline void List_1_Clear_m0633EDA09BAC80F7D27EE90CDBFBDD3E0221DBA3 (List_1_t848A769EBD33E8829AB5D9648E68B9AD338DDF37 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t848A769EBD33E8829AB5D9648E68B9AD338DDF37 *, const RuntimeMethod*))List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Mirror.Cloud.Example.ServerListUIItem>::.ctor()
inline void List_1__ctor_m096DD19D6D329559D0A0EF66753BAC1D92983148 (List_1_t848A769EBD33E8829AB5D9648E68B9AD338DDF37 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t848A769EBD33E8829AB5D9648E68B9AD338DDF37 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Void System.Uri::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri__ctor_mBA69907A1D799CD12ED44B611985B25FE4C626A2 (Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * __this, String_t* ___uriString0, const RuntimeMethod* method);
// System.Void Mirror.NetworkManager::StartClient(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManager_StartClient_m98F0B83D4A405E0EB40B51A7DA3137AE5C3BA57E (NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE * __this, Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___uri0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_mC4AB712D7F18E0991E1542CE53F11385E21E7B90 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m4566F033303F52A6D430A06E5FA2D29E2A8D6ED3_gshared)(___original0, method);
}
// Mirror.NetworkManagerMode Mirror.NetworkManager::get_mode()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t NetworkManager_get_mode_m20845BC6B1FC278669DFCA3586182274C8FBB288_inline (NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE * __this, const RuntimeMethod* method);
// System.Void Mirror.NetworkManager::StopServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManager_StopServer_m91880D24E4732CD463A7F9062E548FF7DDBA4745 (NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE * __this, const RuntimeMethod* method);
// System.Void Mirror.NetworkManager::StopHost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManager_StopHost_m947A9282409793A9325124422772D9E1D6A866F3 (NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE * __this, const RuntimeMethod* method);
// System.Void Mirror.NetworkManager::StopClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManager_StopClient_m5077F81B2FF39D54D8C3ACDBF284E995B76090A5 (NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE * __this, const RuntimeMethod* method);
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
// System.Void Mirror.Cloud.Example.ApiUpdater::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApiUpdater_Start_m206DCB812CE1A7E3C6C628B000280D78EDE6602C (ApiUpdater_t9987332E5573470366A2872D477C072EB184A669 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ApiUpdater_Start_m206DCB812CE1A7E3C6C628B000280D78EDE6602C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// manager = NetworkManager.singleton as NetworkManagerListServer;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE_il2cpp_TypeInfo_var);
		NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE * L_0 = NetworkManager_get_singleton_mF6B934FE2F4D47585A4FC9C60D97B8C0FC641D6A_inline(/*hidden argument*/NULL);
		__this->set_manager_5(((NetworkManagerListServer_t8B70D286CD2A4E966CDE10203D4720993CFBFCF7 *)IsInstClass((RuntimeObject*)L_0, NetworkManagerListServer_t8B70D286CD2A4E966CDE10203D4720993CFBFCF7_il2cpp_TypeInfo_var)));
		// connector = manager.GetComponent<ApiConnector>();
		NetworkManagerListServer_t8B70D286CD2A4E966CDE10203D4720993CFBFCF7 * L_1 = __this->get_manager_5();
		NullCheck(L_1);
		ApiConnector_tE4CB8EB0B23BE8F251872D03EE1992BE6A024E94 * L_2 = Component_GetComponent_TisApiConnector_tE4CB8EB0B23BE8F251872D03EE1992BE6A024E94_mBC22125086BC6CBCBEC13F6216D12E2795857026(L_1, /*hidden argument*/Component_GetComponent_TisApiConnector_tE4CB8EB0B23BE8F251872D03EE1992BE6A024E94_mBC22125086BC6CBCBEC13F6216D12E2795857026_RuntimeMethod_var);
		__this->set_connector_6(L_2);
		// manager.onPlayerListChanged += onPlayerListChanged;
		NetworkManagerListServer_t8B70D286CD2A4E966CDE10203D4720993CFBFCF7 * L_3 = __this->get_manager_5();
		OnPlayerListChanged_tA8004710D81957B7920259B79EE6014994A802BA * L_4 = (OnPlayerListChanged_tA8004710D81957B7920259B79EE6014994A802BA *)il2cpp_codegen_object_new(OnPlayerListChanged_tA8004710D81957B7920259B79EE6014994A802BA_il2cpp_TypeInfo_var);
		OnPlayerListChanged__ctor_mAEE54429A0CC4B643B85318C0C1CDC5C7391AC14(L_4, __this, (intptr_t)((intptr_t)ApiUpdater_onPlayerListChanged_m0AA06B51B25D0A4047348A63A74552251B3CF31D_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_3);
		NetworkManagerListServer_add_onPlayerListChanged_m6D82ECD3AA231B3558ECCFD7AB8AD6876BC0A29A(L_3, L_4, /*hidden argument*/NULL);
		// manager.onServerStarted += ServerStartedHandler;
		NetworkManagerListServer_t8B70D286CD2A4E966CDE10203D4720993CFBFCF7 * L_5 = __this->get_manager_5();
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_6 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
		Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_6, __this, (intptr_t)((intptr_t)ApiUpdater_ServerStartedHandler_mC1B004475E7A48847A085472D4BE447B0C1466E9_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_5);
		NetworkManagerListServer_add_onServerStarted_m83F59AAC09BAF9A2840D99C00006D40C6058C905(L_5, L_6, /*hidden argument*/NULL);
		// manager.onServerStopped += ServerStoppedHandler;
		NetworkManagerListServer_t8B70D286CD2A4E966CDE10203D4720993CFBFCF7 * L_7 = __this->get_manager_5();
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_8 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
		Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_8, __this, (intptr_t)((intptr_t)ApiUpdater_ServerStoppedHandler_mC627AE023E4BEB774C0D34D5978D05C07BA8D865_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_7);
		NetworkManagerListServer_add_onServerStopped_m9A3A23F5E7097B6763BFAD7BAD94517D3395B612(L_7, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.Cloud.Example.ApiUpdater::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApiUpdater_OnDestroy_mF58AEEC46656A255029CC62042355EF86D32BE0F (ApiUpdater_t9987332E5573470366A2872D477C072EB184A669 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ApiUpdater_OnDestroy_mF58AEEC46656A255029CC62042355EF86D32BE0F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// manager.onPlayerListChanged -= onPlayerListChanged;
		NetworkManagerListServer_t8B70D286CD2A4E966CDE10203D4720993CFBFCF7 * L_0 = __this->get_manager_5();
		OnPlayerListChanged_tA8004710D81957B7920259B79EE6014994A802BA * L_1 = (OnPlayerListChanged_tA8004710D81957B7920259B79EE6014994A802BA *)il2cpp_codegen_object_new(OnPlayerListChanged_tA8004710D81957B7920259B79EE6014994A802BA_il2cpp_TypeInfo_var);
		OnPlayerListChanged__ctor_mAEE54429A0CC4B643B85318C0C1CDC5C7391AC14(L_1, __this, (intptr_t)((intptr_t)ApiUpdater_onPlayerListChanged_m0AA06B51B25D0A4047348A63A74552251B3CF31D_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_0);
		NetworkManagerListServer_remove_onPlayerListChanged_m27C03C19DD3AC6DAD2DE6779BE105F0286A5C2B0(L_0, L_1, /*hidden argument*/NULL);
		// manager.onServerStarted -= ServerStartedHandler;
		NetworkManagerListServer_t8B70D286CD2A4E966CDE10203D4720993CFBFCF7 * L_2 = __this->get_manager_5();
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_3 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
		Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_3, __this, (intptr_t)((intptr_t)ApiUpdater_ServerStartedHandler_mC1B004475E7A48847A085472D4BE447B0C1466E9_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_2);
		NetworkManagerListServer_remove_onServerStarted_m114F99E7562369CB48148D53EF51A6E8FB227EEC(L_2, L_3, /*hidden argument*/NULL);
		// manager.onServerStopped -= ServerStoppedHandler;
		NetworkManagerListServer_t8B70D286CD2A4E966CDE10203D4720993CFBFCF7 * L_4 = __this->get_manager_5();
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_5 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
		Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_5, __this, (intptr_t)((intptr_t)ApiUpdater_ServerStoppedHandler_mC627AE023E4BEB774C0D34D5978D05C07BA8D865_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_4);
		NetworkManagerListServer_remove_onServerStopped_m78811E0A16B5E8719A73415825E60952DAD8F534(L_4, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.Cloud.Example.ApiUpdater::onPlayerListChanged(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApiUpdater_onPlayerListChanged_m0AA06B51B25D0A4047348A63A74552251B3CF31D (ApiUpdater_t9987332E5573470366A2872D477C072EB184A669 * __this, int32_t ___playerCount0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ApiUpdater_onPlayerListChanged_m0AA06B51B25D0A4047348A63A74552251B3CF31D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (connector.ListServer.ServerApi.ServerInList)
		ApiConnector_tE4CB8EB0B23BE8F251872D03EE1992BE6A024E94 * L_0 = __this->get_connector_6();
		NullCheck(L_0);
		ListServer_t9A599385F738F9714121265D8EC5245E5FE842D4 * L_1 = ApiConnector_get_ListServer_m007F45B343290BC08559792F7C7BE7BCD8A1EFAF_inline(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		RuntimeObject* L_2 = L_1->get_ServerApi_0();
		NullCheck(L_2);
		bool L_3 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Mirror.Cloud.ListServerService.IListServerServerApi::get_ServerInList() */, IListServerServerApi_tB249373A4DA2D8820B7DB77B262589E0A64B2148_il2cpp_TypeInfo_var, L_2);
		if (!L_3)
		{
			goto IL_00a1;
		}
	}
	{
		// if (playerCount < manager.maxConnections)
		int32_t L_4 = ___playerCount0;
		NetworkManagerListServer_t8B70D286CD2A4E966CDE10203D4720993CFBFCF7 * L_5 = __this->get_manager_5();
		NullCheck(L_5);
		int32_t L_6 = ((NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE *)L_5)->get_maxConnections_14();
		if ((((int32_t)L_4) >= ((int32_t)L_6)))
		{
			goto IL_0065;
		}
	}
	{
		// if (logger.LogEnabled()) logger.Log($"Updating Server, player count: {playerCount} ");
		IL2CPP_RUNTIME_CLASS_INIT(ApiUpdater_t9987332E5573470366A2872D477C072EB184A669_il2cpp_TypeInfo_var);
		RuntimeObject* L_7 = ((ApiUpdater_t9987332E5573470366A2872D477C072EB184A669_StaticFields*)il2cpp_codegen_static_fields_for(ApiUpdater_t9987332E5573470366A2872D477C072EB184A669_il2cpp_TypeInfo_var))->get_logger_4();
		bool L_8 = ILoggerExtensions_LogEnabled_mB40A763AD4817966BFC62937FB3DDB7F9DF43C56(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_004e;
		}
	}
	{
		// if (logger.LogEnabled()) logger.Log($"Updating Server, player count: {playerCount} ");
		IL2CPP_RUNTIME_CLASS_INIT(ApiUpdater_t9987332E5573470366A2872D477C072EB184A669_il2cpp_TypeInfo_var);
		RuntimeObject* L_9 = ((ApiUpdater_t9987332E5573470366A2872D477C072EB184A669_StaticFields*)il2cpp_codegen_static_fields_for(ApiUpdater_t9987332E5573470366A2872D477C072EB184A669_il2cpp_TypeInfo_var))->get_logger_4();
		int32_t L_10 = ___playerCount0;
		int32_t L_11 = L_10;
		RuntimeObject * L_12 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_11);
		String_t* L_13 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral7D355AAF4AAEC3984FC19677D4229933C9CE8AE4, L_12, /*hidden argument*/NULL);
		NullCheck(L_9);
		InterfaceActionInvoker1< RuntimeObject * >::Invoke(8 /* System.Void UnityEngine.ILogger::Log(System.Object) */, ILogger_t572B66532D8EB6E76240476A788384A26D70866F_il2cpp_TypeInfo_var, L_9, L_13);
	}

IL_004e:
	{
		// connector.ListServer.ServerApi.UpdateServer(playerCount);
		ApiConnector_tE4CB8EB0B23BE8F251872D03EE1992BE6A024E94 * L_14 = __this->get_connector_6();
		NullCheck(L_14);
		ListServer_t9A599385F738F9714121265D8EC5245E5FE842D4 * L_15 = ApiConnector_get_ListServer_m007F45B343290BC08559792F7C7BE7BCD8A1EFAF_inline(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		RuntimeObject* L_16 = L_15->get_ServerApi_0();
		int32_t L_17 = ___playerCount0;
		NullCheck(L_16);
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void Mirror.Cloud.ListServerService.IListServerServerApi::UpdateServer(System.Int32) */, IListServerServerApi_tB249373A4DA2D8820B7DB77B262589E0A64B2148_il2cpp_TypeInfo_var, L_16, L_17);
		// }
		return;
	}

IL_0065:
	{
		// if (logger.LogEnabled()) logger.Log($"Removing Server, player count: {playerCount}");
		IL2CPP_RUNTIME_CLASS_INIT(ApiUpdater_t9987332E5573470366A2872D477C072EB184A669_il2cpp_TypeInfo_var);
		RuntimeObject* L_18 = ((ApiUpdater_t9987332E5573470366A2872D477C072EB184A669_StaticFields*)il2cpp_codegen_static_fields_for(ApiUpdater_t9987332E5573470366A2872D477C072EB184A669_il2cpp_TypeInfo_var))->get_logger_4();
		bool L_19 = ILoggerExtensions_LogEnabled_mB40A763AD4817966BFC62937FB3DDB7F9DF43C56(L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_008b;
		}
	}
	{
		// if (logger.LogEnabled()) logger.Log($"Removing Server, player count: {playerCount}");
		IL2CPP_RUNTIME_CLASS_INIT(ApiUpdater_t9987332E5573470366A2872D477C072EB184A669_il2cpp_TypeInfo_var);
		RuntimeObject* L_20 = ((ApiUpdater_t9987332E5573470366A2872D477C072EB184A669_StaticFields*)il2cpp_codegen_static_fields_for(ApiUpdater_t9987332E5573470366A2872D477C072EB184A669_il2cpp_TypeInfo_var))->get_logger_4();
		int32_t L_21 = ___playerCount0;
		int32_t L_22 = L_21;
		RuntimeObject * L_23 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_22);
		String_t* L_24 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral2D7DBBDDCEB5C9931F85D11F4A7102A26CBAA36F, L_23, /*hidden argument*/NULL);
		NullCheck(L_20);
		InterfaceActionInvoker1< RuntimeObject * >::Invoke(8 /* System.Void UnityEngine.ILogger::Log(System.Object) */, ILogger_t572B66532D8EB6E76240476A788384A26D70866F_il2cpp_TypeInfo_var, L_20, L_24);
	}

IL_008b:
	{
		// connector.ListServer.ServerApi.RemoveServer();
		ApiConnector_tE4CB8EB0B23BE8F251872D03EE1992BE6A024E94 * L_25 = __this->get_connector_6();
		NullCheck(L_25);
		ListServer_t9A599385F738F9714121265D8EC5245E5FE842D4 * L_26 = ApiConnector_get_ListServer_m007F45B343290BC08559792F7C7BE7BCD8A1EFAF_inline(L_25, /*hidden argument*/NULL);
		NullCheck(L_26);
		RuntimeObject* L_27 = L_26->get_ServerApi_0();
		NullCheck(L_27);
		InterfaceActionInvoker0::Invoke(4 /* System.Void Mirror.Cloud.ListServerService.IListServerServerApi::RemoveServer() */, IListServerServerApi_tB249373A4DA2D8820B7DB77B262589E0A64B2148_il2cpp_TypeInfo_var, L_27);
		// }
		return;
	}

IL_00a1:
	{
		// if (playerCount < 2)
		int32_t L_28 = ___playerCount0;
		if ((((int32_t)L_28) >= ((int32_t)2)))
		{
			goto IL_00d2;
		}
	}
	{
		// if (logger.LogEnabled()) logger.Log($"Adding Server, player count: {playerCount}");
		IL2CPP_RUNTIME_CLASS_INIT(ApiUpdater_t9987332E5573470366A2872D477C072EB184A669_il2cpp_TypeInfo_var);
		RuntimeObject* L_29 = ((ApiUpdater_t9987332E5573470366A2872D477C072EB184A669_StaticFields*)il2cpp_codegen_static_fields_for(ApiUpdater_t9987332E5573470366A2872D477C072EB184A669_il2cpp_TypeInfo_var))->get_logger_4();
		bool L_30 = ILoggerExtensions_LogEnabled_mB40A763AD4817966BFC62937FB3DDB7F9DF43C56(L_29, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_00cb;
		}
	}
	{
		// if (logger.LogEnabled()) logger.Log($"Adding Server, player count: {playerCount}");
		IL2CPP_RUNTIME_CLASS_INIT(ApiUpdater_t9987332E5573470366A2872D477C072EB184A669_il2cpp_TypeInfo_var);
		RuntimeObject* L_31 = ((ApiUpdater_t9987332E5573470366A2872D477C072EB184A669_StaticFields*)il2cpp_codegen_static_fields_for(ApiUpdater_t9987332E5573470366A2872D477C072EB184A669_il2cpp_TypeInfo_var))->get_logger_4();
		int32_t L_32 = ___playerCount0;
		int32_t L_33 = L_32;
		RuntimeObject * L_34 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_33);
		String_t* L_35 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral6D8C956639EA9E418D20983B9E0318D72FB3C15D, L_34, /*hidden argument*/NULL);
		NullCheck(L_31);
		InterfaceActionInvoker1< RuntimeObject * >::Invoke(8 /* System.Void UnityEngine.ILogger::Log(System.Object) */, ILogger_t572B66532D8EB6E76240476A788384A26D70866F_il2cpp_TypeInfo_var, L_31, L_35);
	}

IL_00cb:
	{
		// AddServer(playerCount);
		int32_t L_36 = ___playerCount0;
		ApiUpdater_AddServer_m477E8B253ED49C564A0B716BDF9979C0E928CD2B(__this, L_36, /*hidden argument*/NULL);
	}

IL_00d2:
	{
		// }
		return;
	}
}
// System.Void Mirror.Cloud.Example.ApiUpdater::ServerStartedHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApiUpdater_ServerStartedHandler_mC1B004475E7A48847A085472D4BE447B0C1466E9 (ApiUpdater_t9987332E5573470366A2872D477C072EB184A669 * __this, const RuntimeMethod* method)
{
	{
		// AddServer(0);
		ApiUpdater_AddServer_m477E8B253ED49C564A0B716BDF9979C0E928CD2B(__this, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.Cloud.Example.ApiUpdater::AddServer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApiUpdater_AddServer_m477E8B253ED49C564A0B716BDF9979C0E928CD2B (ApiUpdater_t9987332E5573470366A2872D477C072EB184A669 * __this, int32_t ___playerCount0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ApiUpdater_AddServer_m477E8B253ED49C564A0B716BDF9979C0E928CD2B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	ServerJson_t0E3B764038B2CAACD0A933F586BE88F112B8EFAB  V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	{
		// Transport transport = Transport.activeTransport;
		Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195 * L_0 = ((Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195_StaticFields*)il2cpp_codegen_static_fields_for(Transport_t04DACA817775185B04424DBA9EA1A0B3E2774195_il2cpp_TypeInfo_var))->get_activeTransport_4();
		// Uri uri = transport.ServerUri();
		NullCheck(L_0);
		Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * L_1 = VirtFuncInvoker0< Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * >::Invoke(10 /* System.Uri Mirror.Transport::ServerUri() */, L_0);
		// int port = uri.Port;
		Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * L_2 = L_1;
		NullCheck(L_2);
		int32_t L_3 = Uri_get_Port_m4E64AB9B50CCC50E7B1F139D7AF1403FAF97147C(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// string protocol = uri.Scheme;
		NullCheck(L_2);
		String_t* L_4 = Uri_get_Scheme_m14A8F0018D8AACADBEF39600A59944F33EE39187(L_2, /*hidden argument*/NULL);
		V_1 = L_4;
		// connector.ListServer.ServerApi.AddServer(new ServerJson
		// {
		//     displayName = $"{gameName} {(UnityEngine.Random.value * 1000).ToString("0")}",
		//     protocol = protocol,
		//     port = port,
		//     maxPlayerCount = NetworkManager.singleton.maxConnections,
		//     playerCount = playerCount
		// });
		ApiConnector_tE4CB8EB0B23BE8F251872D03EE1992BE6A024E94 * L_5 = __this->get_connector_6();
		NullCheck(L_5);
		ListServer_t9A599385F738F9714121265D8EC5245E5FE842D4 * L_6 = ApiConnector_get_ListServer_m007F45B343290BC08559792F7C7BE7BCD8A1EFAF_inline(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		RuntimeObject* L_7 = L_6->get_ServerApi_0();
		il2cpp_codegen_initobj((&V_2), sizeof(ServerJson_t0E3B764038B2CAACD0A933F586BE88F112B8EFAB ));
		String_t* L_8 = __this->get_gameName_7();
		float L_9 = Random_get_value_mC998749E08291DD42CF31C026FAC4F14F746831C(/*hidden argument*/NULL);
		V_3 = ((float)il2cpp_codegen_multiply((float)L_9, (float)(1000.0f)));
		String_t* L_10 = Single_ToString_m211B5E14B0C60667C56838D5C3788CFA58670DDE((float*)(&V_3), _stringLiteralB6589FC6AB0DC82CF12099D1C2D40AB994E8410C, /*hidden argument*/NULL);
		String_t* L_11 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_8, _stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6, L_10, /*hidden argument*/NULL);
		(&V_2)->set_displayName_4(L_11);
		String_t* L_12 = V_1;
		(&V_2)->set_protocol_0(L_12);
		int32_t L_13 = V_0;
		(&V_2)->set_port_1(L_13);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE_il2cpp_TypeInfo_var);
		NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE * L_14 = NetworkManager_get_singleton_mF6B934FE2F4D47585A4FC9C60D97B8C0FC641D6A_inline(/*hidden argument*/NULL);
		NullCheck(L_14);
		int32_t L_15 = L_14->get_maxConnections_14();
		(&V_2)->set_maxPlayerCount_3(L_15);
		int32_t L_16 = ___playerCount0;
		(&V_2)->set_playerCount_2(L_16);
		ServerJson_t0E3B764038B2CAACD0A933F586BE88F112B8EFAB  L_17 = V_2;
		NullCheck(L_7);
		InterfaceActionInvoker1< ServerJson_t0E3B764038B2CAACD0A933F586BE88F112B8EFAB  >::Invoke(1 /* System.Void Mirror.Cloud.ListServerService.IListServerServerApi::AddServer(Mirror.Cloud.ListServerService.ServerJson) */, IListServerServerApi_tB249373A4DA2D8820B7DB77B262589E0A64B2148_il2cpp_TypeInfo_var, L_7, L_17);
		// }
		return;
	}
}
// System.Void Mirror.Cloud.Example.ApiUpdater::ServerStoppedHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApiUpdater_ServerStoppedHandler_mC627AE023E4BEB774C0D34D5978D05C07BA8D865 (ApiUpdater_t9987332E5573470366A2872D477C072EB184A669 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ApiUpdater_ServerStoppedHandler_mC627AE023E4BEB774C0D34D5978D05C07BA8D865_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// connector.ListServer.ServerApi.RemoveServer();
		ApiConnector_tE4CB8EB0B23BE8F251872D03EE1992BE6A024E94 * L_0 = __this->get_connector_6();
		NullCheck(L_0);
		ListServer_t9A599385F738F9714121265D8EC5245E5FE842D4 * L_1 = ApiConnector_get_ListServer_m007F45B343290BC08559792F7C7BE7BCD8A1EFAF_inline(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		RuntimeObject* L_2 = L_1->get_ServerApi_0();
		NullCheck(L_2);
		InterfaceActionInvoker0::Invoke(4 /* System.Void Mirror.Cloud.ListServerService.IListServerServerApi::RemoveServer() */, IListServerServerApi_tB249373A4DA2D8820B7DB77B262589E0A64B2148_il2cpp_TypeInfo_var, L_2);
		// }
		return;
	}
}
// System.Void Mirror.Cloud.Example.ApiUpdater::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApiUpdater__ctor_m8B4EF74A6441F16D4E6FA398696568C31D0DEC43 (ApiUpdater_t9987332E5573470366A2872D477C072EB184A669 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ApiUpdater__ctor_m8B4EF74A6441F16D4E6FA398696568C31D0DEC43_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string gameName = "Game";
		__this->set_gameName_7(_stringLiteralE3E82846C32567811615378F30240185871E08E5);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mirror.Cloud.Example.ApiUpdater::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApiUpdater__cctor_m7F3490CA33CA886C7D350B3EC70D7784252D9111 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ApiUpdater__cctor_m7F3490CA33CA886C7D350B3EC70D7784252D9111_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly ILogger logger = LogFactory.GetLogger<ApiUpdater>();
		IL2CPP_RUNTIME_CLASS_INIT(LogFactory_t12E9885C618CCA261D73F0C152E1923A0942EAF5_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = LogFactory_GetLogger_TisApiUpdater_t9987332E5573470366A2872D477C072EB184A669_m654BFAF73F151FADCAAF2E9081718CF0E5F8BD87(2, /*hidden argument*/LogFactory_GetLogger_TisApiUpdater_t9987332E5573470366A2872D477C072EB184A669_m654BFAF73F151FADCAAF2E9081718CF0E5F8BD87_RuntimeMethod_var);
		((ApiUpdater_t9987332E5573470366A2872D477C072EB184A669_StaticFields*)il2cpp_codegen_static_fields_for(ApiUpdater_t9987332E5573470366A2872D477C072EB184A669_il2cpp_TypeInfo_var))->set_logger_4(L_0);
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
// System.Void Mirror.Cloud.Example.NetworkManagerListServer::add_onServerStarted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManagerListServer_add_onServerStarted_m83F59AAC09BAF9A2840D99C00006D40C6058C905 (NetworkManagerListServer_t8B70D286CD2A4E966CDE10203D4720993CFBFCF7 * __this, Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkManagerListServer_add_onServerStarted_m83F59AAC09BAF9A2840D99C00006D40C6058C905_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * V_0 = NULL;
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * V_1 = NULL;
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * V_2 = NULL;
	{
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_0 = __this->get_onServerStarted_33();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_1 = V_0;
		V_1 = L_1;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_2 = V_1;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)CastclassSealed((RuntimeObject*)L_4, Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var));
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** L_5 = __this->get_address_of_onServerStarted_33();
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_6 = V_2;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_7 = V_1;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_8 = InterlockedCompareExchangeImpl<Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *>((Action_t591D2A86165F896B4B800BB5C25CE18672A55579 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_9 = V_0;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)L_9) == ((RuntimeObject*)(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Mirror.Cloud.Example.NetworkManagerListServer::remove_onServerStarted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManagerListServer_remove_onServerStarted_m114F99E7562369CB48148D53EF51A6E8FB227EEC (NetworkManagerListServer_t8B70D286CD2A4E966CDE10203D4720993CFBFCF7 * __this, Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkManagerListServer_remove_onServerStarted_m114F99E7562369CB48148D53EF51A6E8FB227EEC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * V_0 = NULL;
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * V_1 = NULL;
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * V_2 = NULL;
	{
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_0 = __this->get_onServerStarted_33();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_1 = V_0;
		V_1 = L_1;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_2 = V_1;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)CastclassSealed((RuntimeObject*)L_4, Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var));
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** L_5 = __this->get_address_of_onServerStarted_33();
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_6 = V_2;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_7 = V_1;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_8 = InterlockedCompareExchangeImpl<Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *>((Action_t591D2A86165F896B4B800BB5C25CE18672A55579 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_9 = V_0;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)L_9) == ((RuntimeObject*)(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Mirror.Cloud.Example.NetworkManagerListServer::add_onServerStopped(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManagerListServer_add_onServerStopped_m9A3A23F5E7097B6763BFAD7BAD94517D3395B612 (NetworkManagerListServer_t8B70D286CD2A4E966CDE10203D4720993CFBFCF7 * __this, Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkManagerListServer_add_onServerStopped_m9A3A23F5E7097B6763BFAD7BAD94517D3395B612_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * V_0 = NULL;
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * V_1 = NULL;
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * V_2 = NULL;
	{
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_0 = __this->get_onServerStopped_34();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_1 = V_0;
		V_1 = L_1;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_2 = V_1;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)CastclassSealed((RuntimeObject*)L_4, Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var));
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** L_5 = __this->get_address_of_onServerStopped_34();
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_6 = V_2;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_7 = V_1;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_8 = InterlockedCompareExchangeImpl<Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *>((Action_t591D2A86165F896B4B800BB5C25CE18672A55579 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_9 = V_0;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)L_9) == ((RuntimeObject*)(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Mirror.Cloud.Example.NetworkManagerListServer::remove_onServerStopped(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManagerListServer_remove_onServerStopped_m78811E0A16B5E8719A73415825E60952DAD8F534 (NetworkManagerListServer_t8B70D286CD2A4E966CDE10203D4720993CFBFCF7 * __this, Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkManagerListServer_remove_onServerStopped_m78811E0A16B5E8719A73415825E60952DAD8F534_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * V_0 = NULL;
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * V_1 = NULL;
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * V_2 = NULL;
	{
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_0 = __this->get_onServerStopped_34();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_1 = V_0;
		V_1 = L_1;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_2 = V_1;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)CastclassSealed((RuntimeObject*)L_4, Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var));
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** L_5 = __this->get_address_of_onServerStopped_34();
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_6 = V_2;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_7 = V_1;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_8 = InterlockedCompareExchangeImpl<Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *>((Action_t591D2A86165F896B4B800BB5C25CE18672A55579 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_9 = V_0;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)L_9) == ((RuntimeObject*)(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Mirror.Cloud.Example.NetworkManagerListServer::add_onPlayerListChanged(Mirror.Cloud.Example.NetworkManagerListServer_OnPlayerListChanged)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManagerListServer_add_onPlayerListChanged_m6D82ECD3AA231B3558ECCFD7AB8AD6876BC0A29A (NetworkManagerListServer_t8B70D286CD2A4E966CDE10203D4720993CFBFCF7 * __this, OnPlayerListChanged_tA8004710D81957B7920259B79EE6014994A802BA * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkManagerListServer_add_onPlayerListChanged_m6D82ECD3AA231B3558ECCFD7AB8AD6876BC0A29A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	OnPlayerListChanged_tA8004710D81957B7920259B79EE6014994A802BA * V_0 = NULL;
	OnPlayerListChanged_tA8004710D81957B7920259B79EE6014994A802BA * V_1 = NULL;
	OnPlayerListChanged_tA8004710D81957B7920259B79EE6014994A802BA * V_2 = NULL;
	{
		OnPlayerListChanged_tA8004710D81957B7920259B79EE6014994A802BA * L_0 = __this->get_onPlayerListChanged_35();
		V_0 = L_0;
	}

IL_0007:
	{
		OnPlayerListChanged_tA8004710D81957B7920259B79EE6014994A802BA * L_1 = V_0;
		V_1 = L_1;
		OnPlayerListChanged_tA8004710D81957B7920259B79EE6014994A802BA * L_2 = V_1;
		OnPlayerListChanged_tA8004710D81957B7920259B79EE6014994A802BA * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((OnPlayerListChanged_tA8004710D81957B7920259B79EE6014994A802BA *)CastclassSealed((RuntimeObject*)L_4, OnPlayerListChanged_tA8004710D81957B7920259B79EE6014994A802BA_il2cpp_TypeInfo_var));
		OnPlayerListChanged_tA8004710D81957B7920259B79EE6014994A802BA ** L_5 = __this->get_address_of_onPlayerListChanged_35();
		OnPlayerListChanged_tA8004710D81957B7920259B79EE6014994A802BA * L_6 = V_2;
		OnPlayerListChanged_tA8004710D81957B7920259B79EE6014994A802BA * L_7 = V_1;
		OnPlayerListChanged_tA8004710D81957B7920259B79EE6014994A802BA * L_8 = InterlockedCompareExchangeImpl<OnPlayerListChanged_tA8004710D81957B7920259B79EE6014994A802BA *>((OnPlayerListChanged_tA8004710D81957B7920259B79EE6014994A802BA **)L_5, L_6, L_7);
		V_0 = L_8;
		OnPlayerListChanged_tA8004710D81957B7920259B79EE6014994A802BA * L_9 = V_0;
		OnPlayerListChanged_tA8004710D81957B7920259B79EE6014994A802BA * L_10 = V_1;
		if ((!(((RuntimeObject*)(OnPlayerListChanged_tA8004710D81957B7920259B79EE6014994A802BA *)L_9) == ((RuntimeObject*)(OnPlayerListChanged_tA8004710D81957B7920259B79EE6014994A802BA *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Mirror.Cloud.Example.NetworkManagerListServer::remove_onPlayerListChanged(Mirror.Cloud.Example.NetworkManagerListServer_OnPlayerListChanged)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManagerListServer_remove_onPlayerListChanged_m27C03C19DD3AC6DAD2DE6779BE105F0286A5C2B0 (NetworkManagerListServer_t8B70D286CD2A4E966CDE10203D4720993CFBFCF7 * __this, OnPlayerListChanged_tA8004710D81957B7920259B79EE6014994A802BA * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkManagerListServer_remove_onPlayerListChanged_m27C03C19DD3AC6DAD2DE6779BE105F0286A5C2B0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	OnPlayerListChanged_tA8004710D81957B7920259B79EE6014994A802BA * V_0 = NULL;
	OnPlayerListChanged_tA8004710D81957B7920259B79EE6014994A802BA * V_1 = NULL;
	OnPlayerListChanged_tA8004710D81957B7920259B79EE6014994A802BA * V_2 = NULL;
	{
		OnPlayerListChanged_tA8004710D81957B7920259B79EE6014994A802BA * L_0 = __this->get_onPlayerListChanged_35();
		V_0 = L_0;
	}

IL_0007:
	{
		OnPlayerListChanged_tA8004710D81957B7920259B79EE6014994A802BA * L_1 = V_0;
		V_1 = L_1;
		OnPlayerListChanged_tA8004710D81957B7920259B79EE6014994A802BA * L_2 = V_1;
		OnPlayerListChanged_tA8004710D81957B7920259B79EE6014994A802BA * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((OnPlayerListChanged_tA8004710D81957B7920259B79EE6014994A802BA *)CastclassSealed((RuntimeObject*)L_4, OnPlayerListChanged_tA8004710D81957B7920259B79EE6014994A802BA_il2cpp_TypeInfo_var));
		OnPlayerListChanged_tA8004710D81957B7920259B79EE6014994A802BA ** L_5 = __this->get_address_of_onPlayerListChanged_35();
		OnPlayerListChanged_tA8004710D81957B7920259B79EE6014994A802BA * L_6 = V_2;
		OnPlayerListChanged_tA8004710D81957B7920259B79EE6014994A802BA * L_7 = V_1;
		OnPlayerListChanged_tA8004710D81957B7920259B79EE6014994A802BA * L_8 = InterlockedCompareExchangeImpl<OnPlayerListChanged_tA8004710D81957B7920259B79EE6014994A802BA *>((OnPlayerListChanged_tA8004710D81957B7920259B79EE6014994A802BA **)L_5, L_6, L_7);
		V_0 = L_8;
		OnPlayerListChanged_tA8004710D81957B7920259B79EE6014994A802BA * L_9 = V_0;
		OnPlayerListChanged_tA8004710D81957B7920259B79EE6014994A802BA * L_10 = V_1;
		if ((!(((RuntimeObject*)(OnPlayerListChanged_tA8004710D81957B7920259B79EE6014994A802BA *)L_9) == ((RuntimeObject*)(OnPlayerListChanged_tA8004710D81957B7920259B79EE6014994A802BA *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Int32 Mirror.Cloud.Example.NetworkManagerListServer::get_connectionCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkManagerListServer_get_connectionCount_mCBF495FDFEF70A398E8C10DDB2AE943779A8C730 (NetworkManagerListServer_t8B70D286CD2A4E966CDE10203D4720993CFBFCF7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkManagerListServer_get_connectionCount_mCBF495FDFEF70A398E8C10DDB2AE943779A8C730_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// int connectionCount => NetworkServer.connections.Count;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkServer_t8410142130F495DC2B99625046908CE7CDEF5D6A_il2cpp_TypeInfo_var);
		Dictionary_2_t659A787707DACEAC76CC514E3D5615A24BB43F04 * L_0 = ((NetworkServer_t8410142130F495DC2B99625046908CE7CDEF5D6A_StaticFields*)il2cpp_codegen_static_fields_for(NetworkServer_t8410142130F495DC2B99625046908CE7CDEF5D6A_il2cpp_TypeInfo_var))->get_connections_4();
		NullCheck(L_0);
		int32_t L_1 = Dictionary_2_get_Count_m6FDD246F5EE780619F0E194BBC0FCA724666256D(L_0, /*hidden argument*/Dictionary_2_get_Count_m6FDD246F5EE780619F0E194BBC0FCA724666256D_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void Mirror.Cloud.Example.NetworkManagerListServer::OnServerConnect(Mirror.NetworkConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManagerListServer_OnServerConnect_m7514CF59A8CF9DE20C52F6251AA4732D8A1F0475 (NetworkManagerListServer_t8B70D286CD2A4E966CDE10203D4720993CFBFCF7 * __this, NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * ___conn0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	OnPlayerListChanged_tA8004710D81957B7920259B79EE6014994A802BA * G_B4_0 = NULL;
	OnPlayerListChanged_tA8004710D81957B7920259B79EE6014994A802BA * G_B3_0 = NULL;
	{
		// int count = connectionCount;
		int32_t L_0 = NetworkManagerListServer_get_connectionCount_mCBF495FDFEF70A398E8C10DDB2AE943779A8C730(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// if (count > maxConnections)
		int32_t L_1 = V_0;
		int32_t L_2 = ((NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE *)__this)->get_maxConnections_14();
		if ((((int32_t)L_1) <= ((int32_t)L_2)))
		{
			goto IL_0017;
		}
	}
	{
		// conn.Disconnect();
		NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * L_3 = ___conn0;
		NullCheck(L_3);
		VirtActionInvoker0::Invoke(7 /* System.Void Mirror.NetworkConnection::Disconnect() */, L_3);
		// return;
		return;
	}

IL_0017:
	{
		// onPlayerListChanged?.Invoke(count);
		OnPlayerListChanged_tA8004710D81957B7920259B79EE6014994A802BA * L_4 = __this->get_onPlayerListChanged_35();
		OnPlayerListChanged_tA8004710D81957B7920259B79EE6014994A802BA * L_5 = L_4;
		G_B3_0 = L_5;
		if (L_5)
		{
			G_B4_0 = L_5;
			goto IL_0022;
		}
	}
	{
		return;
	}

IL_0022:
	{
		int32_t L_6 = V_0;
		NullCheck(G_B4_0);
		OnPlayerListChanged_Invoke_m901D33A4034705DD5764073013C2823D7E794BB9(G_B4_0, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.Cloud.Example.NetworkManagerListServer::OnServerDisconnect(Mirror.NetworkConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManagerListServer_OnServerDisconnect_m766920EB1599B3AA311FB398DD8E9E89073AABA6 (NetworkManagerListServer_t8B70D286CD2A4E966CDE10203D4720993CFBFCF7 * __this, NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * ___conn0, const RuntimeMethod* method)
{
	OnPlayerListChanged_tA8004710D81957B7920259B79EE6014994A802BA * G_B2_0 = NULL;
	OnPlayerListChanged_tA8004710D81957B7920259B79EE6014994A802BA * G_B1_0 = NULL;
	{
		// base.OnServerDisconnect(conn);
		NetworkConnection_tB7F48309DFDE730F2B8365840A48DFF388C8D553 * L_0 = ___conn0;
		NetworkManager_OnServerDisconnect_m06BB6CE446E0CD282C54CC0DEA299D03F40A2042(__this, L_0, /*hidden argument*/NULL);
		// onPlayerListChanged?.Invoke(connectionCount);
		OnPlayerListChanged_tA8004710D81957B7920259B79EE6014994A802BA * L_1 = __this->get_onPlayerListChanged_35();
		OnPlayerListChanged_tA8004710D81957B7920259B79EE6014994A802BA * L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		int32_t L_3 = NetworkManagerListServer_get_connectionCount_mCBF495FDFEF70A398E8C10DDB2AE943779A8C730(__this, /*hidden argument*/NULL);
		NullCheck(G_B2_0);
		OnPlayerListChanged_Invoke_m901D33A4034705DD5764073013C2823D7E794BB9(G_B2_0, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.Cloud.Example.NetworkManagerListServer::OnStartServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManagerListServer_OnStartServer_m028EDB438A5792D7EA3BC94F0EC95FF2DCA1B279 (NetworkManagerListServer_t8B70D286CD2A4E966CDE10203D4720993CFBFCF7 * __this, const RuntimeMethod* method)
{
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * G_B2_0 = NULL;
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * G_B1_0 = NULL;
	{
		// onServerStarted?.Invoke();
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_0 = __this->get_onServerStarted_33();
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		Action_Invoke_mC8D676E5DDF967EC5D23DD0E96FB52AA499817FD(G_B2_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.Cloud.Example.NetworkManagerListServer::OnStopServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManagerListServer_OnStopServer_m8289E117C530930F006073123063AA6CF2B8C5E1 (NetworkManagerListServer_t8B70D286CD2A4E966CDE10203D4720993CFBFCF7 * __this, const RuntimeMethod* method)
{
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * G_B2_0 = NULL;
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * G_B1_0 = NULL;
	{
		// onServerStopped?.Invoke();
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_0 = __this->get_onServerStopped_34();
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		Action_Invoke_mC8D676E5DDF967EC5D23DD0E96FB52AA499817FD(G_B2_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.Cloud.Example.NetworkManagerListServer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManagerListServer__ctor_m27F7417919B9E78166EABBA90022821870612195 (NetworkManagerListServer_t8B70D286CD2A4E966CDE10203D4720993CFBFCF7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkManagerListServer__ctor_m27F7417919B9E78166EABBA90022821870612195_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE_il2cpp_TypeInfo_var);
		NetworkManager__ctor_m462D358AE01ED7F8CCCDFE8E99A88BC8B768F60E(__this, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnPlayerListChanged_tA8004710D81957B7920259B79EE6014994A802BA (OnPlayerListChanged_tA8004710D81957B7920259B79EE6014994A802BA * __this, int32_t ___playerCount0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___playerCount0);

}
// System.Void Mirror.Cloud.Example.NetworkManagerListServer_OnPlayerListChanged::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPlayerListChanged__ctor_mAEE54429A0CC4B643B85318C0C1CDC5C7391AC14 (OnPlayerListChanged_tA8004710D81957B7920259B79EE6014994A802BA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Mirror.Cloud.Example.NetworkManagerListServer_OnPlayerListChanged::Invoke(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPlayerListChanged_Invoke_m901D33A4034705DD5764073013C2823D7E794BB9 (OnPlayerListChanged_tA8004710D81957B7920259B79EE6014994A802BA * __this, int32_t ___playerCount0, const RuntimeMethod* method)
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
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___playerCount0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___playerCount0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___playerCount0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___playerCount0);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___playerCount0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___playerCount0);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___playerCount0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___playerCount0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___playerCount0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Mirror.Cloud.Example.NetworkManagerListServer_OnPlayerListChanged::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnPlayerListChanged_BeginInvoke_m3405C94369A88EA9BE1BE2702DE2374296842F4C (OnPlayerListChanged_tA8004710D81957B7920259B79EE6014994A802BA * __this, int32_t ___playerCount0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnPlayerListChanged_BeginInvoke_m3405C94369A88EA9BE1BE2702DE2374296842F4C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___playerCount0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Mirror.Cloud.Example.NetworkManagerListServer_OnPlayerListChanged::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPlayerListChanged_EndInvoke_mD5EB01ADB62A0AC856A0DF6CE240A040643DC093 (OnPlayerListChanged_tA8004710D81957B7920259B79EE6014994A802BA * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Mirror.Cloud.Example.QuickListServerDebug::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuickListServerDebug_Start_m6AD54694D59C3C6D432D053B6E87D13BF8A5E382 (QuickListServerDebug_tE4832885D98C21B438A332BBF58DCF9195C55DBC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (QuickListServerDebug_Start_m6AD54694D59C3C6D432D053B6E87D13BF8A5E382_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE * V_0 = NULL;
	{
		// NetworkManager manager = NetworkManager.singleton;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE_il2cpp_TypeInfo_var);
		NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE * L_0 = NetworkManager_get_singleton_mF6B934FE2F4D47585A4FC9C60D97B8C0FC641D6A_inline(/*hidden argument*/NULL);
		V_0 = L_0;
		// connector = manager.GetComponent<ApiConnector>();
		NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE * L_1 = V_0;
		NullCheck(L_1);
		ApiConnector_tE4CB8EB0B23BE8F251872D03EE1992BE6A024E94 * L_2 = Component_GetComponent_TisApiConnector_tE4CB8EB0B23BE8F251872D03EE1992BE6A024E94_mBC22125086BC6CBCBEC13F6216D12E2795857026(L_1, /*hidden argument*/Component_GetComponent_TisApiConnector_tE4CB8EB0B23BE8F251872D03EE1992BE6A024E94_mBC22125086BC6CBCBEC13F6216D12E2795857026_RuntimeMethod_var);
		__this->set_connector_4(L_2);
		// connector.ListServer.ClientApi.onServerListUpdated += ClientApi_onServerListUpdated;
		ApiConnector_tE4CB8EB0B23BE8F251872D03EE1992BE6A024E94 * L_3 = __this->get_connector_4();
		NullCheck(L_3);
		ListServer_t9A599385F738F9714121265D8EC5245E5FE842D4 * L_4 = ApiConnector_get_ListServer_m007F45B343290BC08559792F7C7BE7BCD8A1EFAF_inline(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		RuntimeObject* L_5 = L_4->get_ClientApi_1();
		UnityAction_1_tAF5A6E9E11FEBAB4E729286D7A1A127E2F23D283 * L_6 = (UnityAction_1_tAF5A6E9E11FEBAB4E729286D7A1A127E2F23D283 *)il2cpp_codegen_object_new(UnityAction_1_tAF5A6E9E11FEBAB4E729286D7A1A127E2F23D283_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m817B292DAD9C8E89F6F6580B20F8C10EAA04491D(L_6, __this, (intptr_t)((intptr_t)QuickListServerDebug_ClientApi_onServerListUpdated_mB555B64EE8D8577C449BD5C572968DCEB26DA4D7_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_m817B292DAD9C8E89F6F6580B20F8C10EAA04491D_RuntimeMethod_var);
		NullCheck(L_5);
		InterfaceActionInvoker1< UnityAction_1_tAF5A6E9E11FEBAB4E729286D7A1A127E2F23D283 * >::Invoke(0 /* System.Void Mirror.Cloud.ListServerService.IListServerClientApi::add_onServerListUpdated(UnityEngine.Events.UnityAction`1<Mirror.Cloud.ListServerService.ServerCollectionJson>) */, IListServerClientApi_tE68BFA505AFCB5825CAFE0770947AE84FF406732_il2cpp_TypeInfo_var, L_5, L_6);
		// }
		return;
	}
}
// System.Void Mirror.Cloud.Example.QuickListServerDebug::ClientApi_onServerListUpdated(Mirror.Cloud.ListServerService.ServerCollectionJson)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuickListServerDebug_ClientApi_onServerListUpdated_mB555B64EE8D8577C449BD5C572968DCEB26DA4D7 (QuickListServerDebug_tE4832885D98C21B438A332BBF58DCF9195C55DBC * __this, ServerCollectionJson_t927BBBC6ABE4C66FA3B2DC69AB9105D035971960  ___arg00, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (QuickListServerDebug_ClientApi_onServerListUpdated_mB555B64EE8D8577C449BD5C572968DCEB26DA4D7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// collection = arg0;
		ServerCollectionJson_t927BBBC6ABE4C66FA3B2DC69AB9105D035971960  L_0 = ___arg00;
		Nullable_1_tAE6CD8652049A5B989144D2465FE5629A969A986  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Nullable_1__ctor_mE73D9C07E5959C6171ED269C8BF7155572F3DE0A((&L_1), L_0, /*hidden argument*/Nullable_1__ctor_mE73D9C07E5959C6171ED269C8BF7155572F3DE0A_RuntimeMethod_var);
		__this->set_collection_5(L_1);
		// }
		return;
	}
}
// System.Void Mirror.Cloud.Example.QuickListServerDebug::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuickListServerDebug_OnGUI_m3B40458C2FB4C0F411A59A604E30E40E9E915D6C (QuickListServerDebug_tE4832885D98C21B438A332BBF58DCF9195C55DBC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (QuickListServerDebug_OnGUI_m3B40458C2FB4C0F411A59A604E30E40E9E915D6C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ServerJsonU5BU5D_t3A4F7B269FEF3032ADD60A1DDB7A19EC7715BE77* V_0 = NULL;
	int32_t V_1 = 0;
	ServerJson_t0E3B764038B2CAACD0A933F586BE88F112B8EFAB  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// GUILayout.Label("List Server");
		GUILayoutOptionU5BU5D_tAB2AD0A365DBD2277A04E397AE8E1430A022AF1B* L_0 = Array_Empty_TisGUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6_m2B34681B50F2E0013941920FD3AEB407A6DF659E_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6_m2B34681B50F2E0013941920FD3AEB407A6DF659E_RuntimeMethod_var);
		GUILayout_Label_m0DD571F45BDDDCB45E9D195AB77F3D7050A2A030(_stringLiteral2E79A8A332B8E1D1EC9E1E7C4F2E6FDD899E5328, L_0, /*hidden argument*/NULL);
		// if (GUILayout.Button("Refresh"))
		GUILayoutOptionU5BU5D_tAB2AD0A365DBD2277A04E397AE8E1430A022AF1B* L_1 = Array_Empty_TisGUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6_m2B34681B50F2E0013941920FD3AEB407A6DF659E_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6_m2B34681B50F2E0013941920FD3AEB407A6DF659E_RuntimeMethod_var);
		bool L_2 = GUILayout_Button_mACAF3D25298F91F12A312DB687F53258DB0B9918(_stringLiteral56E3BADC4E6C5CC95E0EA5A9A878B9BD09F319D4, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0035;
		}
	}
	{
		// connector.ListServer.ClientApi.GetServerList();
		ApiConnector_tE4CB8EB0B23BE8F251872D03EE1992BE6A024E94 * L_3 = __this->get_connector_4();
		NullCheck(L_3);
		ListServer_t9A599385F738F9714121265D8EC5245E5FE842D4 * L_4 = ApiConnector_get_ListServer_m007F45B343290BC08559792F7C7BE7BCD8A1EFAF_inline(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		RuntimeObject* L_5 = L_4->get_ClientApi_1();
		NullCheck(L_5);
		InterfaceActionInvoker0::Invoke(2 /* System.Void Mirror.Cloud.ListServerService.IListServerClientApi::GetServerList() */, IListServerClientApi_tE68BFA505AFCB5825CAFE0770947AE84FF406732_il2cpp_TypeInfo_var, L_5);
	}

IL_0035:
	{
		// GUILayout.Space(40);
		GUILayout_Space_m3D3D0635EA7BAC83A9A0563005678319FCCED87E((40.0f), /*hidden argument*/NULL);
		// if (collection != null)
		Nullable_1_tAE6CD8652049A5B989144D2465FE5629A969A986 * L_6 = __this->get_address_of_collection_5();
		bool L_7 = Nullable_1_get_HasValue_m80F65E1119BB30A5C2E77356F2358CFB972F8DF6_inline((Nullable_1_tAE6CD8652049A5B989144D2465FE5629A969A986 *)L_6, /*hidden argument*/Nullable_1_get_HasValue_m80F65E1119BB30A5C2E77356F2358CFB972F8DF6_RuntimeMethod_var);
		if (!L_7)
		{
			goto IL_00ca;
		}
	}
	{
		// GUILayout.Label("Servers:");
		GUILayoutOptionU5BU5D_tAB2AD0A365DBD2277A04E397AE8E1430A022AF1B* L_8 = Array_Empty_TisGUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6_m2B34681B50F2E0013941920FD3AEB407A6DF659E_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6_m2B34681B50F2E0013941920FD3AEB407A6DF659E_RuntimeMethod_var);
		GUILayout_Label_m0DD571F45BDDDCB45E9D195AB77F3D7050A2A030(_stringLiteral5A3692D6123F48209A6C806541ABE9540AE0B325, L_8, /*hidden argument*/NULL);
		// foreach (ServerJson item in collection.Value.servers)
		Nullable_1_tAE6CD8652049A5B989144D2465FE5629A969A986 * L_9 = __this->get_address_of_collection_5();
		ServerCollectionJson_t927BBBC6ABE4C66FA3B2DC69AB9105D035971960  L_10 = Nullable_1_get_Value_mA449173BFED02D33F480D1AE9E5329DAB8C687B0((Nullable_1_tAE6CD8652049A5B989144D2465FE5629A969A986 *)L_9, /*hidden argument*/Nullable_1_get_Value_mA449173BFED02D33F480D1AE9E5329DAB8C687B0_RuntimeMethod_var);
		ServerJsonU5BU5D_t3A4F7B269FEF3032ADD60A1DDB7A19EC7715BE77* L_11 = L_10.get_servers_0();
		V_0 = L_11;
		V_1 = 0;
		goto IL_00c4;
	}

IL_0070:
	{
		// foreach (ServerJson item in collection.Value.servers)
		ServerJsonU5BU5D_t3A4F7B269FEF3032ADD60A1DDB7A19EC7715BE77* L_12 = V_0;
		int32_t L_13 = V_1;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		ServerJson_t0E3B764038B2CAACD0A933F586BE88F112B8EFAB  L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_2 = L_15;
		// GUILayout.Label($"{item.displayName}, {item.address}, {item.playerCount}/{item.maxPlayerCount}");
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_16 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = L_16;
		ServerJson_t0E3B764038B2CAACD0A933F586BE88F112B8EFAB  L_18 = V_2;
		String_t* L_19 = L_18.get_displayName_4();
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_19);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_19);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_20 = L_17;
		ServerJson_t0E3B764038B2CAACD0A933F586BE88F112B8EFAB  L_21 = V_2;
		String_t* L_22 = L_21.get_address_5();
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_22);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_22);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_23 = L_20;
		ServerJson_t0E3B764038B2CAACD0A933F586BE88F112B8EFAB  L_24 = V_2;
		int32_t L_25 = L_24.get_playerCount_2();
		int32_t L_26 = L_25;
		RuntimeObject * L_27 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_26);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_27);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_27);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_28 = L_23;
		ServerJson_t0E3B764038B2CAACD0A933F586BE88F112B8EFAB  L_29 = V_2;
		int32_t L_30 = L_29.get_maxPlayerCount_3();
		int32_t L_31 = L_30;
		RuntimeObject * L_32 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_31);
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_32);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_32);
		String_t* L_33 = String_Format_mA3AC3FE7B23D97F3A5BAA082D25B0E01B341A865(_stringLiteralFF7B5CB14FF264A8234585D866C7A328670ED3E8, L_28, /*hidden argument*/NULL);
		GUILayoutOptionU5BU5D_tAB2AD0A365DBD2277A04E397AE8E1430A022AF1B* L_34 = Array_Empty_TisGUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6_m2B34681B50F2E0013941920FD3AEB407A6DF659E_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6_m2B34681B50F2E0013941920FD3AEB407A6DF659E_RuntimeMethod_var);
		GUILayout_Label_m0DD571F45BDDDCB45E9D195AB77F3D7050A2A030(L_33, L_34, /*hidden argument*/NULL);
		int32_t L_35 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1));
	}

IL_00c4:
	{
		// foreach (ServerJson item in collection.Value.servers)
		int32_t L_36 = V_1;
		ServerJsonU5BU5D_t3A4F7B269FEF3032ADD60A1DDB7A19EC7715BE77* L_37 = V_0;
		NullCheck(L_37);
		if ((((int32_t)L_36) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_37)->max_length)))))))
		{
			goto IL_0070;
		}
	}

IL_00ca:
	{
		// }
		return;
	}
}
// System.Void Mirror.Cloud.Example.QuickListServerDebug::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuickListServerDebug__ctor_mDC670F2A62FC6DEE1E9DB40E472BCF49B3F4E64D (QuickListServerDebug_tE4832885D98C21B438A332BBF58DCF9195C55DBC * __this, const RuntimeMethod* method)
{
	{
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
// System.Void Mirror.Cloud.Example.ServerListManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerListManager_Start_m3016CEADD5927D2DB39E885325FB0D59C39CF7DD (ServerListManager_t83F3E1EE92996F8AF498DFCE86D03CE081379BC0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ServerListManager_Start_m3016CEADD5927D2DB39E885325FB0D59C39CF7DD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE * V_0 = NULL;
	{
		// NetworkManager manager = NetworkManager.singleton;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE_il2cpp_TypeInfo_var);
		NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE * L_0 = NetworkManager_get_singleton_mF6B934FE2F4D47585A4FC9C60D97B8C0FC641D6A_inline(/*hidden argument*/NULL);
		V_0 = L_0;
		// connector = manager.GetComponent<ApiConnector>();
		NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE * L_1 = V_0;
		NullCheck(L_1);
		ApiConnector_tE4CB8EB0B23BE8F251872D03EE1992BE6A024E94 * L_2 = Component_GetComponent_TisApiConnector_tE4CB8EB0B23BE8F251872D03EE1992BE6A024E94_mBC22125086BC6CBCBEC13F6216D12E2795857026(L_1, /*hidden argument*/Component_GetComponent_TisApiConnector_tE4CB8EB0B23BE8F251872D03EE1992BE6A024E94_mBC22125086BC6CBCBEC13F6216D12E2795857026_RuntimeMethod_var);
		__this->set_connector_9(L_2);
		// connector.ListServer.ClientApi.onServerListUpdated += listUI.UpdateList;
		ApiConnector_tE4CB8EB0B23BE8F251872D03EE1992BE6A024E94 * L_3 = __this->get_connector_9();
		NullCheck(L_3);
		ListServer_t9A599385F738F9714121265D8EC5245E5FE842D4 * L_4 = ApiConnector_get_ListServer_m007F45B343290BC08559792F7C7BE7BCD8A1EFAF_inline(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		RuntimeObject* L_5 = L_4->get_ClientApi_1();
		ServerListUI_t5DDE2460D1DB2D06CEC56B428B5850C9C363C7D7 * L_6 = __this->get_listUI_4();
		UnityAction_1_tAF5A6E9E11FEBAB4E729286D7A1A127E2F23D283 * L_7 = (UnityAction_1_tAF5A6E9E11FEBAB4E729286D7A1A127E2F23D283 *)il2cpp_codegen_object_new(UnityAction_1_tAF5A6E9E11FEBAB4E729286D7A1A127E2F23D283_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m817B292DAD9C8E89F6F6580B20F8C10EAA04491D(L_7, L_6, (intptr_t)((intptr_t)ServerListUI_UpdateList_mB1DF8852C1B42AC05C369CF76956D1DB2F960831_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_m817B292DAD9C8E89F6F6580B20F8C10EAA04491D_RuntimeMethod_var);
		NullCheck(L_5);
		InterfaceActionInvoker1< UnityAction_1_tAF5A6E9E11FEBAB4E729286D7A1A127E2F23D283 * >::Invoke(0 /* System.Void Mirror.Cloud.ListServerService.IListServerClientApi::add_onServerListUpdated(UnityEngine.Events.UnityAction`1<Mirror.Cloud.ListServerService.ServerCollectionJson>) */, IListServerClientApi_tE68BFA505AFCB5825CAFE0770947AE84FF406732_il2cpp_TypeInfo_var, L_5, L_7);
		// if (autoRefreshServerlist)
		bool L_8 = __this->get_autoRefreshServerlist_7();
		if (!L_8)
		{
			goto IL_005b;
		}
	}
	{
		// connector.ListServer.ClientApi.StartGetServerListRepeat(refreshinterval);
		ApiConnector_tE4CB8EB0B23BE8F251872D03EE1992BE6A024E94 * L_9 = __this->get_connector_9();
		NullCheck(L_9);
		ListServer_t9A599385F738F9714121265D8EC5245E5FE842D4 * L_10 = ApiConnector_get_ListServer_m007F45B343290BC08559792F7C7BE7BCD8A1EFAF_inline(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		RuntimeObject* L_11 = L_10->get_ClientApi_1();
		int32_t L_12 = __this->get_refreshinterval_8();
		NullCheck(L_11);
		InterfaceActionInvoker1< int32_t >::Invoke(3 /* System.Void Mirror.Cloud.ListServerService.IListServerClientApi::StartGetServerListRepeat(System.Int32) */, IListServerClientApi_tE68BFA505AFCB5825CAFE0770947AE84FF406732_il2cpp_TypeInfo_var, L_11, L_12);
	}

IL_005b:
	{
		// AddButtonHandlers();
		ServerListManager_AddButtonHandlers_mA3B273DFCEE07BB02AFC960BADBCBFC9865F0C21(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.Cloud.Example.ServerListManager::AddButtonHandlers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerListManager_AddButtonHandlers_mA3B273DFCEE07BB02AFC960BADBCBFC9865F0C21 (ServerListManager_t83F3E1EE92996F8AF498DFCE86D03CE081379BC0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ServerListManager_AddButtonHandlers_mA3B273DFCEE07BB02AFC960BADBCBFC9865F0C21_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// refreshButton.onClick.AddListener(RefreshButtonHandler);
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_0 = __this->get_refreshButton_5();
		NullCheck(L_0);
		ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * L_1 = Button_get_onClick_m77E8CA6917881760CC7900930F4C789F3E2F8817_inline(L_0, /*hidden argument*/NULL);
		UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * L_2 = (UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 *)il2cpp_codegen_object_new(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4_il2cpp_TypeInfo_var);
		UnityAction__ctor_mEFC4B92529CE83DF72501F92E07EC5598C54BDAC(L_2, __this, (intptr_t)((intptr_t)ServerListManager_RefreshButtonHandler_m704E754E0B4DEB378DBBDCD455F28B4EA0EAF64E_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_1);
		UnityEvent_AddListener_m31973FDDC5BB0B2828AB6EF519EC4FD6563499C9(L_1, L_2, /*hidden argument*/NULL);
		// startServerButton.onClick.AddListener(StartServerButtonHandler);
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_3 = __this->get_startServerButton_6();
		NullCheck(L_3);
		ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * L_4 = Button_get_onClick_m77E8CA6917881760CC7900930F4C789F3E2F8817_inline(L_3, /*hidden argument*/NULL);
		UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * L_5 = (UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 *)il2cpp_codegen_object_new(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4_il2cpp_TypeInfo_var);
		UnityAction__ctor_mEFC4B92529CE83DF72501F92E07EC5598C54BDAC(L_5, __this, (intptr_t)((intptr_t)ServerListManager_StartServerButtonHandler_mE381D46EC363110B54672601E4ADCC7C3000EFCA_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_4);
		UnityEvent_AddListener_m31973FDDC5BB0B2828AB6EF519EC4FD6563499C9(L_4, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.Cloud.Example.ServerListManager::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerListManager_OnDestroy_m1BAD24FBF43B302BB0C727F803B142135699673B (ServerListManager_t83F3E1EE92996F8AF498DFCE86D03CE081379BC0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ServerListManager_OnDestroy_m1BAD24FBF43B302BB0C727F803B142135699673B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (connector == null)
		ApiConnector_tE4CB8EB0B23BE8F251872D03EE1992BE6A024E94 * L_0 = __this->get_connector_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// if (autoRefreshServerlist)
		bool L_2 = __this->get_autoRefreshServerlist_7();
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		// connector.ListServer.ClientApi.StopGetServerListRepeat();
		ApiConnector_tE4CB8EB0B23BE8F251872D03EE1992BE6A024E94 * L_3 = __this->get_connector_9();
		NullCheck(L_3);
		ListServer_t9A599385F738F9714121265D8EC5245E5FE842D4 * L_4 = ApiConnector_get_ListServer_m007F45B343290BC08559792F7C7BE7BCD8A1EFAF_inline(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		RuntimeObject* L_5 = L_4->get_ClientApi_1();
		NullCheck(L_5);
		InterfaceActionInvoker0::Invoke(4 /* System.Void Mirror.Cloud.ListServerService.IListServerClientApi::StopGetServerListRepeat() */, IListServerClientApi_tE68BFA505AFCB5825CAFE0770947AE84FF406732_il2cpp_TypeInfo_var, L_5);
	}

IL_002c:
	{
		// connector.ListServer.ClientApi.onServerListUpdated -= listUI.UpdateList;
		ApiConnector_tE4CB8EB0B23BE8F251872D03EE1992BE6A024E94 * L_6 = __this->get_connector_9();
		NullCheck(L_6);
		ListServer_t9A599385F738F9714121265D8EC5245E5FE842D4 * L_7 = ApiConnector_get_ListServer_m007F45B343290BC08559792F7C7BE7BCD8A1EFAF_inline(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		RuntimeObject* L_8 = L_7->get_ClientApi_1();
		ServerListUI_t5DDE2460D1DB2D06CEC56B428B5850C9C363C7D7 * L_9 = __this->get_listUI_4();
		UnityAction_1_tAF5A6E9E11FEBAB4E729286D7A1A127E2F23D283 * L_10 = (UnityAction_1_tAF5A6E9E11FEBAB4E729286D7A1A127E2F23D283 *)il2cpp_codegen_object_new(UnityAction_1_tAF5A6E9E11FEBAB4E729286D7A1A127E2F23D283_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m817B292DAD9C8E89F6F6580B20F8C10EAA04491D(L_10, L_9, (intptr_t)((intptr_t)ServerListUI_UpdateList_mB1DF8852C1B42AC05C369CF76956D1DB2F960831_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_m817B292DAD9C8E89F6F6580B20F8C10EAA04491D_RuntimeMethod_var);
		NullCheck(L_8);
		InterfaceActionInvoker1< UnityAction_1_tAF5A6E9E11FEBAB4E729286D7A1A127E2F23D283 * >::Invoke(1 /* System.Void Mirror.Cloud.ListServerService.IListServerClientApi::remove_onServerListUpdated(UnityEngine.Events.UnityAction`1<Mirror.Cloud.ListServerService.ServerCollectionJson>) */, IListServerClientApi_tE68BFA505AFCB5825CAFE0770947AE84FF406732_il2cpp_TypeInfo_var, L_8, L_10);
		// }
		return;
	}
}
// System.Void Mirror.Cloud.Example.ServerListManager::RefreshButtonHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerListManager_RefreshButtonHandler_m704E754E0B4DEB378DBBDCD455F28B4EA0EAF64E (ServerListManager_t83F3E1EE92996F8AF498DFCE86D03CE081379BC0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ServerListManager_RefreshButtonHandler_m704E754E0B4DEB378DBBDCD455F28B4EA0EAF64E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// connector.ListServer.ClientApi.GetServerList();
		ApiConnector_tE4CB8EB0B23BE8F251872D03EE1992BE6A024E94 * L_0 = __this->get_connector_9();
		NullCheck(L_0);
		ListServer_t9A599385F738F9714121265D8EC5245E5FE842D4 * L_1 = ApiConnector_get_ListServer_m007F45B343290BC08559792F7C7BE7BCD8A1EFAF_inline(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		RuntimeObject* L_2 = L_1->get_ClientApi_1();
		NullCheck(L_2);
		InterfaceActionInvoker0::Invoke(2 /* System.Void Mirror.Cloud.ListServerService.IListServerClientApi::GetServerList() */, IListServerClientApi_tE68BFA505AFCB5825CAFE0770947AE84FF406732_il2cpp_TypeInfo_var, L_2);
		// }
		return;
	}
}
// System.Void Mirror.Cloud.Example.ServerListManager::StartServerButtonHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerListManager_StartServerButtonHandler_mE381D46EC363110B54672601E4ADCC7C3000EFCA (ServerListManager_t83F3E1EE92996F8AF498DFCE86D03CE081379BC0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ServerListManager_StartServerButtonHandler_mE381D46EC363110B54672601E4ADCC7C3000EFCA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// NetworkManager.singleton.StartServer();
		IL2CPP_RUNTIME_CLASS_INIT(NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE_il2cpp_TypeInfo_var);
		NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE * L_0 = NetworkManager_get_singleton_mF6B934FE2F4D47585A4FC9C60D97B8C0FC641D6A_inline(/*hidden argument*/NULL);
		NullCheck(L_0);
		NetworkManager_StartServer_mBA9F75FA845970F774BF118D314B88A9B1F85B67(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.Cloud.Example.ServerListManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerListManager__ctor_m4ABB368B8EB5ADBF9F24007EC3C7E037615D4FB2 (ServerListManager_t83F3E1EE92996F8AF498DFCE86D03CE081379BC0 * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField] int refreshinterval = 20;
		__this->set_refreshinterval_8(((int32_t)20));
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
// System.Void Mirror.Cloud.Example.ServerListUI::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerListUI_OnValidate_m3B72F1C1CD3948A6AC832CE858D8B9C839C19591 (ServerListUI_t5DDE2460D1DB2D06CEC56B428B5850C9C363C7D7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ServerListUI_OnValidate_m3B72F1C1CD3948A6AC832CE858D8B9C839C19591_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (parent == null)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_parent_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// parent = transform;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		__this->set_parent_5(L_2);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void Mirror.Cloud.Example.ServerListUI::UpdateList(Mirror.Cloud.ListServerService.ServerCollectionJson)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerListUI_UpdateList_mB1DF8852C1B42AC05C369CF76956D1DB2F960831 (ServerListUI_t5DDE2460D1DB2D06CEC56B428B5850C9C363C7D7 * __this, ServerCollectionJson_t927BBBC6ABE4C66FA3B2DC69AB9105D035971960  ___serverCollection0, const RuntimeMethod* method)
{
	{
		// DeleteOldItems();
		ServerListUI_DeleteOldItems_mC2FDB7ED7184CCD09AF44757ECA0E058570BC505(__this, /*hidden argument*/NULL);
		// CreateNewItems(serverCollection.servers);
		ServerCollectionJson_t927BBBC6ABE4C66FA3B2DC69AB9105D035971960  L_0 = ___serverCollection0;
		ServerJsonU5BU5D_t3A4F7B269FEF3032ADD60A1DDB7A19EC7715BE77* L_1 = L_0.get_servers_0();
		ServerListUI_CreateNewItems_m8D2CDFEF32440CD6F87DE808F44E5F8CA1298F25(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.Cloud.Example.ServerListUI::CreateNewItems(Mirror.Cloud.ListServerService.ServerJson[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerListUI_CreateNewItems_m8D2CDFEF32440CD6F87DE808F44E5F8CA1298F25 (ServerListUI_t5DDE2460D1DB2D06CEC56B428B5850C9C363C7D7 * __this, ServerJsonU5BU5D_t3A4F7B269FEF3032ADD60A1DDB7A19EC7715BE77* ___servers0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ServerListUI_CreateNewItems_m8D2CDFEF32440CD6F87DE808F44E5F8CA1298F25_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ServerJsonU5BU5D_t3A4F7B269FEF3032ADD60A1DDB7A19EC7715BE77* V_0 = NULL;
	int32_t V_1 = 0;
	ServerJson_t0E3B764038B2CAACD0A933F586BE88F112B8EFAB  V_2;
	memset((&V_2), 0, sizeof(V_2));
	ServerListUIItem_t7741F4958B2713690D4DC1B33E90664EA0563D68 * V_3 = NULL;
	{
		// foreach (ServerJson server in servers)
		ServerJsonU5BU5D_t3A4F7B269FEF3032ADD60A1DDB7A19EC7715BE77* L_0 = ___servers0;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0037;
	}

IL_0006:
	{
		// foreach (ServerJson server in servers)
		ServerJsonU5BU5D_t3A4F7B269FEF3032ADD60A1DDB7A19EC7715BE77* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		ServerJson_t0E3B764038B2CAACD0A933F586BE88F112B8EFAB  L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// ServerListUIItem clone = Instantiate(itemPrefab, parent);
		ServerListUIItem_t7741F4958B2713690D4DC1B33E90664EA0563D68 * L_5 = __this->get_itemPrefab_4();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = __this->get_parent_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		ServerListUIItem_t7741F4958B2713690D4DC1B33E90664EA0563D68 * L_7 = Object_Instantiate_TisServerListUIItem_t7741F4958B2713690D4DC1B33E90664EA0563D68_m5DEF0CA0EA63323F4B8DCA62EF1EBBB9168789E9(L_5, L_6, /*hidden argument*/Object_Instantiate_TisServerListUIItem_t7741F4958B2713690D4DC1B33E90664EA0563D68_m5DEF0CA0EA63323F4B8DCA62EF1EBBB9168789E9_RuntimeMethod_var);
		V_3 = L_7;
		// clone.Setup(server);
		ServerListUIItem_t7741F4958B2713690D4DC1B33E90664EA0563D68 * L_8 = V_3;
		ServerJson_t0E3B764038B2CAACD0A933F586BE88F112B8EFAB  L_9 = V_2;
		NullCheck(L_8);
		ServerListUIItem_Setup_mA6B8A5435909E6883F3A01BDF27C89294154159A(L_8, L_9, /*hidden argument*/NULL);
		// items.Add(clone);
		List_1_t848A769EBD33E8829AB5D9648E68B9AD338DDF37 * L_10 = __this->get_items_6();
		ServerListUIItem_t7741F4958B2713690D4DC1B33E90664EA0563D68 * L_11 = V_3;
		NullCheck(L_10);
		List_1_Add_mE20EE28D5065DFBE90C3F213DFF30ABB9201EA55(L_10, L_11, /*hidden argument*/List_1_Add_mE20EE28D5065DFBE90C3F213DFF30ABB9201EA55_RuntimeMethod_var);
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0037:
	{
		// foreach (ServerJson server in servers)
		int32_t L_13 = V_1;
		ServerJsonU5BU5D_t3A4F7B269FEF3032ADD60A1DDB7A19EC7715BE77* L_14 = V_0;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))))
		{
			goto IL_0006;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Mirror.Cloud.Example.ServerListUI::DeleteOldItems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerListUI_DeleteOldItems_mC2FDB7ED7184CCD09AF44757ECA0E058570BC505 (ServerListUI_t5DDE2460D1DB2D06CEC56B428B5850C9C363C7D7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ServerListUI_DeleteOldItems_mC2FDB7ED7184CCD09AF44757ECA0E058570BC505_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t7EC365BCC01F2EA78EE33D72F3DB5340E60B3C21  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// foreach (ServerListUIItem item in items)
		List_1_t848A769EBD33E8829AB5D9648E68B9AD338DDF37 * L_0 = __this->get_items_6();
		NullCheck(L_0);
		Enumerator_t7EC365BCC01F2EA78EE33D72F3DB5340E60B3C21  L_1 = List_1_GetEnumerator_m40A91E5400DA207B28377172E1F0EC488A42812C(L_0, /*hidden argument*/List_1_GetEnumerator_m40A91E5400DA207B28377172E1F0EC488A42812C_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_001f;
		}

IL_000e:
		{
			// foreach (ServerListUIItem item in items)
			ServerListUIItem_t7741F4958B2713690D4DC1B33E90664EA0563D68 * L_2 = Enumerator_get_Current_m8F370AA128DB8AE4B27495F050CCCDC9AB92FDD3_inline((Enumerator_t7EC365BCC01F2EA78EE33D72F3DB5340E60B3C21 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m8F370AA128DB8AE4B27495F050CCCDC9AB92FDD3_RuntimeMethod_var);
			// Destroy(item.gameObject);
			NullCheck(L_2);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_2, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_3, /*hidden argument*/NULL);
		}

IL_001f:
		{
			// foreach (ServerListUIItem item in items)
			bool L_4 = Enumerator_MoveNext_mC48ECCEA52C17541020268F6BB73E412B7849A42((Enumerator_t7EC365BCC01F2EA78EE33D72F3DB5340E60B3C21 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mC48ECCEA52C17541020268F6BB73E412B7849A42_RuntimeMethod_var);
			if (L_4)
			{
				goto IL_000e;
			}
		}

IL_0028:
		{
			IL2CPP_LEAVE(0x38, FINALLY_002a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002a;
	}

FINALLY_002a:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m64631EDF2A573617D98DA8C6D67962BBD6457E89((Enumerator_t7EC365BCC01F2EA78EE33D72F3DB5340E60B3C21 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m64631EDF2A573617D98DA8C6D67962BBD6457E89_RuntimeMethod_var);
		IL2CPP_END_FINALLY(42)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(42)
	{
		IL2CPP_JUMP_TBL(0x38, IL_0038)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0038:
	{
		// items.Clear();
		List_1_t848A769EBD33E8829AB5D9648E68B9AD338DDF37 * L_5 = __this->get_items_6();
		NullCheck(L_5);
		List_1_Clear_m0633EDA09BAC80F7D27EE90CDBFBDD3E0221DBA3(L_5, /*hidden argument*/List_1_Clear_m0633EDA09BAC80F7D27EE90CDBFBDD3E0221DBA3_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Mirror.Cloud.Example.ServerListUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerListUI__ctor_m1AD08EF358E4BD3B1126348B214670E29AF7EBF4 (ServerListUI_t5DDE2460D1DB2D06CEC56B428B5850C9C363C7D7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ServerListUI__ctor_m1AD08EF358E4BD3B1126348B214670E29AF7EBF4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly List<ServerListUIItem> items = new List<ServerListUIItem>();
		List_1_t848A769EBD33E8829AB5D9648E68B9AD338DDF37 * L_0 = (List_1_t848A769EBD33E8829AB5D9648E68B9AD338DDF37 *)il2cpp_codegen_object_new(List_1_t848A769EBD33E8829AB5D9648E68B9AD338DDF37_il2cpp_TypeInfo_var);
		List_1__ctor_m096DD19D6D329559D0A0EF66753BAC1D92983148(L_0, /*hidden argument*/List_1__ctor_m096DD19D6D329559D0A0EF66753BAC1D92983148_RuntimeMethod_var);
		__this->set_items_6(L_0);
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
// System.Void Mirror.Cloud.Example.ServerListUIItem::Setup(Mirror.Cloud.ListServerService.ServerJson)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerListUIItem_Setup_mA6B8A5435909E6883F3A01BDF27C89294154159A (ServerListUIItem_t7741F4958B2713690D4DC1B33E90664EA0563D68 * __this, ServerJson_t0E3B764038B2CAACD0A933F586BE88F112B8EFAB  ___server0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ServerListUIItem_Setup_mA6B8A5435909E6883F3A01BDF27C89294154159A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.server = server;
		ServerJson_t0E3B764038B2CAACD0A933F586BE88F112B8EFAB  L_0 = ___server0;
		__this->set_server_9(L_0);
		// nameText.text = server.displayName;
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_1 = __this->get_nameText_4();
		ServerJson_t0E3B764038B2CAACD0A933F586BE88F112B8EFAB  L_2 = ___server0;
		String_t* L_3 = L_2.get_displayName_4();
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_3);
		// namePlayers.text = string.Format(playersFormat, server.playerCount, server.maxPlayerCount);
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_4 = __this->get_namePlayers_5();
		String_t* L_5 = __this->get_playersFormat_6();
		ServerJson_t0E3B764038B2CAACD0A933F586BE88F112B8EFAB  L_6 = ___server0;
		int32_t L_7 = L_6.get_playerCount_2();
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_8);
		ServerJson_t0E3B764038B2CAACD0A933F586BE88F112B8EFAB  L_10 = ___server0;
		int32_t L_11 = L_10.get_maxPlayerCount_3();
		int32_t L_12 = L_11;
		RuntimeObject * L_13 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_12);
		String_t* L_14 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(L_5, L_9, L_13, /*hidden argument*/NULL);
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_14);
		// addressText.text = server.address;
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_15 = __this->get_addressText_7();
		ServerJson_t0E3B764038B2CAACD0A933F586BE88F112B8EFAB  L_16 = ___server0;
		String_t* L_17 = L_16.get_address_5();
		NullCheck(L_15);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_15, L_17);
		// joinButton.onClick.AddListener(OnJoinClicked);
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_18 = __this->get_joinButton_8();
		NullCheck(L_18);
		ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * L_19 = Button_get_onClick_m77E8CA6917881760CC7900930F4C789F3E2F8817_inline(L_18, /*hidden argument*/NULL);
		UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * L_20 = (UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 *)il2cpp_codegen_object_new(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4_il2cpp_TypeInfo_var);
		UnityAction__ctor_mEFC4B92529CE83DF72501F92E07EC5598C54BDAC(L_20, __this, (intptr_t)((intptr_t)ServerListUIItem_OnJoinClicked_m6FDA0A5A641BED48446D87D3D3E3436703FAE6B4_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_19);
		UnityEvent_AddListener_m31973FDDC5BB0B2828AB6EF519EC4FD6563499C9(L_19, L_20, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.Cloud.Example.ServerListUIItem::OnJoinClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerListUIItem_OnJoinClicked_m6FDA0A5A641BED48446D87D3D3E3436703FAE6B4 (ServerListUIItem_t7741F4958B2713690D4DC1B33E90664EA0563D68 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ServerListUIItem_OnJoinClicked_m6FDA0A5A641BED48446D87D3D3E3436703FAE6B4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// NetworkManager.singleton.StartClient(new Uri(server.address));
		IL2CPP_RUNTIME_CLASS_INIT(NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE_il2cpp_TypeInfo_var);
		NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE * L_0 = NetworkManager_get_singleton_mF6B934FE2F4D47585A4FC9C60D97B8C0FC641D6A_inline(/*hidden argument*/NULL);
		ServerJson_t0E3B764038B2CAACD0A933F586BE88F112B8EFAB * L_1 = __this->get_address_of_server_9();
		String_t* L_2 = L_1->get_address_5();
		Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * L_3 = (Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E *)il2cpp_codegen_object_new(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_il2cpp_TypeInfo_var);
		Uri__ctor_mBA69907A1D799CD12ED44B611985B25FE4C626A2(L_3, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		NetworkManager_StartClient_m98F0B83D4A405E0EB40B51A7DA3137AE5C3BA57E(L_0, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Mirror.Cloud.Example.ServerListUIItem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerListUIItem__ctor_mC7361D2BEF142977DC5180A330A7B253BE2CF222 (ServerListUIItem_t7741F4958B2713690D4DC1B33E90664EA0563D68 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ServerListUIItem__ctor_mC7361D2BEF142977DC5180A330A7B253BE2CF222_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] string playersFormat = "{0} / {1}";
		__this->set_playersFormat_6(_stringLiteral2A62ABB49FFE4003C0949BDA5BA8493662A104F9);
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
// System.Void Mirror.Cloud.Examples.InstantiateNetworkManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstantiateNetworkManager_Awake_mD33550269C8B76C7CDF4A1D0DE56E34C391979ED (InstantiateNetworkManager_tE4DCAE0812FCF13BCFF8368590862847B8352B24 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InstantiateNetworkManager_Awake_mD33550269C8B76C7CDF4A1D0DE56E34C391979ED_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (NetworkManager.singleton == null)
		IL2CPP_RUNTIME_CLASS_INIT(NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE_il2cpp_TypeInfo_var);
		NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE * L_0 = NetworkManager_get_singleton_mF6B934FE2F4D47585A4FC9C60D97B8C0FC641D6A_inline(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// Instantiate(prefab);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = __this->get_prefab_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_mC4AB712D7F18E0991E1542CE53F11385E21E7B90(L_2, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_mC4AB712D7F18E0991E1542CE53F11385E21E7B90_RuntimeMethod_var);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void Mirror.Cloud.Examples.InstantiateNetworkManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstantiateNetworkManager__ctor_mDACD764512C9D153FEF634B0C811E25FD64BB6E8 (InstantiateNetworkManager_tE4DCAE0812FCF13BCFF8368590862847B8352B24 * __this, const RuntimeMethod* method)
{
	{
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
// System.Void Mirror.Examples.Pong.QuitButtonHUD::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuitButtonHUD_OnGUI_m22508BD86C971C2E4AFF5860A337C510D1414F89 (QuitButtonHUD_tBD87B119A1CFECA7513AC24D2C7C04A145E81C38 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (QuitButtonHUD_OnGUI_m22508BD86C971C2E4AFF5860A337C510D1414F89_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE * V_0 = NULL;
	{
		// NetworkManager manager = NetworkManager.singleton;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE_il2cpp_TypeInfo_var);
		NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE * L_0 = NetworkManager_get_singleton_mF6B934FE2F4D47585A4FC9C60D97B8C0FC641D6A_inline(/*hidden argument*/NULL);
		V_0 = L_0;
		// if (manager == null)
		NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		// return;
		return;
	}

IL_0010:
	{
		// if (manager.mode == NetworkManagerMode.ServerOnly)
		NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE * L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = NetworkManager_get_mode_m20845BC6B1FC278669DFCA3586182274C8FBB288_inline(L_3, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_0031;
		}
	}
	{
		// if (GUILayout.Button("Stop Server"))
		GUILayoutOptionU5BU5D_tAB2AD0A365DBD2277A04E397AE8E1430A022AF1B* L_5 = Array_Empty_TisGUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6_m2B34681B50F2E0013941920FD3AEB407A6DF659E_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6_m2B34681B50F2E0013941920FD3AEB407A6DF659E_RuntimeMethod_var);
		bool L_6 = GUILayout_Button_mACAF3D25298F91F12A312DB687F53258DB0B9918(_stringLiteral1A90F6134A15D8079A96DD873A903C3E1224EEAD, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0072;
		}
	}
	{
		// manager.StopServer();
		NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE * L_7 = V_0;
		NullCheck(L_7);
		NetworkManager_StopServer_m91880D24E4732CD463A7F9062E548FF7DDBA4745(L_7, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0031:
	{
		// else if (manager.mode == NetworkManagerMode.Host)
		NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE * L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = NetworkManager_get_mode_m20845BC6B1FC278669DFCA3586182274C8FBB288_inline(L_8, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)3))))
		{
			goto IL_0052;
		}
	}
	{
		// if (GUILayout.Button("Stop Host"))
		GUILayoutOptionU5BU5D_tAB2AD0A365DBD2277A04E397AE8E1430A022AF1B* L_10 = Array_Empty_TisGUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6_m2B34681B50F2E0013941920FD3AEB407A6DF659E_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6_m2B34681B50F2E0013941920FD3AEB407A6DF659E_RuntimeMethod_var);
		bool L_11 = GUILayout_Button_mACAF3D25298F91F12A312DB687F53258DB0B9918(_stringLiteral178C8304D97FAAA500545453CFA76AA4098DC1F7, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0072;
		}
	}
	{
		// manager.StopHost();
		NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE * L_12 = V_0;
		NullCheck(L_12);
		NetworkManager_StopHost_m947A9282409793A9325124422772D9E1D6A866F3(L_12, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0052:
	{
		// else if (manager.mode == NetworkManagerMode.ClientOnly)
		NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE * L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = NetworkManager_get_mode_m20845BC6B1FC278669DFCA3586182274C8FBB288_inline(L_13, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_14) == ((uint32_t)2))))
		{
			goto IL_0072;
		}
	}
	{
		// if (GUILayout.Button("Stop Client"))
		GUILayoutOptionU5BU5D_tAB2AD0A365DBD2277A04E397AE8E1430A022AF1B* L_15 = Array_Empty_TisGUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6_m2B34681B50F2E0013941920FD3AEB407A6DF659E_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t27A0221AC2F6F53E7B89310FD19F51C565D835A6_m2B34681B50F2E0013941920FD3AEB407A6DF659E_RuntimeMethod_var);
		bool L_16 = GUILayout_Button_mACAF3D25298F91F12A312DB687F53258DB0B9918(_stringLiteralB1A3349612474350DF6690913F1555D784D7BBAA, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0072;
		}
	}
	{
		// manager.StopClient();
		NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE * L_17 = V_0;
		NullCheck(L_17);
		NetworkManager_StopClient_m5077F81B2FF39D54D8C3ACDBF284E995B76090A5(L_17, /*hidden argument*/NULL);
	}

IL_0072:
	{
		// }
		return;
	}
}
// System.Void Mirror.Examples.Pong.QuitButtonHUD::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuitButtonHUD__ctor_mE6B3CBD20A6F8113CB50E46A3AA0E2D54D119D64 (QuitButtonHUD_tBD87B119A1CFECA7513AC24D2C7C04A145E81C38 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE * NetworkManager_get_singleton_mF6B934FE2F4D47585A4FC9C60D97B8C0FC641D6A_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkManager_get_singleton_mF6B934FE2F4D47585A4FC9C60D97B8C0FC641D6AMirror_Examples_Cloud_GUI_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static NetworkManager singleton { get; private set; }
		IL2CPP_RUNTIME_CLASS_INIT(NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE_il2cpp_TypeInfo_var);
		NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE * L_0 = ((NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE_StaticFields*)il2cpp_codegen_static_fields_for(NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE_il2cpp_TypeInfo_var))->get_U3CsingletonU3Ek__BackingField_22();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR ListServer_t9A599385F738F9714121265D8EC5245E5FE842D4 * ApiConnector_get_ListServer_m007F45B343290BC08559792F7C7BE7BCD8A1EFAF_inline (ApiConnector_tE4CB8EB0B23BE8F251872D03EE1992BE6A024E94 * __this, const RuntimeMethod* method)
{
	{
		// public ListServer ListServer { get; private set; }
		ListServer_t9A599385F738F9714121265D8EC5245E5FE842D4 * L_0 = __this->get_U3CListServerU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * Button_get_onClick_m77E8CA6917881760CC7900930F4C789F3E2F8817_inline (Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * __this, const RuntimeMethod* method)
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * L_0 = __this->get_m_OnClick_19();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t NetworkManager_get_mode_m20845BC6B1FC278669DFCA3586182274C8FBB288_inline (NetworkManager_t1EF59B5CEC42A2BBB50742BC90FB6F8CC59074BE * __this, const RuntimeMethod* method)
{
	{
		// public NetworkManagerMode mode { get; private set; }
		int32_t L_0 = __this->get_U3CmodeU3Ek__BackingField_26();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ((EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m80F65E1119BB30A5C2E77356F2358CFB972F8DF6_gshared_inline (Nullable_1_tAE6CD8652049A5B989144D2465FE5629A969A986 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return L_0;
	}
}
