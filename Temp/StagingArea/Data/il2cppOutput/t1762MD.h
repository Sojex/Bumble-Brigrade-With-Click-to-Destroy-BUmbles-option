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

extern "C" void t1762_marshal(const t1762& unmarshaled, t1762_marshaled& marshaled);
extern "C" void t1762_marshal_back(const t1762_marshaled& marshaled, t1762& unmarshaled);
extern "C" void t1762_marshal_cleanup(t1762_marshaled& marshaled);
