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

struct t752;
struct t54;
struct t54_marshaled;
struct t609;
struct t159;

#include "codegen/il2cpp-codegen.h"

extern "C" void m3555_gshared (t752 * __this, t54 * p0, t609 * p1, float p2, const MethodInfo* method);
#define m3555(__this, p0, p1, p2, method) (( void (*) (t752 *, t54 *, t609 *, float, const MethodInfo*))m3555_gshared)(__this, p0, p1, p2, method)
extern "C" void m17352_gshared (t752 * __this, t159* p0, const MethodInfo* method);
#define m17352(__this, p0, method) (( void (*) (t752 *, t159*, const MethodInfo*))m17352_gshared)(__this, p0, method)
