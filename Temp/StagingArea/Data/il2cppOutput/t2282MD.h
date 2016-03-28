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

struct t2282;
struct t8;
struct t298;
struct t299;

#include "codegen/il2cpp-codegen.h"
#include "t56.h"
#include "t2248.h"
#include "t1848.h"

extern "C" void m16865_gshared (t2282 * __this, t8 * p0, t56 p1, const MethodInfo* method);
#define m16865(__this, p0, p1, method) (( void (*) (t2282 *, t8 *, t56, const MethodInfo*))m16865_gshared)(__this, p0, p1, method)
extern "C" t2248  m16866_gshared (t2282 * __this, t8 * p0, t1848  p1, const MethodInfo* method);
#define m16866(__this, p0, p1, method) (( t2248  (*) (t2282 *, t8 *, t1848 , const MethodInfo*))m16866_gshared)(__this, p0, p1, method)
extern "C" t8 * m16867_gshared (t2282 * __this, t8 * p0, t1848  p1, t299 * p2, t8 * p3, const MethodInfo* method);
#define m16867(__this, p0, p1, p2, p3, method) (( t8 * (*) (t2282 *, t8 *, t1848 , t299 *, t8 *, const MethodInfo*))m16867_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t2248  m16868_gshared (t2282 * __this, t8 * p0, const MethodInfo* method);
#define m16868(__this, p0, method) (( t2248  (*) (t2282 *, t8 *, const MethodInfo*))m16868_gshared)(__this, p0, method)
