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

extern "C" void t559_marshal(const t559& unmarshaled, t559_marshaled& marshaled);
extern "C" void t559_marshal_back(const t559_marshaled& marshaled, t559& unmarshaled);
extern "C" void t559_marshal_cleanup(t559_marshaled& marshaled);
