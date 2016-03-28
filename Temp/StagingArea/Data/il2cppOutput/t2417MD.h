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

struct t2417;
struct t8;
struct t298;
struct t299;

#include "codegen/il2cpp-codegen.h"
#include "t56.h"

extern "C" void m18016_gshared (t2417 * __this, t8 * p0, t56 p1, const MethodInfo* method);
#define m18016(__this, p0, p1, method) (( void (*) (t2417 *, t8 *, t56, const MethodInfo*))m18016_gshared)(__this, p0, p1, method)
extern "C" t8 * m18017_gshared (t2417 * __this, const MethodInfo* method);
#define m18017(__this, method) (( t8 * (*) (t2417 *, const MethodInfo*))m18017_gshared)(__this, method)
extern "C" t8 * m18018_gshared (t2417 * __this, t299 * p0, t8 * p1, const MethodInfo* method);
#define m18018(__this, p0, p1, method) (( t8 * (*) (t2417 *, t299 *, t8 *, const MethodInfo*))m18018_gshared)(__this, p0, p1, method)
extern "C" t8 * m18019_gshared (t2417 * __this, t8 * p0, const MethodInfo* method);
#define m18019(__this, p0, method) (( t8 * (*) (t2417 *, t8 *, const MethodInfo*))m18019_gshared)(__this, p0, method)
