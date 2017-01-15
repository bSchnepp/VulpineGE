/*
 * Core.h
 *
 *  Created on: Dec 27, 2016
 *      Author: brian-dev
 */

#ifndef RENDERER_CORE_H_
#define RENDERER_CORE_H_

#include <SDL2/SDL.h>

namespace VulpRndr
{

class Core
{
public:
	Core();
	virtual ~Core();

private:
	SDL_Window* window;	//Find a way to jury rig Vulkan onto SDL and pretend we're using GL. TODO

	bool tcl;	//Noclip (on during development, off when we inject into 'game.elf')
};

} /* namespace VulpGui */

#endif /* RENDERER_CORE_H_ */
