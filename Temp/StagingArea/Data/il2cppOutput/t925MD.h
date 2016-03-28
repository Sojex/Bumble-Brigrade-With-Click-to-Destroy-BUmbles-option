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

extern "C" void t925_marshal(const t925& unmarshaled, t925_marshaled& marshaled);
extern "C" void t925_marshal_back(const t925_marshaled& marshaled, t925& unmarshaled);
extern "C" void t925_marshal_cleanup(t925_marshaled& marshaled);
