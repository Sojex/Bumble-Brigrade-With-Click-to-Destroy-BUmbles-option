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

extern "C" void t1778_marshal(const t1778& unmarshaled, t1778_marshaled& marshaled);
extern "C" void t1778_marshal_back(const t1778_marshaled& marshaled, t1778& unmarshaled);
extern "C" void t1778_marshal_cleanup(t1778_marshaled& marshaled);
