// ---------------------------------------------------------------------------
// This software is in the public domain, furnished "as is", without technical
// support, and with no warranty, express or implied, as to its usefulness for
// any purpose.
//
// Authors: John Parts Taylor and JoeJoe Martin, March 12, 2013
// ---------------------------------------------------------------------------

#ifndef LumiGeek_h
#define LumiGeek_h

#include <Arduino.h>
#include <inttypes.h>

#include "LumiGeekDefines.h"

#include "LumiGeek4xRGB.h"
#include "LumiGeek24xMono.h"


// ---------------------------------------------------------------------------
// Abstract Class: LumiGeekShield
// ---------------------------------------------------------------------------

class LumiGeekHelper {
	public:
		void begin();
};

extern LumiGeekHelper LumiGeek;

#endif