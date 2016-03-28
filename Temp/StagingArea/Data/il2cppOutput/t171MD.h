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

struct t171;
struct t171_marshaled;

#include "codegen/il2cpp-codegen.h"

extern "C" void m2294 (t171 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m2295 (t171 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m2296 (t171 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t171_marshal(const t171& unmarshaled, t171_marshaled& marshaled);
extern "C" void t171_marshal_back(const t171_marshaled& marshaled, t171& unmarshaled);
extern "C" void t171_marshal_cleanup(t171_marshaled& marshaled);
