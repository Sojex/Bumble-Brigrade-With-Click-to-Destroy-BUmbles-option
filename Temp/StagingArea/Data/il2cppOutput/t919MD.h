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

extern "C" void t919_marshal(const t919& unmarshaled, t919_marshaled& marshaled);
extern "C" void t919_marshal_back(const t919_marshaled& marshaled, t919& unmarshaled);
extern "C" void t919_marshal_cleanup(t919_marshaled& marshaled);
