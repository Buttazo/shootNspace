#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// CameraScript
struct CameraScript_t33AE9F59882E201924EADF681468E25A59DFD44D;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// EnemyFollow
struct EnemyFollow_t6EBF1C08AA3F298C646AB5FD84A3C4C108AA82C0;
// EnemyMovement
struct EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C;
// EnemySpawnScript
struct EnemySpawnScript_tAAD97EEF72E8DC9AD1E4EA1B4E51D2895378232E;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// GameController
struct GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// GameOverScreen
struct GameOverScreen_tE2FFC44C857E646C708DDD3067BB17428E8C670E;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// Main
struct Main_t6125012C4D88701077DD3C4660130C5535730E1E;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// MoveGameArea
struct MoveGameArea_t3E1D534AFB74F61A02B421FED76F108BD00405E7;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// PlayerController
struct PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95;
// ProjectileMovement
struct ProjectileMovement_t4794C6764F7B7EA222E20244442A9048615E11D7;
// ProjectileSpawner
struct ProjectileSpawner_tEDEAB45EFFA25748DAC9E61F3123E7E7E7D9514A;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// ScoreCounter
struct ScoreCounter_t7270E3D1A8B9BB1B73CBD594EDC0B3952E40F1C2;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// ammoBar
struct ammoBar_t9A4B62EFE8C2B8E66C4C5D48AF9016D95C69B482;
// ignoreColission
struct ignoreColission_t2056425C5A48263B7048CF5EA8CF361EC526BB21;
// moveSightTarget
struct moveSightTarget_tF99AA2DDEC1A25EFCD3C2C339155E3D6B05BB242;
// rotorRotate
struct rotorRotate_tF2FF1744B7499454E703A46C0A74551EA8A584D9;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555;

IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScoreCounter_t7270E3D1A8B9BB1B73CBD594EDC0B3952E40F1C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral377F314EFA5AC4B448DDB84E18F4D19843D7D420;
IL2CPP_EXTERN_C String_t* _stringLiteral6B9B97BAD24A46551385AB2F1BA306987441E2E7;
IL2CPP_EXTERN_C String_t* _stringLiteral78C8B5D513FC9ABCEF9F7EADCAAF0CB04CA131E3;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral9F583E25A76DC70CBCAAA2B20FD19847CD5C6C42;
IL2CPP_EXTERN_C String_t* _stringLiteralC00C36D0E5E4DEE3EE46C5BBA529B7DA5B5C005F;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisScoreCounter_t7270E3D1A8B9BB1B73CBD594EDC0B3952E40F1C2_mC8EB6D94BD5406B16FCBD7719C13CF7A2ABE5A4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_m3B73E32B09A6667056AC232DA5238351F51DB7EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
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

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
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

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
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

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
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

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
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

// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0  : public RuntimeObject
{
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	// UnityEngine.Component UnityEngine.Collision::m_Body
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_LegacyContacts_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
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

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
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

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// CameraScript
struct CameraScript_t33AE9F59882E201924EADF681468E25A59DFD44D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 CameraScript::_offset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____offset_4;
	// UnityEngine.Transform CameraScript::target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target_5;
	// System.Single CameraScript::smoothTime
	float ___smoothTime_6;
	// UnityEngine.Vector3 CameraScript::_currentVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____currentVelocity_7;
};

// EnemyFollow
struct EnemyFollow_t6EBF1C08AA3F298C646AB5FD84A3C4C108AA82C0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject EnemyFollow::target
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___target_4;
	// UnityEngine.GameObject EnemyFollow::from
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___from_5;
	// System.Single EnemyFollow::speed
	float ___speed_6;
};

// EnemyMovement
struct EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single EnemyMovement::moveSpeed
	float ___moveSpeed_4;
	// UnityEngine.Rigidbody EnemyMovement::rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb_5;
	// System.Single EnemyMovement::deadZone
	float ___deadZone_6;
	// ScoreCounter EnemyMovement::scoreCounter
	ScoreCounter_t7270E3D1A8B9BB1B73CBD594EDC0B3952E40F1C2* ___scoreCounter_7;
};

// EnemySpawnScript
struct EnemySpawnScript_tAAD97EEF72E8DC9AD1E4EA1B4E51D2895378232E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject EnemySpawnScript::enemy
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___enemy_4;
	// System.Single EnemySpawnScript::spawnRate
	float ___spawnRate_5;
	// System.Single EnemySpawnScript::timer
	float ___timer_6;
	// System.Single EnemySpawnScript::heightOffset
	float ___heightOffset_7;
	// System.Single EnemySpawnScript::widthOffset
	float ___widthOffset_8;
};

// GameController
struct GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// GameOverScreen
struct GameOverScreen_tE2FFC44C857E646C708DDD3067BB17428E8C670E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Main
struct Main_t6125012C4D88701077DD3C4660130C5535730E1E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// ammoBar Main::_ammobar
	ammoBar_t9A4B62EFE8C2B8E66C4C5D48AF9016D95C69B482* ____ammobar_4;
	// UnityEngine.GameObject Main::startScreen
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___startScreen_5;
	// UnityEngine.GameObject Main::endScreen
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___endScreen_6;
	// PlayerController Main::playerController
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* ___playerController_7;
	// ScoreCounter Main::scoreCounter
	ScoreCounter_t7270E3D1A8B9BB1B73CBD594EDC0B3952E40F1C2* ___scoreCounter_8;
};

// MoveGameArea
struct MoveGameArea_t3E1D534AFB74F61A02B421FED76F108BD00405E7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 MoveGameArea::fixed_position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___fixed_position_4;
	// UnityEngine.Vector3 MoveGameArea::velocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___velocity_5;
};

// PlayerController
struct PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean PlayerController::fixRotation
	bool ___fixRotation_4;
	// System.Single PlayerController::moveSpeed
	float ___moveSpeed_5;
	// UnityEngine.Vector2 PlayerController::movement
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___movement_6;
	// System.Single PlayerController::amount
	float ___amount_7;
	// UnityEngine.Rigidbody PlayerController::rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb_8;
	// UnityEngine.Transform PlayerController::target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target_9;
	// System.Boolean PlayerController::follow
	bool ___follow_10;
	// System.Int32 PlayerController::scoreValue
	int32_t ___scoreValue_11;
};

// ProjectileMovement
struct ProjectileMovement_t4794C6764F7B7EA222E20244442A9048615E11D7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single ProjectileMovement::moveSpeed
	float ___moveSpeed_4;
	// UnityEngine.Rigidbody ProjectileMovement::rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb_5;
	// System.Single ProjectileMovement::deadZone
	float ___deadZone_6;
};

// ProjectileSpawner
struct ProjectileSpawner_tEDEAB45EFFA25748DAC9E61F3123E7E7E7D9514A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single ProjectileSpawner::deadZone
	float ___deadZone_4;
	// UnityEngine.GameObject ProjectileSpawner::projectile
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___projectile_5;
	// UnityEngine.Transform ProjectileSpawner::projectileSpawnPoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___projectileSpawnPoint_6;
	// System.Single ProjectileSpawner::projectileSpeed
	float ___projectileSpeed_7;
	// ammoBar ProjectileSpawner::_ammobar
	ammoBar_t9A4B62EFE8C2B8E66C4C5D48AF9016D95C69B482* ____ammobar_8;
};

// ScoreCounter
struct ScoreCounter_t7270E3D1A8B9BB1B73CBD594EDC0B3952E40F1C2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text ScoreCounter::score
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___score_5;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// ammoBar
struct ammoBar_t9A4B62EFE8C2B8E66C4C5D48AF9016D95C69B482  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Slider ammoBar::slider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___slider_4;
	// System.Single ammoBar::fillSpeed
	float ___fillSpeed_5;
	// System.Single ammoBar::targetProgress
	float ___targetProgress_6;
};

// ignoreColission
struct ignoreColission_t2056425C5A48263B7048CF5EA8CF361EC526BB21  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Rigidbody ignoreColission::rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb_4;
};

// moveSightTarget
struct moveSightTarget_tF99AA2DDEC1A25EFCD3C2C339155E3D6B05BB242  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Rigidbody moveSightTarget::rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb_4;
	// UnityEngine.Vector2 moveSightTarget::movement
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___movement_5;
	// System.Single moveSightTarget::moveSpeed
	float ___moveSpeed_6;
};

// rotorRotate
struct rotorRotate_tF2FF1744B7499454E703A46C0A74551EA8A584D9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 rotorRotate::rotateAmount
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rotateAmount_4;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
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
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_37;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_39;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_40;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_42;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_43;
};

// <Module>

// <Module>

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Double

// System.Double

// System.Int32

// System.Int32

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// System.Single

// System.Single

// UnityEngine.Vector2
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

// UnityEngine.Vector2

// UnityEngine.Vector3
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

// UnityEngine.Vector3

// System.Void

// System.Void

// UnityEngine.Collision

// UnityEngine.Collision

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Rigidbody

// UnityEngine.Rigidbody

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// CameraScript

// CameraScript

// EnemyFollow

// EnemyFollow

// EnemyMovement

// EnemyMovement

// EnemySpawnScript

// EnemySpawnScript

// GameController

// GameController

// GameOverScreen

// GameOverScreen

// Main

// Main

// MoveGameArea

// MoveGameArea

// PlayerController

// PlayerController

// ProjectileMovement

// ProjectileMovement

// ProjectileSpawner

// ProjectileSpawner

// ScoreCounter
struct ScoreCounter_t7270E3D1A8B9BB1B73CBD594EDC0B3952E40F1C2_StaticFields
{
	// System.Int32 ScoreCounter::scoreValue
	int32_t ___scoreValue_4;
};

// ScoreCounter

// ammoBar

// ammoBar

// ignoreColission

// ignoreColission

// moveSightTarget

// moveSightTarget

// rotorRotate

// rotorRotate

// UnityEngine.UI.Slider

// UnityEngine.UI.Slider

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_41;
};

// UnityEngine.UI.Text
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method) ;

// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Slider>()
inline Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* GameObject_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_m3B73E32B09A6667056AC232DA5238351F51DB7EA (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::SmoothDamp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_SmoothDamp_mF673AC30464B7DF671A0556140EB6E9DD75827ED_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_current, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_target, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_currentVelocity, float ___3_smoothTime, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::MoveTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_current, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_target, float ___2_maxDistanceDelta, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Quaternion UnityEngine.Random::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Random_get_rotation_m8B04B3FB3927208F0CB8C65295B0226E7FC7E9E2 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE (String_t* ___0_tag, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<ScoreCounter>()
inline ScoreCounter_t7270E3D1A8B9BB1B73CBD594EDC0B3952E40F1C2* GameObject_GetComponent_TisScoreCounter_t7270E3D1A8B9BB1B73CBD594EDC0B3952E40F1C2_mC8EB6D94BD5406B16FCBD7719C13CF7A2ABE5A4B (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ScoreCounter_t7270E3D1A8B9BB1B73CBD594EDC0B3952E40F1C2* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, float ___1_t, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494 (float ___0_minInclusive, float ___1_maxInclusive, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForce(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_mFD97FC9DA828C1952D46D28C50B1D994B19895F6 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Collision::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void EnemySpawnScript::spawnEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySpawnScript_spawnEnemy_m0F9CD4DEF861D6C0C68A1D0D893ACBD908CAF4A5 (EnemySpawnScript_tAAD97EEF72E8DC9AD1E4EA1B4E51D2895378232E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___0_original, ___1_position, ___2_rotation, method);
}
// System.Void UnityEngine.Physics::IgnoreLayerCollision(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Physics_IgnoreLayerCollision_m9270D67E34AE015D7177B5608852306E0366D6A1 (int32_t ___0_layer1, int32_t ___1_layer2, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void Main::EndGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Main_EndGame_m80029538EF5605BE3CF8348AB0DA571C00DB6A15 (Main_t6125012C4D88701077DD3C4660130C5535730E1E* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void Main::restartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Main_restartGame_mECAC9D8677585F13C1B85DC9D1BCE95678BEAC24 (Main_t6125012C4D88701077DD3C4660130C5535730E1E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_useGravity(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_useGravity_m1B1B22E093F9DC92D7BEEBBE6B02642B3B6C4389 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_fixedDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_fixedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_fixedTime_mEEDC1E90FA9C17F861872AF08459C04A6BBFCC21 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62 (String_t* ___0_axisName, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// System.Void moveSightTarget::moveChraracter(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void moveSightTarget_moveChraracter_m63212927518E5D3EDA74468A1F9613A018BD15EF (moveSightTarget_tF99AA2DDEC1A25EFCD3C2C339155E3D6B05BB242* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_direction, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_force, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddTorque(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddTorque_m39C767D6CD12B2D12D575E2B469CB5565BFA30B6 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_torque, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mA8567593181FD78BBDC2AF29AD99F93BDB2976B2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_target, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_constraints(UnityEngine.RigidbodyConstraints)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_constraints_mE81BF0DAEB980E320538231E092CA4663885A9A3 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void PlayerController::moveChraracter(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_moveChraracter_m37A5C7B4272F4B4F237D43C55482F979573B4603 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_direction, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::set_tag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_set_tag_m0A41528AFD8C83E1CEC5D769921159897CDD2B24 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2 (int32_t ___0_key, const RuntimeMethod* method) ;
// System.Void ProjectileSpawner::<Update>g__spawnProjectile|6_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectileSpawner_U3CUpdateU3Eg__spawnProjectileU7C6_0_mE86238DB0B2683E2806F79CCAC7BCB1076BFDAE3 (ProjectileSpawner_tEDEAB45EFFA25748DAC9E61F3123E7E7E7D9514A* __this, const RuntimeMethod* method) ;
// System.Void ammoBar::IncrementProgress(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ammoBar_IncrementProgress_m8BB317172CFD0EC03399C9B5F55F786AD8013914 (ammoBar_t9A4B62EFE8C2B8E66C4C5D48AF9016D95C69B482* __this, float ___0_newProgress, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_eulers, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::SmoothDamp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_SmoothDamp_mAF61EA22D4906BF87DD00A91FB4F6AC0C54C495A (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_current, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_target, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_currentVelocity, float ___3_smoothTime, float ___4_maxSpeed, float ___5_deltaTime, const RuntimeMethod* method) ;
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
// System.Void ammoBar::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ammoBar_Awake_m1BDDDD480C619ED5E6CB754F8DBFCFCCF4C523BA (ammoBar_t9A4B62EFE8C2B8E66C4C5D48AF9016D95C69B482* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_m3B73E32B09A6667056AC232DA5238351F51DB7EA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// slider = gameObject.GetComponent<Slider>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_1;
		L_1 = GameObject_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_m3B73E32B09A6667056AC232DA5238351F51DB7EA(L_0, GameObject_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_m3B73E32B09A6667056AC232DA5238351F51DB7EA_RuntimeMethod_var);
		__this->___slider_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___slider_4), (void*)L_1);
		// }
		return;
	}
}
// System.Void ammoBar::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ammoBar_Start_mA061F10CF46D16DD324BB775B7C249F64CA1ED26 (ammoBar_t9A4B62EFE8C2B8E66C4C5D48AF9016D95C69B482* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ammoBar::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ammoBar_Update_m307257A04C400C062F2953CBA71AB9F7BBB50650 (ammoBar_t9A4B62EFE8C2B8E66C4C5D48AF9016D95C69B482* __this, const RuntimeMethod* method) 
{
	{
		// if (slider.value > targetProgress)
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___slider_4;
		float L_1;
		L_1 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_0);
		float L_2 = __this->___targetProgress_6;
		if ((!(((float)L_1) > ((float)L_2))))
		{
			goto IL_0031;
		}
	}
	{
		// slider.value -= fillSpeed * Time.deltaTime;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_3 = __this->___slider_4;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_4 = L_3;
		float L_5;
		L_5 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_4);
		float L_6 = __this->___fillSpeed_5;
		float L_7;
		L_7 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_4, ((float)il2cpp_codegen_subtract(L_5, ((float)il2cpp_codegen_multiply(L_6, L_7)))));
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void ammoBar::IncrementProgress(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ammoBar_IncrementProgress_m8BB317172CFD0EC03399C9B5F55F786AD8013914 (ammoBar_t9A4B62EFE8C2B8E66C4C5D48AF9016D95C69B482* __this, float ___0_newProgress, const RuntimeMethod* method) 
{
	{
		// targetProgress = slider.value - newProgress;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___slider_4;
		float L_1;
		L_1 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_0);
		float L_2 = ___0_newProgress;
		__this->___targetProgress_6 = ((float)il2cpp_codegen_subtract(L_1, L_2));
		// }
		return;
	}
}
// System.Void ammoBar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ammoBar__ctor_m71626E5D70FEDD80EDE34A1A6C7D427E16F27790 (ammoBar_t9A4B62EFE8C2B8E66C4C5D48AF9016D95C69B482* __this, const RuntimeMethod* method) 
{
	{
		// public float fillSpeed = 0.5f;
		__this->___fillSpeed_5 = (0.5f);
		// public float targetProgress = 1;
		__this->___targetProgress_6 = (1.0f);
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
// System.Void CameraScript::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraScript_Awake_mCF0DD77359F5558041BACAD736190F52B00F089B (CameraScript_t33AE9F59882E201924EADF681468E25A59DFD44D* __this, const RuntimeMethod* method) 
{
	{
		// private void Awake() => _offset = transform.position - target.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___target_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_1, L_3, NULL);
		__this->____offset_4 = L_4;
		return;
	}
}
// System.Void CameraScript::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraScript_LateUpdate_m42F00D6F15A466E628762DC7ADBD8272EF43F583 (CameraScript_t33AE9F59882E201924EADF681468E25A59DFD44D* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 targetPosition = target.position + _offset;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___target_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->____offset_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_1, L_2, NULL);
		V_0 = L_3;
		// transform.position = Vector3.SmoothDamp(transform.position, targetPosition, ref _currentVelocity, smoothTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_8 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->____currentVelocity_7);
		float L_9 = __this->___smoothTime_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_SmoothDamp_mF673AC30464B7DF671A0556140EB6E9DD75827ED_inline(L_6, L_7, L_8, L_9, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_4, L_10, NULL);
		// }
		return;
	}
}
// System.Void CameraScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraScript__ctor_mDCE666CE7EF072645A59FD192F310106688922B2 (CameraScript_t33AE9F59882E201924EADF681468E25A59DFD44D* __this, const RuntimeMethod* method) 
{
	{
		// private Vector3 _currentVelocity = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->____currentVelocity_7 = L_0;
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
// System.Void EnemyFollow::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyFollow_Start_m6A58E3689FF1CBC95BEFA03268E42ACF38CEE8F0 (EnemyFollow_t6EBF1C08AA3F298C646AB5FD84A3C4C108AA82C0* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void EnemyFollow::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyFollow_FixedUpdate_m3F98ED601EE63F39E866E50093384BFC3AD1AD07 (EnemyFollow_t6EBF1C08AA3F298C646AB5FD84A3C4C108AA82C0* __this, const RuntimeMethod* method) 
{
	{
		// from.transform.position = Vector3.MoveTowards(from.transform.position, target.transform.position, speed);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___from_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___from_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___target_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		float L_8 = __this->___speed_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline(L_4, L_7, L_8, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_9, NULL);
		// }
		return;
	}
}
// System.Void EnemyFollow::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyFollow_Update_m7149F6C1C14C63C37F3812B6C73FDFEA8FCA1EBB (EnemyFollow_t6EBF1C08AA3F298C646AB5FD84A3C4C108AA82C0* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void EnemyFollow::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyFollow__ctor_m63BB258D2178D28BC60F6805E27162171F799588 (EnemyFollow_t6EBF1C08AA3F298C646AB5FD84A3C4C108AA82C0* __this, const RuntimeMethod* method) 
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
// System.Void EnemyMovement::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyMovement_Start_m95403190C9B36406DE50131330EE999B92219947 (EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisScoreCounter_t7270E3D1A8B9BB1B73CBD594EDC0B3952E40F1C2_mC8EB6D94BD5406B16FCBD7719C13CF7A2ABE5A4B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb = this.GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rb_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_5), (void*)L_0);
		// transform.rotation = Random.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Random_get_rotation_m8B04B3FB3927208F0CB8C65295B0226E7FC7E9E2(NULL);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_1, L_2, NULL);
		// scoreCounter = GameObject.FindGameObjectWithTag("Player").GetComponent<ScoreCounter>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		ScoreCounter_t7270E3D1A8B9BB1B73CBD594EDC0B3952E40F1C2* L_4;
		L_4 = GameObject_GetComponent_TisScoreCounter_t7270E3D1A8B9BB1B73CBD594EDC0B3952E40F1C2_mC8EB6D94BD5406B16FCBD7719C13CF7A2ABE5A4B(L_3, GameObject_GetComponent_TisScoreCounter_t7270E3D1A8B9BB1B73CBD594EDC0B3952E40F1C2_mC8EB6D94BD5406B16FCBD7719C13CF7A2ABE5A4B_RuntimeMethod_var);
		__this->___scoreCounter_7 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___scoreCounter_7), (void*)L_4);
		// Destroy(gameObject, 20.0f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436(L_5, (20.0f), NULL);
		// }
		return;
	}
}
// System.Void EnemyMovement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyMovement_Update_mE16B0A7E944111B195856D2256F3FF0587224158 (EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F583E25A76DC70CBCAAA2B20FD19847CD5C6C42);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (transform.position.z < deadZone)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		float L_2 = L_1.___z_4;
		float L_3 = __this->___deadZone_6;
		if ((!(((float)L_2) < ((float)L_3))))
		{
			goto IL_002d;
		}
	}
	{
		// Debug.Log("Center deleted");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral9F583E25A76DC70CBCAAA2B20FD19847CD5C6C42, NULL);
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_4, NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void EnemyMovement::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyMovement_FixedUpdate_mE6CCD7FD1ABCA13D83C45218F069340455B0E400 (EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C* __this, const RuntimeMethod* method) 
{
	{
		// rb.AddForce(Random.Range(-0.1f, 0.1f), Random.Range(-0.1f, 0.1f), moveSpeed);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->___rb_5;
		float L_1;
		L_1 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((-0.100000001f), (0.100000001f), NULL);
		float L_2;
		L_2 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((-0.100000001f), (0.100000001f), NULL);
		float L_3 = __this->___moveSpeed_4;
		Rigidbody_AddForce_mFD97FC9DA828C1952D46D28C50B1D994B19895F6(L_0, L_1, L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void EnemyMovement::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyMovement_OnCollisionEnter_mF8045397D0C480DA146100359D7E021061D14043 (EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreCounter_t7270E3D1A8B9BB1B73CBD594EDC0B3952E40F1C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78C8B5D513FC9ABCEF9F7EADCAAF0CB04CA131E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC00C36D0E5E4DEE3EE46C5BBA529B7DA5B5C005F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag == "Projectile")
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___0_other;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteralC00C36D0E5E4DEE3EE46C5BBA529B7DA5B5C005F, NULL);
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_4, NULL);
		// Debug.Log("Triggered by Projectile");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral78C8B5D513FC9ABCEF9F7EADCAAF0CB04CA131E3, NULL);
		// ScoreCounter.scoreValue += 1;
		int32_t L_5 = ((ScoreCounter_t7270E3D1A8B9BB1B73CBD594EDC0B3952E40F1C2_StaticFields*)il2cpp_codegen_static_fields_for(ScoreCounter_t7270E3D1A8B9BB1B73CBD594EDC0B3952E40F1C2_il2cpp_TypeInfo_var))->___scoreValue_4;
		((ScoreCounter_t7270E3D1A8B9BB1B73CBD594EDC0B3952E40F1C2_StaticFields*)il2cpp_codegen_static_fields_for(ScoreCounter_t7270E3D1A8B9BB1B73CBD594EDC0B3952E40F1C2_il2cpp_TypeInfo_var))->___scoreValue_4 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Void EnemyMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyMovement__ctor_mFA5BD794CC67E008E8043CBDB7CDFB437D26180B (EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C* __this, const RuntimeMethod* method) 
{
	{
		// public float deadZone = -10;
		__this->___deadZone_6 = (-10.0f);
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
// System.Void EnemySpawnScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySpawnScript_Start_mEED2055208C8443469D81A35033B79D7FB85972E (EnemySpawnScript_tAAD97EEF72E8DC9AD1E4EA1B4E51D2895378232E* __this, const RuntimeMethod* method) 
{
	{
		// spawnEnemy();
		EnemySpawnScript_spawnEnemy_m0F9CD4DEF861D6C0C68A1D0D893ACBD908CAF4A5(__this, NULL);
		// }
		return;
	}
}
// System.Void EnemySpawnScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySpawnScript_Update_m703D0B8B815B0F0AFAFC3AB8DF0C02D5C5F80B59 (EnemySpawnScript_tAAD97EEF72E8DC9AD1E4EA1B4E51D2895378232E* __this, const RuntimeMethod* method) 
{
	{
		// if (timer < spawnRate)
		float L_0 = __this->___timer_6;
		float L_1 = __this->___spawnRate_5;
		if ((!(((float)L_0) < ((float)L_1))))
		{
			goto IL_0021;
		}
	}
	{
		// timer += Time.deltaTime;
		float L_2 = __this->___timer_6;
		float L_3;
		L_3 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___timer_6 = ((float)il2cpp_codegen_add(L_2, L_3));
		return;
	}

IL_0021:
	{
		// spawnEnemy();
		EnemySpawnScript_spawnEnemy_m0F9CD4DEF861D6C0C68A1D0D893ACBD908CAF4A5(__this, NULL);
		// timer = 0;
		__this->___timer_6 = (0.0f);
		// }
		return;
	}
}
// System.Void EnemySpawnScript::spawnEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySpawnScript_spawnEnemy_m0F9CD4DEF861D6C0C68A1D0D893ACBD908CAF4A5 (EnemySpawnScript_tAAD97EEF72E8DC9AD1E4EA1B4E51D2895378232E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		// float lowestPoint = transform.position.y - heightOffset;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		float L_2 = L_1.___y_3;
		float L_3 = __this->___heightOffset_7;
		V_0 = ((float)il2cpp_codegen_subtract(L_2, L_3));
		// float highestPoint = transform.position.y + heightOffset;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		float L_6 = L_5.___y_3;
		float L_7 = __this->___heightOffset_7;
		V_1 = ((float)il2cpp_codegen_add(L_6, L_7));
		// float leftestPoint = transform.position.x - widthOffset;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		float L_10 = L_9.___x_2;
		float L_11 = __this->___widthOffset_8;
		V_2 = ((float)il2cpp_codegen_subtract(L_10, L_11));
		// float rightestPoint = transform.position.x + widthOffset;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		float L_14 = L_13.___x_2;
		float L_15 = __this->___widthOffset_8;
		V_3 = ((float)il2cpp_codegen_add(L_14, L_15));
		// Instantiate(enemy, new Vector3(Random.Range(leftestPoint, rightestPoint), Random.Range(lowestPoint, highestPoint), transform.position.z), transform.rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___enemy_4;
		float L_17 = V_2;
		float L_18 = V_3;
		float L_19;
		L_19 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(L_17, L_18, NULL);
		float L_20 = V_0;
		float L_21 = V_1;
		float L_22;
		L_22 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(L_20, L_21, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_23, NULL);
		float L_25 = L_24.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_26), L_19, L_22, L_25, /*hidden argument*/NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28;
		L_28 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_27, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29;
		L_29 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_16, L_26, L_28, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void EnemySpawnScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySpawnScript__ctor_m5B66CA88920DE88C0053A7E87794D24B180AAC8E (EnemySpawnScript_tAAD97EEF72E8DC9AD1E4EA1B4E51D2895378232E* __this, const RuntimeMethod* method) 
{
	{
		// public float spawnRate = 2;
		__this->___spawnRate_5 = (2.0f);
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
// System.Void GameController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController__ctor_mB6369F6C5357D5984325D613D589EDA60818CBE9 (GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* __this, const RuntimeMethod* method) 
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
// System.Void GameOverScreen::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverScreen__ctor_mC5150146F14E85405429254671C40F23C5BD9F20 (GameOverScreen_tE2FFC44C857E646C708DDD3067BB17428E8C670E* __this, const RuntimeMethod* method) 
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
// System.Void ignoreColission::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ignoreColission_Start_m43D43DB60C92F52E7CB0040F52BBD7DEDC555461 (ignoreColission_t2056425C5A48263B7048CF5EA8CF361EC526BB21* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rb_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_4), (void*)L_0);
		// Physics.IgnoreLayerCollision(6, 6);
		Physics_IgnoreLayerCollision_m9270D67E34AE015D7177B5608852306E0366D6A1(6, 6, NULL);
		// }
		return;
	}
}
// System.Void ignoreColission::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ignoreColission_Update_mF1813223DEB88A4F3D7B82B501F2828182C6D706 (ignoreColission_t2056425C5A48263B7048CF5EA8CF361EC526BB21* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ignoreColission::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ignoreColission__ctor_m1D76D4023A4E692BBAE4AEA14A2FE722776A0D5A (ignoreColission_t2056425C5A48263B7048CF5EA8CF361EC526BB21* __this, const RuntimeMethod* method) 
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
// System.Void Main::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Main_Start_m5864CE07B60D35921FE23903087087FC5C3CF8FD (Main_t6125012C4D88701077DD3C4660130C5535730E1E* __this, const RuntimeMethod* method) 
{
	{
		// endScreen.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___endScreen_6;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Main::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Main_Update_m6A75833947272413C503ECE10B0D91F56F193526 (Main_t6125012C4D88701077DD3C4660130C5535730E1E* __this, const RuntimeMethod* method) 
{
	{
		// if (_ammobar.targetProgress < 0)
		ammoBar_t9A4B62EFE8C2B8E66C4C5D48AF9016D95C69B482* L_0 = __this->____ammobar_4;
		float L_1 = L_0->___targetProgress_6;
		if ((!(((float)L_1) < ((float)(0.0f)))))
		{
			goto IL_0018;
		}
	}
	{
		// EndGame();
		Main_EndGame_m80029538EF5605BE3CF8348AB0DA571C00DB6A15(__this, NULL);
	}

IL_0018:
	{
		// if (endScreen.activeSelf)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___endScreen_6;
		bool L_3;
		L_3 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_2, NULL);
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		// restartGame();
		Main_restartGame_mECAC9D8677585F13C1B85DC9D1BCE95678BEAC24(__this, NULL);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void Main::restartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Main_restartGame_mECAC9D8677585F13C1B85DC9D1BCE95678BEAC24 (Main_t6125012C4D88701077DD3C4660130C5535730E1E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreCounter_t7270E3D1A8B9BB1B73CBD594EDC0B3952E40F1C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// endScreen.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___endScreen_6;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// _ammobar.slider.value = 1;
		ammoBar_t9A4B62EFE8C2B8E66C4C5D48AF9016D95C69B482* L_1 = __this->____ammobar_4;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_2 = L_1->___slider_4;
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_2, (1.0f));
		// ScoreCounter.scoreValue = 0;
		((ScoreCounter_t7270E3D1A8B9BB1B73CBD594EDC0B3952E40F1C2_StaticFields*)il2cpp_codegen_static_fields_for(ScoreCounter_t7270E3D1A8B9BB1B73CBD594EDC0B3952E40F1C2_il2cpp_TypeInfo_var))->___scoreValue_4 = 0;
		// playerController.follow = true;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_3 = __this->___playerController_7;
		L_3->___follow_10 = (bool)1;
		// playerController.fixRotation = true;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_4 = __this->___playerController_7;
		L_4->___fixRotation_4 = (bool)1;
		// playerController.rb.useGravity = false;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_5 = __this->___playerController_7;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_6 = L_5->___rb_8;
		Rigidbody_set_useGravity_m1B1B22E093F9DC92D7BEEBBE6B02642B3B6C4389(L_6, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Main::EndGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Main_EndGame_m80029538EF5605BE3CF8348AB0DA571C00DB6A15 (Main_t6125012C4D88701077DD3C4660130C5535730E1E* __this, const RuntimeMethod* method) 
{
	{
		// endScreen.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___endScreen_6;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// playerController.follow = false;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_1 = __this->___playerController_7;
		L_1->___follow_10 = (bool)0;
		// playerController.fixRotation = false;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_2 = __this->___playerController_7;
		L_2->___fixRotation_4 = (bool)0;
		// playerController.rb.useGravity = true;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_3 = __this->___playerController_7;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_4 = L_3->___rb_8;
		Rigidbody_set_useGravity_m1B1B22E093F9DC92D7BEEBBE6B02642B3B6C4389(L_4, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Main::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Main__ctor_mC5886B5D00EEF6A6D8F96F3A84762F8AD71E51B6 (Main_t6125012C4D88701077DD3C4660130C5535730E1E* __this, const RuntimeMethod* method) 
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
// System.Void MoveGameArea::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveGameArea_FixedUpdate_m7035AE6554FDBD10B35BE2F3BB66FDD6060055E4 (MoveGameArea_t3E1D534AFB74F61A02B421FED76F108BD00405E7* __this, const RuntimeMethod* method) 
{
	{
		// fixed_position += velocity * Time.fixedDeltaTime;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___fixed_position_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___velocity_5;
		float L_2;
		L_2 = Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_0, L_3, NULL);
		__this->___fixed_position_4 = L_4;
		// velocity = new Vector3(0.0f, 0.0f, 10.0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_5), (0.0f), (0.0f), (10.0f), /*hidden argument*/NULL);
		__this->___velocity_5 = L_5;
		// }
		return;
	}
}
// System.Void MoveGameArea::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveGameArea_Update_m56B4770CBCF61542A272D4C3EB674C306953AF31 (MoveGameArea_t3E1D534AFB74F61A02B421FED76F108BD00405E7* __this, const RuntimeMethod* method) 
{
	{
		// transform.position = fixed_position + velocity * (Time.time - Time.fixedTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___fixed_position_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___velocity_5;
		float L_3;
		L_3 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_4;
		L_4 = Time_get_fixedTime_mEEDC1E90FA9C17F861872AF08459C04A6BBFCC21(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_2, ((float)il2cpp_codegen_subtract(L_3, L_4)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_1, L_5, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_6, NULL);
		// }
		return;
	}
}
// System.Void MoveGameArea::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveGameArea__ctor_mD14F814458486C47590B3DEFC285A3E671373D0D (MoveGameArea_t3E1D534AFB74F61A02B421FED76F108BD00405E7* __this, const RuntimeMethod* method) 
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
// System.Void moveSightTarget::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void moveSightTarget_Start_m294CF39578F86DF441DB1E10FD25310D43B65CBA (moveSightTarget_tF99AA2DDEC1A25EFCD3C2C339155E3D6B05BB242* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb = this.GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rb_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void moveSightTarget::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void moveSightTarget_Update_m9D8BB4EFA1D3B6BA238C40B63C05152575085C6C (moveSightTarget_tF99AA2DDEC1A25EFCD3C2C339155E3D6B05BB242* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// movement = new Vector2(Input.GetAxis("Horizontal"), Input.GetAxis("Vertical"));
		float L_0;
		L_0 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		float L_1;
		L_1 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_2), L_0, L_1, /*hidden argument*/NULL);
		__this->___movement_5 = L_2;
		// }
		return;
	}
}
// System.Void moveSightTarget::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void moveSightTarget_FixedUpdate_m96DD9C6C11B08C41B0229DA5127D177DFCA2FD54 (moveSightTarget_tF99AA2DDEC1A25EFCD3C2C339155E3D6B05BB242* __this, const RuntimeMethod* method) 
{
	{
		// moveChraracter(movement);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___movement_5;
		moveSightTarget_moveChraracter_m63212927518E5D3EDA74468A1F9613A018BD15EF(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void moveSightTarget::moveChraracter(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void moveSightTarget_moveChraracter_m63212927518E5D3EDA74468A1F9613A018BD15EF (moveSightTarget_tF99AA2DDEC1A25EFCD3C2C339155E3D6B05BB242* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_direction, const RuntimeMethod* method) 
{
	{
		// rb.AddForce(direction * moveSpeed);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->___rb_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___0_direction;
		float L_2 = __this->___moveSpeed_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_1, L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_3, NULL);
		Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198(L_0, L_4, NULL);
		// rb.AddTorque(direction * moveSpeed);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_5 = __this->___rb_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___0_direction;
		float L_7 = __this->___moveSpeed_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_6, L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_8, NULL);
		Rigidbody_AddTorque_m39C767D6CD12B2D12D575E2B469CB5565BFA30B6(L_5, L_9, NULL);
		// }
		return;
	}
}
// System.Void moveSightTarget::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void moveSightTarget__ctor_m8839E2E437F4B4208D9CB1F1C2C725DAA6175C80 (moveSightTarget_tF99AA2DDEC1A25EFCD3C2C339155E3D6B05BB242* __this, const RuntimeMethod* method) 
{
	{
		// public float moveSpeed = 10.0f;
		__this->___moveSpeed_6 = (10.0f);
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
// System.Void PlayerController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Start_m1D83076E8B136A71051F2F02545EE04947D3A8CF (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb = this.GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rb_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_8), (void*)L_0);
		// }
		return;
	}
}
// System.Void PlayerController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Update_m1F4051EB5BCBCCE5EEE2E3E49B7E278C3B14EC33 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// movement = new Vector2(Input.GetAxis("Horizontal"), Input.GetAxis("Vertical"));
		float L_0;
		L_0 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		float L_1;
		L_1 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_2), L_0, L_1, /*hidden argument*/NULL);
		__this->___movement_6 = L_2;
		// if (follow == true)
		bool L_3 = __this->___follow_10;
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		// transform.LookAt(target);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___target_9;
		Transform_LookAt_mA8567593181FD78BBDC2AF29AD99F93BDB2976B2(L_4, L_5, NULL);
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Void PlayerController::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_FixedUpdate_m6D906D8B13844542B81CC49BA19760F747CEC8C0 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	{
		// if (fixRotation == true)
		bool L_0 = __this->___fixRotation_4;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		// rb.constraints = RigidbodyConstraints.FreezeRotation;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1 = __this->___rb_8;
		Rigidbody_set_constraints_mE81BF0DAEB980E320538231E092CA4663885A9A3(L_1, ((int32_t)112), NULL);
		goto IL_0023;
	}

IL_0017:
	{
		// rb.constraints = RigidbodyConstraints.FreezePositionZ;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_2 = __this->___rb_8;
		Rigidbody_set_constraints_mE81BF0DAEB980E320538231E092CA4663885A9A3(L_2, 8, NULL);
	}

IL_0023:
	{
		// moveChraracter(movement);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = __this->___movement_6;
		PlayerController_moveChraracter_m37A5C7B4272F4B4F237D43C55482F979573B4603(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Void PlayerController::moveChraracter(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_moveChraracter_m37A5C7B4272F4B4F237D43C55482F979573B4603 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_direction, const RuntimeMethod* method) 
{
	{
		// rb.AddForce(direction * moveSpeed);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->___rb_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___0_direction;
		float L_2 = __this->___moveSpeed_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_1, L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_3, NULL);
		Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198(L_0, L_4, NULL);
		// rb.AddTorque(direction * moveSpeed);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_5 = __this->___rb_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___0_direction;
		float L_7 = __this->___moveSpeed_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_6, L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_8, NULL);
		Rigidbody_AddTorque_m39C767D6CD12B2D12D575E2B469CB5565BFA30B6(L_5, L_9, NULL);
		// }
		return;
	}
}
// System.Void PlayerController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController__ctor_mDDAB7C7D82E1A5B3E6C197B1AB9D653DFE554F33 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	{
		// public bool fixRotation = true;
		__this->___fixRotation_4 = (bool)1;
		// public float moveSpeed = 10.0f;
		__this->___moveSpeed_5 = (10.0f);
		// public float amount = 50f;
		__this->___amount_7 = (50.0f);
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
// System.Void ProjectileMovement::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectileMovement_Start_mA412EE56B6B8CA0690060859FCA382CD63DDC15B (ProjectileMovement_t4794C6764F7B7EA222E20244442A9048615E11D7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC00C36D0E5E4DEE3EE46C5BBA529B7DA5B5C005F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb = this.GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rb_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_5), (void*)L_0);
		// gameObject.tag = "Projectile";
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		GameObject_set_tag_m0A41528AFD8C83E1CEC5D769921159897CDD2B24(L_1, _stringLiteralC00C36D0E5E4DEE3EE46C5BBA529B7DA5B5C005F, NULL);
		// }
		return;
	}
}
// System.Void ProjectileMovement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectileMovement_Update_m3B73E604FC84B60A11F51E4EEA7AF093D6AF87EE (ProjectileMovement_t4794C6764F7B7EA222E20244442A9048615E11D7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral377F314EFA5AC4B448DDB84E18F4D19843D7D420);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (transform.position.z < deadZone)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		float L_2 = L_1.___z_4;
		float L_3 = __this->___deadZone_6;
		if ((!(((float)L_2) < ((float)L_3))))
		{
			goto IL_002d;
		}
	}
	{
		// Debug.Log("Projectile deleted");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral377F314EFA5AC4B448DDB84E18F4D19843D7D420, NULL);
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_4, NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void ProjectileMovement::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectileMovement_FixedUpdate_m68B92270B5EA311106F1A0D33CCBE243D19159A7 (ProjectileMovement_t4794C6764F7B7EA222E20244442A9048615E11D7* __this, const RuntimeMethod* method) 
{
	{
		// rb.AddForce(0, 0, moveSpeed);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->___rb_5;
		float L_1 = __this->___moveSpeed_4;
		Rigidbody_AddForce_mFD97FC9DA828C1952D46D28C50B1D994B19895F6(L_0, (0.0f), (0.0f), L_1, NULL);
		// }
		return;
	}
}
// System.Void ProjectileMovement::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectileMovement_OnCollisionEnter_m51A1FE671F01F2AEB8A0013E819907A71F590A43 (ProjectileMovement_t4794C6764F7B7EA222E20244442A9048615E11D7* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___0_collision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_0, NULL);
		// }
		return;
	}
}
// System.Void ProjectileMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectileMovement__ctor_mBF22E1F5E01A53A69C270EC9FE6C2F4B794E764B (ProjectileMovement_t4794C6764F7B7EA222E20244442A9048615E11D7* __this, const RuntimeMethod* method) 
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
// System.Void ProjectileSpawner::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectileSpawner_Start_mAFE5109B456DFDA62D19385660AE7DF4C9219738 (ProjectileSpawner_tEDEAB45EFFA25748DAC9E61F3123E7E7E7D9514A* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ProjectileSpawner::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectileSpawner_Update_m1DE160ED7C1CCD4D3FF0E466920F77EFB7CADD45 (ProjectileSpawner_tEDEAB45EFFA25748DAC9E61F3123E7E7E7D9514A* __this, const RuntimeMethod* method) 
{
	{
		// if (Input.GetKeyDown(KeyCode.Space))
		bool L_0;
		L_0 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)32), NULL);
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		// if(_ammobar.targetProgress > 0)
		ammoBar_t9A4B62EFE8C2B8E66C4C5D48AF9016D95C69B482* L_1 = __this->____ammobar_8;
		float L_2 = L_1->___targetProgress_6;
		if ((!(((float)L_2) > ((float)(0.0f)))))
		{
			goto IL_0021;
		}
	}
	{
		// spawnProjectile();
		ProjectileSpawner_U3CUpdateU3Eg__spawnProjectileU7C6_0_mE86238DB0B2683E2806F79CCAC7BCB1076BFDAE3(__this, NULL);
	}

IL_0021:
	{
		// _ammobar.IncrementProgress(0.01f);
		ammoBar_t9A4B62EFE8C2B8E66C4C5D48AF9016D95C69B482* L_3 = __this->____ammobar_8;
		ammoBar_IncrementProgress_m8BB317172CFD0EC03399C9B5F55F786AD8013914(L_3, (0.00999999978f), NULL);
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void ProjectileSpawner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectileSpawner__ctor_m33FAE05565EFBE3CC7ECE32EDDAC544707A0479B (ProjectileSpawner_tEDEAB45EFFA25748DAC9E61F3123E7E7E7D9514A* __this, const RuntimeMethod* method) 
{
	{
		// public float projectileSpeed = 10;
		__this->___projectileSpeed_7 = (10.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void ProjectileSpawner::<Update>g__spawnProjectile|6_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectileSpawner_U3CUpdateU3Eg__spawnProjectileU7C6_0_mE86238DB0B2683E2806F79CCAC7BCB1076BFDAE3 (ProjectileSpawner_tEDEAB45EFFA25748DAC9E61F3123E7E7E7D9514A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B9B97BAD24A46551385AB2F1BA306987441E2E7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var bullet = Instantiate(projectile, transform.position, transform.rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___projectile_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_0, L_2, L_4, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// bullet.GetComponent<Rigidbody>().velocity = projectileSpawnPoint.forward * projectileSpeed;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_6;
		L_6 = GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90(L_5, GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->___projectileSpawnPoint_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_7, NULL);
		float L_9 = __this->___projectileSpeed_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_8, L_9, NULL);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_6, L_10, NULL);
		// Debug.Log("Projectile Spawned");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral6B9B97BAD24A46551385AB2F1BA306987441E2E7, NULL);
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
// System.Void rotorRotate::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void rotorRotate_Start_m1D289F844AAE494D309FB83B19AE540A14439566 (rotorRotate_tF2FF1744B7499454E703A46C0A74551EA8A584D9* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void rotorRotate::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void rotorRotate_Update_m7ED495A986F23C3517A5B8AD0A4B4B786C4CF8E4 (rotorRotate_tF2FF1744B7499454E703A46C0A74551EA8A584D9* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void rotorRotate::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void rotorRotate_FixedUpdate_mDE3E7D2327A100791AB992F5D7737DB35AE3BCFF (rotorRotate_tF2FF1744B7499454E703A46C0A74551EA8A584D9* __this, const RuntimeMethod* method) 
{
	{
		// transform.Rotate(rotateAmount * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___rotateAmount_4;
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, L_2, NULL);
		Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE(L_0, L_3, NULL);
		// }
		return;
	}
}
// System.Void rotorRotate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void rotorRotate__ctor_m31677724433A4EEF0B1ED65CDFB901377EFC2E87 (rotorRotate_tF2FF1744B7499454E703A46C0A74551EA8A584D9* __this, const RuntimeMethod* method) 
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
// System.Void ScoreCounter::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreCounter_Start_mC44AE9A1D07E54F2761B749315EFE9BF241C0B28 (ScoreCounter_t7270E3D1A8B9BB1B73CBD594EDC0B3952E40F1C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// score = GetComponent<Text>();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0;
		L_0 = Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888(__this, Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		__this->___score_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___score_5), (void*)L_0);
		// }
		return;
	}
}
// System.Void ScoreCounter::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreCounter_Update_m5C95165BBB78FBC9163A047A49BBBE77D18F29A8 (ScoreCounter_t7270E3D1A8B9BB1B73CBD594EDC0B3952E40F1C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreCounter_t7270E3D1A8B9BB1B73CBD594EDC0B3952E40F1C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B1_1 = NULL;
	{
		// score.text = "" + scoreValue;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___score_5;
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreCounter_t7270E3D1A8B9BB1B73CBD594EDC0B3952E40F1C2_StaticFields*)il2cpp_codegen_static_fields_for(ScoreCounter_t7270E3D1A8B9BB1B73CBD594EDC0B3952E40F1C2_il2cpp_TypeInfo_var))->___scoreValue_4), NULL);
		String_t* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0019;
		}
	}
	{
		G_B2_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B2_1 = G_B1_1;
	}

IL_0019:
	{
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B2_1, G_B2_0);
		// }
		return;
	}
}
// System.Void ScoreCounter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreCounter__ctor_mD31BB3A21C7FDA565DBAA13439B05739F2AE109F (ScoreCounter_t7270E3D1A8B9BB1B73CBD594EDC0B3952E40F1C2* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_SmoothDamp_mF673AC30464B7DF671A0556140EB6E9DD75827ED_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_current, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_target, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_currentVelocity, float ___3_smoothTime, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		float L_0;
		L_0 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		V_0 = L_0;
		V_1 = (std::numeric_limits<float>::infinity());
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_current;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_target;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = ___2_currentVelocity;
		float L_4 = ___3_smoothTime;
		float L_5 = V_1;
		float L_6 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_SmoothDamp_mAF61EA22D4906BF87DD00A91FB4F6AC0C54C495A(L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		V_2 = L_7;
		goto IL_001b;
	}

IL_001b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_current, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_target, float ___2_maxDistanceDelta, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	bool V_5 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___1_target;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_current;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___1_target;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_current;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___1_target;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_current;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		if ((((float)L_18) == ((float)(0.0f))))
		{
			goto IL_0055;
		}
	}
	{
		float L_19 = ___2_maxDistanceDelta;
		if ((!(((float)L_19) >= ((float)(0.0f)))))
		{
			goto IL_0052;
		}
	}
	{
		float L_20 = V_3;
		float L_21 = ___2_maxDistanceDelta;
		float L_22 = ___2_maxDistanceDelta;
		G_B4_0 = ((((int32_t)((!(((float)L_20) <= ((float)((float)il2cpp_codegen_multiply(L_21, L_22)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0053;
	}

IL_0052:
	{
		G_B4_0 = 0;
	}

IL_0053:
	{
		G_B6_0 = G_B4_0;
		goto IL_0056;
	}

IL_0055:
	{
		G_B6_0 = 1;
	}

IL_0056:
	{
		V_5 = (bool)G_B6_0;
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_0061;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = ___1_target;
		V_6 = L_24;
		goto IL_009b;
	}

IL_0061:
	{
		float L_25 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_26;
		L_26 = sqrt(((double)L_25));
		V_4 = ((float)L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = ___0_current;
		float L_28 = L_27.___x_2;
		float L_29 = V_0;
		float L_30 = V_4;
		float L_31 = ___2_maxDistanceDelta;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = ___0_current;
		float L_33 = L_32.___y_3;
		float L_34 = V_1;
		float L_35 = V_4;
		float L_36 = ___2_maxDistanceDelta;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = ___0_current;
		float L_38 = L_37.___z_4;
		float L_39 = V_2;
		float L_40 = V_4;
		float L_41 = ___2_maxDistanceDelta;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_42), ((float)il2cpp_codegen_add(L_28, ((float)il2cpp_codegen_multiply(((float)(L_29/L_30)), L_31)))), ((float)il2cpp_codegen_add(L_33, ((float)il2cpp_codegen_multiply(((float)(L_34/L_35)), L_36)))), ((float)il2cpp_codegen_add(L_38, ((float)il2cpp_codegen_multiply(((float)(L_39/L_40)), L_41)))), /*hidden argument*/NULL);
		V_6 = L_42;
		goto IL_009b;
	}

IL_009b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = V_6;
		return L_43;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		float L_2 = ___1_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___0_a;
		float L_4 = L_3.___y_1;
		float L_5 = ___1_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_v;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___0_v;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
