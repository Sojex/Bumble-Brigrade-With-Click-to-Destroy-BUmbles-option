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

struct t755;
struct t54;
struct t54_marshaled;
struct t609;
struct t159;

#include "codegen/il2cpp-codegen.h"

extern "C" void m3558_gshared (t755 * __this, t54 * p0, t609 * p1, bool p2, const MethodInfo* method);
#define m3558(__this, p0, p1, p2, method) (( void (*) (t755 *, t54 *, t609 *, bool, const MethodInfo*))m3558_gshared)(__this, p0, p1, p2, method)
extern "C" void m17367_gshared (t755 * __this, t159* p0, const MethodInfo* method);
#define m17367(__this, p0, method) (( void (*) (t755 *, t159*, const MethodInfo*))m17367_gshared)(__this, p0, method)
