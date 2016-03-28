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

struct t2399;
struct t8;

#include "codegen/il2cpp-codegen.h"

extern "C" void m17929_gshared (t2399 * __this, const MethodInfo* method);
#define m17929(__this, method) (( void (*) (t2399 *, const MethodInfo*))m17929_gshared)(__this, method)
extern "C" int32_t m17930_gshared (t2399 * __this, t8 * p0, const MethodInfo* method);
#define m17930(__this, p0, method) (( int32_t (*) (t2399 *, t8 *, const MethodInfo*))m17930_gshared)(__this, p0, method)
extern "C" bool m17931_gshared (t2399 * __this, t8 * p0, t8 * p1, const MethodInfo* method);
#define m17931(__this, p0, p1, method) (( bool (*) (t2399 *, t8 *, t8 *, const MethodInfo*))m17931_gshared)(__this, p0, p1, method)
