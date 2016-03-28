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

struct t1882;
struct t8;

#include "codegen/il2cpp-codegen.h"

extern "C" void m11175_gshared (t1882 * __this, const MethodInfo* method);
#define m11175(__this, method) (( void (*) (t1882 *, const MethodInfo*))m11175_gshared)(__this, method)
extern "C" int32_t m11176_gshared (t1882 * __this, t8 * p0, t8 * p1, const MethodInfo* method);
#define m11176(__this, p0, p1, method) (( int32_t (*) (t1882 *, t8 *, t8 *, const MethodInfo*))m11176_gshared)(__this, p0, p1, method)
