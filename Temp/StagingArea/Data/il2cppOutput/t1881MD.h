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

struct t1881;
struct t8;

#include "codegen/il2cpp-codegen.h"

extern "C" void m11171_gshared (t1881 * __this, const MethodInfo* method);
#define m11171(__this, method) (( void (*) (t1881 *, const MethodInfo*))m11171_gshared)(__this, method)
extern "C" void m11172_gshared (t8 * __this , const MethodInfo* method);
#define m11172(__this , method) (( void (*) (t8 * , const MethodInfo*))m11172_gshared)(__this , method)
extern "C" int32_t m11173_gshared (t1881 * __this, t8 * p0, t8 * p1, const MethodInfo* method);
#define m11173(__this, p0, p1, method) (( int32_t (*) (t1881 *, t8 *, t8 *, const MethodInfo*))m11173_gshared)(__this, p0, p1, method)
extern "C" t1881 * m11174_gshared (t8 * __this , const MethodInfo* method);
#define m11174(__this , method) (( t1881 * (*) (t8 * , const MethodInfo*))m11174_gshared)(__this , method)
