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

extern "C" void t917_marshal(const t917& unmarshaled, t917_marshaled& marshaled);
extern "C" void t917_marshal_back(const t917_marshaled& marshaled, t917& unmarshaled);
extern "C" void t917_marshal_cleanup(t917_marshaled& marshaled);
