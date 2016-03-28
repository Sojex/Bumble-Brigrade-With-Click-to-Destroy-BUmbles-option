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

extern "C" void t918_marshal(const t918& unmarshaled, t918_marshaled& marshaled);
extern "C" void t918_marshal_back(const t918_marshaled& marshaled, t918& unmarshaled);
extern "C" void t918_marshal_cleanup(t918_marshaled& marshaled);
