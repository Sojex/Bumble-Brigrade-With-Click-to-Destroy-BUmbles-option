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

struct t1837;

#include "codegen/il2cpp-codegen.h"
#include "t1051.h"

extern "C" void m10621_gshared (t1837 * __this, const MethodInfo* method);
#define m10621(__this, method) (( void (*) (t1837 *, const MethodInfo*))m10621_gshared)(__this, method)
extern "C" int32_t m18213_gshared (t1837 * __this, t1051  p0, t1051  p1, const MethodInfo* method);
#define m18213(__this, p0, p1, method) (( int32_t (*) (t1837 *, t1051 , t1051 , const MethodInfo*))m18213_gshared)(__this, p0, p1, method)
