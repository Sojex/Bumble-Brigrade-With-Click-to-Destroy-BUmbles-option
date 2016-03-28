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
#include "t2016.h"

extern "C" void m12972_gshared (t2016 * __this, t8 * p0, int32_t p1, const MethodInfo* method);
#define m12972(__this, p0, p1, method) (( void (*) (t2016 *, t8 *, int32_t, const MethodInfo*))m12972_gshared)(__this, p0, p1, method)
extern "C" t8 * m12973_gshared (t2016 * __this, const MethodInfo* method);
#define m12973(__this, method) (( t8 * (*) (t2016 *, const MethodInfo*))m12973_gshared)(__this, method)
extern "C" void m12974_gshared (t2016 * __this, t8 * p0, const MethodInfo* method);
#define m12974(__this, p0, method) (( void (*) (t2016 *, t8 *, const MethodInfo*))m12974_gshared)(__this, p0, method)
extern "C" int32_t m12975_gshared (t2016 * __this, const MethodInfo* method);
#define m12975(__this, method) (( int32_t (*) (t2016 *, const MethodInfo*))m12975_gshared)(__this, method)
extern "C" void m12976_gshared (t2016 * __this, int32_t p0, const MethodInfo* method);
#define m12976(__this, p0, method) (( void (*) (t2016 *, int32_t, const MethodInfo*))m12976_gshared)(__this, p0, method)
extern "C" t3* m12977_gshared (t2016 * __this, const MethodInfo* method);
#define m12977(__this, method) (( t3* (*) (t2016 *, const MethodInfo*))m12977_gshared)(__this, method)
