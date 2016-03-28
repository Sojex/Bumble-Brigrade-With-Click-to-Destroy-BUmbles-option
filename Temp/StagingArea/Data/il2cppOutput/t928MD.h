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

extern "C" void t928_marshal(const t928& unmarshaled, t928_marshaled& marshaled);
extern "C" void t928_marshal_back(const t928_marshaled& marshaled, t928& unmarshaled);
extern "C" void t928_marshal_cleanup(t928_marshaled& marshaled);
