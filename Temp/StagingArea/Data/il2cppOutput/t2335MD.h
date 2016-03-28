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

struct t2335;
struct t54;
struct t54_marshaled;
struct t609;
struct t8;
struct t159;

#include "codegen/il2cpp-codegen.h"

extern "C" void m17350_gshared (t2335 * __this, t54 * p0, t609 * p1, t8 * p2, const MethodInfo* method);
#define m17350(__this, p0, p1, p2, method) (( void (*) (t2335 *, t54 *, t609 *, t8 *, const MethodInfo*))m17350_gshared)(__this, p0, p1, p2, method)
extern "C" void m17351_gshared (t2335 * __this, t159* p0, const MethodInfo* method);
#define m17351(__this, p0, method) (( void (*) (t2335 *, t159*, const MethodInfo*))m17351_gshared)(__this, p0, method)
