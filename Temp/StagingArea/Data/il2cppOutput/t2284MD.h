#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

struct t2284;
struct t8;

#include "codegen/il2cpp-codegen.h"

extern "C" void m16875_gshared (t2284 * __this, const MethodInfo* method);
#define m16875(__this, method) (( void (*) (t2284 *, const MethodInfo*))m16875_gshared)(__this, method)
extern "C" void m16876_gshared (t8 * __this , const MethodInfo* method);
#define m16876(__this , method) (( void (*) (t8 * , const MethodInfo*))m16876_gshared)(__this , method)
extern "C" int32_t m16877_gshared (t2284 * __this, t8 * p0, const MethodInfo* method);
#define m16877(__this, p0, method) (( int32_t (*) (t2284 *, t8 *, const MethodInfo*))m16877_gshared)(__this, p0, method)
extern "C" bool m16878_gshared (t2284 * __this, t8 * p0, t8 * p1, const MethodInfo* method);
#define m16878(__this, p0, p1, method) (( bool (*) (t2284 *, t8 *, t8 *, const MethodInfo*))m16878_gshared)(__this, p0, p1, method)
extern "C" t2284 * m16879_gshared (t8 * __this , const MethodInfo* method);
#define m16879(__this , method) (( t2284 * (*) (t8 * , const MethodInfo*))m16879_gshared)(__this , method)
