//See copyright notice in LICENSE
#pragma once

#include "stdafx.h"

#define GMMODULE

#include "Lua/Interface.h"
#include "ismalltexture.h"
#include "ismallpixelwriter.h"
#include "smallvtf.h"

IMaterialSystem*matsys = 0;

struct Rect_t
{
	int x, y;
	int width, height;
};