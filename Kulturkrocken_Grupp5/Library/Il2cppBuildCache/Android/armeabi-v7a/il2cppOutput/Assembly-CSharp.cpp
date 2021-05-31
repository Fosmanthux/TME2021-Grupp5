#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38;
// System.Comparison`1<dreamloLeaderBoard/Score>
struct Comparison_1_t828031481DDDCDFECD647B5D5327482576945BDB;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
struct Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80;
// System.Collections.Generic.IEnumerable`1<dreamloLeaderBoard/Score>
struct IEnumerable_1_t65CE3D489DF0138382D69D877819DA3FC5A848E2;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1;
// System.Collections.Generic.List`1<UnityEngine.UI.Button>
struct List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.Sprite>
struct List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880;
// System.Collections.Generic.List`1<dreamloLeaderBoard/Score>
struct List_1_tD28329A66242A4236EA37A1950A4660B3F9AF1F7;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// UnityEngine.UI.Button[]
struct ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B;
// UnityEngine.GUIStyle[]
struct GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// dreamloLeaderBoard/Score[]
struct ScoreU5BU5D_tD3FEF63256F30BA473D428523CC5B54B8AD6CA97;
// AddButtons
struct AddButtons_t1FDAD33E463CAFE3555F38286008545EEB7D7D58;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924;
// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C;
// UnityEngine.Font
struct Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GUILayoutOption
struct GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB;
// UnityEngine.GUISettings
struct GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0;
// UnityEngine.GUISkin
struct GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6;
// UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726;
// UnityEngine.GUIStyleState
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9;
// GameController
struct GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// GetGPS
struct GetGPS_tD132A0E0C3FB5649A8D89F4CC2F4348967F1F5C0;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// LeaderBoardManager
struct LeaderBoardManager_t87404B730BDD0E9A35EF39995ADE28BBE797C023;
// LeaderBoardSample
struct LeaderBoardSample_t7763EE95F3E0A9BA81E634FEA764FB37CDE18138;
// LoadScene
struct LoadScene_t633887ABD67B5712F8CCC7C5511422C0E45084D4;
// UnityEngine.LocationService
struct LocationService_tDCB7C3AA7A10C4727D49676FD3A902F48C27F855;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// PanelOpener
struct PanelOpener_tEE5DD262FE9C2B2F682A11A4F07433EC73D83BD5;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// ScoreCell
struct ScoreCell_t2B4A18682749BC3457B08AAD2BA80F12415FCE54;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// Timer
struct Timer_t32ADF3155A88C37628B80D227C821651666DD405;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// dreamloLeaderBoard
struct dreamloLeaderBoard_t65A12FD2CBA7E92B2703B98E99DCAEB25C7AEBFD;
// dreamloPromoCode
struct dreamloPromoCode_t640CC04DDAA3833B88CD2CF574BE448502BAFF2B;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F;
// UnityEngine.GUISkin/SkinChangedDelegate
struct SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E;
// GameController/<CheckIfTheCardsMatch>d__27
struct U3CCheckIfTheCardsMatchU3Ed__27_tAFEE8962B9D3C4649B097434888F94AAC8A83783;
// GetGPS/<StartGPS>d__5
struct U3CStartGPSU3Ed__5_t2FF10F0DE079CEBBEFD66B2B05DA3AD2C111B5E5;
// LeaderBoardManager/<StartGPS>d__26
struct U3CStartGPSU3Ed__26_t6F1765BD5FAE2C4A1D0A6808B7AF630071317C62;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// Timer/<TimerTake>d__5
struct U3CTimerTakeU3Ed__5_t897E40F209FEDC1937EAA8D5C9BEEF1F409CAC78;
// dreamloLeaderBoard/<>c
struct U3CU3Ec_tCA1B7E2863AF474F3FFDED0AA53F12C56EE0CB07;
// dreamloLeaderBoard/<GetRequest>d__16
struct U3CGetRequestU3Ed__16_t15BE8B46AE9A55716A0E2229C682D997A67CA635;
// dreamloPromoCode/<WebService>d__8
struct U3CWebServiceU3Ed__8_tB0266360203FE8C7B51C5262D5E45CC6047B13B3;

IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Comparison_1_t828031481DDDCDFECD647B5D5327482576945BDB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD28329A66242A4236EA37A1950A4660B3F9AF1F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScoreU5BU5D_tD3FEF63256F30BA473D428523CC5B54B8AD6CA97_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Score_t446577E2BC06794D97BE081C982A0D1F51F12D38_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* State_t67806ABA630FB739D87FB487A428A15B9277D5DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCheckIfTheCardsMatchU3Ed__27_tAFEE8962B9D3C4649B097434888F94AAC8A83783_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetRequestU3Ed__16_t15BE8B46AE9A55716A0E2229C682D997A67CA635_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartGPSU3Ed__26_t6F1765BD5FAE2C4A1D0A6808B7AF630071317C62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartGPSU3Ed__5_t2FF10F0DE079CEBBEFD66B2B05DA3AD2C111B5E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CTimerTakeU3Ed__5_t897E40F209FEDC1937EAA8D5C9BEEF1F409CAC78_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tCA1B7E2863AF474F3FFDED0AA53F12C56EE0CB07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWebServiceU3Ed__8_tB0266360203FE8C7B51C5262D5E45CC6047B13B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719;
IL2CPP_EXTERN_C String_t* _stringLiteral0B39A124E91DF8AA98920A7A55BDED4E374222A4;
IL2CPP_EXTERN_C String_t* _stringLiteral0CCFD69444F343A43D9B34E72AE10A9C37F6402F;
IL2CPP_EXTERN_C String_t* _stringLiteral1A9141C6D604CE4530FB3983D2DD3178E36CC069;
IL2CPP_EXTERN_C String_t* _stringLiteral1AE348EAFA097AB898941EAFE912D711A407DA10;
IL2CPP_EXTERN_C String_t* _stringLiteral1EB5DD321790BE4414A534B410AF17DA3065E4B0;
IL2CPP_EXTERN_C String_t* _stringLiteral208C5FEC8490815F768AEE5ED2AE1BA2C1CAD0EA;
IL2CPP_EXTERN_C String_t* _stringLiteral209507D592CB92D49EA90B13F92A7CB04FE823FA;
IL2CPP_EXTERN_C String_t* _stringLiteral21AF82E5F038AB7BB7D3EBB280CC64A020D51D11;
IL2CPP_EXTERN_C String_t* _stringLiteral336B029D04847DC4F36985E1B89D1A0B11D299A3;
IL2CPP_EXTERN_C String_t* _stringLiteral36C835822E02A87BE4FE460E679578AC0605E7EB;
IL2CPP_EXTERN_C String_t* _stringLiteral385D90346B7DEFBCCE71C2BE337FF43039B0F2BC;
IL2CPP_EXTERN_C String_t* _stringLiteral3ADBC887FE7024420C02DCB3C9984CBC541EFFFA;
IL2CPP_EXTERN_C String_t* _stringLiteral3BADA17CF62AE1A9C33E0086BFF271B2563C57B9;
IL2CPP_EXTERN_C String_t* _stringLiteral3C4F52AE03EA8FEF5DEAA4BF1DCF2792C970C821;
IL2CPP_EXTERN_C String_t* _stringLiteral40C3754113912BBB2324B9A85745EAD27C43B49F;
IL2CPP_EXTERN_C String_t* _stringLiteral40FD38E93B8D0CC44371FB0F361300AD664B4207;
IL2CPP_EXTERN_C String_t* _stringLiteral41C98FC0CED68751F46CD65DE5645AA66D19ED62;
IL2CPP_EXTERN_C String_t* _stringLiteral45558D73E039C4ADC236324031FD33686E07554C;
IL2CPP_EXTERN_C String_t* _stringLiteral4678B8189944D730D806E303298B5EEB033FBBCE;
IL2CPP_EXTERN_C String_t* _stringLiteral543D36208DB93FD0F9FC1C09FE32CA79E3698DE3;
IL2CPP_EXTERN_C String_t* _stringLiteral5A12E64C285A43EE258D15AE96138179CA5633F9;
IL2CPP_EXTERN_C String_t* _stringLiteral5CC44E0AC8D686D0F074F3448B47E371A8CEBD12;
IL2CPP_EXTERN_C String_t* _stringLiteral5DCD588B57B1C6C7CC9DB14D0A00F4F78FAE5248;
IL2CPP_EXTERN_C String_t* _stringLiteral64CE807593500556F8CCF9CA855EA05760437C7C;
IL2CPP_EXTERN_C String_t* _stringLiteral66523CA6691253A4BFA238DB91EA89F34CED9D43;
IL2CPP_EXTERN_C String_t* _stringLiteral67F6A23DA8A4DC44104F959E3CE0006AAF0DFB43;
IL2CPP_EXTERN_C String_t* _stringLiteral6A8C0D3418190266F35F3BC41EC150D20764A01C;
IL2CPP_EXTERN_C String_t* _stringLiteral6BAB133616E5FD4BD4EE33B976CCE842C8E612C7;
IL2CPP_EXTERN_C String_t* _stringLiteral6F6FF6CD6EB3EA52B18703D83FA37B118DB14C2B;
IL2CPP_EXTERN_C String_t* _stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral7CD3463136D7E8AA739FF04F508907CABD95D393;
IL2CPP_EXTERN_C String_t* _stringLiteral7D1628D810FE955F074A2919E378F959D66A6CA3;
IL2CPP_EXTERN_C String_t* _stringLiteral81CC9C9118222759CF36BB088A47DC8991A23C8F;
IL2CPP_EXTERN_C String_t* _stringLiteral84476C4AD7193DC00822163A62F7EBB6A86F65CE;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral8BD8EBBF9AAADE3A1911E0372AF7DEEFC2B7800D;
IL2CPP_EXTERN_C String_t* _stringLiteral914D691234F13495212AEF424B0285B1ADC9696A;
IL2CPP_EXTERN_C String_t* _stringLiteralA05EB14D09501AA15326AB3B7E353CD5A44EA973;
IL2CPP_EXTERN_C String_t* _stringLiteralA19C6F67980954F5C4E319AC55B496F32B79F096;
IL2CPP_EXTERN_C String_t* _stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827;
IL2CPP_EXTERN_C String_t* _stringLiteralA7C92D2F1CBC2875B49A2AA37D64844762020931;
IL2CPP_EXTERN_C String_t* _stringLiteralB06EE00770B2EB0FE33E9670047E763ABF99ABBD;
IL2CPP_EXTERN_C String_t* _stringLiteralB457A8555B7B70401A326AD5A32F6EB5E0D64CDA;
IL2CPP_EXTERN_C String_t* _stringLiteralB516612CABD890B6939D1FCC90888218EA78A0AA;
IL2CPP_EXTERN_C String_t* _stringLiteralB7FC82044036AE81DA8362BFACEDB4D035D18021;
IL2CPP_EXTERN_C String_t* _stringLiteralB8D8311C975C58CE533E965314B40432BE88FD1D;
IL2CPP_EXTERN_C String_t* _stringLiteralC25A5DB0A9403F923F7FED91C46F0B4C3FE808AF;
IL2CPP_EXTERN_C String_t* _stringLiteralCD1D3E7A93D272D812F8969E2F7861F768A94074;
IL2CPP_EXTERN_C String_t* _stringLiteralD802F2507756F6E6B10C6E218A98C24B30BFE83E;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDB671438C5B9CB3BC80A2957192B3D1A578920C5;
IL2CPP_EXTERN_C String_t* _stringLiteralDCB356DD627DAE1DA580443D721E779B886E69DF;
IL2CPP_EXTERN_C String_t* _stringLiteralDD074501BF114F32796BC9BD70562AD9C2DEF7B9;
IL2CPP_EXTERN_C String_t* _stringLiteralE19E27419398838F81D15CC2CD8788E53103A617;
IL2CPP_EXTERN_C String_t* _stringLiteralE2EE8E73413D8C0EC384803067E74CF1A2A1AAFB;
IL2CPP_EXTERN_C String_t* _stringLiteralE5BE21AD03087F27EAB6A7566CD10058CEA003D9;
IL2CPP_EXTERN_C String_t* _stringLiteralE6CC8AD0FE02F600EE52F97A6EA02EAA7E216422;
IL2CPP_EXTERN_C String_t* _stringLiteralF072D06D5B28B2B30B1C6C51C29BBE3356185F32;
IL2CPP_EXTERN_C String_t* _stringLiteralF08B33E7F8A158589EEB3EFE6635CBB2BF40662C;
IL2CPP_EXTERN_C String_t* _stringLiteralF398C620EA88F4070BE8AC9916E05DE1E9EAF174;
IL2CPP_EXTERN_C String_t* _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
IL2CPP_EXTERN_C String_t* _stringLiteralFB79360A5519AFE11DE3C8DBC68DF5DF59C0349D;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Comparison_1__ctor_m00BDA321144DBD25E52E3AACD59FCB15458B889C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m169C1B85766C1F9F786A0178DD9817577841329C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mD9C961426EFA6BBBFDCA42D46BCEA62283586500_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m7206FD3121D8BEA7DFCAD913FDAF3CA0F6821691_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m9A094C777FDE49249BB235EA98E96388A5F15AA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m01B1280C927D8D132CE202C3E9F206F467D0346C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m03121030C14973605EA1EDD6F9CF9082E3C68DDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameController_U3CAddListenersU3Eb__25_0_mFD646199630585743BC9144DFA720A4AD5B02B3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisScoreCell_t2B4A18682749BC3457B08AAD2BA80F12415FCE54_m6169DD6DD87A104A4BD627F2F25104BD1B449D34_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisdreamloLeaderBoard_t65A12FD2CBA7E92B2703B98E99DCAEB25C7AEBFD_m6E6AC3A8B51A6799905BAC19D9EB2F955C14B896_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisdreamloPromoCode_t640CC04DDAA3833B88CD2CF574BE448502BAFF2B_m958A87A8953E497EAA533CB3FE4D6779F0ECBF7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m28122A5F1F50EF8394190DE6D5334ED44F08AA61_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF6AEA6EB07931A44C878F9EC8EF494930C0A3A93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m4A67E1D9039071BEE37213CD4CD4296DA50A00AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mBBC2C0EA0F269A56465D057A5C6467489C251CBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Sort_mE98B6907239BFB3CD96D0F15541D02735DC00984_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m4CCA077ACAB11548CE7A37FE67B013E1E7497ACD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m8F8C5D12CC3CF1E9B76EB4FA41D95C9ACDBBE003_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA1744A70D10E32296ECF132BFF63A811CB50A795_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mB5D64AE88F26C3619A8B610C1E196429533EB45B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m6BBCE0586E4C6065C90FA9484A516263C5192008_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF608E717F324700CEA814E2E1E7B1DA9F08CAB54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF8AF3BE95FB3004BFAD9AE87BF35C557862905EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m0137FA1532E52BCE2C354C7E3689B9833F3C7711_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m2E8D9A40352859B1D5465D074732572FC364786E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m30AC25EDC1317A0930F223DE147F170FEF22A612_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_mD3ACD749DA26F9EC1DE8703DAE9B6A7B6A45429B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCheckIfTheCardsMatchU3Ed__27_System_Collections_IEnumerator_Reset_m49265A0C19FED592D400CAFBFFF0808F63FE7289_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetRequestU3Ed__16_System_Collections_IEnumerator_Reset_m1D2D85E0F35045C8AC5B714AFD01323724C9596B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartGPSU3Ed__26_System_Collections_IEnumerator_Reset_m6A7E5C575E7C4593EF6D9F52731949802B05E1E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartGPSU3Ed__5_System_Collections_IEnumerator_Reset_m502D2FBBCBC2F28EB0B19E25C6690CA0E3BB300F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTimerTakeU3Ed__5_System_Collections_IEnumerator_Reset_mB53D527BD0D43788F95C986640BD45902CE6D6DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CToListHighToLowU3Eb__19_0_mCB94C720BE247F406BD87316BA70BD07E1022177_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CToListLowToHighU3Eb__18_0_m46BB2B7C6332E4131D4CDFCE2B99317318A465E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWebServiceU3Ed__8_System_Collections_IEnumerator_Reset_m080F548A046ADBBD602737544B67ADF3BAD56C3B_RuntimeMethod_var;
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com;
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke;
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com;
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com;
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke;
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com;

struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B;
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct ScoreU5BU5D_tD3FEF63256F30BA473D428523CC5B54B8AD6CA97;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.UI.Button>
struct List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E, ____items_1)); }
	inline ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* get__items_1() const { return ____items_1; }
	inline ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E_StaticFields, ____emptyArray_5)); }
	inline ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Sprite>
struct List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880, ____items_1)); }
	inline SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* get__items_1() const { return ____items_1; }
	inline SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880_StaticFields, ____emptyArray_5)); }
	inline SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<dreamloLeaderBoard/Score>
struct List_1_tD28329A66242A4236EA37A1950A4660B3F9AF1F7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ScoreU5BU5D_tD3FEF63256F30BA473D428523CC5B54B8AD6CA97* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tD28329A66242A4236EA37A1950A4660B3F9AF1F7, ____items_1)); }
	inline ScoreU5BU5D_tD3FEF63256F30BA473D428523CC5B54B8AD6CA97* get__items_1() const { return ____items_1; }
	inline ScoreU5BU5D_tD3FEF63256F30BA473D428523CC5B54B8AD6CA97** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ScoreU5BU5D_tD3FEF63256F30BA473D428523CC5B54B8AD6CA97* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tD28329A66242A4236EA37A1950A4660B3F9AF1F7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tD28329A66242A4236EA37A1950A4660B3F9AF1F7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tD28329A66242A4236EA37A1950A4660B3F9AF1F7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tD28329A66242A4236EA37A1950A4660B3F9AF1F7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ScoreU5BU5D_tD3FEF63256F30BA473D428523CC5B54B8AD6CA97* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tD28329A66242A4236EA37A1950A4660B3F9AF1F7_StaticFields, ____emptyArray_5)); }
	inline ScoreU5BU5D_tD3FEF63256F30BA473D428523CC5B54B8AD6CA97* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ScoreU5BU5D_tD3FEF63256F30BA473D428523CC5B54B8AD6CA97** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ScoreU5BU5D_tD3FEF63256F30BA473D428523CC5B54B8AD6CA97* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// UnityEngine.LocationService
struct LocationService_tDCB7C3AA7A10C4727D49676FD3A902F48C27F855  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
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


// UnityEngine.Events.UnityEventBase
struct UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_Calls_0)); }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// GameController/<CheckIfTheCardsMatch>d__27
struct U3CCheckIfTheCardsMatchU3Ed__27_tAFEE8962B9D3C4649B097434888F94AAC8A83783  : public RuntimeObject
{
public:
	// System.Int32 GameController/<CheckIfTheCardsMatch>d__27::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameController/<CheckIfTheCardsMatch>d__27::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// GameController GameController/<CheckIfTheCardsMatch>d__27::<>4__this
	GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCheckIfTheCardsMatchU3Ed__27_tAFEE8962B9D3C4649B097434888F94AAC8A83783, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCheckIfTheCardsMatchU3Ed__27_tAFEE8962B9D3C4649B097434888F94AAC8A83783, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CCheckIfTheCardsMatchU3Ed__27_tAFEE8962B9D3C4649B097434888F94AAC8A83783, ___U3CU3E4__this_2)); }
	inline GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// GetGPS/<StartGPS>d__5
struct U3CStartGPSU3Ed__5_t2FF10F0DE079CEBBEFD66B2B05DA3AD2C111B5E5  : public RuntimeObject
{
public:
	// System.Int32 GetGPS/<StartGPS>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GetGPS/<StartGPS>d__5::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// GetGPS GetGPS/<StartGPS>d__5::<>4__this
	GetGPS_tD132A0E0C3FB5649A8D89F4CC2F4348967F1F5C0 * ___U3CU3E4__this_2;
	// System.Int32 GetGPS/<StartGPS>d__5::<maxWait>5__2
	int32_t ___U3CmaxWaitU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartGPSU3Ed__5_t2FF10F0DE079CEBBEFD66B2B05DA3AD2C111B5E5, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStartGPSU3Ed__5_t2FF10F0DE079CEBBEFD66B2B05DA3AD2C111B5E5, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartGPSU3Ed__5_t2FF10F0DE079CEBBEFD66B2B05DA3AD2C111B5E5, ___U3CU3E4__this_2)); }
	inline GetGPS_tD132A0E0C3FB5649A8D89F4CC2F4348967F1F5C0 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GetGPS_tD132A0E0C3FB5649A8D89F4CC2F4348967F1F5C0 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GetGPS_tD132A0E0C3FB5649A8D89F4CC2F4348967F1F5C0 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CmaxWaitU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CStartGPSU3Ed__5_t2FF10F0DE079CEBBEFD66B2B05DA3AD2C111B5E5, ___U3CmaxWaitU3E5__2_3)); }
	inline int32_t get_U3CmaxWaitU3E5__2_3() const { return ___U3CmaxWaitU3E5__2_3; }
	inline int32_t* get_address_of_U3CmaxWaitU3E5__2_3() { return &___U3CmaxWaitU3E5__2_3; }
	inline void set_U3CmaxWaitU3E5__2_3(int32_t value)
	{
		___U3CmaxWaitU3E5__2_3 = value;
	}
};


// LeaderBoardManager/<StartGPS>d__26
struct U3CStartGPSU3Ed__26_t6F1765BD5FAE2C4A1D0A6808B7AF630071317C62  : public RuntimeObject
{
public:
	// System.Int32 LeaderBoardManager/<StartGPS>d__26::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object LeaderBoardManager/<StartGPS>d__26::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// LeaderBoardManager LeaderBoardManager/<StartGPS>d__26::<>4__this
	LeaderBoardManager_t87404B730BDD0E9A35EF39995ADE28BBE797C023 * ___U3CU3E4__this_2;
	// System.Int32 LeaderBoardManager/<StartGPS>d__26::<maxWait>5__2
	int32_t ___U3CmaxWaitU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartGPSU3Ed__26_t6F1765BD5FAE2C4A1D0A6808B7AF630071317C62, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStartGPSU3Ed__26_t6F1765BD5FAE2C4A1D0A6808B7AF630071317C62, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartGPSU3Ed__26_t6F1765BD5FAE2C4A1D0A6808B7AF630071317C62, ___U3CU3E4__this_2)); }
	inline LeaderBoardManager_t87404B730BDD0E9A35EF39995ADE28BBE797C023 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline LeaderBoardManager_t87404B730BDD0E9A35EF39995ADE28BBE797C023 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(LeaderBoardManager_t87404B730BDD0E9A35EF39995ADE28BBE797C023 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CmaxWaitU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CStartGPSU3Ed__26_t6F1765BD5FAE2C4A1D0A6808B7AF630071317C62, ___U3CmaxWaitU3E5__2_3)); }
	inline int32_t get_U3CmaxWaitU3E5__2_3() const { return ___U3CmaxWaitU3E5__2_3; }
	inline int32_t* get_address_of_U3CmaxWaitU3E5__2_3() { return &___U3CmaxWaitU3E5__2_3; }
	inline void set_U3CmaxWaitU3E5__2_3(int32_t value)
	{
		___U3CmaxWaitU3E5__2_3 = value;
	}
};


// Timer/<TimerTake>d__5
struct U3CTimerTakeU3Ed__5_t897E40F209FEDC1937EAA8D5C9BEEF1F409CAC78  : public RuntimeObject
{
public:
	// System.Int32 Timer/<TimerTake>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Timer/<TimerTake>d__5::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Timer Timer/<TimerTake>d__5::<>4__this
	Timer_t32ADF3155A88C37628B80D227C821651666DD405 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CTimerTakeU3Ed__5_t897E40F209FEDC1937EAA8D5C9BEEF1F409CAC78, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CTimerTakeU3Ed__5_t897E40F209FEDC1937EAA8D5C9BEEF1F409CAC78, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CTimerTakeU3Ed__5_t897E40F209FEDC1937EAA8D5C9BEEF1F409CAC78, ___U3CU3E4__this_2)); }
	inline Timer_t32ADF3155A88C37628B80D227C821651666DD405 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Timer_t32ADF3155A88C37628B80D227C821651666DD405 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Timer_t32ADF3155A88C37628B80D227C821651666DD405 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// dreamloLeaderBoard/<>c
struct U3CU3Ec_tCA1B7E2863AF474F3FFDED0AA53F12C56EE0CB07  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tCA1B7E2863AF474F3FFDED0AA53F12C56EE0CB07_StaticFields
{
public:
	// dreamloLeaderBoard/<>c dreamloLeaderBoard/<>c::<>9
	U3CU3Ec_tCA1B7E2863AF474F3FFDED0AA53F12C56EE0CB07 * ___U3CU3E9_0;
	// System.Comparison`1<dreamloLeaderBoard/Score> dreamloLeaderBoard/<>c::<>9__18_0
	Comparison_1_t828031481DDDCDFECD647B5D5327482576945BDB * ___U3CU3E9__18_0_1;
	// System.Comparison`1<dreamloLeaderBoard/Score> dreamloLeaderBoard/<>c::<>9__19_0
	Comparison_1_t828031481DDDCDFECD647B5D5327482576945BDB * ___U3CU3E9__19_0_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCA1B7E2863AF474F3FFDED0AA53F12C56EE0CB07_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tCA1B7E2863AF474F3FFDED0AA53F12C56EE0CB07 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tCA1B7E2863AF474F3FFDED0AA53F12C56EE0CB07 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tCA1B7E2863AF474F3FFDED0AA53F12C56EE0CB07 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__18_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCA1B7E2863AF474F3FFDED0AA53F12C56EE0CB07_StaticFields, ___U3CU3E9__18_0_1)); }
	inline Comparison_1_t828031481DDDCDFECD647B5D5327482576945BDB * get_U3CU3E9__18_0_1() const { return ___U3CU3E9__18_0_1; }
	inline Comparison_1_t828031481DDDCDFECD647B5D5327482576945BDB ** get_address_of_U3CU3E9__18_0_1() { return &___U3CU3E9__18_0_1; }
	inline void set_U3CU3E9__18_0_1(Comparison_1_t828031481DDDCDFECD647B5D5327482576945BDB * value)
	{
		___U3CU3E9__18_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__18_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__19_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCA1B7E2863AF474F3FFDED0AA53F12C56EE0CB07_StaticFields, ___U3CU3E9__19_0_2)); }
	inline Comparison_1_t828031481DDDCDFECD647B5D5327482576945BDB * get_U3CU3E9__19_0_2() const { return ___U3CU3E9__19_0_2; }
	inline Comparison_1_t828031481DDDCDFECD647B5D5327482576945BDB ** get_address_of_U3CU3E9__19_0_2() { return &___U3CU3E9__19_0_2; }
	inline void set_U3CU3E9__19_0_2(Comparison_1_t828031481DDDCDFECD647B5D5327482576945BDB * value)
	{
		___U3CU3E9__19_0_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__19_0_2), (void*)value);
	}
};


// dreamloLeaderBoard/<GetRequest>d__16
struct U3CGetRequestU3Ed__16_t15BE8B46AE9A55716A0E2229C682D997A67CA635  : public RuntimeObject
{
public:
	// System.Int32 dreamloLeaderBoard/<GetRequest>d__16::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object dreamloLeaderBoard/<GetRequest>d__16::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.String dreamloLeaderBoard/<GetRequest>d__16::url
	String_t* ___url_2;
	// dreamloLeaderBoard dreamloLeaderBoard/<GetRequest>d__16::<>4__this
	dreamloLeaderBoard_t65A12FD2CBA7E92B2703B98E99DCAEB25C7AEBFD * ___U3CU3E4__this_3;
	// UnityEngine.Networking.UnityWebRequest dreamloLeaderBoard/<GetRequest>d__16::<www>5__2
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___U3CwwwU3E5__2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetRequestU3Ed__16_t15BE8B46AE9A55716A0E2229C682D997A67CA635, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetRequestU3Ed__16_t15BE8B46AE9A55716A0E2229C682D997A67CA635, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_url_2() { return static_cast<int32_t>(offsetof(U3CGetRequestU3Ed__16_t15BE8B46AE9A55716A0E2229C682D997A67CA635, ___url_2)); }
	inline String_t* get_url_2() const { return ___url_2; }
	inline String_t** get_address_of_url_2() { return &___url_2; }
	inline void set_url_2(String_t* value)
	{
		___url_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___url_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CGetRequestU3Ed__16_t15BE8B46AE9A55716A0E2229C682D997A67CA635, ___U3CU3E4__this_3)); }
	inline dreamloLeaderBoard_t65A12FD2CBA7E92B2703B98E99DCAEB25C7AEBFD * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline dreamloLeaderBoard_t65A12FD2CBA7E92B2703B98E99DCAEB25C7AEBFD ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(dreamloLeaderBoard_t65A12FD2CBA7E92B2703B98E99DCAEB25C7AEBFD * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CwwwU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CGetRequestU3Ed__16_t15BE8B46AE9A55716A0E2229C682D997A67CA635, ___U3CwwwU3E5__2_4)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_U3CwwwU3E5__2_4() const { return ___U3CwwwU3E5__2_4; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_U3CwwwU3E5__2_4() { return &___U3CwwwU3E5__2_4; }
	inline void set_U3CwwwU3E5__2_4(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___U3CwwwU3E5__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwwwU3E5__2_4), (void*)value);
	}
};


// dreamloPromoCode/<WebService>d__8
struct U3CWebServiceU3Ed__8_tB0266360203FE8C7B51C5262D5E45CC6047B13B3  : public RuntimeObject
{
public:
	// System.Int32 dreamloPromoCode/<WebService>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object dreamloPromoCode/<WebService>d__8::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// dreamloPromoCode dreamloPromoCode/<WebService>d__8::<>4__this
	dreamloPromoCode_t640CC04DDAA3833B88CD2CF574BE448502BAFF2B * ___U3CU3E4__this_2;
	// System.String dreamloPromoCode/<WebService>d__8::url
	String_t* ___url_3;
	// UnityEngine.Networking.UnityWebRequest dreamloPromoCode/<WebService>d__8::<www>5__2
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___U3CwwwU3E5__2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CWebServiceU3Ed__8_tB0266360203FE8C7B51C5262D5E45CC6047B13B3, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CWebServiceU3Ed__8_tB0266360203FE8C7B51C5262D5E45CC6047B13B3, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CWebServiceU3Ed__8_tB0266360203FE8C7B51C5262D5E45CC6047B13B3, ___U3CU3E4__this_2)); }
	inline dreamloPromoCode_t640CC04DDAA3833B88CD2CF574BE448502BAFF2B * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline dreamloPromoCode_t640CC04DDAA3833B88CD2CF574BE448502BAFF2B ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(dreamloPromoCode_t640CC04DDAA3833B88CD2CF574BE448502BAFF2B * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_url_3() { return static_cast<int32_t>(offsetof(U3CWebServiceU3Ed__8_tB0266360203FE8C7B51C5262D5E45CC6047B13B3, ___url_3)); }
	inline String_t* get_url_3() const { return ___url_3; }
	inline String_t** get_address_of_url_3() { return &___url_3; }
	inline void set_url_3(String_t* value)
	{
		___url_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___url_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CwwwU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CWebServiceU3Ed__8_tB0266360203FE8C7B51C5262D5E45CC6047B13B3, ___U3CwwwU3E5__2_4)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_U3CwwwU3E5__2_4() const { return ___U3CwwwU3E5__2_4; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_U3CwwwU3E5__2_4() { return &___U3CwwwU3E5__2_4; }
	inline void set_U3CwwwU3E5__2_4(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___U3CwwwU3E5__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwwwU3E5__2_4), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Button>
struct Enumerator_t6D0827411121305C0C750B338E1BFB757246E871 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t6D0827411121305C0C750B338E1BFB757246E871, ___list_0)); }
	inline List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * get_list_0() const { return ___list_0; }
	inline List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t6D0827411121305C0C750B338E1BFB757246E871, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t6D0827411121305C0C750B338E1BFB757246E871, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t6D0827411121305C0C750B338E1BFB757246E871, ___current_3)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_current_3() const { return ___current_3; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
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


// UnityEngine.LocationInfo
struct LocationInfo_t7FC872AE105FF29421AFC8BBEE071F6C36E44769 
{
public:
	// System.Double UnityEngine.LocationInfo::m_Timestamp
	double ___m_Timestamp_0;
	// System.Single UnityEngine.LocationInfo::m_Latitude
	float ___m_Latitude_1;
	// System.Single UnityEngine.LocationInfo::m_Longitude
	float ___m_Longitude_2;
	// System.Single UnityEngine.LocationInfo::m_Altitude
	float ___m_Altitude_3;
	// System.Single UnityEngine.LocationInfo::m_HorizontalAccuracy
	float ___m_HorizontalAccuracy_4;
	// System.Single UnityEngine.LocationInfo::m_VerticalAccuracy
	float ___m_VerticalAccuracy_5;

public:
	inline static int32_t get_offset_of_m_Timestamp_0() { return static_cast<int32_t>(offsetof(LocationInfo_t7FC872AE105FF29421AFC8BBEE071F6C36E44769, ___m_Timestamp_0)); }
	inline double get_m_Timestamp_0() const { return ___m_Timestamp_0; }
	inline double* get_address_of_m_Timestamp_0() { return &___m_Timestamp_0; }
	inline void set_m_Timestamp_0(double value)
	{
		___m_Timestamp_0 = value;
	}

	inline static int32_t get_offset_of_m_Latitude_1() { return static_cast<int32_t>(offsetof(LocationInfo_t7FC872AE105FF29421AFC8BBEE071F6C36E44769, ___m_Latitude_1)); }
	inline float get_m_Latitude_1() const { return ___m_Latitude_1; }
	inline float* get_address_of_m_Latitude_1() { return &___m_Latitude_1; }
	inline void set_m_Latitude_1(float value)
	{
		___m_Latitude_1 = value;
	}

	inline static int32_t get_offset_of_m_Longitude_2() { return static_cast<int32_t>(offsetof(LocationInfo_t7FC872AE105FF29421AFC8BBEE071F6C36E44769, ___m_Longitude_2)); }
	inline float get_m_Longitude_2() const { return ___m_Longitude_2; }
	inline float* get_address_of_m_Longitude_2() { return &___m_Longitude_2; }
	inline void set_m_Longitude_2(float value)
	{
		___m_Longitude_2 = value;
	}

	inline static int32_t get_offset_of_m_Altitude_3() { return static_cast<int32_t>(offsetof(LocationInfo_t7FC872AE105FF29421AFC8BBEE071F6C36E44769, ___m_Altitude_3)); }
	inline float get_m_Altitude_3() const { return ___m_Altitude_3; }
	inline float* get_address_of_m_Altitude_3() { return &___m_Altitude_3; }
	inline void set_m_Altitude_3(float value)
	{
		___m_Altitude_3 = value;
	}

	inline static int32_t get_offset_of_m_HorizontalAccuracy_4() { return static_cast<int32_t>(offsetof(LocationInfo_t7FC872AE105FF29421AFC8BBEE071F6C36E44769, ___m_HorizontalAccuracy_4)); }
	inline float get_m_HorizontalAccuracy_4() const { return ___m_HorizontalAccuracy_4; }
	inline float* get_address_of_m_HorizontalAccuracy_4() { return &___m_HorizontalAccuracy_4; }
	inline void set_m_HorizontalAccuracy_4(float value)
	{
		___m_HorizontalAccuracy_4 = value;
	}

	inline static int32_t get_offset_of_m_VerticalAccuracy_5() { return static_cast<int32_t>(offsetof(LocationInfo_t7FC872AE105FF29421AFC8BBEE071F6C36E44769, ___m_VerticalAccuracy_5)); }
	inline float get_m_VerticalAccuracy_5() const { return ___m_VerticalAccuracy_5; }
	inline float* get_address_of_m_VerticalAccuracy_5() { return &___m_VerticalAccuracy_5; }
	inline void set_m_VerticalAccuracy_5(float value)
	{
		___m_VerticalAccuracy_5 = value;
	}
};


// UnityEngine.Rect
struct Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
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
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// dreamloLeaderBoard/Score
struct Score_t446577E2BC06794D97BE081C982A0D1F51F12D38 
{
public:
	// System.String dreamloLeaderBoard/Score::playerName
	String_t* ___playerName_0;
	// System.Int32 dreamloLeaderBoard/Score::score
	int32_t ___score_1;
	// System.Int32 dreamloLeaderBoard/Score::seconds
	int32_t ___seconds_2;
	// System.String dreamloLeaderBoard/Score::shortText
	String_t* ___shortText_3;
	// System.String dreamloLeaderBoard/Score::dateString
	String_t* ___dateString_4;

public:
	inline static int32_t get_offset_of_playerName_0() { return static_cast<int32_t>(offsetof(Score_t446577E2BC06794D97BE081C982A0D1F51F12D38, ___playerName_0)); }
	inline String_t* get_playerName_0() const { return ___playerName_0; }
	inline String_t** get_address_of_playerName_0() { return &___playerName_0; }
	inline void set_playerName_0(String_t* value)
	{
		___playerName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerName_0), (void*)value);
	}

	inline static int32_t get_offset_of_score_1() { return static_cast<int32_t>(offsetof(Score_t446577E2BC06794D97BE081C982A0D1F51F12D38, ___score_1)); }
	inline int32_t get_score_1() const { return ___score_1; }
	inline int32_t* get_address_of_score_1() { return &___score_1; }
	inline void set_score_1(int32_t value)
	{
		___score_1 = value;
	}

	inline static int32_t get_offset_of_seconds_2() { return static_cast<int32_t>(offsetof(Score_t446577E2BC06794D97BE081C982A0D1F51F12D38, ___seconds_2)); }
	inline int32_t get_seconds_2() const { return ___seconds_2; }
	inline int32_t* get_address_of_seconds_2() { return &___seconds_2; }
	inline void set_seconds_2(int32_t value)
	{
		___seconds_2 = value;
	}

	inline static int32_t get_offset_of_shortText_3() { return static_cast<int32_t>(offsetof(Score_t446577E2BC06794D97BE081C982A0D1F51F12D38, ___shortText_3)); }
	inline String_t* get_shortText_3() const { return ___shortText_3; }
	inline String_t** get_address_of_shortText_3() { return &___shortText_3; }
	inline void set_shortText_3(String_t* value)
	{
		___shortText_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shortText_3), (void*)value);
	}

	inline static int32_t get_offset_of_dateString_4() { return static_cast<int32_t>(offsetof(Score_t446577E2BC06794D97BE081C982A0D1F51F12D38, ___dateString_4)); }
	inline String_t* get_dateString_4() const { return ___dateString_4; }
	inline String_t** get_address_of_dateString_4() { return &___dateString_4; }
	inline void set_dateString_4(String_t* value)
	{
		___dateString_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateString_4), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of dreamloLeaderBoard/Score
struct Score_t446577E2BC06794D97BE081C982A0D1F51F12D38_marshaled_pinvoke
{
	char* ___playerName_0;
	int32_t ___score_1;
	int32_t ___seconds_2;
	char* ___shortText_3;
	char* ___dateString_4;
};
// Native definition for COM marshalling of dreamloLeaderBoard/Score
struct Score_t446577E2BC06794D97BE081C982A0D1F51F12D38_marshaled_com
{
	Il2CppChar* ___playerName_0;
	int32_t ___score_1;
	int32_t ___seconds_2;
	Il2CppChar* ___shortText_3;
	Il2CppChar* ___dateString_4;
};

// System.Collections.Generic.List`1/Enumerator<dreamloLeaderBoard/Score>
struct Enumerator_t2E3456D25032B4E449696F1A7AF76F0B6EAE54FB 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tD28329A66242A4236EA37A1950A4660B3F9AF1F7 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Score_t446577E2BC06794D97BE081C982A0D1F51F12D38  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t2E3456D25032B4E449696F1A7AF76F0B6EAE54FB, ___list_0)); }
	inline List_1_tD28329A66242A4236EA37A1950A4660B3F9AF1F7 * get_list_0() const { return ___list_0; }
	inline List_1_tD28329A66242A4236EA37A1950A4660B3F9AF1F7 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tD28329A66242A4236EA37A1950A4660B3F9AF1F7 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t2E3456D25032B4E449696F1A7AF76F0B6EAE54FB, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t2E3456D25032B4E449696F1A7AF76F0B6EAE54FB, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2E3456D25032B4E449696F1A7AF76F0B6EAE54FB, ___current_3)); }
	inline Score_t446577E2BC06794D97BE081C982A0D1F51F12D38  get_current_3() const { return ___current_3; }
	inline Score_t446577E2BC06794D97BE081C982A0D1F51F12D38 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Score_t446577E2BC06794D97BE081C982A0D1F51F12D38  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___playerName_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___shortText_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___dateString_4), (void*)NULL);
		#endif
	}
};


// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_completeCallback_1)); }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_completeCallback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
};


// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
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
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct Exception_t  : public RuntimeObject
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

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
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.LocationServiceStatus
struct LocationServiceStatus_tD2BEAE4A2A42A9D0D4D859AE1C968D278D5ACF2F 
{
public:
	// System.Int32 UnityEngine.LocationServiceStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LocationServiceStatus_tD2BEAE4A2A42A9D0D4D859AE1C968D278D5ACF2F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject * ___m_SourceStyle_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70, ___m_SourceStyle_1)); }
	inline RuntimeObject * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline RuntimeObject ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(RuntimeObject * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SourceStyle_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};

// System.StringSplitOptions
struct StringSplitOptions_tCBE57E9DF0385CEE90AEE9C25D18BD20E30D29D3 
{
public:
	// System.Int32 System.StringSplitOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StringSplitOptions_tCBE57E9DF0385CEE90AEE9C25D18BD20E30D29D3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F  : public UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4
{
public:

public:
};


// UnityEngine.GUILayoutOption/Type
struct Type_t79FB5C82B695061CED8D628CBB6A1E8709705288 
{
public:
	// System.Int32 UnityEngine.GUILayoutOption/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_t79FB5C82B695061CED8D628CBB6A1E8709705288, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/FillMethod
struct FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// LeaderBoardSample/gameState
struct gameState_t2D4489A194FB792429668EE76DE946F1EB070B65 
{
public:
	// System.Int32 LeaderBoardSample/gameState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(gameState_t2D4489A194FB792429668EE76DE946F1EB070B65, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// dreamloPromoCode/State
struct State_t67806ABA630FB739D87FB487A428A15B9277D5DC 
{
public:
	// System.Int32 dreamloPromoCode/State::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(State_t67806ABA630FB739D87FB487A428A15B9277D5DC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GUILayoutOption
struct GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB  : public RuntimeObject
{
public:
	// UnityEngine.GUILayoutOption/Type UnityEngine.GUILayoutOption::type
	int32_t ___type_0;
	// System.Object UnityEngine.GUILayoutOption::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.GUIStyle::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Normal
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Normal_1;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Hover
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Hover_2;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Active
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Active_3;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Focused
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Focused_4;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnNormal
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnNormal_5;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnHover
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnHover_6;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnActive
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnActive_7;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnFocused
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnFocused_8;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Border
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Border_9;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Padding
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Padding_10;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Margin
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Margin_11;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Overflow
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Overflow_12;
	// System.String UnityEngine.GUIStyle::m_Name
	String_t* ___m_Name_13;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Normal_1)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Normal_1() const { return ___m_Normal_1; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Normal_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Normal_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Hover_2() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Hover_2)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Hover_2() const { return ___m_Hover_2; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Hover_2() { return &___m_Hover_2; }
	inline void set_m_Hover_2(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Hover_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Hover_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Active_3() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Active_3)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Active_3() const { return ___m_Active_3; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Active_3() { return &___m_Active_3; }
	inline void set_m_Active_3(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Active_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Active_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Focused_4() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Focused_4)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Focused_4() const { return ___m_Focused_4; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Focused_4() { return &___m_Focused_4; }
	inline void set_m_Focused_4(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Focused_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Focused_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnNormal_5() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnNormal_5)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnNormal_5() const { return ___m_OnNormal_5; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnNormal_5() { return &___m_OnNormal_5; }
	inline void set_m_OnNormal_5(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnNormal_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnNormal_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnHover_6() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnHover_6)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnHover_6() const { return ___m_OnHover_6; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnHover_6() { return &___m_OnHover_6; }
	inline void set_m_OnHover_6(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnHover_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnHover_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnActive_7() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnActive_7)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnActive_7() const { return ___m_OnActive_7; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnActive_7() { return &___m_OnActive_7; }
	inline void set_m_OnActive_7(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnActive_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnActive_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnFocused_8() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnFocused_8)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnFocused_8() const { return ___m_OnFocused_8; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnFocused_8() { return &___m_OnFocused_8; }
	inline void set_m_OnFocused_8(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnFocused_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnFocused_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Border_9() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Border_9)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Border_9() const { return ___m_Border_9; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Border_9() { return &___m_Border_9; }
	inline void set_m_Border_9(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Border_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Border_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_Padding_10() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Padding_10)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Padding_10() const { return ___m_Padding_10; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Padding_10() { return &___m_Padding_10; }
	inline void set_m_Padding_10(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Padding_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Padding_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_Margin_11() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Margin_11)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Margin_11() const { return ___m_Margin_11; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Margin_11() { return &___m_Margin_11; }
	inline void set_m_Margin_11(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Margin_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Margin_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Overflow_12() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Overflow_12)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Overflow_12() const { return ___m_Overflow_12; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Overflow_12() { return &___m_Overflow_12; }
	inline void set_m_Overflow_12(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Overflow_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Overflow_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Name_13() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Name_13)); }
	inline String_t* get_m_Name_13() const { return ___m_Name_13; }
	inline String_t** get_address_of_m_Name_13() { return &___m_Name_13; }
	inline void set_m_Name_13(String_t* value)
	{
		___m_Name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_13), (void*)value);
	}
};

struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_StaticFields
{
public:
	// System.Boolean UnityEngine.GUIStyle::showKeyboardFocus
	bool ___showKeyboardFocus_14;
	// UnityEngine.GUIStyle UnityEngine.GUIStyle::s_None
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___s_None_15;

public:
	inline static int32_t get_offset_of_showKeyboardFocus_14() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_StaticFields, ___showKeyboardFocus_14)); }
	inline bool get_showKeyboardFocus_14() const { return ___showKeyboardFocus_14; }
	inline bool* get_address_of_showKeyboardFocus_14() { return &___showKeyboardFocus_14; }
	inline void set_showKeyboardFocus_14(bool value)
	{
		___showKeyboardFocus_14 = value;
	}

	inline static int32_t get_offset_of_s_None_15() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_StaticFields, ___s_None_15)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_s_None_15() const { return ___s_None_15; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_s_None_15() { return &___s_None_15; }
	inline void set_s_None_15(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___s_None_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_None_15), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Normal_1;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Hover_2;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Active_3;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Focused_4;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnNormal_5;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnHover_6;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnActive_7;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnFocused_8;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Border_9;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Padding_10;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Margin_11;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Overflow_12;
	char* ___m_Name_13;
};
// Native definition for COM marshalling of UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Normal_1;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Hover_2;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Active_3;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Focused_4;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnNormal_5;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnHover_6;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnActive_7;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnFocused_8;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Border_9;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Padding_10;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Margin_11;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Overflow_12;
	Il2CppChar* ___m_Name_13;
};

// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
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

// UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_DownloadHandler_1() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_DownloadHandler_1)); }
	inline DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * get_m_DownloadHandler_1() const { return ___m_DownloadHandler_1; }
	inline DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB ** get_address_of_m_DownloadHandler_1() { return &___m_DownloadHandler_1; }
	inline void set_m_DownloadHandler_1(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * value)
	{
		___m_DownloadHandler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DownloadHandler_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_UploadHandler_2() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_UploadHandler_2)); }
	inline UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * get_m_UploadHandler_2() const { return ___m_UploadHandler_2; }
	inline UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA ** get_address_of_m_UploadHandler_2() { return &___m_UploadHandler_2; }
	inline void set_m_UploadHandler_2(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * value)
	{
		___m_UploadHandler_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UploadHandler_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CertificateHandler_3() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_CertificateHandler_3)); }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * get_m_CertificateHandler_3() const { return ___m_CertificateHandler_3; }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E ** get_address_of_m_CertificateHandler_3() { return &___m_CertificateHandler_3; }
	inline void set_m_CertificateHandler_3(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * value)
	{
		___m_CertificateHandler_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CertificateHandler_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Uri_4() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_Uri_4)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get_m_Uri_4() const { return ___m_Uri_4; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of_m_Uri_4() { return &___m_Uri_4; }
	inline void set_m_Uri_4(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		___m_Uri_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Uri_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5)); }
	inline bool get_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() const { return ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return &___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline void set_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5(bool value)
	{
		___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6)); }
	inline bool get_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() const { return ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return &___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline void set_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6(bool value)
	{
		___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7)); }
	inline bool get_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() const { return ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return &___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline void set_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7(bool value)
	{
		___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com* ___m_CertificateHandler_3;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396  : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86
{
public:
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___U3CwebRequestU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CwebRequestU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396, ___U3CwebRequestU3Ek__BackingField_2)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_U3CwebRequestU3Ek__BackingField_2() const { return ___U3CwebRequestU3Ek__BackingField_2; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_U3CwebRequestU3Ek__BackingField_2() { return &___U3CwebRequestU3Ek__BackingField_2; }
	inline void set_U3CwebRequestU3Ek__BackingField_2(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___U3CwebRequestU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwebRequestU3Ek__BackingField_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_pinvoke : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke
{
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_com : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com
{
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};

// System.Comparison`1<dreamloLeaderBoard/Score>
struct Comparison_1_t828031481DDDCDFECD647B5D5327482576945BDB  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.GUISkin
struct GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// UnityEngine.Font UnityEngine.GUISkin::m_Font
	Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * ___m_Font_4;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_box
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_box_5;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_button
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_button_6;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_toggle
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_toggle_7;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_label
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_label_8;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textField
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_textField_9;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textArea
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_textArea_10;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_window
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_window_11;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSlider
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalSlider_12;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSliderThumb
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalSliderThumb_13;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSliderThumbExtent
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalSliderThumbExtent_14;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSlider
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalSlider_15;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSliderThumb
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalSliderThumb_16;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSliderThumbExtent
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalSliderThumbExtent_17;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_SliderMixed
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_SliderMixed_18;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbar
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalScrollbar_19;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarThumb
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalScrollbarThumb_20;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarLeftButton
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalScrollbarLeftButton_21;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarRightButton
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalScrollbarRightButton_22;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbar
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalScrollbar_23;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarThumb
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalScrollbarThumb_24;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarUpButton
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalScrollbarUpButton_25;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarDownButton
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalScrollbarDownButton_26;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_ScrollView
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_ScrollView_27;
	// UnityEngine.GUIStyle[] UnityEngine.GUISkin::m_CustomStyles
	GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70* ___m_CustomStyles_28;
	// UnityEngine.GUISettings UnityEngine.GUISkin::m_Settings
	GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0 * ___m_Settings_29;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle> UnityEngine.GUISkin::m_Styles
	Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 * ___m_Styles_31;

public:
	inline static int32_t get_offset_of_m_Font_4() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_Font_4)); }
	inline Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * get_m_Font_4() const { return ___m_Font_4; }
	inline Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 ** get_address_of_m_Font_4() { return &___m_Font_4; }
	inline void set_m_Font_4(Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * value)
	{
		___m_Font_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Font_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_box_5() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_box_5)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_box_5() const { return ___m_box_5; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_box_5() { return &___m_box_5; }
	inline void set_m_box_5(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_box_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_box_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_button_6() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_button_6)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_button_6() const { return ___m_button_6; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_button_6() { return &___m_button_6; }
	inline void set_m_button_6(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_button_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_button_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_toggle_7() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_toggle_7)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_toggle_7() const { return ___m_toggle_7; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_toggle_7() { return &___m_toggle_7; }
	inline void set_m_toggle_7(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_toggle_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_toggle_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_label_8() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_label_8)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_label_8() const { return ___m_label_8; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_label_8() { return &___m_label_8; }
	inline void set_m_label_8(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_label_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_label_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_textField_9() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_textField_9)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_textField_9() const { return ___m_textField_9; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_textField_9() { return &___m_textField_9; }
	inline void set_m_textField_9(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_textField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textField_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_textArea_10() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_textArea_10)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_textArea_10() const { return ___m_textArea_10; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_textArea_10() { return &___m_textArea_10; }
	inline void set_m_textArea_10(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_textArea_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textArea_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_window_11() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_window_11)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_window_11() const { return ___m_window_11; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_window_11() { return &___m_window_11; }
	inline void set_m_window_11(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_window_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_window_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalSlider_12() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalSlider_12)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalSlider_12() const { return ___m_horizontalSlider_12; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalSlider_12() { return &___m_horizontalSlider_12; }
	inline void set_m_horizontalSlider_12(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalSlider_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalSlider_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalSliderThumb_13() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalSliderThumb_13)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalSliderThumb_13() const { return ___m_horizontalSliderThumb_13; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalSliderThumb_13() { return &___m_horizontalSliderThumb_13; }
	inline void set_m_horizontalSliderThumb_13(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalSliderThumb_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalSliderThumb_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalSliderThumbExtent_14() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalSliderThumbExtent_14)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalSliderThumbExtent_14() const { return ___m_horizontalSliderThumbExtent_14; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalSliderThumbExtent_14() { return &___m_horizontalSliderThumbExtent_14; }
	inline void set_m_horizontalSliderThumbExtent_14(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalSliderThumbExtent_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalSliderThumbExtent_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalSlider_15() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalSlider_15)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalSlider_15() const { return ___m_verticalSlider_15; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalSlider_15() { return &___m_verticalSlider_15; }
	inline void set_m_verticalSlider_15(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalSlider_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalSlider_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalSliderThumb_16() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalSliderThumb_16)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalSliderThumb_16() const { return ___m_verticalSliderThumb_16; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalSliderThumb_16() { return &___m_verticalSliderThumb_16; }
	inline void set_m_verticalSliderThumb_16(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalSliderThumb_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalSliderThumb_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalSliderThumbExtent_17() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalSliderThumbExtent_17)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalSliderThumbExtent_17() const { return ___m_verticalSliderThumbExtent_17; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalSliderThumbExtent_17() { return &___m_verticalSliderThumbExtent_17; }
	inline void set_m_verticalSliderThumbExtent_17(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalSliderThumbExtent_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalSliderThumbExtent_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_SliderMixed_18() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_SliderMixed_18)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_SliderMixed_18() const { return ___m_SliderMixed_18; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_SliderMixed_18() { return &___m_SliderMixed_18; }
	inline void set_m_SliderMixed_18(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_SliderMixed_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SliderMixed_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbar_19() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalScrollbar_19)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalScrollbar_19() const { return ___m_horizontalScrollbar_19; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalScrollbar_19() { return &___m_horizontalScrollbar_19; }
	inline void set_m_horizontalScrollbar_19(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalScrollbar_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalScrollbar_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbarThumb_20() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalScrollbarThumb_20)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalScrollbarThumb_20() const { return ___m_horizontalScrollbarThumb_20; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalScrollbarThumb_20() { return &___m_horizontalScrollbarThumb_20; }
	inline void set_m_horizontalScrollbarThumb_20(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalScrollbarThumb_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalScrollbarThumb_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbarLeftButton_21() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalScrollbarLeftButton_21)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalScrollbarLeftButton_21() const { return ___m_horizontalScrollbarLeftButton_21; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalScrollbarLeftButton_21() { return &___m_horizontalScrollbarLeftButton_21; }
	inline void set_m_horizontalScrollbarLeftButton_21(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalScrollbarLeftButton_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalScrollbarLeftButton_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbarRightButton_22() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalScrollbarRightButton_22)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalScrollbarRightButton_22() const { return ___m_horizontalScrollbarRightButton_22; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalScrollbarRightButton_22() { return &___m_horizontalScrollbarRightButton_22; }
	inline void set_m_horizontalScrollbarRightButton_22(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalScrollbarRightButton_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalScrollbarRightButton_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbar_23() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalScrollbar_23)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalScrollbar_23() const { return ___m_verticalScrollbar_23; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalScrollbar_23() { return &___m_verticalScrollbar_23; }
	inline void set_m_verticalScrollbar_23(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalScrollbar_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalScrollbar_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbarThumb_24() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalScrollbarThumb_24)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalScrollbarThumb_24() const { return ___m_verticalScrollbarThumb_24; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalScrollbarThumb_24() { return &___m_verticalScrollbarThumb_24; }
	inline void set_m_verticalScrollbarThumb_24(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalScrollbarThumb_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalScrollbarThumb_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbarUpButton_25() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalScrollbarUpButton_25)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalScrollbarUpButton_25() const { return ___m_verticalScrollbarUpButton_25; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalScrollbarUpButton_25() { return &___m_verticalScrollbarUpButton_25; }
	inline void set_m_verticalScrollbarUpButton_25(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalScrollbarUpButton_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalScrollbarUpButton_25), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbarDownButton_26() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalScrollbarDownButton_26)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalScrollbarDownButton_26() const { return ___m_verticalScrollbarDownButton_26; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalScrollbarDownButton_26() { return &___m_verticalScrollbarDownButton_26; }
	inline void set_m_verticalScrollbarDownButton_26(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalScrollbarDownButton_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalScrollbarDownButton_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_ScrollView_27() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_ScrollView_27)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_ScrollView_27() const { return ___m_ScrollView_27; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_ScrollView_27() { return &___m_ScrollView_27; }
	inline void set_m_ScrollView_27(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_ScrollView_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ScrollView_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_CustomStyles_28() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_CustomStyles_28)); }
	inline GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70* get_m_CustomStyles_28() const { return ___m_CustomStyles_28; }
	inline GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70** get_address_of_m_CustomStyles_28() { return &___m_CustomStyles_28; }
	inline void set_m_CustomStyles_28(GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70* value)
	{
		___m_CustomStyles_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CustomStyles_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Settings_29() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_Settings_29)); }
	inline GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0 * get_m_Settings_29() const { return ___m_Settings_29; }
	inline GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0 ** get_address_of_m_Settings_29() { return &___m_Settings_29; }
	inline void set_m_Settings_29(GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0 * value)
	{
		___m_Settings_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Settings_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_Styles_31() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_Styles_31)); }
	inline Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 * get_m_Styles_31() const { return ___m_Styles_31; }
	inline Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 ** get_address_of_m_Styles_31() { return &___m_Styles_31; }
	inline void set_m_Styles_31(Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 * value)
	{
		___m_Styles_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Styles_31), (void*)value);
	}
};

struct GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_StaticFields
{
public:
	// UnityEngine.GUIStyle UnityEngine.GUISkin::ms_Error
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___ms_Error_30;
	// UnityEngine.GUISkin/SkinChangedDelegate UnityEngine.GUISkin::m_SkinChanged
	SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E * ___m_SkinChanged_32;
	// UnityEngine.GUISkin UnityEngine.GUISkin::current
	GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * ___current_33;

public:
	inline static int32_t get_offset_of_ms_Error_30() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_StaticFields, ___ms_Error_30)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_ms_Error_30() const { return ___ms_Error_30; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_ms_Error_30() { return &___ms_Error_30; }
	inline void set_ms_Error_30(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___ms_Error_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ms_Error_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_SkinChanged_32() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_StaticFields, ___m_SkinChanged_32)); }
	inline SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E * get_m_SkinChanged_32() const { return ___m_SkinChanged_32; }
	inline SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E ** get_address_of_m_SkinChanged_32() { return &___m_SkinChanged_32; }
	inline void set_m_SkinChanged_32(SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E * value)
	{
		___m_SkinChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SkinChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_current_33() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_StaticFields, ___current_33)); }
	inline GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * get_current_33() const { return ___current_33; }
	inline GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 ** get_address_of_current_33() { return &___current_33; }
	inline void set_current_33(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * value)
	{
		___current_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_33), (void*)value);
	}
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// AddButtons
struct AddButtons_t1FDAD33E463CAFE3555F38286008545EEB7D7D58  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform AddButtons::memoryField
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___memoryField_4;
	// UnityEngine.GameObject AddButtons::btn
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___btn_5;

public:
	inline static int32_t get_offset_of_memoryField_4() { return static_cast<int32_t>(offsetof(AddButtons_t1FDAD33E463CAFE3555F38286008545EEB7D7D58, ___memoryField_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_memoryField_4() const { return ___memoryField_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_memoryField_4() { return &___memoryField_4; }
	inline void set_memoryField_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___memoryField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___memoryField_4), (void*)value);
	}

	inline static int32_t get_offset_of_btn_5() { return static_cast<int32_t>(offsetof(AddButtons_t1FDAD33E463CAFE3555F38286008545EEB7D7D58, ___btn_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_btn_5() const { return ___btn_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_btn_5() { return &___btn_5; }
	inline void set_btn_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___btn_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___btn_5), (void*)value);
	}
};


// GameController
struct GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Sprite GameController::bgImage
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___bgImage_4;
	// UnityEngine.Sprite[] GameController::cards
	SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* ___cards_5;
	// System.Collections.Generic.List`1<UnityEngine.Sprite> GameController::gameCards
	List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * ___gameCards_6;
	// System.Collections.Generic.List`1<UnityEngine.UI.Button> GameController::btns
	List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * ___btns_7;
	// UnityEngine.GameObject GameController::recordPanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___recordPanel_9;
	// UnityEngine.UI.Text GameController::recordText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___recordText_10;
	// UnityEngine.UI.Text GameController::scoreText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___scoreText_11;
	// System.Boolean GameController::firstGuess
	bool ___firstGuess_13;
	// System.Boolean GameController::secondGuess
	bool ___secondGuess_14;
	// System.Int32 GameController::recordGuess
	int32_t ___recordGuess_15;
	// System.Int32 GameController::countGuess
	int32_t ___countGuess_16;
	// System.Int32 GameController::countCorrectGuesses
	int32_t ___countCorrectGuesses_17;
	// System.Int32 GameController::gameGuesses
	int32_t ___gameGuesses_18;
	// System.Int32 GameController::firstGuessIndex
	int32_t ___firstGuessIndex_19;
	// System.Int32 GameController::secondGuessIndex
	int32_t ___secondGuessIndex_20;
	// System.String GameController::firstGuessCard
	String_t* ___firstGuessCard_21;
	// System.String GameController::secondGuessCard
	String_t* ___secondGuessCard_22;

public:
	inline static int32_t get_offset_of_bgImage_4() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___bgImage_4)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_bgImage_4() const { return ___bgImage_4; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_bgImage_4() { return &___bgImage_4; }
	inline void set_bgImage_4(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___bgImage_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bgImage_4), (void*)value);
	}

	inline static int32_t get_offset_of_cards_5() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___cards_5)); }
	inline SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* get_cards_5() const { return ___cards_5; }
	inline SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77** get_address_of_cards_5() { return &___cards_5; }
	inline void set_cards_5(SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* value)
	{
		___cards_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cards_5), (void*)value);
	}

	inline static int32_t get_offset_of_gameCards_6() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___gameCards_6)); }
	inline List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * get_gameCards_6() const { return ___gameCards_6; }
	inline List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 ** get_address_of_gameCards_6() { return &___gameCards_6; }
	inline void set_gameCards_6(List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * value)
	{
		___gameCards_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameCards_6), (void*)value);
	}

	inline static int32_t get_offset_of_btns_7() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___btns_7)); }
	inline List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * get_btns_7() const { return ___btns_7; }
	inline List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E ** get_address_of_btns_7() { return &___btns_7; }
	inline void set_btns_7(List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * value)
	{
		___btns_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___btns_7), (void*)value);
	}

	inline static int32_t get_offset_of_recordPanel_9() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___recordPanel_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_recordPanel_9() const { return ___recordPanel_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_recordPanel_9() { return &___recordPanel_9; }
	inline void set_recordPanel_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___recordPanel_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___recordPanel_9), (void*)value);
	}

	inline static int32_t get_offset_of_recordText_10() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___recordText_10)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_recordText_10() const { return ___recordText_10; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_recordText_10() { return &___recordText_10; }
	inline void set_recordText_10(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___recordText_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___recordText_10), (void*)value);
	}

	inline static int32_t get_offset_of_scoreText_11() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___scoreText_11)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_scoreText_11() const { return ___scoreText_11; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_scoreText_11() { return &___scoreText_11; }
	inline void set_scoreText_11(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___scoreText_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scoreText_11), (void*)value);
	}

	inline static int32_t get_offset_of_firstGuess_13() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___firstGuess_13)); }
	inline bool get_firstGuess_13() const { return ___firstGuess_13; }
	inline bool* get_address_of_firstGuess_13() { return &___firstGuess_13; }
	inline void set_firstGuess_13(bool value)
	{
		___firstGuess_13 = value;
	}

	inline static int32_t get_offset_of_secondGuess_14() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___secondGuess_14)); }
	inline bool get_secondGuess_14() const { return ___secondGuess_14; }
	inline bool* get_address_of_secondGuess_14() { return &___secondGuess_14; }
	inline void set_secondGuess_14(bool value)
	{
		___secondGuess_14 = value;
	}

	inline static int32_t get_offset_of_recordGuess_15() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___recordGuess_15)); }
	inline int32_t get_recordGuess_15() const { return ___recordGuess_15; }
	inline int32_t* get_address_of_recordGuess_15() { return &___recordGuess_15; }
	inline void set_recordGuess_15(int32_t value)
	{
		___recordGuess_15 = value;
	}

	inline static int32_t get_offset_of_countGuess_16() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___countGuess_16)); }
	inline int32_t get_countGuess_16() const { return ___countGuess_16; }
	inline int32_t* get_address_of_countGuess_16() { return &___countGuess_16; }
	inline void set_countGuess_16(int32_t value)
	{
		___countGuess_16 = value;
	}

	inline static int32_t get_offset_of_countCorrectGuesses_17() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___countCorrectGuesses_17)); }
	inline int32_t get_countCorrectGuesses_17() const { return ___countCorrectGuesses_17; }
	inline int32_t* get_address_of_countCorrectGuesses_17() { return &___countCorrectGuesses_17; }
	inline void set_countCorrectGuesses_17(int32_t value)
	{
		___countCorrectGuesses_17 = value;
	}

	inline static int32_t get_offset_of_gameGuesses_18() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___gameGuesses_18)); }
	inline int32_t get_gameGuesses_18() const { return ___gameGuesses_18; }
	inline int32_t* get_address_of_gameGuesses_18() { return &___gameGuesses_18; }
	inline void set_gameGuesses_18(int32_t value)
	{
		___gameGuesses_18 = value;
	}

	inline static int32_t get_offset_of_firstGuessIndex_19() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___firstGuessIndex_19)); }
	inline int32_t get_firstGuessIndex_19() const { return ___firstGuessIndex_19; }
	inline int32_t* get_address_of_firstGuessIndex_19() { return &___firstGuessIndex_19; }
	inline void set_firstGuessIndex_19(int32_t value)
	{
		___firstGuessIndex_19 = value;
	}

	inline static int32_t get_offset_of_secondGuessIndex_20() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___secondGuessIndex_20)); }
	inline int32_t get_secondGuessIndex_20() const { return ___secondGuessIndex_20; }
	inline int32_t* get_address_of_secondGuessIndex_20() { return &___secondGuessIndex_20; }
	inline void set_secondGuessIndex_20(int32_t value)
	{
		___secondGuessIndex_20 = value;
	}

	inline static int32_t get_offset_of_firstGuessCard_21() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___firstGuessCard_21)); }
	inline String_t* get_firstGuessCard_21() const { return ___firstGuessCard_21; }
	inline String_t** get_address_of_firstGuessCard_21() { return &___firstGuessCard_21; }
	inline void set_firstGuessCard_21(String_t* value)
	{
		___firstGuessCard_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstGuessCard_21), (void*)value);
	}

	inline static int32_t get_offset_of_secondGuessCard_22() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___secondGuessCard_22)); }
	inline String_t* get_secondGuessCard_22() const { return ___secondGuessCard_22; }
	inline String_t** get_address_of_secondGuessCard_22() { return &___secondGuessCard_22; }
	inline void set_secondGuessCard_22(String_t* value)
	{
		___secondGuessCard_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___secondGuessCard_22), (void*)value);
	}
};

struct GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274_StaticFields
{
public:
	// GameController GameController::instance
	GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * ___instance_12;

public:
	inline static int32_t get_offset_of_instance_12() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274_StaticFields, ___instance_12)); }
	inline GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * get_instance_12() const { return ___instance_12; }
	inline GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 ** get_address_of_instance_12() { return &___instance_12; }
	inline void set_instance_12(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * value)
	{
		___instance_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_12), (void*)value);
	}
};


// GetGPS
struct GetGPS_tD132A0E0C3FB5649A8D89F4CC2F4348967F1F5C0  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String GetGPS::gps_info
	String_t* ___gps_info_4;
	// System.Int32 GetGPS::flash_num
	int32_t ___flash_num_5;

public:
	inline static int32_t get_offset_of_gps_info_4() { return static_cast<int32_t>(offsetof(GetGPS_tD132A0E0C3FB5649A8D89F4CC2F4348967F1F5C0, ___gps_info_4)); }
	inline String_t* get_gps_info_4() const { return ___gps_info_4; }
	inline String_t** get_address_of_gps_info_4() { return &___gps_info_4; }
	inline void set_gps_info_4(String_t* value)
	{
		___gps_info_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gps_info_4), (void*)value);
	}

	inline static int32_t get_offset_of_flash_num_5() { return static_cast<int32_t>(offsetof(GetGPS_tD132A0E0C3FB5649A8D89F4CC2F4348967F1F5C0, ___flash_num_5)); }
	inline int32_t get_flash_num_5() const { return ___flash_num_5; }
	inline int32_t* get_address_of_flash_num_5() { return &___flash_num_5; }
	inline void set_flash_num_5(int32_t value)
	{
		___flash_num_5 = value;
	}
};


// LeaderBoardManager
struct LeaderBoardManager_t87404B730BDD0E9A35EF39995ADE28BBE797C023  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// dreamloLeaderBoard LeaderBoardManager::dl
	dreamloLeaderBoard_t65A12FD2CBA7E92B2703B98E99DCAEB25C7AEBFD * ___dl_4;
	// UnityEngine.UI.Text LeaderBoardManager::GPS
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___GPS_6;
	// UnityEngine.UI.Text LeaderBoardManager::recordText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___recordText_7;
	// UnityEngine.GameObject LeaderBoardManager::scoreCellPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___scoreCellPrefab_8;
	// System.Int32 LeaderBoardManager::maxCounts
	int32_t ___maxCounts_9;
	// UnityEngine.UI.Text LeaderBoardManager::inputName
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___inputName_10;
	// UnityEngine.GameObject LeaderBoardManager::uploadBtn
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___uploadBtn_11;
	// System.Boolean LeaderBoardManager::onSpot
	bool ___onSpot_12;
	// System.Boolean LeaderBoardManager::refreshing
	bool ___refreshing_13;
	// System.Single LeaderBoardManager::latitude
	float ___latitude_14;
	// System.Single LeaderBoardManager::longitude
	float ___longitude_15;
	// System.Int32 LeaderBoardManager::recordScore
	int32_t ___recordScore_16;
	// System.String LeaderBoardManager::playerName
	String_t* ___playerName_17;
	// System.Int32 LeaderBoardManager::count
	int32_t ___count_18;
	// System.Int32 LeaderBoardManager::opposite
	int32_t ___opposite_19;
	// System.Single LeaderBoardManager::myN
	float ___myN_20;
	// System.Single LeaderBoardManager::myE
	float ___myE_21;
	// System.Collections.Generic.List`1<dreamloLeaderBoard/Score> LeaderBoardManager::scoreList
	List_1_tD28329A66242A4236EA37A1950A4660B3F9AF1F7 * ___scoreList_22;

public:
	inline static int32_t get_offset_of_dl_4() { return static_cast<int32_t>(offsetof(LeaderBoardManager_t87404B730BDD0E9A35EF39995ADE28BBE797C023, ___dl_4)); }
	inline dreamloLeaderBoard_t65A12FD2CBA7E92B2703B98E99DCAEB25C7AEBFD * get_dl_4() const { return ___dl_4; }
	inline dreamloLeaderBoard_t65A12FD2CBA7E92B2703B98E99DCAEB25C7AEBFD ** get_address_of_dl_4() { return &___dl_4; }
	inline void set_dl_4(dreamloLeaderBoard_t65A12FD2CBA7E92B2703B98E99DCAEB25C7AEBFD * value)
	{
		___dl_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dl_4), (void*)value);
	}

	inline static int32_t get_offset_of_GPS_6() { return static_cast<int32_t>(offsetof(LeaderBoardManager_t87404B730BDD0E9A35EF39995ADE28BBE797C023, ___GPS_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_GPS_6() const { return ___GPS_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_GPS_6() { return &___GPS_6; }
	inline void set_GPS_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___GPS_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GPS_6), (void*)value);
	}

	inline static int32_t get_offset_of_recordText_7() { return static_cast<int32_t>(offsetof(LeaderBoardManager_t87404B730BDD0E9A35EF39995ADE28BBE797C023, ___recordText_7)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_recordText_7() const { return ___recordText_7; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_recordText_7() { return &___recordText_7; }
	inline void set_recordText_7(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___recordText_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___recordText_7), (void*)value);
	}

	inline static int32_t get_offset_of_scoreCellPrefab_8() { return static_cast<int32_t>(offsetof(LeaderBoardManager_t87404B730BDD0E9A35EF39995ADE28BBE797C023, ___scoreCellPrefab_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_scoreCellPrefab_8() const { return ___scoreCellPrefab_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_scoreCellPrefab_8() { return &___scoreCellPrefab_8; }
	inline void set_scoreCellPrefab_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___scoreCellPrefab_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scoreCellPrefab_8), (void*)value);
	}

	inline static int32_t get_offset_of_maxCounts_9() { return static_cast<int32_t>(offsetof(LeaderBoardManager_t87404B730BDD0E9A35EF39995ADE28BBE797C023, ___maxCounts_9)); }
	inline int32_t get_maxCounts_9() const { return ___maxCounts_9; }
	inline int32_t* get_address_of_maxCounts_9() { return &___maxCounts_9; }
	inline void set_maxCounts_9(int32_t value)
	{
		___maxCounts_9 = value;
	}

	inline static int32_t get_offset_of_inputName_10() { return static_cast<int32_t>(offsetof(LeaderBoardManager_t87404B730BDD0E9A35EF39995ADE28BBE797C023, ___inputName_10)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_inputName_10() const { return ___inputName_10; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_inputName_10() { return &___inputName_10; }
	inline void set_inputName_10(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___inputName_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputName_10), (void*)value);
	}

	inline static int32_t get_offset_of_uploadBtn_11() { return static_cast<int32_t>(offsetof(LeaderBoardManager_t87404B730BDD0E9A35EF39995ADE28BBE797C023, ___uploadBtn_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_uploadBtn_11() const { return ___uploadBtn_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_uploadBtn_11() { return &___uploadBtn_11; }
	inline void set_uploadBtn_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___uploadBtn_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uploadBtn_11), (void*)value);
	}

	inline static int32_t get_offset_of_onSpot_12() { return static_cast<int32_t>(offsetof(LeaderBoardManager_t87404B730BDD0E9A35EF39995ADE28BBE797C023, ___onSpot_12)); }
	inline bool get_onSpot_12() const { return ___onSpot_12; }
	inline bool* get_address_of_onSpot_12() { return &___onSpot_12; }
	inline void set_onSpot_12(bool value)
	{
		___onSpot_12 = value;
	}

	inline static int32_t get_offset_of_refreshing_13() { return static_cast<int32_t>(offsetof(LeaderBoardManager_t87404B730BDD0E9A35EF39995ADE28BBE797C023, ___refreshing_13)); }
	inline bool get_refreshing_13() const { return ___refreshing_13; }
	inline bool* get_address_of_refreshing_13() { return &___refreshing_13; }
	inline void set_refreshing_13(bool value)
	{
		___refreshing_13 = value;
	}

	inline static int32_t get_offset_of_latitude_14() { return static_cast<int32_t>(offsetof(LeaderBoardManager_t87404B730BDD0E9A35EF39995ADE28BBE797C023, ___latitude_14)); }
	inline float get_latitude_14() const { return ___latitude_14; }
	inline float* get_address_of_latitude_14() { return &___latitude_14; }
	inline void set_latitude_14(float value)
	{
		___latitude_14 = value;
	}

	inline static int32_t get_offset_of_longitude_15() { return static_cast<int32_t>(offsetof(LeaderBoardManager_t87404B730BDD0E9A35EF39995ADE28BBE797C023, ___longitude_15)); }
	inline float get_longitude_15() const { return ___longitude_15; }
	inline float* get_address_of_longitude_15() { return &___longitude_15; }
	inline void set_longitude_15(float value)
	{
		___longitude_15 = value;
	}

	inline static int32_t get_offset_of_recordScore_16() { return static_cast<int32_t>(offsetof(LeaderBoardManager_t87404B730BDD0E9A35EF39995ADE28BBE797C023, ___recordScore_16)); }
	inline int32_t get_recordScore_16() const { return ___recordScore_16; }
	inline int32_t* get_address_of_recordScore_16() { return &___recordScore_16; }
	inline void set_recordScore_16(int32_t value)
	{
		___recordScore_16 = value;
	}

	inline static int32_t get_offset_of_playerName_17() { return static_cast<int32_t>(offsetof(LeaderBoardManager_t87404B730BDD0E9A35EF39995ADE28BBE797C023, ___playerName_17)); }
	inline String_t* get_playerName_17() const { return ___playerName_17; }
	inline String_t** get_address_of_playerName_17() { return &___playerName_17; }
	inline void set_playerName_17(String_t* value)
	{
		___playerName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerName_17), (void*)value);
	}

	inline static int32_t get_offset_of_count_18() { return static_cast<int32_t>(offsetof(LeaderBoardManager_t87404B730BDD0E9A35EF39995ADE28BBE797C023, ___count_18)); }
	inline int32_t get_count_18() const { return ___count_18; }
	inline int32_t* get_address_of_count_18() { return &___count_18; }
	inline void set_count_18(int32_t value)
	{
		___count_18 = value;
	}

	inline static int32_t get_offset_of_opposite_19() { return static_cast<int32_t>(offsetof(LeaderBoardManager_t87404B730BDD0E9A35EF39995ADE28BBE797C023, ___opposite_19)); }
	inline int32_t get_opposite_19() const { return ___opposite_19; }
	inline int32_t* get_address_of_opposite_19() { return &___opposite_19; }
	inline void set_opposite_19(int32_t value)
	{
		___opposite_19 = value;
	}

	inline static int32_t get_offset_of_myN_20() { return static_cast<int32_t>(offsetof(LeaderBoardManager_t87404B730BDD0E9A35EF39995ADE28BBE797C023, ___myN_20)); }
	inline float get_myN_20() const { return ___myN_20; }
	inline float* get_address_of_myN_20() { return &___myN_20; }
	inline void set_myN_20(float value)
	{
		___myN_20 = value;
	}

	inline static int32_t get_offset_of_myE_21() { return static_cast<int32_t>(offsetof(LeaderBoardManager_t87404B730BDD0E9A35EF39995ADE28BBE797C023, ___myE_21)); }
	inline float get_myE_21() const { return ___myE_21; }
	inline float* get_address_of_myE_21() { return &___myE_21; }
	inline void set_myE_21(float value)
	{
		___myE_21 = value;
	}

	inline static int32_t get_offset_of_scoreList_22() { return static_cast<int32_t>(offsetof(LeaderBoardManager_t87404B730BDD0E9A35EF39995ADE28BBE797C023, ___scoreList_22)); }
	inline List_1_tD28329A66242A4236EA37A1950A4660B3F9AF1F7 * get_scoreList_22() const { return ___scoreList_22; }
	inline List_1_tD28329A66242A4236EA37A1950A4660B3F9AF1F7 ** get_address_of_scoreList_22() { return &___scoreList_22; }
	inline void set_scoreList_22(List_1_tD28329A66242A4236EA37A1950A4660B3F9AF1F7 * value)
	{
		___scoreList_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scoreList_22), (void*)value);
	}
};


// LeaderBoardSample
struct LeaderBoardSample_t7763EE95F3E0A9BA81E634FEA764FB37CDE18138  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single LeaderBoardSample::startTime
	float ___startTime_4;
	// System.Single LeaderBoardSample::timeLeft
	float ___timeLeft_5;
	// System.Int32 LeaderBoardSample::totalScore
	int32_t ___totalScore_6;
	// System.String LeaderBoardSample::playerName
	String_t* ___playerName_7;
	// System.String LeaderBoardSample::code
	String_t* ___code_8;
	// LeaderBoardSample/gameState LeaderBoardSample::gs
	int32_t ___gs_9;
	// dreamloLeaderBoard LeaderBoardSample::dl
	dreamloLeaderBoard_t65A12FD2CBA7E92B2703B98E99DCAEB25C7AEBFD * ___dl_10;
	// dreamloPromoCode LeaderBoardSample::pc
	dreamloPromoCode_t640CC04DDAA3833B88CD2CF574BE448502BAFF2B * ___pc_11;

public:
	inline static int32_t get_offset_of_startTime_4() { return static_cast<int32_t>(offsetof(LeaderBoardSample_t7763EE95F3E0A9BA81E634FEA764FB37CDE18138, ___startTime_4)); }
	inline float get_startTime_4() const { return ___startTime_4; }
	inline float* get_address_of_startTime_4() { return &___startTime_4; }
	inline void set_startTime_4(float value)
	{
		___startTime_4 = value;
	}

	inline static int32_t get_offset_of_timeLeft_5() { return static_cast<int32_t>(offsetof(LeaderBoardSample_t7763EE95F3E0A9BA81E634FEA764FB37CDE18138, ___timeLeft_5)); }
	inline float get_timeLeft_5() const { return ___timeLeft_5; }
	inline float* get_address_of_timeLeft_5() { return &___timeLeft_5; }
	inline void set_timeLeft_5(float value)
	{
		___timeLeft_5 = value;
	}

	inline static int32_t get_offset_of_totalScore_6() { return static_cast<int32_t>(offsetof(LeaderBoardSample_t7763EE95F3E0A9BA81E634FEA764FB37CDE18138, ___totalScore_6)); }
	inline int32_t get_totalScore_6() const { return ___totalScore_6; }
	inline int32_t* get_address_of_totalScore_6() { return &___totalScore_6; }
	inline void set_totalScore_6(int32_t value)
	{
		___totalScore_6 = value;
	}

	inline static int32_t get_offset_of_playerName_7() { return static_cast<int32_t>(offsetof(LeaderBoardSample_t7763EE95F3E0A9BA81E634FEA764FB37CDE18138, ___playerName_7)); }
	inline String_t* get_playerName_7() const { return ___playerName_7; }
	inline String_t** get_address_of_playerName_7() { return &___playerName_7; }
	inline void set_playerName_7(String_t* value)
	{
		___playerName_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerName_7), (void*)value);
	}

	inline static int32_t get_offset_of_code_8() { return static_cast<int32_t>(offsetof(LeaderBoardSample_t7763EE95F3E0A9BA81E634FEA764FB37CDE18138, ___code_8)); }
	inline String_t* get_code_8() const { return ___code_8; }
	inline String_t** get_address_of_code_8() { return &___code_8; }
	inline void set_code_8(String_t* value)
	{
		___code_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___code_8), (void*)value);
	}

	inline static int32_t get_offset_of_gs_9() { return static_cast<int32_t>(offsetof(LeaderBoardSample_t7763EE95F3E0A9BA81E634FEA764FB37CDE18138, ___gs_9)); }
	inline int32_t get_gs_9() const { return ___gs_9; }
	inline int32_t* get_address_of_gs_9() { return &___gs_9; }
	inline void set_gs_9(int32_t value)
	{
		___gs_9 = value;
	}

	inline static int32_t get_offset_of_dl_10() { return static_cast<int32_t>(offsetof(LeaderBoardSample_t7763EE95F3E0A9BA81E634FEA764FB37CDE18138, ___dl_10)); }
	inline dreamloLeaderBoard_t65A12FD2CBA7E92B2703B98E99DCAEB25C7AEBFD * get_dl_10() const { return ___dl_10; }
	inline dreamloLeaderBoard_t65A12FD2CBA7E92B2703B98E99DCAEB25C7AEBFD ** get_address_of_dl_10() { return &___dl_10; }
	inline void set_dl_10(dreamloLeaderBoard_t65A12FD2CBA7E92B2703B98E99DCAEB25C7AEBFD * value)
	{
		___dl_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dl_10), (void*)value);
	}

	inline static int32_t get_offset_of_pc_11() { return static_cast<int32_t>(offsetof(LeaderBoardSample_t7763EE95F3E0A9BA81E634FEA764FB37CDE18138, ___pc_11)); }
	inline dreamloPromoCode_t640CC04DDAA3833B88CD2CF574BE448502BAFF2B * get_pc_11() const { return ___pc_11; }
	inline dreamloPromoCode_t640CC04DDAA3833B88CD2CF574BE448502BAFF2B ** get_address_of_pc_11() { return &___pc_11; }
	inline void set_pc_11(dreamloPromoCode_t640CC04DDAA3833B88CD2CF574BE448502BAFF2B * value)
	{
		___pc_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pc_11), (void*)value);
	}
};


// LoadScene
struct LoadScene_t633887ABD67B5712F8CCC7C5511422C0E45084D4  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// PanelOpener
struct PanelOpener_tEE5DD262FE9C2B2F682A11A4F07433EC73D83BD5  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject PanelOpener::Panel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Panel_4;

public:
	inline static int32_t get_offset_of_Panel_4() { return static_cast<int32_t>(offsetof(PanelOpener_tEE5DD262FE9C2B2F682A11A4F07433EC73D83BD5, ___Panel_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Panel_4() const { return ___Panel_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Panel_4() { return &___Panel_4; }
	inline void set_Panel_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Panel_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Panel_4), (void*)value);
	}
};


// ScoreCell
struct ScoreCell_t2B4A18682749BC3457B08AAD2BA80F12415FCE54  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text ScoreCell::nameText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___nameText_4;
	// UnityEngine.UI.Text ScoreCell::scoreText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___scoreText_5;
	// System.Int32 ScoreCell::opposite
	int32_t ___opposite_6;

public:
	inline static int32_t get_offset_of_nameText_4() { return static_cast<int32_t>(offsetof(ScoreCell_t2B4A18682749BC3457B08AAD2BA80F12415FCE54, ___nameText_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_nameText_4() const { return ___nameText_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_nameText_4() { return &___nameText_4; }
	inline void set_nameText_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___nameText_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nameText_4), (void*)value);
	}

	inline static int32_t get_offset_of_scoreText_5() { return static_cast<int32_t>(offsetof(ScoreCell_t2B4A18682749BC3457B08AAD2BA80F12415FCE54, ___scoreText_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_scoreText_5() const { return ___scoreText_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_scoreText_5() { return &___scoreText_5; }
	inline void set_scoreText_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___scoreText_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scoreText_5), (void*)value);
	}

	inline static int32_t get_offset_of_opposite_6() { return static_cast<int32_t>(offsetof(ScoreCell_t2B4A18682749BC3457B08AAD2BA80F12415FCE54, ___opposite_6)); }
	inline int32_t get_opposite_6() const { return ___opposite_6; }
	inline int32_t* get_address_of_opposite_6() { return &___opposite_6; }
	inline void set_opposite_6(int32_t value)
	{
		___opposite_6 = value;
	}
};


// Timer
struct Timer_t32ADF3155A88C37628B80D227C821651666DD405  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject Timer::textDisplay
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___textDisplay_4;
	// System.Int32 Timer::secondsLeft
	int32_t ___secondsLeft_5;
	// System.Boolean Timer::takingAway
	bool ___takingAway_6;

public:
	inline static int32_t get_offset_of_textDisplay_4() { return static_cast<int32_t>(offsetof(Timer_t32ADF3155A88C37628B80D227C821651666DD405, ___textDisplay_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_textDisplay_4() const { return ___textDisplay_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_textDisplay_4() { return &___textDisplay_4; }
	inline void set_textDisplay_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___textDisplay_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textDisplay_4), (void*)value);
	}

	inline static int32_t get_offset_of_secondsLeft_5() { return static_cast<int32_t>(offsetof(Timer_t32ADF3155A88C37628B80D227C821651666DD405, ___secondsLeft_5)); }
	inline int32_t get_secondsLeft_5() const { return ___secondsLeft_5; }
	inline int32_t* get_address_of_secondsLeft_5() { return &___secondsLeft_5; }
	inline void set_secondsLeft_5(int32_t value)
	{
		___secondsLeft_5 = value;
	}

	inline static int32_t get_offset_of_takingAway_6() { return static_cast<int32_t>(offsetof(Timer_t32ADF3155A88C37628B80D227C821651666DD405, ___takingAway_6)); }
	inline bool get_takingAway_6() const { return ___takingAway_6; }
	inline bool* get_address_of_takingAway_6() { return &___takingAway_6; }
	inline void set_takingAway_6(bool value)
	{
		___takingAway_6 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// dreamloLeaderBoard
struct dreamloLeaderBoard_t65A12FD2CBA7E92B2703B98E99DCAEB25C7AEBFD  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String dreamloLeaderBoard::dreamloWebserviceURL
	String_t* ___dreamloWebserviceURL_4;
	// System.Boolean dreamloLeaderBoard::IUpgradedAndGotSSL
	bool ___IUpgradedAndGotSSL_5;
	// System.String dreamloLeaderBoard::privateCode
	String_t* ___privateCode_6;
	// System.String dreamloLeaderBoard::publicCode
	String_t* ___publicCode_7;
	// System.String dreamloLeaderBoard::highScores
	String_t* ___highScores_8;

public:
	inline static int32_t get_offset_of_dreamloWebserviceURL_4() { return static_cast<int32_t>(offsetof(dreamloLeaderBoard_t65A12FD2CBA7E92B2703B98E99DCAEB25C7AEBFD, ___dreamloWebserviceURL_4)); }
	inline String_t* get_dreamloWebserviceURL_4() const { return ___dreamloWebserviceURL_4; }
	inline String_t** get_address_of_dreamloWebserviceURL_4() { return &___dreamloWebserviceURL_4; }
	inline void set_dreamloWebserviceURL_4(String_t* value)
	{
		___dreamloWebserviceURL_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dreamloWebserviceURL_4), (void*)value);
	}

	inline static int32_t get_offset_of_IUpgradedAndGotSSL_5() { return static_cast<int32_t>(offsetof(dreamloLeaderBoard_t65A12FD2CBA7E92B2703B98E99DCAEB25C7AEBFD, ___IUpgradedAndGotSSL_5)); }
	inline bool get_IUpgradedAndGotSSL_5() const { return ___IUpgradedAndGotSSL_5; }
	inline bool* get_address_of_IUpgradedAndGotSSL_5() { return &___IUpgradedAndGotSSL_5; }
	inline void set_IUpgradedAndGotSSL_5(bool value)
	{
		___IUpgradedAndGotSSL_5 = value;
	}

	inline static int32_t get_offset_of_privateCode_6() { return static_cast<int32_t>(offsetof(dreamloLeaderBoard_t65A12FD2CBA7E92B2703B98E99DCAEB25C7AEBFD, ___privateCode_6)); }
	inline String_t* get_privateCode_6() const { return ___privateCode_6; }
	inline String_t** get_address_of_privateCode_6() { return &___privateCode_6; }
	inline void set_privateCode_6(String_t* value)
	{
		___privateCode_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___privateCode_6), (void*)value);
	}

	inline static int32_t get_offset_of_publicCode_7() { return static_cast<int32_t>(offsetof(dreamloLeaderBoard_t65A12FD2CBA7E92B2703B98E99DCAEB25C7AEBFD, ___publicCode_7)); }
	inline String_t* get_publicCode_7() const { return ___publicCode_7; }
	inline String_t** get_address_of_publicCode_7() { return &___publicCode_7; }
	inline void set_publicCode_7(String_t* value)
	{
		___publicCode_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___publicCode_7), (void*)value);
	}

	inline static int32_t get_offset_of_highScores_8() { return static_cast<int32_t>(offsetof(dreamloLeaderBoard_t65A12FD2CBA7E92B2703B98E99DCAEB25C7AEBFD, ___highScores_8)); }
	inline String_t* get_highScores_8() const { return ___highScores_8; }
	inline String_t** get_address_of_highScores_8() { return &___highScores_8; }
	inline void set_highScores_8(String_t* value)
	{
		___highScores_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___highScores_8), (void*)value);
	}
};


// dreamloPromoCode
struct dreamloPromoCode_t640CC04DDAA3833B88CD2CF574BE448502BAFF2B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String dreamloPromoCode::dreamloWebserviceURL
	String_t* ___dreamloWebserviceURL_4;
	// System.String dreamloPromoCode::publicCode
	String_t* ___publicCode_5;
	// System.String dreamloPromoCode::value
	String_t* ___value_6;
	// System.String dreamloPromoCode::error
	String_t* ___error_7;
	// dreamloPromoCode/State dreamloPromoCode::state
	int32_t ___state_8;

public:
	inline static int32_t get_offset_of_dreamloWebserviceURL_4() { return static_cast<int32_t>(offsetof(dreamloPromoCode_t640CC04DDAA3833B88CD2CF574BE448502BAFF2B, ___dreamloWebserviceURL_4)); }
	inline String_t* get_dreamloWebserviceURL_4() const { return ___dreamloWebserviceURL_4; }
	inline String_t** get_address_of_dreamloWebserviceURL_4() { return &___dreamloWebserviceURL_4; }
	inline void set_dreamloWebserviceURL_4(String_t* value)
	{
		___dreamloWebserviceURL_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dreamloWebserviceURL_4), (void*)value);
	}

	inline static int32_t get_offset_of_publicCode_5() { return static_cast<int32_t>(offsetof(dreamloPromoCode_t640CC04DDAA3833B88CD2CF574BE448502BAFF2B, ___publicCode_5)); }
	inline String_t* get_publicCode_5() const { return ___publicCode_5; }
	inline String_t** get_address_of_publicCode_5() { return &___publicCode_5; }
	inline void set_publicCode_5(String_t* value)
	{
		___publicCode_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___publicCode_5), (void*)value);
	}

	inline static int32_t get_offset_of_value_6() { return static_cast<int32_t>(offsetof(dreamloPromoCode_t640CC04DDAA3833B88CD2CF574BE448502BAFF2B, ___value_6)); }
	inline String_t* get_value_6() const { return ___value_6; }
	inline String_t** get_address_of_value_6() { return &___value_6; }
	inline void set_value_6(String_t* value)
	{
		___value_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_6), (void*)value);
	}

	inline static int32_t get_offset_of_error_7() { return static_cast<int32_t>(offsetof(dreamloPromoCode_t640CC04DDAA3833B88CD2CF574BE448502BAFF2B, ___error_7)); }
	inline String_t* get_error_7() const { return ___error_7; }
	inline String_t** get_address_of_error_7() { return &___error_7; }
	inline void set_error_7(String_t* value)
	{
		___error_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___error_7), (void*)value);
	}

	inline static int32_t get_offset_of_state_8() { return static_cast<int32_t>(offsetof(dreamloPromoCode_t640CC04DDAA3833B88CD2CF574BE448502BAFF2B, ___state_8)); }
	inline int32_t get_state_8() const { return ___state_8; }
	inline int32_t* get_address_of_state_8() { return &___state_8; }
	inline void set_state_8(int32_t value)
	{
		___state_8 = value;
	}
};


// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___m_DummyData_13;

public:
	inline static int32_t get_offset_of_m_SystemInputModules_4() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_SystemInputModules_4)); }
	inline List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * get_m_SystemInputModules_4() const { return ___m_SystemInputModules_4; }
	inline List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 ** get_address_of_m_SystemInputModules_4() { return &___m_SystemInputModules_4; }
	inline void set_m_SystemInputModules_4(List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * value)
	{
		___m_SystemInputModules_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SystemInputModules_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentInputModule_5() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_CurrentInputModule_5)); }
	inline BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * get_m_CurrentInputModule_5() const { return ___m_CurrentInputModule_5; }
	inline BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 ** get_address_of_m_CurrentInputModule_5() { return &___m_CurrentInputModule_5; }
	inline void set_m_CurrentInputModule_5(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * value)
	{
		___m_CurrentInputModule_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentInputModule_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_FirstSelected_7() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_FirstSelected_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_FirstSelected_7() const { return ___m_FirstSelected_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_FirstSelected_7() { return &___m_FirstSelected_7; }
	inline void set_m_FirstSelected_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_FirstSelected_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FirstSelected_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_sendNavigationEvents_8() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_sendNavigationEvents_8)); }
	inline bool get_m_sendNavigationEvents_8() const { return ___m_sendNavigationEvents_8; }
	inline bool* get_address_of_m_sendNavigationEvents_8() { return &___m_sendNavigationEvents_8; }
	inline void set_m_sendNavigationEvents_8(bool value)
	{
		___m_sendNavigationEvents_8 = value;
	}

	inline static int32_t get_offset_of_m_DragThreshold_9() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_DragThreshold_9)); }
	inline int32_t get_m_DragThreshold_9() const { return ___m_DragThreshold_9; }
	inline int32_t* get_address_of_m_DragThreshold_9() { return &___m_DragThreshold_9; }
	inline void set_m_DragThreshold_9(int32_t value)
	{
		___m_DragThreshold_9 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelected_10() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_CurrentSelected_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_CurrentSelected_10() const { return ___m_CurrentSelected_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_CurrentSelected_10() { return &___m_CurrentSelected_10; }
	inline void set_m_CurrentSelected_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_CurrentSelected_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentSelected_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_HasFocus_11() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_HasFocus_11)); }
	inline bool get_m_HasFocus_11() const { return ___m_HasFocus_11; }
	inline bool* get_address_of_m_HasFocus_11() { return &___m_HasFocus_11; }
	inline void set_m_HasFocus_11(bool value)
	{
		___m_HasFocus_11 = value;
	}

	inline static int32_t get_offset_of_m_SelectionGuard_12() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_SelectionGuard_12)); }
	inline bool get_m_SelectionGuard_12() const { return ___m_SelectionGuard_12; }
	inline bool* get_address_of_m_SelectionGuard_12() { return &___m_SelectionGuard_12; }
	inline void set_m_SelectionGuard_12(bool value)
	{
		___m_SelectionGuard_12 = value;
	}

	inline static int32_t get_offset_of_m_DummyData_13() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_DummyData_13)); }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * get_m_DummyData_13() const { return ___m_DummyData_13; }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E ** get_address_of_m_DummyData_13() { return &___m_DummyData_13; }
	inline void set_m_DummyData_13(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * value)
	{
		___m_DummyData_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DummyData_13), (void*)value);
	}
};

struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * ___s_RaycastComparer_14;

public:
	inline static int32_t get_offset_of_m_EventSystems_6() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields, ___m_EventSystems_6)); }
	inline List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * get_m_EventSystems_6() const { return ___m_EventSystems_6; }
	inline List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 ** get_address_of_m_EventSystems_6() { return &___m_EventSystems_6; }
	inline void set_m_EventSystems_6(List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * value)
	{
		___m_EventSystems_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystems_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_RaycastComparer_14() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields, ___s_RaycastComparer_14)); }
	inline Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * get_s_RaycastComparer_14() const { return ___s_RaycastComparer_14; }
	inline Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 ** get_address_of_s_RaycastComparer_14() { return &___s_RaycastComparer_14; }
	inline void set_s_RaycastComparer_14(Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * value)
	{
		___s_RaycastComparer_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_RaycastComparer_14), (void*)value);
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * ___m_OnClick_20;

public:
	inline static int32_t get_offset_of_m_OnClick_20() { return static_cast<int32_t>(offsetof(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D, ___m_OnClick_20)); }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * get_m_OnClick_20() const { return ___m_OnClick_20; }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F ** get_address_of_m_OnClick_20() { return &___m_OnClick_20; }
	inline void set_m_OnClick_20(ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * value)
	{
		___m_OnClick_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnClick_20), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * m_Items[1];

public:
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * m_Items[1];

public:
	inline GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// dreamloLeaderBoard/Score[]
struct ScoreU5BU5D_tD3FEF63256F30BA473D428523CC5B54B8AD6CA97  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Score_t446577E2BC06794D97BE081C982A0D1F51F12D38  m_Items[1];

public:
	inline Score_t446577E2BC06794D97BE081C982A0D1F51F12D38  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Score_t446577E2BC06794D97BE081C982A0D1F51F12D38 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Score_t446577E2BC06794D97BE081C982A0D1F51F12D38  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___playerName_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___shortText_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___dateString_4), (void*)NULL);
		#endif
	}
	inline Score_t446577E2BC06794D97BE081C982A0D1F51F12D38  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Score_t446577E2BC06794D97BE081C982A0D1F51F12D38 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Score_t446577E2BC06794D97BE081C982A0D1F51F12D38  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___playerName_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___shortText_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___dateString_4), (void*)NULL);
		#endif
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
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


// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared (RuntimeObject * ___original0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m73674D291C1D6030C21A39003E4743D110ACC6A2_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<dreamloLeaderBoard/Score>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m6BBCE0586E4C6065C90FA9484A516263C5192008_gshared_inline (List_1_tD28329A66242A4236EA37A1950A4660B3F9AF1F7 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<dreamloLeaderBoard/Score>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Score_t446577E2BC06794D97BE081C982A0D1F51F12D38  List_1_get_Item_m30AC25EDC1317A0930F223DE147F170FEF22A612_gshared_inline (List_1_tD28329A66242A4236EA37A1950A4660B3F9AF1F7 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<dreamloLeaderBoard/Score>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t2E3456D25032B4E449696F1A7AF76F0B6EAE54FB  List_1_GetEnumerator_m4A67E1D9039071BEE37213CD4CD4296DA50A00AF_gshared (List_1_tD28329A66242A4236EA37A1950A4660B3F9AF1F7 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<dreamloLeaderBoard/Score>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Score_t446577E2BC06794D97BE081C982A0D1F51F12D38  Enumerator_get_Current_m03121030C14973605EA1EDD6F9CF9082E3C68DDF_gshared_inline (Enumerator_t2E3456D25032B4E449696F1A7AF76F0B6EAE54FB * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared (RuntimeObject * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<dreamloLeaderBoard/Score>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m9A094C777FDE49249BB235EA98E96388A5F15AA1_gshared (Enumerator_t2E3456D25032B4E449696F1A7AF76F0B6EAE54FB * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<dreamloLeaderBoard/Score>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m169C1B85766C1F9F786A0178DD9817577841329C_gshared (Enumerator_t2E3456D25032B4E449696F1A7AF76F0B6EAE54FB * __this, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<dreamloLeaderBoard/Score>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m8F8C5D12CC3CF1E9B76EB4FA41D95C9ACDBBE003_gshared (List_1_tD28329A66242A4236EA37A1950A4660B3F9AF1F7 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<dreamloLeaderBoard/Score>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mB5D64AE88F26C3619A8B610C1E196429533EB45B_gshared (List_1_tD28329A66242A4236EA37A1950A4660B3F9AF1F7 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// System.Void System.Comparison`1<dreamloLeaderBoard/Score>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Comparison_1__ctor_m00BDA321144DBD25E52E3AACD59FCB15458B889C_gshared (Comparison_1_t828031481DDDCDFECD647B5D5327482576945BDB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<dreamloLeaderBoard/Score>::Sort(System.Comparison`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mE98B6907239BFB3CD96D0F15541D02735DC00984_gshared (List_1_tD28329A66242A4236EA37A1950A4660B3F9AF1F7 * __this, Comparison_1_t828031481DDDCDFECD647B5D5327482576945BDB * ___comparison0, const RuntimeMethod* method);

// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared)(___original0, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, String_t* ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_mA6A651EDE81F139E1D6C7BA894834AD71D07227A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent0, bool ___worldPositionStays1, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void GameController::GetButtons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_GetButtons_m8F7B8F0ED9C2D11165A5B98F3DB2AB758679D0EF (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, const RuntimeMethod* method);
// System.Void GameController::AddListeners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_AddListeners_mFF7E1C0DD92346D489067ABC86770B1B1DB4D155 (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, const RuntimeMethod* method);
// System.Void GameController::AddGameCards()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_AddGameCards_mD296FA6BB31FD95BE51E4288FDC8FDCBD9F22ECC (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Sprite>::get_Count()
inline int32_t List_1_get_Count_mF608E717F324700CEA814E2E1E7B1DA9F08CAB54_inline (List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void GameController::LoadPrefs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_LoadPrefs_mEEA46BC0C4D09003402B23440C6F01FF414008A2 (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986 (String_t* ___key0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// UnityEngine.GameObject[] UnityEngine.GameObject::FindGameObjectsWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186 (String_t* ___tag0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Button>()
inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Button>::Add(!0)
inline void List_1_Add_mF6AEA6EB07931A44C878F9EC8EF494930C0A3A93 (List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * __this, Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E *, Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.UI.Button>::get_Item(System.Int32)
inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * List_1_get_Item_m0137FA1532E52BCE2C354C7E3689B9833F3C7711_inline (List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * (*) (List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// UnityEngine.UI.Image UnityEngine.UI.Selectable::get_image()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * Selectable_get_image_mAB45C107C7C858ECBEFFFF540B8C69746BB6C6FE (Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4 (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___value0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Button>::get_Count()
inline int32_t List_1_get_Count_mF8AF3BE95FB3004BFAD9AE87BF35C557862905EA_inline (List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Sprite>::Add(!0)
inline void List_1_Add_m28122A5F1F50EF8394190DE6D5334ED44F08AA61 (List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 *, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void GameController::Shuffle(System.Collections.Generic.List`1<UnityEngine.Sprite>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_Shuffle_m0114AC713A67E9430EBD9BBDBA6B6642D772CDFD (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * ___list0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.UI.Button>::GetEnumerator()
inline Enumerator_t6D0827411121305C0C750B338E1BFB757246E871  List_1_GetEnumerator_mBBC2C0EA0F269A56465D057A5C6467489C251CBC (List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t6D0827411121305C0C750B338E1BFB757246E871  (*) (List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Button>::get_Current()
inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * Enumerator_get_Current_m01B1280C927D8D132CE202C3E9F206F467D0346C_inline (Enumerator_t6D0827411121305C0C750B338E1BFB757246E871 * __this, const RuntimeMethod* method)
{
	return ((  Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * (*) (Enumerator_t6D0827411121305C0C750B338E1BFB757246E871 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___call0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Button>::MoveNext()
inline bool Enumerator_MoveNext_m7206FD3121D8BEA7DFCAD913FDAF3CA0F6821691 (Enumerator_t6D0827411121305C0C750B338E1BFB757246E871 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t6D0827411121305C0C750B338E1BFB757246E871 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Button>::Dispose()
inline void Enumerator_Dispose_mD9C961426EFA6BBBFDCA42D46BCEA62283586500 (Enumerator_t6D0827411121305C0C750B338E1BFB757246E871 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t6D0827411121305C0C750B338E1BFB757246E871 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * EventSystem_get_current_m4B9C11F490297AE55428038DACD240596D6CE5F2 (const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::get_currentSelectedGameObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * EventSystem_get_currentSelectedGameObject_m999F9BFD4C20E2F00C56D4FED89602B6077EF70D_inline (EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * __this, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C (String_t* ___s0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Sprite>::get_Item(System.Int32)
inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * List_1_get_Item_m2E8D9A40352859B1D5465D074732572FC364786E_inline (List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * (*) (List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Collections.IEnumerator GameController::CheckIfTheCardsMatch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameController_CheckIfTheCardsMatch_mD7A8A5332C69E4A441B63443A9C04DF2F944FAD8 (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void GameController/<CheckIfTheCardsMatch>d__27::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckIfTheCardsMatchU3Ed__27__ctor_m94D7B824E10AFA5539D97103044DC975BBBC936B (U3CCheckIfTheCardsMatchU3Ed__27_tAFEE8962B9D3C4649B097434888F94AAC8A83783 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void GameController::gameIsFinished()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_gameIsFinished_m02DAA35EB82A262389A983189318600C7E88F670 (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Sprite>::set_Item(System.Int32,!0)
inline void List_1_set_Item_mD3ACD749DA26F9EC1DE8703DAE9B6A7B6A45429B (List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * __this, int32_t ___index0, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 *, int32_t, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 *, const RuntimeMethod*))List_1_set_Item_m73674D291C1D6030C21A39003E4743D110ACC6A2_gshared)(__this, ___index0, ___value1, method);
}
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_Save_m2C1E628FA335095CD88D0DA1CB50ACC924667EEC (const RuntimeMethod* method);
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14 (String_t* ___key0, int32_t ___defaultValue1, const RuntimeMethod* method);
// System.Void GameController::SavePrefs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_SavePrefs_m18DEA16CAB189D03AE83A4765259A6A4F18BEBD9 (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, const RuntimeMethod* method);
// System.Void GameController::SetRecordText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_SetRecordText_m3486A0B4CA585093AFC14A080632235496200FF3 (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Sprite>::.ctor()
inline void List_1__ctor_m4CCA077ACAB11548CE7A37FE67B013E1E7497ACD (List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Button>::.ctor()
inline void List_1__ctor_mA1744A70D10E32296ECF132BFF63A811CB50A795 (List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void GameController::PickACard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_PickACard_m691CD0186B0D3911E62851E9B2AECC6F083A7442 (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, const RuntimeMethod* method);
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * GUI_get_skin_mCD2A03F408ABBA7816C52148D92A8DC836FBDE2F (const RuntimeMethod* method);
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_label()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * GUISkin_get_label_m6F41B6A214AE6407DE5C567225828A8627A3AD83 (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::set_fontSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_fontSize_mFA02B9950E09F880976FD2FF646FB8AAEED1C5C6 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method);
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_Label_mC6571F167DA5145CE2BDBF43661290662EA9D631 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___position0, String_t* ___text1, const RuntimeMethod* method);
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_button()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * GUISkin_get_button_m03559A64FAC2479F2D3753DD559FF22273602835 (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C (const RuntimeMethod* method);
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUI_Button_m668EE382521BDEA241D719A9CF39B6672E2CA23F (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___position0, String_t* ___text1, const RuntimeMethod* method);
// System.Collections.IEnumerator GetGPS::StartGPS()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GetGPS_StartGPS_mF5BD651FC84448CB78128C45D0F903B7DF06EFCD (GetGPS_tD132A0E0C3FB5649A8D89F4CC2F4348967F1F5C0 * __this, const RuntimeMethod* method);
// UnityEngine.LocationService UnityEngine.Input::get_location()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LocationService_tDCB7C3AA7A10C4727D49676FD3A902F48C27F855 * Input_get_location_m5D0AE1016E410D3D7411904D0706456DE383F4E5 (const RuntimeMethod* method);
// UnityEngine.LocationInfo UnityEngine.LocationService::get_lastData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LocationInfo_t7FC872AE105FF29421AFC8BBEE071F6C36E44769  LocationService_get_lastData_mD6EAC681E09427969B18EEC9B85DA43633EFEA1F (LocationService_tDCB7C3AA7A10C4727D49676FD3A902F48C27F855 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.LocationInfo::get_latitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LocationInfo_get_latitude_m09F2DFBDB716C46B0ECFD11F6A5DB2B93B06174B (LocationInfo_t7FC872AE105FF29421AFC8BBEE071F6C36E44769 * __this, const RuntimeMethod* method);
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010 (float* __this, const RuntimeMethod* method);
// System.Single UnityEngine.LocationInfo::get_longitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LocationInfo_get_longitude_mD0F77FFCF02AFB63058C77A4EBAE228528F57A50 (LocationInfo_t7FC872AE105FF29421AFC8BBEE071F6C36E44769 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.Double UnityEngine.LocationInfo::get_timestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double LocationInfo_get_timestamp_m16DAEBB8C94F2E000E874254FA0FF6BD0E02AFE2 (LocationInfo_t7FC872AE105FF29421AFC8BBEE071F6C36E44769 * __this, const RuntimeMethod* method);
// System.String System.Double::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m87E4A4DC004A167CF0AE1F2D271BC20A708CE57D (double* __this, const RuntimeMethod* method);
// System.Void UnityEngine.LocationService::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationService_Stop_m73B68E5F05367F0F2455DF56C30EDC9F0848C46A (LocationService_tDCB7C3AA7A10C4727D49676FD3A902F48C27F855 * __this, const RuntimeMethod* method);
// System.Void GetGPS/<StartGPS>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartGPSU3Ed__5__ctor_mA6C34C1F778BE8DE25884861BC0BE54692AEDE9C (U3CStartGPSU3Ed__5_t2FF10F0DE079CEBBEFD66B2B05DA3AD2C111B5E5 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// dreamloLeaderBoard dreamloLeaderBoard::GetSceneDreamloLeaderboard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR dreamloLeaderBoard_t65A12FD2CBA7E92B2703B98E99DCAEB25C7AEBFD * dreamloLeaderBoard_GetSceneDreamloLeaderboard_mC07124272D9B8F318A62A89087ABA5DC0E7D5B16 (const RuntimeMethod* method);
// System.Void dreamloLeaderBoard::GetScores()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dreamloLeaderBoard_GetScores_mC51693E5538E74EBCCE5F52049CC611B5F16EB60 (dreamloLeaderBoard_t65A12FD2CBA7E92B2703B98E99DCAEB25C7AEBFD * __this, const RuntimeMethod* method);
// System.Void LeaderBoardManager::LoadPrefs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeaderBoardManager_LoadPrefs_m0A9E8761F8525BC290819DF7C407DAC10FBB707C (LeaderBoardManager_t87404B730BDD0E9A35EF39995ADE28BBE797C023 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator LeaderBoardManager::StartGPS()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LeaderBoardManager_StartGPS_mF21F983744E3C032EC7B260514EC16553245C0A5 (LeaderBoardManager_t87404B730BDD0E9A35EF39995ADE28BBE797C023 * __this, const RuntimeMethod* method);
// System.Void LeaderBoardManager::CheckLocation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeaderBoardManager_CheckLocation_mA6FDB87933DBD1994FF50FC3165AA0D313217547 (LeaderBoardManager_t87404B730BDD0E9A35EF39995ADE28BBE797C023 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<dreamloLeaderBoard/Score> dreamloLeaderBoard::ToListHighToLow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tD28329A66242A4236EA37A1950A4660B3F9AF1F7 * dreamloLeaderBoard_ToListHighToLow_mD18CBCF1D84A902BC1E0F242D388D7BD9DBAD60F (dreamloLeaderBoard_t65A12FD2CBA7E92B2703B98E99DCAEB25C7AEBFD * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<dreamloLeaderBoard/Score>::get_Count()
inline int32_t List_1_get_Count_m6BBCE0586E4C6065C90FA9484A516263C5192008_inline (List_1_tD28329A66242A4236EA37A1950A4660B3F9AF1F7 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tD28329A66242A4236EA37A1950A4660B3F9AF1F7 *, const RuntimeMethod*))List_1_get_Count_m6BBCE0586E4C6065C90FA9484A516263C5192008_gshared_inline)(__this, method);
}
// System.Void LeaderBoardManager::DisplayList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeaderBoardManager_DisplayList_m92FE36669A07E5C7FC871E2C371257081C34B839 (LeaderBoardManager_t87404B730BDD0E9A35EF39995ADE28BBE797C023 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<dreamloLeaderBoard/Score>::get_Item(System.Int32)
inline Score_t446577E2BC06794D97BE081C982A0D1F51F12D38  List_1_get_Item_m30AC25EDC1317A0930F223DE147F170FEF22A612_inline (List_1_tD28329A66242A4236EA37A1950A4660B3F9AF1F7 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Score_t446577E2BC06794D97BE081C982A0D1F51F12D38  (*) (List_1_tD28329A66242A4236EA37A1950A4660B3F9AF1F7 *, int32_t, const RuntimeMethod*))List_1_get_Item_m30AC25EDC1317A0930F223DE147F170FEF22A612_gshared_inline)(__this, ___index0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<dreamloLeaderBoard/Score>::GetEnumerator()
inline Enumerator_t2E3456D25032B4E449696F1A7AF76F0B6EAE54FB  List_1_GetEnumerator_m4A67E1D9039071BEE37213CD4CD4296DA50A00AF (List_1_tD28329A66242A4236EA37A1950A4660B3F9AF1F7 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t2E3456D25032B4E449696F1A7AF76F0B6EAE54FB  (*) (List_1_tD28329A66242A4236EA37A1950A4660B3F9AF1F7 *, const RuntimeMethod*))List_1_GetEnumerator_m4A67E1D9039071BEE37213CD4CD4296DA50A00AF_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<dreamloLeaderBoard/Score>::get_Current()
inline Score_t446577E2BC06794D97BE081C982A0D1F51F12D38  Enumerator_get_Current_m03121030C14973605EA1EDD6F9CF9082E3C68DDF_inline (Enumerator_t2E3456D25032B4E449696F1A7AF76F0B6EAE54FB * __this, const RuntimeMethod* method)
{
	return ((  Score_t446577E2BC06794D97BE081C982A0D1F51F12D38  (*) (Enumerator_t2E3456D25032B4E449696F1A7AF76F0B6EAE54FB *, const RuntimeMethod*))Enumerator_get_Current_m03121030C14973605EA1EDD6F9CF9082E3C68DDF_gshared_inline)(__this, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Transform)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared)(___original0, ___parent1, method);
}
// !!0 UnityEngine.GameObject::GetComponent<ScoreCell>()
inline ScoreCell_t2B4A18682749BC3457B08AAD2BA80F12415FCE54 * GameObject_GetComponent_TisScoreCell_t2B4A18682749BC3457B08AAD2BA80F12415FCE54_m6169DD6DD87A104A4BD627F2F25104BD1B449D34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  ScoreCell_t2B4A18682749BC3457B08AAD2BA80F12415FCE54 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void ScoreCell::SetModel(dreamloLeaderBoard/Score)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreCell_SetModel_mEAF132D88B3350B96AD1C859D69298C8BFE07F44 (ScoreCell_t2B4A18682749BC3457B08AAD2BA80F12415FCE54 * __this, Score_t446577E2BC06794D97BE081C982A0D1F51F12D38  ___data0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<dreamloLeaderBoard/Score>::MoveNext()
inline bool Enumerator_MoveNext_m9A094C777FDE49249BB235EA98E96388A5F15AA1 (Enumerator_t2E3456D25032B4E449696F1A7AF76F0B6EAE54FB * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t2E3456D25032B4E449696F1A7AF76F0B6EAE54FB *, const RuntimeMethod*))Enumerator_MoveNext_m9A094C777FDE49249BB235EA98E96388A5F15AA1_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<dreamloLeaderBoard/Score>::Dispose()
inline void Enumerator_Dispose_m169C1B85766C1F9F786A0178DD9817577841329C (Enumerator_t2E3456D25032B4E449696F1A7AF76F0B6EAE54FB * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t2E3456D25032B4E449696F1A7AF76F0B6EAE54FB *, const RuntimeMethod*))Enumerator_Dispose_m169C1B85766C1F9F786A0178DD9817577841329C_gshared)(__this, method);
}
// System.Void dreamloLeaderBoard::AddScore(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dreamloLeaderBoard_AddScore_m057228BED5D1A7A48436E94311B9A6FDCCCE3FFA (dreamloLeaderBoard_t65A12FD2CBA7E92B2703B98E99DCAEB25C7AEBFD * __this, String_t* ___playerName0, int32_t ___totalScore1, const RuntimeMethod* method);
// System.Void LeaderBoardManager/<StartGPS>d__26::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartGPSU3Ed__26__ctor_mCFAE8B06E7B88B5F75AB5611FF8C8C9DF9EF9F1E (U3CStartGPSU3Ed__26_t6F1765BD5FAE2C4A1D0A6808B7AF630071317C62 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// dreamloPromoCode dreamloPromoCode::GetSceneDreamloPromoCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR dreamloPromoCode_t640CC04DDAA3833B88CD2CF574BE448502BAFF2B * dreamloPromoCode_GetSceneDreamloPromoCode_mBC1ECFAE3E8AAEDE07FB88FA784A90670F09AEF9 (const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87 (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Width(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * GUILayout_Width_m2529B16156A3E8109EA75B8D67C723B1B8E24C53 (float ___width0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE (const RuntimeMethod* method);
// UnityEngine.GUIStyle UnityEngine.GUIStyle::op_Implicit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * GUIStyle_op_Implicit_m2D426804727C2889352794E14E9B96BF8D3149BA (String_t* ___str0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::.ctor(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle__ctor_mF096C292507D1BE25B6C458FB771CFC4509CE95B (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___other0, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayout::BeginArea(UnityEngine.Rect,UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_BeginArea_mE92EBECB10C334CADE6D63FABBF2A79C873590D6 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___screenRect0, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___style1, const RuntimeMethod* method);
// !!0[] System.Array::Empty<UnityEngine.GUILayoutOption>()
inline GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline (const RuntimeMethod* method)
{
	return ((  GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline)(method);
}
// System.Void UnityEngine.GUILayout::BeginVertical(UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_BeginVertical_mE0941591491BBDAA25FF7CD48415750FD08D10ED (GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* ___options0, const RuntimeMethod* method);
// System.String System.Single::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7 (float* __this, String_t* ___format0, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayout::Label(System.String,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_Label_m0DD89429577B101820231347FB04CFC489245502 (String_t* ___text0, GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* ___options1, const RuntimeMethod* method);
// System.Boolean UnityEngine.GUILayout::Button(System.String,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUILayout_Button_m749F2887D57BDC9B6901F2C35F5C6A7E22154162 (String_t* ___text0, GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* ___options1, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayout::BeginHorizontal(UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_BeginHorizontal_m217AAF9BF30836EA73B22FF47B817F6F430E3661 (GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* ___options0, const RuntimeMethod* method);
// System.String UnityEngine.GUILayout::TextField(System.String,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GUILayout_TextField_mC9C6AA168E42FD26C48D770E5F4A3E7FC36C823D (String_t* ___text0, GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* ___options1, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayout::EndHorizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_EndHorizontal_mFB38A81D7D34D7928ECECF82B9C2C993BE5A0946 (const RuntimeMethod* method);
// System.Void UnityEngine.GUILayout::EndArea()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_EndArea_mFC73B49A3F2C5319D280E2C1B09E78CA23D0B151 (const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::set_y(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_y_m015507262F8AC5AFF1B4E986B66307F31FB3A10E (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___value0, const RuntimeMethod* method);
// System.Void dreamloPromoCode::RedeemCode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dreamloPromoCode_RedeemCode_m38F6652307171AA5FFFCC1BB91AD02712B31651F (dreamloPromoCode_t640CC04DDAA3833B88CD2CF574BE448502BAFF2B * __this, String_t* ___code0, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayout::Space(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_Space_m86E4A2CC27661A11F7D50132217B74E9D76CB9DD (float ___pixels0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.GUILayout::EndVertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_EndVertical_mBCF5058C9591A4064722C2B763EF98D066BFDCAD (const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092 (String_t* ___sceneName0, const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A (const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Collections.IEnumerator Timer::TimerTake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Timer_TimerTake_mF363B47742D917E187FACADE44326F7A47E78CEE (Timer_t32ADF3155A88C37628B80D227C821651666DD405 * __this, const RuntimeMethod* method);
// System.Void Timer/<TimerTake>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTimerTakeU3Ed__5__ctor_m3C839682D9BC7F86659C719ED2934B9195C46BC7 (U3CTimerTakeU3Ed__5_t897E40F209FEDC1937EAA8D5C9BEEF1F409CAC78 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B (String_t* ___name0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<dreamloLeaderBoard>()
inline dreamloLeaderBoard_t65A12FD2CBA7E92B2703B98E99DCAEB25C7AEBFD * GameObject_GetComponent_TisdreamloLeaderBoard_t65A12FD2CBA7E92B2703B98E99DCAEB25C7AEBFD_m6E6AC3A8B51A6799905BAC19D9EB2F955C14B896 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  dreamloLeaderBoard_t65A12FD2CBA7E92B2703B98E99DCAEB25C7AEBFD * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void dreamloLeaderBoard::AddScoreWithPipe(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dreamloLeaderBoard_AddScoreWithPipe_m5606AE99552EA19928263C96304B407DA409A4A3 (dreamloLeaderBoard_t65A12FD2CBA7E92B2703B98E99DCAEB25C7AEBFD * __this, String_t* ___playerName0, int32_t ___totalScore1, const RuntimeMethod* method);
// System.Void dreamloLeaderBoard::AddScoreWithPipe(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dreamloLeaderBoard_AddScoreWithPipe_m9F8DAC427A41BFCAF4F2F9EE27A4DBEA31B1B458 (dreamloLeaderBoard_t65A12FD2CBA7E92B2703B98E99DCAEB25C7AEBFD * __this, String_t* ___playerName0, int32_t ___totalScore1, int32_t ___totalSeconds2, const RuntimeMethod* method);
// System.Void dreamloLeaderBoard::AddScoreWithPipe(System.String,System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dreamloLeaderBoard_AddScoreWithPipe_mF3E3F9BFB02D7C8B1B3FE475E431FA8AFEB25F83 (dreamloLeaderBoard_t65A12FD2CBA7E92B2703B98E99DCAEB25C7AEBFD * __this, String_t* ___playerName0, int32_t ___totalScore1, int32_t ___totalSeconds2, String_t* ___shortText3, const RuntimeMethod* method);
// System.String dreamloLeaderBoard::Clean(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* dreamloLeaderBoard_Clean_m0991582E48FDEAD71BBFECDB51751E20F20CFAD1 (dreamloLeaderBoard_t65A12FD2CBA7E92B2703B98E99DCAEB25C7AEBFD * __this, String_t* ___s0, const RuntimeMethod* method);
// System.String UnityEngine.Networking.UnityWebRequest::EscapeURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_EscapeURL_mD4A55874FBF817BE5C57E4150CFFC2A78ACCD9A1 (String_t* ___s0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.Collections.IEnumerator dreamloLeaderBoard::GetRequest(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* dreamloLeaderBoard_GetRequest_mBAAB677C6C4EB5A35C38BCFB2DF667C67BEA6AD0 (dreamloLeaderBoard_t65A12FD2CBA7E92B2703B98E99DCAEB25C7AEBFD * __this, String_t* ___url0, const RuntimeMethod* method);
// System.Void dreamloLeaderBoard/<GetRequest>d__16::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRequestU3Ed__16__ctor_m6628BACA191E5CF5A8591F13D5F16727146DBABB (U3CGetRequestU3Ed__16_t15BE8B46AE9A55716A0E2229C682D997A67CA635 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.String[] System.String::Split(System.Char[],System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* String_Split_m8334980E85EA3EF1F6204607324D9C34EFA4CA25 (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___separator0, int32_t ___options1, const RuntimeMethod* method);
// dreamloLeaderBoard/Score[] dreamloLeaderBoard::ToScoreArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScoreU5BU5D_tD3FEF63256F30BA473D428523CC5B54B8AD6CA97* dreamloLeaderBoard_ToScoreArray_mC044109EE675A68DC1914C53B5474A29A557AC20 (dreamloLeaderBoard_t65A12FD2CBA7E92B2703B98E99DCAEB25C7AEBFD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<dreamloLeaderBoard/Score>::.ctor()
inline void List_1__ctor_m8F8C5D12CC3CF1E9B76EB4FA41D95C9ACDBBE003 (List_1_tD28329A66242A4236EA37A1950A4660B3F9AF1F7 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD28329A66242A4236EA37A1950A4660B3F9AF1F7 *, const RuntimeMethod*))List_1__ctor_m8F8C5D12CC3CF1E9B76EB4FA41D95C9ACDBBE003_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<dreamloLeaderBoard/Score>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1__ctor_mB5D64AE88F26C3619A8B610C1E196429533EB45B (List_1_tD28329A66242A4236EA37A1950A4660B3F9AF1F7 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD28329A66242A4236EA37A1950A4660B3F9AF1F7 *, RuntimeObject*, const RuntimeMethod*))List_1__ctor_mB5D64AE88F26C3619A8B610C1E196429533EB45B_gshared)(__this, ___collection0, method);
}
// System.Void System.Comparison`1<dreamloLeaderBoard/Score>::.ctor(System.Object,System.IntPtr)
inline void Comparison_1__ctor_m00BDA321144DBD25E52E3AACD59FCB15458B889C (Comparison_1_t828031481DDDCDFECD647B5D5327482576945BDB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Comparison_1_t828031481DDDCDFECD647B5D5327482576945BDB *, RuntimeObject *, intptr_t, const RuntimeMethod*))Comparison_1__ctor_m00BDA321144DBD25E52E3AACD59FCB15458B889C_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Collections.Generic.List`1<dreamloLeaderBoard/Score>::Sort(System.Comparison`1<!0>)
inline void List_1_Sort_mE98B6907239BFB3CD96D0F15541D02735DC00984 (List_1_tD28329A66242A4236EA37A1950A4660B3F9AF1F7 * __this, Comparison_1_t828031481DDDCDFECD647B5D5327482576945BDB * ___comparison0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD28329A66242A4236EA37A1950A4660B3F9AF1F7 *, Comparison_1_t828031481DDDCDFECD647B5D5327482576945BDB *, const RuntimeMethod*))List_1_Sort_mE98B6907239BFB3CD96D0F15541D02735DC00984_gshared)(__this, ___comparison0, method);
}
// System.String[] dreamloLeaderBoard::ToStringArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* dreamloLeaderBoard_ToStringArray_m3D0D4390E35BBAB1DCDF5B8AC50801714AEDC17F (dreamloLeaderBoard_t65A12FD2CBA7E92B2703B98E99DCAEB25C7AEBFD * __this, const RuntimeMethod* method);
// System.Int32 dreamloLeaderBoard::CheckInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t dreamloLeaderBoard_CheckInt_m5CE9933B56CA0939DE71636087FB1B1EB7792E87 (dreamloLeaderBoard_t65A12FD2CBA7E92B2703B98E99DCAEB25C7AEBFD * __this, String_t* ___s0, const RuntimeMethod* method);
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method);
// System.Boolean System.Int32::TryParse(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_TryParse_m748B8DB1D0C9D25C3D1812D7887411C4AFC1DDC2 (String_t* ___s0, int32_t* ___result1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<dreamloPromoCode>()
inline dreamloPromoCode_t640CC04DDAA3833B88CD2CF574BE448502BAFF2B * GameObject_GetComponent_TisdreamloPromoCode_t640CC04DDAA3833B88CD2CF574BE448502BAFF2B_m958A87A8953E497EAA533CB3FE4D6779F0ECBF7E (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  dreamloPromoCode_t640CC04DDAA3833B88CD2CF574BE448502BAFF2B * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Collections.IEnumerator dreamloPromoCode::WebService(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* dreamloPromoCode_WebService_m7E598214AC139C1FD5F535813A35C2CABF1EAEBE (dreamloPromoCode_t640CC04DDAA3833B88CD2CF574BE448502BAFF2B * __this, String_t* ___url0, const RuntimeMethod* method);
// System.Void dreamloPromoCode/<WebService>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWebServiceU3Ed__8__ctor_m1DDE835929CB5251B68FF1F99A4CA2B2D38E7D4D (U3CWebServiceU3Ed__8_tB0266360203FE8C7B51C5262D5E45CC6047B13B3 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40 (Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method);
// System.Void GameController::CheckIfTheGameIsFinished()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_CheckIfTheGameIsFinished_mD0A03B6C47DFCD5D2153FA11D03F89225FD25456 (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.LocationService::get_isEnabledByUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LocationService_get_isEnabledByUser_mD26BB9D35EC9DE4B38F7771B5E910B14EFC2B00A (LocationService_tDCB7C3AA7A10C4727D49676FD3A902F48C27F855 * __this, const RuntimeMethod* method);
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C (bool* __this, const RuntimeMethod* method);
// System.Void UnityEngine.LocationService::Start(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationService_Start_m625DBB1AF4D9E01C6DD790A2E536AC278072D53A (LocationService_tDCB7C3AA7A10C4727D49676FD3A902F48C27F855 * __this, float ___desiredAccuracyInMeters0, float ___updateDistanceInMeters1, const RuntimeMethod* method);
// UnityEngine.LocationServiceStatus UnityEngine.LocationService::get_status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LocationService_get_status_m1E90C9991825BDF5A3AC066D97F9198568055C54 (LocationService_tDCB7C3AA7A10C4727D49676FD3A902F48C27F855 * __this, const RuntimeMethod* method);
// System.Void dreamloLeaderBoard/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC7E9E9DF39A8DDF27457229C4A55BF885802511D (U3CU3Ec_tCA1B7E2863AF474F3FFDED0AA53F12C56EE0CB07 * __this, const RuntimeMethod* method);
// System.Int32 System.Int32::CompareTo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_CompareTo_m2DD1093B956B4D96C3AC3C27FDEE3CA447B044D3 (int32_t* __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void dreamloLeaderBoard/<GetRequest>d__16::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRequestU3Ed__16_U3CU3Em__Finally1_m558701E9B744815E78F0BCF6428F33CB832867AC (U3CGetRequestU3Ed__16_t15BE8B46AE9A55716A0E2229C682D997A67CA635 * __this, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Get(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * UnityWebRequest_Get_m9C24DB3E8BED0B0886F28DCD982A4741A9903B1A (String_t* ___uri0, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.String UnityEngine.Networking.DownloadHandler::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DownloadHandler_get_text_mD89D7125640800A8F5C4B9401C080C405953828A (DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * __this, const RuntimeMethod* method);
// System.Void dreamloLeaderBoard/<GetRequest>d__16::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRequestU3Ed__16_System_IDisposable_Dispose_mCC3BBF08D046EFB434C8867A48C6788C3ADF64E0 (U3CGetRequestU3Ed__16_t15BE8B46AE9A55716A0E2229C682D997A67CA635 * __this, const RuntimeMethod* method);
// System.Void dreamloPromoCode/<WebService>d__8::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWebServiceU3Ed__8_U3CU3Em__Finally1_m16A846D372BBCCA724D8BCCE57D31A6911BA87E1 (U3CWebServiceU3Ed__8_tB0266360203FE8C7B51C5262D5E45CC6047B13B3 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Networking.UnityWebRequest::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_error_m32B69D2365C1FE2310B5936C7C295B71A92CC2B4 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___separator0, const RuntimeMethod* method);
// System.Void dreamloPromoCode/<WebService>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWebServiceU3Ed__8_System_IDisposable_Dispose_m24D3144B3EC467D670DD992446077DF15729B834 (U3CWebServiceU3Ed__8_tB0266360203FE8C7B51C5262D5E45CC6047B13B3 * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// System.Void AddButtons::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddButtons_Awake_m9B6432D7F4EBC6D9DE7B099C19B30CDB697EB7DB (AddButtons_t1FDAD33E463CAFE3555F38286008545EEB7D7D58 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* G_B3_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B3_1 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B3_2 = NULL;
	String_t* G_B2_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B2_1 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B2_2 = NULL;
	{
		// for (int i = 0; i < 20; i++)
		V_0 = 0;
		goto IL_003a;
	}

IL_0004:
	{
		// GameObject button = Instantiate(btn);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_btn_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_0, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		// button.name = "" + i;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = L_1;
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_4 = L_3;
		G_B2_0 = L_4;
		G_B2_1 = L_2;
		G_B2_2 = L_2;
		if (L_4)
		{
			G_B3_0 = L_4;
			G_B3_1 = L_2;
			G_B3_2 = L_2;
			goto IL_0020;
		}
	}
	{
		G_B3_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
	}

IL_0020:
	{
		NullCheck(G_B3_1);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		// button.transform.SetParent(memoryField, false);
		NullCheck(G_B3_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(G_B3_2, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = __this->get_memoryField_4();
		NullCheck(L_5);
		Transform_SetParent_mA6A651EDE81F139E1D6C7BA894834AD71D07227A(L_5, L_6, (bool)0, /*hidden argument*/NULL);
		// for (int i = 0; i < 20; i++)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_003a:
	{
		// for (int i = 0; i < 20; i++)
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) < ((int32_t)((int32_t)20))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void AddButtons::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddButtons__ctor_mE2785312B767E00F0CE1C02BA64C10D2B45BB4DE (AddButtons_t1FDAD33E463CAFE3555F38286008545EEB7D7D58 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void GameController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_Awake_mE678A4EEF012294E485A814D37D93231A90B4BEC (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = this;
		((GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274_StaticFields*)il2cpp_codegen_static_fields_for(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274_il2cpp_TypeInfo_var))->set_instance_12(__this);
		// }
		return;
	}
}
// System.Void GameController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_Start_mCC3F0292799528323E2217A12DB08D98CDD492AE (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF608E717F324700CEA814E2E1E7B1DA9F08CAB54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral336B029D04847DC4F36985E1B89D1A0B11D299A3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetButtons();
		GameController_GetButtons_m8F7B8F0ED9C2D11165A5B98F3DB2AB758679D0EF(__this, /*hidden argument*/NULL);
		// AddListeners();
		GameController_AddListeners_mFF7E1C0DD92346D489067ABC86770B1B1DB4D155(__this, /*hidden argument*/NULL);
		// AddGameCards();
		GameController_AddGameCards_mD296FA6BB31FD95BE51E4288FDC8FDCBD9F22ECC(__this, /*hidden argument*/NULL);
		// gameGuesses = gameCards.Count / 2;
		List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * L_0 = __this->get_gameCards_6();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mF608E717F324700CEA814E2E1E7B1DA9F08CAB54_inline(L_0, /*hidden argument*/List_1_get_Count_mF608E717F324700CEA814E2E1E7B1DA9F08CAB54_RuntimeMethod_var);
		__this->set_gameGuesses_18(((int32_t)((int32_t)L_1/(int32_t)2)));
		// LoadPrefs();
		GameController_LoadPrefs_mEEA46BC0C4D09003402B23440C6F01FF414008A2(__this, /*hidden argument*/NULL);
		// Debug.Log(PlayerPrefs.GetInt(ScoreKey));
		int32_t L_2;
		L_2 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral336B029D04847DC4F36985E1B89D1A0B11D299A3, /*hidden argument*/NULL);
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_3);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_Update_mA76A2CE1F2AC1AACCDBF913CA6E1EA73DC621CD0 (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral209507D592CB92D49EA90B13F92A7CB04FE823FA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// scoreText.text = "current turn " + countGuess;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_scoreText_11();
		int32_t* L_1 = __this->get_address_of_countGuess_16();
		String_t* L_2;
		L_2 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_1, /*hidden argument*/NULL);
		String_t* L_3;
		L_3 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral209507D592CB92D49EA90B13F92A7CB04FE823FA, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_3);
		// }
		return;
	}
}
// System.Void GameController::SetRecordText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_SetRecordText_m3486A0B4CA585093AFC14A080632235496200FF3 (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD1D3E7A93D272D812F8969E2F7861F768A94074);
		s_Il2CppMethodInitialized = true;
	}
	{
		// recordText.text = "Finished game in turn " + recordGuess;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_recordText_10();
		int32_t* L_1 = __this->get_address_of_recordGuess_15();
		String_t* L_2;
		L_2 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_1, /*hidden argument*/NULL);
		String_t* L_3;
		L_3 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralCD1D3E7A93D272D812F8969E2F7861F768A94074, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_3);
		// }
		return;
	}
}
// System.Void GameController::GetButtons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_GetButtons_m8F7B8F0ED9C2D11165A5B98F3DB2AB758679D0EF (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF6AEA6EB07931A44C878F9EC8EF494930C0A3A93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0137FA1532E52BCE2C354C7E3689B9833F3C7711_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB8D8311C975C58CE533E965314B40432BE88FD1D);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// GameObject[] objects = GameObject.FindGameObjectsWithTag ("MemoryCardButton");
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0;
		L_0 = GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186(_stringLiteralB8D8311C975C58CE533E965314B40432BE88FD1D, /*hidden argument*/NULL);
		V_0 = L_0;
		// for (int i = 0; i <objects.Length; i++)
		V_1 = 0;
		goto IL_0042;
	}

IL_000f:
	{
		// btns.Add(objects[i].GetComponent<Button>());
		List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * L_1 = __this->get_btns_7();
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_6;
		L_6 = GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8(L_5, /*hidden argument*/GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var);
		NullCheck(L_1);
		List_1_Add_mF6AEA6EB07931A44C878F9EC8EF494930C0A3A93(L_1, L_6, /*hidden argument*/List_1_Add_mF6AEA6EB07931A44C878F9EC8EF494930C0A3A93_RuntimeMethod_var);
		// btns[i].image.sprite = bgImage;
		List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * L_7 = __this->get_btns_7();
		int32_t L_8 = V_1;
		NullCheck(L_7);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_9;
		L_9 = List_1_get_Item_m0137FA1532E52BCE2C354C7E3689B9833F3C7711_inline(L_7, L_8, /*hidden argument*/List_1_get_Item_m0137FA1532E52BCE2C354C7E3689B9833F3C7711_RuntimeMethod_var);
		NullCheck(L_9);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_10;
		L_10 = Selectable_get_image_mAB45C107C7C858ECBEFFFF540B8C69746BB6C6FE(L_9, /*hidden argument*/NULL);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_11 = __this->get_bgImage_4();
		NullCheck(L_10);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_10, L_11, /*hidden argument*/NULL);
		// for (int i = 0; i <objects.Length; i++)
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0042:
	{
		// for (int i = 0; i <objects.Length; i++)
		int32_t L_13 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_14 = V_0;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000f;
		}
	}
	{
		// }
		return;
	}
}
// System.Void GameController::AddGameCards()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_AddGameCards_mD296FA6BB31FD95BE51E4288FDC8FDCBD9F22ECC (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m28122A5F1F50EF8394190DE6D5334ED44F08AA61_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF8AF3BE95FB3004BFAD9AE87BF35C557862905EA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// int looper = btns.Count;
		List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * L_0 = __this->get_btns_7();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mF8AF3BE95FB3004BFAD9AE87BF35C557862905EA_inline(L_0, /*hidden argument*/List_1_get_Count_mF8AF3BE95FB3004BFAD9AE87BF35C557862905EA_RuntimeMethod_var);
		V_0 = L_1;
		// int index = 0;
		V_1 = 0;
		// for(int i = 0; i < looper; i++)
		V_2 = 0;
		goto IL_0035;
	}

IL_0012:
	{
		// if(index == looper / 2)
		int32_t L_2 = V_1;
		int32_t L_3 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)((int32_t)L_3/(int32_t)2))))))
		{
			goto IL_001a;
		}
	}
	{
		// index = 0;
		V_1 = 0;
	}

IL_001a:
	{
		// gameCards.Add(cards[index]);
		List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * L_4 = __this->get_gameCards_6();
		SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* L_5 = __this->get_cards_5();
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_4);
		List_1_Add_m28122A5F1F50EF8394190DE6D5334ED44F08AA61(L_4, L_8, /*hidden argument*/List_1_Add_m28122A5F1F50EF8394190DE6D5334ED44F08AA61_RuntimeMethod_var);
		// index++;
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
		// for(int i = 0; i < looper; i++)
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0035:
	{
		// for(int i = 0; i < looper; i++)
		int32_t L_11 = V_2;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0012;
		}
	}
	{
		// Shuffle(gameCards);
		List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * L_13 = __this->get_gameCards_6();
		GameController_Shuffle_m0114AC713A67E9430EBD9BBDBA6B6642D772CDFD(__this, L_13, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameController::AddListeners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_AddListeners_mFF7E1C0DD92346D489067ABC86770B1B1DB4D155 (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD9C961426EFA6BBBFDCA42D46BCEA62283586500_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m7206FD3121D8BEA7DFCAD913FDAF3CA0F6821691_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m01B1280C927D8D132CE202C3E9F206F467D0346C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameController_U3CAddListenersU3Eb__25_0_mFD646199630585743BC9144DFA720A4AD5B02B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mBBC2C0EA0F269A56465D057A5C6467489C251CBC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t6D0827411121305C0C750B338E1BFB757246E871  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach(Button btn in btns)
		List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * L_0 = __this->get_btns_7();
		NullCheck(L_0);
		Enumerator_t6D0827411121305C0C750B338E1BFB757246E871  L_1;
		L_1 = List_1_GetEnumerator_mBBC2C0EA0F269A56465D057A5C6467489C251CBC(L_0, /*hidden argument*/List_1_GetEnumerator_mBBC2C0EA0F269A56465D057A5C6467489C251CBC_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002b;
		}

IL_000e:
		{
			// foreach(Button btn in btns)
			Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_2;
			L_2 = Enumerator_get_Current_m01B1280C927D8D132CE202C3E9F206F467D0346C_inline((Enumerator_t6D0827411121305C0C750B338E1BFB757246E871 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m01B1280C927D8D132CE202C3E9F206F467D0346C_RuntimeMethod_var);
			// btn.onClick.AddListener(() => PickACard());
			NullCheck(L_2);
			ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_3;
			L_3 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_2, /*hidden argument*/NULL);
			UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_4 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
			UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_4, __this, (intptr_t)((intptr_t)GameController_U3CAddListenersU3Eb__25_0_mFD646199630585743BC9144DFA720A4AD5B02B3B_RuntimeMethod_var), /*hidden argument*/NULL);
			NullCheck(L_3);
			UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_3, L_4, /*hidden argument*/NULL);
		}

IL_002b:
		{
			// foreach(Button btn in btns)
			bool L_5;
			L_5 = Enumerator_MoveNext_m7206FD3121D8BEA7DFCAD913FDAF3CA0F6821691((Enumerator_t6D0827411121305C0C750B338E1BFB757246E871 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m7206FD3121D8BEA7DFCAD913FDAF3CA0F6821691_RuntimeMethod_var);
			if (L_5)
			{
				goto IL_000e;
			}
		}

IL_0034:
		{
			IL2CPP_LEAVE(0x44, FINALLY_0036);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0036;
	}

FINALLY_0036:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mD9C961426EFA6BBBFDCA42D46BCEA62283586500((Enumerator_t6D0827411121305C0C750B338E1BFB757246E871 *)(&V_0), /*hidden argument*/Enumerator_Dispose_mD9C961426EFA6BBBFDCA42D46BCEA62283586500_RuntimeMethod_var);
		IL2CPP_END_FINALLY(54)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(54)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x44, IL_0044)
	}

IL_0044:
	{
		// }
		return;
	}
}
// System.Void GameController::PickACard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_PickACard_m691CD0186B0D3911E62851E9B2AECC6F083A7442 (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0137FA1532E52BCE2C354C7E3689B9833F3C7711_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2E8D9A40352859B1D5465D074732572FC364786E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string name = UnityEngine.EventSystems.EventSystem.current.currentSelectedGameObject.name;
		IL2CPP_RUNTIME_CLASS_INIT(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_il2cpp_TypeInfo_var);
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_0;
		L_0 = EventSystem_get_current_m4B9C11F490297AE55428038DACD240596D6CE5F2(/*hidden argument*/NULL);
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = EventSystem_get_currentSelectedGameObject_m999F9BFD4C20E2F00C56D4FED89602B6077EF70D_inline(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_1, /*hidden argument*/NULL);
		// if (!firstGuess)
		bool L_3 = __this->get_firstGuess_13();
		if (L_3)
		{
			goto IL_0082;
		}
	}
	{
		// firstGuess = true;
		__this->set_firstGuess_13((bool)1);
		// firstGuessIndex = int.Parse(UnityEngine.EventSystems.EventSystem.current.currentSelectedGameObject.name);
		IL2CPP_RUNTIME_CLASS_INIT(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_il2cpp_TypeInfo_var);
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_4;
		L_4 = EventSystem_get_current_m4B9C11F490297AE55428038DACD240596D6CE5F2(/*hidden argument*/NULL);
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = EventSystem_get_currentSelectedGameObject_m999F9BFD4C20E2F00C56D4FED89602B6077EF70D_inline(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_5, /*hidden argument*/NULL);
		int32_t L_7;
		L_7 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_6, /*hidden argument*/NULL);
		__this->set_firstGuessIndex_19(L_7);
		// firstGuessCard = gameCards[firstGuessIndex].name;
		List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * L_8 = __this->get_gameCards_6();
		int32_t L_9 = __this->get_firstGuessIndex_19();
		NullCheck(L_8);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_10;
		L_10 = List_1_get_Item_m2E8D9A40352859B1D5465D074732572FC364786E_inline(L_8, L_9, /*hidden argument*/List_1_get_Item_m2E8D9A40352859B1D5465D074732572FC364786E_RuntimeMethod_var);
		NullCheck(L_10);
		String_t* L_11;
		L_11 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_10, /*hidden argument*/NULL);
		__this->set_firstGuessCard_21(L_11);
		// btns[firstGuessIndex].image.sprite = gameCards[firstGuessIndex];
		List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * L_12 = __this->get_btns_7();
		int32_t L_13 = __this->get_firstGuessIndex_19();
		NullCheck(L_12);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_14;
		L_14 = List_1_get_Item_m0137FA1532E52BCE2C354C7E3689B9833F3C7711_inline(L_12, L_13, /*hidden argument*/List_1_get_Item_m0137FA1532E52BCE2C354C7E3689B9833F3C7711_RuntimeMethod_var);
		NullCheck(L_14);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_15;
		L_15 = Selectable_get_image_mAB45C107C7C858ECBEFFFF540B8C69746BB6C6FE(L_14, /*hidden argument*/NULL);
		List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * L_16 = __this->get_gameCards_6();
		int32_t L_17 = __this->get_firstGuessIndex_19();
		NullCheck(L_16);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_18;
		L_18 = List_1_get_Item_m2E8D9A40352859B1D5465D074732572FC364786E_inline(L_16, L_17, /*hidden argument*/List_1_get_Item_m2E8D9A40352859B1D5465D074732572FC364786E_RuntimeMethod_var);
		NullCheck(L_15);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_15, L_18, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0082:
	{
		// else if (!secondGuess)
		bool L_19 = __this->get_secondGuess_14();
		if (L_19)
		{
			goto IL_0111;
		}
	}
	{
		// secondGuess = true;
		__this->set_secondGuess_14((bool)1);
		// secondGuessIndex = int.Parse(UnityEngine.EventSystems.EventSystem.current.currentSelectedGameObject.name);
		IL2CPP_RUNTIME_CLASS_INIT(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_il2cpp_TypeInfo_var);
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_20;
		L_20 = EventSystem_get_current_m4B9C11F490297AE55428038DACD240596D6CE5F2(/*hidden argument*/NULL);
		NullCheck(L_20);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21;
		L_21 = EventSystem_get_currentSelectedGameObject_m999F9BFD4C20E2F00C56D4FED89602B6077EF70D_inline(L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		String_t* L_22;
		L_22 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_21, /*hidden argument*/NULL);
		int32_t L_23;
		L_23 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_22, /*hidden argument*/NULL);
		__this->set_secondGuessIndex_20(L_23);
		// secondGuessCard = gameCards[secondGuessIndex].name;
		List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * L_24 = __this->get_gameCards_6();
		int32_t L_25 = __this->get_secondGuessIndex_20();
		NullCheck(L_24);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_26;
		L_26 = List_1_get_Item_m2E8D9A40352859B1D5465D074732572FC364786E_inline(L_24, L_25, /*hidden argument*/List_1_get_Item_m2E8D9A40352859B1D5465D074732572FC364786E_RuntimeMethod_var);
		NullCheck(L_26);
		String_t* L_27;
		L_27 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_26, /*hidden argument*/NULL);
		__this->set_secondGuessCard_22(L_27);
		// btns[secondGuessIndex].image.sprite = gameCards[secondGuessIndex];
		List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * L_28 = __this->get_btns_7();
		int32_t L_29 = __this->get_secondGuessIndex_20();
		NullCheck(L_28);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_30;
		L_30 = List_1_get_Item_m0137FA1532E52BCE2C354C7E3689B9833F3C7711_inline(L_28, L_29, /*hidden argument*/List_1_get_Item_m0137FA1532E52BCE2C354C7E3689B9833F3C7711_RuntimeMethod_var);
		NullCheck(L_30);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_31;
		L_31 = Selectable_get_image_mAB45C107C7C858ECBEFFFF540B8C69746BB6C6FE(L_30, /*hidden argument*/NULL);
		List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * L_32 = __this->get_gameCards_6();
		int32_t L_33 = __this->get_secondGuessIndex_20();
		NullCheck(L_32);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_34;
		L_34 = List_1_get_Item_m2E8D9A40352859B1D5465D074732572FC364786E_inline(L_32, L_33, /*hidden argument*/List_1_get_Item_m2E8D9A40352859B1D5465D074732572FC364786E_RuntimeMethod_var);
		NullCheck(L_31);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_31, L_34, /*hidden argument*/NULL);
		// countGuess++;
		int32_t L_35 = __this->get_countGuess_16();
		__this->set_countGuess_16(((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1)));
		// StartCoroutine(CheckIfTheCardsMatch());
		RuntimeObject* L_36;
		L_36 = GameController_CheckIfTheCardsMatch_mD7A8A5332C69E4A441B63443A9C04DF2F944FAD8(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_37;
		L_37 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_36, /*hidden argument*/NULL);
	}

IL_0111:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator GameController::CheckIfTheCardsMatch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameController_CheckIfTheCardsMatch_mD7A8A5332C69E4A441B63443A9C04DF2F944FAD8 (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCheckIfTheCardsMatchU3Ed__27_tAFEE8962B9D3C4649B097434888F94AAC8A83783_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCheckIfTheCardsMatchU3Ed__27_tAFEE8962B9D3C4649B097434888F94AAC8A83783 * L_0 = (U3CCheckIfTheCardsMatchU3Ed__27_tAFEE8962B9D3C4649B097434888F94AAC8A83783 *)il2cpp_codegen_object_new(U3CCheckIfTheCardsMatchU3Ed__27_tAFEE8962B9D3C4649B097434888F94AAC8A83783_il2cpp_TypeInfo_var);
		U3CCheckIfTheCardsMatchU3Ed__27__ctor_m94D7B824E10AFA5539D97103044DC975BBBC936B(L_0, 0, /*hidden argument*/NULL);
		U3CCheckIfTheCardsMatchU3Ed__27_tAFEE8962B9D3C4649B097434888F94AAC8A83783 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void GameController::CheckIfTheGameIsFinished()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_CheckIfTheGameIsFinished_mD0A03B6C47DFCD5D2153FA11D03F89225FD25456 (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1EB5DD321790BE4414A534B410AF17DA3065E4B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36C835822E02A87BE4FE460E679578AC0605E7EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6BAB133616E5FD4BD4EE33B976CCE842C8E612C7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// countCorrectGuesses++;
		int32_t L_0 = __this->get_countCorrectGuesses_17();
		__this->set_countCorrectGuesses_17(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		// if(countCorrectGuesses == gameGuesses)
		int32_t L_1 = __this->get_countCorrectGuesses_17();
		int32_t L_2 = __this->get_gameGuesses_18();
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_004b;
		}
	}
	{
		// Debug.Log("Game Finished");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral36C835822E02A87BE4FE460E679578AC0605E7EB, /*hidden argument*/NULL);
		// Debug.Log("It took you "+ countGuess + " many guess(es) to finish the game");
		int32_t* L_3 = __this->get_address_of_countGuess_16();
		String_t* L_4;
		L_4 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_3, /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral1EB5DD321790BE4414A534B410AF17DA3065E4B0, L_4, _stringLiteral6BAB133616E5FD4BD4EE33B976CCE842C8E612C7, /*hidden argument*/NULL);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_5, /*hidden argument*/NULL);
		// gameIsFinished();
		GameController_gameIsFinished_m02DAA35EB82A262389A983189318600C7E88F670(__this, /*hidden argument*/NULL);
	}

IL_004b:
	{
		// }
		return;
	}
}
// System.Void GameController::Shuffle(System.Collections.Generic.List`1<UnityEngine.Sprite>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_Shuffle_m0114AC713A67E9430EBD9BBDBA6B6642D772CDFD (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * ___list0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF608E717F324700CEA814E2E1E7B1DA9F08CAB54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2E8D9A40352859B1D5465D074732572FC364786E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_mD3ACD749DA26F9EC1DE8703DAE9B6A7B6A45429B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		// for(int i = 0; i < list.Count; i++)
		V_0 = 0;
		goto IL_0033;
	}

IL_0004:
	{
		// Sprite temp = list[i];
		List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * L_0 = ___list0;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_2;
		L_2 = List_1_get_Item_m2E8D9A40352859B1D5465D074732572FC364786E_inline(L_0, L_1, /*hidden argument*/List_1_get_Item_m2E8D9A40352859B1D5465D074732572FC364786E_RuntimeMethod_var);
		V_1 = L_2;
		// int randomIndex = Random.Range(0, list.Count);
		List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * L_3 = ___list0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_mF608E717F324700CEA814E2E1E7B1DA9F08CAB54_inline(L_3, /*hidden argument*/List_1_get_Count_mF608E717F324700CEA814E2E1E7B1DA9F08CAB54_RuntimeMethod_var);
		int32_t L_5;
		L_5 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		// list[i] = list[randomIndex];
		List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * L_6 = ___list0;
		int32_t L_7 = V_0;
		List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * L_8 = ___list0;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_10;
		L_10 = List_1_get_Item_m2E8D9A40352859B1D5465D074732572FC364786E_inline(L_8, L_9, /*hidden argument*/List_1_get_Item_m2E8D9A40352859B1D5465D074732572FC364786E_RuntimeMethod_var);
		NullCheck(L_6);
		List_1_set_Item_mD3ACD749DA26F9EC1DE8703DAE9B6A7B6A45429B(L_6, L_7, L_10, /*hidden argument*/List_1_set_Item_mD3ACD749DA26F9EC1DE8703DAE9B6A7B6A45429B_RuntimeMethod_var);
		// list[randomIndex] = temp;
		List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * L_11 = ___list0;
		int32_t L_12 = V_2;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_13 = V_1;
		NullCheck(L_11);
		List_1_set_Item_mD3ACD749DA26F9EC1DE8703DAE9B6A7B6A45429B(L_11, L_12, L_13, /*hidden argument*/List_1_set_Item_mD3ACD749DA26F9EC1DE8703DAE9B6A7B6A45429B_RuntimeMethod_var);
		// for(int i = 0; i < list.Count; i++)
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0033:
	{
		// for(int i = 0; i < list.Count; i++)
		int32_t L_15 = V_0;
		List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * L_16 = ___list0;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = List_1_get_Count_mF608E717F324700CEA814E2E1E7B1DA9F08CAB54_inline(L_16, /*hidden argument*/List_1_get_Count_mF608E717F324700CEA814E2E1E7B1DA9F08CAB54_RuntimeMethod_var);
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void GameController::SavePrefs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_SavePrefs_m18DEA16CAB189D03AE83A4765259A6A4F18BEBD9 (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral336B029D04847DC4F36985E1B89D1A0B11D299A3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LoadPrefs();
		GameController_LoadPrefs_mEEA46BC0C4D09003402B23440C6F01FF414008A2(__this, /*hidden argument*/NULL);
		// if (recordGuess != 0 && countGuess < recordGuess)
		int32_t L_0 = __this->get_recordGuess_15();
		if (!L_0)
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_1 = __this->get_countGuess_16();
		int32_t L_2 = __this->get_recordGuess_15();
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0032;
		}
	}
	{
		// PlayerPrefs.SetInt(ScoreKey, countGuess);
		int32_t L_3 = __this->get_countGuess_16();
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral336B029D04847DC4F36985E1B89D1A0B11D299A3, L_3, /*hidden argument*/NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m2C1E628FA335095CD88D0DA1CB50ACC924667EEC(/*hidden argument*/NULL);
		// }
		return;
	}

IL_0032:
	{
		// PlayerPrefs.SetInt(ScoreKey, countGuess);
		int32_t L_4 = __this->get_countGuess_16();
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral336B029D04847DC4F36985E1B89D1A0B11D299A3, L_4, /*hidden argument*/NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m2C1E628FA335095CD88D0DA1CB50ACC924667EEC(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameController::LoadPrefs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_LoadPrefs_mEEA46BC0C4D09003402B23440C6F01FF414008A2 (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral336B029D04847DC4F36985E1B89D1A0B11D299A3);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// var score = PlayerPrefs.GetInt(ScoreKey, 0);
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14(_stringLiteral336B029D04847DC4F36985E1B89D1A0B11D299A3, 0, /*hidden argument*/NULL);
		V_0 = L_0;
		// recordGuess = score;
		int32_t L_1 = V_0;
		__this->set_recordGuess_15(L_1);
		// }
		return;
	}
}
// System.Void GameController::gameIsFinished()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_gameIsFinished_m02DAA35EB82A262389A983189318600C7E88F670 (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, const RuntimeMethod* method)
{
	{
		// SavePrefs();
		GameController_SavePrefs_m18DEA16CAB189D03AE83A4765259A6A4F18BEBD9(__this, /*hidden argument*/NULL);
		// LoadPrefs();
		GameController_LoadPrefs_mEEA46BC0C4D09003402B23440C6F01FF414008A2(__this, /*hidden argument*/NULL);
		// SetRecordText();
		GameController_SetRecordText_m3486A0B4CA585093AFC14A080632235496200FF3(__this, /*hidden argument*/NULL);
		// recordPanel.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_recordPanel_9();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameController::OnApplicationQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_OnApplicationQuit_mB561B1825446F247C52B8B325D16A3A71FF4B673 (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, const RuntimeMethod* method)
{
	{
		// SavePrefs();
		GameController_SavePrefs_m18DEA16CAB189D03AE83A4765259A6A4F18BEBD9(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController__ctor_m9D952052C0A7234373FA5531292FCA8855BE2643 (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m4CCA077ACAB11548CE7A37FE67B013E1E7497ACD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA1744A70D10E32296ECF132BFF63A811CB50A795_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<Sprite> gameCards = new List<Sprite>();
		List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * L_0 = (List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 *)il2cpp_codegen_object_new(List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880_il2cpp_TypeInfo_var);
		List_1__ctor_m4CCA077ACAB11548CE7A37FE67B013E1E7497ACD(L_0, /*hidden argument*/List_1__ctor_m4CCA077ACAB11548CE7A37FE67B013E1E7497ACD_RuntimeMethod_var);
		__this->set_gameCards_6(L_0);
		// public List<Button> btns = new List<Button>();
		List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * L_1 = (List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E *)il2cpp_codegen_object_new(List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E_il2cpp_TypeInfo_var);
		List_1__ctor_mA1744A70D10E32296ECF132BFF63A811CB50A795(L_1, /*hidden argument*/List_1__ctor_mA1744A70D10E32296ECF132BFF63A811CB50A795_RuntimeMethod_var);
		__this->set_btns_7(L_1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameController::<AddListeners>b__25_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_U3CAddListenersU3Eb__25_0_mFD646199630585743BC9144DFA720A4AD5B02B3B (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, const RuntimeMethod* method)
{
	{
		// btn.onClick.AddListener(() => PickACard());
		GameController_PickACard_m691CD0186B0D3911E62851E9B2AECC6F083A7442(__this, /*hidden argument*/NULL);
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
// System.Void GetGPS::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetGPS_Start_m30AD33DA92EE1D1C42979AE2E16B62DFD1FB0A65 (GetGPS_tD132A0E0C3FB5649A8D89F4CC2F4348967F1F5C0 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void GetGPS::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetGPS_OnGUI_m4B1DAD0FB46767700E311777ACF3F88A4CFD7E4E (GetGPS_tD132A0E0C3FB5649A8D89F4CC2F4348967F1F5C0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21AF82E5F038AB7BB7D3EBB280CC64A020D51D11);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DCD588B57B1C6C7CC9DB14D0A00F4F78FAE5248);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F6FF6CD6EB3EA52B18703D83FA37B118DB14C2B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB06EE00770B2EB0FE33E9670047E763ABF99ABBD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE19E27419398838F81D15CC2CD8788E53103A617);
		s_Il2CppMethodInitialized = true;
	}
	LocationInfo_t7FC872AE105FF29421AFC8BBEE071F6C36E44769  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	double V_2 = 0.0;
	{
		// GUI.skin.label.fontSize = 28;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * L_0;
		L_0 = GUI_get_skin_mCD2A03F408ABBA7816C52148D92A8DC836FBDE2F(/*hidden argument*/NULL);
		NullCheck(L_0);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_1;
		L_1 = GUISkin_get_label_m6F41B6A214AE6407DE5C567225828A8627A3AD83(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GUIStyle_set_fontSize_mFA02B9950E09F880976FD2FF646FB8AAEED1C5C6(L_1, ((int32_t)28), /*hidden argument*/NULL);
		// GUI.Label(new Rect(20, 20, 600, 48), this.gps_info);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_2), (20.0f), (20.0f), (600.0f), (48.0f), /*hidden argument*/NULL);
		String_t* L_3 = __this->get_gps_info_4();
		GUI_Label_mC6571F167DA5145CE2BDBF43661290662EA9D631(L_2, L_3, /*hidden argument*/NULL);
		// GUI.Label(new Rect(20, 50, 600, 48), this.flash_num.ToString());
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_4), (20.0f), (50.0f), (600.0f), (48.0f), /*hidden argument*/NULL);
		int32_t* L_5 = __this->get_address_of_flash_num_5();
		String_t* L_6;
		L_6 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_5, /*hidden argument*/NULL);
		GUI_Label_mC6571F167DA5145CE2BDBF43661290662EA9D631(L_4, L_6, /*hidden argument*/NULL);
		// GUI.skin.button.fontSize = 50;
		GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * L_7;
		L_7 = GUI_get_skin_mCD2A03F408ABBA7816C52148D92A8DC836FBDE2F(/*hidden argument*/NULL);
		NullCheck(L_7);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_8;
		L_8 = GUISkin_get_button_m03559A64FAC2479F2D3753DD559FF22273602835(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		GUIStyle_set_fontSize_mFA02B9950E09F880976FD2FF646FB8AAEED1C5C6(L_8, ((int32_t)50), /*hidden argument*/NULL);
		// if (GUI.Button(new Rect(Screen.width / 2 - 110, 200, 220, 85), "GPS定位"))
		int32_t L_9;
		L_9 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_10), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)L_9/(int32_t)2)), (int32_t)((int32_t)110))))), (200.0f), (220.0f), (85.0f), /*hidden argument*/NULL);
		bool L_11;
		L_11 = GUI_Button_m668EE382521BDEA241D719A9CF39B6672E2CA23F(L_10, _stringLiteral21AF82E5F038AB7BB7D3EBB280CC64A020D51D11, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_00a7;
		}
	}
	{
		//             StartCoroutine(StartGPS());
		RuntimeObject* L_12;
		L_12 = GetGPS_StartGPS_mF5BD651FC84448CB78128C45D0F903B7DF06EFCD(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_13;
		L_13 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_12, /*hidden argument*/NULL);
	}

IL_00a7:
	{
		// if (GUI.Button(new Rect(Screen.width / 2 - 110, 500, 220, 85), "刷新GPS"))
		int32_t L_14;
		L_14 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_15;
		memset((&L_15), 0, sizeof(L_15));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_15), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)L_14/(int32_t)2)), (int32_t)((int32_t)110))))), (500.0f), (220.0f), (85.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = GUI_Button_m668EE382521BDEA241D719A9CF39B6672E2CA23F(L_15, _stringLiteralE19E27419398838F81D15CC2CD8788E53103A617, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_015c;
		}
	}
	{
		// this.gps_info = "N:" + Input.location.lastData.latitude + " E:" + Input.location.lastData.longitude;
		LocationService_tDCB7C3AA7A10C4727D49676FD3A902F48C27F855 * L_17;
		L_17 = Input_get_location_m5D0AE1016E410D3D7411904D0706456DE383F4E5(/*hidden argument*/NULL);
		NullCheck(L_17);
		LocationInfo_t7FC872AE105FF29421AFC8BBEE071F6C36E44769  L_18;
		L_18 = LocationService_get_lastData_mD6EAC681E09427969B18EEC9B85DA43633EFEA1F(L_17, /*hidden argument*/NULL);
		V_0 = L_18;
		float L_19;
		L_19 = LocationInfo_get_latitude_m09F2DFBDB716C46B0ECFD11F6A5DB2B93B06174B((LocationInfo_t7FC872AE105FF29421AFC8BBEE071F6C36E44769 *)(&V_0), /*hidden argument*/NULL);
		V_1 = L_19;
		String_t* L_20;
		L_20 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_1), /*hidden argument*/NULL);
		LocationService_tDCB7C3AA7A10C4727D49676FD3A902F48C27F855 * L_21;
		L_21 = Input_get_location_m5D0AE1016E410D3D7411904D0706456DE383F4E5(/*hidden argument*/NULL);
		NullCheck(L_21);
		LocationInfo_t7FC872AE105FF29421AFC8BBEE071F6C36E44769  L_22;
		L_22 = LocationService_get_lastData_mD6EAC681E09427969B18EEC9B85DA43633EFEA1F(L_21, /*hidden argument*/NULL);
		V_0 = L_22;
		float L_23;
		L_23 = LocationInfo_get_longitude_mD0F77FFCF02AFB63058C77A4EBAE228528F57A50((LocationInfo_t7FC872AE105FF29421AFC8BBEE071F6C36E44769 *)(&V_0), /*hidden argument*/NULL);
		V_1 = L_23;
		String_t* L_24;
		L_24 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_1), /*hidden argument*/NULL);
		String_t* L_25;
		L_25 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteral5DCD588B57B1C6C7CC9DB14D0A00F4F78FAE5248, L_20, _stringLiteralB06EE00770B2EB0FE33E9670047E763ABF99ABBD, L_24, /*hidden argument*/NULL);
		__this->set_gps_info_4(L_25);
		// this.gps_info = this.gps_info + " Time:" + Input.location.lastData.timestamp;
		String_t* L_26 = __this->get_gps_info_4();
		LocationService_tDCB7C3AA7A10C4727D49676FD3A902F48C27F855 * L_27;
		L_27 = Input_get_location_m5D0AE1016E410D3D7411904D0706456DE383F4E5(/*hidden argument*/NULL);
		NullCheck(L_27);
		LocationInfo_t7FC872AE105FF29421AFC8BBEE071F6C36E44769  L_28;
		L_28 = LocationService_get_lastData_mD6EAC681E09427969B18EEC9B85DA43633EFEA1F(L_27, /*hidden argument*/NULL);
		V_0 = L_28;
		double L_29;
		L_29 = LocationInfo_get_timestamp_m16DAEBB8C94F2E000E874254FA0FF6BD0E02AFE2((LocationInfo_t7FC872AE105FF29421AFC8BBEE071F6C36E44769 *)(&V_0), /*hidden argument*/NULL);
		V_2 = L_29;
		String_t* L_30;
		L_30 = Double_ToString_m87E4A4DC004A167CF0AE1F2D271BC20A708CE57D((double*)(&V_2), /*hidden argument*/NULL);
		String_t* L_31;
		L_31 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_26, _stringLiteral6F6FF6CD6EB3EA52B18703D83FA37B118DB14C2B, L_30, /*hidden argument*/NULL);
		__this->set_gps_info_4(L_31);
		// this.flash_num += 1;
		int32_t L_32 = __this->get_flash_num_5();
		__this->set_flash_num_5(((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1)));
	}

IL_015c:
	{
		// }
		return;
	}
}
// System.Void GetGPS::StopGPS()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetGPS_StopGPS_mE2F022CBD5E7CE74372701E628EFC8B0CDD845B4 (GetGPS_tD132A0E0C3FB5649A8D89F4CC2F4348967F1F5C0 * __this, const RuntimeMethod* method)
{
	{
		// Input.location.Stop();
		LocationService_tDCB7C3AA7A10C4727D49676FD3A902F48C27F855 * L_0;
		L_0 = Input_get_location_m5D0AE1016E410D3D7411904D0706456DE383F4E5(/*hidden argument*/NULL);
		NullCheck(L_0);
		LocationService_Stop_m73B68E5F05367F0F2455DF56C30EDC9F0848C46A(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator GetGPS::StartGPS()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GetGPS_StartGPS_mF5BD651FC84448CB78128C45D0F903B7DF06EFCD (GetGPS_tD132A0E0C3FB5649A8D89F4CC2F4348967F1F5C0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartGPSU3Ed__5_t2FF10F0DE079CEBBEFD66B2B05DA3AD2C111B5E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStartGPSU3Ed__5_t2FF10F0DE079CEBBEFD66B2B05DA3AD2C111B5E5 * L_0 = (U3CStartGPSU3Ed__5_t2FF10F0DE079CEBBEFD66B2B05DA3AD2C111B5E5 *)il2cpp_codegen_object_new(U3CStartGPSU3Ed__5_t2FF10F0DE079CEBBEFD66B2B05DA3AD2C111B5E5_il2cpp_TypeInfo_var);
		U3CStartGPSU3Ed__5__ctor_mA6C34C1F778BE8DE25884861BC0BE54692AEDE9C(L_0, 0, /*hidden argument*/NULL);
		U3CStartGPSU3Ed__5_t2FF10F0DE079CEBBEFD66B2B05DA3AD2C111B5E5 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void GetGPS::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetGPS__ctor_mBFFC5119B727983B5642DA604B7EAD88D19F0BFB (GetGPS_tD132A0E0C3FB5649A8D89F4CC2F4348967F1F5C0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string gps_info = "";//GPS的信息
		__this->set_gps_info_4(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		//     public int flash_num = 1;//更新的次数
		__this->set_flash_num_5(1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void LeaderBoardManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeaderBoardManager_Start_m0D9A50241C7D43CCBBFC2535D8A3CA5ACD8FB47D (LeaderBoardManager_t87404B730BDD0E9A35EF39995ADE28BBE797C023 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDCB356DD627DAE1DA580443D721E779B886E69DF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.dl = dreamloLeaderBoard.GetSceneDreamloLeaderboard();
		dreamloLeaderBoard_t65A12FD2CBA7E92B2703B98E99DCAEB25C7AEBFD * L_0;
		L_0 = dreamloLeaderBoard_GetSceneDreamloLeaderboard_mC07124272D9B8F318A62A89087ABA5DC0E7D5B16(/*hidden argument*/NULL);
		__this->set_dl_4(L_0);
		// dl.GetScores();
		dreamloLeaderBoard_t65A12FD2CBA7E92B2703B98E99DCAEB25C7AEBFD * L_1 = __this->get_dl_4();
		NullCheck(L_1);
		dreamloLeaderBoard_GetScores_mC51693E5538E74EBCCE5F52049CC611B5F16EB60(L_1, /*hidden argument*/NULL);
		// LoadPrefs();
		LeaderBoardManager_LoadPrefs_m0A9E8761F8525BC290819DF7C407DAC10FBB707C(__this, /*hidden argument*/NULL);
		// recordText.text = "Finished in turn " + recordScore;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = __this->get_recordText_7();
		int32_t* L_3 = __this->get_address_of_recordScore_16();
		String_t* L_4;
		L_4 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_3, /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralDCB356DD627DAE1DA580443D721E779B886E69DF, L_4, /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_5);
		// StartCoroutine(StartGPS());
		RuntimeObject* L_6;
		L_6 = LeaderBoardManager_StartGPS_mF21F983744E3C032EC7B260514EC16553245C0A5(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_7;
		L_7 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LeaderBoardManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeaderBoardManager_Update_mE4FD71C6DFCC81BFD2281DDBC9E2E51B49F5CFE0 (LeaderBoardManager_t87404B730BDD0E9A35EF39995ADE28BBE797C023 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6BBCE0586E4C6065C90FA9484A516263C5192008_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckLocation();
		LeaderBoardManager_CheckLocation_mA6FDB87933DBD1994FF50FC3165AA0D313217547(__this, /*hidden argument*/NULL);
		// scoreList = dl.ToListHighToLow();
		dreamloLeaderBoard_t65A12FD2CBA7E92B2703B98E99DCAEB25C7AEBFD * L_0 = __this->get_dl_4();
		NullCheck(L_0);
		List_1_tD28329A66242A4236EA37A1950A4660B3F9AF1F7 * L_1;
		L_1 = dreamloLeaderBoard_ToListHighToLow_mD18CBCF1D84A902BC1E0F242D388D7BD9DBAD60F(L_0, /*hidden argument*/NULL);
		__this->set_scoreList_22(L_1);
		// if (scoreList.Count > 0 && refreshing == true)
		List_1_tD28329A66242A4236EA37A1950A4660B3F9AF1F7 * L_2 = __this->get_scoreList_22();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m6BBCE0586E4C6065C90FA9484A516263C5192008_inline(L_2, /*hidden argument*/List_1_get_Count_m6BBCE0586E4C6065C90FA9484A516263C5192008_RuntimeMethod_var);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		bool L_4 = __this->get_refreshing_13();
		if (!L_4)
		{
			goto IL_003a;
		}
	}
	{
		// DisplayList();
		LeaderBoardManager_DisplayList_m92FE36669A07E5C7FC871E2C371257081C34B839(__this, /*hidden argument*/NULL);
		// refreshing = false;
		__this->set_refreshing_13((bool)0);
	}

IL_003a:
	{
		// if (onSpot == false)
		bool L_5 = __this->get_onSpot_12();
		if (L_5)
		{
			goto IL_004f;
		}
	}
	{
		// uploadBtn.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_uploadBtn_11();
		NullCheck(L_6);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_6, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}

IL_004f:
	{
		// else if (onSpot == true)
		bool L_7 = __this->get_onSpot_12();
		if (!L_7)
		{
			goto IL_0063;
		}
	}
	{
		// uploadBtn.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_uploadBtn_11();
		NullCheck(L_8);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_8, (bool)1, /*hidden argument*/NULL);
	}

IL_0063:
	{
		// }
		return;
	}
}
// System.Void LeaderBoardManager::Refresh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeaderBoardManager_Refresh_mCB5BC345FCF8D5709DCDE05340D2BB18F774723A (LeaderBoardManager_t87404B730BDD0E9A35EF39995ADE28BBE797C023 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void LeaderBoardManager::DisplayList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeaderBoardManager_DisplayList_m92FE36669A07E5C7FC871E2C371257081C34B839 (LeaderBoardManager_t87404B730BDD0E9A35EF39995ADE28BBE797C023 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m169C1B85766C1F9F786A0178DD9817577841329C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m9A094C777FDE49249BB235EA98E96388A5F15AA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m03121030C14973605EA1EDD6F9CF9082E3C68DDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisScoreCell_t2B4A18682749BC3457B08AAD2BA80F12415FCE54_m6169DD6DD87A104A4BD627F2F25104BD1B449D34_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m4A67E1D9039071BEE37213CD4CD4296DA50A00AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m30AC25EDC1317A0930F223DE147F170FEF22A612_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Score_t446577E2BC06794D97BE081C982A0D1F51F12D38_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CC44E0AC8D686D0F074F3448B47E371A8CEBD12);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t2E3456D25032B4E449696F1A7AF76F0B6EAE54FB  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Score_t446577E2BC06794D97BE081C982A0D1F51F12D38  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// Debug.Log(scoreList[0]);
		List_1_tD28329A66242A4236EA37A1950A4660B3F9AF1F7 * L_0 = __this->get_scoreList_22();
		NullCheck(L_0);
		Score_t446577E2BC06794D97BE081C982A0D1F51F12D38  L_1;
		L_1 = List_1_get_Item_m30AC25EDC1317A0930F223DE147F170FEF22A612_inline(L_0, 0, /*hidden argument*/List_1_get_Item_m30AC25EDC1317A0930F223DE147F170FEF22A612_RuntimeMethod_var);
		Score_t446577E2BC06794D97BE081C982A0D1F51F12D38  L_2 = L_1;
		RuntimeObject * L_3 = Box(Score_t446577E2BC06794D97BE081C982A0D1F51F12D38_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_3, /*hidden argument*/NULL);
		// int maxToDisplay = maxCounts;
		int32_t L_4 = __this->get_maxCounts_9();
		// foreach (var currentScore in scoreList)
		List_1_tD28329A66242A4236EA37A1950A4660B3F9AF1F7 * L_5 = __this->get_scoreList_22();
		NullCheck(L_5);
		Enumerator_t2E3456D25032B4E449696F1A7AF76F0B6EAE54FB  L_6;
		L_6 = List_1_GetEnumerator_m4A67E1D9039071BEE37213CD4CD4296DA50A00AF(L_5, /*hidden argument*/List_1_GetEnumerator_m4A67E1D9039071BEE37213CD4CD4296DA50A00AF_RuntimeMethod_var);
		V_0 = L_6;
	}

IL_0029:
	try
	{ // begin try (depth: 1)
		{
			goto IL_007d;
		}

IL_002b:
		{
			// foreach (var currentScore in scoreList)
			Score_t446577E2BC06794D97BE081C982A0D1F51F12D38  L_7;
			L_7 = Enumerator_get_Current_m03121030C14973605EA1EDD6F9CF9082E3C68DDF_inline((Enumerator_t2E3456D25032B4E449696F1A7AF76F0B6EAE54FB *)(&V_0), /*hidden argument*/Enumerator_get_Current_m03121030C14973605EA1EDD6F9CF9082E3C68DDF_RuntimeMethod_var);
			V_1 = L_7;
			// count++;
			int32_t L_8 = __this->get_count_18();
			__this->set_count_18(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1)));
			// Debug.Log(count);
			int32_t L_9 = __this->get_count_18();
			int32_t L_10 = L_9;
			RuntimeObject * L_11 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_10);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_11, /*hidden argument*/NULL);
			// if (count > maxCounts)
			int32_t L_12 = __this->get_count_18();
			int32_t L_13 = __this->get_maxCounts_9();
			if ((((int32_t)L_12) <= ((int32_t)L_13)))
			{
				goto IL_0061;
			}
		}

IL_005f:
		{
			// break;
			IL2CPP_LEAVE(0x96, FINALLY_0088);
		}

IL_0061:
		{
			// var cell = Instantiate(scoreCellPrefab, transform);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = __this->get_scoreCellPrefab_8();
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
			L_15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
			L_16 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8(L_14, L_15, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
			// cell.GetComponent<ScoreCell>().SetModel(currentScore);
			NullCheck(L_16);
			ScoreCell_t2B4A18682749BC3457B08AAD2BA80F12415FCE54 * L_17;
			L_17 = GameObject_GetComponent_TisScoreCell_t2B4A18682749BC3457B08AAD2BA80F12415FCE54_m6169DD6DD87A104A4BD627F2F25104BD1B449D34(L_16, /*hidden argument*/GameObject_GetComponent_TisScoreCell_t2B4A18682749BC3457B08AAD2BA80F12415FCE54_m6169DD6DD87A104A4BD627F2F25104BD1B449D34_RuntimeMethod_var);
			Score_t446577E2BC06794D97BE081C982A0D1F51F12D38  L_18 = V_1;
			NullCheck(L_17);
			ScoreCell_SetModel_mEAF132D88B3350B96AD1C859D69298C8BFE07F44(L_17, L_18, /*hidden argument*/NULL);
		}

IL_007d:
		{
			// foreach (var currentScore in scoreList)
			bool L_19;
			L_19 = Enumerator_MoveNext_m9A094C777FDE49249BB235EA98E96388A5F15AA1((Enumerator_t2E3456D25032B4E449696F1A7AF76F0B6EAE54FB *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m9A094C777FDE49249BB235EA98E96388A5F15AA1_RuntimeMethod_var);
			if (L_19)
			{
				goto IL_002b;
			}
		}

IL_0086:
		{
			IL2CPP_LEAVE(0x96, FINALLY_0088);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0088;
	}

FINALLY_0088:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m169C1B85766C1F9F786A0178DD9817577841329C((Enumerator_t2E3456D25032B4E449696F1A7AF76F0B6EAE54FB *)(&V_0), /*hidden argument*/Enumerator_Dispose_m169C1B85766C1F9F786A0178DD9817577841329C_RuntimeMethod_var);
		IL2CPP_END_FINALLY(136)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(136)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x96, IL_0096)
	}

IL_0096:
	{
		// Debug.Log("finished");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral5CC44E0AC8D686D0F074F3448B47E371A8CEBD12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LeaderBoardManager::UploadRecord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeaderBoardManager_UploadRecord_mB5F631C9FF6F19F8B936C58C2AEBBB4E4056F5E4 (LeaderBoardManager_t87404B730BDD0E9A35EF39995ADE28BBE797C023 * __this, const RuntimeMethod* method)
{
	{
		// LoadPrefs();
		LeaderBoardManager_LoadPrefs_m0A9E8761F8525BC290819DF7C407DAC10FBB707C(__this, /*hidden argument*/NULL);
		// this.playerName = inputName.text;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_inputName_10();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_0);
		__this->set_playerName_17(L_1);
		// dl.AddScore(this.playerName, opposite * recordScore);
		dreamloLeaderBoard_t65A12FD2CBA7E92B2703B98E99DCAEB25C7AEBFD * L_2 = __this->get_dl_4();
		String_t* L_3 = __this->get_playerName_17();
		int32_t L_4 = __this->get_opposite_19();
		int32_t L_5 = __this->get_recordScore_16();
		NullCheck(L_2);
		dreamloLeaderBoard_AddScore_m057228BED5D1A7A48436E94311B9A6FDCCCE3FFA(L_2, L_3, ((int32_t)il2cpp_codegen_multiply((int32_t)L_4, (int32_t)L_5)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LeaderBoardManager::LoadPrefs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeaderBoardManager_LoadPrefs_m0A9E8761F8525BC290819DF7C407DAC10FBB707C (LeaderBoardManager_t87404B730BDD0E9A35EF39995ADE28BBE797C023 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral336B029D04847DC4F36985E1B89D1A0B11D299A3);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// var score = PlayerPrefs.GetInt(ScoreKey);
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral336B029D04847DC4F36985E1B89D1A0B11D299A3, /*hidden argument*/NULL);
		V_0 = L_0;
		// this.recordScore = score;
		int32_t L_1 = V_0;
		__this->set_recordScore_16(L_1);
		// }
		return;
	}
}
// System.Void LeaderBoardManager::CheckLocation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeaderBoardManager_CheckLocation_mA6FDB87933DBD1994FF50FC3165AA0D313217547 (LeaderBoardManager_t87404B730BDD0E9A35EF39995ADE28BBE797C023 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// float Nplus = latitude + 0.0001f;
		float L_0 = __this->get_latitude_14();
		V_0 = ((float)il2cpp_codegen_add((float)L_0, (float)(9.99999975E-05f)));
		// float Nminus = latitude - 0.0001f;
		float L_1 = __this->get_latitude_14();
		// float Eplus = longitude + 0.0001f;
		float L_2 = __this->get_longitude_15();
		V_1 = ((float)il2cpp_codegen_add((float)L_2, (float)(9.99999975E-05f)));
		// float Eminus = longitude - 0.0001f;
		float L_3 = __this->get_longitude_15();
		V_2 = ((float)il2cpp_codegen_subtract((float)L_3, (float)(9.99999975E-05f)));
		// if (Nminus < myN && myN < Nplus && Eminus < myE && myE < Eplus)
		float L_4 = __this->get_myN_20();
		if ((!(((float)((float)il2cpp_codegen_subtract((float)L_1, (float)(9.99999975E-05f)))) < ((float)L_4))))
		{
			goto IL_005e;
		}
	}
	{
		float L_5 = __this->get_myN_20();
		float L_6 = V_0;
		if ((!(((float)L_5) < ((float)L_6))))
		{
			goto IL_005e;
		}
	}
	{
		float L_7 = V_2;
		float L_8 = __this->get_myE_21();
		if ((!(((float)L_7) < ((float)L_8))))
		{
			goto IL_005e;
		}
	}
	{
		float L_9 = __this->get_myE_21();
		float L_10 = V_1;
		if ((!(((float)L_9) < ((float)L_10))))
		{
			goto IL_005e;
		}
	}
	{
		// onSpot = true;
		__this->set_onSpot_12((bool)1);
		// }
		return;
	}

IL_005e:
	{
		// onSpot = false;
		__this->set_onSpot_12((bool)0);
		// }
		return;
	}
}
// System.Collections.IEnumerator LeaderBoardManager::StartGPS()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LeaderBoardManager_StartGPS_mF21F983744E3C032EC7B260514EC16553245C0A5 (LeaderBoardManager_t87404B730BDD0E9A35EF39995ADE28BBE797C023 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartGPSU3Ed__26_t6F1765BD5FAE2C4A1D0A6808B7AF630071317C62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStartGPSU3Ed__26_t6F1765BD5FAE2C4A1D0A6808B7AF630071317C62 * L_0 = (U3CStartGPSU3Ed__26_t6F1765BD5FAE2C4A1D0A6808B7AF630071317C62 *)il2cpp_codegen_object_new(U3CStartGPSU3Ed__26_t6F1765BD5FAE2C4A1D0A6808B7AF630071317C62_il2cpp_TypeInfo_var);
		U3CStartGPSU3Ed__26__ctor_mCFAE8B06E7B88B5F75AB5611FF8C8C9DF9EF9F1E(L_0, 0, /*hidden argument*/NULL);
		U3CStartGPSU3Ed__26_t6F1765BD5FAE2C4A1D0A6808B7AF630071317C62 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void LeaderBoardManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeaderBoardManager__ctor_mEB498B11F4EF5FDC9C3CA2390784769BFA05737E (LeaderBoardManager_t87404B730BDD0E9A35EF39995ADE28BBE797C023 * __this, const RuntimeMethod* method)
{
	{
		// public int maxCounts = 5;
		__this->set_maxCounts_9(5);
		// public bool refreshing = true;
		__this->set_refreshing_13((bool)1);
		// private int opposite = -1;
		__this->set_opposite_19((-1));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void LeaderBoardSample::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeaderBoardSample_Start_mBD25ED711B355880A6E7EC4889204D3F58E9CF12 (LeaderBoardSample_t7763EE95F3E0A9BA81E634FEA764FB37CDE18138 * __this, const RuntimeMethod* method)
{
	{
		// this.dl = dreamloLeaderBoard.GetSceneDreamloLeaderboard();
		dreamloLeaderBoard_t65A12FD2CBA7E92B2703B98E99DCAEB25C7AEBFD * L_0;
		L_0 = dreamloLeaderBoard_GetSceneDreamloLeaderboard_mC07124272D9B8F318A62A89087ABA5DC0E7D5B16(/*hidden argument*/NULL);
		__this->set_dl_10(L_0);
		// this.pc = dreamloPromoCode.GetSceneDreamloPromoCode();
		dreamloPromoCode_t640CC04DDAA3833B88CD2CF574BE448502BAFF2B * L_1;
		L_1 = dreamloPromoCode_GetSceneDreamloPromoCode_mBC1ECFAE3E8AAEDE07FB88FA784A90670F09AEF9(/*hidden argument*/NULL);
		__this->set_pc_11(L_1);
		// this.timeLeft = startTime;
		float L_2 = __this->get_startTime_4();
		__this->set_timeLeft_5(L_2);
		// this.gs = gameState.waiting;
		__this->set_gs_9(0);
		// }
		return;
	}
}
// System.Void LeaderBoardSample::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeaderBoardSample_Update_m34BF3ABEE2121E6AD473925B83EC73B983CEBA42 (LeaderBoardSample_t7763EE95F3E0A9BA81E634FEA764FB37CDE18138 * __this, const RuntimeMethod* method)
{
	{
		// if (this.gs == gameState.running)
		int32_t L_0 = __this->get_gs_9();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_003f;
		}
	}
	{
		// timeLeft = Mathf.Clamp(timeLeft - Time.deltaTime, 0, this.startTime);
		float L_1 = __this->get_timeLeft_5();
		float L_2;
		L_2 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_3 = __this->get_startTime_4();
		float L_4;
		L_4 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_subtract((float)L_1, (float)L_2)), (0.0f), L_3, /*hidden argument*/NULL);
		__this->set_timeLeft_5(L_4);
		// if (timeLeft == 0)
		float L_5 = __this->get_timeLeft_5();
		if ((!(((float)L_5) == ((float)(0.0f)))))
		{
			goto IL_003f;
		}
	}
	{
		// this.gs = gameState.enterscore;
		__this->set_gs_9(2);
	}

IL_003f:
	{
		// }
		return;
	}
}
// System.Void LeaderBoardSample::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeaderBoardSample_OnGUI_m56C881A81DCCA400F5C80412EF3E2DD4FB630F64 (LeaderBoardSample_t7763EE95F3E0A9BA81E634FEA764FB37CDE18138 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m169C1B85766C1F9F786A0178DD9817577841329C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m9A094C777FDE49249BB235EA98E96388A5F15AA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m03121030C14973605EA1EDD6F9CF9082E3C68DDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m4A67E1D9039071BEE37213CD4CD4296DA50A00AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&State_t67806ABA630FB739D87FB487A428A15B9277D5DC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CCFD69444F343A43D9B34E72AE10A9C37F6402F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A9141C6D604CE4530FB3983D2DD3178E36CC069);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral208C5FEC8490815F768AEE5ED2AE1BA2C1CAD0EA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3ADBC887FE7024420C02DCB3C9984CBC541EFFFA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C4F52AE03EA8FEF5DEAA4BF1DCF2792C970C821);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40C3754113912BBB2324B9A85745EAD27C43B49F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41C98FC0CED68751F46CD65DE5645AA66D19ED62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45558D73E039C4ADC236324031FD33686E07554C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4678B8189944D730D806E303298B5EEB033FBBCE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A12E64C285A43EE258D15AE96138179CA5633F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66523CA6691253A4BFA238DB91EA89F34CED9D43);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7CD3463136D7E8AA739FF04F508907CABD95D393);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D1628D810FE955F074A2919E378F959D66A6CA3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral914D691234F13495212AEF424B0285B1ADC9696A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA19C6F67980954F5C4E319AC55B496F32B79F096);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6CC8AD0FE02F600EE52F97A6EA02EAA7E216422);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_3;
	memset((&V_3), 0, sizeof(V_3));
	List_1_tD28329A66242A4236EA37A1950A4660B3F9AF1F7 * V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Enumerator_t2E3456D25032B4E449696F1A7AF76F0B6EAE54FB  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Score_t446577E2BC06794D97BE081C982A0D1F51F12D38  V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// var width200 = new GUILayoutOption[] {GUILayout.Width(200)};
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_0 = (GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B*)(GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B*)SZArrayNew(GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B_il2cpp_TypeInfo_var, (uint32_t)1);
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_1 = L_0;
		GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * L_2;
		L_2 = GUILayout_Width_m2529B16156A3E8109EA75B8D67C723B1B8E24C53((200.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB *)L_2);
		V_0 = L_1;
		// var width = 400;  // Make this wider to add more columns
		V_1 = ((int32_t)400);
		// var height = 200;
		V_2 = ((int32_t)200);
		// var r = new Rect((Screen.width / 2) - (width / 2), (Screen.height / 2) - (height), width, height);
		int32_t L_3;
		L_3 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_4 = V_1;
		int32_t L_5;
		L_5 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		int32_t L_6 = V_2;
		int32_t L_7 = V_1;
		int32_t L_8 = V_2;
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_3), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)L_3/(int32_t)2)), (int32_t)((int32_t)((int32_t)L_4/(int32_t)2)))))), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)L_5/(int32_t)2)), (int32_t)L_6)))), ((float)((float)L_7)), ((float)((float)L_8)), /*hidden argument*/NULL);
		// GUILayout.BeginArea(r, new GUIStyle("box"));
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_9 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_10;
		L_10 = GUIStyle_op_Implicit_m2D426804727C2889352794E14E9B96BF8D3149BA(_stringLiteral3C4F52AE03EA8FEF5DEAA4BF1DCF2792C970C821, /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_11 = (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)il2cpp_codegen_object_new(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		GUIStyle__ctor_mF096C292507D1BE25B6C458FB771CFC4509CE95B(L_11, L_10, /*hidden argument*/NULL);
		GUILayout_BeginArea_mE92EBECB10C334CADE6D63FABBF2A79C873590D6(L_9, L_11, /*hidden argument*/NULL);
		// GUILayout.BeginVertical();
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_12;
		L_12 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		GUILayout_BeginVertical_mE0941591491BBDAA25FF7CD48415750FD08D10ED(L_12, /*hidden argument*/NULL);
		// GUILayout.Label("Time Left:" + this.timeLeft.ToString("0.000"));
		float* L_13 = __this->get_address_of_timeLeft_5();
		String_t* L_14;
		L_14 = Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7((float*)L_13, _stringLiteral40C3754113912BBB2324B9A85745EAD27C43B49F, /*hidden argument*/NULL);
		String_t* L_15;
		L_15 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral7D1628D810FE955F074A2919E378F959D66A6CA3, L_14, /*hidden argument*/NULL);
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_16;
		L_16 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		GUILayout_Label_m0DD89429577B101820231347FB04CFC489245502(L_15, L_16, /*hidden argument*/NULL);
		// if (this.gs == gameState.waiting || this.gs == gameState.running)
		int32_t L_17 = __this->get_gs_9();
		if (!L_17)
		{
			goto IL_0095;
		}
	}
	{
		int32_t L_18 = __this->get_gs_9();
		if ((!(((uint32_t)L_18) == ((uint32_t)1))))
		{
			goto IL_00f4;
		}
	}

IL_0095:
	{
		// if (GUILayout.Button("Click me as much as you can in " + this.startTime.ToString("0") + " seconds!"))
		float* L_19 = __this->get_address_of_startTime_4();
		String_t* L_20;
		L_20 = Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7((float*)L_19, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, /*hidden argument*/NULL);
		String_t* L_21;
		L_21 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralA19C6F67980954F5C4E319AC55B496F32B79F096, L_20, _stringLiteral45558D73E039C4ADC236324031FD33686E07554C, /*hidden argument*/NULL);
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_22;
		L_22 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		bool L_23;
		L_23 = GUILayout_Button_m749F2887D57BDC9B6901F2C35F5C6A7E22154162(L_21, L_22, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_00d5;
		}
	}
	{
		// this.totalScore++;
		int32_t L_24 = __this->get_totalScore_6();
		__this->set_totalScore_6(((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1)));
		// this.gs = gameState.running;
		__this->set_gs_9(1);
	}

IL_00d5:
	{
		// GUILayout.Label("Total Score: " + this.totalScore.ToString());
		int32_t* L_25 = __this->get_address_of_totalScore_6();
		String_t* L_26;
		L_26 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_25, /*hidden argument*/NULL);
		String_t* L_27;
		L_27 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral5A12E64C285A43EE258D15AE96138179CA5633F9, L_26, /*hidden argument*/NULL);
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_28;
		L_28 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		GUILayout_Label_m0DD89429577B101820231347FB04CFC489245502(L_27, L_28, /*hidden argument*/NULL);
	}

IL_00f4:
	{
		// if (this.gs == gameState.enterscore)
		int32_t L_29 = __this->get_gs_9();
		if ((!(((uint32_t)L_29) == ((uint32_t)2))))
		{
			goto IL_01c0;
		}
	}
	{
		// GUILayout.Label("Total Score: " + this.totalScore.ToString());
		int32_t* L_30 = __this->get_address_of_totalScore_6();
		String_t* L_31;
		L_31 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_30, /*hidden argument*/NULL);
		String_t* L_32;
		L_32 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral5A12E64C285A43EE258D15AE96138179CA5633F9, L_31, /*hidden argument*/NULL);
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_33;
		L_33 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		GUILayout_Label_m0DD89429577B101820231347FB04CFC489245502(L_32, L_33, /*hidden argument*/NULL);
		// GUILayout.BeginHorizontal();
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_34;
		L_34 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		GUILayout_BeginHorizontal_m217AAF9BF30836EA73B22FF47B817F6F430E3661(L_34, /*hidden argument*/NULL);
		// GUILayout.Label("Your Name: ");
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_35;
		L_35 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		GUILayout_Label_m0DD89429577B101820231347FB04CFC489245502(_stringLiteral7CD3463136D7E8AA739FF04F508907CABD95D393, L_35, /*hidden argument*/NULL);
		// this.playerName = GUILayout.TextField(this.playerName, width200);
		String_t* L_36 = __this->get_playerName_7();
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_37 = V_0;
		String_t* L_38;
		L_38 = GUILayout_TextField_mC9C6AA168E42FD26C48D770E5F4A3E7FC36C823D(L_36, L_37, /*hidden argument*/NULL);
		__this->set_playerName_7(L_38);
		// if (GUILayout.Button("Save Score"))
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_39;
		L_39 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		bool L_40;
		L_40 = GUILayout_Button_m749F2887D57BDC9B6901F2C35F5C6A7E22154162(_stringLiteralE6CC8AD0FE02F600EE52F97A6EA02EAA7E216422, L_39, /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_01bb;
		}
	}
	{
		// if (dl.publicCode == "") Debug.LogError("You forgot to set the publicCode variable");
		dreamloLeaderBoard_t65A12FD2CBA7E92B2703B98E99DCAEB25C7AEBFD * L_41 = __this->get_dl_10();
		NullCheck(L_41);
		String_t* L_42 = L_41->get_publicCode_7();
		bool L_43;
		L_43 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_42, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_43)
		{
			goto IL_017c;
		}
	}
	{
		// if (dl.publicCode == "") Debug.LogError("You forgot to set the publicCode variable");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral66523CA6691253A4BFA238DB91EA89F34CED9D43, /*hidden argument*/NULL);
	}

IL_017c:
	{
		// if (dl.privateCode == "") Debug.LogError("You forgot to set the privateCode variable");
		dreamloLeaderBoard_t65A12FD2CBA7E92B2703B98E99DCAEB25C7AEBFD * L_44 = __this->get_dl_10();
		NullCheck(L_44);
		String_t* L_45 = L_44->get_privateCode_6();
		bool L_46;
		L_46 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_45, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_46)
		{
			goto IL_019d;
		}
	}
	{
		// if (dl.privateCode == "") Debug.LogError("You forgot to set the privateCode variable");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral3ADBC887FE7024420C02DCB3C9984CBC541EFFFA, /*hidden argument*/NULL);
	}

IL_019d:
	{
		// dl.AddScore(this.playerName, totalScore);
		dreamloLeaderBoard_t65A12FD2CBA7E92B2703B98E99DCAEB25C7AEBFD * L_47 = __this->get_dl_10();
		String_t* L_48 = __this->get_playerName_7();
		int32_t L_49 = __this->get_totalScore_6();
		NullCheck(L_47);
		dreamloLeaderBoard_AddScore_m057228BED5D1A7A48436E94311B9A6FDCCCE3FFA(L_47, L_48, L_49, /*hidden argument*/NULL);
		// this.gs = gameState.leaderboard;
		__this->set_gs_9(3);
	}

IL_01bb:
	{
		// GUILayout.EndHorizontal();
		GUILayout_EndHorizontal_mFB38A81D7D34D7928ECECF82B9C2C993BE5A0946(/*hidden argument*/NULL);
	}

IL_01c0:
	{
		// if (this.gs == gameState.leaderboard)
		int32_t L_50 = __this->get_gs_9();
		if ((!(((uint32_t)L_50) == ((uint32_t)3))))
		{
			goto IL_0270;
		}
	}
	{
		// GUILayout.Label("High Scores:");
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_51;
		L_51 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		GUILayout_Label_m0DD89429577B101820231347FB04CFC489245502(_stringLiteral4678B8189944D730D806E303298B5EEB033FBBCE, L_51, /*hidden argument*/NULL);
		// List<dreamloLeaderBoard.Score> scoreList = dl.ToListHighToLow();
		dreamloLeaderBoard_t65A12FD2CBA7E92B2703B98E99DCAEB25C7AEBFD * L_52 = __this->get_dl_10();
		NullCheck(L_52);
		List_1_tD28329A66242A4236EA37A1950A4660B3F9AF1F7 * L_53;
		L_53 = dreamloLeaderBoard_ToListHighToLow_mD18CBCF1D84A902BC1E0F242D388D7BD9DBAD60F(L_52, /*hidden argument*/NULL);
		V_4 = L_53;
		// if (scoreList == null)
		List_1_tD28329A66242A4236EA37A1950A4660B3F9AF1F7 * L_54 = V_4;
		if (L_54)
		{
			goto IL_01fd;
		}
	}
	{
		// GUILayout.Label("(loading...)");
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_55;
		L_55 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		GUILayout_Label_m0DD89429577B101820231347FB04CFC489245502(_stringLiteral41C98FC0CED68751F46CD65DE5645AA66D19ED62, L_55, /*hidden argument*/NULL);
		// }
		goto IL_0270;
	}

IL_01fd:
	{
		// int maxToDisplay = 5;
		V_5 = 5;
		// int count = 0;
		V_6 = 0;
		// foreach (dreamloLeaderBoard.Score currentScore in scoreList)
		List_1_tD28329A66242A4236EA37A1950A4660B3F9AF1F7 * L_56 = V_4;
		NullCheck(L_56);
		Enumerator_t2E3456D25032B4E449696F1A7AF76F0B6EAE54FB  L_57;
		L_57 = List_1_GetEnumerator_m4A67E1D9039071BEE37213CD4CD4296DA50A00AF(L_56, /*hidden argument*/List_1_GetEnumerator_m4A67E1D9039071BEE37213CD4CD4296DA50A00AF_RuntimeMethod_var);
		V_7 = L_57;
	}

IL_020c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0257;
		}

IL_020e:
		{
			// foreach (dreamloLeaderBoard.Score currentScore in scoreList)
			Score_t446577E2BC06794D97BE081C982A0D1F51F12D38  L_58;
			L_58 = Enumerator_get_Current_m03121030C14973605EA1EDD6F9CF9082E3C68DDF_inline((Enumerator_t2E3456D25032B4E449696F1A7AF76F0B6EAE54FB *)(&V_7), /*hidden argument*/Enumerator_get_Current_m03121030C14973605EA1EDD6F9CF9082E3C68DDF_RuntimeMethod_var);
			V_8 = L_58;
			// count++;
			int32_t L_59 = V_6;
			V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_59, (int32_t)1));
			// GUILayout.BeginHorizontal();
			GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_60;
			L_60 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
			GUILayout_BeginHorizontal_m217AAF9BF30836EA73B22FF47B817F6F430E3661(L_60, /*hidden argument*/NULL);
			// GUILayout.Label(currentScore.playerName, width200);
			Score_t446577E2BC06794D97BE081C982A0D1F51F12D38  L_61 = V_8;
			String_t* L_62 = L_61.get_playerName_0();
			GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_63 = V_0;
			GUILayout_Label_m0DD89429577B101820231347FB04CFC489245502(L_62, L_63, /*hidden argument*/NULL);
			// GUILayout.Label(currentScore.score.ToString(), width200);
			Score_t446577E2BC06794D97BE081C982A0D1F51F12D38  L_64 = V_8;
			int32_t L_65 = L_64.get_score_1();
			V_9 = L_65;
			String_t* L_66;
			L_66 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_9), /*hidden argument*/NULL);
			GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_67 = V_0;
			GUILayout_Label_m0DD89429577B101820231347FB04CFC489245502(L_66, L_67, /*hidden argument*/NULL);
			// GUILayout.EndHorizontal();
			GUILayout_EndHorizontal_mFB38A81D7D34D7928ECECF82B9C2C993BE5A0946(/*hidden argument*/NULL);
			// if (count >= maxToDisplay) break;
			int32_t L_68 = V_6;
			int32_t L_69 = V_5;
			if ((((int32_t)L_68) < ((int32_t)L_69)))
			{
				goto IL_0257;
			}
		}

IL_0255:
		{
			// if (count >= maxToDisplay) break;
			IL2CPP_LEAVE(0x270, FINALLY_0262);
		}

IL_0257:
		{
			// foreach (dreamloLeaderBoard.Score currentScore in scoreList)
			bool L_70;
			L_70 = Enumerator_MoveNext_m9A094C777FDE49249BB235EA98E96388A5F15AA1((Enumerator_t2E3456D25032B4E449696F1A7AF76F0B6EAE54FB *)(&V_7), /*hidden argument*/Enumerator_MoveNext_m9A094C777FDE49249BB235EA98E96388A5F15AA1_RuntimeMethod_var);
			if (L_70)
			{
				goto IL_020e;
			}
		}

IL_0260:
		{
			IL2CPP_LEAVE(0x270, FINALLY_0262);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0262;
	}

FINALLY_0262:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m169C1B85766C1F9F786A0178DD9817577841329C((Enumerator_t2E3456D25032B4E449696F1A7AF76F0B6EAE54FB *)(&V_7), /*hidden argument*/Enumerator_Dispose_m169C1B85766C1F9F786A0178DD9817577841329C_RuntimeMethod_var);
		IL2CPP_END_FINALLY(610)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(610)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x270, IL_0270)
	}

IL_0270:
	{
		// GUILayout.EndArea();
		GUILayout_EndArea_mFC73B49A3F2C5319D280E2C1B09E78CA23D0B151(/*hidden argument*/NULL);
		// r.y = r.y + r.height + 20;
		float L_71;
		L_71 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_3), /*hidden argument*/NULL);
		float L_72;
		L_72 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_3), /*hidden argument*/NULL);
		Rect_set_y_m015507262F8AC5AFF1B4E986B66307F31FB3A10E((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_3), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_71, (float)L_72)), (float)(20.0f))), /*hidden argument*/NULL);
		// GUILayout.BeginArea(r, new GUIStyle("box"));
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_73 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_74;
		L_74 = GUIStyle_op_Implicit_m2D426804727C2889352794E14E9B96BF8D3149BA(_stringLiteral3C4F52AE03EA8FEF5DEAA4BF1DCF2792C970C821, /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_75 = (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)il2cpp_codegen_object_new(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		GUIStyle__ctor_mF096C292507D1BE25B6C458FB771CFC4509CE95B(L_75, L_74, /*hidden argument*/NULL);
		GUILayout_BeginArea_mE92EBECB10C334CADE6D63FABBF2A79C873590D6(L_73, L_75, /*hidden argument*/NULL);
		// GUILayout.BeginHorizontal();
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_76;
		L_76 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		GUILayout_BeginHorizontal_m217AAF9BF30836EA73B22FF47B817F6F430E3661(L_76, /*hidden argument*/NULL);
		// GUILayout.Label("Redeem Code: ");
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_77;
		L_77 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		GUILayout_Label_m0DD89429577B101820231347FB04CFC489245502(_stringLiteral914D691234F13495212AEF424B0285B1ADC9696A, L_77, /*hidden argument*/NULL);
		// this.code = GUILayout.TextField(this.code, width200);
		String_t* L_78 = __this->get_code_8();
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_79 = V_0;
		String_t* L_80;
		L_80 = GUILayout_TextField_mC9C6AA168E42FD26C48D770E5F4A3E7FC36C823D(L_78, L_79, /*hidden argument*/NULL);
		__this->set_code_8(L_80);
		// if (GUILayout.Button("Redeem"))
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_81;
		L_81 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		bool L_82;
		L_82 = GUILayout_Button_m749F2887D57BDC9B6901F2C35F5C6A7E22154162(_stringLiteral208C5FEC8490815F768AEE5ED2AE1BA2C1CAD0EA, L_81, /*hidden argument*/NULL);
		if (!L_82)
		{
			goto IL_02f3;
		}
	}
	{
		// this.pc.RedeemCode(this.code);
		dreamloPromoCode_t640CC04DDAA3833B88CD2CF574BE448502BAFF2B * L_83 = __this->get_pc_11();
		String_t* L_84 = __this->get_code_8();
		NullCheck(L_83);
		dreamloPromoCode_RedeemCode_m38F6652307171AA5FFFCC1BB91AD02712B31651F(L_83, L_84, /*hidden argument*/NULL);
	}

IL_02f3:
	{
		// GUILayout.EndHorizontal();
		GUILayout_EndHorizontal_mFB38A81D7D34D7928ECECF82B9C2C993BE5A0946(/*hidden argument*/NULL);
		// GUILayout.Space(50);
		GUILayout_Space_m86E4A2CC27661A11F7D50132217B74E9D76CB9DD((50.0f), /*hidden argument*/NULL);
		// if (this.pc != null)
		dreamloPromoCode_t640CC04DDAA3833B88CD2CF574BE448502BAFF2B * L_85 = __this->get_pc_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_86;
		L_86 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_85, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_86)
		{
			goto IL_0378;
		}
	}
	{
		// GUILayout.Label("State: " + this.pc.state.ToString());
		dreamloPromoCode_t640CC04DDAA3833B88CD2CF574BE448502BAFF2B * L_87 = __this->get_pc_11();
		NullCheck(L_87);
		int32_t* L_88 = L_87->get_address_of_state_8();
		RuntimeObject * L_89 = Box(State_t67806ABA630FB739D87FB487A428A15B9277D5DC_il2cpp_TypeInfo_var, L_88);
		NullCheck(L_89);
		String_t* L_90;
		L_90 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_89);
		*L_88 = *(int32_t*)UnBox(L_89);
		String_t* L_91;
		L_91 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral0CCFD69444F343A43D9B34E72AE10A9C37F6402F, L_90, /*hidden argument*/NULL);
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_92;
		L_92 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		GUILayout_Label_m0DD89429577B101820231347FB04CFC489245502(L_91, L_92, /*hidden argument*/NULL);
		// GUILayout.Label("Error: " + this.pc.error);
		dreamloPromoCode_t640CC04DDAA3833B88CD2CF574BE448502BAFF2B * L_93 = __this->get_pc_11();
		NullCheck(L_93);
		String_t* L_94 = L_93->get_error_7();
		String_t* L_95;
		L_95 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF, L_94, /*hidden argument*/NULL);
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_96;
		L_96 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		GUILayout_Label_m0DD89429577B101820231347FB04CFC489245502(L_95, L_96, /*hidden argument*/NULL);
		// GUILayout.Label("Value: " + this.pc.value);
		dreamloPromoCode_t640CC04DDAA3833B88CD2CF574BE448502BAFF2B * L_97 = __this->get_pc_11();
		NullCheck(L_97);
		String_t* L_98 = L_97->get_value_6();
		String_t* L_99;
		L_99 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral1A9141C6D604CE4530FB3983D2DD3178E36CC069, L_98, /*hidden argument*/NULL);
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_100;
		L_100 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_m6EB599DF46848C50C5E2A836AF0BDA9C81B1A23A_RuntimeMethod_var);
		GUILayout_Label_m0DD89429577B101820231347FB04CFC489245502(L_99, L_100, /*hidden argument*/NULL);
	}

IL_0378:
	{
		// GUILayout.EndVertical();
		GUILayout_EndVertical_mBCF5058C9591A4064722C2B763EF98D066BFDCAD(/*hidden argument*/NULL);
		// GUILayout.EndArea();
		GUILayout_EndArea_mFC73B49A3F2C5319D280E2C1B09E78CA23D0B151(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LeaderBoardSample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeaderBoardSample__ctor_m12C337646366E9ADE81285EE13BA43528526D37E (LeaderBoardSample_t7763EE95F3E0A9BA81E634FEA764FB37CDE18138 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// float startTime = 3.0f;
		__this->set_startTime_4((3.0f));
		// string playerName = "";
		__this->set_playerName_7(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// string code = "";
		__this->set_code_8(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void LoadScene::LoadGamePlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadScene_LoadGamePlay_m676A4D459B359743177357D26F1E3A422FBA2A71 (LoadScene_t633887ABD67B5712F8CCC7C5511422C0E45084D4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40FD38E93B8D0CC44371FB0F361300AD664B4207);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("GamePlay");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral40FD38E93B8D0CC44371FB0F361300AD664B4207, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LoadScene::LoadMainMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadScene_LoadMainMenu_mDBA8576C64B901575EBC002F102D9247C17261CE (LoadScene_t633887ABD67B5712F8CCC7C5511422C0E45084D4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("MainMenu");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LoadScene::LoadLeaderBoard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadScene_LoadLeaderBoard_m34D1D481CCD399F7E844378A59062452AFC03E78 (LoadScene_t633887ABD67B5712F8CCC7C5511422C0E45084D4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF08B33E7F8A158589EEB3EFE6635CBB2BF40662C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("LeaderBoard");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralF08B33E7F8A158589EEB3EFE6635CBB2BF40662C, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LoadScene::LoadVideoPlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadScene_LoadVideoPlay_mBE07768B33524D0BFE82DDC23ABA0E2E2712B87B (LoadScene_t633887ABD67B5712F8CCC7C5511422C0E45084D4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64CE807593500556F8CCF9CA855EA05760437C7C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("VideoPlay");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral64CE807593500556F8CCF9CA855EA05760437C7C, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LoadScene::quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadScene_quit_m2C53B07ACA2B5BC8859E1F79FD1C9AC89DF2C7B7 (LoadScene_t633887ABD67B5712F8CCC7C5511422C0E45084D4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF398C620EA88F4070BE8AC9916E05DE1E9EAF174);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Quit!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralF398C620EA88F4070BE8AC9916E05DE1E9EAF174, /*hidden argument*/NULL);
		// Application.Quit();
		Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LoadScene::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadScene__ctor_m3003C0157CC4154E26B2ABFEF86DAF98ED17150F (LoadScene_t633887ABD67B5712F8CCC7C5511422C0E45084D4 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void PanelOpener::OpenPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelOpener_OpenPanel_m1275037AF2F1B86BF46D8F6788248850EA31090D (PanelOpener_tEE5DD262FE9C2B2F682A11A4F07433EC73D83BD5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if(Panel != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_Panel_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		// bool isActive = Panel.activeSelf;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_Panel_4();
		NullCheck(L_2);
		bool L_3;
		L_3 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// Panel.SetActive(!isActive);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_Panel_4();
		bool L_5 = V_0;
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void PanelOpener::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelOpener_Update_m2AB5AC40A830E69F78F7BD1E6398A5BBEA6F77B7 (PanelOpener_tEE5DD262FE9C2B2F682A11A4F07433EC73D83BD5 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void PanelOpener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelOpener__ctor_m81EE3ADEE3F126E8A66580BA07961EA2DE913135 (PanelOpener_tEE5DD262FE9C2B2F682A11A4F07433EC73D83BD5 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ScoreCell::SetModel(dreamloLeaderBoard/Score)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreCell_SetModel_mEAF132D88B3350B96AD1C859D69298C8BFE07F44 (ScoreCell_t2B4A18682749BC3457B08AAD2BA80F12415FCE54 * __this, Score_t446577E2BC06794D97BE081C982A0D1F51F12D38  ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral81CC9C9118222759CF36BB088A47DC8991A23C8F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// nameText.text = data.playerName;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_nameText_4();
		Score_t446577E2BC06794D97BE081C982A0D1F51F12D38  L_1 = ___data0;
		String_t* L_2 = L_1.get_playerName_0();
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		// scoreText.text = data.score * opposite + " turns";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = __this->get_scoreText_5();
		Score_t446577E2BC06794D97BE081C982A0D1F51F12D38  L_4 = ___data0;
		int32_t L_5 = L_4.get_score_1();
		int32_t L_6 = __this->get_opposite_6();
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_5, (int32_t)L_6));
		String_t* L_7;
		L_7 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_8;
		L_8 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_7, _stringLiteral81CC9C9118222759CF36BB088A47DC8991A23C8F, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_8);
		// }
		return;
	}
}
// System.Void ScoreCell::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreCell__ctor_m7852927B8AC28D9B09269D3CF4AC56F9BE420022 (ScoreCell_t2B4A18682749BC3457B08AAD2BA80F12415FCE54 * __this, const RuntimeMethod* method)
{
	{
		// private int opposite = -1;
		__this->set_opposite_6((-1));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Timer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer_Start_mF356578A412E0D4BE318BC567718C7DBD90E05F0 (Timer_t32ADF3155A88C37628B80D227C821651666DD405 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BADA17CF62AE1A9C33E0086BFF271B2563C57B9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// textDisplay.GetComponent<Text>().text = "00:" + secondsLeft;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_textDisplay_4();
		NullCheck(L_0);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1;
		L_1 = GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65(L_0, /*hidden argument*/GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		int32_t* L_2 = __this->get_address_of_secondsLeft_5();
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_2, /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral3BADA17CF62AE1A9C33E0086BFF271B2563C57B9, L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_4);
		// }
		return;
	}
}
// System.Void Timer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer_Update_m336594DF06E073C9CC317142E46E02AFC94A026C (Timer_t32ADF3155A88C37628B80D227C821651666DD405 * __this, const RuntimeMethod* method)
{
	{
		// if (takingAway == false && secondsLeft > 0)
		bool L_0 = __this->get_takingAway_6();
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_1 = __this->get_secondsLeft_5();
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		// StartCoroutine(TimerTake());
		RuntimeObject* L_2;
		L_2 = Timer_TimerTake_mF363B47742D917E187FACADE44326F7A47E78CEE(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_3;
		L_3 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_2, /*hidden argument*/NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Timer::TimerTake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Timer_TimerTake_mF363B47742D917E187FACADE44326F7A47E78CEE (Timer_t32ADF3155A88C37628B80D227C821651666DD405 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CTimerTakeU3Ed__5_t897E40F209FEDC1937EAA8D5C9BEEF1F409CAC78_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CTimerTakeU3Ed__5_t897E40F209FEDC1937EAA8D5C9BEEF1F409CAC78 * L_0 = (U3CTimerTakeU3Ed__5_t897E40F209FEDC1937EAA8D5C9BEEF1F409CAC78 *)il2cpp_codegen_object_new(U3CTimerTakeU3Ed__5_t897E40F209FEDC1937EAA8D5C9BEEF1F409CAC78_il2cpp_TypeInfo_var);
		U3CTimerTakeU3Ed__5__ctor_m3C839682D9BC7F86659C719ED2934B9195C46BC7(L_0, 0, /*hidden argument*/NULL);
		U3CTimerTakeU3Ed__5_t897E40F209FEDC1937EAA8D5C9BEEF1F409CAC78 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void Timer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer__ctor_m74709038BC88FE71F7D6C06D0FF352FBE17410E8 (Timer_t32ADF3155A88C37628B80D227C821651666DD405 * __this, const RuntimeMethod* method)
{
	{
		// public int secondsLeft = 59;
		__this->set_secondsLeft_5(((int32_t)59));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void dreamloLeaderBoard::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dreamloLeaderBoard_Start_mC671421D8C33114A20BF748AF5E645432D04879A (dreamloLeaderBoard_t65A12FD2CBA7E92B2703B98E99DCAEB25C7AEBFD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB457A8555B7B70401A326AD5A32F6EB5E0D64CDA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD802F2507756F6E6B10C6E218A98C24B30BFE83E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IUpgradedAndGotSSL) {
		bool L_0 = __this->get_IUpgradedAndGotSSL_5();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// dreamloWebserviceURL = "https://www.dreamlo.com/lb/";
		__this->set_dreamloWebserviceURL_4(_stringLiteralD802F2507756F6E6B10C6E218A98C24B30BFE83E);
		// }
		goto IL_001f;
	}

IL_0015:
	{
		// Debug.LogWarning("dreamlo may require https for WEBGL / IOS / ANDROID builds.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteralB457A8555B7B70401A326AD5A32F6EB5E0D64CDA, /*hidden argument*/NULL);
	}

IL_001f:
	{
		// this.highScores = "";
		__this->set_highScores_8(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// }
		return;
	}
}
// dreamloLeaderBoard dreamloLeaderBoard::GetSceneDreamloLeaderboard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR dreamloLeaderBoard_t65A12FD2CBA7E92B2703B98E99DCAEB25C7AEBFD * dreamloLeaderBoard_GetSceneDreamloLeaderboard_mC07124272D9B8F318A62A89087ABA5DC0E7D5B16 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisdreamloLeaderBoard_t65A12FD2CBA7E92B2703B98E99DCAEB25C7AEBFD_m6E6AC3A8B51A6799905BAC19D9EB2F955C14B896_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A8C0D3418190266F35F3BC41EC150D20764A01C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7C92D2F1CBC2875B49A2AA37D64844762020931);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	{
		// var go = GameObject.Find("dreamloPrefab");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralA7C92D2F1CBC2875B49A2AA37D64844762020931, /*hidden argument*/NULL);
		V_0 = L_0;
		// if (go == null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// Debug.LogError("Could not find dreamloPrefab in the scene.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral6A8C0D3418190266F35F3BC41EC150D20764A01C, /*hidden argument*/NULL);
		// return null;
		return (dreamloLeaderBoard_t65A12FD2CBA7E92B2703B98E99DCAEB25C7AEBFD *)NULL;
	}

IL_0020:
	{
		// return go.GetComponent<dreamloLeaderBoard>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = V_0;
		NullCheck(L_3);
		dreamloLeaderBoard_t65A12FD2CBA7E92B2703B98E99DCAEB25C7AEBFD * L_4;
		L_4 = GameObject_GetComponent_TisdreamloLeaderBoard_t65A12FD2CBA7E92B2703B98E99DCAEB25C7AEBFD_m6E6AC3A8B51A6799905BAC19D9EB2F955C14B896(L_3, /*hidden argument*/GameObject_GetComponent_TisdreamloLeaderBoard_t65A12FD2CBA7E92B2703B98E99DCAEB25C7AEBFD_m6E6AC3A8B51A6799905BAC19D9EB2F955C14B896_RuntimeMethod_var);
		return L_4;
	}
}
// System.Void dreamloLeaderBoard::AddScore(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dreamloLeaderBoard_AddScore_m057228BED5D1A7A48436E94311B9A6FDCCCE3FFA (dreamloLeaderBoard_t65A12FD2CBA7E92B2703B98E99DCAEB25C7AEBFD * __this, String_t* ___playerName0, int32_t ___totalScore1, const RuntimeMethod* method)
{
	{
		// AddScoreWithPipe(playerName, totalScore);
		String_t* L_0 = ___playerName0;
		int32_t L_1 = ___totalScore1;
		dreamloLeaderBoard_AddScoreWithPipe_m5606AE99552EA19928263C96304B407DA409A4A3(__this, L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void dreamloLeaderBoard::AddScore(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dreamloLeaderBoard_AddScore_m1F6BC48C288C15DF29CAF382EC54F1ECBFC94A7D (dreamloLeaderBoard_t65A12FD2CBA7E92B2703B98E99DCAEB25C7AEBFD * __this, String_t* ___playerName0, int32_t ___totalScore1, int32_t ___totalSeconds2, const RuntimeMethod* method)
{
	{
		// AddScoreWithPipe(playerName, totalScore, totalSeconds);
		String_t* L_0 = ___playerName0;
		int32_t L_1 = ___totalScore1;
		int32_t L_2 = ___totalSeconds2;
		dreamloLeaderBoard_AddScoreWithPipe_m9F8DAC427A41BFCAF4F2F9EE27A4DBEA31B1B458(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void dreamloLeaderBoard::AddScore(System.String,System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dreamloLeaderBoard_AddScore_m67FAE8F5C417D4B2CFAB2B4B0454E669F2C82151 (dreamloLeaderBoard_t65A12FD2CBA7E92B2703B98E99DCAEB25C7AEBFD * __this, String_t* ___playerName0, int32_t ___totalScore1, int32_t ___totalSeconds2, String_t* ___shortText3, const RuntimeMethod* method)
{
	{
		// AddScoreWithPipe(playerName, totalScore, totalSeconds, shortText);
		String_t* L_0 = ___playerName0;
		int32_t L_1 = ___totalScore1;
		int32_t L_2 = ___totalSeconds2;
		String_t* L_3 = ___shortText3;
		dreamloLeaderBoard_AddScoreWithPipe_mF3E3F9BFB02D7C8B1B3FE475E431FA8AFEB25F83(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void dreamloLeaderBoard::AddScoreWithPipe(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dreamloLeaderBoard_AddScoreWithPipe_m5606AE99552EA19928263C96304B407DA409A4A3 (dreamloLeaderBoard_t65A12FD2CBA7E92B2703B98E99DCAEB25C7AEBFD * __this, String_t* ___playerName0, int32_t ___totalScore1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB79360A5519AFE11DE3C8DBC68DF5DF59C0349D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// playerName = Clean(playerName);
		String_t* L_0 = ___playerName0;
		String_t* L_1;
		L_1 = dreamloLeaderBoard_Clean_m0991582E48FDEAD71BBFECDB51751E20F20CFAD1(__this, L_0, /*hidden argument*/NULL);
		___playerName0 = L_1;
		// StartCoroutine(GetRequest(dreamloWebserviceURL + privateCode + "/add-pipe/" + UnityWebRequest.EscapeURL(playerName) + "/" + totalScore.ToString()));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = L_2;
		String_t* L_4 = __this->get_dreamloWebserviceURL_4();
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_4);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = L_3;
		String_t* L_6 = __this->get_privateCode_6();
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_6);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = L_5;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteralFB79360A5519AFE11DE3C8DBC68DF5DF59C0349D);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralFB79360A5519AFE11DE3C8DBC68DF5DF59C0349D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = L_7;
		String_t* L_9 = ___playerName0;
		String_t* L_10;
		L_10 = UnityWebRequest_EscapeURL_mD4A55874FBF817BE5C57E4150CFFC2A78ACCD9A1(L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_10);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = L_8;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = L_11;
		String_t* L_13;
		L_13 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___totalScore1), /*hidden argument*/NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_13);
		String_t* L_14;
		L_14 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_12, /*hidden argument*/NULL);
		RuntimeObject* L_15;
		L_15 = dreamloLeaderBoard_GetRequest_mBAAB677C6C4EB5A35C38BCFB2DF667C67BEA6AD0(__this, L_14, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_16;
		L_16 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_15, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void dreamloLeaderBoard::AddScoreWithPipe(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dreamloLeaderBoard_AddScoreWithPipe_m9F8DAC427A41BFCAF4F2F9EE27A4DBEA31B1B458 (dreamloLeaderBoard_t65A12FD2CBA7E92B2703B98E99DCAEB25C7AEBFD * __this, String_t* ___playerName0, int32_t ___totalScore1, int32_t ___totalSeconds2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB79360A5519AFE11DE3C8DBC68DF5DF59C0349D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// playerName = Clean(playerName);
		String_t* L_0 = ___playerName0;
		String_t* L_1;
		L_1 = dreamloLeaderBoard_Clean_m0991582E48FDEAD71BBFECDB51751E20F20CFAD1(__this, L_0, /*hidden argument*/NULL);
		___playerName0 = L_1;
		// StartCoroutine(GetRequest(dreamloWebserviceURL + privateCode + "/add-pipe/" + UnityWebRequest.EscapeURL(playerName) + "/" + totalScore.ToString()+ "/" + totalSeconds.ToString()));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)8);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = L_2;
		String_t* L_4 = __this->get_dreamloWebserviceURL_4();
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_4);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = L_3;
		String_t* L_6 = __this->get_privateCode_6();
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_6);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = L_5;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteralFB79360A5519AFE11DE3C8DBC68DF5DF59C0349D);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralFB79360A5519AFE11DE3C8DBC68DF5DF59C0349D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = L_7;
		String_t* L_9 = ___playerName0;
		String_t* L_10;
		L_10 = UnityWebRequest_EscapeURL_mD4A55874FBF817BE5C57E4150CFFC2A78ACCD9A1(L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_10);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = L_8;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = L_11;
		String_t* L_13;
		L_13 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___totalScore1), /*hidden argument*/NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_13);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14 = L_12;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = L_14;
		String_t* L_16;
		L_16 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___totalSeconds2), /*hidden argument*/NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_16);
		String_t* L_17;
		L_17 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_15, /*hidden argument*/NULL);
		RuntimeObject* L_18;
		L_18 = dreamloLeaderBoard_GetRequest_mBAAB677C6C4EB5A35C38BCFB2DF667C67BEA6AD0(__this, L_17, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_19;
		L_19 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_18, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void dreamloLeaderBoard::AddScoreWithPipe(System.String,System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dreamloLeaderBoard_AddScoreWithPipe_mF3E3F9BFB02D7C8B1B3FE475E431FA8AFEB25F83 (dreamloLeaderBoard_t65A12FD2CBA7E92B2703B98E99DCAEB25C7AEBFD * __this, String_t* ___playerName0, int32_t ___totalScore1, int32_t ___totalSeconds2, String_t* ___shortText3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB79360A5519AFE11DE3C8DBC68DF5DF59C0349D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// playerName = Clean(playerName);
		String_t* L_0 = ___playerName0;
		String_t* L_1;
		L_1 = dreamloLeaderBoard_Clean_m0991582E48FDEAD71BBFECDB51751E20F20CFAD1(__this, L_0, /*hidden argument*/NULL);
		___playerName0 = L_1;
		// shortText = Clean(shortText);
		String_t* L_2 = ___shortText3;
		String_t* L_3;
		L_3 = dreamloLeaderBoard_Clean_m0991582E48FDEAD71BBFECDB51751E20F20CFAD1(__this, L_2, /*hidden argument*/NULL);
		___shortText3 = L_3;
		// StartCoroutine(GetRequest(dreamloWebserviceURL + privateCode + "/add-pipe/" + UnityWebRequest.EscapeURL(playerName) + "/" + totalScore.ToString() + "/" + totalSeconds.ToString()+ "/" + shortText));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = L_4;
		String_t* L_6 = __this->get_dreamloWebserviceURL_4();
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_6);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = L_5;
		String_t* L_8 = __this->get_privateCode_6();
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_8);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = L_7;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteralFB79360A5519AFE11DE3C8DBC68DF5DF59C0349D);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralFB79360A5519AFE11DE3C8DBC68DF5DF59C0349D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = L_9;
		String_t* L_11 = ___playerName0;
		String_t* L_12;
		L_12 = UnityWebRequest_EscapeURL_mD4A55874FBF817BE5C57E4150CFFC2A78ACCD9A1(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_12);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_12);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = L_10;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14 = L_13;
		String_t* L_15;
		L_15 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___totalScore1), /*hidden argument*/NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_15);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_15);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16 = L_14;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_17 = L_16;
		String_t* L_18;
		L_18 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___totalSeconds2), /*hidden argument*/NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_18);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_19 = L_17;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_20 = L_19;
		String_t* L_21 = ___shortText3;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_21);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)L_21);
		String_t* L_22;
		L_22 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_20, /*hidden argument*/NULL);
		RuntimeObject* L_23;
		L_23 = dreamloLeaderBoard_GetRequest_mBAAB677C6C4EB5A35C38BCFB2DF667C67BEA6AD0(__this, L_22, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_24;
		L_24 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_23, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void dreamloLeaderBoard::GetScores()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dreamloLeaderBoard_GetScores_mC51693E5538E74EBCCE5F52049CC611B5F16EB60 (dreamloLeaderBoard_t65A12FD2CBA7E92B2703B98E99DCAEB25C7AEBFD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA05EB14D09501AA15326AB3B7E353CD5A44EA973);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// highScores = "";
		__this->set_highScores_8(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// StartCoroutine(GetRequest(dreamloWebserviceURL +  publicCode  + "/pipe"));
		String_t* L_0 = __this->get_dreamloWebserviceURL_4();
		String_t* L_1 = __this->get_publicCode_7();
		String_t* L_2;
		L_2 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_0, L_1, _stringLiteralA05EB14D09501AA15326AB3B7E353CD5A44EA973, /*hidden argument*/NULL);
		RuntimeObject* L_3;
		L_3 = dreamloLeaderBoard_GetRequest_mBAAB677C6C4EB5A35C38BCFB2DF667C67BEA6AD0(__this, L_2, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_4;
		L_4 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void dreamloLeaderBoard::GetSingleScore(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dreamloLeaderBoard_GetSingleScore_m26203E36630D193E55F63D361DF23D9D9C8E1863 (dreamloLeaderBoard_t65A12FD2CBA7E92B2703B98E99DCAEB25C7AEBFD * __this, String_t* ___playerName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B39A124E91DF8AA98920A7A55BDED4E374222A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// highScores = "";
		__this->set_highScores_8(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// StartCoroutine(GetRequest(dreamloWebserviceURL +  publicCode  + "/pipe-get/" + UnityWebRequest.EscapeURL(playerName)));
		String_t* L_0 = __this->get_dreamloWebserviceURL_4();
		String_t* L_1 = __this->get_publicCode_7();
		String_t* L_2 = ___playerName0;
		String_t* L_3;
		L_3 = UnityWebRequest_EscapeURL_mD4A55874FBF817BE5C57E4150CFFC2A78ACCD9A1(L_2, /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(L_0, L_1, _stringLiteral0B39A124E91DF8AA98920A7A55BDED4E374222A4, L_3, /*hidden argument*/NULL);
		RuntimeObject* L_5;
		L_5 = dreamloLeaderBoard_GetRequest_mBAAB677C6C4EB5A35C38BCFB2DF667C67BEA6AD0(__this, L_4, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_6;
		L_6 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator dreamloLeaderBoard::GetRequest(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* dreamloLeaderBoard_GetRequest_mBAAB677C6C4EB5A35C38BCFB2DF667C67BEA6AD0 (dreamloLeaderBoard_t65A12FD2CBA7E92B2703B98E99DCAEB25C7AEBFD * __this, String_t* ___url0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetRequestU3Ed__16_t15BE8B46AE9A55716A0E2229C682D997A67CA635_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetRequestU3Ed__16_t15BE8B46AE9A55716A0E2229C682D997A67CA635 * L_0 = (U3CGetRequestU3Ed__16_t15BE8B46AE9A55716A0E2229C682D997A67CA635 *)il2cpp_codegen_object_new(U3CGetRequestU3Ed__16_t15BE8B46AE9A55716A0E2229C682D997A67CA635_il2cpp_TypeInfo_var);
		U3CGetRequestU3Ed__16__ctor_m6628BACA191E5CF5A8591F13D5F16727146DBABB(L_0, 0, /*hidden argument*/NULL);
		U3CGetRequestU3Ed__16_t15BE8B46AE9A55716A0E2229C682D997A67CA635 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_3(__this);
		U3CGetRequestU3Ed__16_t15BE8B46AE9A55716A0E2229C682D997A67CA635 * L_2 = L_1;
		String_t* L_3 = ___url0;
		NullCheck(L_2);
		L_2->set_url_2(L_3);
		return L_2;
	}
}
// System.String[] dreamloLeaderBoard::ToStringArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* dreamloLeaderBoard_ToStringArray_m3D0D4390E35BBAB1DCDF5B8AC50801714AEDC17F (dreamloLeaderBoard_t65A12FD2CBA7E92B2703B98E99DCAEB25C7AEBFD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.highScores == null) return null;
		String_t* L_0 = __this->get_highScores_8();
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// if (this.highScores == null) return null;
		return (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)NULL;
	}

IL_000a:
	{
		// if (this.highScores == "") return null;
		String_t* L_1 = __this->get_highScores_8();
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		// if (this.highScores == "") return null;
		return (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)NULL;
	}

IL_001e:
	{
		// var rows = this.highScores.Split(new char[] {'\n'}, System.StringSplitOptions.RemoveEmptyEntries);
		String_t* L_3 = __this->get_highScores_8();
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_4 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_5 = L_4;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)10));
		NullCheck(L_3);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6;
		L_6 = String_Split_m8334980E85EA3EF1F6204607324D9C34EFA4CA25(L_3, L_5, 1, /*hidden argument*/NULL);
		// return rows;
		return L_6;
	}
}
// System.Collections.Generic.List`1<dreamloLeaderBoard/Score> dreamloLeaderBoard::ToListLowToHigh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tD28329A66242A4236EA37A1950A4660B3F9AF1F7 * dreamloLeaderBoard_ToListLowToHigh_mD6AE66CEC029ECF839363F4E64D4532DA8381EDF (dreamloLeaderBoard_t65A12FD2CBA7E92B2703B98E99DCAEB25C7AEBFD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comparison_1__ctor_m00BDA321144DBD25E52E3AACD59FCB15458B889C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comparison_1_t828031481DDDCDFECD647B5D5327482576945BDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Sort_mE98B6907239BFB3CD96D0F15541D02735DC00984_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8F8C5D12CC3CF1E9B76EB4FA41D95C9ACDBBE003_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB5D64AE88F26C3619A8B610C1E196429533EB45B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD28329A66242A4236EA37A1950A4660B3F9AF1F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CToListLowToHighU3Eb__18_0_m46BB2B7C6332E4131D4CDFCE2B99317318A465E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tCA1B7E2863AF474F3FFDED0AA53F12C56EE0CB07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ScoreU5BU5D_tD3FEF63256F30BA473D428523CC5B54B8AD6CA97* V_0 = NULL;
	Comparison_1_t828031481DDDCDFECD647B5D5327482576945BDB * G_B4_0 = NULL;
	List_1_tD28329A66242A4236EA37A1950A4660B3F9AF1F7 * G_B4_1 = NULL;
	List_1_tD28329A66242A4236EA37A1950A4660B3F9AF1F7 * G_B4_2 = NULL;
	Comparison_1_t828031481DDDCDFECD647B5D5327482576945BDB * G_B3_0 = NULL;
	List_1_tD28329A66242A4236EA37A1950A4660B3F9AF1F7 * G_B3_1 = NULL;
	List_1_tD28329A66242A4236EA37A1950A4660B3F9AF1F7 * G_B3_2 = NULL;
	{
		// var scoreList = this.ToScoreArray();
		ScoreU5BU5D_tD3FEF63256F30BA473D428523CC5B54B8AD6CA97* L_0;
		L_0 = dreamloLeaderBoard_ToScoreArray_mC044109EE675A68DC1914C53B5474A29A557AC20(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// if (scoreList == null) return new List<Score>();
		ScoreU5BU5D_tD3FEF63256F30BA473D428523CC5B54B8AD6CA97* L_1 = V_0;
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		// if (scoreList == null) return new List<Score>();
		List_1_tD28329A66242A4236EA37A1950A4660B3F9AF1F7 * L_2 = (List_1_tD28329A66242A4236EA37A1950A4660B3F9AF1F7 *)il2cpp_codegen_object_new(List_1_tD28329A66242A4236EA37A1950A4660B3F9AF1F7_il2cpp_TypeInfo_var);
		List_1__ctor_m8F8C5D12CC3CF1E9B76EB4FA41D95C9ACDBBE003(L_2, /*hidden argument*/List_1__ctor_m8F8C5D12CC3CF1E9B76EB4FA41D95C9ACDBBE003_RuntimeMethod_var);
		return L_2;
	}

IL_0010:
	{
		// var genericList = new List<Score>(scoreList);
		ScoreU5BU5D_tD3FEF63256F30BA473D428523CC5B54B8AD6CA97* L_3 = V_0;
		List_1_tD28329A66242A4236EA37A1950A4660B3F9AF1F7 * L_4 = (List_1_tD28329A66242A4236EA37A1950A4660B3F9AF1F7 *)il2cpp_codegen_object_new(List_1_tD28329A66242A4236EA37A1950A4660B3F9AF1F7_il2cpp_TypeInfo_var);
		List_1__ctor_mB5D64AE88F26C3619A8B610C1E196429533EB45B(L_4, (RuntimeObject*)(RuntimeObject*)L_3, /*hidden argument*/List_1__ctor_mB5D64AE88F26C3619A8B610C1E196429533EB45B_RuntimeMethod_var);
		// genericList.Sort((x, y) => x.score.CompareTo(y.score));
		List_1_tD28329A66242A4236EA37A1950A4660B3F9AF1F7 * L_5 = L_4;
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCA1B7E2863AF474F3FFDED0AA53F12C56EE0CB07_il2cpp_TypeInfo_var);
		Comparison_1_t828031481DDDCDFECD647B5D5327482576945BDB * L_6 = ((U3CU3Ec_tCA1B7E2863AF474F3FFDED0AA53F12C56EE0CB07_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCA1B7E2863AF474F3FFDED0AA53F12C56EE0CB07_il2cpp_TypeInfo_var))->get_U3CU3E9__18_0_1();
		Comparison_1_t828031481DDDCDFECD647B5D5327482576945BDB * L_7 = L_6;
		G_B3_0 = L_7;
		G_B3_1 = L_5;
		G_B3_2 = L_5;
		if (L_7)
		{
			G_B4_0 = L_7;
			G_B4_1 = L_5;
			G_B4_2 = L_5;
			goto IL_0036;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCA1B7E2863AF474F3FFDED0AA53F12C56EE0CB07_il2cpp_TypeInfo_var);
		U3CU3Ec_tCA1B7E2863AF474F3FFDED0AA53F12C56EE0CB07 * L_8 = ((U3CU3Ec_tCA1B7E2863AF474F3FFDED0AA53F12C56EE0CB07_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCA1B7E2863AF474F3FFDED0AA53F12C56EE0CB07_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Comparison_1_t828031481DDDCDFECD647B5D5327482576945BDB * L_9 = (Comparison_1_t828031481DDDCDFECD647B5D5327482576945BDB *)il2cpp_codegen_object_new(Comparison_1_t828031481DDDCDFECD647B5D5327482576945BDB_il2cpp_TypeInfo_var);
		Comparison_1__ctor_m00BDA321144DBD25E52E3AACD59FCB15458B889C(L_9, L_8, (intptr_t)((intptr_t)U3CU3Ec_U3CToListLowToHighU3Eb__18_0_m46BB2B7C6332E4131D4CDFCE2B99317318A465E2_RuntimeMethod_var), /*hidden argument*/Comparison_1__ctor_m00BDA321144DBD25E52E3AACD59FCB15458B889C_RuntimeMethod_var);
		Comparison_1_t828031481DDDCDFECD647B5D5327482576945BDB * L_10 = L_9;
		((U3CU3Ec_tCA1B7E2863AF474F3FFDED0AA53F12C56EE0CB07_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCA1B7E2863AF474F3FFDED0AA53F12C56EE0CB07_il2cpp_TypeInfo_var))->set_U3CU3E9__18_0_1(L_10);
		G_B4_0 = L_10;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_0036:
	{
		NullCheck(G_B4_1);
		List_1_Sort_mE98B6907239BFB3CD96D0F15541D02735DC00984(G_B4_1, G_B4_0, /*hidden argument*/List_1_Sort_mE98B6907239BFB3CD96D0F15541D02735DC00984_RuntimeMethod_var);
		// return genericList;
		return G_B4_2;
	}
}
// System.Collections.Generic.List`1<dreamloLeaderBoard/Score> dreamloLeaderBoard::ToListHighToLow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tD28329A66242A4236EA37A1950A4660B3F9AF1F7 * dreamloLeaderBoard_ToListHighToLow_mD18CBCF1D84A902BC1E0F242D388D7BD9DBAD60F (dreamloLeaderBoard_t65A12FD2CBA7E92B2703B98E99DCAEB25C7AEBFD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comparison_1__ctor_m00BDA321144DBD25E52E3AACD59FCB15458B889C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comparison_1_t828031481DDDCDFECD647B5D5327482576945BDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Sort_mE98B6907239BFB3CD96D0F15541D02735DC00984_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8F8C5D12CC3CF1E9B76EB4FA41D95C9ACDBBE003_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB5D64AE88F26C3619A8B610C1E196429533EB45B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD28329A66242A4236EA37A1950A4660B3F9AF1F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CToListHighToLowU3Eb__19_0_mCB94C720BE247F406BD87316BA70BD07E1022177_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tCA1B7E2863AF474F3FFDED0AA53F12C56EE0CB07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ScoreU5BU5D_tD3FEF63256F30BA473D428523CC5B54B8AD6CA97* V_0 = NULL;
	Comparison_1_t828031481DDDCDFECD647B5D5327482576945BDB * G_B4_0 = NULL;
	List_1_tD28329A66242A4236EA37A1950A4660B3F9AF1F7 * G_B4_1 = NULL;
	List_1_tD28329A66242A4236EA37A1950A4660B3F9AF1F7 * G_B4_2 = NULL;
	Comparison_1_t828031481DDDCDFECD647B5D5327482576945BDB * G_B3_0 = NULL;
	List_1_tD28329A66242A4236EA37A1950A4660B3F9AF1F7 * G_B3_1 = NULL;
	List_1_tD28329A66242A4236EA37A1950A4660B3F9AF1F7 * G_B3_2 = NULL;
	{
		// var scoreList = this.ToScoreArray();
		ScoreU5BU5D_tD3FEF63256F30BA473D428523CC5B54B8AD6CA97* L_0;
		L_0 = dreamloLeaderBoard_ToScoreArray_mC044109EE675A68DC1914C53B5474A29A557AC20(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// if (scoreList == null) return new List<Score>();
		ScoreU5BU5D_tD3FEF63256F30BA473D428523CC5B54B8AD6CA97* L_1 = V_0;
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		// if (scoreList == null) return new List<Score>();
		List_1_tD28329A66242A4236EA37A1950A4660B3F9AF1F7 * L_2 = (List_1_tD28329A66242A4236EA37A1950A4660B3F9AF1F7 *)il2cpp_codegen_object_new(List_1_tD28329A66242A4236EA37A1950A4660B3F9AF1F7_il2cpp_TypeInfo_var);
		List_1__ctor_m8F8C5D12CC3CF1E9B76EB4FA41D95C9ACDBBE003(L_2, /*hidden argument*/List_1__ctor_m8F8C5D12CC3CF1E9B76EB4FA41D95C9ACDBBE003_RuntimeMethod_var);
		return L_2;
	}

IL_0010:
	{
		// List<Score> genericList = new List<Score>(scoreList);
		ScoreU5BU5D_tD3FEF63256F30BA473D428523CC5B54B8AD6CA97* L_3 = V_0;
		List_1_tD28329A66242A4236EA37A1950A4660B3F9AF1F7 * L_4 = (List_1_tD28329A66242A4236EA37A1950A4660B3F9AF1F7 *)il2cpp_codegen_object_new(List_1_tD28329A66242A4236EA37A1950A4660B3F9AF1F7_il2cpp_TypeInfo_var);
		List_1__ctor_mB5D64AE88F26C3619A8B610C1E196429533EB45B(L_4, (RuntimeObject*)(RuntimeObject*)L_3, /*hidden argument*/List_1__ctor_mB5D64AE88F26C3619A8B610C1E196429533EB45B_RuntimeMethod_var);
		// genericList.Sort((x, y) => y.score.CompareTo(x.score));
		List_1_tD28329A66242A4236EA37A1950A4660B3F9AF1F7 * L_5 = L_4;
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCA1B7E2863AF474F3FFDED0AA53F12C56EE0CB07_il2cpp_TypeInfo_var);
		Comparison_1_t828031481DDDCDFECD647B5D5327482576945BDB * L_6 = ((U3CU3Ec_tCA1B7E2863AF474F3FFDED0AA53F12C56EE0CB07_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCA1B7E2863AF474F3FFDED0AA53F12C56EE0CB07_il2cpp_TypeInfo_var))->get_U3CU3E9__19_0_2();
		Comparison_1_t828031481DDDCDFECD647B5D5327482576945BDB * L_7 = L_6;
		G_B3_0 = L_7;
		G_B3_1 = L_5;
		G_B3_2 = L_5;
		if (L_7)
		{
			G_B4_0 = L_7;
			G_B4_1 = L_5;
			G_B4_2 = L_5;
			goto IL_0036;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCA1B7E2863AF474F3FFDED0AA53F12C56EE0CB07_il2cpp_TypeInfo_var);
		U3CU3Ec_tCA1B7E2863AF474F3FFDED0AA53F12C56EE0CB07 * L_8 = ((U3CU3Ec_tCA1B7E2863AF474F3FFDED0AA53F12C56EE0CB07_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCA1B7E2863AF474F3FFDED0AA53F12C56EE0CB07_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Comparison_1_t828031481DDDCDFECD647B5D5327482576945BDB * L_9 = (Comparison_1_t828031481DDDCDFECD647B5D5327482576945BDB *)il2cpp_codegen_object_new(Comparison_1_t828031481DDDCDFECD647B5D5327482576945BDB_il2cpp_TypeInfo_var);
		Comparison_1__ctor_m00BDA321144DBD25E52E3AACD59FCB15458B889C(L_9, L_8, (intptr_t)((intptr_t)U3CU3Ec_U3CToListHighToLowU3Eb__19_0_mCB94C720BE247F406BD87316BA70BD07E1022177_RuntimeMethod_var), /*hidden argument*/Comparison_1__ctor_m00BDA321144DBD25E52E3AACD59FCB15458B889C_RuntimeMethod_var);
		Comparison_1_t828031481DDDCDFECD647B5D5327482576945BDB * L_10 = L_9;
		((U3CU3Ec_tCA1B7E2863AF474F3FFDED0AA53F12C56EE0CB07_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCA1B7E2863AF474F3FFDED0AA53F12C56EE0CB07_il2cpp_TypeInfo_var))->set_U3CU3E9__19_0_2(L_10);
		G_B4_0 = L_10;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_0036:
	{
		NullCheck(G_B4_1);
		List_1_Sort_mE98B6907239BFB3CD96D0F15541D02735DC00984(G_B4_1, G_B4_0, /*hidden argument*/List_1_Sort_mE98B6907239BFB3CD96D0F15541D02735DC00984_RuntimeMethod_var);
		// return genericList;
		return G_B4_2;
	}
}
// dreamloLeaderBoard/Score[] dreamloLeaderBoard::ToScoreArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScoreU5BU5D_tD3FEF63256F30BA473D428523CC5B54B8AD6CA97* dreamloLeaderBoard_ToScoreArray_mC044109EE675A68DC1914C53B5474A29A557AC20 (dreamloLeaderBoard_t65A12FD2CBA7E92B2703B98E99DCAEB25C7AEBFD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreU5BU5D_tD3FEF63256F30BA473D428523CC5B54B8AD6CA97_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_0 = NULL;
	int32_t V_1 = 0;
	ScoreU5BU5D_tD3FEF63256F30BA473D428523CC5B54B8AD6CA97* V_2 = NULL;
	int32_t V_3 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_4 = NULL;
	Score_t446577E2BC06794D97BE081C982A0D1F51F12D38  V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// var rows = ToStringArray();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0;
		L_0 = dreamloLeaderBoard_ToStringArray_m3D0D4390E35BBAB1DCDF5B8AC50801714AEDC17F(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// if (rows == null) return null;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = V_0;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		// if (rows == null) return null;
		return (ScoreU5BU5D_tD3FEF63256F30BA473D428523CC5B54B8AD6CA97*)NULL;
	}

IL_000c:
	{
		// int rowcount = rows.Length;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = V_0;
		NullCheck(L_2);
		V_1 = ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)));
		// if (rowcount <= 0) return null;
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		// if (rowcount <= 0) return null;
		return (ScoreU5BU5D_tD3FEF63256F30BA473D428523CC5B54B8AD6CA97*)NULL;
	}

IL_0016:
	{
		// var scoreList = new Score[rowcount];
		int32_t L_4 = V_1;
		ScoreU5BU5D_tD3FEF63256F30BA473D428523CC5B54B8AD6CA97* L_5 = (ScoreU5BU5D_tD3FEF63256F30BA473D428523CC5B54B8AD6CA97*)(ScoreU5BU5D_tD3FEF63256F30BA473D428523CC5B54B8AD6CA97*)SZArrayNew(ScoreU5BU5D_tD3FEF63256F30BA473D428523CC5B54B8AD6CA97_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_2 = L_5;
		// for (int i = 0; i < rowcount; i++)
		V_3 = 0;
		goto IL_00d6;
	}

IL_0024:
	{
		// var values = rows[i].Split(new char[] {'|'}, System.StringSplitOptions.None);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = V_0;
		int32_t L_7 = V_3;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		String_t* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_10 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_11 = L_10;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)124));
		NullCheck(L_9);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12;
		L_12 = String_Split_m8334980E85EA3EF1F6204607324D9C34EFA4CA25(L_9, L_11, 0, /*hidden argument*/NULL);
		V_4 = L_12;
		// var current = new Score();
		il2cpp_codegen_initobj((&V_5), sizeof(Score_t446577E2BC06794D97BE081C982A0D1F51F12D38 ));
		// current.playerName = values[0];
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = V_4;
		NullCheck(L_13);
		int32_t L_14 = 0;
		String_t* L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		(&V_5)->set_playerName_0(L_15);
		// current.score = 0;
		(&V_5)->set_score_1(0);
		// current.seconds = 0;
		(&V_5)->set_seconds_2(0);
		// current.shortText = "";
		(&V_5)->set_shortText_3(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// current.dateString = "";
		(&V_5)->set_dateString_4(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// if (values.Length > 1) current.score = CheckInt(values[1]);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16 = V_4;
		NullCheck(L_16);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))) <= ((int32_t)1)))
		{
			goto IL_008d;
		}
	}
	{
		// if (values.Length > 1) current.score = CheckInt(values[1]);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_17 = V_4;
		NullCheck(L_17);
		int32_t L_18 = 1;
		String_t* L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		int32_t L_20;
		L_20 = dreamloLeaderBoard_CheckInt_m5CE9933B56CA0939DE71636087FB1B1EB7792E87(__this, L_19, /*hidden argument*/NULL);
		(&V_5)->set_score_1(L_20);
	}

IL_008d:
	{
		// if (values.Length > 2) current.seconds = CheckInt(values[2]);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_21 = V_4;
		NullCheck(L_21);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))) <= ((int32_t)2)))
		{
			goto IL_00a5;
		}
	}
	{
		// if (values.Length > 2) current.seconds = CheckInt(values[2]);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_22 = V_4;
		NullCheck(L_22);
		int32_t L_23 = 2;
		String_t* L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		int32_t L_25;
		L_25 = dreamloLeaderBoard_CheckInt_m5CE9933B56CA0939DE71636087FB1B1EB7792E87(__this, L_24, /*hidden argument*/NULL);
		(&V_5)->set_seconds_2(L_25);
	}

IL_00a5:
	{
		// if (values.Length > 3) current.shortText = values[3];
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_26 = V_4;
		NullCheck(L_26);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length)))) <= ((int32_t)3)))
		{
			goto IL_00b7;
		}
	}
	{
		// if (values.Length > 3) current.shortText = values[3];
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_27 = V_4;
		NullCheck(L_27);
		int32_t L_28 = 3;
		String_t* L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		(&V_5)->set_shortText_3(L_29);
	}

IL_00b7:
	{
		// if (values.Length > 4) current.dateString = values[4];
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_30 = V_4;
		NullCheck(L_30);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))) <= ((int32_t)4)))
		{
			goto IL_00c9;
		}
	}
	{
		// if (values.Length > 4) current.dateString = values[4];
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_31 = V_4;
		NullCheck(L_31);
		int32_t L_32 = 4;
		String_t* L_33 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		(&V_5)->set_dateString_4(L_33);
	}

IL_00c9:
	{
		// scoreList[i] = current;
		ScoreU5BU5D_tD3FEF63256F30BA473D428523CC5B54B8AD6CA97* L_34 = V_2;
		int32_t L_35 = V_3;
		Score_t446577E2BC06794D97BE081C982A0D1F51F12D38  L_36 = V_5;
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(L_35), (Score_t446577E2BC06794D97BE081C982A0D1F51F12D38 )L_36);
		// for (int i = 0; i < rowcount; i++)
		int32_t L_37 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
	}

IL_00d6:
	{
		// for (int i = 0; i < rowcount; i++)
		int32_t L_38 = V_3;
		int32_t L_39 = V_1;
		if ((((int32_t)L_38) < ((int32_t)L_39)))
		{
			goto IL_0024;
		}
	}
	{
		// return scoreList;
		ScoreU5BU5D_tD3FEF63256F30BA473D428523CC5B54B8AD6CA97* L_40 = V_2;
		return L_40;
	}
}
// System.String dreamloLeaderBoard::Clean(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* dreamloLeaderBoard_Clean_m0991582E48FDEAD71BBFECDB51751E20F20CFAD1 (dreamloLeaderBoard_t65A12FD2CBA7E92B2703B98E99DCAEB25C7AEBFD * __this, String_t* ___s0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s = s.Replace("/", "");
		String_t* L_0 = ___s0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D(L_0, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		___s0 = L_1;
		// s = s.Replace("|", "");
		String_t* L_2 = ___s0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D(L_2, _stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		___s0 = L_3;
		// return s;
		String_t* L_4 = ___s0;
		return L_4;
	}
}
// System.Int32 dreamloLeaderBoard::CheckInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t dreamloLeaderBoard_CheckInt_m5CE9933B56CA0939DE71636087FB1B1EB7792E87 (dreamloLeaderBoard_t65A12FD2CBA7E92B2703B98E99DCAEB25C7AEBFD * __this, String_t* ___s0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// int x = 0;
		V_0 = 0;
		// int.TryParse(s, out x);
		String_t* L_0 = ___s0;
		bool L_1;
		L_1 = Int32_TryParse_m748B8DB1D0C9D25C3D1812D7887411C4AFC1DDC2(L_0, (int32_t*)(&V_0), /*hidden argument*/NULL);
		// return x;
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void dreamloLeaderBoard::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dreamloLeaderBoard__ctor_m88503B3FC6A0281988E3543DED94D0866A666B23 (dreamloLeaderBoard_t65A12FD2CBA7E92B2703B98E99DCAEB25C7AEBFD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD074501BF114F32796BC9BD70562AD9C2DEF7B9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string dreamloWebserviceURL = "http://dreamlo.com/lb/";
		__this->set_dreamloWebserviceURL_4(_stringLiteralDD074501BF114F32796BC9BD70562AD9C2DEF7B9);
		// public string privateCode = "";
		__this->set_privateCode_6(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string publicCode = "";
		__this->set_publicCode_7(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// string highScores = "";
		__this->set_highScores_8(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// dreamloPromoCode dreamloPromoCode::GetSceneDreamloPromoCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR dreamloPromoCode_t640CC04DDAA3833B88CD2CF574BE448502BAFF2B * dreamloPromoCode_GetSceneDreamloPromoCode_mBC1ECFAE3E8AAEDE07FB88FA784A90670F09AEF9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisdreamloPromoCode_t640CC04DDAA3833B88CD2CF574BE448502BAFF2B_m958A87A8953E497EAA533CB3FE4D6779F0ECBF7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A8C0D3418190266F35F3BC41EC150D20764A01C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7C92D2F1CBC2875B49A2AA37D64844762020931);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	{
		// GameObject go = GameObject.Find("dreamloPrefab");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralA7C92D2F1CBC2875B49A2AA37D64844762020931, /*hidden argument*/NULL);
		V_0 = L_0;
		// if (go == null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// Debug.LogError("Could not find dreamloPrefab in the scene.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral6A8C0D3418190266F35F3BC41EC150D20764A01C, /*hidden argument*/NULL);
		// return null;
		return (dreamloPromoCode_t640CC04DDAA3833B88CD2CF574BE448502BAFF2B *)NULL;
	}

IL_0020:
	{
		// return go.GetComponent<dreamloPromoCode>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = V_0;
		NullCheck(L_3);
		dreamloPromoCode_t640CC04DDAA3833B88CD2CF574BE448502BAFF2B * L_4;
		L_4 = GameObject_GetComponent_TisdreamloPromoCode_t640CC04DDAA3833B88CD2CF574BE448502BAFF2B_m958A87A8953E497EAA533CB3FE4D6779F0ECBF7E(L_3, /*hidden argument*/GameObject_GetComponent_TisdreamloPromoCode_t640CC04DDAA3833B88CD2CF574BE448502BAFF2B_m958A87A8953E497EAA533CB3FE4D6779F0ECBF7E_RuntimeMethod_var);
		return L_4;
	}
}
// System.Void dreamloPromoCode::RedeemCode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dreamloPromoCode_RedeemCode_m38F6652307171AA5FFFCC1BB91AD02712B31651F (dreamloPromoCode_t640CC04DDAA3833B88CD2CF574BE448502BAFF2B * __this, String_t* ___code0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67F6A23DA8A4DC44104F959E3CE0006AAF0DFB43);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84476C4AD7193DC00822163A62F7EBB6A86F65CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// this.value = "";
		__this->set_value_6(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// this.error = "";
		__this->set_error_7(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// if (publicCode == "")
		String_t* L_0 = __this->get_publicCode_5();
		bool L_1;
		L_1 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		// Debug.LogError("You forgot to set the public code variable");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral84476C4AD7193DC00822163A62F7EBB6A86F65CE, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0033:
	{
		// string URL = dreamloWebserviceURL + publicCode + "/redeem/" + code;
		String_t* L_2 = __this->get_dreamloWebserviceURL_4();
		String_t* L_3 = __this->get_publicCode_5();
		String_t* L_4 = ___code0;
		String_t* L_5;
		L_5 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(L_2, L_3, _stringLiteral67F6A23DA8A4DC44104F959E3CE0006AAF0DFB43, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// StartCoroutine(WebService(URL));
		String_t* L_6 = V_0;
		RuntimeObject* L_7;
		L_7 = dreamloPromoCode_WebService_m7E598214AC139C1FD5F535813A35C2CABF1EAEBE(__this, L_6, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_8;
		L_8 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator dreamloPromoCode::WebService(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* dreamloPromoCode_WebService_m7E598214AC139C1FD5F535813A35C2CABF1EAEBE (dreamloPromoCode_t640CC04DDAA3833B88CD2CF574BE448502BAFF2B * __this, String_t* ___url0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWebServiceU3Ed__8_tB0266360203FE8C7B51C5262D5E45CC6047B13B3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWebServiceU3Ed__8_tB0266360203FE8C7B51C5262D5E45CC6047B13B3 * L_0 = (U3CWebServiceU3Ed__8_tB0266360203FE8C7B51C5262D5E45CC6047B13B3 *)il2cpp_codegen_object_new(U3CWebServiceU3Ed__8_tB0266360203FE8C7B51C5262D5E45CC6047B13B3_il2cpp_TypeInfo_var);
		U3CWebServiceU3Ed__8__ctor_m1DDE835929CB5251B68FF1F99A4CA2B2D38E7D4D(L_0, 0, /*hidden argument*/NULL);
		U3CWebServiceU3Ed__8_tB0266360203FE8C7B51C5262D5E45CC6047B13B3 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		U3CWebServiceU3Ed__8_tB0266360203FE8C7B51C5262D5E45CC6047B13B3 * L_2 = L_1;
		String_t* L_3 = ___url0;
		NullCheck(L_2);
		L_2->set_url_3(L_3);
		return L_2;
	}
}
// System.Void dreamloPromoCode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dreamloPromoCode__ctor_m96EED30834166353BA74B92C5E93623BEC5356E7 (dreamloPromoCode_t640CC04DDAA3833B88CD2CF574BE448502BAFF2B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB516612CABD890B6939D1FCC90888218EA78A0AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string dreamloWebserviceURL = "http://dreamlo.com/pc/";
		__this->set_dreamloWebserviceURL_4(_stringLiteralB516612CABD890B6939D1FCC90888218EA78A0AA);
		// public string publicCode = "";
		__this->set_publicCode_5(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string value = "";
		__this->set_value_6(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string error = "";
		__this->set_error_7(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void GameController/<CheckIfTheCardsMatch>d__27::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckIfTheCardsMatchU3Ed__27__ctor_m94D7B824E10AFA5539D97103044DC975BBBC936B (U3CCheckIfTheCardsMatchU3Ed__27_tAFEE8962B9D3C4649B097434888F94AAC8A83783 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void GameController/<CheckIfTheCardsMatch>d__27::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckIfTheCardsMatchU3Ed__27_System_IDisposable_Dispose_m35FBBD96A9029E3222E278B312A45B08CAE50430 (U3CCheckIfTheCardsMatchU3Ed__27_tAFEE8962B9D3C4649B097434888F94AAC8A83783 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean GameController/<CheckIfTheCardsMatch>d__27::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCheckIfTheCardsMatchU3Ed__27_MoveNext_m4062B5F4688B5E451368FEC49027233FB7EC83F7 (U3CCheckIfTheCardsMatchU3Ed__27_tAFEE8962B9D3C4649B097434888F94AAC8A83783 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0137FA1532E52BCE2C354C7E3689B9833F3C7711_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * V_1 = NULL;
	bool V_2 = false;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_002a;
			}
			case 1:
			{
				goto IL_004a;
			}
			case 2:
			{
				goto IL_0080;
			}
			case 3:
			{
				goto IL_013e;
			}
			case 4:
			{
				goto IL_01a0;
			}
		}
	}
	{
		return (bool)0;
	}

IL_002a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(1f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_3 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_3, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_004a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (firstGuessCard == secondGuessCard)
		GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * L_4 = V_1;
		NullCheck(L_4);
		String_t* L_5 = L_4->get_firstGuessCard_21();
		GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * L_6 = V_1;
		NullCheck(L_6);
		String_t* L_7 = L_6->get_secondGuessCard_22();
		bool L_8;
		L_8 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_5, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0125;
		}
	}
	{
		// yield return new WaitForSeconds(.5f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_9 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_9, (0.5f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_9);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0080:
	{
		__this->set_U3CU3E1__state_0((-1));
		// btns[firstGuessIndex].interactable = false;
		GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * L_10 = V_1;
		NullCheck(L_10);
		List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * L_11 = L_10->get_btns_7();
		GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * L_12 = V_1;
		NullCheck(L_12);
		int32_t L_13 = L_12->get_firstGuessIndex_19();
		NullCheck(L_11);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_14;
		L_14 = List_1_get_Item_m0137FA1532E52BCE2C354C7E3689B9833F3C7711_inline(L_11, L_13, /*hidden argument*/List_1_get_Item_m0137FA1532E52BCE2C354C7E3689B9833F3C7711_RuntimeMethod_var);
		NullCheck(L_14);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_14, (bool)0, /*hidden argument*/NULL);
		// btns[secondGuessIndex].interactable = false;
		GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * L_15 = V_1;
		NullCheck(L_15);
		List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * L_16 = L_15->get_btns_7();
		GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * L_17 = V_1;
		NullCheck(L_17);
		int32_t L_18 = L_17->get_secondGuessIndex_20();
		NullCheck(L_16);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_19;
		L_19 = List_1_get_Item_m0137FA1532E52BCE2C354C7E3689B9833F3C7711_inline(L_16, L_18, /*hidden argument*/List_1_get_Item_m0137FA1532E52BCE2C354C7E3689B9833F3C7711_RuntimeMethod_var);
		NullCheck(L_19);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_19, (bool)0, /*hidden argument*/NULL);
		// btns[firstGuessIndex].image.color = new Color(0, 0, 0, 0);
		GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * L_20 = V_1;
		NullCheck(L_20);
		List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * L_21 = L_20->get_btns_7();
		GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * L_22 = V_1;
		NullCheck(L_22);
		int32_t L_23 = L_22->get_firstGuessIndex_19();
		NullCheck(L_21);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_24;
		L_24 = List_1_get_Item_m0137FA1532E52BCE2C354C7E3689B9833F3C7711_inline(L_21, L_23, /*hidden argument*/List_1_get_Item_m0137FA1532E52BCE2C354C7E3689B9833F3C7711_RuntimeMethod_var);
		NullCheck(L_24);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_25;
		L_25 = Selectable_get_image_mAB45C107C7C858ECBEFFFF540B8C69746BB6C6FE(L_24, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_26;
		memset((&L_26), 0, sizeof(L_26));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_26), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_25);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_25, L_26);
		// btns[secondGuessIndex].image.color = new Color(0, 0, 0, 0);
		GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * L_27 = V_1;
		NullCheck(L_27);
		List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * L_28 = L_27->get_btns_7();
		GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * L_29 = V_1;
		NullCheck(L_29);
		int32_t L_30 = L_29->get_secondGuessIndex_20();
		NullCheck(L_28);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_31;
		L_31 = List_1_get_Item_m0137FA1532E52BCE2C354C7E3689B9833F3C7711_inline(L_28, L_30, /*hidden argument*/List_1_get_Item_m0137FA1532E52BCE2C354C7E3689B9833F3C7711_RuntimeMethod_var);
		NullCheck(L_31);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_32;
		L_32 = Selectable_get_image_mAB45C107C7C858ECBEFFFF540B8C69746BB6C6FE(L_31, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_33;
		memset((&L_33), 0, sizeof(L_33));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_33), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_32);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_32, L_33);
		// CheckIfTheGameIsFinished();
		GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * L_34 = V_1;
		NullCheck(L_34);
		GameController_CheckIfTheGameIsFinished_mD0A03B6C47DFCD5D2153FA11D03F89225FD25456(L_34, /*hidden argument*/NULL);
		// }
		goto IL_0187;
	}

IL_0125:
	{
		// yield return new WaitForSeconds(.5f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_35 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_35, (0.5f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_35);
		__this->set_U3CU3E1__state_0(3);
		return (bool)1;
	}

IL_013e:
	{
		__this->set_U3CU3E1__state_0((-1));
		// btns[firstGuessIndex].image.sprite = bgImage;
		GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * L_36 = V_1;
		NullCheck(L_36);
		List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * L_37 = L_36->get_btns_7();
		GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * L_38 = V_1;
		NullCheck(L_38);
		int32_t L_39 = L_38->get_firstGuessIndex_19();
		NullCheck(L_37);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_40;
		L_40 = List_1_get_Item_m0137FA1532E52BCE2C354C7E3689B9833F3C7711_inline(L_37, L_39, /*hidden argument*/List_1_get_Item_m0137FA1532E52BCE2C354C7E3689B9833F3C7711_RuntimeMethod_var);
		NullCheck(L_40);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_41;
		L_41 = Selectable_get_image_mAB45C107C7C858ECBEFFFF540B8C69746BB6C6FE(L_40, /*hidden argument*/NULL);
		GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * L_42 = V_1;
		NullCheck(L_42);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_43 = L_42->get_bgImage_4();
		NullCheck(L_41);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_41, L_43, /*hidden argument*/NULL);
		// btns[secondGuessIndex].image.sprite = bgImage;
		GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * L_44 = V_1;
		NullCheck(L_44);
		List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * L_45 = L_44->get_btns_7();
		GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * L_46 = V_1;
		NullCheck(L_46);
		int32_t L_47 = L_46->get_secondGuessIndex_20();
		NullCheck(L_45);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_48;
		L_48 = List_1_get_Item_m0137FA1532E52BCE2C354C7E3689B9833F3C7711_inline(L_45, L_47, /*hidden argument*/List_1_get_Item_m0137FA1532E52BCE2C354C7E3689B9833F3C7711_RuntimeMethod_var);
		NullCheck(L_48);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_49;
		L_49 = Selectable_get_image_mAB45C107C7C858ECBEFFFF540B8C69746BB6C6FE(L_48, /*hidden argument*/NULL);
		GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * L_50 = V_1;
		NullCheck(L_50);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_51 = L_50->get_bgImage_4();
		NullCheck(L_49);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_49, L_51, /*hidden argument*/NULL);
	}

IL_0187:
	{
		// yield return new WaitForSeconds(.5f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_52 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_52, (0.5f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_52);
		__this->set_U3CU3E1__state_0(4);
		return (bool)1;
	}

IL_01a0:
	{
		__this->set_U3CU3E1__state_0((-1));
		// firstGuess = secondGuess = false;
		GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * L_53 = V_1;
		GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * L_54 = V_1;
		int32_t L_55 = 0;
		V_2 = (bool)L_55;
		NullCheck(L_54);
		L_54->set_secondGuess_14((bool)L_55);
		bool L_56 = V_2;
		NullCheck(L_53);
		L_53->set_firstGuess_13(L_56);
		// }
		return (bool)0;
	}
}
// System.Object GameController/<CheckIfTheCardsMatch>d__27::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCheckIfTheCardsMatchU3Ed__27_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m33F72AA936B8B0935E50A223224BA5C7C9E5E110 (U3CCheckIfTheCardsMatchU3Ed__27_tAFEE8962B9D3C4649B097434888F94AAC8A83783 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void GameController/<CheckIfTheCardsMatch>d__27::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckIfTheCardsMatchU3Ed__27_System_Collections_IEnumerator_Reset_m49265A0C19FED592D400CAFBFFF0808F63FE7289 (U3CCheckIfTheCardsMatchU3Ed__27_tAFEE8962B9D3C4649B097434888F94AAC8A83783 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCheckIfTheCardsMatchU3Ed__27_System_Collections_IEnumerator_Reset_m49265A0C19FED592D400CAFBFFF0808F63FE7289_RuntimeMethod_var)));
	}
}
// System.Object GameController/<CheckIfTheCardsMatch>d__27::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCheckIfTheCardsMatchU3Ed__27_System_Collections_IEnumerator_get_Current_m1A4F5F0B17707D98C9CA737961E6C792673BA86E (U3CCheckIfTheCardsMatchU3Ed__27_tAFEE8962B9D3C4649B097434888F94AAC8A83783 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void GetGPS/<StartGPS>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartGPSU3Ed__5__ctor_mA6C34C1F778BE8DE25884861BC0BE54692AEDE9C (U3CStartGPSU3Ed__5_t2FF10F0DE079CEBBEFD66B2B05DA3AD2C111B5E5 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void GetGPS/<StartGPS>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartGPSU3Ed__5_System_IDisposable_Dispose_m1DF3B117056D83E1222B1078A7E407B76884CEE7 (U3CStartGPSU3Ed__5_t2FF10F0DE079CEBBEFD66B2B05DA3AD2C111B5E5 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean GetGPS/<StartGPS>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartGPSU3Ed__5_MoveNext_mFCE9869EFE87A62CE60B476C332DF86CAA873487 (U3CStartGPSU3Ed__5_t2FF10F0DE079CEBBEFD66B2B05DA3AD2C111B5E5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral543D36208DB93FD0F9FC1C09FE32CA79E3698DE3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DCD588B57B1C6C7CC9DB14D0A00F4F78FAE5248);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F6FF6CD6EB3EA52B18703D83FA37B118DB14C2B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB06EE00770B2EB0FE33E9670047E763ABF99ABBD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC25A5DB0A9403F923F7FED91C46F0B4C3FE808AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2EE8E73413D8C0EC384803067E74CF1A2A1AAFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF072D06D5B28B2B30B1C6C51C29BBE3356185F32);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GetGPS_tD132A0E0C3FB5649A8D89F4CC2F4348967F1F5C0 * V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	LocationInfo_t7FC872AE105FF29421AFC8BBEE071F6C36E44769  V_4;
	memset((&V_4), 0, sizeof(V_4));
	float V_5 = 0.0f;
	double V_6 = 0.0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		GetGPS_tD132A0E0C3FB5649A8D89F4CC2F4348967F1F5C0 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_002e;
			}
			case 1:
			{
				goto IL_007d;
			}
			case 2:
			{
				goto IL_00bb;
			}
			case 3:
			{
				goto IL_0111;
			}
			case 4:
			{
				goto IL_0145;
			}
			case 5:
			{
				goto IL_01e9;
			}
		}
	}
	{
		return (bool)0;
	}

IL_002e:
	{
		__this->set_U3CU3E1__state_0((-1));
		//         if (!Input.location.isEnabledByUser)
		LocationService_tDCB7C3AA7A10C4727D49676FD3A902F48C27F855 * L_3;
		L_3 = Input_get_location_m5D0AE1016E410D3D7411904D0706456DE383F4E5(/*hidden argument*/NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = LocationService_get_isEnabledByUser_mD26BB9D35EC9DE4B38F7771B5E910B14EFC2B00A(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0084;
		}
	}
	{
		// this.gps_info = "isEnabledByUser value is:" + Input.location.isEnabledByUser.ToString() + " Please turn on the GPS";
		GetGPS_tD132A0E0C3FB5649A8D89F4CC2F4348967F1F5C0 * L_5 = V_1;
		LocationService_tDCB7C3AA7A10C4727D49676FD3A902F48C27F855 * L_6;
		L_6 = Input_get_location_m5D0AE1016E410D3D7411904D0706456DE383F4E5(/*hidden argument*/NULL);
		NullCheck(L_6);
		bool L_7;
		L_7 = LocationService_get_isEnabledByUser_mD26BB9D35EC9DE4B38F7771B5E910B14EFC2B00A(L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		String_t* L_8;
		L_8 = Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C((bool*)(&V_2), /*hidden argument*/NULL);
		String_t* L_9;
		L_9 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralF072D06D5B28B2B30B1C6C51C29BBE3356185F32, L_8, _stringLiteral543D36208DB93FD0F9FC1C09FE32CA79E3698DE3, /*hidden argument*/NULL);
		NullCheck(L_5);
		L_5->set_gps_info_4(L_9);
		// yield return false;
		bool L_10 = ((bool)0);
		RuntimeObject * L_11 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_10);
		__this->set_U3CU3E2__current_1(L_11);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_007d:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0084:
	{
		//         Input.location.Start(10.0f, 10.0f);
		LocationService_tDCB7C3AA7A10C4727D49676FD3A902F48C27F855 * L_12;
		L_12 = Input_get_location_m5D0AE1016E410D3D7411904D0706456DE383F4E5(/*hidden argument*/NULL);
		NullCheck(L_12);
		LocationService_Start_m625DBB1AF4D9E01C6DD790A2E536AC278072D53A(L_12, (10.0f), (10.0f), /*hidden argument*/NULL);
		// int maxWait = 20;
		__this->set_U3CmaxWaitU3E5__2_3(((int32_t)20));
		goto IL_00d2;
	}

IL_00a2:
	{
		//             yield return new WaitForSeconds(1);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_13 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_13, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_13);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_00bb:
	{
		__this->set_U3CU3E1__state_0((-1));
		// maxWait--;
		int32_t L_14 = __this->get_U3CmaxWaitU3E5__2_3();
		V_3 = L_14;
		int32_t L_15 = V_3;
		__this->set_U3CmaxWaitU3E5__2_3(((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)1)));
	}

IL_00d2:
	{
		// while (Input.location.status == LocationServiceStatus.Initializing && maxWait > 0)
		LocationService_tDCB7C3AA7A10C4727D49676FD3A902F48C27F855 * L_16;
		L_16 = Input_get_location_m5D0AE1016E410D3D7411904D0706456DE383F4E5(/*hidden argument*/NULL);
		NullCheck(L_16);
		int32_t L_17;
		L_17 = LocationService_get_status_m1E90C9991825BDF5A3AC066D97F9198568055C54(L_16, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_17) == ((uint32_t)1))))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_18 = __this->get_U3CmaxWaitU3E5__2_3();
		if ((((int32_t)L_18) > ((int32_t)0)))
		{
			goto IL_00a2;
		}
	}

IL_00e8:
	{
		// if (maxWait < 1)
		int32_t L_19 = __this->get_U3CmaxWaitU3E5__2_3();
		if ((((int32_t)L_19) >= ((int32_t)1)))
		{
			goto IL_0118;
		}
	}
	{
		// this.gps_info = "Init GPS service time out";
		GetGPS_tD132A0E0C3FB5649A8D89F4CC2F4348967F1F5C0 * L_20 = V_1;
		NullCheck(L_20);
		L_20->set_gps_info_4(_stringLiteralC25A5DB0A9403F923F7FED91C46F0B4C3FE808AF);
		// yield return false;
		bool L_21 = ((bool)0);
		RuntimeObject * L_22 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_21);
		__this->set_U3CU3E2__current_1(L_22);
		__this->set_U3CU3E1__state_0(3);
		return (bool)1;
	}

IL_0111:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0118:
	{
		// if (Input.location.status == LocationServiceStatus.Failed)
		LocationService_tDCB7C3AA7A10C4727D49676FD3A902F48C27F855 * L_23;
		L_23 = Input_get_location_m5D0AE1016E410D3D7411904D0706456DE383F4E5(/*hidden argument*/NULL);
		NullCheck(L_23);
		int32_t L_24;
		L_24 = LocationService_get_status_m1E90C9991825BDF5A3AC066D97F9198568055C54(L_23, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_24) == ((uint32_t)3))))
		{
			goto IL_0151;
		}
	}
	{
		// this.gps_info = "Unable to determine device location";
		GetGPS_tD132A0E0C3FB5649A8D89F4CC2F4348967F1F5C0 * L_25 = V_1;
		NullCheck(L_25);
		L_25->set_gps_info_4(_stringLiteralE2EE8E73413D8C0EC384803067E74CF1A2A1AAFB);
		// yield return false;
		bool L_26 = ((bool)0);
		RuntimeObject * L_27 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_26);
		__this->set_U3CU3E2__current_1(L_27);
		__this->set_U3CU3E1__state_0(4);
		return (bool)1;
	}

IL_0145:
	{
		__this->set_U3CU3E1__state_0((-1));
		// }
		goto IL_01f0;
	}

IL_0151:
	{
		// this.gps_info = "N:" + Input.location.lastData.latitude + " E:" + Input.location.lastData.longitude;
		GetGPS_tD132A0E0C3FB5649A8D89F4CC2F4348967F1F5C0 * L_28 = V_1;
		LocationService_tDCB7C3AA7A10C4727D49676FD3A902F48C27F855 * L_29;
		L_29 = Input_get_location_m5D0AE1016E410D3D7411904D0706456DE383F4E5(/*hidden argument*/NULL);
		NullCheck(L_29);
		LocationInfo_t7FC872AE105FF29421AFC8BBEE071F6C36E44769  L_30;
		L_30 = LocationService_get_lastData_mD6EAC681E09427969B18EEC9B85DA43633EFEA1F(L_29, /*hidden argument*/NULL);
		V_4 = L_30;
		float L_31;
		L_31 = LocationInfo_get_latitude_m09F2DFBDB716C46B0ECFD11F6A5DB2B93B06174B((LocationInfo_t7FC872AE105FF29421AFC8BBEE071F6C36E44769 *)(&V_4), /*hidden argument*/NULL);
		V_5 = L_31;
		String_t* L_32;
		L_32 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_5), /*hidden argument*/NULL);
		LocationService_tDCB7C3AA7A10C4727D49676FD3A902F48C27F855 * L_33;
		L_33 = Input_get_location_m5D0AE1016E410D3D7411904D0706456DE383F4E5(/*hidden argument*/NULL);
		NullCheck(L_33);
		LocationInfo_t7FC872AE105FF29421AFC8BBEE071F6C36E44769  L_34;
		L_34 = LocationService_get_lastData_mD6EAC681E09427969B18EEC9B85DA43633EFEA1F(L_33, /*hidden argument*/NULL);
		V_4 = L_34;
		float L_35;
		L_35 = LocationInfo_get_longitude_mD0F77FFCF02AFB63058C77A4EBAE228528F57A50((LocationInfo_t7FC872AE105FF29421AFC8BBEE071F6C36E44769 *)(&V_4), /*hidden argument*/NULL);
		V_5 = L_35;
		String_t* L_36;
		L_36 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_5), /*hidden argument*/NULL);
		String_t* L_37;
		L_37 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteral5DCD588B57B1C6C7CC9DB14D0A00F4F78FAE5248, L_32, _stringLiteralB06EE00770B2EB0FE33E9670047E763ABF99ABBD, L_36, /*hidden argument*/NULL);
		NullCheck(L_28);
		L_28->set_gps_info_4(L_37);
		// this.gps_info = this.gps_info + " Time:" + Input.location.lastData.timestamp;
		GetGPS_tD132A0E0C3FB5649A8D89F4CC2F4348967F1F5C0 * L_38 = V_1;
		GetGPS_tD132A0E0C3FB5649A8D89F4CC2F4348967F1F5C0 * L_39 = V_1;
		NullCheck(L_39);
		String_t* L_40 = L_39->get_gps_info_4();
		LocationService_tDCB7C3AA7A10C4727D49676FD3A902F48C27F855 * L_41;
		L_41 = Input_get_location_m5D0AE1016E410D3D7411904D0706456DE383F4E5(/*hidden argument*/NULL);
		NullCheck(L_41);
		LocationInfo_t7FC872AE105FF29421AFC8BBEE071F6C36E44769  L_42;
		L_42 = LocationService_get_lastData_mD6EAC681E09427969B18EEC9B85DA43633EFEA1F(L_41, /*hidden argument*/NULL);
		V_4 = L_42;
		double L_43;
		L_43 = LocationInfo_get_timestamp_m16DAEBB8C94F2E000E874254FA0FF6BD0E02AFE2((LocationInfo_t7FC872AE105FF29421AFC8BBEE071F6C36E44769 *)(&V_4), /*hidden argument*/NULL);
		V_6 = L_43;
		String_t* L_44;
		L_44 = Double_ToString_m87E4A4DC004A167CF0AE1F2D271BC20A708CE57D((double*)(&V_6), /*hidden argument*/NULL);
		String_t* L_45;
		L_45 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_40, _stringLiteral6F6FF6CD6EB3EA52B18703D83FA37B118DB14C2B, L_44, /*hidden argument*/NULL);
		NullCheck(L_38);
		L_38->set_gps_info_4(L_45);
		// yield return new WaitForSeconds(100);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_46 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_46, (100.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_46);
		__this->set_U3CU3E1__state_0(5);
		return (bool)1;
	}

IL_01e9:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_01f0:
	{
		// }
		return (bool)0;
	}
}
// System.Object GetGPS/<StartGPS>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartGPSU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mBC4511F4F21C3942FB7F2592B56CD10065363357 (U3CStartGPSU3Ed__5_t2FF10F0DE079CEBBEFD66B2B05DA3AD2C111B5E5 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void GetGPS/<StartGPS>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartGPSU3Ed__5_System_Collections_IEnumerator_Reset_m502D2FBBCBC2F28EB0B19E25C6690CA0E3BB300F (U3CStartGPSU3Ed__5_t2FF10F0DE079CEBBEFD66B2B05DA3AD2C111B5E5 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartGPSU3Ed__5_System_Collections_IEnumerator_Reset_m502D2FBBCBC2F28EB0B19E25C6690CA0E3BB300F_RuntimeMethod_var)));
	}
}
// System.Object GetGPS/<StartGPS>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartGPSU3Ed__5_System_Collections_IEnumerator_get_Current_m9113A5CAF0347DC6029369ADCDFD3F4415BB097A (U3CStartGPSU3Ed__5_t2FF10F0DE079CEBBEFD66B2B05DA3AD2C111B5E5 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void LeaderBoardManager/<StartGPS>d__26::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartGPSU3Ed__26__ctor_mCFAE8B06E7B88B5F75AB5611FF8C8C9DF9EF9F1E (U3CStartGPSU3Ed__26_t6F1765BD5FAE2C4A1D0A6808B7AF630071317C62 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void LeaderBoardManager/<StartGPS>d__26::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartGPSU3Ed__26_System_IDisposable_Dispose_mAE4BAFC749E900E958FAED1ABBC0D2BD5C6F0820 (U3CStartGPSU3Ed__26_t6F1765BD5FAE2C4A1D0A6808B7AF630071317C62 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean LeaderBoardManager/<StartGPS>d__26::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartGPSU3Ed__26_MoveNext_mAD7009731ADACE2A4609D4516371FE749CDDB73D (U3CStartGPSU3Ed__26_t6F1765BD5FAE2C4A1D0A6808B7AF630071317C62 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7FC82044036AE81DA8362BFACEDB4D035D18021);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB671438C5B9CB3BC80A2957192B3D1A578920C5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5BE21AD03087F27EAB6A7566CD10058CEA003D9);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	LeaderBoardManager_t87404B730BDD0E9A35EF39995ADE28BBE797C023 * V_1 = NULL;
	int32_t V_2 = 0;
	LocationInfo_t7FC872AE105FF29421AFC8BBEE071F6C36E44769  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		LeaderBoardManager_t87404B730BDD0E9A35EF39995ADE28BBE797C023 * L_1 = __this->get_U3CU3E4__this_2();
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
				goto IL_0062;
			}
			case 2:
			{
				goto IL_00a2;
			}
			case 3:
			{
				goto IL_017e;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (!Input.location.isEnabledByUser)
		LocationService_tDCB7C3AA7A10C4727D49676FD3A902F48C27F855 * L_3;
		L_3 = Input_get_location_m5D0AE1016E410D3D7411904D0706456DE383F4E5(/*hidden argument*/NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = LocationService_get_isEnabledByUser_mD26BB9D35EC9DE4B38F7771B5E910B14EFC2B00A(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_006b;
		}
	}
	{
		// GPS.text = "Location disabled";
		LeaderBoardManager_t87404B730BDD0E9A35EF39995ADE28BBE797C023 * L_5 = V_1;
		NullCheck(L_5);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_6 = L_5->get_GPS_6();
		NullCheck(L_6);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, _stringLiteralB7FC82044036AE81DA8362BFACEDB4D035D18021);
		// yield return new WaitForSeconds(3);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_7 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_7, (3.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_7);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0062:
	{
		__this->set_U3CU3E1__state_0((-1));
		// }
		goto IL_007f;
	}

IL_006b:
	{
		// Input.location.Start(1.0f, 1.0f);
		LocationService_tDCB7C3AA7A10C4727D49676FD3A902F48C27F855 * L_8;
		L_8 = Input_get_location_m5D0AE1016E410D3D7411904D0706456DE383F4E5(/*hidden argument*/NULL);
		NullCheck(L_8);
		LocationService_Start_m625DBB1AF4D9E01C6DD790A2E536AC278072D53A(L_8, (1.0f), (1.0f), /*hidden argument*/NULL);
	}

IL_007f:
	{
		// int maxWait = 20;
		__this->set_U3CmaxWaitU3E5__2_3(((int32_t)20));
		goto IL_00b9;
	}

IL_0089:
	{
		// yield return new WaitForSeconds(1);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_9 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_9, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_9);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_00a2:
	{
		__this->set_U3CU3E1__state_0((-1));
		// maxWait--;
		int32_t L_10 = __this->get_U3CmaxWaitU3E5__2_3();
		V_2 = L_10;
		int32_t L_11 = V_2;
		__this->set_U3CmaxWaitU3E5__2_3(((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)1)));
	}

IL_00b9:
	{
		// while (Input.location.status == LocationServiceStatus.Initializing && maxWait > 0)
		LocationService_tDCB7C3AA7A10C4727D49676FD3A902F48C27F855 * L_12;
		L_12 = Input_get_location_m5D0AE1016E410D3D7411904D0706456DE383F4E5(/*hidden argument*/NULL);
		NullCheck(L_12);
		int32_t L_13;
		L_13 = LocationService_get_status_m1E90C9991825BDF5A3AC066D97F9198568055C54(L_12, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_13) == ((uint32_t)1))))
		{
			goto IL_00cf;
		}
	}
	{
		int32_t L_14 = __this->get_U3CmaxWaitU3E5__2_3();
		if ((((int32_t)L_14) > ((int32_t)0)))
		{
			goto IL_0089;
		}
	}

IL_00cf:
	{
		// if (maxWait < 1)
		int32_t L_15 = __this->get_U3CmaxWaitU3E5__2_3();
		if ((((int32_t)L_15) >= ((int32_t)1)))
		{
			goto IL_00ea;
		}
	}
	{
		// GPS.text = "Overtime";
		LeaderBoardManager_t87404B730BDD0E9A35EF39995ADE28BBE797C023 * L_16 = V_1;
		NullCheck(L_16);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_17 = L_16->get_GPS_6();
		NullCheck(L_17);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_17, _stringLiteralDB671438C5B9CB3BC80A2957192B3D1A578920C5);
		// yield break;
		return (bool)0;
	}

IL_00ea:
	{
		// if (Input.location.status == LocationServiceStatus.Failed)
		LocationService_tDCB7C3AA7A10C4727D49676FD3A902F48C27F855 * L_18;
		L_18 = Input_get_location_m5D0AE1016E410D3D7411904D0706456DE383F4E5(/*hidden argument*/NULL);
		NullCheck(L_18);
		int32_t L_19;
		L_19 = LocationService_get_status_m1E90C9991825BDF5A3AC066D97F9198568055C54(L_18, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_19) == ((uint32_t)3))))
		{
			goto IL_0109;
		}
	}
	{
		// GPS.text = "Failed";
		LeaderBoardManager_t87404B730BDD0E9A35EF39995ADE28BBE797C023 * L_20 = V_1;
		NullCheck(L_20);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_21 = L_20->get_GPS_6();
		NullCheck(L_21);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_21, _stringLiteralE5BE21AD03087F27EAB6A7566CD10058CEA003D9);
		// yield break;
		return (bool)0;
	}

IL_0109:
	{
		// myN = Input.location.lastData.latitude;
		LeaderBoardManager_t87404B730BDD0E9A35EF39995ADE28BBE797C023 * L_22 = V_1;
		LocationService_tDCB7C3AA7A10C4727D49676FD3A902F48C27F855 * L_23;
		L_23 = Input_get_location_m5D0AE1016E410D3D7411904D0706456DE383F4E5(/*hidden argument*/NULL);
		NullCheck(L_23);
		LocationInfo_t7FC872AE105FF29421AFC8BBEE071F6C36E44769  L_24;
		L_24 = LocationService_get_lastData_mD6EAC681E09427969B18EEC9B85DA43633EFEA1F(L_23, /*hidden argument*/NULL);
		V_3 = L_24;
		float L_25;
		L_25 = LocationInfo_get_latitude_m09F2DFBDB716C46B0ECFD11F6A5DB2B93B06174B((LocationInfo_t7FC872AE105FF29421AFC8BBEE071F6C36E44769 *)(&V_3), /*hidden argument*/NULL);
		NullCheck(L_22);
		L_22->set_myN_20(L_25);
		// myE = Input.location.lastData.longitude;
		LeaderBoardManager_t87404B730BDD0E9A35EF39995ADE28BBE797C023 * L_26 = V_1;
		LocationService_tDCB7C3AA7A10C4727D49676FD3A902F48C27F855 * L_27;
		L_27 = Input_get_location_m5D0AE1016E410D3D7411904D0706456DE383F4E5(/*hidden argument*/NULL);
		NullCheck(L_27);
		LocationInfo_t7FC872AE105FF29421AFC8BBEE071F6C36E44769  L_28;
		L_28 = LocationService_get_lastData_mD6EAC681E09427969B18EEC9B85DA43633EFEA1F(L_27, /*hidden argument*/NULL);
		V_3 = L_28;
		float L_29;
		L_29 = LocationInfo_get_longitude_mD0F77FFCF02AFB63058C77A4EBAE228528F57A50((LocationInfo_t7FC872AE105FF29421AFC8BBEE071F6C36E44769 *)(&V_3), /*hidden argument*/NULL);
		NullCheck(L_26);
		L_26->set_myE_21(L_29);
		// GPS.text = myN + ", " + myE;
		LeaderBoardManager_t87404B730BDD0E9A35EF39995ADE28BBE797C023 * L_30 = V_1;
		NullCheck(L_30);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_31 = L_30->get_GPS_6();
		LeaderBoardManager_t87404B730BDD0E9A35EF39995ADE28BBE797C023 * L_32 = V_1;
		NullCheck(L_32);
		float* L_33 = L_32->get_address_of_myN_20();
		String_t* L_34;
		L_34 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_33, /*hidden argument*/NULL);
		LeaderBoardManager_t87404B730BDD0E9A35EF39995ADE28BBE797C023 * L_35 = V_1;
		NullCheck(L_35);
		float* L_36 = L_35->get_address_of_myE_21();
		String_t* L_37;
		L_37 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_36, /*hidden argument*/NULL);
		String_t* L_38;
		L_38 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_34, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, L_37, /*hidden argument*/NULL);
		NullCheck(L_31);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_31, L_38);
		// Input.location.Stop();
		LocationService_tDCB7C3AA7A10C4727D49676FD3A902F48C27F855 * L_39;
		L_39 = Input_get_location_m5D0AE1016E410D3D7411904D0706456DE383F4E5(/*hidden argument*/NULL);
		NullCheck(L_39);
		LocationService_Stop_m73B68E5F05367F0F2455DF56C30EDC9F0848C46A(L_39, /*hidden argument*/NULL);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(3);
		return (bool)1;
	}

IL_017e:
	{
		__this->set_U3CU3E1__state_0((-1));
		// }
		return (bool)0;
	}
}
// System.Object LeaderBoardManager/<StartGPS>d__26::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartGPSU3Ed__26_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mBCE3167115807167E101E320D67DDEEF45E8A92C (U3CStartGPSU3Ed__26_t6F1765BD5FAE2C4A1D0A6808B7AF630071317C62 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void LeaderBoardManager/<StartGPS>d__26::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartGPSU3Ed__26_System_Collections_IEnumerator_Reset_m6A7E5C575E7C4593EF6D9F52731949802B05E1E6 (U3CStartGPSU3Ed__26_t6F1765BD5FAE2C4A1D0A6808B7AF630071317C62 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartGPSU3Ed__26_System_Collections_IEnumerator_Reset_m6A7E5C575E7C4593EF6D9F52731949802B05E1E6_RuntimeMethod_var)));
	}
}
// System.Object LeaderBoardManager/<StartGPS>d__26::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartGPSU3Ed__26_System_Collections_IEnumerator_get_Current_mCD1A311037A11EE1C1036309C93E479B216A707B (U3CStartGPSU3Ed__26_t6F1765BD5FAE2C4A1D0A6808B7AF630071317C62 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Timer/<TimerTake>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTimerTakeU3Ed__5__ctor_m3C839682D9BC7F86659C719ED2934B9195C46BC7 (U3CTimerTakeU3Ed__5_t897E40F209FEDC1937EAA8D5C9BEEF1F409CAC78 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Timer/<TimerTake>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTimerTakeU3Ed__5_System_IDisposable_Dispose_m1FE6FA560CC392E192CD402C8D0E094073155BD8 (U3CTimerTakeU3Ed__5_t897E40F209FEDC1937EAA8D5C9BEEF1F409CAC78 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Timer/<TimerTake>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTimerTakeU3Ed__5_MoveNext_m020DBD2C3D63831DBE61EEFED9C82B58EA3EABA8 (U3CTimerTakeU3Ed__5_t897E40F209FEDC1937EAA8D5C9BEEF1F409CAC78 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral385D90346B7DEFBCCE71C2BE337FF43039B0F2BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BADA17CF62AE1A9C33E0086BFF271B2563C57B9);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Timer_t32ADF3155A88C37628B80D227C821651666DD405 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Timer_t32ADF3155A88C37628B80D227C821651666DD405 * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_003e;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// takingAway = true;
		Timer_t32ADF3155A88C37628B80D227C821651666DD405 * L_4 = V_1;
		NullCheck(L_4);
		L_4->set_takingAway_6((bool)1);
		// yield return new WaitForSeconds(1);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_5 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_5, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_5);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_003e:
	{
		__this->set_U3CU3E1__state_0((-1));
		// secondsLeft -= 1;
		Timer_t32ADF3155A88C37628B80D227C821651666DD405 * L_6 = V_1;
		Timer_t32ADF3155A88C37628B80D227C821651666DD405 * L_7 = V_1;
		NullCheck(L_7);
		int32_t L_8 = L_7->get_secondsLeft_5();
		NullCheck(L_6);
		L_6->set_secondsLeft_5(((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1)));
		// if (secondsLeft < 10)
		Timer_t32ADF3155A88C37628B80D227C821651666DD405 * L_9 = V_1;
		NullCheck(L_9);
		int32_t L_10 = L_9->get_secondsLeft_5();
		if ((((int32_t)L_10) >= ((int32_t)((int32_t)10))))
		{
			goto IL_0084;
		}
	}
	{
		// textDisplay.GetComponent<Text>().text = "00:0" + secondsLeft;
		Timer_t32ADF3155A88C37628B80D227C821651666DD405 * L_11 = V_1;
		NullCheck(L_11);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = L_11->get_textDisplay_4();
		NullCheck(L_12);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_13;
		L_13 = GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65(L_12, /*hidden argument*/GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		Timer_t32ADF3155A88C37628B80D227C821651666DD405 * L_14 = V_1;
		NullCheck(L_14);
		int32_t* L_15 = L_14->get_address_of_secondsLeft_5();
		String_t* L_16;
		L_16 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_15, /*hidden argument*/NULL);
		String_t* L_17;
		L_17 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral385D90346B7DEFBCCE71C2BE337FF43039B0F2BC, L_16, /*hidden argument*/NULL);
		NullCheck(L_13);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_13, L_17);
		// }
		goto IL_00a9;
	}

IL_0084:
	{
		// textDisplay.GetComponent<Text>().text = "00:" + secondsLeft;
		Timer_t32ADF3155A88C37628B80D227C821651666DD405 * L_18 = V_1;
		NullCheck(L_18);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19 = L_18->get_textDisplay_4();
		NullCheck(L_19);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_20;
		L_20 = GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65(L_19, /*hidden argument*/GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		Timer_t32ADF3155A88C37628B80D227C821651666DD405 * L_21 = V_1;
		NullCheck(L_21);
		int32_t* L_22 = L_21->get_address_of_secondsLeft_5();
		String_t* L_23;
		L_23 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_22, /*hidden argument*/NULL);
		String_t* L_24;
		L_24 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral3BADA17CF62AE1A9C33E0086BFF271B2563C57B9, L_23, /*hidden argument*/NULL);
		NullCheck(L_20);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_20, L_24);
	}

IL_00a9:
	{
		// takingAway = false;
		Timer_t32ADF3155A88C37628B80D227C821651666DD405 * L_25 = V_1;
		NullCheck(L_25);
		L_25->set_takingAway_6((bool)0);
		// }
		return (bool)0;
	}
}
// System.Object Timer/<TimerTake>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CTimerTakeU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m4BA7CEA1C4F021E614116EDB4260019948A203AA (U3CTimerTakeU3Ed__5_t897E40F209FEDC1937EAA8D5C9BEEF1F409CAC78 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Timer/<TimerTake>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTimerTakeU3Ed__5_System_Collections_IEnumerator_Reset_mB53D527BD0D43788F95C986640BD45902CE6D6DC (U3CTimerTakeU3Ed__5_t897E40F209FEDC1937EAA8D5C9BEEF1F409CAC78 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTimerTakeU3Ed__5_System_Collections_IEnumerator_Reset_mB53D527BD0D43788F95C986640BD45902CE6D6DC_RuntimeMethod_var)));
	}
}
// System.Object Timer/<TimerTake>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CTimerTakeU3Ed__5_System_Collections_IEnumerator_get_Current_mE49890DFB7E2E350CFC1854A27ED35FBBF962D96 (U3CTimerTakeU3Ed__5_t897E40F209FEDC1937EAA8D5C9BEEF1F409CAC78 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void dreamloLeaderBoard/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m882C925B679F7E818AC4579BACC71D10625017D7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tCA1B7E2863AF474F3FFDED0AA53F12C56EE0CB07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tCA1B7E2863AF474F3FFDED0AA53F12C56EE0CB07 * L_0 = (U3CU3Ec_tCA1B7E2863AF474F3FFDED0AA53F12C56EE0CB07 *)il2cpp_codegen_object_new(U3CU3Ec_tCA1B7E2863AF474F3FFDED0AA53F12C56EE0CB07_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mC7E9E9DF39A8DDF27457229C4A55BF885802511D(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tCA1B7E2863AF474F3FFDED0AA53F12C56EE0CB07_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCA1B7E2863AF474F3FFDED0AA53F12C56EE0CB07_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void dreamloLeaderBoard/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC7E9E9DF39A8DDF27457229C4A55BF885802511D (U3CU3Ec_tCA1B7E2863AF474F3FFDED0AA53F12C56EE0CB07 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 dreamloLeaderBoard/<>c::<ToListLowToHigh>b__18_0(dreamloLeaderBoard/Score,dreamloLeaderBoard/Score)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CToListLowToHighU3Eb__18_0_m46BB2B7C6332E4131D4CDFCE2B99317318A465E2 (U3CU3Ec_tCA1B7E2863AF474F3FFDED0AA53F12C56EE0CB07 * __this, Score_t446577E2BC06794D97BE081C982A0D1F51F12D38  ___x0, Score_t446577E2BC06794D97BE081C982A0D1F51F12D38  ___y1, const RuntimeMethod* method)
{
	{
		// genericList.Sort((x, y) => x.score.CompareTo(y.score));
		int32_t* L_0 = (&___x0)->get_address_of_score_1();
		Score_t446577E2BC06794D97BE081C982A0D1F51F12D38  L_1 = ___y1;
		int32_t L_2 = L_1.get_score_1();
		int32_t L_3;
		L_3 = Int32_CompareTo_m2DD1093B956B4D96C3AC3C27FDEE3CA447B044D3((int32_t*)L_0, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 dreamloLeaderBoard/<>c::<ToListHighToLow>b__19_0(dreamloLeaderBoard/Score,dreamloLeaderBoard/Score)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CToListHighToLowU3Eb__19_0_mCB94C720BE247F406BD87316BA70BD07E1022177 (U3CU3Ec_tCA1B7E2863AF474F3FFDED0AA53F12C56EE0CB07 * __this, Score_t446577E2BC06794D97BE081C982A0D1F51F12D38  ___x0, Score_t446577E2BC06794D97BE081C982A0D1F51F12D38  ___y1, const RuntimeMethod* method)
{
	{
		// genericList.Sort((x, y) => y.score.CompareTo(x.score));
		int32_t* L_0 = (&___y1)->get_address_of_score_1();
		Score_t446577E2BC06794D97BE081C982A0D1F51F12D38  L_1 = ___x0;
		int32_t L_2 = L_1.get_score_1();
		int32_t L_3;
		L_3 = Int32_CompareTo_m2DD1093B956B4D96C3AC3C27FDEE3CA447B044D3((int32_t*)L_0, L_2, /*hidden argument*/NULL);
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
// System.Void dreamloLeaderBoard/<GetRequest>d__16::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRequestU3Ed__16__ctor_m6628BACA191E5CF5A8591F13D5F16727146DBABB (U3CGetRequestU3Ed__16_t15BE8B46AE9A55716A0E2229C682D997A67CA635 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void dreamloLeaderBoard/<GetRequest>d__16::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRequestU3Ed__16_System_IDisposable_Dispose_mCC3BBF08D046EFB434C8867A48C6788C3ADF64E0 (U3CGetRequestU3Ed__16_t15BE8B46AE9A55716A0E2229C682D997A67CA635 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x1A, FINALLY_0013);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0013;
	}

FINALLY_0013:
	{ // begin finally (depth: 1)
		U3CGetRequestU3Ed__16_U3CU3Em__Finally1_m558701E9B744815E78F0BCF6428F33CB832867AC(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(19)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(19)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1A, IL_001a)
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean dreamloLeaderBoard/<GetRequest>d__16::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetRequestU3Ed__16_MoveNext_m6F9A2D121174A2861E83DF3612CE2C5F2CA90C5A (U3CGetRequestU3Ed__16_t15BE8B46AE9A55716A0E2229C682D997A67CA635 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	dreamloLeaderBoard_t65A12FD2CBA7E92B2703B98E99DCAEB25C7AEBFD * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			dreamloLeaderBoard_t65A12FD2CBA7E92B2703B98E99DCAEB25C7AEBFD * L_1 = __this->get_U3CU3E4__this_3();
			V_2 = L_1;
			int32_t L_2 = V_1;
			if (!L_2)
			{
				goto IL_0019;
			}
		}

IL_0011:
		{
			int32_t L_3 = V_1;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_0055;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			goto IL_008b;
		}

IL_0019:
		{
			__this->set_U3CU3E1__state_0((-1));
			// using (UnityWebRequest www = UnityWebRequest.Get(url))
			String_t* L_4 = __this->get_url_2();
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_5;
			L_5 = UnityWebRequest_Get_m9C24DB3E8BED0B0886F28DCD982A4741A9903B1A(L_4, /*hidden argument*/NULL);
			__this->set_U3CwwwU3E5__2_4(L_5);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// yield return www.SendWebRequest();
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_6 = __this->get_U3CwwwU3E5__2_4();
			NullCheck(L_6);
			UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * L_7;
			L_7 = UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50(L_6, /*hidden argument*/NULL);
			__this->set_U3CU3E2__current_1(L_7);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_008b;
		}

IL_0055:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// highScores = www.downloadHandler.text;
			dreamloLeaderBoard_t65A12FD2CBA7E92B2703B98E99DCAEB25C7AEBFD * L_8 = V_2;
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_9 = __this->get_U3CwwwU3E5__2_4();
			NullCheck(L_9);
			DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * L_10;
			L_10 = UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732(L_9, /*hidden argument*/NULL);
			NullCheck(L_10);
			String_t* L_11;
			L_11 = DownloadHandler_get_text_mD89D7125640800A8F5C4B9401C080C405953828A(L_10, /*hidden argument*/NULL);
			NullCheck(L_8);
			L_8->set_highScores_8(L_11);
			// }
			U3CGetRequestU3Ed__16_U3CU3Em__Finally1_m558701E9B744815E78F0BCF6428F33CB832867AC(__this, /*hidden argument*/NULL);
			__this->set_U3CwwwU3E5__2_4((UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *)NULL);
			// }
			V_0 = (bool)0;
			goto IL_008b;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_0084;
	}

FAULT_0084:
	{ // begin fault (depth: 1)
		U3CGetRequestU3Ed__16_System_IDisposable_Dispose_mCC3BBF08D046EFB434C8867A48C6788C3ADF64E0(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(132)
	} // end fault
	IL2CPP_CLEANUP(132)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_008b:
	{
		bool L_12 = V_0;
		return L_12;
	}
}
// System.Void dreamloLeaderBoard/<GetRequest>d__16::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRequestU3Ed__16_U3CU3Em__Finally1_m558701E9B744815E78F0BCF6428F33CB832867AC (U3CGetRequestU3Ed__16_t15BE8B46AE9A55716A0E2229C682D997A67CA635 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_0 = __this->get_U3CwwwU3E5__2_4();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_1 = __this->get_U3CwwwU3E5__2_4();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Object dreamloLeaderBoard/<GetRequest>d__16::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetRequestU3Ed__16_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE5A973ED380135D5CBE6DA48E2C8B5E3CE1975CB (U3CGetRequestU3Ed__16_t15BE8B46AE9A55716A0E2229C682D997A67CA635 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void dreamloLeaderBoard/<GetRequest>d__16::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRequestU3Ed__16_System_Collections_IEnumerator_Reset_m1D2D85E0F35045C8AC5B714AFD01323724C9596B (U3CGetRequestU3Ed__16_t15BE8B46AE9A55716A0E2229C682D997A67CA635 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetRequestU3Ed__16_System_Collections_IEnumerator_Reset_m1D2D85E0F35045C8AC5B714AFD01323724C9596B_RuntimeMethod_var)));
	}
}
// System.Object dreamloLeaderBoard/<GetRequest>d__16::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetRequestU3Ed__16_System_Collections_IEnumerator_get_Current_mE4FE02FF3C72ACFACB8E297EBBDC2510DFE05DF5 (U3CGetRequestU3Ed__16_t15BE8B46AE9A55716A0E2229C682D997A67CA635 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// Conversion methods for marshalling of: dreamloLeaderBoard/Score
IL2CPP_EXTERN_C void Score_t446577E2BC06794D97BE081C982A0D1F51F12D38_marshal_pinvoke(const Score_t446577E2BC06794D97BE081C982A0D1F51F12D38& unmarshaled, Score_t446577E2BC06794D97BE081C982A0D1F51F12D38_marshaled_pinvoke& marshaled)
{
	marshaled.___playerName_0 = il2cpp_codegen_marshal_string(unmarshaled.get_playerName_0());
	marshaled.___score_1 = unmarshaled.get_score_1();
	marshaled.___seconds_2 = unmarshaled.get_seconds_2();
	marshaled.___shortText_3 = il2cpp_codegen_marshal_string(unmarshaled.get_shortText_3());
	marshaled.___dateString_4 = il2cpp_codegen_marshal_string(unmarshaled.get_dateString_4());
}
IL2CPP_EXTERN_C void Score_t446577E2BC06794D97BE081C982A0D1F51F12D38_marshal_pinvoke_back(const Score_t446577E2BC06794D97BE081C982A0D1F51F12D38_marshaled_pinvoke& marshaled, Score_t446577E2BC06794D97BE081C982A0D1F51F12D38& unmarshaled)
{
	unmarshaled.set_playerName_0(il2cpp_codegen_marshal_string_result(marshaled.___playerName_0));
	int32_t unmarshaled_score_temp_1 = 0;
	unmarshaled_score_temp_1 = marshaled.___score_1;
	unmarshaled.set_score_1(unmarshaled_score_temp_1);
	int32_t unmarshaled_seconds_temp_2 = 0;
	unmarshaled_seconds_temp_2 = marshaled.___seconds_2;
	unmarshaled.set_seconds_2(unmarshaled_seconds_temp_2);
	unmarshaled.set_shortText_3(il2cpp_codegen_marshal_string_result(marshaled.___shortText_3));
	unmarshaled.set_dateString_4(il2cpp_codegen_marshal_string_result(marshaled.___dateString_4));
}
// Conversion method for clean up from marshalling of: dreamloLeaderBoard/Score
IL2CPP_EXTERN_C void Score_t446577E2BC06794D97BE081C982A0D1F51F12D38_marshal_pinvoke_cleanup(Score_t446577E2BC06794D97BE081C982A0D1F51F12D38_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___playerName_0);
	marshaled.___playerName_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___shortText_3);
	marshaled.___shortText_3 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___dateString_4);
	marshaled.___dateString_4 = NULL;
}
// Conversion methods for marshalling of: dreamloLeaderBoard/Score
IL2CPP_EXTERN_C void Score_t446577E2BC06794D97BE081C982A0D1F51F12D38_marshal_com(const Score_t446577E2BC06794D97BE081C982A0D1F51F12D38& unmarshaled, Score_t446577E2BC06794D97BE081C982A0D1F51F12D38_marshaled_com& marshaled)
{
	marshaled.___playerName_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_playerName_0());
	marshaled.___score_1 = unmarshaled.get_score_1();
	marshaled.___seconds_2 = unmarshaled.get_seconds_2();
	marshaled.___shortText_3 = il2cpp_codegen_marshal_bstring(unmarshaled.get_shortText_3());
	marshaled.___dateString_4 = il2cpp_codegen_marshal_bstring(unmarshaled.get_dateString_4());
}
IL2CPP_EXTERN_C void Score_t446577E2BC06794D97BE081C982A0D1F51F12D38_marshal_com_back(const Score_t446577E2BC06794D97BE081C982A0D1F51F12D38_marshaled_com& marshaled, Score_t446577E2BC06794D97BE081C982A0D1F51F12D38& unmarshaled)
{
	unmarshaled.set_playerName_0(il2cpp_codegen_marshal_bstring_result(marshaled.___playerName_0));
	int32_t unmarshaled_score_temp_1 = 0;
	unmarshaled_score_temp_1 = marshaled.___score_1;
	unmarshaled.set_score_1(unmarshaled_score_temp_1);
	int32_t unmarshaled_seconds_temp_2 = 0;
	unmarshaled_seconds_temp_2 = marshaled.___seconds_2;
	unmarshaled.set_seconds_2(unmarshaled_seconds_temp_2);
	unmarshaled.set_shortText_3(il2cpp_codegen_marshal_bstring_result(marshaled.___shortText_3));
	unmarshaled.set_dateString_4(il2cpp_codegen_marshal_bstring_result(marshaled.___dateString_4));
}
// Conversion method for clean up from marshalling of: dreamloLeaderBoard/Score
IL2CPP_EXTERN_C void Score_t446577E2BC06794D97BE081C982A0D1F51F12D38_marshal_com_cleanup(Score_t446577E2BC06794D97BE081C982A0D1F51F12D38_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___playerName_0);
	marshaled.___playerName_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___shortText_3);
	marshaled.___shortText_3 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___dateString_4);
	marshaled.___dateString_4 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void dreamloPromoCode/<WebService>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWebServiceU3Ed__8__ctor_m1DDE835929CB5251B68FF1F99A4CA2B2D38E7D4D (U3CWebServiceU3Ed__8_tB0266360203FE8C7B51C5262D5E45CC6047B13B3 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void dreamloPromoCode/<WebService>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWebServiceU3Ed__8_System_IDisposable_Dispose_m24D3144B3EC467D670DD992446077DF15729B834 (U3CWebServiceU3Ed__8_tB0266360203FE8C7B51C5262D5E45CC6047B13B3 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x1A, FINALLY_0013);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0013;
	}

FINALLY_0013:
	{ // begin finally (depth: 1)
		U3CWebServiceU3Ed__8_U3CU3Em__Finally1_m16A846D372BBCCA724D8BCCE57D31A6911BA87E1(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(19)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(19)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1A, IL_001a)
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean dreamloPromoCode/<WebService>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWebServiceU3Ed__8_MoveNext_m1B745FBB8C75DD421E85AA40829E439C8B05C14B (U3CWebServiceU3Ed__8_tB0266360203FE8C7B51C5262D5E45CC6047B13B3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1AE348EAFA097AB898941EAFE912D711A407DA10);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8BD8EBBF9AAADE3A1911E0372AF7DEEFC2B7800D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	dreamloPromoCode_t640CC04DDAA3833B88CD2CF574BE448502BAFF2B * V_2 = NULL;
	String_t* V_3 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			dreamloPromoCode_t640CC04DDAA3833B88CD2CF574BE448502BAFF2B * L_1 = __this->get_U3CU3E4__this_2();
			V_2 = L_1;
			int32_t L_2 = V_1;
			if (!L_2)
			{
				goto IL_001c;
			}
		}

IL_0011:
		{
			int32_t L_3 = V_1;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_0062;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			goto IL_012b;
		}

IL_001c:
		{
			__this->set_U3CU3E1__state_0((-1));
			// this.state = State.WaitingForResponse;
			dreamloPromoCode_t640CC04DDAA3833B88CD2CF574BE448502BAFF2B * L_4 = V_2;
			NullCheck(L_4);
			L_4->set_state_8(1);
			// using (UnityWebRequest www = UnityWebRequest.Get(url))
			String_t* L_5 = __this->get_url_3();
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_6;
			L_6 = UnityWebRequest_Get_m9C24DB3E8BED0B0886F28DCD982A4741A9903B1A(L_5, /*hidden argument*/NULL);
			__this->set_U3CwwwU3E5__2_4(L_6);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// yield return www.SendWebRequest();
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_7 = __this->get_U3CwwwU3E5__2_4();
			NullCheck(L_7);
			UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * L_8;
			L_8 = UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50(L_7, /*hidden argument*/NULL);
			__this->set_U3CU3E2__current_1(L_8);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_012b;
		}

IL_0062:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			// if (www.error != "" && www.error != null)
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_9 = __this->get_U3CwwwU3E5__2_4();
			NullCheck(L_9);
			String_t* L_10;
			L_10 = UnityWebRequest_get_error_m32B69D2365C1FE2310B5936C7C295B71A92CC2B4(L_9, /*hidden argument*/NULL);
			bool L_11;
			L_11 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_10, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
			if (!L_11)
			{
				goto IL_0097;
			}
		}

IL_0081:
		{
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_12 = __this->get_U3CwwwU3E5__2_4();
			NullCheck(L_12);
			String_t* L_13;
			L_13 = UnityWebRequest_get_error_m32B69D2365C1FE2310B5936C7C295B71A92CC2B4(L_12, /*hidden argument*/NULL);
			if (!L_13)
			{
				goto IL_0097;
			}
		}

IL_008e:
		{
			// this.state = State.ERROR;
			dreamloPromoCode_t640CC04DDAA3833B88CD2CF574BE448502BAFF2B * L_14 = V_2;
			NullCheck(L_14);
			L_14->set_state_8(2);
			// }
			goto IL_0113;
		}

IL_0097:
		{
			// string s = www.downloadHandler.text;
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_15 = __this->get_U3CwwwU3E5__2_4();
			NullCheck(L_15);
			DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * L_16;
			L_16 = UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732(L_15, /*hidden argument*/NULL);
			NullCheck(L_16);
			String_t* L_17;
			L_17 = DownloadHandler_get_text_mD89D7125640800A8F5C4B9401C080C405953828A(L_16, /*hidden argument*/NULL);
			V_3 = L_17;
			// if (s.Contains("|"))
			String_t* L_18 = V_3;
			NullCheck(L_18);
			bool L_19;
			L_19 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_18, _stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827, /*hidden argument*/NULL);
			if (!L_19)
			{
				goto IL_0113;
			}
		}

IL_00b5:
		{
			// string[] values = s.Split(new char[] {'|'});
			String_t* L_20 = V_3;
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_21 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_22 = L_21;
			NullCheck(L_22);
			(L_22)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)124));
			NullCheck(L_20);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_23;
			L_23 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_20, L_22, /*hidden argument*/NULL);
			V_4 = L_23;
			// if (values[0] == "ERROR")
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_24 = V_4;
			NullCheck(L_24);
			int32_t L_25 = 0;
			String_t* L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
			bool L_27;
			L_27 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_26, _stringLiteral8BD8EBBF9AAADE3A1911E0372AF7DEEFC2B7800D, /*hidden argument*/NULL);
			if (!L_27)
			{
				goto IL_00eb;
			}
		}

IL_00d8:
		{
			// this.state = State.ERROR;
			dreamloPromoCode_t640CC04DDAA3833B88CD2CF574BE448502BAFF2B * L_28 = V_2;
			NullCheck(L_28);
			L_28->set_state_8(2);
			// this.error = values[1];
			dreamloPromoCode_t640CC04DDAA3833B88CD2CF574BE448502BAFF2B * L_29 = V_2;
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_30 = V_4;
			NullCheck(L_30);
			int32_t L_31 = 1;
			String_t* L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
			NullCheck(L_29);
			L_29->set_error_7(L_32);
			// }
			goto IL_0113;
		}

IL_00eb:
		{
			// else if (values[0] == "OK")
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_33 = V_4;
			NullCheck(L_33);
			int32_t L_34 = 0;
			String_t* L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
			bool L_36;
			L_36 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_35, _stringLiteral1AE348EAFA097AB898941EAFE912D711A407DA10, /*hidden argument*/NULL);
			if (!L_36)
			{
				goto IL_0113;
			}
		}

IL_00fb:
		{
			// this.state = State.OK;
			dreamloPromoCode_t640CC04DDAA3833B88CD2CF574BE448502BAFF2B * L_37 = V_2;
			NullCheck(L_37);
			L_37->set_state_8(3);
			// if (values.Length > 1) this.value = values[1];
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_38 = V_4;
			NullCheck(L_38);
			if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_38)->max_length)))) <= ((int32_t)1)))
			{
				goto IL_0113;
			}
		}

IL_0109:
		{
			// if (values.Length > 1) this.value = values[1];
			dreamloPromoCode_t640CC04DDAA3833B88CD2CF574BE448502BAFF2B * L_39 = V_2;
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_40 = V_4;
			NullCheck(L_40);
			int32_t L_41 = 1;
			String_t* L_42 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
			NullCheck(L_39);
			L_39->set_value_6(L_42);
		}

IL_0113:
		{
			// }
			U3CWebServiceU3Ed__8_U3CU3Em__Finally1_m16A846D372BBCCA724D8BCCE57D31A6911BA87E1(__this, /*hidden argument*/NULL);
			__this->set_U3CwwwU3E5__2_4((UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E *)NULL);
			// }
			V_0 = (bool)0;
			goto IL_012b;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_0124;
	}

FAULT_0124:
	{ // begin fault (depth: 1)
		U3CWebServiceU3Ed__8_System_IDisposable_Dispose_m24D3144B3EC467D670DD992446077DF15729B834(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(292)
	} // end fault
	IL2CPP_CLEANUP(292)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_012b:
	{
		bool L_43 = V_0;
		return L_43;
	}
}
// System.Void dreamloPromoCode/<WebService>d__8::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWebServiceU3Ed__8_U3CU3Em__Finally1_m16A846D372BBCCA724D8BCCE57D31A6911BA87E1 (U3CWebServiceU3Ed__8_tB0266360203FE8C7B51C5262D5E45CC6047B13B3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_0 = __this->get_U3CwwwU3E5__2_4();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_1 = __this->get_U3CwwwU3E5__2_4();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Object dreamloPromoCode/<WebService>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWebServiceU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA8C2968CF3A498A17BDE09530ABB06A9BB298685 (U3CWebServiceU3Ed__8_tB0266360203FE8C7B51C5262D5E45CC6047B13B3 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void dreamloPromoCode/<WebService>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWebServiceU3Ed__8_System_Collections_IEnumerator_Reset_m080F548A046ADBBD602737544B67ADF3BAD56C3B (U3CWebServiceU3Ed__8_tB0266360203FE8C7B51C5262D5E45CC6047B13B3 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWebServiceU3Ed__8_System_Collections_IEnumerator_Reset_m080F548A046ADBBD602737544B67ADF3BAD56C3B_RuntimeMethod_var)));
	}
}
// System.Object dreamloPromoCode/<WebService>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWebServiceU3Ed__8_System_Collections_IEnumerator_get_Current_mB5EEC69CCF400A81ED0E936BF39824D6E337B534 (U3CWebServiceU3Ed__8_tB0266360203FE8C7B51C5262D5E45CC6047B13B3 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * __this, const RuntimeMethod* method)
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_0 = __this->get_m_OnClick_20();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * EventSystem_get_currentSelectedGameObject_m999F9BFD4C20E2F00C56D4FED89602B6077EF70D_inline (EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * __this, const RuntimeMethod* method)
{
	{
		// get { return m_CurrentSelected; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_m_CurrentSelected_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m6BBCE0586E4C6065C90FA9484A516263C5192008_gshared_inline (List_1_tD28329A66242A4236EA37A1950A4660B3F9AF1F7 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Score_t446577E2BC06794D97BE081C982A0D1F51F12D38  List_1_get_Item_m30AC25EDC1317A0930F223DE147F170FEF22A612_gshared_inline (List_1_tD28329A66242A4236EA37A1950A4660B3F9AF1F7 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ScoreU5BU5D_tD3FEF63256F30BA473D428523CC5B54B8AD6CA97* L_2 = (ScoreU5BU5D_tD3FEF63256F30BA473D428523CC5B54B8AD6CA97*)__this->get__items_1();
		int32_t L_3 = ___index0;
		Score_t446577E2BC06794D97BE081C982A0D1F51F12D38  L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ScoreU5BU5D_tD3FEF63256F30BA473D428523CC5B54B8AD6CA97*)L_2, (int32_t)L_3);
		return (Score_t446577E2BC06794D97BE081C982A0D1F51F12D38 )L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Score_t446577E2BC06794D97BE081C982A0D1F51F12D38  Enumerator_get_Current_m03121030C14973605EA1EDD6F9CF9082E3C68DDF_gshared_inline (Enumerator_t2E3456D25032B4E449696F1A7AF76F0B6EAE54FB * __this, const RuntimeMethod* method)
{
	{
		Score_t446577E2BC06794D97BE081C982A0D1F51F12D38  L_0 = (Score_t446577E2BC06794D97BE081C982A0D1F51F12D38 )__this->get_current_3();
		return (Score_t446577E2BC06794D97BE081C982A0D1F51F12D38 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ((EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0;
	}
}
