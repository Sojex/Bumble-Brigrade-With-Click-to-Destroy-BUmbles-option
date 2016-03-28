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

extern "C" void t900_marshal(const t900& unmarshaled, t900_marshaled& marshaled);
extern "C" void t900_marshal_back(const t900_marshaled& marshaled, t900& unmarshaled);
extern "C" void t900_marshal_cleanup(t900_marshaled& marshaled);
