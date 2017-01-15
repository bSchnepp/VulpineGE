/*
 * Camera.cpp
 *
 *  Created on: Dec 28, 2016
 *      Author: brian-dev
 */

#include "Camera.h"
#include "../math/Vector3.h"

namespace Vulpine
{

Camera::Camera()
{
	this->position = new VulpUtil::Vector3(0.0, 0.0, 0.0);
	this->rotation = new VulpUtil::Vector3(0.0, 0.0, 0.0);

}

Camera::~Camera()
{
	delete this->position;
	delete this->rotation;
}

} /* namespace VulpUtil */
