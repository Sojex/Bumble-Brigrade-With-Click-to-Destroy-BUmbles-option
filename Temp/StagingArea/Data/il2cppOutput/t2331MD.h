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

struct t2331;
struct t8;
struct t609;
struct t159;

#include "codegen/il2cpp-codegen.h"

extern "C" void m17336_gshared (t2331 * __this, t8 * p0, t609 * p1, const MethodInfo* method);
#define m17336(__this, p0, p1, method) (( void (*) (t2331 *, t8 *, t609 *, const MethodInfo*))m17336_gshared)(__this, p0, p1, method)
extern "C" void m17337_gshared (t2331 * __this, t159* p0, const MethodInfo* method);
#define m17337(__this, p0, method) (( void (*) (t2331 *, t159*, const MethodInfo*))m17337_gshared)(__this, p0, method)
extern "C" bool m17338_gshared (t2331 * __this, t8 * p0, t609 * p1, const MethodInfo* method);
#define m17338(__this, p0, p1, method) (( bool (*) (t2331 *, t8 *, t609 *, const MethodInfo*))m17338_gshared)(__this, p0, p1, method)
