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

struct t2378;
struct t8;

#include "codegen/il2cpp-codegen.h"

extern "C" void m17834_gshared (t2378 * __this, const MethodInfo* method);
#define m17834(__this, method) (( void (*) (t2378 *, const MethodInfo*))m17834_gshared)(__this, method)
extern "C" void m17835_gshared (t8 * __this , const MethodInfo* method);
#define m17835(__this , method) (( void (*) (t8 * , const MethodInfo*))m17835_gshared)(__this , method)
extern "C" int32_t m17836_gshared (t2378 * __this, t8 * p0, t8 * p1, const MethodInfo* method);
#define m17836(__this, p0, p1, method) (( int32_t (*) (t2378 *, t8 *, t8 *, const MethodInfo*))m17836_gshared)(__this, p0, p1, method)
extern "C" t2378 * m17837_gshared (t8 * __this , const MethodInfo* method);
#define m17837(__this , method) (( t2378 * (*) (t8 * , const MethodInfo*))m17837_gshared)(__this , method)
