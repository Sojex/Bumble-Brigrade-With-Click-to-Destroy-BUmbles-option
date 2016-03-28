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

struct t2350;
struct t609;
struct t3;
struct t8;
struct t652;

#include "codegen/il2cpp-codegen.h"

extern "C" void m17551_gshared (t2350 * __this, const MethodInfo* method);
#define m17551(__this, method) (( void (*) (t2350 *, const MethodInfo*))m17551_gshared)(__this, method)
extern "C" t609 * m17552_gshared (t2350 * __this, t3* p0, t8 * p1, const MethodInfo* method);
#define m17552(__this, p0, p1, method) (( t609 * (*) (t2350 *, t3*, t8 *, const MethodInfo*))m17552_gshared)(__this, p0, p1, method)
extern "C" t652 * m17553_gshared (t2350 * __this, t8 * p0, t609 * p1, const MethodInfo* method);
#define m17553(__this, p0, p1, method) (( t652 * (*) (t2350 *, t8 *, t609 *, const MethodInfo*))m17553_gshared)(__this, p0, p1, method)
