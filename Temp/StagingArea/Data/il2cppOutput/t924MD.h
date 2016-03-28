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

extern "C" void t924_marshal(const t924& unmarshaled, t924_marshaled& marshaled);
extern "C" void t924_marshal_back(const t924_marshaled& marshaled, t924& unmarshaled);
extern "C" void t924_marshal_cleanup(t924_marshaled& marshaled);
