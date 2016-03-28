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
#include "t2229.h"
#include "t2228.h"

extern "C" void m16076_gshared (t2229 * __this, t121 * p0, const MethodInfo* method);
#define m16076(__this, p0, method) (( void (*) (t2229 *, t121 *, const MethodInfo*))m16076_gshared)(__this, p0, method)
extern "C" t8 * m16077_gshared (t2229 * __this, const MethodInfo* method);
#define m16077(__this, method) (( t8 * (*) (t2229 *, const MethodInfo*))m16077_gshared)(__this, method)
extern "C" void m16078_gshared (t2229 * __this, const MethodInfo* method);
#define m16078(__this, method) (( void (*) (t2229 *, const MethodInfo*))m16078_gshared)(__this, method)
extern "C" bool m16079_gshared (t2229 * __this, const MethodInfo* method);
#define m16079(__this, method) (( bool (*) (t2229 *, const MethodInfo*))m16079_gshared)(__this, method)
extern "C" t2228  m16080_gshared (t2229 * __this, const MethodInfo* method);
#define m16080(__this, method) (( t2228  (*) (t2229 *, const MethodInfo*))m16080_gshared)(__this, method)
