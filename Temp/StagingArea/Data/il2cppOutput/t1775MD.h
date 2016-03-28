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

extern "C" void t1775_marshal(const t1775& unmarshaled, t1775_marshaled& marshaled);
extern "C" void t1775_marshal_back(const t1775_marshaled& marshaled, t1775& unmarshaled);
extern "C" void t1775_marshal_cleanup(t1775_marshaled& marshaled);
