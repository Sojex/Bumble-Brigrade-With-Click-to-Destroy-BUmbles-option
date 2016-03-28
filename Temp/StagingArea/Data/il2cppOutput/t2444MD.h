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

struct t2444;
struct t8;

#include "codegen/il2cpp-codegen.h"

extern "C" void m18214_gshared (t2444 * __this, const MethodInfo* method);
#define m18214(__this, method) (( void (*) (t2444 *, const MethodInfo*))m18214_gshared)(__this, method)
extern "C" void m18215_gshared (t8 * __this , const MethodInfo* method);
#define m18215(__this , method) (( void (*) (t8 * , const MethodInfo*))m18215_gshared)(__this , method)
extern "C" int32_t m18216_gshared (t2444 * __this, t8 * p0, t8 * p1, const MethodInfo* method);
#define m18216(__this, p0, p1, method) (( int32_t (*) (t2444 *, t8 *, t8 *, const MethodInfo*))m18216_gshared)(__this, p0, p1, method)
extern "C" t2444 * m18217_gshared (t8 * __this , const MethodInfo* method);
#define m18217(__this , method) (( t2444 * (*) (t8 * , const MethodInfo*))m18217_gshared)(__this , method)
