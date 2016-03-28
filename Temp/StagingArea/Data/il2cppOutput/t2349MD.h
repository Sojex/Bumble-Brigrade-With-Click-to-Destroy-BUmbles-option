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

struct t2349;
struct t609;
struct t3;
struct t8;
struct t652;

#include "codegen/il2cpp-codegen.h"

extern "C" void m17548_gshared (t2349 * __this, const MethodInfo* method);
#define m17548(__this, method) (( void (*) (t2349 *, const MethodInfo*))m17548_gshared)(__this, method)
extern "C" t609 * m17549_gshared (t2349 * __this, t3* p0, t8 * p1, const MethodInfo* method);
#define m17549(__this, p0, p1, method) (( t609 * (*) (t2349 *, t3*, t8 *, const MethodInfo*))m17549_gshared)(__this, p0, p1, method)
extern "C" t652 * m17550_gshared (t2349 * __this, t8 * p0, t609 * p1, const MethodInfo* method);
#define m17550(__this, p0, p1, method) (( t652 * (*) (t2349 *, t8 *, t609 *, const MethodInfo*))m17550_gshared)(__this, p0, p1, method)
