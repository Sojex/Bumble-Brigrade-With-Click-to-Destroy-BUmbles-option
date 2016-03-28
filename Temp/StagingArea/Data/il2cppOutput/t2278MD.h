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

struct t2278;
struct t8;
struct t298;
struct t299;

#include "codegen/il2cpp-codegen.h"
#include "t56.h"
#include "t1848.h"

extern "C" void m16834_gshared (t2278 * __this, t8 * p0, t56 p1, const MethodInfo* method);
#define m16834(__this, p0, p1, method) (( void (*) (t2278 *, t8 *, t56, const MethodInfo*))m16834_gshared)(__this, p0, p1, method)
extern "C" t8 * m16835_gshared (t2278 * __this, t8 * p0, t1848  p1, const MethodInfo* method);
#define m16835(__this, p0, p1, method) (( t8 * (*) (t2278 *, t8 *, t1848 , const MethodInfo*))m16835_gshared)(__this, p0, p1, method)
extern "C" t8 * m16836_gshared (t2278 * __this, t8 * p0, t1848  p1, t299 * p2, t8 * p3, const MethodInfo* method);
#define m16836(__this, p0, p1, p2, p3, method) (( t8 * (*) (t2278 *, t8 *, t1848 , t299 *, t8 *, const MethodInfo*))m16836_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t8 * m16837_gshared (t2278 * __this, t8 * p0, const MethodInfo* method);
#define m16837(__this, p0, method) (( t8 * (*) (t2278 *, t8 *, const MethodInfo*))m16837_gshared)(__this, p0, method)
