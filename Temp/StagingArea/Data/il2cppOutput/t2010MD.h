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
#include "t2010.h"
#include "t164.h"

extern "C" void m12870_gshared (t2010 * __this, t121 * p0, const MethodInfo* method);
#define m12870(__this, p0, method) (( void (*) (t2010 *, t121 *, const MethodInfo*))m12870_gshared)(__this, p0, method)
extern "C" t8 * m12871_gshared (t2010 * __this, const MethodInfo* method);
#define m12871(__this, method) (( t8 * (*) (t2010 *, const MethodInfo*))m12871_gshared)(__this, method)
extern "C" void m12872_gshared (t2010 * __this, const MethodInfo* method);
#define m12872(__this, method) (( void (*) (t2010 *, const MethodInfo*))m12872_gshared)(__this, method)
extern "C" bool m12873_gshared (t2010 * __this, const MethodInfo* method);
#define m12873(__this, method) (( bool (*) (t2010 *, const MethodInfo*))m12873_gshared)(__this, method)
extern "C" t164  m12874_gshared (t2010 * __this, const MethodInfo* method);
#define m12874(__this, method) (( t164  (*) (t2010 *, const MethodInfo*))m12874_gshared)(__this, method)
