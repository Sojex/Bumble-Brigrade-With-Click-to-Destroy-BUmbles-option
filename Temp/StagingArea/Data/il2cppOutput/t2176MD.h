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

struct t2176;
struct t8;

#include "codegen/il2cpp-codegen.h"

extern "C" void m15387_gshared (t2176 * __this, const MethodInfo* method);
#define m15387(__this, method) (( void (*) (t2176 *, const MethodInfo*))m15387_gshared)(__this, method)
extern "C" void m15388_gshared (t8 * __this , const MethodInfo* method);
#define m15388(__this , method) (( void (*) (t8 * , const MethodInfo*))m15388_gshared)(__this , method)
extern "C" int32_t m15389_gshared (t2176 * __this, t8 * p0, t8 * p1, const MethodInfo* method);
#define m15389(__this, p0, p1, method) (( int32_t (*) (t2176 *, t8 *, t8 *, const MethodInfo*))m15389_gshared)(__this, p0, p1, method)
extern "C" t2176 * m15390_gshared (t8 * __this , const MethodInfo* method);
#define m15390(__this , method) (( t2176 * (*) (t8 * , const MethodInfo*))m15390_gshared)(__this , method)
