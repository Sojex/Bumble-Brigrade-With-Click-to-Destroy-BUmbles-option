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

struct t2437;

#include "codegen/il2cpp-codegen.h"
#include "t732.h"

extern "C" void m18180_gshared (t2437 * __this, const MethodInfo* method);
#define m18180(__this, method) (( void (*) (t2437 *, const MethodInfo*))m18180_gshared)(__this, method)
extern "C" int32_t m18181_gshared (t2437 * __this, t732  p0, t732  p1, const MethodInfo* method);
#define m18181(__this, p0, p1, method) (( int32_t (*) (t2437 *, t732 , t732 , const MethodInfo*))m18181_gshared)(__this, p0, p1, method)
