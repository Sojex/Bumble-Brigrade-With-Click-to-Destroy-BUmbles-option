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

extern "C" void t921_marshal(const t921& unmarshaled, t921_marshaled& marshaled);
extern "C" void t921_marshal_back(const t921_marshaled& marshaled, t921& unmarshaled);
extern "C" void t921_marshal_cleanup(t921_marshaled& marshaled);
