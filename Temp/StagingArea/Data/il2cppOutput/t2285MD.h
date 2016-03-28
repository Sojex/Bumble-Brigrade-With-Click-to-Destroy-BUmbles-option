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

struct t2285;

#include "codegen/il2cpp-codegen.h"
#include "t1848.h"

extern "C" void m16880_gshared (t2285 * __this, const MethodInfo* method);
#define m16880(__this, method) (( void (*) (t2285 *, const MethodInfo*))m16880_gshared)(__this, method)
extern "C" int32_t m16881_gshared (t2285 * __this, t1848  p0, const MethodInfo* method);
#define m16881(__this, p0, method) (( int32_t (*) (t2285 *, t1848 , const MethodInfo*))m16881_gshared)(__this, p0, method)
extern "C" bool m16882_gshared (t2285 * __this, t1848  p0, t1848  p1, const MethodInfo* method);
#define m16882(__this, p0, p1, method) (( bool (*) (t2285 *, t1848 , t1848 , const MethodInfo*))m16882_gshared)(__this, p0, p1, method)
