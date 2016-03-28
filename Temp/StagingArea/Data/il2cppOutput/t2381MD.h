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

struct t121;
struct t8;

#include "codegen/il2cpp-codegen.h"
#include "t2381.h"
#include "t1089.h"

extern "C" void m17842_gshared (t2381 * __this, t121 * p0, const MethodInfo* method);
#define m17842(__this, p0, method) (( void (*) (t2381 *, t121 *, const MethodInfo*))m17842_gshared)(__this, p0, method)
extern "C" t8 * m17843_gshared (t2381 * __this, const MethodInfo* method);
#define m17843(__this, method) (( t8 * (*) (t2381 *, const MethodInfo*))m17843_gshared)(__this, method)
extern "C" void m17844_gshared (t2381 * __this, const MethodInfo* method);
#define m17844(__this, method) (( void (*) (t2381 *, const MethodInfo*))m17844_gshared)(__this, method)
extern "C" bool m17845_gshared (t2381 * __this, const MethodInfo* method);
#define m17845(__this, method) (( bool (*) (t2381 *, const MethodInfo*))m17845_gshared)(__this, method)
extern "C" t1089  m17846_gshared (t2381 * __this, const MethodInfo* method);
#define m17846(__this, method) (( t1089  (*) (t2381 *, const MethodInfo*))m17846_gshared)(__this, method)
