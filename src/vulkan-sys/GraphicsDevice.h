/*
 * GraphicsDevice.h
 *
 *  Created on: Jan 14, 2017
 *      Author: brian-dev
 *
 * Wrapper for our Vulkan stuff. This class will have an OpenGL equivalent in 'ogl-sys', under the same name, but with a different namespace.
 */

#ifndef VULKAN_SYS_GRAPHICSDEVICE_H_
#define VULKAN_SYS_GRAPHICSDEVICE_H_

#include <vulkan/vulkan.h>

namespace VulpVkRndr
{

class GraphicsDevice
{
public:
	GraphicsDevice();
	virtual ~GraphicsDevice();
private:
	VkPhysicalDevice* hardware;
	VkDevice* device;

	//TODOS:
	//something* malloc(stuff in here);
	//void free(pointer to vulkan stuff);
	//void generateBuffers(stuff);
	//void generateImage(stuff);

};

} /* namespace VulpRndr */

#endif /* VULKAN_SYS_GRAPHICSDEVICE_H_ */
