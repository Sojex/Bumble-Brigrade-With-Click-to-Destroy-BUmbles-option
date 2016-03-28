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

struct t2432;
struct t8;

#include "codegen/il2cpp-codegen.h"

extern "C" void m18159_gshared (t2432 * __this, const MethodInfo* method);
#define m18159(__this, method) (( void (*) (t2432 *, const MethodInfo*))m18159_gshared)(__this, method)
extern "C" void m18160_gshared (t8 * __this , const MethodInfo* method);
#define m18160(__this , method) (( void (*) (t8 * , const MethodInfo*))m18160_gshared)(__this , method)
extern "C" int32_t m18161_gshared (t2432 * __this, t8 * p0, t8 * p1, const MethodInfo* method);
#define m18161(__this, p0, p1, method) (( int32_t (*) (t2432 *, t8 *, t8 *, const MethodInfo*))m18161_gshared)(__this, p0, p1, method)
extern "C" t2432 * m18162_gshared (t8 * __this , const MethodInfo* method);
#define m18162(__this , method) (( t2432 * (*) (t8 * , const MethodInfo*))m18162_gshared)(__this , method)
