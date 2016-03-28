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

struct t2185;
struct t8;

#include "codegen/il2cpp-codegen.h"

extern "C" void m15530_gshared (t2185 * __this, const MethodInfo* method);
#define m15530(__this, method) (( void (*) (t2185 *, const MethodInfo*))m15530_gshared)(__this, method)
extern "C" void m15531_gshared (t8 * __this , const MethodInfo* method);
#define m15531(__this , method) (( void (*) (t8 * , const MethodInfo*))m15531_gshared)(__this , method)
extern "C" int32_t m15532_gshared (t2185 * __this, t8 * p0, t8 * p1, const MethodInfo* method);
#define m15532(__this, p0, p1, method) (( int32_t (*) (t2185 *, t8 *, t8 *, const MethodInfo*))m15532_gshared)(__this, p0, p1, method)
extern "C" t2185 * m15533_gshared (t8 * __this , const MethodInfo* method);
#define m15533(__this , method) (( t2185 * (*) (t8 * , const MethodInfo*))m15533_gshared)(__this , method)
