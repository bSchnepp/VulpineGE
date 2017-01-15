/*
 * GraphicsInstance.cpp
 *
 *  Created on: Jan 14, 2017
 *      Author: brian-dev
 */

#include "GraphicsInstance.h"
#include <vulkan/vulkan.h>
#include "../GraphicsSettings.h"

namespace VulpVkRndr
{

GraphicsInstance::GraphicsInstance()
{
	this->instance = nullptr; //vkCreateInstance(pCreateInfo, pAllocator, pInstance);
}

GraphicsInstance::~GraphicsInstance()
{
	// TODO Auto-generated destructor stub
}

} /* namespace VulpVkRndr */
