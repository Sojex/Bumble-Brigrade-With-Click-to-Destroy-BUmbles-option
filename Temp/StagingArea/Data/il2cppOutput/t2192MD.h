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

struct t121;
struct t8;

#include "codegen/il2cpp-codegen.h"
#include "t2192.h"
#include "t2191.h"

extern "C" void m15640_gshared (t2192 * __this, t121 * p0, const MethodInfo* method);
#define m15640(__this, p0, method) (( void (*) (t2192 *, t121 *, const MethodInfo*))m15640_gshared)(__this, p0, method)
extern "C" t8 * m15641_gshared (t2192 * __this, const MethodInfo* method);
#define m15641(__this, method) (( t8 * (*) (t2192 *, const MethodInfo*))m15641_gshared)(__this, method)
extern "C" void m15642_gshared (t2192 * __this, const MethodInfo* method);
#define m15642(__this, method) (( void (*) (t2192 *, const MethodInfo*))m15642_gshared)(__this, method)
extern "C" bool m15643_gshared (t2192 * __this, const MethodInfo* method);
#define m15643(__this, method) (( bool (*) (t2192 *, const MethodInfo*))m15643_gshared)(__this, method)
extern "C" t2191  m15644_gshared (t2192 * __this, const MethodInfo* method);
#define m15644(__this, method) (( t2191  (*) (t2192 *, const MethodInfo*))m15644_gshared)(__this, method)
