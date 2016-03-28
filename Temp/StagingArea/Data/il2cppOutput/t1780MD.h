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

extern "C" void t1780_marshal(const t1780& unmarshaled, t1780_marshaled& marshaled);
extern "C" void t1780_marshal_back(const t1780_marshaled& marshaled, t1780& unmarshaled);
extern "C" void t1780_marshal_cleanup(t1780_marshaled& marshaled);
