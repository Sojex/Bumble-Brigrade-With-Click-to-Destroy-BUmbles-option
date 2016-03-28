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


#include "codegen/il2cpp-codegen.h"

extern "C" void t1760_marshal(const t1760& unmarshaled, t1760_marshaled& marshaled);
extern "C" void t1760_marshal_back(const t1760_marshaled& marshaled, t1760& unmarshaled);
extern "C" void t1760_marshal_cleanup(t1760_marshaled& marshaled);
