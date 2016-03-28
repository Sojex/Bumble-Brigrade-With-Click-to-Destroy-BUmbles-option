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
#include "t2228.h"
#include "t575.h"

extern "C" void m16081_gshared (t2228 * __this, uint64_t p0, t8 * p1, const MethodInfo* method);
#define m16081(__this, p0, p1, method) (( void (*) (t2228 *, uint64_t, t8 *, const MethodInfo*))m16081_gshared)(__this, p0, p1, method)
extern "C" uint64_t m16082_gshared (t2228 * __this, const MethodInfo* method);
#define m16082(__this, method) (( uint64_t (*) (t2228 *, const MethodInfo*))m16082_gshared)(__this, method)
extern "C" void m16083_gshared (t2228 * __this, uint64_t p0, const MethodInfo* method);
#define m16083(__this, p0, method) (( void (*) (t2228 *, uint64_t, const MethodInfo*))m16083_gshared)(__this, p0, method)
extern "C" t8 * m16084_gshared (t2228 * __this, const MethodInfo* method);
#define m16084(__this, method) (( t8 * (*) (t2228 *, const MethodInfo*))m16084_gshared)(__this, method)
extern "C" void m16085_gshared (t2228 * __this, t8 * p0, const MethodInfo* method);
#define m16085(__this, p0, method) (( void (*) (t2228 *, t8 *, const MethodInfo*))m16085_gshared)(__this, p0, method)
extern "C" t3* m16086_gshared (t2228 * __this, const MethodInfo* method);
#define m16086(__this, method) (( t3* (*) (t2228 *, const MethodInfo*))m16086_gshared)(__this, method)
