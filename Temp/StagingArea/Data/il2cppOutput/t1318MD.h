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

extern "C" void t1318_marshal(const t1318& unmarshaled, t1318_marshaled& marshaled);
extern "C" void t1318_marshal_back(const t1318_marshaled& marshaled, t1318& unmarshaled);
extern "C" void t1318_marshal_cleanup(t1318_marshaled& marshaled);
