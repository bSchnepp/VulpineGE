/*
 * GraphicsInstance.h
 *
 *  Created on: Jan 14, 2017
 *      Author: brian-dev
 */

#ifndef VULKAN_SYS_GRAPHICSINSTANCE_H_
#define VULKAN_SYS_GRAPHICSINSTANCE_H_

#include <vulkan/vulkan.h>
#include "../GraphicsSettings.h"

#ifdef USE_VULKAN
namespace VulpVkRndr
{

class GraphicsInstance
{
public:
	GraphicsInstance();
	virtual ~GraphicsInstance();

private:
	VkInstance* instance;
};
#endif

} /* namespace VulpVkRndr */

#endif /* VULKAN_SYS_GRAPHICSINSTANCE_H_ */
