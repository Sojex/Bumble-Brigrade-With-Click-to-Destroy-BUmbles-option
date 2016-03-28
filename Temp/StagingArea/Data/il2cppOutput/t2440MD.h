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

struct t2440;
struct t8;

#include "codegen/il2cpp-codegen.h"

extern "C" void m18197_gshared (t2440 * __this, const MethodInfo* method);
#define m18197(__this, method) (( void (*) (t2440 *, const MethodInfo*))m18197_gshared)(__this, method)
extern "C" void m18198_gshared (t8 * __this , const MethodInfo* method);
#define m18198(__this , method) (( void (*) (t8 * , const MethodInfo*))m18198_gshared)(__this , method)
extern "C" int32_t m18199_gshared (t2440 * __this, t8 * p0, t8 * p1, const MethodInfo* method);
#define m18199(__this, p0, p1, method) (( int32_t (*) (t2440 *, t8 *, t8 *, const MethodInfo*))m18199_gshared)(__this, p0, p1, method)
extern "C" t2440 * m18200_gshared (t8 * __this , const MethodInfo* method);
#define m18200(__this , method) (( t2440 * (*) (t8 * , const MethodInfo*))m18200_gshared)(__this , method)
