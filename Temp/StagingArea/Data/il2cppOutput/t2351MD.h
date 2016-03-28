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

struct t2351;
struct t609;
struct t3;
struct t8;
struct t652;

#include "codegen/il2cpp-codegen.h"

extern "C" void m17554_gshared (t2351 * __this, const MethodInfo* method);
#define m17554(__this, method) (( void (*) (t2351 *, const MethodInfo*))m17554_gshared)(__this, method)
extern "C" t609 * m17555_gshared (t2351 * __this, t3* p0, t8 * p1, const MethodInfo* method);
#define m17555(__this, p0, p1, method) (( t609 * (*) (t2351 *, t3*, t8 *, const MethodInfo*))m17555_gshared)(__this, p0, p1, method)
extern "C" t652 * m17556_gshared (t2351 * __this, t8 * p0, t609 * p1, const MethodInfo* method);
#define m17556(__this, p0, p1, method) (( t652 * (*) (t2351 *, t8 *, t609 *, const MethodInfo*))m17556_gshared)(__this, p0, p1, method)
