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

extern "C" void t922_marshal(const t922& unmarshaled, t922_marshaled& marshaled);
extern "C" void t922_marshal_back(const t922_marshaled& marshaled, t922& unmarshaled);
extern "C" void t922_marshal_cleanup(t922_marshaled& marshaled);
