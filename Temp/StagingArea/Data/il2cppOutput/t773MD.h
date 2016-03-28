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

extern "C" void t773_marshal(const t773& unmarshaled, t773_marshaled& marshaled);
extern "C" void t773_marshal_back(const t773_marshaled& marshaled, t773& unmarshaled);
extern "C" void t773_marshal_cleanup(t773_marshaled& marshaled);
