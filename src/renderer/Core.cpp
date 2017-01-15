/*
 * Core.cpp
 *
 *  Created on: Dec 27, 2016
 *      Author: brian-dev
 */

#include "Core.h"
#include <SDL2/SDL.h>
#include <SDL2/SDL_video.h>

#define DEVELOPMENT

namespace VulpRndr
{

Core::Core()
{
#ifdef DEVELOPMENT
	this->window = SDL_CreateWindow("Vulpine Renderer", 0, 0, 1280, 720, SDL_WINDOW_OPENGL);
	//???!!!
	//Attach Vulkan to SDL's created X11 window.
	//Make sure we pump graphics from the primary video card.
	//Utilize any secondary cards for things like physics, animations, etc.
	//Primary is *always* graphics. If we're starting to dip below monitor refresh rate,
	//THEN we let the secondary card render every other line on-screen.
	//We'll take advantage of Vulkan not using SLI/CrossFire.
	this->tcl = false;
#endif
}

Core::~Core()
{
	SDL_DestroyWindow(this->window);
	// TODO Auto-generated destructor stub
}

} /* namespace VulpGui */
