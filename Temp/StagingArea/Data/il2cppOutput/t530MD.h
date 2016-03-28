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

extern "C" void t530_marshal(const t530& unmarshaled, t530_marshaled& marshaled);
extern "C" void t530_marshal_back(const t530_marshaled& marshaled, t530& unmarshaled);
extern "C" void t530_marshal_cleanup(t530_marshaled& marshaled);
