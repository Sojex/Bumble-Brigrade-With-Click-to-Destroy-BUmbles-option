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

struct t557;
struct t557_marshaled;
struct t8;

#include "codegen/il2cpp-codegen.h"

extern "C" bool m3351 (t557 * __this, t8 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t m3352 (t557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m3353 (t8 * __this , t557 * p0, t557 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t557_marshal(const t557& unmarshaled, t557_marshaled& marshaled);
extern "C" void t557_marshal_back(const t557_marshaled& marshaled, t557& unmarshaled);
extern "C" void t557_marshal_cleanup(t557_marshaled& marshaled);
