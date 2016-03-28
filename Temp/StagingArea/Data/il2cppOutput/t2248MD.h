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

struct t8;
struct t3;

#include "codegen/il2cpp-codegen.h"
#include "t2248.h"
#include "t1848.h"

extern "C" void m16351_gshared (t2248 * __this, t8 * p0, t1848  p1, const MethodInfo* method);
#define m16351(__this, p0, p1, method) (( void (*) (t2248 *, t8 *, t1848 , const MethodInfo*))m16351_gshared)(__this, p0, p1, method)
extern "C" t8 * m16352_gshared (t2248 * __this, const MethodInfo* method);
#define m16352(__this, method) (( t8 * (*) (t2248 *, const MethodInfo*))m16352_gshared)(__this, method)
extern "C" void m16353_gshared (t2248 * __this, t8 * p0, const MethodInfo* method);
#define m16353(__this, p0, method) (( void (*) (t2248 *, t8 *, const MethodInfo*))m16353_gshared)(__this, p0, method)
extern "C" t1848  m16354_gshared (t2248 * __this, const MethodInfo* method);
#define m16354(__this, method) (( t1848  (*) (t2248 *, const MethodInfo*))m16354_gshared)(__this, method)
extern "C" void m16355_gshared (t2248 * __this, t1848  p0, const MethodInfo* method);
#define m16355(__this, p0, method) (( void (*) (t2248 *, t1848 , const MethodInfo*))m16355_gshared)(__this, p0, method)
extern "C" t3* m16356_gshared (t2248 * __this, const MethodInfo* method);
#define m16356(__this, method) (( t3* (*) (t2248 *, const MethodInfo*))m16356_gshared)(__this, method)
