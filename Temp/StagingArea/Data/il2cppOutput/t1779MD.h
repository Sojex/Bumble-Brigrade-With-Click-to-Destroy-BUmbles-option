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

extern "C" void t1779_marshal(const t1779& unmarshaled, t1779_marshaled& marshaled);
extern "C" void t1779_marshal_back(const t1779_marshaled& marshaled, t1779& unmarshaled);
extern "C" void t1779_marshal_cleanup(t1779_marshaled& marshaled);
