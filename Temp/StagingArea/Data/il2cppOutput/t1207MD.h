﻿#pragma once

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

extern "C" void t1207_marshal(const t1207& unmarshaled, t1207_marshaled& marshaled);
extern "C" void t1207_marshal_back(const t1207_marshaled& marshaled, t1207& unmarshaled);
extern "C" void t1207_marshal_cleanup(t1207_marshaled& marshaled);
