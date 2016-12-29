/*
 * ConfigStates.h
 *
 *  Created on: Dec 27, 2016
 *      Author: brian-dev
 */

#ifndef UTIL_CONFIGSTATES_H_
#define UTIL_CONFIGSTATES_H_

namespace VulpUtil
{
	static const char* extension = ".fxs";
	static const wchar_t* location = L"/config/settings/";
	static const wchar_t* name = L"player-settings-";	//Append a number for every slot.
	static const int maxSlots = 4;
	static bool useHomeDir = true;	//Store in user's home directory
	static bool prependWithGameName = true;	//Create a folder with this game's name (defined in the .fox assets file) in home directory (Documents on MS-WINDOWS if someone else does the Win32 magic for me, I'm not touching it.)

	//Format to do so far I guess:
	/*
	 * [Graphics]
	 * fBloomVal = 55.241;
	 * fColorDampen = .0255;
	 *
	 * [Audio]
	 * iBoostAudio = 4;
	 * bUseStero = true;
	 *
	 *
	 * pretty much butchered hungarian notation, sort of like ini.
	 */
}



#endif /* UTIL_CONFIGSTATES_H_ */
