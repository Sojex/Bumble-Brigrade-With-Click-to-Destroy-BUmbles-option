﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

struct t2000;

#include "codegen/il2cpp-codegen.h"

extern "C" void m12716_gshared (t2000 * __this, const MethodInfo* method);
#define m12716(__this, method) (( void (*) (t2000 *, const MethodInfo*))m12716_gshared)(__this, method)
extern "C" int32_t m12717_gshared (t2000 * __this, int32_t p0, const MethodInfo* method);
#define m12717(__this, p0, method) (( int32_t (*) (t2000 *, int32_t, const MethodInfo*))m12717_gshared)(__this, p0, method)
extern "C" bool m12718_gshared (t2000 * __this, int32_t p0, int32_t p1, const MethodInfo* method);
#define m12718(__this, p0, p1, method) (( bool (*) (t2000 *, int32_t, int32_t, const MethodInfo*))m12718_gshared)(__this, p0, p1, method)
