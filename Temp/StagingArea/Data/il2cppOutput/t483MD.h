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

struct t483;
struct t483_marshaled;

#include "codegen/il2cpp-codegen.h"

extern "C" void m2882 (t483 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t483_marshal(const t483& unmarshaled, t483_marshaled& marshaled);
extern "C" void t483_marshal_back(const t483_marshaled& marshaled, t483& unmarshaled);
extern "C" void t483_marshal_cleanup(t483_marshaled& marshaled);
