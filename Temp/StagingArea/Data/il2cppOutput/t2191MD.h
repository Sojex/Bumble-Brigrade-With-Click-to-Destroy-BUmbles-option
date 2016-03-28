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

struct t8;
struct t3;

#include "codegen/il2cpp-codegen.h"
#include "t2191.h"

extern "C" void m15645_gshared (t2191 * __this, t8 * p0, int64_t p1, const MethodInfo* method);
#define m15645(__this, p0, p1, method) (( void (*) (t2191 *, t8 *, int64_t, const MethodInfo*))m15645_gshared)(__this, p0, p1, method)
extern "C" t8 * m15646_gshared (t2191 * __this, const MethodInfo* method);
#define m15646(__this, method) (( t8 * (*) (t2191 *, const MethodInfo*))m15646_gshared)(__this, method)
extern "C" void m15647_gshared (t2191 * __this, t8 * p0, const MethodInfo* method);
#define m15647(__this, p0, method) (( void (*) (t2191 *, t8 *, const MethodInfo*))m15647_gshared)(__this, p0, method)
extern "C" int64_t m15648_gshared (t2191 * __this, const MethodInfo* method);
#define m15648(__this, method) (( int64_t (*) (t2191 *, const MethodInfo*))m15648_gshared)(__this, method)
extern "C" void m15649_gshared (t2191 * __this, int64_t p0, const MethodInfo* method);
#define m15649(__this, p0, method) (( void (*) (t2191 *, int64_t, const MethodInfo*))m15649_gshared)(__this, p0, method)
extern "C" t3* m15650_gshared (t2191 * __this, const MethodInfo* method);
#define m15650(__this, method) (( t3* (*) (t2191 *, const MethodInfo*))m15650_gshared)(__this, method)
