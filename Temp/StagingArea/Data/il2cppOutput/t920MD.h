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

extern "C" void t920_marshal(const t920& unmarshaled, t920_marshaled& marshaled);
extern "C" void t920_marshal_back(const t920_marshaled& marshaled, t920& unmarshaled);
extern "C" void t920_marshal_cleanup(t920_marshaled& marshaled);
