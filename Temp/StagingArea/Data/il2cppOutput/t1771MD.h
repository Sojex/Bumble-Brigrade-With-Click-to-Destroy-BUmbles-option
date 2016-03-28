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

extern "C" void t1771_marshal(const t1771& unmarshaled, t1771_marshaled& marshaled);
extern "C" void t1771_marshal_back(const t1771_marshaled& marshaled, t1771& unmarshaled);
extern "C" void t1771_marshal_cleanup(t1771_marshaled& marshaled);
