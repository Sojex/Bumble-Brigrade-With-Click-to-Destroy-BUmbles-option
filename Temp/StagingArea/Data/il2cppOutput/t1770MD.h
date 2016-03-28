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

extern "C" void t1770_marshal(const t1770& unmarshaled, t1770_marshaled& marshaled);
extern "C" void t1770_marshal_back(const t1770_marshaled& marshaled, t1770& unmarshaled);
extern "C" void t1770_marshal_cleanup(t1770_marshaled& marshaled);
