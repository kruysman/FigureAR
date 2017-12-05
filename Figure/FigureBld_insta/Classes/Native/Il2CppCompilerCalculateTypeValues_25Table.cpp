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

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// System.Char[]
struct CharU5BU5D_t2212518679;
// System.Void
struct Void_t1177349272;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1310575001;
// System.IAsyncResult
struct IAsyncResult_t1274941345;
// System.AsyncCallback
struct AsyncCallback_t250659898;
// Vuforia.ReconstructionBehaviour
struct ReconstructionBehaviour_t1922409062;
// Vuforia.PropBehaviour
struct PropBehaviour_t2982839940;
// Vuforia.SurfaceBehaviour
struct SurfaceBehaviour_t284505193;
// System.String
struct String_t;
// UnityEngine.GUIStyle
struct GUIStyle_t2715005754;
// UnityEngine.Texture2D
struct Texture2D_t4123216927;
// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t3635184134;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef VALUETYPE_T1696301022_H
#define VALUETYPE_T1696301022_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t1696301022  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t1696301022_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t1696301022_marshaled_com
{
};
#endif // VALUETYPE_T1696301022_H
#ifndef ENUM_T1541277886_H
#define ENUM_T1541277886_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t1541277886  : public ValueType_t1696301022
{
public:

public:
};

struct Enum_t1541277886_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t2212518679* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t1541277886_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t2212518679* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t2212518679** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t2212518679* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t1541277886_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t1541277886_marshaled_com
{
};
#endif // ENUM_T1541277886_H
#ifndef VECTOR4_T4039223780_H
#define VECTOR4_T4039223780_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector4
struct  Vector4_t4039223780 
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
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_t4039223780, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_t4039223780, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_t4039223780, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_t4039223780, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_t4039223780_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t4039223780  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t4039223780  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t4039223780  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t4039223780  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_t4039223780_StaticFields, ___zeroVector_5)); }
	inline Vector4_t4039223780  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_t4039223780 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_t4039223780  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_t4039223780_StaticFields, ___oneVector_6)); }
	inline Vector4_t4039223780  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_t4039223780 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_t4039223780  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_t4039223780_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_t4039223780  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_t4039223780 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_t4039223780  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_t4039223780_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_t4039223780  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_t4039223780 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_t4039223780  value)
	{
		___negativeInfinityVector_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR4_T4039223780_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef UNITYARLIGHTESTIMATE_T3970723465_H
#define UNITYARLIGHTESTIMATE_T3970723465_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARLightEstimate
struct  UnityARLightEstimate_t3970723465 
{
public:
	// System.Single UnityEngine.XR.iOS.UnityARLightEstimate::ambientIntensity
	float ___ambientIntensity_0;
	// System.Single UnityEngine.XR.iOS.UnityARLightEstimate::ambientColorTemperature
	float ___ambientColorTemperature_1;

public:
	inline static int32_t get_offset_of_ambientIntensity_0() { return static_cast<int32_t>(offsetof(UnityARLightEstimate_t3970723465, ___ambientIntensity_0)); }
	inline float get_ambientIntensity_0() const { return ___ambientIntensity_0; }
	inline float* get_address_of_ambientIntensity_0() { return &___ambientIntensity_0; }
	inline void set_ambientIntensity_0(float value)
	{
		___ambientIntensity_0 = value;
	}

	inline static int32_t get_offset_of_ambientColorTemperature_1() { return static_cast<int32_t>(offsetof(UnityARLightEstimate_t3970723465, ___ambientColorTemperature_1)); }
	inline float get_ambientColorTemperature_1() const { return ___ambientColorTemperature_1; }
	inline float* get_address_of_ambientColorTemperature_1() { return &___ambientColorTemperature_1; }
	inline void set_ambientColorTemperature_1(float value)
	{
		___ambientColorTemperature_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARLIGHTESTIMATE_T3970723465_H
#ifndef U24ARRAYTYPEU3D24_T2487569057_H
#define U24ARRAYTYPEU3D24_T2487569057_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=24
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D24_t2487569057 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D24_t2487569057__padding[24];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D24_T2487569057_H
#ifndef VOID_T1177349272_H
#define VOID_T1177349272_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1177349272 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1177349272_H
#ifndef OBJECT_T494776106_H
#define OBJECT_T494776106_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t494776106  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t494776106, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t494776106_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t494776106_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t494776106_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t494776106_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T494776106_H
#ifndef DELEGATE_T1721461455_H
#define DELEGATE_T1721461455_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1721461455  : public RuntimeObject
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
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1310575001 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1721461455, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1721461455, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1721461455, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1721461455, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1721461455, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1721461455, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1721461455, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1721461455, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1721461455, ___data_8)); }
	inline DelegateData_t1310575001 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1310575001 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1310575001 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1721461455_H
#ifndef ARTRACKINGSTATE_T2179169944_H
#define ARTRACKINGSTATE_T2179169944_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARTrackingState
struct  ARTrackingState_t2179169944 
{
public:
	// System.Int32 UnityEngine.XR.iOS.ARTrackingState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ARTrackingState_t2179169944, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARTRACKINGSTATE_T2179169944_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T1919463484_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T1919463484_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t1919463484  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t1919463484_StaticFields
{
public:
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-8E7629AD5AF686202B8CB7C014505C432FFE31E6
	U24ArrayTypeU3D24_t2487569057  ___U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_0;

public:
	inline static int32_t get_offset_of_U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1919463484_StaticFields, ___U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_0)); }
	inline U24ArrayTypeU3D24_t2487569057  get_U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_0() const { return ___U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_0; }
	inline U24ArrayTypeU3D24_t2487569057 * get_address_of_U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_0() { return &___U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_0; }
	inline void set_U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_0(U24ArrayTypeU3D24_t2487569057  value)
	{
		___U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T1919463484_H
#ifndef ARTRACKINGSTATEREASON_T533736304_H
#define ARTRACKINGSTATEREASON_T533736304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARTrackingStateReason
struct  ARTrackingStateReason_t533736304 
{
public:
	// System.Int32 UnityEngine.XR.iOS.ARTrackingStateReason::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ARTrackingStateReason_t533736304, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARTRACKINGSTATEREASON_T533736304_H
#ifndef UNITYVIDEOPARAMS_T2901094357_H
#define UNITYVIDEOPARAMS_T2901094357_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityVideoParams
struct  UnityVideoParams_t2901094357 
{
public:
	// System.Int32 UnityEngine.XR.iOS.UnityVideoParams::yWidth
	int32_t ___yWidth_0;
	// System.Int32 UnityEngine.XR.iOS.UnityVideoParams::yHeight
	int32_t ___yHeight_1;
	// System.Int32 UnityEngine.XR.iOS.UnityVideoParams::screenOrientation
	int32_t ___screenOrientation_2;
	// System.Single UnityEngine.XR.iOS.UnityVideoParams::texCoordScale
	float ___texCoordScale_3;
	// System.IntPtr UnityEngine.XR.iOS.UnityVideoParams::cvPixelBufferPtr
	intptr_t ___cvPixelBufferPtr_4;

public:
	inline static int32_t get_offset_of_yWidth_0() { return static_cast<int32_t>(offsetof(UnityVideoParams_t2901094357, ___yWidth_0)); }
	inline int32_t get_yWidth_0() const { return ___yWidth_0; }
	inline int32_t* get_address_of_yWidth_0() { return &___yWidth_0; }
	inline void set_yWidth_0(int32_t value)
	{
		___yWidth_0 = value;
	}

	inline static int32_t get_offset_of_yHeight_1() { return static_cast<int32_t>(offsetof(UnityVideoParams_t2901094357, ___yHeight_1)); }
	inline int32_t get_yHeight_1() const { return ___yHeight_1; }
	inline int32_t* get_address_of_yHeight_1() { return &___yHeight_1; }
	inline void set_yHeight_1(int32_t value)
	{
		___yHeight_1 = value;
	}

	inline static int32_t get_offset_of_screenOrientation_2() { return static_cast<int32_t>(offsetof(UnityVideoParams_t2901094357, ___screenOrientation_2)); }
	inline int32_t get_screenOrientation_2() const { return ___screenOrientation_2; }
	inline int32_t* get_address_of_screenOrientation_2() { return &___screenOrientation_2; }
	inline void set_screenOrientation_2(int32_t value)
	{
		___screenOrientation_2 = value;
	}

	inline static int32_t get_offset_of_texCoordScale_3() { return static_cast<int32_t>(offsetof(UnityVideoParams_t2901094357, ___texCoordScale_3)); }
	inline float get_texCoordScale_3() const { return ___texCoordScale_3; }
	inline float* get_address_of_texCoordScale_3() { return &___texCoordScale_3; }
	inline void set_texCoordScale_3(float value)
	{
		___texCoordScale_3 = value;
	}

	inline static int32_t get_offset_of_cvPixelBufferPtr_4() { return static_cast<int32_t>(offsetof(UnityVideoParams_t2901094357, ___cvPixelBufferPtr_4)); }
	inline intptr_t get_cvPixelBufferPtr_4() const { return ___cvPixelBufferPtr_4; }
	inline intptr_t* get_address_of_cvPixelBufferPtr_4() { return &___cvPixelBufferPtr_4; }
	inline void set_cvPixelBufferPtr_4(intptr_t value)
	{
		___cvPixelBufferPtr_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYVIDEOPARAMS_T2901094357_H
#ifndef UNITYARMATRIX4X4_T2021772978_H
#define UNITYARMATRIX4X4_T2021772978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARMatrix4x4
struct  UnityARMatrix4x4_t2021772978 
{
public:
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column0
	Vector4_t4039223780  ___column0_0;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column1
	Vector4_t4039223780  ___column1_1;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column2
	Vector4_t4039223780  ___column2_2;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column3
	Vector4_t4039223780  ___column3_3;

public:
	inline static int32_t get_offset_of_column0_0() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_t2021772978, ___column0_0)); }
	inline Vector4_t4039223780  get_column0_0() const { return ___column0_0; }
	inline Vector4_t4039223780 * get_address_of_column0_0() { return &___column0_0; }
	inline void set_column0_0(Vector4_t4039223780  value)
	{
		___column0_0 = value;
	}

	inline static int32_t get_offset_of_column1_1() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_t2021772978, ___column1_1)); }
	inline Vector4_t4039223780  get_column1_1() const { return ___column1_1; }
	inline Vector4_t4039223780 * get_address_of_column1_1() { return &___column1_1; }
	inline void set_column1_1(Vector4_t4039223780  value)
	{
		___column1_1 = value;
	}

	inline static int32_t get_offset_of_column2_2() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_t2021772978, ___column2_2)); }
	inline Vector4_t4039223780  get_column2_2() const { return ___column2_2; }
	inline Vector4_t4039223780 * get_address_of_column2_2() { return &___column2_2; }
	inline void set_column2_2(Vector4_t4039223780  value)
	{
		___column2_2 = value;
	}

	inline static int32_t get_offset_of_column3_3() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_t2021772978, ___column3_3)); }
	inline Vector4_t4039223780  get_column3_3() const { return ___column3_3; }
	inline Vector4_t4039223780 * get_address_of_column3_3() { return &___column3_3; }
	inline void set_column3_3(Vector4_t4039223780  value)
	{
		___column3_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARMATRIX4X4_T2021772978_H
#ifndef UNITYARUSERANCHORDATA_T2533476134_H
#define UNITYARUSERANCHORDATA_T2533476134_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARUserAnchorData
struct  UnityARUserAnchorData_t2533476134 
{
public:
	// System.IntPtr UnityEngine.XR.iOS.UnityARUserAnchorData::ptrIdentifier
	intptr_t ___ptrIdentifier_0;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARUserAnchorData::transform
	UnityARMatrix4x4_t2021772978  ___transform_1;

public:
	inline static int32_t get_offset_of_ptrIdentifier_0() { return static_cast<int32_t>(offsetof(UnityARUserAnchorData_t2533476134, ___ptrIdentifier_0)); }
	inline intptr_t get_ptrIdentifier_0() const { return ___ptrIdentifier_0; }
	inline intptr_t* get_address_of_ptrIdentifier_0() { return &___ptrIdentifier_0; }
	inline void set_ptrIdentifier_0(intptr_t value)
	{
		___ptrIdentifier_0 = value;
	}

	inline static int32_t get_offset_of_transform_1() { return static_cast<int32_t>(offsetof(UnityARUserAnchorData_t2533476134, ___transform_1)); }
	inline UnityARMatrix4x4_t2021772978  get_transform_1() const { return ___transform_1; }
	inline UnityARMatrix4x4_t2021772978 * get_address_of_transform_1() { return &___transform_1; }
	inline void set_transform_1(UnityARMatrix4x4_t2021772978  value)
	{
		___transform_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARUSERANCHORDATA_T2533476134_H
#ifndef INTERNAL_UNITYARCAMERA_T242014009_H
#define INTERNAL_UNITYARCAMERA_T242014009_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.internal_UnityARCamera
struct  internal_UnityARCamera_t242014009 
{
public:
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.internal_UnityARCamera::worldTransform
	UnityARMatrix4x4_t2021772978  ___worldTransform_0;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.internal_UnityARCamera::projectionMatrix
	UnityARMatrix4x4_t2021772978  ___projectionMatrix_1;
	// UnityEngine.XR.iOS.ARTrackingState UnityEngine.XR.iOS.internal_UnityARCamera::trackingState
	int32_t ___trackingState_2;
	// UnityEngine.XR.iOS.ARTrackingStateReason UnityEngine.XR.iOS.internal_UnityARCamera::trackingReason
	int32_t ___trackingReason_3;
	// UnityEngine.XR.iOS.UnityVideoParams UnityEngine.XR.iOS.internal_UnityARCamera::videoParams
	UnityVideoParams_t2901094357  ___videoParams_4;
	// UnityEngine.XR.iOS.UnityARLightEstimate UnityEngine.XR.iOS.internal_UnityARCamera::lightEstimation
	UnityARLightEstimate_t3970723465  ___lightEstimation_5;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.internal_UnityARCamera::displayTransform
	UnityARMatrix4x4_t2021772978  ___displayTransform_6;
	// System.UInt32 UnityEngine.XR.iOS.internal_UnityARCamera::getPointCloudData
	uint32_t ___getPointCloudData_7;

public:
	inline static int32_t get_offset_of_worldTransform_0() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t242014009, ___worldTransform_0)); }
	inline UnityARMatrix4x4_t2021772978  get_worldTransform_0() const { return ___worldTransform_0; }
	inline UnityARMatrix4x4_t2021772978 * get_address_of_worldTransform_0() { return &___worldTransform_0; }
	inline void set_worldTransform_0(UnityARMatrix4x4_t2021772978  value)
	{
		___worldTransform_0 = value;
	}

	inline static int32_t get_offset_of_projectionMatrix_1() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t242014009, ___projectionMatrix_1)); }
	inline UnityARMatrix4x4_t2021772978  get_projectionMatrix_1() const { return ___projectionMatrix_1; }
	inline UnityARMatrix4x4_t2021772978 * get_address_of_projectionMatrix_1() { return &___projectionMatrix_1; }
	inline void set_projectionMatrix_1(UnityARMatrix4x4_t2021772978  value)
	{
		___projectionMatrix_1 = value;
	}

	inline static int32_t get_offset_of_trackingState_2() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t242014009, ___trackingState_2)); }
	inline int32_t get_trackingState_2() const { return ___trackingState_2; }
	inline int32_t* get_address_of_trackingState_2() { return &___trackingState_2; }
	inline void set_trackingState_2(int32_t value)
	{
		___trackingState_2 = value;
	}

	inline static int32_t get_offset_of_trackingReason_3() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t242014009, ___trackingReason_3)); }
	inline int32_t get_trackingReason_3() const { return ___trackingReason_3; }
	inline int32_t* get_address_of_trackingReason_3() { return &___trackingReason_3; }
	inline void set_trackingReason_3(int32_t value)
	{
		___trackingReason_3 = value;
	}

	inline static int32_t get_offset_of_videoParams_4() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t242014009, ___videoParams_4)); }
	inline UnityVideoParams_t2901094357  get_videoParams_4() const { return ___videoParams_4; }
	inline UnityVideoParams_t2901094357 * get_address_of_videoParams_4() { return &___videoParams_4; }
	inline void set_videoParams_4(UnityVideoParams_t2901094357  value)
	{
		___videoParams_4 = value;
	}

	inline static int32_t get_offset_of_lightEstimation_5() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t242014009, ___lightEstimation_5)); }
	inline UnityARLightEstimate_t3970723465  get_lightEstimation_5() const { return ___lightEstimation_5; }
	inline UnityARLightEstimate_t3970723465 * get_address_of_lightEstimation_5() { return &___lightEstimation_5; }
	inline void set_lightEstimation_5(UnityARLightEstimate_t3970723465  value)
	{
		___lightEstimation_5 = value;
	}

	inline static int32_t get_offset_of_displayTransform_6() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t242014009, ___displayTransform_6)); }
	inline UnityARMatrix4x4_t2021772978  get_displayTransform_6() const { return ___displayTransform_6; }
	inline UnityARMatrix4x4_t2021772978 * get_address_of_displayTransform_6() { return &___displayTransform_6; }
	inline void set_displayTransform_6(UnityARMatrix4x4_t2021772978  value)
	{
		___displayTransform_6 = value;
	}

	inline static int32_t get_offset_of_getPointCloudData_7() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t242014009, ___getPointCloudData_7)); }
	inline uint32_t get_getPointCloudData_7() const { return ___getPointCloudData_7; }
	inline uint32_t* get_address_of_getPointCloudData_7() { return &___getPointCloudData_7; }
	inline void set_getPointCloudData_7(uint32_t value)
	{
		___getPointCloudData_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_UNITYARCAMERA_T242014009_H
#ifndef COMPONENT_T1739252764_H
#define COMPONENT_T1739252764_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1739252764  : public Object_t494776106
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1739252764_H
#ifndef MULTICASTDELEGATE_T1430870078_H
#define MULTICASTDELEGATE_T1430870078_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t1430870078  : public Delegate_t1721461455
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t1430870078 * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t1430870078 * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t1430870078, ___prev_9)); }
	inline MulticastDelegate_t1430870078 * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t1430870078 ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t1430870078 * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t1430870078, ___kpm_next_10)); }
	inline MulticastDelegate_t1430870078 * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t1430870078 ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t1430870078 * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T1430870078_H
#ifndef BEHAVIOUR_T3193398575_H
#define BEHAVIOUR_T3193398575_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t3193398575  : public Component_t1739252764
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T3193398575_H
#ifndef INTERNAL_ARUSERANCHORADDED_T2099498692_H
#define INTERNAL_ARUSERANCHORADDED_T2099498692_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorAdded
struct  internal_ARUserAnchorAdded_t2099498692  : public MulticastDelegate_t1430870078
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_ARUSERANCHORADDED_T2099498692_H
#ifndef INTERNAL_ARSESSIONTRACKINGCHANGED_T1062060168_H
#define INTERNAL_ARSESSIONTRACKINGCHANGED_T1062060168_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARSessionTrackingChanged
struct  internal_ARSessionTrackingChanged_t1062060168  : public MulticastDelegate_t1430870078
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_ARSESSIONTRACKINGCHANGED_T1062060168_H
#ifndef INTERNAL_ARUSERANCHORREMOVED_T2304852377_H
#define INTERNAL_ARUSERANCHORREMOVED_T2304852377_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorRemoved
struct  internal_ARUserAnchorRemoved_t2304852377  : public MulticastDelegate_t1430870078
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_ARUSERANCHORREMOVED_T2304852377_H
#ifndef INTERNAL_ARUSERANCHORUPDATED_T2232613486_H
#define INTERNAL_ARUSERANCHORUPDATED_T2232613486_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorUpdated
struct  internal_ARUserAnchorUpdated_t2232613486  : public MulticastDelegate_t1430870078
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_ARUSERANCHORUPDATED_T2232613486_H
#ifndef MONOBEHAVIOUR_T2648161865_H
#define MONOBEHAVIOUR_T2648161865_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t2648161865  : public Behaviour_t3193398575
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T2648161865_H
#ifndef DEFAULTSMARTTERRAINEVENTHANDLER_T1794209884_H
#define DEFAULTSMARTTERRAINEVENTHANDLER_T1794209884_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DefaultSmartTerrainEventHandler
struct  DefaultSmartTerrainEventHandler_t1794209884  : public MonoBehaviour_t2648161865
{
public:
	// Vuforia.ReconstructionBehaviour DefaultSmartTerrainEventHandler::mReconstructionBehaviour
	ReconstructionBehaviour_t1922409062 * ___mReconstructionBehaviour_2;
	// Vuforia.PropBehaviour DefaultSmartTerrainEventHandler::PropTemplate
	PropBehaviour_t2982839940 * ___PropTemplate_3;
	// Vuforia.SurfaceBehaviour DefaultSmartTerrainEventHandler::SurfaceTemplate
	SurfaceBehaviour_t284505193 * ___SurfaceTemplate_4;

public:
	inline static int32_t get_offset_of_mReconstructionBehaviour_2() { return static_cast<int32_t>(offsetof(DefaultSmartTerrainEventHandler_t1794209884, ___mReconstructionBehaviour_2)); }
	inline ReconstructionBehaviour_t1922409062 * get_mReconstructionBehaviour_2() const { return ___mReconstructionBehaviour_2; }
	inline ReconstructionBehaviour_t1922409062 ** get_address_of_mReconstructionBehaviour_2() { return &___mReconstructionBehaviour_2; }
	inline void set_mReconstructionBehaviour_2(ReconstructionBehaviour_t1922409062 * value)
	{
		___mReconstructionBehaviour_2 = value;
		Il2CppCodeGenWriteBarrier((&___mReconstructionBehaviour_2), value);
	}

	inline static int32_t get_offset_of_PropTemplate_3() { return static_cast<int32_t>(offsetof(DefaultSmartTerrainEventHandler_t1794209884, ___PropTemplate_3)); }
	inline PropBehaviour_t2982839940 * get_PropTemplate_3() const { return ___PropTemplate_3; }
	inline PropBehaviour_t2982839940 ** get_address_of_PropTemplate_3() { return &___PropTemplate_3; }
	inline void set_PropTemplate_3(PropBehaviour_t2982839940 * value)
	{
		___PropTemplate_3 = value;
		Il2CppCodeGenWriteBarrier((&___PropTemplate_3), value);
	}

	inline static int32_t get_offset_of_SurfaceTemplate_4() { return static_cast<int32_t>(offsetof(DefaultSmartTerrainEventHandler_t1794209884, ___SurfaceTemplate_4)); }
	inline SurfaceBehaviour_t284505193 * get_SurfaceTemplate_4() const { return ___SurfaceTemplate_4; }
	inline SurfaceBehaviour_t284505193 ** get_address_of_SurfaceTemplate_4() { return &___SurfaceTemplate_4; }
	inline void set_SurfaceTemplate_4(SurfaceBehaviour_t284505193 * value)
	{
		___SurfaceTemplate_4 = value;
		Il2CppCodeGenWriteBarrier((&___SurfaceTemplate_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTSMARTTERRAINEVENTHANDLER_T1794209884_H
#ifndef DEFAULTINITIALIZATIONERRORHANDLER_T447694372_H
#define DEFAULTINITIALIZATIONERRORHANDLER_T447694372_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DefaultInitializationErrorHandler
struct  DefaultInitializationErrorHandler_t447694372  : public MonoBehaviour_t2648161865
{
public:
	// System.String DefaultInitializationErrorHandler::mErrorText
	String_t* ___mErrorText_2;
	// System.Boolean DefaultInitializationErrorHandler::mErrorOccurred
	bool ___mErrorOccurred_3;
	// UnityEngine.GUIStyle DefaultInitializationErrorHandler::bodyStyle
	GUIStyle_t2715005754 * ___bodyStyle_5;
	// UnityEngine.GUIStyle DefaultInitializationErrorHandler::headerStyle
	GUIStyle_t2715005754 * ___headerStyle_6;
	// UnityEngine.GUIStyle DefaultInitializationErrorHandler::footerStyle
	GUIStyle_t2715005754 * ___footerStyle_7;
	// UnityEngine.Texture2D DefaultInitializationErrorHandler::bodyTexture
	Texture2D_t4123216927 * ___bodyTexture_8;
	// UnityEngine.Texture2D DefaultInitializationErrorHandler::headerTexture
	Texture2D_t4123216927 * ___headerTexture_9;
	// UnityEngine.Texture2D DefaultInitializationErrorHandler::footerTexture
	Texture2D_t4123216927 * ___footerTexture_10;

public:
	inline static int32_t get_offset_of_mErrorText_2() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t447694372, ___mErrorText_2)); }
	inline String_t* get_mErrorText_2() const { return ___mErrorText_2; }
	inline String_t** get_address_of_mErrorText_2() { return &___mErrorText_2; }
	inline void set_mErrorText_2(String_t* value)
	{
		___mErrorText_2 = value;
		Il2CppCodeGenWriteBarrier((&___mErrorText_2), value);
	}

	inline static int32_t get_offset_of_mErrorOccurred_3() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t447694372, ___mErrorOccurred_3)); }
	inline bool get_mErrorOccurred_3() const { return ___mErrorOccurred_3; }
	inline bool* get_address_of_mErrorOccurred_3() { return &___mErrorOccurred_3; }
	inline void set_mErrorOccurred_3(bool value)
	{
		___mErrorOccurred_3 = value;
	}

	inline static int32_t get_offset_of_bodyStyle_5() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t447694372, ___bodyStyle_5)); }
	inline GUIStyle_t2715005754 * get_bodyStyle_5() const { return ___bodyStyle_5; }
	inline GUIStyle_t2715005754 ** get_address_of_bodyStyle_5() { return &___bodyStyle_5; }
	inline void set_bodyStyle_5(GUIStyle_t2715005754 * value)
	{
		___bodyStyle_5 = value;
		Il2CppCodeGenWriteBarrier((&___bodyStyle_5), value);
	}

	inline static int32_t get_offset_of_headerStyle_6() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t447694372, ___headerStyle_6)); }
	inline GUIStyle_t2715005754 * get_headerStyle_6() const { return ___headerStyle_6; }
	inline GUIStyle_t2715005754 ** get_address_of_headerStyle_6() { return &___headerStyle_6; }
	inline void set_headerStyle_6(GUIStyle_t2715005754 * value)
	{
		___headerStyle_6 = value;
		Il2CppCodeGenWriteBarrier((&___headerStyle_6), value);
	}

	inline static int32_t get_offset_of_footerStyle_7() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t447694372, ___footerStyle_7)); }
	inline GUIStyle_t2715005754 * get_footerStyle_7() const { return ___footerStyle_7; }
	inline GUIStyle_t2715005754 ** get_address_of_footerStyle_7() { return &___footerStyle_7; }
	inline void set_footerStyle_7(GUIStyle_t2715005754 * value)
	{
		___footerStyle_7 = value;
		Il2CppCodeGenWriteBarrier((&___footerStyle_7), value);
	}

	inline static int32_t get_offset_of_bodyTexture_8() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t447694372, ___bodyTexture_8)); }
	inline Texture2D_t4123216927 * get_bodyTexture_8() const { return ___bodyTexture_8; }
	inline Texture2D_t4123216927 ** get_address_of_bodyTexture_8() { return &___bodyTexture_8; }
	inline void set_bodyTexture_8(Texture2D_t4123216927 * value)
	{
		___bodyTexture_8 = value;
		Il2CppCodeGenWriteBarrier((&___bodyTexture_8), value);
	}

	inline static int32_t get_offset_of_headerTexture_9() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t447694372, ___headerTexture_9)); }
	inline Texture2D_t4123216927 * get_headerTexture_9() const { return ___headerTexture_9; }
	inline Texture2D_t4123216927 ** get_address_of_headerTexture_9() { return &___headerTexture_9; }
	inline void set_headerTexture_9(Texture2D_t4123216927 * value)
	{
		___headerTexture_9 = value;
		Il2CppCodeGenWriteBarrier((&___headerTexture_9), value);
	}

	inline static int32_t get_offset_of_footerTexture_10() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t447694372, ___footerTexture_10)); }
	inline Texture2D_t4123216927 * get_footerTexture_10() const { return ___footerTexture_10; }
	inline Texture2D_t4123216927 ** get_address_of_footerTexture_10() { return &___footerTexture_10; }
	inline void set_footerTexture_10(Texture2D_t4123216927 * value)
	{
		___footerTexture_10 = value;
		Il2CppCodeGenWriteBarrier((&___footerTexture_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTINITIALIZATIONERRORHANDLER_T447694372_H
#ifndef DEFAULTTRACKABLEEVENTHANDLER_T900044990_H
#define DEFAULTTRACKABLEEVENTHANDLER_T900044990_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DefaultTrackableEventHandler
struct  DefaultTrackableEventHandler_t900044990  : public MonoBehaviour_t2648161865
{
public:
	// Vuforia.TrackableBehaviour DefaultTrackableEventHandler::mTrackableBehaviour
	TrackableBehaviour_t3635184134 * ___mTrackableBehaviour_2;

public:
	inline static int32_t get_offset_of_mTrackableBehaviour_2() { return static_cast<int32_t>(offsetof(DefaultTrackableEventHandler_t900044990, ___mTrackableBehaviour_2)); }
	inline TrackableBehaviour_t3635184134 * get_mTrackableBehaviour_2() const { return ___mTrackableBehaviour_2; }
	inline TrackableBehaviour_t3635184134 ** get_address_of_mTrackableBehaviour_2() { return &___mTrackableBehaviour_2; }
	inline void set_mTrackableBehaviour_2(TrackableBehaviour_t3635184134 * value)
	{
		___mTrackableBehaviour_2 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackableBehaviour_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTTRACKABLEEVENTHANDLER_T900044990_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2500 = { sizeof (internal_ARUserAnchorAdded_t2099498692), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2501 = { sizeof (internal_ARUserAnchorUpdated_t2232613486), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2502 = { sizeof (internal_ARUserAnchorRemoved_t2304852377), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2503 = { sizeof (internal_ARSessionTrackingChanged_t1062060168), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2504 = { sizeof (DefaultInitializationErrorHandler_t447694372), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2504[9] = 
{
	DefaultInitializationErrorHandler_t447694372::get_offset_of_mErrorText_2(),
	DefaultInitializationErrorHandler_t447694372::get_offset_of_mErrorOccurred_3(),
	0,
	DefaultInitializationErrorHandler_t447694372::get_offset_of_bodyStyle_5(),
	DefaultInitializationErrorHandler_t447694372::get_offset_of_headerStyle_6(),
	DefaultInitializationErrorHandler_t447694372::get_offset_of_footerStyle_7(),
	DefaultInitializationErrorHandler_t447694372::get_offset_of_bodyTexture_8(),
	DefaultInitializationErrorHandler_t447694372::get_offset_of_headerTexture_9(),
	DefaultInitializationErrorHandler_t447694372::get_offset_of_footerTexture_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2505 = { sizeof (DefaultSmartTerrainEventHandler_t1794209884), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2505[3] = 
{
	DefaultSmartTerrainEventHandler_t1794209884::get_offset_of_mReconstructionBehaviour_2(),
	DefaultSmartTerrainEventHandler_t1794209884::get_offset_of_PropTemplate_3(),
	DefaultSmartTerrainEventHandler_t1794209884::get_offset_of_SurfaceTemplate_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2506 = { sizeof (DefaultTrackableEventHandler_t900044990), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2506[1] = 
{
	DefaultTrackableEventHandler_t900044990::get_offset_of_mTrackableBehaviour_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2507 = { sizeof (U3CPrivateImplementationDetailsU3E_t1919463484), -1, sizeof(U3CPrivateImplementationDetailsU3E_t1919463484_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2507[1] = 
{
	U3CPrivateImplementationDetailsU3E_t1919463484_StaticFields::get_offset_of_U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2508 = { sizeof (U24ArrayTypeU3D24_t2487569057)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU3D24_t2487569057 ), 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
