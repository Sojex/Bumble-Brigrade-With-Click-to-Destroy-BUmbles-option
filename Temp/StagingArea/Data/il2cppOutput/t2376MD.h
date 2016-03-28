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

struct t2376;
struct t8;
struct t298;
struct t299;

#include "codegen/il2cpp-codegen.h"
#include "t56.h"
#include "t2368.h"

extern "C" void m17824_gshared (t2376 * __this, t8 * p0, t56 p1, const MethodInfo* method);
#define m17824(__this, p0, p1, method) (( void (*) (t2376 *, t8 *, t56, const MethodInfo*))m17824_gshared)(__this, p0, p1, method)
extern "C" t2368  m17825_gshared (t2376 * __this, int32_t p0, int32_t p1, const MethodInfo* method);
#define m17825(__this, p0, p1, method) (( t2368  (*) (t2376 *, int32_t, int32_t, const MethodInfo*))m17825_gshared)(__this, p0, p1, method)
extern "C" t8 * m17826_gshared (t2376 * __this, int32_t p0, int32_t p1, t299 * p2, t8 * p3, const MethodInfo* method);
#define m17826(__this, p0, p1, p2, p3, method) (( t8 * (*) (t2376 *, int32_t, int32_t, t299 *, t8 *, const MethodInfo*))m17826_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t2368  m17827_gshared (t2376 * __this, t8 * p0, const MethodInfo* method);
#define m17827(__this, p0, method) (( t2368  (*) (t2376 *, t8 *, const MethodInfo*))m17827_gshared)(__this, p0, method)
