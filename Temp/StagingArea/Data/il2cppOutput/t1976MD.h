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

struct t1976;
struct t8;
struct t609;
struct t1944;
struct t159;

#include "codegen/il2cpp-codegen.h"

extern "C" void m12385_gshared (t1976 * __this, t8 * p0, t609 * p1, const MethodInfo* method);
#define m12385(__this, p0, p1, method) (( void (*) (t1976 *, t8 *, t609 *, const MethodInfo*))m12385_gshared)(__this, p0, p1, method)
extern "C" void m12386_gshared (t1976 * __this, t1944 * p0, const MethodInfo* method);
#define m12386(__this, p0, method) (( void (*) (t1976 *, t1944 *, const MethodInfo*))m12386_gshared)(__this, p0, method)
extern "C" void m12387_gshared (t1976 * __this, t159* p0, const MethodInfo* method);
#define m12387(__this, p0, method) (( void (*) (t1976 *, t159*, const MethodInfo*))m12387_gshared)(__this, p0, method)
extern "C" bool m12388_gshared (t1976 * __this, t8 * p0, t609 * p1, const MethodInfo* method);
#define m12388(__this, p0, p1, method) (( bool (*) (t1976 *, t8 *, t609 *, const MethodInfo*))m12388_gshared)(__this, p0, p1, method)
