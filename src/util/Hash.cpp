/*
 * Hash.cpp
 *
 *  Created on: Dec 27, 2016
 *      Author: brian-dev
 */

#include "Hash.h"
#include <cstring>

namespace VulpUtil
{

//Probably has *tons* of collisions, haven't bothered to check and/or improve on this. We don't care too much about security, only that it can be done fast and with few collisions.
//"compile" strings into this before doing comparisons ==== save a little speed.
unsigned int generateHash(const char* string)
{
	//Terrible but speedy and random enough hash, yeah?
	unsigned int strlength = strlen(string);
	unsigned int val;
	val = strlength * 65537 % (string[0] + string[1]);
	val += ((val *= 255) / string[strlength - 1] * 4)
			* (string[(strlength / 2)] * 4) + (255 * string[(strlength - 1)]);
	if (strlength + 1 % 2)
	{
		if (strlength % 3)
		{
			val = val << 2;
		}
		else
		{
			val = val >> 3;
		}
	}
	val = (val << strlength % 8) + strlength % 8;
	unsigned int other = (val << 1) + 1;
	return val ^ (other / 1000);
}

} /* namespace VulpUtil */
