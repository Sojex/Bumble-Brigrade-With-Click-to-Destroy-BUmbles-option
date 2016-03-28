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

extern "C" void t1763_marshal(const t1763& unmarshaled, t1763_marshaled& marshaled);
extern "C" void t1763_marshal_back(const t1763_marshaled& marshaled, t1763& unmarshaled);
extern "C" void t1763_marshal_cleanup(t1763_marshaled& marshaled);
