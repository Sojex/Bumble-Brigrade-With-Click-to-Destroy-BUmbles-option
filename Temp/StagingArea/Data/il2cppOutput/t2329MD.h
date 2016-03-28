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

struct t2329;
struct t8;
struct t609;
struct t159;

#include "codegen/il2cpp-codegen.h"

extern "C" void m17329_gshared (t2329 * __this, t8 * p0, t609 * p1, const MethodInfo* method);
#define m17329(__this, p0, p1, method) (( void (*) (t2329 *, t8 *, t609 *, const MethodInfo*))m17329_gshared)(__this, p0, p1, method)
extern "C" void m17330_gshared (t2329 * __this, t159* p0, const MethodInfo* method);
#define m17330(__this, p0, method) (( void (*) (t2329 *, t159*, const MethodInfo*))m17330_gshared)(__this, p0, method)
extern "C" bool m17331_gshared (t2329 * __this, t8 * p0, t609 * p1, const MethodInfo* method);
#define m17331(__this, p0, p1, method) (( bool (*) (t2329 *, t8 *, t609 *, const MethodInfo*))m17331_gshared)(__this, p0, p1, method)
