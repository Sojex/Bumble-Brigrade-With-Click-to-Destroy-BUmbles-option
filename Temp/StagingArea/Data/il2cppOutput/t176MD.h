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

struct t176;
struct t176_marshaled;

#include "codegen/il2cpp-codegen.h"

extern "C" void m560 (t176 * __this, float p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t176_marshal(const t176& unmarshaled, t176_marshaled& marshaled);
extern "C" void t176_marshal_back(const t176_marshaled& marshaled, t176& unmarshaled);
extern "C" void t176_marshal_cleanup(t176_marshaled& marshaled);
