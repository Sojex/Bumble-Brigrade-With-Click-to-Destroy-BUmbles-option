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

struct t1684;
struct t8;
struct t298;
struct t299;
struct t1759;
struct t1695;
struct t599;
struct t1689;
struct t1698;
struct t1691;
struct t816;
struct t1690;
struct t1147;
struct t1741;
struct t1692;
struct t1751;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "t121.h"
#include "t1684.h"
#include "t1684MD.h"
#include "t56.h"
#include "t122.h"
#include "t8.h"
#include "t299.h"
#include "t1759.h"
#include "t1759MD.h"
#include "t1695.h"
#include "t1695MD.h"
#include "mscorlib_ArrayTypes.h"
#include "t3.h"
#include "t1689.h"
#include "t1689MD.h"
#include "t1698.h"
#include "t1691.h"
#include "t1691MD.h"
#include "t816.h"
#include "t1690.h"
#include "t1690MD.h"
#include "t1147.h"
#include "t1741.h"
#include "t1692.h"
#include "t1692MD.h"
#include "t1751.h"
#include "t1760.h"
#include "t1760MD.h"
#include "t1761.h"
#include "t1761MD.h"
#include "t1762.h"
#include "t1762MD.h"
#include "t1763.h"
#include "t1763MD.h"
#include "t1764.h"
#include "t1764MD.h"
#include "t1765.h"
#include "t1765MD.h"
#include "t1766.h"
#include "t1766MD.h"
#include "t1767.h"
#include "t1767MD.h"
#include "t1768.h"
#include "t1768MD.h"
#include "t1769.h"
#include "t1769MD.h"
#include "t1770.h"
#include "t1770MD.h"
#include "t1771.h"
#include "t1771MD.h"
#include "t1772.h"
#include "t1772MD.h"
#include "t1773.h"
#include "t1773MD.h"
#include "t1774.h"
#include "t1774MD.h"
#include "t1775.h"
#include "t1775MD.h"
#include "t1776.h"
#include "t1776MD.h"
#include "t1777.h"
#include "t1777MD.h"
#include "t1778.h"
#include "t1778MD.h"
#include "t1779.h"
#include "t1779MD.h"
#include "t1780.h"
#include "t1780MD.h"
#include "t1781.h"
#include "t1781MD.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" void m10578 (t1684 * __this, t8 * p0, t56 p1, const MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern "C" void m10579 (t1684 * __this, t8 * p0, const MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m10579((t1684 *)__this->f9,p0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t8 *, t8 * __this, t8 * p0, const MethodInfo* method);
		((FunctionPointerType)__this->f0)(NULL,__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t8 * __this, t8 * p0, const MethodInfo* method);
		((FunctionPointerType)__this->f0)(__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef void (*FunctionPointerType) (t8 * __this, const MethodInfo* method);
		((FunctionPointerType)__this->f0)(p0,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" void pinvoke_delegate_wrapper_t1684(Il2CppObject* delegate, t8 * p0)
{
	// Marshaling of parameter 'p0' to native representation
	t8 * _p0_marshaled = { 0 };
	il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
extern "C" t8 * m10580 (t1684 * __this, t8 * p0, t299 * p1, t8 * p2, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = p0;
	return (t8 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern "C" void m10581 (t1684 * __this, t8 * p0, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
extern "C" void m10582 (t1759 * __this, t8 * p0, t56 p1, const MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern "C" void m10583 (t1759 * __this, t8 * p0, const MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m10583((t1759 *)__this->f9,p0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t8 *, t8 * __this, t8 * p0, const MethodInfo* method);
		((FunctionPointerType)__this->f0)(NULL,__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t8 * __this, t8 * p0, const MethodInfo* method);
		((FunctionPointerType)__this->f0)(__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef void (*FunctionPointerType) (t8 * __this, const MethodInfo* method);
		((FunctionPointerType)__this->f0)(p0,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" void pinvoke_delegate_wrapper_t1759(Il2CppObject* delegate, t8 * p0)
{
	// Marshaling of parameter 'p0' to native representation
	t8 * _p0_marshaled = { 0 };
	il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
extern "C" t8 * m10584 (t1759 * __this, t8 * p0, t299 * p1, t8 * p2, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = p0;
	return (t8 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern "C" void m10585 (t1759 * __this, t8 * p0, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
extern "C" void m10586 (t1695 * __this, t8 * p0, t56 p1, const MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern "C" void m10587 (t1695 * __this, t599* p0, const MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m10587((t1695 *)__this->f9,p0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t8 *, t8 * __this, t599* p0, const MethodInfo* method);
		((FunctionPointerType)__this->f0)(NULL,__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t8 * __this, t599* p0, const MethodInfo* method);
		((FunctionPointerType)__this->f0)(__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef void (*FunctionPointerType) (t8 * __this, const MethodInfo* method);
		((FunctionPointerType)__this->f0)(p0,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" void pinvoke_delegate_wrapper_t1695(Il2CppObject* delegate, t599* p0)
{
	typedef void (STDCALL *native_function_ptr_type)(char**);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter 'p0' to native representation
	char** _p0_marshaled = { 0 };
	_p0_marshaled = il2cpp_codegen_marshal_string_array(p0);

	// Native function invocation
	_il2cpp_pinvoke_func(_p0_marshaled);

	// Marshaling cleanup of parameter 'p0' native representation
	if (p0 != NULL) il2cpp_codegen_marshal_free_string_array((void**)_p0_marshaled, ((Il2CppCodeGenArray*)p0)->max_length);
	_p0_marshaled = NULL;

}
extern "C" t8 * m10588 (t1695 * __this, t599* p0, t299 * p1, t8 * p2, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = p0;
	return (t8 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern "C" void m10589 (t1695 * __this, t8 * p0, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
extern "C" void m10590 (t1689 * __this, t8 * p0, t56 p1, const MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern "C" void m10591 (t1689 * __this, t8 * p0, t1698 * p1, const MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m10591((t1689 *)__this->f9,p0, p1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t8 *, t8 * __this, t8 * p0, t1698 * p1, const MethodInfo* method);
		((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t8 * __this, t8 * p0, t1698 * p1, const MethodInfo* method);
		((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef void (*FunctionPointerType) (t8 * __this, t1698 * p1, const MethodInfo* method);
		((FunctionPointerType)__this->f0)(p0, p1,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" void pinvoke_delegate_wrapper_t1689(Il2CppObject* delegate, t8 * p0, t1698 * p1)
{
	// Marshaling of parameter 'p0' to native representation
	t8 * _p0_marshaled = { 0 };
	il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
extern "C" t8 * m10592 (t1689 * __this, t8 * p0, t1698 * p1, t299 * p2, t8 * p3, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	return (t8 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern "C" void m10593 (t1689 * __this, t8 * p0, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
extern "C" void m10594 (t1691 * __this, t8 * p0, t56 p1, const MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern "C" void m10595 (t1691 * __this, t8 * p0, t816 * p1, const MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m10595((t1691 *)__this->f9,p0, p1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t8 *, t8 * __this, t8 * p0, t816 * p1, const MethodInfo* method);
		((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t8 * __this, t8 * p0, t816 * p1, const MethodInfo* method);
		((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef void (*FunctionPointerType) (t8 * __this, t816 * p1, const MethodInfo* method);
		((FunctionPointerType)__this->f0)(p0, p1,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" void pinvoke_delegate_wrapper_t1691(Il2CppObject* delegate, t8 * p0, t816 * p1)
{
	// Marshaling of parameter 'p0' to native representation
	t8 * _p0_marshaled = { 0 };
	il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
extern "C" t8 * m10596 (t1691 * __this, t8 * p0, t816 * p1, t299 * p2, t8 * p3, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	return (t8 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern "C" void m10597 (t1691 * __this, t8 * p0, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
extern "C" void m10598 (t1690 * __this, t8 * p0, t56 p1, const MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern "C" t1147 * m10599 (t1690 * __this, t8 * p0, t1741 * p1, const MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m10599((t1690 *)__this->f9,p0, p1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef t1147 * (*FunctionPointerType) (t8 *, t8 * __this, t8 * p0, t1741 * p1, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef t1147 * (*FunctionPointerType) (t8 * __this, t8 * p0, t1741 * p1, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef t1147 * (*FunctionPointerType) (t8 * __this, t1741 * p1, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(p0, p1,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" t1147 * pinvoke_delegate_wrapper_t1690(Il2CppObject* delegate, t8 * p0, t1741 * p1)
{
	// Marshaling of parameter 'p0' to native representation
	t8 * _p0_marshaled = { 0 };
	il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
extern "C" t8 * m10600 (t1690 * __this, t8 * p0, t1741 * p1, t299 * p2, t8 * p3, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	return (t8 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern "C" t1147 * m10601 (t1690 * __this, t8 * p0, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return (t1147 *)__result;
}
extern "C" void m10602 (t1692 * __this, t8 * p0, t56 p1, const MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern "C" void m10603 (t1692 * __this, t8 * p0, t1751 * p1, const MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m10603((t1692 *)__this->f9,p0, p1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t8 *, t8 * __this, t8 * p0, t1751 * p1, const MethodInfo* method);
		((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t8 * __this, t8 * p0, t1751 * p1, const MethodInfo* method);
		((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef void (*FunctionPointerType) (t8 * __this, t1751 * p1, const MethodInfo* method);
		((FunctionPointerType)__this->f0)(p0, p1,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" void pinvoke_delegate_wrapper_t1692(Il2CppObject* delegate, t8 * p0, t1751 * p1)
{
	// Marshaling of parameter 'p0' to native representation
	t8 * _p0_marshaled = { 0 };
	il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
extern "C" t8 * m10604 (t1692 * __this, t8 * p0, t1751 * p1, t299 * p2, t8 * p3, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	return (t8 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern "C" void m10605 (t1692 * __this, t8 * p0, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$56
extern "C" void t1760_marshal(const t1760& unmarshaled, t1760_marshaled& marshaled)
{
}
extern "C" void t1760_marshal_back(const t1760_marshaled& marshaled, t1760& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$56
extern "C" void t1760_marshal_cleanup(t1760_marshaled& marshaled)
{
}
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$24
extern "C" void t1761_marshal(const t1761& unmarshaled, t1761_marshaled& marshaled)
{
}
extern "C" void t1761_marshal_back(const t1761_marshaled& marshaled, t1761& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$24
extern "C" void t1761_marshal_cleanup(t1761_marshaled& marshaled)
{
}
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$16
extern "C" void t1762_marshal(const t1762& unmarshaled, t1762_marshaled& marshaled)
{
}
extern "C" void t1762_marshal_back(const t1762_marshaled& marshaled, t1762& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$16
extern "C" void t1762_marshal_cleanup(t1762_marshaled& marshaled)
{
}
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$120
extern "C" void t1763_marshal(const t1763& unmarshaled, t1763_marshaled& marshaled)
{
}
extern "C" void t1763_marshal_back(const t1763_marshaled& marshaled, t1763& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$120
extern "C" void t1763_marshal_cleanup(t1763_marshaled& marshaled)
{
}
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$3132
extern "C" void t1764_marshal(const t1764& unmarshaled, t1764_marshaled& marshaled)
{
}
extern "C" void t1764_marshal_back(const t1764_marshaled& marshaled, t1764& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$3132
extern "C" void t1764_marshal_cleanup(t1764_marshaled& marshaled)
{
}
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$20
extern "C" void t1765_marshal(const t1765& unmarshaled, t1765_marshaled& marshaled)
{
}
extern "C" void t1765_marshal_back(const t1765_marshaled& marshaled, t1765& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$20
extern "C" void t1765_marshal_cleanup(t1765_marshaled& marshaled)
{
}
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$32
extern "C" void t1766_marshal(const t1766& unmarshaled, t1766_marshaled& marshaled)
{
}
extern "C" void t1766_marshal_back(const t1766_marshaled& marshaled, t1766& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$32
extern "C" void t1766_marshal_cleanup(t1766_marshaled& marshaled)
{
}
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$48
extern "C" void t1767_marshal(const t1767& unmarshaled, t1767_marshaled& marshaled)
{
}
extern "C" void t1767_marshal_back(const t1767_marshaled& marshaled, t1767& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$48
extern "C" void t1767_marshal_cleanup(t1767_marshaled& marshaled)
{
}
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$64
extern "C" void t1768_marshal(const t1768& unmarshaled, t1768_marshaled& marshaled)
{
}
extern "C" void t1768_marshal_back(const t1768_marshaled& marshaled, t1768& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$64
extern "C" void t1768_marshal_cleanup(t1768_marshaled& marshaled)
{
}
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$12
extern "C" void t1769_marshal(const t1769& unmarshaled, t1769_marshaled& marshaled)
{
}
extern "C" void t1769_marshal_back(const t1769_marshaled& marshaled, t1769& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$12
extern "C" void t1769_marshal_cleanup(t1769_marshaled& marshaled)
{
}
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$136
extern "C" void t1770_marshal(const t1770& unmarshaled, t1770_marshaled& marshaled)
{
}
extern "C" void t1770_marshal_back(const t1770_marshaled& marshaled, t1770& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$136
extern "C" void t1770_marshal_cleanup(t1770_marshaled& marshaled)
{
}
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$8
extern "C" void t1771_marshal(const t1771& unmarshaled, t1771_marshaled& marshaled)
{
}
extern "C" void t1771_marshal_back(const t1771_marshaled& marshaled, t1771& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$8
extern "C" void t1771_marshal_cleanup(t1771_marshaled& marshaled)
{
}
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$72
extern "C" void t1772_marshal(const t1772& unmarshaled, t1772_marshaled& marshaled)
{
}
extern "C" void t1772_marshal_back(const t1772_marshaled& marshaled, t1772& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$72
extern "C" void t1772_marshal_cleanup(t1772_marshaled& marshaled)
{
}
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$124
extern "C" void t1773_marshal(const t1773& unmarshaled, t1773_marshaled& marshaled)
{
}
extern "C" void t1773_marshal_back(const t1773_marshaled& marshaled, t1773& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$124
extern "C" void t1773_marshal_cleanup(t1773_marshaled& marshaled)
{
}
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$96
extern "C" void t1774_marshal(const t1774& unmarshaled, t1774_marshaled& marshaled)
{
}
extern "C" void t1774_marshal_back(const t1774_marshaled& marshaled, t1774& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$96
extern "C" void t1774_marshal_cleanup(t1774_marshaled& marshaled)
{
}
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$2048
extern "C" void t1775_marshal(const t1775& unmarshaled, t1775_marshaled& marshaled)
{
}
extern "C" void t1775_marshal_back(const t1775_marshaled& marshaled, t1775& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$2048
extern "C" void t1775_marshal_cleanup(t1775_marshaled& marshaled)
{
}
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$256
extern "C" void t1776_marshal(const t1776& unmarshaled, t1776_marshaled& marshaled)
{
}
extern "C" void t1776_marshal_back(const t1776_marshaled& marshaled, t1776& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$256
extern "C" void t1776_marshal_cleanup(t1776_marshaled& marshaled)
{
}
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$1024
extern "C" void t1777_marshal(const t1777& unmarshaled, t1777_marshaled& marshaled)
{
}
extern "C" void t1777_marshal_back(const t1777_marshaled& marshaled, t1777& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$1024
extern "C" void t1777_marshal_cleanup(t1777_marshaled& marshaled)
{
}
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$640
extern "C" void t1778_marshal(const t1778& unmarshaled, t1778_marshaled& marshaled)
{
}
extern "C" void t1778_marshal_back(const t1778_marshaled& marshaled, t1778& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$640
extern "C" void t1778_marshal_cleanup(t1778_marshaled& marshaled)
{
}
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$128
extern "C" void t1779_marshal(const t1779& unmarshaled, t1779_marshaled& marshaled)
{
}
extern "C" void t1779_marshal_back(const t1779_marshaled& marshaled, t1779& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$128
extern "C" void t1779_marshal_cleanup(t1779_marshaled& marshaled)
{
}
// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$52
extern "C" void t1780_marshal(const t1780& unmarshaled, t1780_marshaled& marshaled)
{
}
extern "C" void t1780_marshal_back(const t1780_marshaled& marshaled, t1780& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$52
extern "C" void t1780_marshal_cleanup(t1780_marshaled& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
