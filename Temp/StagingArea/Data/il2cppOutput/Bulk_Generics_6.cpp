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

struct t1836;
struct t2442;
struct t8;
struct t2443;
struct t1837;
struct t2444;
struct t2445;
struct t1838;
struct t2446;
struct t2447;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "t121.h"
#include "t1836.h"
#include "t1836MD.h"
#include "t122.h"
#include "t2442MD.h"
#include "t733.h"
#include "t126.h"
#include "t733MD.h"
#include "t8MD.h"
#include "t8.h"
#include "t124.h"
#include "t2442.h"
#include "t127MD.h"
#include "t1148MD.h"
#include "t127.h"
#include "t128.h"
#include "mscorlib_ArrayTypes.h"
#include "t2443.h"
#include "t2443MD.h"
#include "t1837.h"
#include "t1837MD.h"
#include "t2444MD.h"
#include "t1051.h"
#include "t1051MD.h"
#include "t2444.h"
#include "t2445.h"
#include "t2445MD.h"
#include "t464MD.h"
#include "t464.h"
#include "t3.h"
#include "t1838.h"
#include "t1838MD.h"
#include "t2446MD.h"
#include "t2446.h"
#include "t2447.h"
#include "t2447MD.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" void m10620_gshared (t1836 * __this, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (t2442 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2442 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
extern "C" int32_t m18203_gshared (t1836 * __this, t733  p0, const MethodInfo* method)
{
	{
		t733  L_0 = p0;
		goto IL_000d;
	}
	{
		return 0;
	}

IL_000d:
	{
		int32_t L_1 = m10182((t733 *)(&p0), NULL);
		return L_1;
	}
}
extern "C" bool m18204_gshared (t1836 * __this, t733  p0, t733  p1, const MethodInfo* method)
{
	{
		t733  L_0 = p0;
		goto IL_0015;
	}
	{
		t733  L_1 = p1;
		t733  L_2 = L_1;
		t8 * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return ((((t8*)(t8 *)L_3) == ((t8*)(t8 *)NULL))? 1 : 0);
	}

IL_0015:
	{
		t733  L_4 = p1;
		bool L_5 = m10181((t733 *)(&p0), (t733 )L_4, NULL);
		return L_5;
	}
}
extern "C" void m18205_gshared (t2442 * __this, const MethodInfo* method)
{
	{
		m336((t8 *)__this, NULL);
		return;
	}
}
extern const Il2CppType* t2681_0_0_0_var;
extern TypeInfo* t127_TI_var;
extern TypeInfo* t146_TI_var;
extern "C" void m18206_gshared (t8 * __this , const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t2681_0_0_0_var = il2cpp_codegen_type_from_index(2716);
		t127_TI_var = il2cpp_codegen_type_info_from_index(4);
		t146_TI_var = il2cpp_codegen_type_info_from_index(28);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t127_TI_var);
		t127 * L_0 = m329(NULL, (t128 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), NULL);
		t127 * L_1 = m329(NULL, (t128 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), NULL);
		bool L_2 = (bool)VirtFuncInvoker1< bool, t127 * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (t127 *)L_0, (t127 *)L_1);
		if (!L_2)
		{
			goto IL_0054;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t127_TI_var);
		t127 * L_3 = m329(NULL, (t128 )LoadTypeToken(t2681_0_0_0_var), NULL);
		t146* L_4 = (t146*)((t146*)SZArrayNew(t146_TI_var, 1));
		t127 * L_5 = m329(NULL, (t128 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), NULL);
		ArrayElementTypeCheck (L_4, L_5);
		*((t127 **)(t127 **)SZArrayLdElema(L_4, 0, sizeof(t127 *))) = (t127 *)L_5;
		t127 * L_6 = (t127 *)VirtFuncInvoker1< t127 *, t146* >::Invoke(79 /* System.Type System.Type::MakeGenericType(System.Type[]) */, (t127 *)L_3, (t146*)L_4);
		t8 * L_7 = m9743(NULL, (t127 *)L_6, NULL);
		((t2442_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->f0 = ((t2442 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_005e;
	}

IL_0054:
	{
		t2443 * L_8 = (t2443 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (t2443 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((t2442_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->f0 = L_8;
	}

IL_005e:
	{
		return;
	}
}
extern "C" int32_t m18207_gshared (t2442 * __this, t8 * p0, const MethodInfo* method)
{
	{
		t8 * L_0 = p0;
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, t733  >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<System.Guid>::GetHashCode(T) */, (t2442 *)__this, (t733 )((*(t733 *)((t733 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
extern "C" bool m18208_gshared (t2442 * __this, t8 * p0, t8 * p1, const MethodInfo* method)
{
	{
		t8 * L_0 = p0;
		t8 * L_1 = p1;
		bool L_2 = (bool)VirtFuncInvoker2< bool, t733 , t733  >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Guid>::Equals(T,T) */, (t2442 *)__this, (t733 )((*(t733 *)((t733 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (t733 )((*(t733 *)((t733 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
extern "C" t2442 * m18209_gshared (t8 * __this , const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		t2442 * L_0 = ((t2442_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->f0;
		return L_0;
	}
}
extern "C" void m18210_gshared (t2443 * __this, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (t2442 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2442 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
extern "C" int32_t m18211_gshared (t2443 * __this, t733  p0, const MethodInfo* method)
{
	{
		t733  L_0 = p0;
		goto IL_000d;
	}
	{
		return 0;
	}

IL_000d:
	{
		int32_t L_1 = m10182((t733 *)(&p0), NULL);
		return L_1;
	}
}
extern "C" bool m18212_gshared (t2443 * __this, t733  p0, t733  p1, const MethodInfo* method)
{
	{
		t733  L_0 = p0;
		goto IL_0015;
	}
	{
		t733  L_1 = p1;
		t733  L_2 = L_1;
		t8 * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return ((((t8*)(t8 *)L_3) == ((t8*)(t8 *)NULL))? 1 : 0);
	}

IL_0015:
	{
		t733  L_4 = p1;
		t733  L_5 = L_4;
		t8 * L_6 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_5);
		bool L_7 = m10179((t733 *)(&p0), (t8 *)L_6, NULL);
		return L_7;
	}
}
extern "C" void m10621_gshared (t1837 * __this, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (t2444 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2444 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
extern "C" int32_t m18213_gshared (t1837 * __this, t1051  p0, t1051  p1, const MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	{
		t1051  L_0 = p0;
		goto IL_001e;
	}
	{
		t1051  L_1 = p1;
		goto IL_001c;
	}
	{
		G_B4_0 = 0;
		goto IL_001d;
	}

IL_001c:
	{
		G_B4_0 = (-1);
	}

IL_001d:
	{
		return G_B4_0;
	}

IL_001e:
	{
		t1051  L_2 = p1;
		goto IL_002b;
	}
	{
		return 1;
	}

IL_002b:
	{
		t1051  L_3 = p1;
		int32_t L_4 = m10470((t1051 *)(&p0), (t1051 )L_3, NULL);
		return L_4;
	}
}
extern "C" void m18214_gshared (t2444 * __this, const MethodInfo* method)
{
	{
		m336((t8 *)__this, NULL);
		return;
	}
}
extern const Il2CppType* t2682_0_0_0_var;
extern TypeInfo* t127_TI_var;
extern TypeInfo* t146_TI_var;
extern "C" void m18215_gshared (t8 * __this , const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t2682_0_0_0_var = il2cpp_codegen_type_from_index(2717);
		t127_TI_var = il2cpp_codegen_type_info_from_index(4);
		t146_TI_var = il2cpp_codegen_type_info_from_index(28);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t127_TI_var);
		t127 * L_0 = m329(NULL, (t128 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), NULL);
		t127 * L_1 = m329(NULL, (t128 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), NULL);
		bool L_2 = (bool)VirtFuncInvoker1< bool, t127 * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (t127 *)L_0, (t127 *)L_1);
		if (!L_2)
		{
			goto IL_0054;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t127_TI_var);
		t127 * L_3 = m329(NULL, (t128 )LoadTypeToken(t2682_0_0_0_var), NULL);
		t146* L_4 = (t146*)((t146*)SZArrayNew(t146_TI_var, 1));
		t127 * L_5 = m329(NULL, (t128 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), NULL);
		ArrayElementTypeCheck (L_4, L_5);
		*((t127 **)(t127 **)SZArrayLdElema(L_4, 0, sizeof(t127 *))) = (t127 *)L_5;
		t127 * L_6 = (t127 *)VirtFuncInvoker1< t127 *, t146* >::Invoke(79 /* System.Type System.Type::MakeGenericType(System.Type[]) */, (t127 *)L_3, (t146*)L_4);
		t8 * L_7 = m9743(NULL, (t127 *)L_6, NULL);
		((t2444_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->f0 = ((t2444 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_005e;
	}

IL_0054:
	{
		t2445 * L_8 = (t2445 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (t2445 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((t2444_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->f0 = L_8;
	}

IL_005e:
	{
		return;
	}
}
extern TypeInfo* t464_TI_var;
extern "C" int32_t m18216_gshared (t2444 * __this, t8 * p0, t8 * p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t464_TI_var = il2cpp_codegen_type_info_from_index(251);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B4_0 = 0;
	{
		t8 * L_0 = p0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t8 * L_1 = p1;
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0013;
	}

IL_0012:
	{
		G_B4_0 = (-1);
	}

IL_0013:
	{
		return G_B4_0;
	}

IL_0014:
	{
		t8 * L_2 = p1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		return 1;
	}

IL_001c:
	{
		t8 * L_3 = p0;
		if (!((t8 *)IsInst(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))
		{
			goto IL_0045;
		}
	}
	{
		t8 * L_4 = p1;
		if (!((t8 *)IsInst(L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))
		{
			goto IL_0045;
		}
	}
	{
		t8 * L_5 = p0;
		t8 * L_6 = p1;
		int32_t L_7 = (int32_t)VirtFuncInvoker2< int32_t, t1051 , t1051  >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.TimeSpan>::Compare(T,T) */, (t2444 *)__this, (t1051 )((*(t1051 *)((t1051 *)UnBox (L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (t1051 )((*(t1051 *)((t1051 *)UnBox (L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_7;
	}

IL_0045:
	{
		t464 * L_8 = (t464 *)il2cpp_codegen_object_new (t464_TI_var);
		m9769(L_8, NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_8);
	}
}
extern "C" t2444 * m18217_gshared (t8 * __this , const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		t2444 * L_0 = ((t2444_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->f0;
		return L_0;
	}
}
extern "C" void m18218_gshared (t2445 * __this, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (t2444 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2444 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
extern TypeInfo* t1803_TI_var;
extern TypeInfo* t464_TI_var;
extern Il2CppCodeGenString* _stringLiteral2783;
extern "C" int32_t m18219_gshared (t2445 * __this, t1051  p0, t1051  p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1803_TI_var = il2cpp_codegen_type_info_from_index(760);
		t464_TI_var = il2cpp_codegen_type_info_from_index(251);
		_stringLiteral2783 = il2cpp_codegen_string_literal_from_index(2783);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B4_0 = 0;
	{
		t1051  L_0 = p0;
		goto IL_001e;
	}
	{
		t1051  L_1 = p1;
		goto IL_001c;
	}
	{
		G_B4_0 = 0;
		goto IL_001d;
	}

IL_001c:
	{
		G_B4_0 = (-1);
	}

IL_001d:
	{
		return G_B4_0;
	}

IL_001e:
	{
		t1051  L_2 = p1;
		goto IL_002b;
	}
	{
		return 1;
	}

IL_002b:
	{
		t1051  L_3 = p0;
		t1051  L_4 = L_3;
		t8 * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_4);
		if (!((t8*)IsInst(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))))
		{
			goto IL_004d;
		}
	}
	{
		t1051  L_6 = p0;
		t1051  L_7 = L_6;
		t8 * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_7);
		t1051  L_9 = p1;
		int32_t L_10 = (int32_t)InterfaceFuncInvoker1< int32_t, t1051  >::Invoke(0 /* System.Int32 System.IComparable`1<System.TimeSpan>::CompareTo(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (t8*)((t8*)Castclass(L_8, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))), (t1051 )L_9);
		return L_10;
	}

IL_004d:
	{
		t1051  L_11 = p0;
		t1051  L_12 = L_11;
		t8 * L_13 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_12);
		if (!((t8 *)IsInst(L_13, t1803_TI_var)))
		{
			goto IL_0074;
		}
	}
	{
		t1051  L_14 = p0;
		t1051  L_15 = L_14;
		t8 * L_16 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_15);
		t1051  L_17 = p1;
		t1051  L_18 = L_17;
		t8 * L_19 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_18);
		int32_t L_20 = (int32_t)InterfaceFuncInvoker1< int32_t, t8 * >::Invoke(0 /* System.Int32 System.IComparable::CompareTo(System.Object) */, t1803_TI_var, (t8 *)((t8 *)Castclass(L_16, t1803_TI_var)), (t8 *)L_19);
		return L_20;
	}

IL_0074:
	{
		t464 * L_21 = (t464 *)il2cpp_codegen_object_new (t464_TI_var);
		m2218(L_21, (t3*)_stringLiteral2783, NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_21);
	}
}
extern "C" void m10622_gshared (t1838 * __this, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (t2446 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2446 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
extern "C" int32_t m18220_gshared (t1838 * __this, t1051  p0, const MethodInfo* method)
{
	{
		t1051  L_0 = p0;
		goto IL_000d;
	}
	{
		return 0;
	}

IL_000d:
	{
		int32_t L_1 = m10480((t1051 *)(&p0), NULL);
		return L_1;
	}
}
extern "C" bool m18221_gshared (t1838 * __this, t1051  p0, t1051  p1, const MethodInfo* method)
{
	{
		t1051  L_0 = p0;
		goto IL_0015;
	}
	{
		t1051  L_1 = p1;
		t1051  L_2 = L_1;
		t8 * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return ((((t8*)(t8 *)L_3) == ((t8*)(t8 *)NULL))? 1 : 0);
	}

IL_0015:
	{
		t1051  L_4 = p1;
		bool L_5 = m10471((t1051 *)(&p0), (t1051 )L_4, NULL);
		return L_5;
	}
}
extern "C" void m18222_gshared (t2446 * __this, const MethodInfo* method)
{
	{
		m336((t8 *)__this, NULL);
		return;
	}
}
extern const Il2CppType* t2681_0_0_0_var;
extern TypeInfo* t127_TI_var;
extern TypeInfo* t146_TI_var;
extern "C" void m18223_gshared (t8 * __this , const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t2681_0_0_0_var = il2cpp_codegen_type_from_index(2716);
		t127_TI_var = il2cpp_codegen_type_info_from_index(4);
		t146_TI_var = il2cpp_codegen_type_info_from_index(28);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t127_TI_var);
		t127 * L_0 = m329(NULL, (t128 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), NULL);
		t127 * L_1 = m329(NULL, (t128 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), NULL);
		bool L_2 = (bool)VirtFuncInvoker1< bool, t127 * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (t127 *)L_0, (t127 *)L_1);
		if (!L_2)
		{
			goto IL_0054;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t127_TI_var);
		t127 * L_3 = m329(NULL, (t128 )LoadTypeToken(t2681_0_0_0_var), NULL);
		t146* L_4 = (t146*)((t146*)SZArrayNew(t146_TI_var, 1));
		t127 * L_5 = m329(NULL, (t128 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), NULL);
		ArrayElementTypeCheck (L_4, L_5);
		*((t127 **)(t127 **)SZArrayLdElema(L_4, 0, sizeof(t127 *))) = (t127 *)L_5;
		t127 * L_6 = (t127 *)VirtFuncInvoker1< t127 *, t146* >::Invoke(79 /* System.Type System.Type::MakeGenericType(System.Type[]) */, (t127 *)L_3, (t146*)L_4);
		t8 * L_7 = m9743(NULL, (t127 *)L_6, NULL);
		((t2446_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->f0 = ((t2446 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_005e;
	}

IL_0054:
	{
		t2447 * L_8 = (t2447 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (t2447 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((t2446_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->f0 = L_8;
	}

IL_005e:
	{
		return;
	}
}
extern "C" int32_t m18224_gshared (t2446 * __this, t8 * p0, const MethodInfo* method)
{
	{
		t8 * L_0 = p0;
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, t1051  >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::GetHashCode(T) */, (t2446 *)__this, (t1051 )((*(t1051 *)((t1051 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
extern "C" bool m18225_gshared (t2446 * __this, t8 * p0, t8 * p1, const MethodInfo* method)
{
	{
		t8 * L_0 = p0;
		t8 * L_1 = p1;
		bool L_2 = (bool)VirtFuncInvoker2< bool, t1051 , t1051  >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::Equals(T,T) */, (t2446 *)__this, (t1051 )((*(t1051 *)((t1051 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (t1051 )((*(t1051 *)((t1051 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
extern "C" t2446 * m18226_gshared (t8 * __this , const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		t2446 * L_0 = ((t2446_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->f0;
		return L_0;
	}
}
extern "C" void m18227_gshared (t2447 * __this, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (t2446 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((t2446 *)__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
extern "C" int32_t m18228_gshared (t2447 * __this, t1051  p0, const MethodInfo* method)
{
	{
		t1051  L_0 = p0;
		goto IL_000d;
	}
	{
		return 0;
	}

IL_000d:
	{
		int32_t L_1 = m10480((t1051 *)(&p0), NULL);
		return L_1;
	}
}
extern "C" bool m18229_gshared (t2447 * __this, t1051  p0, t1051  p1, const MethodInfo* method)
{
	{
		t1051  L_0 = p0;
		goto IL_0015;
	}
	{
		t1051  L_1 = p1;
		t1051  L_2 = L_1;
		t8 * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return ((((t8*)(t8 *)L_3) == ((t8*)(t8 *)NULL))? 1 : 0);
	}

IL_0015:
	{
		t1051  L_4 = p1;
		t1051  L_5 = L_4;
		t8 * L_6 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_5);
		bool L_7 = m10473((t1051 *)(&p0), (t8 *)L_6, NULL);
		return L_7;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
