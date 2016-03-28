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

struct t460;
struct t8;
struct t298;
struct t299;

#include "codegen/il2cpp-codegen.h"
#include "t56.h"

extern "C" void m2154_gshared (t460 * __this, t8 * p0, t56 p1, const MethodInfo* method);
#define m2154(__this, p0, p1, method) (( void (*) (t460 *, t8 *, t56, const MethodInfo*))m2154_gshared)(__this, p0, p1, method)
extern "C" void m14000_gshared (t460 * __this, float p0, const MethodInfo* method);
#define m14000(__this, p0, method) (( void (*) (t460 *, float, const MethodInfo*))m14000_gshared)(__this, p0, method)
extern "C" t8 * m14001_gshared (t460 * __this, float p0, t299 * p1, t8 * p2, const MethodInfo* method);
#define m14001(__this, p0, p1, p2, method) (( t8 * (*) (t460 *, float, t299 *, t8 *, const MethodInfo*))m14001_gshared)(__this, p0, p1, p2, method)
extern "C" void m14002_gshared (t460 * __this, t8 * p0, const MethodInfo* method);
#define m14002(__this, p0, method) (( void (*) (t460 *, t8 *, const MethodInfo*))m14002_gshared)(__this, p0, method)
