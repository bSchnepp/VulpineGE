/*
 * Camera.h
 *
 *  Created on: Dec 28, 2016
 *      Author: brian-dev
 */

#ifndef IGOBJECTS_CAMERA_H_
#define IGOBJECTS_CAMERA_H_

#include "../math/Vector3.h"

namespace Vulpine
{

class Camera
{
public:
	Camera();	//TODO, representation before we demand GPU to do things.
	virtual ~Camera();

private:
	VulpUtil::Vector3* position;
	VulpUtil::Vector3* rotation;

	float fov = 70.0;
};

} /* namespace VulpUtil */

#endif /* IGOBJECTS_CAMERA_H_ */
