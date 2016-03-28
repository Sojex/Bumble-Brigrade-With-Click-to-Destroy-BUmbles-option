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

struct t753;
struct t54;
struct t54_marshaled;
struct t609;
struct t159;

#include "codegen/il2cpp-codegen.h"

extern "C" void m3556_gshared (t753 * __this, t54 * p0, t609 * p1, int32_t p2, const MethodInfo* method);
#define m3556(__this, p0, p1, p2, method) (( void (*) (t753 *, t54 *, t609 *, int32_t, const MethodInfo*))m3556_gshared)(__this, p0, p1, p2, method)
extern "C" void m17353_gshared (t753 * __this, t159* p0, const MethodInfo* method);
#define m17353(__this, p0, method) (( void (*) (t753 *, t159*, const MethodInfo*))m17353_gshared)(__this, p0, method)
