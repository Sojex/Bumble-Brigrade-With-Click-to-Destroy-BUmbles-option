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

extern "C" void t923_marshal(const t923& unmarshaled, t923_marshaled& marshaled);
extern "C" void t923_marshal_back(const t923_marshaled& marshaled, t923& unmarshaled);
extern "C" void t923_marshal_cleanup(t923_marshaled& marshaled);
